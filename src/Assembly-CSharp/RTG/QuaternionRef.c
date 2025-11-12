
/* QuaternionRef() */

void Assembly-CSharp.dll::RTG::QuaternionRef::QuaternionRef__ctor
               (QuaternionRef *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
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
               (QuaternionRef *this,Quaternion *quat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = quat->y;
  fVar2 = quat->z;
  fVar3 = quat->w;
  (this->fields)._value.x = quat->x;
  (this->fields)._value.y = fVar1;
  (this->fields)._value.z = fVar2;
  (this->fields)._value.w = fVar3;
  return;
}

