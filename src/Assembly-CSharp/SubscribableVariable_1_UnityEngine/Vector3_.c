
/* SubscribableVariable`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Vector3]::
     SubscribableVariable_1_UnityEngine_Vector3___ctor
               (SubscribableVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  if (this != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    (**(code **)**(undefined4 **)(method->name + 0x60))
              (this,value._0_8_,value.z,(undefined4 *)**(undefined4 **)(method->name + 0x60));
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_ValueSet(Vector3) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Vector3]::
     SubscribableVariable_1_UnityEngine_Vector3__set_ValueSet
               (SubscribableVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._.value.x = value.x;
  (this->fields)._.value.y = value.y;
  (this->fields)._.value.z = value.z;
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  (*(code *)*puVar1)(this,puVar1);
  return;
}

