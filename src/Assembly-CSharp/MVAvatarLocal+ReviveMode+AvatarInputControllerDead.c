
/* MVAvatarLocal+ReviveMode+AvatarInputControllerDead() */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode+AvatarInputControllerDead::
     MVAvatarLocal_ReviveMode_AvatarInputControllerDead__ctor
               (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields).rot.x = (pQVar1->identityQuaternion).x;
  (this->fields).rot.y = fVar2;
  (this->fields).rot.z = fVar3;
  (this->fields).rot.w = fVar4;
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode+AvatarInputControllerDead::
     MVAvatarLocal_ReviveMode_AvatarInputControllerDead_set_Rotation
               (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *this,Quaternion value,
               MethodInfo *method)

{
  (this->fields).rot.x = value.x;
  (this->fields).rot.y = value.y;
  (this->fields).rot.z = value.z;
  (this->fields).rot.w = value.w;
  return;
}

