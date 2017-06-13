// This C++ source file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R1A
// for oneM2MTester (martin@ubuntu) on Wed May 31 13:52:13 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

/* Including header files */

#include "OneM2M_Primitive_EncDec.hh"

namespace OneM2M__Primitive__EncDec {

/* Prototypes of static functions */

static void pre_init_module();
static void post_init_module();

/* Literal string constants */

static const BITSTRING bs_0(0, NULL);
static const OCTETSTRING os_0(0, NULL);
static const CHARSTRING cs_0(0, NULL);
static const unsigned char module_checksum[] = { 0x2d, 0x04, 0x72, 0x25, 0x89, 0xfe, 0x94, 0x3b, 0x62, 0x58, 0xbc, 0x2a, 0xac, 0xba, 0x54, 0x05 };

/* Global variable definitions */

static const size_t num_namespaces = 1;
static const namespace_t xml_namespaces[num_namespaces+1] = {
  { NULL, NULL },
  { "", "" }
};

TTCN_Module module_object("OneM2M_Primitive_EncDec", __DATE__, __TIME__, module_checksum, pre_init_module, NULL, 0U, 4294967295U, 4294967295U, 4294967295U, NULL, 1LU, xml_namespaces, post_init_module, NULL, NULL, NULL, NULL, NULL, NULL);

static const RuntimeVersionChecker ver_checker(  current_runtime_version.requires_major_version_6,
  current_runtime_version.requires_minor_version_1,
  current_runtime_version.requires_patch_level_0,  current_runtime_version.requires_runtime_1);

/* Bodies of functions, altsteps and testcases */

OCTETSTRING f__enc__XER__resourcePrimitive(const OneM2M__Types::anytype& p__primitive)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_XER_resourcePrimitive(): Encoding @OneM2M_Types.anytype: ");
p__primitive.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_DEFAULT);
TTCN_Buffer ttcn_buffer;
p__primitive.encode(OneM2M__Types::Contents_0_descr_, ttcn_buffer, TTCN_EncDec::CT_XER, XER_EXTENDED);
OCTETSTRING ret_val;
ttcn_buffer.get_string(ret_val);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_XER_resourcePrimitive(): Stream after encoding: ");
ret_val.log();
TTCN_Logger::end_event();
}
return ret_val;
}

OCTETSTRING f__enc__XER__requestPrimitive(const OneM2M__Types::RequestPrimitive& p__du)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_XER_requestPrimitive(): Encoding @OneM2M_Types.RequestPrimitive: ");
p__du.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_DEFAULT);
TTCN_Buffer ttcn_buffer;
p__du.encode(OneM2M__Types::RequestPrimitive_descr_, ttcn_buffer, TTCN_EncDec::CT_XER, XER_EXTENDED);
OCTETSTRING ret_val;
ttcn_buffer.get_string(ret_val);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_XER_requestPrimitive(): Stream after encoding: ");
ret_val.log();
TTCN_Logger::end_event();
}
return ret_val;
}

OCTETSTRING f__enc__XER__responsePrimitive(const OneM2M__Types::ResponsePrimitive& p__du)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_XER_responsePrimitive(): Encoding @OneM2M_Types.ResponsePrimitive: ");
p__du.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_DEFAULT);
TTCN_Buffer ttcn_buffer;
p__du.encode(OneM2M__Types::ResponsePrimitive_descr_, ttcn_buffer, TTCN_EncDec::CT_XER, XER_EXTENDED);
OCTETSTRING ret_val;
ttcn_buffer.get_string(ret_val);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_XER_responsePrimitive(): Stream after encoding: ");
ret_val.log();
TTCN_Logger::end_event();
}
return ret_val;
}

INTEGER f__dec__XER__resourcePrimitive(const OCTETSTRING& p__stream, OneM2M__Types::PrimitiveContent& p__decodedValue)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_XER_resourcePrimitive(): Stream before decoding: ");
p__stream.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_WARNING);
TTCN_EncDec::clear_error();
TTCN_Buffer ttcn_buffer(p__stream);
p__decodedValue.decode(OneM2M__Types::PrimitiveContent_descr_, ttcn_buffer, TTCN_EncDec::CT_XER, XER_EXTENDED);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_XER_resourcePrimitive(): Decoded @OneM2M_Types.PrimitiveContent: ");
p__decodedValue.log();
TTCN_Logger::end_event();
}
if (TTCN_EncDec::get_last_error_type() == TTCN_EncDec::ET_NONE) {
if (ttcn_buffer.get_pos() < ttcn_buffer.get_len()-1 && TTCN_Logger::log_this_event(TTCN_WARNING)) {
ttcn_buffer.cut();
OCTETSTRING remaining_stream;
ttcn_buffer.get_string(remaining_stream);
TTCN_Logger::begin_event(TTCN_WARNING);
TTCN_Logger::log_event_str("f_dec_XER_resourcePrimitive(): Warning: Data remained at the end of the stream after successful decoding: ");
remaining_stream.log();
TTCN_Logger::end_event();
}
return 0;
} else {
return 1;
}
}

