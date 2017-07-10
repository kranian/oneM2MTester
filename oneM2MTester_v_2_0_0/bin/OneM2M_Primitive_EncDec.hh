// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R1A
// for oneM2MTester (martin@ubuntu) on Wed May 31 13:52:13 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef OneM2M__Primitive__EncDec_HH
#define OneM2M__Primitive__EncDec_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "OneM2M_Types.hh"
#include "OneM2M_Constants.hh"

#if TTCN3_VERSION != 60100
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace OneM2M__Primitive__EncDec {

/* Function prototypes */

extern OCTETSTRING f__enc__XER__resourcePrimitive(const OneM2M__Types::anytype& p__primitive);
extern OCTETSTRING f__enc__XER__requestPrimitive(const OneM2M__Types::RequestPrimitive& p__du);
extern OCTETSTRING f__enc__XER__responsePrimitive(const OneM2M__Types::ResponsePrimitive& p__du);
extern INTEGER f__dec__XER__resourcePrimitive(const OCTETSTRING& p__stream, OneM2M__Types::PrimitiveContent& p__decodedValue);
extern OneM2M__Types::RequestPrimitive f__dec__XER__requestPrimitive(const OCTETSTRING& p__stream);
extern OneM2M__Types::ResponsePrimitive f__dec__XER__responsePrimitive(const OCTETSTRING& p__stream);
extern OCTETSTRING f__enc__JSON__resourcePrimitive(const OneM2M__Types::PrimitiveContent& p__primitive);
extern OCTETSTRING f__enc__JSON__requestPrimitive(const OneM2M__Types::RequestPrimitive& p__du);
extern OCTETSTRING f__enc__JSON__responsePrimitive(const OneM2M__Types::ResponsePrimitive& p__du);
extern INTEGER f__dec__JSON__resourcePrimitive(const OCTETSTRING& p__stream, OneM2M__Types::PrimitiveContent& p__decodedValue);
extern INTEGER f__dec__JSON__requestPrimitive(const OCTETSTRING& p__stream, OneM2M__Types::RequestPrimitive& p__req);
extern INTEGER f__dec__JSON__responsePrimitive(const OCTETSTRING& p__stream, OneM2M__Types::ResponsePrimitive& p__req);
extern CHARSTRING f__encode__requestPrimitive(const OneM2M__Types::RequestPrimitive& p__reqp, const CHARSTRING& v__serial__type);

/* Global variable declarations */

extern TTCN_Module module_object;

} /* end of namespace */

#endif