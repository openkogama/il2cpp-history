
/* SubscribableVariable`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Vector3]::
     SubscribableVariable_1_UnityEngine_Vector3___ctor
               (SubscribableVariable_1_UnityEngine_Vector3_ *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._.value.x = value->x;
  (this->fields)._.value.y = fVar1;
  (this->fields)._.value.z = fVar2;
  return;
}


/* Void set_ValueSet(Vector3) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Vector3]::
     SubscribableVariable_1_UnityEngine_Vector3__set_ValueSet
               (SubscribableVariable_1_UnityEngine_Vector3_ *this,Vector3 *value,MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnChange;
  uStack_2._0_4_ = value->x;
  uStack_2._4_4_ = value->y;
  fStack_3 = value->z;
  (this->fields)._.value.x = (float)(undefined4)uStack_2;
  (this->fields)._.value.y = (float)uStack_2._4_4_;
  (this->fields)._.value.z = fStack_3;
  if (pAVar1 != (Action_1_UnityEngine_Vector3_ *)0x0) {
    pAVar1 = (this->fields)._.OnChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,&uStack_2,(pAVar1->fields)._._.method);
  }
  return;
}

