
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,value,(pAVar1->fields)._._.method);
    return;
  }
  return;
}

