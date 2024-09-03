
/* QuaternionRef() */

void Assembly-CSharp.dll::RTG::QuaternionRef::QuaternionRef__ctor
               (QuaternionRef *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._value.x = (pQVar1->identityQuaternion).x;
  (this->fields)._value.y = fVar2;
  (this->fields)._value.z = fVar3;
  (this->fields)._value.w = fVar4;
  return;
}


/* QuaternionRef(Quaternion) */

void Assembly-CSharp.dll::RTG::QuaternionRef::QuaternionRef__ctor_1
               (QuaternionRef *this,Quaternion quat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields)._value.x = (pQVar1->identityQuaternion).x;
  (this->fields)._value.y = fVar2;
  (this->fields)._value.z = fVar3;
  (this->fields)._value.w = fVar4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._value.x = quat.x;
  (this->fields)._value.y = quat.y;
  (this->fields)._value.z = quat.z;
  (this->fields)._value.w = quat.w;
  return;
}


/* Void set_Value(Quaternion) */

void Assembly-CSharp.dll::RTG::QuaternionRef::QuaternionRef_set_Value
               (QuaternionRef *this,Quaternion value,MethodInfo *method)

{
  (this->fields)._value.x = value.x;
  (this->fields)._value.y = value.y;
  (this->fields)._value.z = value.z;
  (this->fields)._value.w = value.w;
  return;
}