OneM2M__Types::RequestPrimitive f__dec__XER__requestPrimitive(const OCTETSTRING& p__stream)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_XER_requestPrimitive(): Stream before decoding: ");
p__stream.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_WARNING);
TTCN_EncDec::clear_error();
TTCN_Buffer ttcn_buffer(p__stream);
OneM2M__Types::RequestPrimitive ret_val;
ret_val.decode(OneM2M__Types::RequestPrimitive_descr_, ttcn_buffer, TTCN_EncDec::CT_XER, XER_EXTENDED);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_XER_requestPrimitive(): Decoded @OneM2M_Types.RequestPrimitive: ");
ret_val.log();
TTCN_Logger::end_event();
}
if (TTCN_EncDec::get_last_error_type() == TTCN_EncDec::ET_NONE) {
if (ttcn_buffer.get_pos() < ttcn_buffer.get_len()-1 && TTCN_Logger::log_this_event(TTCN_WARNING)) {
ttcn_buffer.cut();
OCTETSTRING remaining_stream;
ttcn_buffer.get_string(remaining_stream);
TTCN_Logger::begin_event(TTCN_WARNING);
TTCN_Logger::log_event_str("f_dec_XER_requestPrimitive(): Warning: Data remained at the end of the stream after successful decoding: ");
remaining_stream.log();
TTCN_Logger::end_event();
}
}
return ret_val;
}

OneM2M__Types::ResponsePrimitive f__dec__XER__responsePrimitive(const OCTETSTRING& p__stream)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_XER_responsePrimitive(): Stream before decoding: ");
p__stream.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_WARNING);
TTCN_EncDec::clear_error();
TTCN_Buffer ttcn_buffer(p__stream);
OneM2M__Types::ResponsePrimitive ret_val;
ret_val.decode(OneM2M__Types::ResponsePrimitive_descr_, ttcn_buffer, TTCN_EncDec::CT_XER, XER_EXTENDED);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_XER_responsePrimitive(): Decoded @OneM2M_Types.ResponsePrimitive: ");
ret_val.log();
TTCN_Logger::end_event();
}
if (TTCN_EncDec::get_last_error_type() == TTCN_EncDec::ET_NONE) {
if (ttcn_buffer.get_pos() < ttcn_buffer.get_len()-1 && TTCN_Logger::log_this_event(TTCN_WARNING)) {
ttcn_buffer.cut();
OCTETSTRING remaining_stream;
ttcn_buffer.get_string(remaining_stream);
TTCN_Logger::begin_event(TTCN_WARNING);
TTCN_Logger::log_event_str("f_dec_XER_responsePrimitive(): Warning: Data remained at the end of the stream after successful decoding: ");
remaining_stream.log();
TTCN_Logger::end_event();
}
}
return ret_val;
}

OCTETSTRING f__enc__JSON__resourcePrimitive(const OneM2M__Types::PrimitiveContent& p__primitive)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_JSON_resourcePrimitive(): Encoding @OneM2M_Types.PrimitiveContent: ");
p__primitive.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_DEFAULT);
TTCN_Buffer ttcn_buffer;
p__primitive.encode(OneM2M__Types::PrimitiveContent_descr_, ttcn_buffer, TTCN_EncDec::CT_JSON, 1);
OCTETSTRING ret_val;
ttcn_buffer.get_string(ret_val);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_JSON_resourcePrimitive(): Stream after encoding: ");
ret_val.log();
TTCN_Logger::end_event();
}
return ret_val;
}

