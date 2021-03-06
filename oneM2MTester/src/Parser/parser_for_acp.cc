/****************************************************************************************
* Copyright (c) 2017  Korea Electronics Technology Institute.				            *
* All rights reserved. This program and the accompanying materials			            *
* are made available under the terms of                                         	    *
* - Eclipse Public License v1.0(http://www.eclipse.org/legal/epl-v10.html),     	    *
* - BSD-3 Clause Licence(http://www.iotocean.org/license/),                    		    *
* - MIT License   (https://github.com/open-source-parsers/jsoncpp/blob/master/LICENSE), * 
* - zlib License  (https://github.com/leethomason/tinyxml2#license).                    *	
*											                                            *
* Contributors:										                                    *
*   JaeYoung Hwang   - forest62590@gmail.com                                   	        *
*   Nak-Myoung Sung  - nmsung@keti.re.kr                                       	        *
*   Updated:  2018-03-25                                                          	    *
****************************************************************************************/

#include <string>
#include "json.h"
#include "json-forwards.h"
#include "External_function.hh"
#include "OneM2M_DualFaceMapping.hh"

using namespace tinyxml2;
using namespace Json;
using namespace std;

namespace OneM2M__DualFaceMapping {
	CHARSTRING acp_JSON_Enc_Parser(const CHARSTRING& p__source){

		Value elemName;
		Value elemObj(objectValue);
		Value subElemObj(objectValue);
		Value resourceRoot(objectValue);
		Value jsonRoot(objectValue);

		Reader jsonReader;
		std::string name_short;

		const char* p_body			= (const char*)p__source;
		CHARSTRING encoded_message	= "";

		// 1. Make the JSOn object from the string data
		bool parsingSuccessful = jsonReader.parse(p_body, jsonRoot, false);
		if ( !parsingSuccessful ) {
			TTCN_Logger::log(TTCN_DEBUG, "JsonCPP API parsing error!");
			return "JsonCPP API parsing error!";
		}

		// 2. Save the root name "accessControlPolicy" -> m2m:acp (changed)"
		CHARSTRING rootName = "m2m:acp";

		// 3. extract the accessControlPolicy element
		jsonRoot = jsonRoot.get("accessControlPolicy", "");

		for (Value::iterator iter = jsonRoot.begin(); iter != jsonRoot.end(); ++iter) {
			elemName = iter.key();
			elemObj = jsonRoot.get(elemName.asString(), "");

			name_short = getShortName(elemName.asString());
			if(name_short == ""){
				name_short = elemName.asString();
			}

			if(elemObj.isObject()) { // object
				subElemObj = acp_JSON_Enc_Parser_Deep(elemObj, subElemObj, elemName);
			} else if (elemObj.isArray()) { // array
				Value elemArrayObj(arrayValue);

				for(unsigned int index = 0; index < elemObj.size(); index++){

					Value tempObj = elemObj[index];

					if(tempObj.isString()){
						elemArrayObj.append(tempObj.asString());
					}else if(tempObj.isBool()){
						elemArrayObj.append(tempObj.asBool());
					}else if(tempObj.isDouble()){
						elemArrayObj.append(tempObj.asDouble());
					}else if(tempObj.isInt64()){
						elemArrayObj.append(tempObj.asInt64());
					}
				}
				subElemObj[name_short.c_str()] = elemArrayObj;

			} else if (elemObj.isString()) { // string
				subElemObj[name_short.c_str()] = elemObj;
			}
		}

		resourceRoot[rootName] = subElemObj;
		TTCN_Logger::log(TTCN_DEBUG, "Pretty print of DECODED JSON message:\n%s", resourceRoot.toStyledString().c_str());

		StyledWriter writer;
		std::string json_str = writer.write(resourceRoot);

		CHARSTRING temp_cs(json_str.c_str());
		encoded_message	= temp_cs;

		return encoded_message;
	}

	Json::Value acp_JSON_Enc_Parser_Deep (Json::Value objectSource, Json::Value objectRoot, Json::Value elemName) {

		// Constant variables for the resource and attributes name
		static const std::string ACCESS_CONTROL_OPERATION("acop"), ACCESS_CONTROL_RULE("acr");

		std::string name_short;
		std::string rootName;

		Value subElemObj(objectValue);
		Value containerForSubElem(objectValue);

		for (Value::iterator iter = objectSource.begin(); iter != objectSource.end(); ++iter) {

			Value elemName;
			Value elemObj(objectValue);

			// 1. Select the attribute with KEY
			elemName = iter.key();
			elemObj = objectSource.get(elemName.asString(), "");

			// 2. Change the oneM2M long name to short name for SUT
			name_short = getShortName(elemName.asString());
			if(name_short == ""){
				name_short = elemName.asString();
			}

			// CHARSTRING tmp_for_name_checking(elemName.asCString());
			// TTCN_Logger::log(TTCN_DEBUG, "**************root*********************");
			// TTCN_Logger::log(TTCN_DEBUG, (const char*)tmp_for_name_checking);
			// TTCN_Logger::log(TTCN_DEBUG, "**************root*********************\n");

			if (elemObj.isArray()) { // array
				Value elemArrayObj(arrayValue);

				if(elemObj.size() != 0) {
					for(unsigned int index = 0; index < elemObj.size(); index++){

						Value tempObj = elemObj[index];

						if (tempObj.isObject()) {
							Value subElemObj(objectValue);
							subElemObj = acp_JSON_Enc_Parser_Deep(tempObj, subElemObj, elemName);
							elemArrayObj.append(subElemObj);
						} else if(tempObj.isString()){
							elemArrayObj.append(tempObj);
						} else if (tempObj.isBool()){
							elemArrayObj.append(tempObj.asBool());
						} else if (tempObj.isDouble()){
							int convertedIntValue = float2int(tempObj.asDouble());
							std::string tmp_str((const char*)(int2str(convertedIntValue)));
							std::string attr_val = getLongName(tmp_str);
							elemArrayObj.append(attr_val);
						} else if(tempObj.isInt64()){
							std::string tmp_str((const char*)(int2str(tempObj.asInt())));
							std::string attr_val = getLongName(tmp_str);
							elemArrayObj.append(tempObj.asInt());
						} else {
							TTCN_Logger::log(TTCN_DEBUG, "Unexpected flow");
						}
					}
					containerForSubElem[name_short.c_str()] = elemArrayObj;
				}
			} else if(elemObj.isString()) { // string
				if(ACCESS_CONTROL_OPERATION == name_short){ // add all enumerated type here
					std::string attr_val = getShortName(elemObj.asString());
					int tmp_int = atoi(attr_val.c_str());
					containerForSubElem[name_short.c_str()] = tmp_int;
				} else {
					containerForSubElem[name_short.c_str()] = elemObj;
				}
			}
		}

		// 3. RootName: Change the oneM2M short name to long name for the TTCN-3
		rootName = getShortName(elemName.asString());
		if(rootName == ""){
			rootName = elemName.asString();
		}

		if(rootName != ACCESS_CONTROL_RULE) {
			objectRoot[rootName.c_str()] = containerForSubElem;
			return objectRoot;
		} else {
			return containerForSubElem;
		}
	}
}
