
/* SubscribableVariable`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Quaternion]::
     SubscribableVariable_1_UnityEngine_Quaternion___ctor
               (SubscribableVariable_1_UnityEngine_Quaternion_ *this,Quaternion *value,
               MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  fVar3 = value->w;
  (this->fields)._.value.x = value->x;
  (this->fields)._.value.y = fVar1;
  (this->fields)._.value.z = fVar2;
  (this->fields)._.value.w = fVar3;
  return;
}


/* Void set_ValueSet(Quaternion) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Quaternion]::
     SubscribableVariable_1_UnityEngine_Quaternion__set_ValueSet
               (SubscribableVariable_1_UnityEngine_Quaternion_ *this,Quaternion *value,
               MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnChange;
  fStack_2 = value->x;
  fStack_3 = value->y;
  fStack_4 = value->z;
  fStack_5 = value->w;
  (this->fields)._.value.x = fStack_2;
  (this->fields)._.value.y = fStack_3;
  (this->fields)._.value.z = fStack_4;
  (this->fields)._.value.w = fStack_5;
  if (pAVar1 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
    pAVar1 = (this->fields)._.OnChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,&fStack_2,(pAVar1->fields)._._.method);
  }
  return;
}

