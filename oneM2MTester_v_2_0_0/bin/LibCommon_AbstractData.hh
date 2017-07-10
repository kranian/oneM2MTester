// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R1A
// for oneM2MTester (martin@ubuntu) on Wed May 31 13:52:13 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef LibCommon__AbstractData_HH
#define LibCommon__AbstractData_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "LibCommon_BasicTypesAndValues.hh"

#if TTCN3_VERSION != 60100
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

#undef LibCommon__AbstractData_HH
#endif

namespace LibCommon__AbstractData {

/* Forward declarations of classes */

typedef PreGenRecordOf::PREGEN__RECORD__OF__CHARSTRING StringItems;
typedef PreGenRecordOf::PREGEN__RECORD__OF__CHARSTRING_template StringItems_template;
class StringStack;
class StringStack_template;

} /* end of namespace */

#ifndef LibCommon__AbstractData_HH
#define LibCommon__AbstractData_HH

namespace LibCommon__AbstractData {

/* Class definitions */

class StringStack {
  INTEGER field_stackSize;
  StringItems field_stringItems;
public:
  StringStack();
  StringStack(const INTEGER& par_stackSize,
    const StringItems& par_stringItems);
  StringStack(const StringStack& other_value);
  inline boolean is_component() { return FALSE; }
  void clean_up();
  StringStack& operator=(const StringStack& other_value);
  boolean operator==(const StringStack& other_value) const;
  inline boolean operator!=(const StringStack& other_value) const
    { return !(*this == other_value); }

  boolean is_bound() const;

inline boolean is_present() const { return is_bound(); }
  boolean is_value() const;

  inline INTEGER& stackSize()
    {return field_stackSize;}
  inline const INTEGER& stackSize() const
    {return field_stackSize;}
  inline StringItems& stringItems()
    {return field_stringItems;}
  inline const StringItems& stringItems() const
    {return field_stringItems;}
  inline int size_of() const
    {return 2;}
  void log() const;
  void set_param(Module_Param& param);
  void set_implicit_omit();
  void encode_text(Text_Buf& text_buf) const;
  void decode_text(Text_Buf& text_buf);
};

class StringStack_template : public Base_Template {
struct single_value_struct;
union {
single_value_struct *single_value;
struct {
unsigned int n_values;
StringStack_template *list_value;
} value_list;
};

void set_specific();
void copy_value(const StringStack& other_value);
void copy_template(const StringStack_template& other_value);

public:
StringStack_template();
StringStack_template(template_sel other_value);
StringStack_template(const StringStack& other_value);
StringStack_template(const OPTIONAL<StringStack>& other_value);
StringStack_template(const StringStack_template& other_value);
~StringStack_template();
StringStack_template& operator=(template_sel other_value);
StringStack_template& operator=(const StringStack& other_value);
StringStack_template& operator=(const OPTIONAL<StringStack>& other_value);
StringStack_template& operator=(const StringStack_template& other_value);
boolean match(const StringStack& other_value, boolean legacy = FALSE) const;
boolean is_bound() const;
boolean is_value() const;
void clean_up();
StringStack valueof() const;
void set_type(template_sel template_type, unsigned int list_length);
StringStack_template& list_item(unsigned int list_index) const;
INTEGER_template& stackSize();
const INTEGER_template& stackSize() const;
StringItems_template& stringItems();
const StringItems_template& stringItems() const;
int size_of() const;
void log() const;
void log_match(const StringStack& match_value, boolean legacy = FALSE) const;
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
void set_param(Module_Param& param);
void check_restriction(template_res t_res, const char* t_name=NULL, boolean legacy = FALSE) const;
boolean is_present(boolean legacy = FALSE) const;
boolean match_omit(boolean legacy = FALSE) const;
};


/* Function prototypes */

extern void f__initStringStack(StringStack& p__stack);
extern BOOLEAN f__isStringStackEmpty(StringStack& p__stack);
extern BOOLEAN f__isItemOnStringStack(StringStack& p__stack, const CHARSTRING& p__item);
extern BOOLEAN f__peekStringStackTop(StringStack& p__stack, CHARSTRING& p__item);
extern void f__pushStringStack(StringStack& p__stack, const CHARSTRING& p__item);
extern void f__popStringStack(StringStack& p__stack);

/* Global variable declarations */

extern const XERdescriptor_t StringStack_stackSize_xer_;
extern const TTCN_Typedescriptor_t StringStack_stackSize_descr_;
extern const TTCN_Typedescriptor_t StringItems_descr_;
extern const XERdescriptor_t StringItems_0_xer_;
extern const TTCN_Typedescriptor_t StringItems_0_descr_;
extern const TTCN_Typedescriptor_t StringStack_descr_;
extern const StringStack& c__initStringStack;
extern TTCN_Module module_object;

} /* end of namespace */

#endif