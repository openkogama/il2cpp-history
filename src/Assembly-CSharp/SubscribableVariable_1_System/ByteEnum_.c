
/* SubscribableVariable`1[System.ByteEnum](ByteEnum) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::ByteEnum]::
     SubscribableVariable_1_System_ByteEnum___ctor
               (SubscribableVariable_1_System_ByteEnum_ *this,ByteEnum__Enum value,
               MethodInfo *method)

{
  (this->fields)._.value = (uint8_t)value;
  return;
}


/* Void set_ValueSet(ByteEnum) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::ByteEnum]::
     SubscribableVariable_1_System_ByteEnum__set_ValueSet
               (SubscribableVariable_1_System_ByteEnum_ *this,ByteEnum__Enum value,
               MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnChange;
  (this->fields)._.value = (uint8_t)value;
  if (pAVar1 != (Action_1_ByteEnum_ *)0x0) {
    pAVar1 = (this->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,value,(pAVar1->fields)._._.method);
    return;
  }
  return;
}

