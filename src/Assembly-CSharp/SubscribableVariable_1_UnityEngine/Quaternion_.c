
/* SubscribableVariable`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Quaternion]::
     SubscribableVariable_1_UnityEngine_Quaternion___ctor
               (SubscribableVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  if (this != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    (**(code **)**(undefined4 **)(method->name + 0x60))
              (this,value.x,value.y,value.z,value.w,
               (undefined4 *)**(undefined4 **)(method->name + 0x60));
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_ValueSet(Quaternion) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Quaternion]::
     SubscribableVariable_1_UnityEngine_Quaternion__set_ValueSet
               (SubscribableVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  (this->fields)._.value.x = value.x;
  (this->fields)._.value.y = value.y;
  (this->fields)._.value.z = value.z;
  (this->fields)._.value.w = value.w;
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  (*(code *)*puVar1)(this,puVar1);
  return;
}