OCTETSTRING f__enc__JSON__requestPrimitive(const OneM2M__Types::RequestPrimitive& p__du)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_JSON_requestPrimitive(): Encoding @OneM2M_Types.RequestPrimitive: ");
p__du.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_DEFAULT);
TTCN_Buffer ttcn_buffer;
p__du.encode(OneM2M__Types::RequestPrimitive_descr_, ttcn_buffer, TTCN_EncDec::CT_JSON, 1);
OCTETSTRING ret_val;
ttcn_buffer.get_string(ret_val);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_JSON_requestPrimitive(): Stream after encoding: ");
ret_val.log();
TTCN_Logger::end_event();
}
return ret_val;
}

OCTETSTRING f__enc__JSON__responsePrimitive(const OneM2M__Types::ResponsePrimitive& p__du)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_JSON_responsePrimitive(): Encoding @OneM2M_Types.ResponsePrimitive: ");
p__du.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_DEFAULT);
TTCN_Buffer ttcn_buffer;
p__du.encode(OneM2M__Types::ResponsePrimitive_descr_, ttcn_buffer, TTCN_EncDec::CT_JSON, 1);
OCTETSTRING ret_val;
ttcn_buffer.get_string(ret_val);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_enc_JSON_responsePrimitive(): Stream after encoding: ");
ret_val.log();
TTCN_Logger::end_event();
}
return ret_val;
}

INTEGER f__dec__JSON__resourcePrimitive(const OCTETSTRING& p__stream, OneM2M__Types::PrimitiveContent& p__decodedValue)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_JSON_resourcePrimitive(): Stream before decoding: ");
p__stream.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_WARNING);
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_INVAL_MSG, TTCN_EncDec::EB_ERROR);
TTCN_EncDec::clear_error();
TTCN_Buffer ttcn_buffer(p__stream);
p__decodedValue.decode(OneM2M__Types::PrimitiveContent_descr_, ttcn_buffer, TTCN_EncDec::CT_JSON);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_JSON_resourcePrimitive(): Decoded @OneM2M_Types.PrimitiveContent: ");
p__decodedValue.log();
TTCN_Logger::end_event();
}
if (TTCN_EncDec::get_last_error_type() == TTCN_EncDec::ET_NONE) {
if (ttcn_buffer.get_pos() < ttcn_buffer.get_len()-1 && TTCN_Logger::log_this_event(TTCN_WARNING)) {
ttcn_buffer.cut();
OCTETSTRING remaining_stream;
ttcn_buffer.get_string(remaining_stream);
TTCN_Logger::begin_event(TTCN_WARNING);
TTCN_Logger::log_event_str("f_dec_JSON_resourcePrimitive(): Warning: Data remained at the end of the stream after successful decoding: ");
remaining_stream.log();
TTCN_Logger::end_event();
}
return 0;
} else {
return 1;
}
}

INTEGER f__dec__JSON__requestPrimitive(const OCTETSTRING& p__stream, OneM2M__Types::RequestPrimitive& p__req)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_JSON_requestPrimitive(): Stream before decoding: ");
p__stream.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_WARNING);
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_INVAL_MSG, TTCN_EncDec::EB_ERROR);
TTCN_EncDec::clear_error();
TTCN_Buffer ttcn_buffer(p__stream);
p__req.decode(OneM2M__Types::RequestPrimitive_descr_, ttcn_buffer, TTCN_EncDec::CT_JSON);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_JSON_requestPrimitive(): Decoded @OneM2M_Types.RequestPrimitive: ");
p__req.log();
TTCN_Logger::end_event();
}
if (TTCN_EncDec::get_last_error_type() == TTCN_EncDec::ET_NONE) {
if (ttcn_buffer.get_pos() < ttcn_buffer.get_len()-1 && TTCN_Logger::log_this_event(TTCN_WARNING)) {
ttcn_buffer.cut();
OCTETSTRING remaining_stream;
ttcn_buffer.get_string(remaining_stream);
TTCN_Logger::begin_event(TTCN_WARNING);
TTCN_Logger::log_event_str("f_dec_JSON_requestPrimitive(): Warning: Data remained at the end of the stream after successful decoding: ");
remaining_stream.log();
TTCN_Logger::end_event();
}
return 0;
} else {
return 1;
}
}

