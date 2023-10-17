
/* Void Awake() */

void Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_Awake
               (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_HatAttachPoint);
    cRam_? = '\x01';
  }
  AvatarAccessory::AvatarAccessory_Awake((AvatarAccessory *)this,(MethodInfo *)0x0);
  pTVar1 = AvatarAccessory::AvatarAccessory_get_Transform((AvatarAccessory *)this,(MethodInfo *)0x0)
  ;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar1 = Extensions::Extensions_FindChildRecursively
                     (pTVar1,StringLiteral_HatAttachPoint,(MethodInfo *)0x0);
  (this->fields).attachPosTfm = pTVar1;
  func_?(&(this->fields).attachPosTfm);
  return;
}


/* AccessorySettings get_AccessorySettings() */

AccessorySettings *
Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_AccessorySettings
          (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AccessoryHatSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryHatSettings>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).hatSettings;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (AccessoryHatSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        AccessoryHatSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryHatSettings>__
                       );
    (this->fields).hatSettings = pAVar1;
    func_?(&(this->fields).hatSettings,pAVar1);
  }
  return (AccessorySettings *)(this->fields).hatSettings;
}


/* Vector3 get_AttachmentPointWorldPos() */

Vector3 * Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_AttachmentPointWorldPos
                    (Vector3 *__return_storage_ptr__,AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).attachPosTfm;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    __return_storage_ptr__->x = (pVVar3->zeroVector).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  pTVar1 = (this->fields).attachPosTfm;
  if (pTVar1 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    fVar4 = pVVar6->y;
    fVar5 = pVVar6->z;
    __return_storage_ptr__->x = pVVar6->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar7)();
  return pVVar6;
}


/* Boolean get_HasAttachmentPoint() */

bool Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_HasAttachmentPoint
               (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).attachPosTfm;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

