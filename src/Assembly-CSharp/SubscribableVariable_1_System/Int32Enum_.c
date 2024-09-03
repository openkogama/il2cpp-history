
/* SubscribableVariable`1[System.Int32Enum](Int32Enum) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Int32Enum]::
     SubscribableVariable_1_System_Int32Enum___ctor
               (SubscribableVariable_1_System_Int32Enum_ *this,Int32Enum__Enum value,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.value = value;
  return;
}


/* Void set_ValueSet(Int32Enum) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Int32Enum]::
     SubscribableVariable_1_System_Int32Enum__set_ValueSet
               (SubscribableVariable_1_System_Int32Enum_ *this,Int32Enum__Enum value,
               MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnChange;
  (this->fields)._.value = value;
  if (pAVar1 != (Action_1_Int32Enum_ *)0x0) {
    pAVar1 = (this->fields)._.OnChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,value,(pAVar1->fields)._._.method);
  }
  return;
}

