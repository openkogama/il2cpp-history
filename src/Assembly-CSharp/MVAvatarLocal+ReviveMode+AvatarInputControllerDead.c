
/* MVAvatarLocal+ReviveMode+AvatarInputControllerDead() */

void Assembly-CSharp.dll::MVAvatarLocal+ReviveMode+AvatarInputControllerDead::
     MVAvatarLocal_ReviveMode_AvatarInputControllerDead__ctor
               (MVAvatarLocal_ReviveMode_AvatarInputControllerDead *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pQVar1->y;
  fVar3 = pQVar1->z;
  fVar4 = pQVar1->w;
  (this->fields).rot.x = pQVar1->x;
  (this->fields).rot.y = fVar2;
  (this->fields).rot.z = fVar3;
  (this->fields).rot.w = fVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_5);
  return;
}


/* Vector3 get_Direction() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal+ReviveMode+AvatarInputControllerDead::
          MVAvatarLocal_ReviveMode_AvatarInputControllerDead_get_Direction
                    (Vector3 *__return_storage_ptr__,
                    MVAvatarLocal_ReviveMode_AvatarInputControllerDead *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
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

