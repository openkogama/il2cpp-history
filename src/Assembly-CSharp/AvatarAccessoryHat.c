
/* Void Awake() */

void Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_Awake
               (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AvatarAccessory::AvatarAccessory_Awake((AvatarAccessory *)this,(MethodInfo *)0x0);
  pTVar1 = AvatarAccessory::AvatarAccessory_get_Transform((AvatarAccessory *)this,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?();
  }
  pTVar1 = Extensions::Extensions_FindChildRecursively
                     (pTVar1,StringLiteral_HatAttachPoint,(MethodInfo *)0x0);
  (this->fields).attachPosTfm = pTVar1;
  return;
}


/* AccessorySettings get_AccessorySettings() */

AccessorySettings *
Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_AccessorySettings
          (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).hatSettings;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (AccessoryHatSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        AccessoryHatSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryHatSettings>__
                       );
    (this->fields).hatSettings = pAVar1;
  }
  return (AccessorySettings *)(this->fields).hatSettings;
}


/* Vector3 get_AttachmentPointWorldPos() */

Vector3 * Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_AttachmentPointWorldPos
                    (Vector3 *__return_storage_ptr__,AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).attachPosTfm;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  }
  else {
    pTVar1 = (this->fields).attachPosTfm;
    if (pTVar1 == (Transform *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar4)();
      return pVVar3;
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
  }
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Boolean get_HasAttachmentPoint() */

bool Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_HasAttachmentPoint
               (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).attachPosTfm;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

