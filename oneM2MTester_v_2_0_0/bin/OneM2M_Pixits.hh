// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R1A
// for oneM2MTester (martin@ubuntu) on Wed May 31 13:52:13 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef OneM2M__Pixits_HH
#define OneM2M__Pixits_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "OneM2M_Types.hh"

#if TTCN3_VERSION != 60100
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace OneM2M__Pixits {

/* Global variable declarations */

extern const BOOLEAN& PX__DELETE__CREATED__RESOURCES;
extern const UNIVERSAL_CHARSTRING& PX__RESOURCE__TO__BE__DELETED;
extern const XSD::IDREFS& PX__RESOURCES__TO__BE__DELETED;
extern const CHARSTRING& PX__SUT__ADDRESS;
extern const CHARSTRING& PX__AE1__ADDRESS;
extern const CHARSTRING& PX__AE2__ADDRESS;
extern const CHARSTRING& PX__CSE1__ADDRESS;
extern const CHARSTRING& PX__XML__NAMESPACE;
extern const UNIVERSAL_CHARSTRING& PX__CSE__NAME;
extern const UNIVERSAL_CHARSTRING& PX__CSE__ID;
extern const UNIVERSAL_CHARSTRING& PX__CSE__RESOURCE__ID;
extern const BOOLEAN& PX__UNSTRUCTURED;
extern const UNIVERSAL_CHARSTRING& PX__AE1__ID__STEM;
extern const UNIVERSAL_CHARSTRING& PX__AE2__ID__STEM;
extern const UNIVERSAL_CHARSTRING& PX__SUPER__USER;
extern const UNIVERSAL_CHARSTRING& PX__APP__ID;
extern const BOOLEAN& PX__RUN__POSTAMBLE;
extern const OneM2M__Types::ListOfURIs& PX__ACOR;
extern const OneM2M__Types::AddressingFormat& PX__ADDRESSING__FORMAT;
extern const CHARSTRING& PX__SERIALIZATION;
extern const CHARSTRING& PX__PROTOCOL__BINDING;
extern const BOOLEAN& PX__FROM__IS__AE__ID;
extern const BOOLEAN& PX__IUT__IS__ASN__CSE;
extern const BOOLEAN& PX__IUT__IS__MN__CSE;
extern const UNIVERSAL_CHARSTRING& PX__LOCATION__TARGET__ID;
extern const UNIVERSAL_CHARSTRING& PX__LOCATION__SERVER__ADDRESS;
extern const CHARSTRING& PX__LOCATION__UPDATE__PERIOD;
extern const CHARSTRING& PX__LOCATION__CONTAINER__NAME;
extern const OneM2M__Types::Labels& PX__LABELS;
extern const BOOLEAN& PX__IS__LOC__CONTAINER;
extern TTCN_Module module_object;

} /* end of namespace */

#endif
