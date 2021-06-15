
/* Void set_ValueSet(Boolean) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Boolean]::
     SubscribableVariable_1_System_Boolean__set_ValueSet
               (SubscribableVariable_1_System_Boolean_ *this,bool value,MethodInfo *method)

{
  (this->fields)._.value = value;
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  (*(code *)*puVar1)(this,puVar1);
  return;
}

