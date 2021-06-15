
/* Void set_ValueSet(Int32) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Int32]::
     SubscribableVariable_1_System_Int32__set_ValueSet
               (SubscribableVariable_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  (this->fields)._.value = value;
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  (*(code *)*puVar1)(this,puVar1);
  return;
}