INTEGER f__dec__JSON__responsePrimitive(const OCTETSTRING& p__stream, OneM2M__Types::ResponsePrimitive& p__req)
{
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_JSON_responsePrimitive(): Stream before decoding: ");
p__stream.log();
TTCN_Logger::end_event();
}
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_ALL, TTCN_EncDec::EB_WARNING);
TTCN_EncDec::set_error_behavior(TTCN_EncDec::ET_INVAL_MSG, TTCN_EncDec::EB_ERROR);
TTCN_EncDec::clear_error();
TTCN_Buffer ttcn_buffer(p__stream);
p__req.decode(OneM2M__Types::ResponsePrimitive_descr_, ttcn_buffer, TTCN_EncDec::CT_JSON);
if (TTCN_Logger::log_this_event(TTCN_Logger::DEBUG_ENCDEC)) {
TTCN_Logger::begin_event(TTCN_Logger::DEBUG_ENCDEC);
TTCN_Logger::log_event_str("f_dec_JSON_responsePrimitive(): Decoded @OneM2M_Types.ResponsePrimitive: ");
p__req.log();
TTCN_Logger::end_event();
}
if (TTCN_EncDec::get_last_error_type() == TTCN_EncDec::ET_NONE) {
if (ttcn_buffer.get_pos() < ttcn_buffer.get_len()-1 && TTCN_Logger::log_this_event(TTCN_WARNING)) {
ttcn_buffer.cut();
OCTETSTRING remaining_stream;
ttcn_buffer.get_string(remaining_stream);
TTCN_Logger::begin_event(TTCN_WARNING);
TTCN_Logger::log_event_str("f_dec_JSON_responsePrimitive(): Warning: Data remained at the end of the stream after successful decoding: ");
remaining_stream.log();
TTCN_Logger::end_event();
}
return 0;
} else {
return 1;
}
}

CHARSTRING f__encode__requestPrimitive(const OneM2M__Types::RequestPrimitive& p__reqp, const CHARSTRING& v__serial__type)
{
TTCN_Location current_location("OneM2M_Primitive_EncDec.ttcn", 103, TTCN_Location::LOCATION_FUNCTION, "f_encode_requestPrimitive");
current_location.update_lineno(105);
/* OneM2M_Primitive_EncDec.ttcn, line 105 */
OCTETSTRING v__stream__any;
current_location.update_lineno(106);
/* OneM2M_Primitive_EncDec.ttcn, line 106 */
CHARSTRING v__char;
current_location.update_lineno(107);
/* OneM2M_Primitive_EncDec.ttcn, line 107 */
OneM2M__Types::RequestPrimitive v__reqPrimitive(p__reqp);
current_location.update_lineno(109);
/* OneM2M_Primitive_EncDec.ttcn, line 109 */
{
boolean tmp_3;
{
boolean tmp_0 = v__reqPrimitive.is_bound();
if(tmp_0) {
const OPTIONAL<OneM2M__Types::PrimitiveContent>& tmp_1 = v__reqPrimitive.primitiveContent();
switch (tmp_1.get_selection()) {
case OPTIONAL_UNBOUND:
tmp_0 = FALSE;
break;
case OPTIONAL_OMIT:
tmp_0 = FALSE;
break;
default:
{
const OneM2M__Types::PrimitiveContent& tmp_2 = (const OneM2M__Types::PrimitiveContent&) tmp_1;
tmp_0 = tmp_2.is_present();
break;}
}
}
tmp_3 = tmp_0;
}
if (tmp_3) {
current_location.update_lineno(111);
/* OneM2M_Primitive_EncDec.ttcn, line 111 */
if ((OneM2M__Constants::JSON__SERIAL == v__serial__type)) {
current_location.update_lineno(114);
/* OneM2M_Primitive_EncDec.ttcn, line 114 */
v__stream__any = f__enc__JSON__resourcePrimitive(const_cast< const OneM2M__Types::RequestPrimitive&>(v__reqPrimitive).primitiveContent());
}
else {
current_location.update_lineno(116);
/* OneM2M_Primitive_EncDec.ttcn, line 116 */
if ((OneM2M__Constants::XML__SERIAL == v__serial__type)) {
current_location.update_lineno(124);
/* OneM2M_Primitive_EncDec.ttcn, line 124 */
BITSTRING v__bit__stream;
{
OCTETSTRING tmp_5;
TTCN_Buffer tmp_6;
OneM2M__Types::anytype const& tmp_7 = const_cast< const OneM2M__Types::RequestPrimitive&>(v__reqPrimitive).primitiveContent()().any__1()[0];
tmp_7.encode(OneM2M__Types::anytype_descr_, tmp_6, TTCN_EncDec::CT_XER, XER_EXTENDED);
tmp_6.get_string(tmp_5);
v__bit__stream = oct2bit(tmp_5);
}
current_location.update_lineno(125);
/* OneM2M_Primitive_EncDec.ttcn, line 125 */
if ((v__bit__stream != bs_0)) {
current_location.update_lineno(126);
/* OneM2M_Primitive_EncDec.ttcn, line 126 */
v__stream__any = bit2oct(v__bit__stream);
current_location.update_lineno(127);
/* OneM2M_Primitive_EncDec.ttcn, line 127 */
try {
TTCN_Logger::begin_event(TTCN_USER);
TTCN_Logger::log_event_str("f_encode_requestPrimitive V_STEAM_ANY converted from bitstring");
v__stream__any.log();
TTCN_Logger::end_event();
} catch (...) {
TTCN_Logger::finish_event();
throw;
}
}
}
else {
current_location.update_lineno(132);
/* OneM2M_Primitive_EncDec.ttcn, line 132 */
TTCN_Logger::log_str(TTCN_USER, "f_encode_requestPrimitive[Warning]NOT SUPPORTED SERIALIZATION TYPE !! \n");
}
}
current_location.update_lineno(135);
/* OneM2M_Primitive_EncDec.ttcn, line 135 */
if ((v__stream__any != os_0)) {
current_location.update_lineno(136);
/* OneM2M_Primitive_EncDec.ttcn, line 136 */
v__char = oct2char(v__stream__any);
current_location.update_lineno(137);
/* OneM2M_Primitive_EncDec.ttcn, line 137 */
return v__char;
}
else {
current_location.update_lineno(140);
/* OneM2M_Primitive_EncDec.ttcn, line 140 */
return cs_0;
}
}
else {
current_location.update_lineno(145);
/* OneM2M_Primitive_EncDec.ttcn, line 145 */
TTCN_Logger::log_str(TTCN_USER, "f_encode_requestPrimitive [Warning]No primitive to encode!!");
current_location.update_lineno(146);
/* OneM2M_Primitive_EncDec.ttcn, line 146 */
return cs_0;
}
}
}


