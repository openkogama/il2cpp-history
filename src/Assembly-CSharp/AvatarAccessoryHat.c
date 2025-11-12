
/* Void Awake() */

void Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_Awake
               (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HatAttachPoint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AvatarAccessory::AvatarAccessory_Awake((AvatarAccessory *)this,(MethodInfo *)0x0);
  pTVar1 = AvatarAccessory::AvatarAccessory_get_Transform((AvatarAccessory *)this,(MethodInfo *)0x0)
  ;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar1 = Extensions::Extensions_FindChildRecursively
                     (pTVar1,StringLiteral_HatAttachPoint,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).attachPosTfm = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).attachPosTfm >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* AccessorySettings get_AccessorySettings() */

AccessorySettings *
Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_AccessorySettings
          (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AccessoryHatSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryHatSettings>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).hatSettings;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pAVar1 != (AccessoryHatSettings *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pAVar2 = (AccessorySettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      AccessoryHatSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryHatSettings>__
                     );
  bVar3 = iRam_? == 0;
  (this->fields).hatSettings = (AccessoryHatSettings *)pAVar2;
  if (bVar3) {
    return pAVar2;
  }
  uVar4 = (uint)((ulonglong)&(this->fields).hatSettings >> 0xc);
  puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar6 = *puVar5;
    LOCK();
    uVar7 = *puVar5;
    if (uVar6 == uVar7) {
      *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
    }
    UNLOCK();
  } while (uVar6 != uVar7);
code_?:
  return (AccessorySettings *)(this->fields).hatSettings;
}


/* Vector3 get_AttachmentPointWorldPos() */

Vector3 * Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_AttachmentPointWorldPos
                    (Vector3 *__return_storage_ptr__,AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).attachPosTfm;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).attachPosTfm;
      if (pTVar1 == (Transform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_4 = 0;
      fStack_5 = 0.0;
      pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar2 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar2)();
        return pVVar3;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar6,&uStack_4);
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar8->zeroVector).x;
  uStack_4._4_4_ = (pVVar8->zeroVector).y;
  fStack_5 = (pVVar8->zeroVector).z;
code_?:
  __return_storage_ptr__->x = (float)(int)uStack_4;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uStack_4 >> 0x20);
  __return_storage_ptr__->z = fStack_5;
  return __return_storage_ptr__;
}


/* Boolean get_HasAttachmentPoint() */

bool Assembly-CSharp.dll::AvatarAccessoryHat::AvatarAccessoryHat_get_HasAttachmentPoint
               (AvatarAccessoryHat *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).attachPosTfm;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pTVar1->fields)._._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}

