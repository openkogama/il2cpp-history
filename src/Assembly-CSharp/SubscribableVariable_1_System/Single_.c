
/* SubscribableVariable`1[System.Single](Single) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Single]::
     SubscribableVariable_1_System_Single___ctor
               (SubscribableVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  if (this != (SubscribableVariable_1_System_Single_ *)0x0) {
    (**(code **)**(undefined4 **)(method->name + 0x60))
              (this,value,(undefined4 *)**(undefined4 **)(method->name + 0x60));
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_ValueSet(Single) */

void Assembly-CSharp.dll::SubscribableVariable`1[System::Single]::
     SubscribableVariable_1_System_Single__set_ValueSet
               (SubscribableVariable_1_System_Single_ *this,float value,MethodInfo *method)

{
  pcVar1 = method->name;
  (this->fields)._.value = value;
  puVar2 = *(undefined4 **)(*(int *)(pcVar1 + 0x60) + 8);
  (*(code *)*puVar2)(this,puVar2);
  return;
}

