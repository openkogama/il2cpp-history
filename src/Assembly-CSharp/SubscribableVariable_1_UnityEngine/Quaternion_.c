
/* SubscribableVariable`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Quaternion]::
     SubscribableVariable_1_UnityEngine_Quaternion___ctor
               (SubscribableVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.value.x = value.x;
  (this->fields)._.value.y = value.y;
  (this->fields)._.value.z = value.z;
  (this->fields)._.value.w = value.w;
  return;
}


/* Void set_ValueSet(Quaternion) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Quaternion]::
     SubscribableVariable_1_UnityEngine_Quaternion__set_ValueSet
               (SubscribableVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnChange;
  (this->fields)._.value.x = value.x;
  (this->fields)._.value.y = value.y;
  (this->fields)._.value.z = value.z;
  (this->fields)._.value.w = value.w;
  if (pAVar1 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
    pAVar1 = (this->fields)._.OnChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,value.x,value.y,value.z,value.w,
               (pAVar1->fields)._._.method);
  }
  return;
}