/* Bodies of static functions */

static void pre_init_module()
{
TTCN_Location current_location("OneM2M_Primitive_EncDec.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "OneM2M_Primitive_EncDec");
OneM2M__Types::module_object.pre_init_module();
OneM2M__Constants::module_object.pre_init_module();
module_object.add_function("f_enc_XER_resourcePrimitive", (genericfunc_t)&f__enc__XER__resourcePrimitive, NULL);
module_object.add_function("f_enc_XER_requestPrimitive", (genericfunc_t)&f__enc__XER__requestPrimitive, NULL);
module_object.add_function("f_enc_XER_responsePrimitive", (genericfunc_t)&f__enc__XER__responsePrimitive, NULL);
module_object.add_function("f_dec_XER_resourcePrimitive", (genericfunc_t)&f__dec__XER__resourcePrimitive, NULL);
module_object.add_function("f_dec_XER_requestPrimitive", (genericfunc_t)&f__dec__XER__requestPrimitive, NULL);
module_object.add_function("f_dec_XER_responsePrimitive", (genericfunc_t)&f__dec__XER__responsePrimitive, NULL);
module_object.add_function("f_enc_JSON_resourcePrimitive", (genericfunc_t)&f__enc__JSON__resourcePrimitive, NULL);
module_object.add_function("f_enc_JSON_requestPrimitive", (genericfunc_t)&f__enc__JSON__requestPrimitive, NULL);
module_object.add_function("f_enc_JSON_responsePrimitive", (genericfunc_t)&f__enc__JSON__responsePrimitive, NULL);
module_object.add_function("f_dec_JSON_resourcePrimitive", (genericfunc_t)&f__dec__JSON__resourcePrimitive, NULL);
module_object.add_function("f_dec_JSON_requestPrimitive", (genericfunc_t)&f__dec__JSON__requestPrimitive, NULL);
module_object.add_function("f_dec_JSON_responsePrimitive", (genericfunc_t)&f__dec__JSON__responsePrimitive, NULL);
module_object.add_function("f_encode_requestPrimitive", (genericfunc_t)&f__encode__requestPrimitive, NULL);
}

static void post_init_module()
{
TTCN_Location current_location("OneM2M_Primitive_EncDec.ttcn", 0, TTCN_Location::LOCATION_UNKNOWN, "OneM2M_Primitive_EncDec");
OneM2M__Types::module_object.post_init_module();
OneM2M__Constants::module_object.post_init_module();
}


} /* end of namespace */
