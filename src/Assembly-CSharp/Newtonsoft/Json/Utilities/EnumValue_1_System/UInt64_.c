
/* EnumValue`1[System.UInt64](String, UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumValue`1[System::UInt64]::
     EnumValue_1_System_UInt64___ctor
               (EnumValue_1_System_UInt64_ *this,String *name,uint64_t value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._name = name;
  func_?(&this->fields,name);
  (this->fields)._value = value;
  return;
}


/* UInt64 get_Value() */

uint64_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumValue`1[System::UInt64]::
         EnumValue_1_System_UInt64__get_Value(EnumValue_1_System_UInt64_ *this,MethodInfo *method)

{
  return (this->fields)._value;
}

