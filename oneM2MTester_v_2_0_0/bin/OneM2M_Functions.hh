// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R1A
// for oneM2MTester (martin@ubuntu) on Wed May 31 13:52:13 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef OneM2M__Functions_HH
#define OneM2M__Functions_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "OneM2M_Templates.hh"
#include "OneM2M_Pics.hh"

#if TTCN3_VERSION != 60100
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace OneM2M__Functions {

/* Function prototypes */

extern void f__cf01Up();
extern void start_f__cf01Up(const COMPONENT& component_reference);
extern void f__cf02Up();
extern void start_f__cf02Up(const COMPONENT& component_reference);
extern void f__cf03Up();
extern void start_f__cf03Up(const COMPONENT& component_reference);
extern void f__cfCseTesterDown();
extern void start_f__cfCseTesterDown(const COMPONENT& component_reference);
extern void f__cfAeTesterDown();
extern void start_f__cfAeTesterDown(const COMPONENT& component_reference);
extern void f__cf01Down();
extern void start_f__cf01Down(const COMPONENT& component_reference);
extern void f__cf02Down();
extern void start_f__cf02Down(const COMPONENT& component_reference);
extern void f__cf03Down();
extern void start_f__cf03Down(const COMPONENT& component_reference);
extern INTEGER f__cse__preamble__createAcpAux(const UNIVERSAL_CHARSTRING_template& p__acpName, const OneM2M__Types::AccessControlOperations_template& p__allowedOperations);
extern void start_f__cse__preamble__createAcpAux(const COMPONENT& component_reference, const UNIVERSAL_CHARSTRING_template& p__acpName, const OneM2M__Types::AccessControlOperations_template& p__allowedOperations);
extern INTEGER f__cse__preamble__registerAe(const OneM2M__Types::AcpType_template& p__accessControlPolicyIDs, const OneM2M__Types::PoaList_template& p__poaList);
extern void start_f__cse__preamble__registerAe(const COMPONENT& component_reference, const OneM2M__Types::AcpType_template& p__accessControlPolicyIDs, const OneM2M__Types::PoaList_template& p__poaList);
extern INTEGER f__cse__preamble__registerAeWithId(const UNIVERSAL_CHARSTRING& p__appId, const OneM2M__Types::AccessControlOperations_template& p__allowedOperations);
extern void start_f__cse__preamble__registerAeWithId(const COMPONENT& component_reference, const UNIVERSAL_CHARSTRING& p__appId, const OneM2M__Types::AccessControlOperations_template& p__allowedOperations);
extern INTEGER f__cse__preamble__createServiceSubscribedAppRule(const OneM2M__Types::ListOfM2MID_template& p__allowedAEs);
extern void start_f__cse__preamble__createServiceSubscribedAppRule(const COMPONENT& component_reference, const OneM2M__Types::ListOfM2MID_template& p__allowedAEs);
extern void f__cse__preamble__subscriptionVerification(COMPONENT& p__notifyHandler, const INTEGER& p__aeIndex, INTEGER& p__ae2Index, OneM2M__Types::RequestPrimitive_template& p__createRequestPrimitive, const OneM2M__Types::ResourceType& p__resourceType);
extern void f__cse__postamble__deleteResources();
extern void start_f__cse__postamble__deleteResources(const COMPONENT& component_reference);
extern void f__cse__postamble__default();
extern void start_f__cse__postamble__default(const COMPONENT& component_reference);
extern void f__is__component__done(const COMPONENT& p__notifyHandler);
extern void start_f__is__component__done(const COMPONENT& component_reference, const COMPONENT& p__notifyHandler);
extern INTEGER f__cse__createResource(const OneM2M__Types::ResourceType& p__resourceType, const OneM2M__Types::RequestPrimitive_template& p__requestPrimitive, const INTEGER& p__parentIndex);
extern void start_f__cse__createResource(const COMPONENT& component_reference, const OneM2M__Types::ResourceType& p__resourceType, const OneM2M__Types::RequestPrimitive_template& p__requestPrimitive, const INTEGER& p__parentIndex);
extern INTEGER f__cse__createAccessControlPolicyAux(const UNIVERSAL_CHARSTRING_template& p__acpName, const OneM2M__Types::AccessControlOperations_template& p__allowedOperations);
extern void start_f__cse__createAccessControlPolicyAux(const COMPONENT& component_reference, const UNIVERSAL_CHARSTRING_template& p__acpName, const OneM2M__Types::AccessControlOperations_template& p__allowedOperations);
extern INTEGER f__cse__createContainerResourceAux(const INTEGER& p__parentIndex);
extern void start_f__cse__createContainerResourceAux(const COMPONENT& component_reference, const INTEGER& p__parentIndex);
extern void f__cse__updateResource(const OneM2M__Types::RequestPrimitive& p__requestPrimitive);
extern void start_f__cse__updateResource(const COMPONENT& component_reference, const OneM2M__Types::RequestPrimitive& p__requestPrimitive);
extern OneM2M__Types::PrimitiveContent f__cse__retrieveResource(const INTEGER& p__resourceIndex);
extern void start_f__cse__retrieveResource(const COMPONENT& component_reference, const INTEGER& p__resourceIndex);
extern void f__cse__deleteResource(const OneM2M__Types::RequestPrimitive& p__requestPrimitive);
extern void start_f__cse__deleteResource(const COMPONENT& component_reference, const OneM2M__Types::RequestPrimitive& p__requestPrimitive);
extern void f__cse__updateAcpAuxResource(const OneM2M__Types::AccessControlOperations_template& p__allowedOperations);
extern void start_f__cse__updateAcpAuxResource(const COMPONENT& component_reference, const OneM2M__Types::AccessControlOperations_template& p__allowedOperations);
extern void f__cse__resourceAnnouncementHandler(const UNIVERSAL_CHARSTRING_template& p__from, const UNIVERSAL_CHARSTRING_template& p__to);
extern void start_f__cse__resourceAnnouncementHandler(const COMPONENT& component_reference, const UNIVERSAL_CHARSTRING_template& p__from, const UNIVERSAL_CHARSTRING_template& p__to);
extern void f__subscriptionVerificationHandler(const UNIVERSAL_CHARSTRING& , const OneM2M__Types::ResponseStatusCode& p__responseStatusCode);
extern void start_f__subscriptionVerificationHandler(const COMPONENT& component_reference, const UNIVERSAL_CHARSTRING& p__creator, const OneM2M__Types::ResponseStatusCode& p__responseStatusCode);
extern void f__checkAttributesToBeSaved(const OneM2M__Types::ResourceType& p__resourceType, const OneM2M__Types::RequestPrimitive& p__request, OneM2M__Types::ResponsePrimitive& p__response);
extern BOOLEAN f__check__notificationContent(const OneM2M__Types::RequestPrimitive& p__requestPrimitive, const OneM2M__Types::PrimitiveContent_template& p__primitiveContent);
extern void start_f__check__notificationContent(const COMPONENT& component_reference, const OneM2M__Types::RequestPrimitive& p__requestPrimitive, const OneM2M__Types::PrimitiveContent_template& p__primitiveContent);
extern void f__cse__notifyProcedure(const OneM2M__Types::PrimitiveContent_template& p__primitiveContent);
extern void start_f__cse__notifyProcedure(const COMPONENT& component_reference, const OneM2M__Types::PrimitiveContent_template& p__primitiveContent);
extern alt_status a__cse__cf01_instance();
extern void a__cse__cf01();
extern Default_Base *activate_a__cse__cf01();
extern alt_status a__cse__cf02_instance();
extern void a__cse__cf02();
extern Default_Base *activate_a__cse__cf02();
extern INTEGER f__ae__preamble__registerAe();
extern void start_f__ae__preamble__registerAe(const COMPONENT& component_reference);
extern INTEGER f__ae__createResource(const OneM2M__Types::PrimitiveContent& p__resource, const INTEGER& p__parentIndex, const OneM2M__Types::ResourceType& p__resourceType, OneM2M__Types::anytype& p__modifiedResource);
extern alt_status a__ae__default_instance();
extern void a__ae__default();
extern Default_Base *activate_a__ae__default();
extern alt_status a__ae__cf03_instance();
extern void a__ae__cf03();
extern Default_Base *activate_a__ae__cf03();
extern OneM2M__Types::RequestPrimitive f__getCreateRequestPrimitive(const OneM2M__Types::ResourceType& p__resourceType, const OneM2M__Types::RequestPrimitive_template& p__request, const INTEGER& p__parentIndex);
extern void start_f__getCreateRequestPrimitive(const COMPONENT& component_reference, const OneM2M__Types::ResourceType& p__resourceType, const OneM2M__Types::RequestPrimitive_template& p__request, const INTEGER& p__parentIndex);
extern OneM2M__Types::ResponsePrimitive f__getCreateResponsePrimitive(const OneM2M__Types::ResourceType& p__resourceType, const OneM2M__Types::RequestPrimitive_template& p__request);
extern void start_f__getCreateResponsePrimitive(const COMPONENT& component_reference, const OneM2M__Types::ResourceType& p__resourceType, const OneM2M__Types::RequestPrimitive_template& p__request);
extern OneM2M__Types::RequestPrimitive f__getUpdateRequestPrimitive(const OneM2M__Types::ResourceType& p__resourceType, const INTEGER& p__resourceIndex, const OneM2M__Types::RequestPrimitive_template& p__request);
extern void start_f__getUpdateRequestPrimitive(const COMPONENT& component_reference, const OneM2M__Types::ResourceType& p__resourceType, const INTEGER& p__resourceIndex, const OneM2M__Types::RequestPrimitive_template& p__request);
extern UNIVERSAL_CHARSTRING f__getResourceId(const OneM2M__Types::PrimitiveContent& p__contentResource);
extern UNIVERSAL_CHARSTRING f__getResourceName(const OneM2M__Types::PrimitiveContent& p__contentResource);
extern UNIVERSAL_CHARSTRING f__getOriginator(const INTEGER& p__targetResourceIndex);
extern void start_f__getOriginator(const COMPONENT& component_reference, const INTEGER& p__targetResourceIndex);
extern UNIVERSAL_CHARSTRING f__getCreator(const INTEGER& p__targetResourceIndex);
extern void start_f__getCreator(const COMPONENT& component_reference, const INTEGER& p__targetResourceIndex);
extern INTEGER f__getAttribute(const OneM2M__Types::AttributeList__1& p__attributeList, const UNIVERSAL_CHARSTRING& p__attributeName);
extern CHARSTRING f__getAnnouncementTargetPoA(const CHARSTRING& p__protocolBinding, const CHARSTRING& p__announcementTargetAddress, const CHARSTRING& p__announcementTargetResource);
extern INTEGER f__getResourceIndex(const UNIVERSAL_CHARSTRING& );
extern UNIVERSAL_CHARSTRING f__getResourceAddress(const INTEGER& p__targetResourceIndex);
extern void start_f__getResourceAddress(const COMPONENT& component_reference, const INTEGER& p__targetResourceIndex);
extern INTEGER f__setResource(const OneM2M__Types::PrimitiveContent& p__resource, const INTEGER& p__parentIndex);
extern void start_f__setResource(const COMPONENT& component_reference, const OneM2M__Types::PrimitiveContent& p__resource, const INTEGER& p__parentIndex);
extern OneM2M__Types::RequestPrimitive f__setAcpId(const OneM2M__Types::RequestPrimitive_template& p__requestPrimitive, const OneM2M__Types::AcpType_template& p__accessControlPolicyIDs);
extern void start_f__setAcpId(const COMPONENT& component_reference, const OneM2M__Types::RequestPrimitive_template& p__requestPrimitive, const OneM2M__Types::AcpType_template& p__accessControlPolicyIDs);
extern UNIVERSAL_CHARSTRING f__getAeId(const INTEGER& p__targetResourceIndex);
extern void start_f__getAeId(const COMPONENT& component_reference, const INTEGER& p__targetResourceIndex);
extern void f__checkCseTesterStatus();
extern void start_f__checkCseTesterStatus(const COMPONENT& component_reference);
extern void f__checkAeTesterStatus();
extern void start_f__checkAeTesterStatus(const COMPONENT& component_reference);
extern void f__sendAcPrimitive(const CHARSTRING& p__event, const CHARSTRING& p__data);
extern void start_f__sendAcPrimitive(const COMPONENT& component_reference, const CHARSTRING& p__event, const CHARSTRING& p__data);
extern alt_status a__default_instance();
extern void a__default();
extern Default_Base *activate_a__default();
extern UNIVERSAL_CHARSTRING f__resourceIdCleaner(const UNIVERSAL_CHARSTRING& p__resourceID);
extern void f__removeElementFromList(OneM2M__Types::IntegerList& p__list, const INTEGER& index);
extern OneM2M__Types::PrimitiveContent_template f__getTemplateFromPrimitiveContent(const OneM2M__Types::PrimitiveContent_template& p__primitiveContent);
extern void f__match2PrimitiveContent(const OneM2M__Types::PrimitiveContent& p__responsePrimitiveContent, const OneM2M__Types::PrimitiveContent_template& p__requestPrimitiveContent);
extern void start_f__match2PrimitiveContent(const COMPONENT& component_reference, const OneM2M__Types::PrimitiveContent& p__responsePrimitiveContent, const OneM2M__Types::PrimitiveContent_template& p__requestPrimitiveContent);
extern CHARSTRING fx__generateTimestamp();

/* Global variable declarations */

extern const UNIVERSAL_CHARSTRING_template& f__cse__preamble__createAcpAux_p__acpName_defval;
extern const OneM2M__Types::AccessControlOperations_template& f__cse__preamble__createAcpAux_p__allowedOperations_defval;
extern const OneM2M__Types::AcpType_template& f__cse__preamble__registerAe_p__accessControlPolicyIDs_defval;
extern const OneM2M__Types::PoaList_template& f__cse__preamble__registerAe_p__poaList_defval;
extern const OneM2M__Types::AccessControlOperations_template& f__cse__preamble__registerAeWithId_p__allowedOperations_defval;
extern const OneM2M__Types::ListOfM2MID_template& f__cse__preamble__createServiceSubscribedAppRule_p__allowedAEs_defval;
extern const OneM2M__Types::RequestPrimitive_template& f__cse__createResource_p__requestPrimitive_defval;
extern const INTEGER& f__cse__createResource_p__parentIndex_defval;
extern const UNIVERSAL_CHARSTRING_template& f__cse__createAccessControlPolicyAux_p__acpName_defval;
extern const OneM2M__Types::AccessControlOperations_template& f__cse__createAccessControlPolicyAux_p__allowedOperations_defval;
extern const INTEGER& f__cse__createContainerResourceAux_p__parentIndex_defval;
extern const UNIVERSAL_CHARSTRING_template& f__cse__resourceAnnouncementHandler_p__from_defval;
extern const UNIVERSAL_CHARSTRING_template& f__cse__resourceAnnouncementHandler_p__to_defval;
extern const OneM2M__Types::ResponseStatusCode& f__subscriptionVerificationHandler_p__responseStatusCode_defval;
extern const OneM2M__Types::RequestPrimitive_template& f__getCreateRequestPrimitive_p__request_defval;
extern const OneM2M__Types::RequestPrimitive_template& f__getCreateResponsePrimitive_p__request_defval;
extern const INTEGER& f__getOriginator_p__targetResourceIndex_defval;
extern const INTEGER& f__getCreator_p__targetResourceIndex_defval;
extern const CHARSTRING& f__getAnnouncementTargetPoA_p__protocolBinding_defval;
extern const CHARSTRING& f__getAnnouncementTargetPoA_p__announcementTargetAddress_defval;
extern const CHARSTRING& f__getAnnouncementTargetPoA_p__announcementTargetResource_defval;
extern const INTEGER& f__getResourceAddress_p__targetResourceIndex_defval;
extern const INTEGER& f__setResource_p__parentIndex_defval;
extern const INTEGER& f__getAeId_p__targetResourceIndex_defval;
extern TTCN_Module module_object;

} /* end of namespace */

#endif