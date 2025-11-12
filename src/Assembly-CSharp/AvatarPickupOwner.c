
/* Void HandlePointWeapon() */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandlePointWeapon
               (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if ((pMVar1 != (MVAvatar *)0x0) &&
     (pAVar2 = (pMVar1->fields).limbManager, pAVar2 != (AvatarLimbManager *)0x0)) {
    bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
       ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar5 = pAVar2[1].fields.OnAvatarRotate;
    if (pAVar5 != (Action *)0x0) {
      if (*(char *)&(pAVar5->fields)._._.interp_method != '\0') {
        pvVar6 = (pAVar5->fields)._._.method_ptr;
        *(undefined4 *)((longlong)&(pAVar5->fields)._._.delegate_trampoline + 4) =
             *(undefined4 *)&(pAVar5->fields)._._.delegate_trampoline;
        uVar7 = *(undefined4 *)&(pAVar5->fields)._._.invoke_impl;
        (pAVar5->fields)._._.extra_arg = pvVar6;
        *(undefined4 *)&(pAVar5->fields)._._.method_code = uVar7;
        *(undefined4 *)&(pAVar5->fields)._._.field_0x64 = 2;
      }
      pMVar1 = (this->fields).mvAvatar;
      if ((((pMVar1 != (MVAvatar *)0x0) && (pMVar8 = (pMVar1->fields).body, pMVar8 != (MVBody *)0x0)
           ) && (pMVar9 = (pMVar8->fields).bodyObject, pMVar9 != (MVBodyObject *)0x0)) &&
         ((pBVar10 = (pMVar9->fields).bodyData, pBVar10 != (BodyData *)0x0 &&
          (pTVar11 = (pBVar10->fields).PartBones, pTVar11 != (Transform__Array *)0x0)))) {
        if ((uint)pTVar11->max_length < 3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pPVar12 = (this->fields)._.currentItem;
        pTVar13 = pTVar11->vector[2];
        if ((pPVar12 != (PickupItem *)0x0) &&
           (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pPVar12,(MethodInfo *)0x0),
           pTVar14 != (Transform *)0x0)) {
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                              (pTVar14,(MethodInfo *)0x0);
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
          if (pTVar14 != (Transform *)0x0 || pTVar13 != (Transform *)0x0) {
            if (pTVar13 == (Transform *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pTVar14 == (Transform *)0x0) goto code_?;
              bVar15 = (pTVar14->fields)._._.m_CachedPtr == (void *)0x0;
            }
            else if (pTVar14 == (Transform *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar15 = (pTVar13->fields)._._.m_CachedPtr == (void *)0x0;
            }
            else {
              bVar15 = pTVar14 == pTVar13;
            }
            if (!bVar15) {
              pPVar12 = (this->fields)._.currentItem;
              if ((pPVar12 != (PickupItem *)0x0) &&
                 (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pPVar12,(MethodInfo *)0x0),
                 pTVar14 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar14,pTVar13,0,(MethodInfo *)0x0);
                pPVar12 = (this->fields)._.currentItem;
                if ((pPVar12 != (PickupItem *)0x0) &&
                   (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pPVar12,(MethodInfo *)0x0),
                   pTVar13 != (Transform *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar6 = (pTVar13->fields)._._.m_CachedPtr;
                  if (pvVar6 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcVar4 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                    uVar16 = func_?(&UNK_?);
                    FUN_?(uVar16,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcRam_? = pcVar4;
                  (*pcRam_?)(pvVar6);
                  pPVar12 = (this->fields)._.currentItem;
                  if (pPVar12 != (PickupItem *)0x0) {
                    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pPVar12,(MethodInfo *)0x0);
                    uStack_17 = CONCAT44(_UNK_?,_UNK_?);
                    uStack_18 = _UNK_?;
                    uStack_19 = 0;
                    uStack_20 = 0;
                    pcVar4 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                      uVar16 = func_?(&UNK_?);
                      FUN_?(uVar16,0);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pcRam_? = pcVar4;
                    (*pcRam_?)(&uStack_17);
                    if (pTVar13 == (Transform *)0x0) {
                      FUN_?();
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    uStack_21 = (undefined4)uStack_19;
                    uStack_22 = uStack_19._4_4_;
                    uStack_23 = (undefined4)uStack_20;
                    uStack_24 = uStack_20._4_4_;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar6 = (pTVar13->fields)._._.m_CachedPtr;
                    if (pvVar6 != (void *)0x0) {
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                      {
                        uVar16 = func_?(&UNK_?);
                        FUN_?(uVar16,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pvVar6,&uStack_21);
                      return;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
              }
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePointWeaponOnlyNetworked() */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandlePointWeaponOnlyNetworked
               (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatar *)0x0) {
    pAVar2 = (pMVar1->fields).limbManager;
    if (pAVar2 != (AvatarLimbManager *)0x0) {
      bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
      if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
         ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
        FUN_?(pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar5 = pAVar2[1].fields.OnAvatarRotate;
      if (pAVar5 != (Action *)0x0) {
        if (*(char *)&(pAVar5->fields)._._.interp_method != '\0') {
          pvVar6 = (pAVar5->fields)._._.method_ptr;
          *(undefined4 *)((longlong)&(pAVar5->fields)._._.delegate_trampoline + 4) =
               *(undefined4 *)&(pAVar5->fields)._._.delegate_trampoline;
          uVar7 = *(undefined4 *)&(pAVar5->fields)._._.invoke_impl;
          (pAVar5->fields)._._.extra_arg = pvVar6;
          *(undefined4 *)&(pAVar5->fields)._._.method_code = uVar7;
          *(undefined4 *)&(pAVar5->fields)._._.field_0x64 = 3;
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePointing(Boolean) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandlePointing
               (AvatarPickupOwner *this,bool inputFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (inputFire == 0) {
    return;
  }
  pMVar1 = (this->fields).mvAvatar;
  if ((pMVar1 != (MVAvatar *)0x0) &&
     (pAVar2 = (pMVar1->fields).limbManager, pAVar2 != (AvatarLimbManager *)0x0)) {
    bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
       ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar5 = pAVar2[1].fields.OnAvatarRotate;
    if (pAVar5 != (Action *)0x0) {
      if (*(char *)&(pAVar5->fields)._._.interp_method == '\0') {
        return;
      }
      pvVar6 = (pAVar5->fields)._._.method_ptr;
      *(undefined4 *)((longlong)&(pAVar5->fields)._._.delegate_trampoline + 4) =
           *(undefined4 *)&(pAVar5->fields)._._.delegate_trampoline;
      uVar7 = *(undefined4 *)&(pAVar5->fields)._._.invoke_impl;
      (pAVar5->fields)._._.extra_arg = pvVar6;
      *(undefined4 *)&(pAVar5->fields)._._.method_code = uVar7;
      *(undefined4 *)&(pAVar5->fields)._._.field_0x64 = 1;
      pDVar8 = (pAVar5->fields)._.delegates;
      if (pDVar8 == (Delegate__Array *)0x0) {
        return;
      }
      (*(code *)pDVar8->max_length)(pDVar8->vector[4],1,pDVar8->vector[1]);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleSetHandEquippableItem(Boolean) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandleSetHandEquippableItem
               (AvatarPickupOwner *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal,CONCAT71(in_register_00000011,value));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatar *)0x0) {
    pAVar2 = (pMVar1->fields).limbManager;
    if (pAVar2 != (AvatarLimbManager *)0x0) {
      bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
      if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
         ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
        FUN_?(pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar5 = pAVar2[1].fields.OnAvatarRotate;
      if (pAVar5 != (Action *)0x0) {
        pAVar6 = pAVar5[1].klass;
        if (pAVar6 != (Action__Class *)0x0) {
          uVar7._0_2_ = (pAVar6->_0).byval_arg.attrs;
          uVar7._2_1_ = (pAVar6->_0).byval_arg.type;
          uVar7._3_5_ = *(undefined5 *)&(pAVar6->_0).byval_arg.field_0xb;
          (*(code *)(pAVar6->_0).namespaze)((pAVar6->_0).element_class,value,uVar7);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable, MVAvatar, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_Init
               (AvatarPickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeDataVariable,
               MVRuntimeDataVariable *isFiringRuntimeDataVariable,MVAvatar *mvAvatar,
               WorldObjectSkillDataManager *skillsDataManager,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).mvAvatar = mvAvatar;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).mvAvatar >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  MVPickupOwner::MVPickupOwner_Init
            ((MVPickupOwner *)this,currentItemRuntimeDataVariable,isFiringRuntimeDataVariable,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_EndlessAmmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((skillsDataManager != (WorldObjectSkillDataManager *)0x0) &&
     (bVar6 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (skillsDataManager,StringLiteral_EndlessAmmo,(MethodInfo *)0x0), bVar6 != 0)
     ) {
    (this->fields).hasUnlimitedAmmo = 1;
  }
  (this->fields)._.hasUnlimitedAmmoSetting = (this->fields).hasUnlimitedAmmo;
  return;
}


/* Void InitSkills(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_InitSkills
               (AvatarPickupOwner *this,WorldObjectSkillDataManager *skillDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_EndlessAmmo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_EndlessAmmo,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).hasUnlimitedAmmo = 1;
    }
  }
  return;
}


/* Void SetupItemTransform() */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_SetupItemTransform
               (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 == (MVAvatar *)0x0) goto code_?;
  pPVar2 = (this->fields)._.currentItem;
  if ((pMVar1->fields).body == (MVBody *)0x0) {
    if (pPVar2 == (PickupItem *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar2,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if ((this_00 == (GameObject *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar4,value,(MethodInfo *)0x0);
    pPVar2 = (this->fields)._.currentItem;
    if ((pPVar2 == (PickupItem *)0x0) ||
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar2,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar5);
    pPVar2 = (this->fields)._.currentItem;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fStack_8 = (pQVar7->identityQuaternion).x;
    fStack_9 = (pQVar7->identityQuaternion).y;
    fStack_10 = (pQVar7->identityQuaternion).z;
    fStack_11 = (pQVar7->identityQuaternion).w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar5,&fStack_8);
    pPVar2 = (this->fields)._.currentItem;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    goto code_?;
  }
  if (pPVar2 == (PickupItem *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pPVar2,(MethodInfo *)0x0);
  pMVar1 = (this->fields).mvAvatar;
  if ((((pMVar1 == (MVAvatar *)0x0) || (pMVar12 = (pMVar1->fields).body, pMVar12 == (MVBody *)0x0))
      || (pMVar13 = (pMVar12->fields).bodyObject, pMVar13 == (MVBodyObject *)0x0)) ||
     ((pBVar14 = (pMVar13->fields).bodyData, pBVar14 == (BodyData *)0x0 ||
      (pTVar15 = (pBVar14->fields).PartBones, pTVar15 == (Transform__Array *)0x0))))
  goto code_?;
  if ((uint)pTVar15->max_length < 2) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar4 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (pTVar4,pTVar15->vector[1],0,(MethodInfo *)0x0);
  pPVar2 = (this->fields)._.currentItem;
  if ((pPVar2 == (PickupItem *)0x0) ||
     (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pPVar2,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  pPVar2 = (this->fields)._.currentItem;
  if (pPVar2 == (PickupItem *)0x0) goto code_?;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pPVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pTVar4 == (Transform *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fStack_8 = (pQVar7->identityQuaternion).x;
  fStack_9 = (pQVar7->identityQuaternion).y;
  fStack_10 = (pQVar7->identityQuaternion).z;
  fStack_11 = (pQVar7->identityQuaternion).w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5,&fStack_8);
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 == (MVAvatar *)0x0) {
code_?:
    pPVar2 = (this->fields)._.currentItem;
    pMVar1 = (MVAvatar *)0x0;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    (*(pPVar2->klass->vtable).OnEquip.methodPtr)(pPVar2,(pPVar2->klass->vtable).OnEquip.method);
  }
  else {
    bVar16 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar16) ||
       ((MVAvatarRemote__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
        TypeInfo__MVAvatarRemote)) goto code_?;
  }
  pPVar2 = (this->fields)._.currentItem;
  if (pPVar2 == (PickupItem *)0x0) goto code_?;
  cVar17 = (*(pPVar2->klass->vtable).get_ThirdPersonGunMode.methodPtr)
                    (pPVar2,(pPVar2->klass->vtable).get_ThirdPersonGunMode.method);
  if (cVar17 == '\0') {
    if (pMVar1 == (MVAvatar *)0x0) {
      return;
    }
    pPVar2 = (this->fields)._.currentItem;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    cVar17 = (*(pPVar2->klass->vtable).get_IsHandEquippable.methodPtr)
                      (pPVar2,(pPVar2->klass->vtable).get_IsHandEquippable.method);
    if (cVar17 != '\0') goto code_?;
  }
  else {
code_?:
    pMVar18 = (this->fields).mvAvatar;
    if ((((pMVar18 == (MVAvatar *)0x0) || (pMVar12 = (pMVar18->fields).body, pMVar12 == (MVBody *)0x0))
        || (pMVar13 = (pMVar12->fields).bodyObject, pMVar13 == (MVBodyObject *)0x0)) ||
       ((pBVar14 = (pMVar13->fields).bodyData, pBVar14 == (BodyData *)0x0 ||
        (pTVar15 = (pBVar14->fields).PartBones, pTVar15 == (Transform__Array *)0x0))))
    goto code_?;
    if ((uint)pTVar15->max_length < 3) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pPVar2 = (this->fields)._.currentItem;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    PickupItem::PickupItem_EquipToHand(pPVar2,pTVar15->vector[2],(MethodInfo *)0x0);
    if (pMVar1 == (MVAvatar *)0x0) {
      return;
    }
  }
  pPVar2 = (this->fields)._.currentItem;
  if (pPVar2 != (PickupItem *)0x0) {
code_?:
    (*(pPVar2->klass->vtable).OnEquip.methodPtr)(pPVar2,(pPVar2->klass->vtable).OnEquip.method);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_Unequip
               (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._.currentItem;
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
  if (pPVar1 != (PickupItem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields)._.currentItem;
      if (pPVar1 != (PickupItem *)0x0) {
        (*(pPVar1->klass->vtable).OnUnequip.methodPtr)
                  (pPVar1,(pPVar1->klass->vtable).OnUnequip.method);
        pPVar1 = (this->fields)._.currentItem;
        if (pPVar1 != (PickupItem *)0x0) {
          iVar2 = (*(pPVar1->klass->vtable).__unknown.methodPtr)();
          if (iVar2 != 0) {
            pPVar1 = (this->fields)._.currentItem;
            if (pPVar1 == (PickupItem *)0x0) goto code_?;
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pPVar1,(MethodInfo *)0x0);
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
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                      ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
          }
          bVar3 = iRam_? != 0;
          (this->fields)._.currentItem = (PickupItem *)0x0;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields)._.currentItem >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pMVar8 = (this->fields)._.onUnequipItem;
          if (pMVar8 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
            return;
          }
          (*(pMVar8->fields)._._.invoke_impl)
                    ((pMVar8->fields)._._.method_code,0,(pMVar8->fields)._._.method);
          return;
        }
      }
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}


/* HashSet`1[System.Int32] get_IgnoreWOIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_get_IgnoreWOIDs
          (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.worldObjectParent;
  if (this_00 != (MVWorldObjectClient *)0x0) {
    pHVar1 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                       (this_00,(MethodInfo *)0x0);
    if ((this->fields)._AdditionalIgnoreWOIDS_k__BackingField != (HashSet_1_System_Int32_ *)0x0) {
      if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__UnionWith
                (pHVar1,(IEnumerable_1_System_Int32_ *)
                        (this->fields)._AdditionalIgnoreWOIDS_k__BackingField,
                 MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
                );
    }
    return pHVar1;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  pHVar1 = (HashSet_1_System_Int32_ *)(*pcVar2)();
  return pHVar1;
}

