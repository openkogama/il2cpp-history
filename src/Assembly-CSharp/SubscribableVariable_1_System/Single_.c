
/* SubscribableVariable`1[System.Single](Single) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Single]::
     SubscribableVariable_1_System_Single___ctor
               (SubscribableVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.value = value;
  return;
}


/* Void set_ValueSet(Single) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Single]::
     SubscribableVariable_1_System_Single__set_ValueSet
               (SubscribableVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnChange;
  (this->fields)._.value = value;
  if (pAVar1 != (Action_1_Single_ *)0x0) {
    pAVar1 = (this->fields)._.OnChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,value,(pAVar1->fields)._._.method);
  }
  return;
}

