
/* SubscribableVariable`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Vector3]::
     SubscribableVariable_1_UnityEngine_Vector3___ctor
               (SubscribableVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._.value.x = value.x;
  (this->fields)._.value.y = value.y;
  (this->fields)._.value.z = value.z;
  return;
}


/* Void set_ValueSet(Vector3) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Vector3]::
     SubscribableVariable_1_UnityEngine_Vector3__set_ValueSet
               (SubscribableVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnChange;
  (this->fields)._.value.x = value.x;
  (this->fields)._.value.y = value.y;
  (this->fields)._.value.z = value.z;
  if (pAVar1 != (Action_1_UnityEngine_Vector3_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,value._0_8_,value.z,(pAVar1->fields)._._.method);
  }
  return;
}

