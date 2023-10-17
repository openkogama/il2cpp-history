
/* SubscribableVariable`1[UnityEngine.Quaternion](Quaternion) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Quaternion]::
     SubscribableVariable_1_UnityEngine_Quaternion___ctor
               (SubscribableVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
            (this,value.x,value.y,value.z,value.w,method->klass->rgctx_data[1].rgctxDataDummy);
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
  (*method->klass->rgctx_data->method->virtualMethodPointer)
            (this,method->klass->rgctx_data->rgctxDataDummy);
  return;
}

