
/* SubscribableVariable`1[UnityEngine.Vector3](Vector3) */

void Assembly-CSharp.dll::SubscribableVariable`1[UnityEngine::Vector3]::
     SubscribableVariable_1_UnityEngine_Vector3___ctor
               (SubscribableVariable_1_UnityEngine_Vector3_ *this,Vector3 value,MethodInfo *method)

{
  (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
            (this,value._0_8_,value.z,method->klass->rgctx_data[1].rgctxDataDummy);
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
  (*method->klass->rgctx_data->method->virtualMethodPointer)
            (this,method->klass->rgctx_data->rgctxDataDummy);
  return;
}

