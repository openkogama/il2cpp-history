
/* Void CheckHit(Boolean) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_CheckHit
               (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    radius = (pPVar1->fields)._.radius;
    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      obj = (this->fields)._.weaponHandle;
      fVar2 = (pPVar1->fields)._.range;
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar4 = (obj->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&VStack_3);
        pMVar7 = (this->fields)._._._.owner;
        if (pMVar7 != (MVPickupOwner *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                             (&VStack_9,&(pMVar7->fields).lookDirection,method);
          VStack_10.x = pVVar8->x;
          VStack_10.y = pVVar8->y;
          fVar11 = VStack_3.x - VStack_10.x * radius;
          fVar12 = VStack_3.y - VStack_10.y * radius;
          fVar13 = VStack_3.z - pVVar8->z * radius;
          pMVar7 = (this->fields)._._._.owner;
          if (pMVar7 != (MVPickupOwner *)0x0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                               (&VStack_10,&(pMVar7->fields).lookDirection,method);
            aRStack_14[0].m_Origin.y = fVar12;
            aRStack_14[0].m_Origin.x = fVar11;
            aRStack_14[0].m_Origin.z = fVar13;
            VStack_3.x = pVVar8->x;
            VStack_3.y = pVVar8->y;
            fVar11 = pVVar8->z;
            VStack_3.z = fVar11;
            VStack_9._0_8_ = VStack_3._0_8_;
            fVar12 = (float)FUN_?(&VStack_3);
            if (_UNK_? < fVar12) {
              VStack_3.x = VStack_9.x / fVar12;
              fVar11 = fVar11 / fVar12;
              VStack_3.y = VStack_9.y / fVar12;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_3.x = (pVVar15->zeroVector).x;
              VStack_3.y = (pVVar15->zeroVector).y;
              fVar11 = (pVVar15->zeroVector).z;
            }
            pMVar7 = (this->fields)._._._.owner;
            aRStack_14[0].m_Direction.x = VStack_3.x;
            if (pMVar7 != (MVPickupOwner *)0x0) {
              ignoreWoIds = (HashSet_1_System_Int32_ *)
                            (*(pMVar7->klass->vtable).get_IgnoreWOIDs.methodPtr)
                                      (pMVar7,(pMVar7->klass->vtable).get_IgnoreWOIDs.method);
              uVar16 = aRStack_14[0]._8_8_;
              uVar6 = aRStack_14[0].m_Origin._0_8_;
              aRStack_14[0].m_Direction.z = fVar11;
              aRStack_14[0].m_Direction.y = VStack_3.y;
              uVar17._4_4_ = fVar11;
              uVar17._0_4_ = VStack_3.y;
              voxelHits = CollisionDetection::CollisionDetection_MVSphereCastAll
                                    (aRStack_14,radius,fVar2 + radius,ignoreWoIds,
                                     (this->fields)._.hitLayerMask,(MethodInfo *)0x0);
              if (voxelHits != (List_1_VoxelHit_ *)0x0) {
                if ((0 < (voxelHits->fields)._size) &&
                   (aRStack_14[0].m_Origin._0_8_ = uVar6, aRStack_14[0]._8_8_ = uVar16,
                   aRStack_14[0].m_Direction._4_8_ = uVar17,
                   PickupItemMeleeWeapon_OnHit(this,voxelHits,aRStack_14,(MethodInfo *)0x0),
                   isLocal != 0)) {
                  PickupItemMeleeWeapon_OnLocalHit(this,voxelHits,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator CheckHitCoroutine(Boolean) */

IEnumerator *
Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_CheckHitCoroutine
          (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__30);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__30);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    *(bool *)&pIVar1[2].monitor = isLocal;
    return pIVar1;
  }
  uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  *(bool *)&pIVar1[2].monitor = isLocal;
  return pIVar1;
}


/* PickupItemEditable+EditableItemConfiguration GetDefaultConfiguration() */

PickupItemEditable_EditableItemConfiguration *
Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_GetDefaultConfiguration
          (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitEffectColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
           FUN_?(TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
  PickupItemEditable+EditableItemConfiguration::PickupItemEditable_EditableItemConfiguration__ctor
            (pPVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = (String *)
           Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
           MeleeWeaponData_DefaultValue(StringLiteral_Name,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
    if (pSVar2 == (String *)0x0) {
      (pPVar1->fields).name = (String *)0x0;
    }
    else {
      pSVar3 = (String *)0x0;
      if (pSVar2->klass == pSRam0000000182dbbc60) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 == (String *)0x0) {
        FUN_?(pSVar2,pSRam0000000182dbbc60);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
      (pPVar1->fields).name = pSVar3;
      pSVar3 = (String *)0x0;
      if (pSVar2->klass == pSRam0000000182dbbc60) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 == (String *)0x0) {
        FUN_?(pSVar2);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
             MeleeWeaponData_DefaultValue(StringLiteral_Damage,(MethodInfo *)0x0);
    if (pOVar10 != (Object *)0x0) {
      if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar10,lRam_?);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
      (pPVar1->fields).damage = *(float *)&pOVar10[1].klass;
      pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
               MeleeWeaponData_DefaultValue(StringLiteral_ImpulseStrength,(MethodInfo *)0x0);
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar10,lRam_?);
          pcVar4 = (code *)swi(3);
          pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
          return pPVar1;
        }
        (pPVar1->fields).impulseStrength = *(float *)&pOVar10[1].klass;
        pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                 MeleeWeaponData_DefaultValue(StringLiteral_RecoilStrength,(MethodInfo *)0x0);
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar10,lRam_?);
            pcVar4 = (code *)swi(3);
            pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
            return pPVar1;
          }
          (pPVar1->fields).recoilStrength = *(float *)&pOVar10[1].klass;
          pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                   MeleeWeaponData_DefaultValue(StringLiteral_AttackAnimationTime,(MethodInfo *)0x0)
          ;
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar10,lRam_?);
              pcVar4 = (code *)swi(3);
              pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
              return pPVar1;
            }
            (pPVar1->fields).fireAnimationTime = *(float *)&pOVar10[1].klass;
            pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                     MeleeWeaponData_DefaultValue(StringLiteral_AttackCooldown,(MethodInfo *)0x0);
            if (pOVar10 != (Object *)0x0) {
              if ((pOVar10->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar10,lRam_?);
                pcVar4 = (code *)swi(3);
                pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                return pPVar1;
              }
              (pPVar1->fields).attackCooldown = *(float *)&pOVar10[1].klass;
              pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                       MeleeWeaponData_DefaultValue(StringLiteral_Range,(MethodInfo *)0x0);
              if (pOVar10 != (Object *)0x0) {
                if ((pOVar10->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar10,lRam_?);
                  pcVar4 = (code *)swi(3);
                  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                  return pPVar1;
                }
                (pPVar1->fields).range = *(float *)&pOVar10[1].klass;
                pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                         MeleeWeaponData_DefaultValue(StringLiteral_Radius,(MethodInfo *)0x0);
                if (pOVar10 != (Object *)0x0) {
                  if ((pOVar10->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar10,lRam_?);
                    pcVar4 = (code *)swi(3);
                    pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                    return pPVar1;
                  }
                  (pPVar1->fields).radius = *(float *)&pOVar10[1].klass;
                  pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                           MeleeWeaponData_DefaultValue
                                     (StringLiteral_FireSoundEffect,(MethodInfo *)0x0);
                  if (pOVar10 != (Object *)0x0) {
                    if ((pOVar10->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar10,lRam_?);
                      pcVar4 = (code *)swi(3);
                      pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                      return pPVar1;
                    }
                    (pPVar1->fields).fireSoundEffect = *(int32_t *)&pOVar10[1].klass;
                    pOVar10 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                             MeleeWeaponData_DefaultValue
                                       (StringLiteral_HitSoundEffect,(MethodInfo *)0x0);
                    if (pOVar10 != (Object *)0x0) {
                      if ((pOVar10->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar10,lRam_?);
                        pcVar4 = (code *)swi(3);
                        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                        return pPVar1;
                      }
                      (pPVar1->fields).hitSoundEffect = *(int32_t *)&pOVar10[1].klass;
                      pCVar11 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                                MeleeWeaponData_DefaultColor
                                          (&CStack_12,StringLiteral_TrailColor,(MethodInfo *)0x0);
                      pMVar13 = *(MonitorData **)&pCVar11->b;
                      pPVar1[1].klass =
                           *(PickupItemEditable_EditableItemConfiguration__Class **)pCVar11;
                      pPVar1[1].monitor = pMVar13;
                      pCVar11 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                                MeleeWeaponData_DefaultColor
                                          (&CStack_12,StringLiteral_HitEffectColor,(MethodInfo *)0x0
                                          );
                      fVar14 = pCVar11->b;
                      fVar15 = pCVar11->a;
                      pPVar1[1].fields.name = *(String **)pCVar11;
                      pPVar1[1].fields.cubeModelId = (int32_t)fVar14;
                      pPVar1[1].fields.maxAmmo = fVar15;
                      return pPVar1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
  return pPVar1;
}


/* Void InitializeAudioPlayers() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_InitializeAudioPlayers
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.fireAudioPlayer;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = (CustomItemAudioPlayer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                      ((Object *)pCVar1,pTVar2,
                       CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                      );
  bVar3 = iRam_? != 0;
  (this->fields)._.fireAudioPlayer = pCVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.fireAudioPlayer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pCVar1 = (this->fields)._.hitAudioPlayer;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pCVar1 = (CustomItemAudioPlayer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                      ((Object *)pCVar1,pTVar2,
                       CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                      );
  bVar3 = iRam_? != 0;
  (this->fields)._.hitAudioPlayer = pCVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.hitAudioPlayer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pCVar1 = (this->fields)._.fireAudioPlayer;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
    CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
              (pCVar1,TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                       static_fields->fireSoundEffects,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._.hitAudioPlayer;
    if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
      pSVar8 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
               static_fields->hitSoundEffects;
      if (cRam_? == '\0') {
        FUN_?(&
                      UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      StreamedAudioClipManual_MethodInfo__UnityEngine__GameObject__AddComponent<StreamedAudioClipManual>__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__GameObject);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_AuidoClipStream);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = (ValueAnimation_1_StyleValues_ *)0x0;
      uStack_10 = 0;
      pAVar11 = (AudioSource *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pCVar1,
                          UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                         );
      bVar3 = iRam_? != 0;
      (pCVar1->fields).audioSource = pAVar11;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(pCVar1->fields).audioSource >> 0xc);
        uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar12 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar12 | 1L << (ulonglong)(uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pAVar11 = (pCVar1->fields).audioSource;
      if (pAVar11 != (AudioSource *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (pAVar11->fields)._._._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar11,(MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pcVar14 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pcRam_? = pcVar14;
        fVar16 = (float)(*pcRam_?)(pvVar13);
        bVar3 = iRam_? != 0;
        (pCVar1->fields).baseVolume = fVar16;
        (pCVar1->fields).clipNames = pSVar8;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(pCVar1->fields).clipNames >> 0xc);
          uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar12 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar12 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pCVar17 = (pCVar1->fields).audioClips;
        uVar4 = 0;
        if (pCVar17 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
          lVar5 = 0;
          ppSVar18 = pSVar8->vector;
          do {
            if ((int)pCVar17->max_length <= (int)uVar4) {
              return;
            }
            pCVar17 = (pCVar1->fields).audioClips;
            if (pCVar17 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) break;
            if ((uint)pCVar17->max_length <= uVar4) goto code_?;
            puVar19 = (undefined8 *)((longlong)&pCVar17->vector[0].clipURL + lVar5);
            value = (Func_2_Single_Single_ *)*puVar19;
            uStack_9 = (ValueAnimation_1_StyleValues_ *)puVar19[1];
            uStack_10 = *(undefined8 *)((longlong)&pCVar17->vector[0].pitchVariation + lVar5);
            pSVar20 = *(String **)((longlong)&pCVar17->vector[0].clipURL + lVar5);
            if ((pSVar20 != ::StringLiteral__) &&
               ((((pSVar20 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
                 ((pSVar20->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
                (bVar21 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)&(pSVar20->fields)._firstChar,
                                    (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                    (longlong)(pSVar20->fields)._stringLength * 2,(MethodInfo *)0x0)
                , bVar21 == 0)))) {
              if (pSVar8 == (String__Array *)0x0) break;
              if ((uint)pSVar8->max_length <= uVar4) {
code_?:
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pSVar20 = mscorlib.dll::System::String::String_Concat_4
                                  (*ppSVar18,StringLiteral_AuidoClipStream,(MethodInfo *)0x0);
              this_00 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                        (this_00,pSVar20,(MethodInfo *)0x0);
              if (this_00 == (GameObject *)0x0) break;
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_00,(MethodInfo *)0x0);
              value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pCVar1,(MethodInfo *)0x0);
              if (pTVar2 == (Transform *)0x0) break;
              method_00 = (MethodInfo *)0x0;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar2,value_00,(MethodInfo *)0x0);
              uStack_9 = (ValueAnimation_1_StyleValues_ *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (this_00,
                                     StreamedAudioClipManual_MethodInfo__UnityEngine__GameObject__AddComponent<StreamedAudioClipManual>__
                                    );
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&uStack_9 >> 0xc);
                uVar6 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                method_00 = (MethodInfo *)(ulonglong)(uVar22 & 0x3f);
                do {
                  uVar12 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                  puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                  LOCK();
                  bVar3 = uVar12 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar12 | 1L << (longlong)method_00;
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              if (uStack_9 == (ValueAnimation_1_StyleValues_ *)0x0) break;
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
              ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_easingCurve
                        (uStack_9,value,method_00);
              pCVar17 = (pCVar1->fields).audioClips;
              if (pCVar17 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) break;
              if ((uint)pCVar17->max_length <= uVar4) goto code_?;
              uStack_23 = SUB84(value,0);
              uStack_24 = (undefined4)((ulonglong)value >> 0x20);
              puVar25 = (undefined4 *)((longlong)&pCVar17->vector[0].clipURL + lVar5);
              *puVar25 = uStack_23;
              puVar25[1] = uStack_24;
              puVar25[2] = (undefined4)uStack_9;
              puVar25[3] = uStack_9._4_4_;
              *(undefined8 *)((longlong)&pCVar17->vector[0].pitchVariation + lVar5) = uStack_10;
              func_?((longlong)&pCVar17->vector[0].clipURL + lVar5);
            }
            pCVar17 = (pCVar1->fields).audioClips;
            uVar4 = uVar4 + 1;
            ppSVar18 = ppSVar18 + 1;
            lVar5 = lVar5 + 0x18;
          } while (pCVar17 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0);
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_InterruptFire
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  PickupItemEditable::PickupItemEditable_InterruptFire((PickupItemEditable *)this,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields).animationEventHandler;
  if (this_00 != (MeleeWeaponAnimationEventHandler *)0x0) {
    MeleeWeaponAnimationEventHandler::MeleeWeaponAnimationEventHandler_MeleeWeaponArcEnd
              (this_00,(MethodInfo *)0x0);
    this_01 = (this->fields)._.fireAudioPlayer;
    if (this_01 != (CustomItemAudioPlayer *)0x0) {
      CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(this_01,(MethodInfo *)0x0);
      if ((this->fields).checkHitCoroutine != (IEnumerator *)0x0) {
        routine = (this->fields).checkHitCoroutine;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Coroutines);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (this_02 == (MonoBehaviour *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                  (this_02,routine,(MethodInfo *)0x0);
        bVar1 = iRam_? != 0;
        (this->fields).checkHitCoroutine = (IEnumerator *)0x0;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).checkHitCoroutine >> 0xc);
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
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsSameItemData(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_IsSameItemData
               (PickupItemMeleeWeapon *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitEffectColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    pSVar2 = (pPVar1->fields)._.name;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = (String *)
             Extensions::Extensions_GetValueOrDefault_3
                       (itemData,StringLiteral_Name,(Object *)StringLiteral_error,
                        System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                       );
    if ((pSVar2 != pSVar3) &&
       ((((pSVar2 == (String *)0x0 || (pSVar3 == (String *)0x0)) ||
         ((pSVar2->fields)._stringLength != (pSVar3->fields)._stringLength)) ||
        (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar2->fields)._firstChar,
                            (uint8_t *)&(pSVar3->fields)._firstChar,
                            (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar4 == 0)))) {
      return 0;
    }
    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      fVar5 = (pPVar1->fields)._.damage;
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar6 = _UNK_?;
      fVar7 = Extensions::Extensions_GetValueOrDefault_4
                         (itemData,StringLiteral_Damage,_UNK_?,
                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                         );
      if (fVar5 != fVar7) {
        return 0;
      }
      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        fVar5 = (pPVar1->fields)._.impulseStrength;
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar7 = Extensions::Extensions_GetValueOrDefault_4
                           (itemData,StringLiteral_ImpulseStrength,fVar6,
                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                           );
        if (fVar5 != fVar7) {
          return 0;
        }
        pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          fVar5 = (pPVar1->fields)._.recoilStrength;
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar7 = Extensions::Extensions_GetValueOrDefault_4
                             (itemData,StringLiteral_RecoilStrength,fVar6,
                              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                             );
          if (fVar5 != fVar7) {
            return 0;
          }
          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
            fVar5 = (pPVar1->fields)._.fireAnimationTime;
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            fVar7 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_AttackAnimationTime,fVar6,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
            if (fVar5 != fVar7) {
              return 0;
            }
            pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
              fVar5 = (pPVar1->fields)._.attackCooldown;
              if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                FUN_?();
              }
              fVar7 = Extensions::Extensions_GetValueOrDefault_4
                                 (itemData,StringLiteral_AttackCooldown,fVar6,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 );
              if (fVar5 != fVar7) {
                return 0;
              }
              pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                fVar5 = (pPVar1->fields)._.range;
                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                fVar7 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_Range,fVar6,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   );
                if (fVar5 != fVar7) {
                  return 0;
                }
                pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                  fVar5 = (pPVar1->fields)._.radius;
                  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  fVar6 = Extensions::Extensions_GetValueOrDefault_4
                                     (itemData,StringLiteral_Radius,fVar6,
                                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                     );
                  if (fVar5 != fVar6) {
                    return 0;
                  }
                  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                    IVar8 = (pPVar1->fields)._.fireSoundEffect;
                    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    IVar9 = Extensions::Extensions_GetValueOrDefault_2
                                      (itemData,StringLiteral_FireSoundEffect,0xffffffff,
                                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                      );
                    if (IVar8 != IVar9) {
                      return 0;
                    }
                    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                      IVar8 = (pPVar1->fields)._.hitSoundEffect;
                      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      IVar9 = Extensions::Extensions_GetValueOrDefault_2
                                        (itemData,StringLiteral_HitSoundEffect,0xffffffff,
                                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                        );
                      if (IVar8 != IVar9) {
                        return 0;
                      }
                      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                        fVar5 = (pPVar1->fields).trailColor.r;
                        fVar6 = (pPVar1->fields).trailColor.g;
                        fVar7 = (pPVar1->fields).trailColor.b;
                        fVar10 = (pPVar1->fields).trailColor.a;
                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        CStack_11.r = _UNK_?;
                        CStack_11.g = _UNK_?;
                        CStack_11.b = _UNK_?;
                        CStack_11.a = _UNK_?;
                        pCVar12 = Extensions::Extensions_GetColorOrDefault
                                           (aCStack_13,itemData,StringLiteral_TrailColor,&CStack_11,
                                            (MethodInfo *)0x0);
                        fVar14 = _UNK_?;
                        fVar5 = fVar5 - pCVar12->r;
                        fVar6 = fVar6 - pCVar12->g;
                        fVar7 = fVar7 - pCVar12->b;
                        fVar10 = fVar10 - pCVar12->a;
                        if (_UNK_? <=
                            fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 + fVar10 * fVar10) {
                          return 0;
                        }
                        pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                          fVar5 = (pPVar1->fields).hitEffectColor.r;
                          fVar6 = (pPVar1->fields).hitEffectColor.g;
                          fVar7 = (pPVar1->fields).hitEffectColor.b;
                          fVar10 = (pPVar1->fields).hitEffectColor.a;
                          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          CStack_11.r = _UNK_?;
                          CStack_11.g = _UNK_?;
                          CStack_11.b = _UNK_?;
                          CStack_11.a = _UNK_?;
                          pCVar12 = Extensions::Extensions_GetColorOrDefault
                                             (aCStack_13,itemData,StringLiteral_HitEffectColor,
                                              &CStack_11,(MethodInfo *)0x0);
                          fVar5 = fVar5 - pCVar12->r;
                          fVar6 = fVar6 - pCVar12->g;
                          fVar7 = fVar7 - pCVar12->b;
                          fVar10 = fVar10 - pCVar12->a;
                          return fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 +
                                 fVar10 * fVar10 < fVar14;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar4 = (*pcVar15)();
  return bVar4;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnFire
               (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.fireAudioPlayer;
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
  if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields)._.fireAudioPlayer;
      if (pCVar1 == (CustomItemAudioPlayer *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar2 = (pCVar1->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      pAVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                         (pAVar2,(MethodInfo *)0x0);
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
      if (pAVar3 == (AudioClip *)0x0) {
code_?:
        fVar4 = 0.0;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pAVar3->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
        pAVar2 = (pCVar1->fields).audioSource;
        if ((pAVar2 == (AudioSource *)0x0) ||
           (pAVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                               (pAVar2,(MethodInfo *)0x0), pAVar3 == (AudioClip *)0x0))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioClip>_UnityEngine__AudioClip_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pAVar3->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        fVar4 = (float)(*pcRam_?)(pvVar5);
      }
      pPVar8 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar8 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)
      goto code_?;
      fVar4 = fVar4 / (pPVar8->fields)._.fireAnimationTime;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (_UNK_? < fVar4) {
        fVar4 = _UNK_?;
      }
      pAVar2 = (pCVar1->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar2,fVar4,(MethodInfo *)0x0);
      pCVar1 = (this->fields)._.fireAudioPlayer;
      pPVar8 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if ((pPVar8 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) ||
         (aVStack_9[0].x = 0.0, aVStack_9[0].y = 0.0, pCVar1 == (CustomItemAudioPlayer *)0x0))
      goto code_?;
      aVStack_9[0].z = 0.0;
      aVStack_9[0].x = 0.0;
      aVStack_9[0].y = 0.0;
      CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
                (pCVar1,(pPVar8->fields)._.fireSoundEffect,0,aVStack_9,(MethodInfo *)0x0);
    }
  }
  PickupItemEditable::PickupItemEditable_PlayAnimation((PickupItemEditable *)this,(MethodInfo *)0x0)
  ;
  if ((this->fields).checkHitCoroutine != (IEnumerator *)0x0) {
    pIVar10 = (this->fields).checkHitCoroutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar11 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (pMVar11 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (pMVar11,pIVar10,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__30);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar10 = (IEnumerator *)FUN_?(TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__30);
  *(undefined4 *)&pIVar10[1].klass = 0;
  pIVar10[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar12 = (uint)((ulonglong)(pIVar10 + 2) >> 0xc);
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar16 = uVar14 == *puVar15;
      if (bVar16) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar16);
  }
  iVar17 = iRam_?;
  *(bool *)&pIVar10[2].monitor = isLocal;
  (this->fields).checkHitCoroutine = pIVar10;
  if (iVar17 != 0) {
    uVar12 = (uint)((ulonglong)&(this->fields).checkHitCoroutine >> 0xc);
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar16 = uVar14 == *puVar15;
      if (bVar16) {
        *puVar15 = uVar14 | 1L << (ulonglong)(uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar16);
  }
  pIVar10 = (this->fields).checkHitCoroutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar11 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
  if (pMVar11 != (MonoBehaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              (pMVar11,pIVar10,(MethodInfo *)0x0);
    (this->fields)._._.isFiring = 0;
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnHit(List`1[VoxelHit], Ray) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnHit
               (PickupItemMeleeWeapon *this,List_1_VoxelHit_ *voxelHits,Ray *lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__ParticleSystem__Burst);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStack_1.m_InvProbability = 0.0;
  PStack_1._52_4_ = 0;
  PStack_1.m_Time = 0.0;
  PStack_1._4_4_ = 0;
  PStack_1.m_Count.m_Mode = 0;
  PStack_1.m_Count.m_CurveMultiplier = 0.0;
  PStack_1.m_Count.m_CurveMin = (void *)0x0;
  PStack_1.m_Count.m_CurveMax = (void *)0x0;
  PStack_1.m_Count.m_ConstantMin = 0.0;
  PStack_1.m_Count.m_ConstantMax = 0.0;
  PStack_1.m_RepeatCount = 0;
  PStack_1.m_RepeatInterval = 0.0;
  if (voxelHits != (List_1_VoxelHit_ *)0x0) {
    if ((voxelHits->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar3 = (voxelHits->fields)._items;
    if (pVVar3 != (VoxelHit__Array *)0x0) {
      if ((int)pVVar3->max_length == 0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = pVVar3->vector[0].normal.y;
      uVar5 = pVVar3->vector[0].normal.z;
      uStack_6 = *(undefined8 *)&pVVar3->vector[0].cubePos;
      uStack_7._0_4_ = pVVar3->vector[0].face;
      uStack_7._4_1_ = pVVar3->vector[0].isCubeHit;
      uStack_7._5_3_ = *(undefined3 *)&pVVar3->vector[0].field_0x25;
      uStack_8 = *(undefined8 *)&pVVar3->vector[0].woId;
      pVVar9 = pVVar3->vector;
      uVar10 = *(undefined8 *)&pVVar9->point;
      uVar11._0_4_ = (pVVar9->point).x;
      uVar11._4_4_ = (pVVar9->point).y;
      fVar12 = pVVar3->vector[0].point.z;
      fVar13 = pVVar3->vector[0].normal.x;
      pCStack_14 = pVVar3->vector[0].cube;
      uStack_15 = *(undefined8 *)&pVVar3->vector[0].distance;
      pCStack_16 = pVVar3->vector[0].collider;
      pTStack_17 = pVVar3->vector[0].transform;
      iStack_18 = pVVar3->vector[0].interactionFlags;
      fStack_19 = (float)uVar4;
      fStack_20 = (float)uVar5;
      if ((voxelHits->fields)._size == 0) goto code_?;
      if (pVVar3 != (VoxelHit__Array *)0x0) {
        if ((int)pVVar3->max_length == 0) goto code_?;
        uStack_7._0_4_ = pVVar3->vector[0].face;
        uStack_7._4_1_ = pVVar3->vector[0].isCubeHit;
        uStack_7._5_3_ = *(undefined3 *)&pVVar3->vector[0].field_0x25;
        uStack_8 = *(undefined8 *)&pVVar3->vector[0].woId;
        pCStack_14 = pVVar3->vector[0].cube;
        uStack_15 = *(undefined8 *)&pVVar3->vector[0].distance;
        pCStack_16 = pVVar3->vector[0].collider;
        pTStack_17 = pVVar3->vector[0].transform;
        fStack_19 = pVVar3->vector[0].normal.y;
        fVar21 = pVVar3->vector[0].normal.z;
        uStack_6 = *(undefined8 *)&pVVar3->vector[0].cubePos;
        iStack_18 = pVVar3->vector[0].interactionFlags;
        uStack_22 = uVar11;
        fStack_23 = fVar12;
        fStack_24 = fVar13;
        fStack_20 = fVar21;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        NStack_25.value.g = fVar21;
        NStack_26._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
        NStack_25.value.r = fStack_19;
        NStack_25._0_4_ = fStack_24;
        NStack_26.value.g = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
        QStack_27.x = 0.0;
        QStack_27.y = 0.0;
        QStack_27.z = 0.0;
        QStack_27.w = 0.0;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(&NStack_25,&NStack_26,&QStack_27);
        uVar28 = 0;
        pPVar29 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar29 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          NStack_26.value.g = (pPVar29->fields).hitEffectColor.g;
          NStack_26.value.b = (pPVar29->fields).hitEffectColor.b;
          NStack_25.value.a = (pPVar29->fields).hitEffectColor.a;
          NStack_25.hasValue = (bool)1;
          NStack_25._1_3_ = SUB43(1 >> 8,0);
          NStack_26.hasValue = NStack_25.hasValue;
          NStack_26._1_3_ = NStack_25._1_3_;
          NStack_26.value.r = (pPVar29->fields).hitEffectColor.r;
          NStack_25.value.b = (pPVar29->fields).hitEffectColor.b;
          NStack_25.value.g = fVar12;
          NStack_25._0_8_ = uVar10;
          NStack_26.value.a = NStack_25.value.a;
          pPVar30 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                              (PoolEnums__Enum_WhiteSparks,(Vector3 *)&NStack_25,&QStack_27,
                               (Nullable_1_Single_)0x0,&NStack_26,(MethodInfo *)0x0);
          pPVar29 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          if ((pPVar29 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
             (UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
              ParticleSystem_Burst__ctor
                        (&PStack_1,0.0,(int16_t)(int)(pPVar29->fields)._.damage,(MethodInfo *)0x0),
             pPVar30 != (ParticleSystem *)0x0)) {
            if (iRam_? != 0) {
              uVar31 = (uint)((ulonglong)&pPStackX_10 >> 0xc);
              uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
              do {
                uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
                puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
                LOCK();
                bVar35 = uVar33 == *puVar34;
                if (bVar35) {
                  *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
                }
                UNLOCK();
              } while (!bVar35);
            }
            pPStackX_10 = pPVar30;
            PStack_36.m_ParticleSystem = pPVar30;
            bursts = (ParticleSystem_Burst__Array *)
                     FUN_?(TypeInfo__UnityEngine__ParticleSystem__Burst,1);
            if (bursts != (ParticleSystem_Burst__Array *)0x0) {
              if ((int)bursts->max_length == 0) goto code_?;
              bursts->vector[0].m_Time = PStack_1.m_Time;
              *(undefined4 *)&bursts->vector[0].field_0x4 = PStack_1._4_4_;
              bursts->vector[0].m_Count.m_Mode = PStack_1.m_Count.m_Mode;
              bursts->vector[0].m_Count.m_CurveMultiplier = PStack_1.m_Count.m_CurveMultiplier;
              bursts->vector[0].m_Count.m_CurveMin = PStack_1.m_Count.m_CurveMin;
              bursts->vector[0].m_Count.m_CurveMax = PStack_1.m_Count.m_CurveMax;
              bursts->vector[0].m_Count.m_ConstantMin = PStack_1.m_Count.m_ConstantMin;
              bursts->vector[0].m_Count.m_ConstantMax = PStack_1.m_Count.m_ConstantMax;
              bursts->vector[0].m_RepeatCount = PStack_1.m_RepeatCount;
              bursts->vector[0].m_RepeatInterval = PStack_1.m_RepeatInterval;
              bursts->vector[0].m_InvProbability = PStack_1.m_InvProbability;
              *(undefined4 *)&bursts->vector[0].field_0x34 = PStack_1._52_4_;
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
              ParticleSystem_EmissionModule_SetBursts_1
                        (&PStack_36,bursts,(int32_t)bursts->max_length,(MethodInfo *)0x0);
              this_00 = (this->fields)._.hitAudioPlayer;
              pPVar29 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar29 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                if ((voxelHits->fields)._size == 0) goto code_?;
                pVVar3 = (voxelHits->fields)._items;
                if (pVVar3 != (VoxelHit__Array *)0x0) {
                  if ((int)pVVar3->max_length == 0) goto code_?;
                  uVar37 = pVVar3->vector[0].normal.y;
                  uVar38 = pVVar3->vector[0].normal.z;
                  uStack_6 = *(undefined8 *)&pVVar3->vector[0].cubePos;
                  uStack_7._0_4_ = pVVar3->vector[0].face;
                  uStack_7._4_1_ = pVVar3->vector[0].isCubeHit;
                  uStack_7._5_3_ = *(undefined3 *)&pVVar3->vector[0].field_0x25;
                  uStack_8 = *(undefined8 *)&pVVar3->vector[0].woId;
                  pCStack_14 = pVVar3->vector[0].cube;
                  uStack_15 = *(undefined8 *)&pVVar3->vector[0].distance;
                  pCStack_16 = pVVar3->vector[0].collider;
                  pTStack_17 = pVVar3->vector[0].transform;
                  iStack_18 = pVVar3->vector[0].interactionFlags;
                  fStack_19 = (float)uVar37;
                  fStack_20 = (float)uVar38;
                  if (this_00 != (CustomItemAudioPlayer *)0x0) {
                    NStack_25.value.g = pVVar3->vector[0].point.z;
                    NStack_25._0_8_ = *(undefined8 *)&pVVar3->vector[0].point;
                    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
                              (this_00,(pPVar29->fields)._.hitSoundEffect,1,(Vector3 *)&NStack_25,
                               (MethodInfo *)0x0);
                    uVar32 = uVar28;
                    while( true ) {
                      uVar31 = (uint)uVar28;
                      if ((voxelHits->fields)._size <= (int)uVar31) {
                        return;
                      }
                      if ((uint)(voxelHits->fields)._size <= uVar31) break;
                      pVVar3 = (voxelHits->fields)._items;
                      if (pVVar3 == (VoxelHit__Array *)0x0) goto code_?;
                      if ((uint)pVVar3->max_length <= uVar31) goto code_?;
                      QStack_27.x = (lineOfFire->m_Origin).x;
                      QStack_27.y = (lineOfFire->m_Origin).y;
                      QStack_27._8_8_ = *(undefined8 *)&(lineOfFire->m_Origin).z;
                      uStack_39._0_4_ = (lineOfFire->m_Direction).y;
                      uStack_39._4_4_ = (lineOfFire->m_Direction).z;
                      puVar40 = (undefined8 *)((longlong)&pVVar3->vector[0].point.x + uVar32);
                      uStack_22 = *puVar40;
                      uVar11 = puVar40[1];
                      puVar40 = (undefined8 *)((longlong)&pVVar3->vector[0].normal.y + uVar32);
                      uVar10 = *puVar40;
                      uStack_6 = puVar40[1];
                      fStack_23 = (float)uVar11;
                      fStack_24 = (float)((ulonglong)uVar11 >> 0x20);
                      puVar40 = (undefined8 *)((longlong)&pVVar3->vector[0].face + uVar32);
                      uStack_7 = *puVar40;
                      uStack_8 = puVar40[1];
                      fStack_19 = (float)uVar10;
                      fStack_20 = (float)((ulonglong)uVar10 >> 0x20);
                      puVar40 = (undefined8 *)((longlong)&pVVar3->vector[0].cube + uVar32);
                      pCStack_14 = (Cube *)*puVar40;
                      uStack_15 = puVar40[1];
                      puVar40 = (undefined8 *)((longlong)&pVVar3->vector[0].collider + uVar32);
                      pCStack_16 = (Collider *)*puVar40;
                      pTStack_17 = (Transform *)puVar40[1];
                      iStack_18 = *(int64_t *)
                                   ((longlong)&pVVar3->vector[0].interactionFlags + uVar32);
                      (*(this->klass->vtable).OnHit.methodPtr)
                                (this,&uStack_22,&QStack_27,(this->klass->vtable).OnHit.method);
                      uVar28 = (ulonglong)(uVar31 + 1);
                      uVar32 = uVar32 + 0x58;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLocalHit(List`1[VoxelHit]) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnLocalHit
               (PickupItemMeleeWeapon *this,List_1_VoxelHit_ *voxelHits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) &&
     (this_00 = (RuntimeEventManager *)(pWVar3->fields)._.runtimeEventManagerNetwork,
     voxelHits != (List_1_VoxelHit_ *)0x0)) {
    if ((voxelHits->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pVVar5 = (voxelHits->fields)._items;
    if (pVVar5 != (VoxelHit__Array *)0x0) {
      if ((int)pVVar5->max_length == 0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      auStack_6._0_4_ = pVVar5->vector[0].point.x;
      auStack_6._4_4_ = pVVar5->vector[0].point.y;
      auStack_6._8_8_ = *(undefined8 *)&pVVar5->vector[0].point.z;
      VStack_7.face = pVVar5->vector[0].face;
      VStack_7.isCubeHit = pVVar5->vector[0].isCubeHit;
      VStack_7._37_3_ = *(undefined3 *)&pVVar5->vector[0].field_0x25;
      VStack_7.woId = pVVar5->vector[0].woId;
      VStack_7._44_4_ = *(undefined4 *)&pVVar5->vector[0].field_0x2c;
      uVar8 = pVVar5->vector[0].normal.y;
      uVar9 = pVVar5->vector[0].normal.z;
      VStack_7.cubePos = pVVar5->vector[0].cubePos;
      VStack_7._30_2_ = *(undefined2 *)&pVVar5->vector[0].field_0x1e;
      VStack_7.collider = pVVar5->vector[0].collider;
      VStack_7.transform = pVVar5->vector[0].transform;
      VStack_7.cube = pVVar5->vector[0].cube;
      VStack_7.distance = pVVar5->vector[0].distance;
      VStack_7._60_4_ = *(undefined4 *)&pVVar5->vector[0].field_0x3c;
      VStack_7.interactionFlags = pVVar5->vector[0].interactionFlags;
      VStack_7.normal.y = (float)uVar8;
      VStack_7.normal.z = (float)uVar9;
      if ((voxelHits->fields)._size == 0) goto code_?;
      if (pVVar5 != (VoxelHit__Array *)0x0) {
        if ((int)pVVar5->max_length == 0) goto code_?;
        VStack_10.x = pVVar5->vector[0].normal.y;
        VStack_10.y = pVVar5->vector[0].normal.z;
        unique0x1000027e = pVVar5->vector[0].cubePos;
        unique0x10000284 = *(undefined2 *)&pVVar5->vector[0].field_0x1e;
        VStack_7.point.x = pVVar5->vector[0].point.x;
        VStack_7.point.y = pVVar5->vector[0].point.y;
        uVar11 = *(undefined8 *)&pVVar5->vector[0].point.z;
        VStack_7.point.z = (float)uVar11;
        VStack_7.normal.x = (float)((ulonglong)uVar11 >> 0x20);
        VStack_7.face = pVVar5->vector[0].face;
        VStack_7.isCubeHit = pVVar5->vector[0].isCubeHit;
        VStack_7._37_3_ = *(undefined3 *)&pVVar5->vector[0].field_0x25;
        VStack_7.woId = pVVar5->vector[0].woId;
        VStack_7._44_4_ = *(undefined4 *)&pVVar5->vector[0].field_0x2c;
        VStack_7.cube = pVVar5->vector[0].cube;
        VStack_7.distance = pVVar5->vector[0].distance;
        VStack_7._60_4_ = *(undefined4 *)&pVVar5->vector[0].field_0x3c;
        VStack_7.collider = pVVar5->vector[0].collider;
        VStack_7.transform = pVVar5->vector[0].transform;
        VStack_7.interactionFlags = pVVar5->vector[0].interactionFlags;
        VStack_7.normal.y = VStack_10.x;
        VStack_7.normal.z = VStack_10.y;
        VStack_7._24_8_ = unique0x1000027e;
        runtimeEvent = (RuntimeEvent *)
                       FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
        VStack_12.y = VStack_7.normal.y;
        VStack_12.x = VStack_7.normal.x;
        (runtimeEvent->fields)._RuntimeEventType_k__BackingField = 0xf;
        uVar11._0_4_ = (float)auStack_6._0_4_;
        uVar11._4_4_ = (float)auStack_6._4_4_;
        VStack_12.z = VStack_10.y;
        stack0xffffffffffffff60 = CONCAT44(uStack_13,auStack_6._8_4_);
        VStack_10._0_8_ = uVar11;
        pIVar14 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                  CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                            (&IStackX_20,&VStack_10,&VStack_12,(MethodInfo *)0x0);
        iVar15 = pIVar14->y;
        iVar16 = pIVar14->z;
        (runtimeEvent->fields).position.x = pIVar14->x;
        (runtimeEvent->fields).position.y = iVar15;
        (runtimeEvent->fields).position.z = iVar16;
        if (this_00 != (RuntimeEventManager *)0x0) {
          bVar17 = RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                             (this_00,(ExplosionEvent *)runtimeEvent,(MethodInfo *)0x0);
          if (bVar17 != 0) {
            this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_SendRuntimeEventOperation
                      (this_01,runtimeEvent,(MethodInfo *)0x0);
          }
          uVar18 = 0;
          lVar19 = 0;
          while( true ) {
            if ((voxelHits->fields)._size <= (int)uVar18) {
              return;
            }
            if ((uint)(voxelHits->fields)._size <= uVar18) break;
            pVVar5 = (voxelHits->fields)._items;
            if (pVVar5 == (VoxelHit__Array *)0x0) goto code_?;
            if ((uint)pVVar5->max_length <= uVar18) goto code_?;
            puVar20 = (undefined8 *)((longlong)&pVVar5->vector[0].point.x + lVar19);
            VStack_7.point._0_8_ = *puVar20;
            uVar11 = puVar20[1];
            puVar20 = (undefined8 *)((longlong)&pVVar5->vector[0].normal.y + lVar19);
            uVar21 = *puVar20;
            VStack_7._24_8_ = puVar20[1];
            VStack_7.point.z = (float)uVar11;
            VStack_7.normal.x = (float)((ulonglong)uVar11 >> 0x20);
            puVar20 = (undefined8 *)((longlong)&pVVar5->vector[0].face + lVar19);
            VStack_7._32_8_ = *puVar20;
            VStack_7._40_8_ = puVar20[1];
            VStack_7.normal.y = (float)uVar21;
            VStack_7.normal.z = (float)((ulonglong)uVar21 >> 0x20);
            puVar20 = (undefined8 *)((longlong)&pVVar5->vector[0].cube + lVar19);
            VStack_7.cube = (Cube *)*puVar20;
            VStack_7._56_8_ = puVar20[1];
            puVar20 = (undefined8 *)((longlong)&pVVar5->vector[0].collider + lVar19);
            VStack_7.collider = (Collider *)*puVar20;
            VStack_7.transform = (Transform *)puVar20[1];
            VStack_7.interactionFlags =
                 *(int64_t *)((longlong)&pVVar5->vector[0].interactionFlags + lVar19);
            PickupItemMeleeWeapon_OnLocalHit_1(this,&VStack_7,(MethodInfo *)0x0);
            uVar18 = uVar18 + 1;
            lVar19 = lVar19 + 0x58;
          }
          goto code_?;
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


/* Void OnLocalHit(VoxelHit) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnLocalHit_1
               (PickupItemMeleeWeapon *this,VoxelHit *voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit->woId,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,id,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClient *)0x0) {
        pIVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                           (this_01,(MethodInfo *)0x0);
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
        if (pIVar2 != (InteractionDataHandlerBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pIVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar3 != (MVNetworkGame *)0x0) &&
                (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
               && (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (this_00,(MethodInfo *)0x0), this_02 != (MVLocalPlayer *)0x0)
               ) {
              method_01 = (MethodInfo *)0x0;
              bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                ((MVPlayer *)this_02,this_01,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                return;
              }
              pMVar5 = (this->fields)._._._.owner;
              if (pMVar5 != (MVPickupOwner *)0x0) {
                method_00 = (MethodInfo *)&(pMVar5->fields).lookDirection;
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                   ((Vector3 *)aIStack_7,(Vector3 *)method_00,method_01);
                aIStack_7[0].damage = pVVar6->x;
                aIStack_7[0].impulse.x = pVVar6->y;
                IStack_8.impulse.y = pVVar6->z;
                fVar9 = _UNK_?;
                if ((aIStack_7[0].impulse.x < _UNK_?) ||
                   (fVar9 = _UNK_?, fVar10 = aIStack_7[0].impulse.x,
                   _UNK_? < aIStack_7[0].impulse.x)) {
                  fVar10 = fVar9;
                }
                IStack_8.impulse.x = fVar10;
                IStack_8.damage = aIStack_7[0].damage;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                          ((Vector3 *)&IStack_8,method_00);
                pPVar11 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                fVar9 = IStack_8.impulse.y;
                if (pPVar11 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                  fVar10 = (pPVar11->fields)._.impulseStrength;
                  fVar12 = IStack_8.damage;
                  fVar13 = IStack_8.impulse.x;
                  fVar14 = fVar10 * IStack_8.damage;
                  fVar15 = fVar10 * IStack_8.impulse.x;
                  fVar10 = fVar10 * IStack_8.impulse.y;
                  pMVar5 = (this->fields)._._._.owner;
                  uVar16 = 0;
                  pPVar11 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar11 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                    aIStack_7[0].interactionType = 0;
                    aIStack_7[0].playerKilledByType = 0;
                    aIStack_7[0]._18_2_ = 0;
                    aIStack_7[0].damage = 0.0;
                    aIStack_7[0].impulse.x = 0.0;
                    aIStack_7[0].impulse.y = 0.0;
                    aIStack_7[0].impulse.z = 0.0;
                    IStack_8.impulse.x = fVar15;
                    IStack_8.damage = fVar14;
                    IStack_8.impulse.y = fVar10;
                    MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                              (aIStack_7,
                               (InteractionPackageType__Enum)
                               CONCAT71((int7)((ulonglong)uVar16 >> 8),5),(pPVar11->fields)._.damage,
                               (Vector3 *)&IStack_8,
                               (PlayerKilledByType__Enum)
                               CONCAT71((int7)((ulonglong)in_stack_17 >> 8),7),
                               (MethodInfo *)0x0);
                    IStack_8.interactionType = aIStack_7[0].interactionType;
                    IStack_8.playerKilledByType = aIStack_7[0].playerKilledByType;
                    IStack_8._18_2_ = aIStack_7[0]._18_2_;
                    IStack_8.damage = aIStack_7[0].damage;
                    IStack_8.impulse.x = aIStack_7[0].impulse.x;
                    IStack_8.impulse.y = aIStack_7[0].impulse.y;
                    IStack_8.impulse.z = aIStack_7[0].impulse.z;
                    (*(pIVar2->klass->vtable).__unknown_1.methodPtr)
                              (pIVar2,pMVar5,&IStack_8,0,
                               (pIVar2->klass->vtable).__unknown_1.method);
                    pMVar5 = (this->fields)._._._.owner;
                    if (pMVar5 != (MVPickupOwner *)0x0) {
                      this_03 = (MVRigidBody *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_GetComponent_1
                                          ((Component *)pMVar5,
                                           MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                          );
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
                      if (this_03 == (MVRigidBody *)0x0) {
                        return;
                      }
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if ((this_03->fields)._._._._._.m_CachedPtr == (void *)0x0) {
                        return;
                      }
                      fVar12 = (float)((uint)fVar12 ^ _UNK_?);
                      fVar13 = (float)((uint)fVar13 ^ _UNK_?);
                      fVar9 = (float)((uint)fVar9 ^ _UNK_?);
                      pPVar11 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar11 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                        fVar10 = (pPVar11->fields)._.recoilStrength;
                        IStack_8.impulse.y = fVar9 * fVar10;
                        IStack_8.impulse.x = fVar13 * fVar10;
                        IStack_8.damage = fVar12 * fVar10;
                        MVRigidBody::MVRigidBody_AddImpulse_1
                                  (this_03,(Vector3 *)&IStack_8,0,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnPickupNewEditableItem() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnPickupNewEditableItem
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._._._.muzzlePoint;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    uVar7 = uStack_3;
    pTVar1 = (this->fields)._._._.muzzlePoint;
    uStack_8 = uStack_2;
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = 0;
      uStack_10 = 0;
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      pPVar11 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar11 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        fVar12 = (pPVar11->fields)._.radius;
        pPVar11 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar11 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          pTVar1 = (this->fields)._._._.muzzlePoint;
          uStack_8 = CONCAT44((fVar12 + (pPVar11->fields)._.range) *
                               (_UNK_? / (float)uStack_9) * _UNK_?,
                               (undefined4)uStack_8);
          if (pTVar1 != (Transform *)0x0) {
            uStack_2 = uStack_8;
            uStack_3 = uVar7;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar4,&uStack_2);
            return;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnUnequip
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pPVar1 = this->klass;
  (this->fields).isUnequipped = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pPVar1->vtable).InterruptFire.methodPtr)(this,(pPVar1->vtable).InterruptFire.method);
  return;
}


/* Void SetConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_SetConfiguration
               (PickupItemMeleeWeapon *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModelId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitEffectColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    IVar3 = (pPVar2->fields)._.cubeModelId;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,IVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = IVar3;
      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
         (pSVar4 = (String *)
                   Extensions::Extensions_GetValueOrDefault_3
                             (itemData,StringLiteral_Name,(Object *)(pPVar2->fields)._.name,
                              System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                             ), pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)) {
        bVar5 = iRam_? != 0;
        (pPVar1->fields)._.name = pSVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
           (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_Damage,(pPVar2->fields)._.damage,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               ), pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0))
        {
          (pPVar1->fields)._.damage = fVar10;
          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
             (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                 (itemData,StringLiteral_ImpulseStrength,
                                  (pPVar2->fields)._.impulseStrength,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 ), pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)
             ) {
            (pPVar1->fields)._.impulseStrength = fVar10;
            pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
            pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
               (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_RecoilStrength,
                                    (pPVar2->fields)._.recoilStrength,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   ),
               pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)) {
              (pPVar1->fields)._.recoilStrength = fVar10;
              pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
                 (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                     (itemData,StringLiteral_AttackAnimationTime,
                                      (pPVar2->fields)._.fireAnimationTime,
                                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                     ),
                 pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)) {
                (pPVar1->fields)._.fireAnimationTime = fVar10;
                pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
                   (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                       (itemData,StringLiteral_AttackCooldown,
                                        (pPVar2->fields)._.attackCooldown,
                                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                       ),
                   pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)) {
                  (pPVar1->fields)._.attackCooldown = fVar10;
                  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
                     (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                         (itemData,StringLiteral_Range,(pPVar2->fields)._.range,
                                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                         ),
                     pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)) {
                    (pPVar1->fields)._.range = fVar10;
                    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                    pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                    if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
                       (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                           (itemData,StringLiteral_Radius,(pPVar2->fields)._.radius,
                                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                           ),
                       pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)) {
                      (pPVar1->fields)._.radius = fVar10;
                      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
                         (IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                            (itemData,StringLiteral_FireSoundEffect,
                                             (pPVar2->fields)._.fireSoundEffect,
                                             int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                            ),
                         pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)) {
                        (pPVar1->fields)._.fireSoundEffect = IVar3;
                        pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                        pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                        if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
                           (IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                              (itemData,StringLiteral_HitSoundEffect,
                                               (pPVar2->fields)._.hitSoundEffect,
                                               int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                              ),
                           pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)) {
                          (pPVar1->fields)._.hitSoundEffect = IVar3;
                          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                          pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                          if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                            CStack_11.r = (pPVar2->fields).trailColor.r;
                            CStack_11.g = (pPVar2->fields).trailColor.g;
                            CStack_11.b = (pPVar2->fields).trailColor.b;
                            CStack_11.a = (pPVar2->fields).trailColor.a;
                            pCVar12 = Extensions::Extensions_GetColorOrDefault
                                                (&CStack_13,itemData,StringLiteral_TrailColor,
                                                 &CStack_11,(MethodInfo *)0x0);
                            fVar10 = pCVar12->g;
                            fVar14 = pCVar12->b;
                            fVar15 = pCVar12->a;
                            if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                              (pPVar1->fields).trailColor.r = pCVar12->r;
                              (pPVar1->fields).trailColor.g = fVar10;
                              (pPVar1->fields).trailColor.b = fVar14;
                              (pPVar1->fields).trailColor.a = fVar15;
                              pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                 (this,(MethodInfo *)0x0);
                              pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                 (this,(MethodInfo *)0x0);
                              if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                                CStack_11.r = (pPVar2->fields).hitEffectColor.r;
                                CStack_11.g = (pPVar2->fields).hitEffectColor.g;
                                CStack_11.b = (pPVar2->fields).hitEffectColor.b;
                                CStack_11.a = (pPVar2->fields).hitEffectColor.a;
                                pCVar12 = Extensions::Extensions_GetColorOrDefault
                                                    (&CStack_13,itemData,
                                                     StringLiteral_HitEffectColor,&CStack_11,
                                                     (MethodInfo *)0x0);
                                fVar10 = pCVar12->g;
                                fVar14 = pCVar12->b;
                                fVar15 = pCVar12->a;
                                if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)
                                {
                                  (pPVar1->fields).hitEffectColor.r = pCVar12->r;
                                  (pPVar1->fields).hitEffectColor.g = fVar10;
                                  (pPVar1->fields).hitEffectColor.b = fVar14;
                                  (pPVar1->fields).hitEffectColor.a = fVar15;
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* PickupItemMeleeWeapon() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon__ctor
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.a = (float)uVar4;
  uVar4 = _UNK_?;
  (this->fields)._._.crossHairCanFire.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._._.crossHairCanFire.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields)._._.crossHairCanFire.a = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._._.crossHairCannotFireHigh.a = (float)uVar4;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3._0_4_ = 0.0;
  uVar3._4_1_ = 0;
  uVar3._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uVar3._0_4_ = 1.0;
    uVar3._4_1_ = 0;
    uVar3._5_3_ = 0;
  }
  bVar7 = iRam_? != 0;
  pPVar8 = &(this->fields)._;
  (this->fields)._._.fireInterval.currentCryptoKey = 0;
  (pPVar8->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  pPVar9 = &this->fields;
  (pPVar9->_)._.fireInterval.fakeValue = (float)uVar3;
  (pPVar9->_)._.fireInterval.inited = SUB81(uVar3,4);
  *(int3 *)&(pPVar9->_)._.fireInterval.field_0x15 = SUB83(uVar3,5);
  if (bVar7) {
    uVar10 = (uint)((ulonglong)&(this->fields)._._.fireInterval.hiddenValueOld >> 0xc);
    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar12 == *puVar13;
      if (bVar7) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar14 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar7 = iRam_? != 0;
  (this->fields)._._._.meshRenderers = pMVar14;
  if (bVar7) {
    uVar10 = (uint)((ulonglong)&(this->fields)._._._.meshRenderers >> 0xc);
    puVar13 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar12 = *puVar13;
      LOCK();
      uVar11 = *puVar13;
      if (uVar12 == uVar11) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (uVar12 != uVar11);
  }
  bVar7 = cRam_? == '\0';
  (this->fields)._._._._AbleToFire_k__BackingField = 1;
  if (bVar7) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar15 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar16 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar17 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar18 = ppMVar16;
  if (lVar17 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar17 = lRam_?;
  }
  else {
    do {
      uVar10 = (uint)ppMVar18;
      LOCK();
      bVar7 = uVar10 != uRam_?;
      uVar19 = uVar10;
      uVar20 = uVar10 + 1;
      if (bVar7) {
        uVar19 = uRam_?;
        uVar20 = uRam_?;
      }
      uRam_? = uVar20;
      UNLOCK();
    } while ((bVar7) && (ppMVar18 = (MethodInfo **)(ulonglong)uVar19, uVar10 = uVar19, uVar19 != 2)
            );
    while (uVar10 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar10 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar17;
  puVar21 = &(pOVar15->_1).field_0x1c;
  LOCK();
  bVar7 = *(int *)puVar21 == 1;
  if (bVar7) {
    *(undefined4 *)puVar21 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar10 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar22 = &(pOVar15->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar7 = *puVar22 == 1;
  if (bVar7) {
    *puVar22 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar10 = GetCurrentThreadId();
    psVar23 = &(pOVar15->_1).cctor_thread;
    LOCK();
    bVar7 = (ulonglong)uVar10 == *psVar23;
    if (bVar7) {
      *psVar23 = (ulonglong)uVar10;
    }
    UNLOCK();
    if (bVar7) {
      return;
    }
    while( true ) {
      puVar21 = &(pOVar15->_1).field_0x1c;
      LOCK();
      bVar7 = *(int *)puVar21 == 1;
      if (bVar7) {
        *(undefined4 *)puVar21 = 1;
      }
      UNLOCK();
      if (bVar7) break;
      LOCK();
      lVar17._0_4_ = (pOVar15->_1).initializationExceptionGCHandle;
      lVar17._4_4_ = (pOVar15->_1).cctor_started;
      if (lVar17 == 0) {
        (pOVar15->_1).initializationExceptionGCHandle = 0;
        (pOVar15->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar17 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar24._0_4_ = (pOVar15->_1).initializationExceptionGCHandle;
    lVar24._4_4_ = (pOVar15->_1).cctor_started;
    if (lVar24 == 0) {
      return;
    }
  }
  else {
    uVar10 = GetCurrentThreadId();
    LOCK();
    (pOVar15->_1).cctor_thread = (ulonglong)uVar10;
    UNLOCK();
    LOCK();
    (pOVar15->_1).cctor_finished_or_no_cctor = 1;
    uVar10 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar15->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar15);
      ppMVar18 = ppMVar16;
      pIVar25 = (Il2CppClass *)pOVar15;
code_?:
      do {
        if (ppMVar18 == (MethodInfo **)0x0) {
          FUN_?(pIVar25);
          if (pIVar25->field_count != 0) {
            ppMVar18 = pIVar25->methods;
            pMVar26 = *ppMVar18;
code_?:
            if (pMVar26 != (MethodInfo *)0x0) {
              if ((*pMVar26->name == '.') && ((pMVar26->flags & 0x800) != 0)) {
                ppMVar27 = ppMVar16;
                while (ppMVar28 = ppMVar27 + 0x30529dd4,
                      ppMVar27 = (MethodInfo **)((longlong)ppMVar27 + 1),
                      *(char *)ppMVar28 == (pMVar26->name + -1)[(longlong)ppMVar27]) {
                  if (ppMVar27 == (MethodInfo **)0x7) {
                    FUN_?(pMVar26,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar18 = ppMVar18 + 1;
          if (ppMVar18 < pIVar25->methods + pIVar25->field_count) {
            pMVar26 = *ppMVar18;
            goto code_?;
          }
        }
        pIVar25 = pIVar25->parent;
        ppMVar18 = ppMVar16;
      } while (pIVar25 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar15->_1).cctor_thread = 0;
    uVar11 = _UNK_?;
    uVar3 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar15->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_29 = 0;
    uStack_30 = _UNK_?;
    uStack_31 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar15->_0).byval_arg,0,0);
    pppppppuVar24 = &pppppppuStack_78;
    if (0xf < uStack_31) {
      pppppppuVar24 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar24);
    if (uStack_31 < 0x10) {
code_?:
      lVar17 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar24 = &pppppppuStack_58;
      if (0xf < uStack_32) {
        pppppppuVar24 = pppppppuStack_58;
      }
      uStack_30 = uVar3;
      uStack_31 = uVar11;
      lVar24 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar24);
      if (lVar17 != 0) {
        *(longlong *)(lVar24 + 0x28U) = lVar17;
        if (iRam_? != 0) {
          uVar10 = (uint)(lVar24 + 0x28U >> 0xc);
          puVar13 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar13;
            LOCK();
            uVar11 = *puVar13;
            if (uVar12 == uVar11) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar11);
        }
      }
      FUN_?(pOVar15,lVar24);
      if (0xf < uStack_32) {
        pppppppuVar24 = pppppppuStack_58;
        if ((0xfff < uStack_32 + 1) &&
           (pppppppuVar24 = (undefined8 *******)pppppppuStack_58[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar24))))
        goto code_?;
        func_?(pppppppuVar24);
      }
      goto code_?;
    }
    pppppppuVar24 = pppppppuStack_78;
    if ((uStack_31 + 1 < 0x1000) ||
       (pppppppuVar24 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar24)) < 0x20)) {
      func_?(pppppppuVar24);
      uVar3 = _UNK_?;
      uVar11 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar5._0_4_ = (pOVar15->_1).initializationExceptionGCHandle;
  uVar5._4_4_ = (pOVar15->_1).cctor_started;
  uVar3 = FUN_?(uVar5);
  FUN_?(uVar3,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* String get_AttackAnimationName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_AttackAnimationName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_MeleeWeaponSwing);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_MeleeWeaponSwing;
}


/* PickupItemMeleeWeapon+MeleeWeaponConfiguration get_Configuration() */

PickupItemMeleeWeapon_MeleeWeaponConfiguration *
Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_Configuration
          (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
           (this->fields)._._Configuration_k__BackingField;
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    bVar2 = (TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration->_1).naturalAligment;
    if (((pPVar1->klass->_1).naturalAligment < bVar2) ||
       ((pPVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration)) {
      FUN_?(pPVar1,TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
      pcVar3 = (code *)swi(3);
      pPVar1 = (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)(*pcVar3)();
      return pPVar1;
    }
  }
  return pPVar1;
}


/* String get_FireSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_FireSoundEffectName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->fireSoundEffects;
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
     (pSVar1 != (String__Array *)0x0)) {
    uVar3 = (pPVar2->fields)._.fireSoundEffect;
    if (uVar3 < (uint)pSVar1->max_length) {
      return pSVar1->vector[(int)uVar3];
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Color get_HitEffectColor() */

Color * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_HitEffectColor
                  (Color *__return_storage_ptr__,PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    fVar2 = (pPVar1->fields).hitEffectColor.g;
    fVar3 = (pPVar1->fields).hitEffectColor.b;
    fVar4 = (pPVar1->fields).hitEffectColor.a;
    __return_storage_ptr__->r = (pPVar1->fields).hitEffectColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* String get_HitSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_HitSoundEffectName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->hitSoundEffects;
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
     (pSVar1 != (String__Array *)0x0)) {
    uVar3 = (pPVar2->fields)._.hitSoundEffect;
    if (uVar3 < (uint)pSVar1->max_length) {
      return pSVar1->vector[(int)uVar3];
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Color get_TrailColor() */

Color * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_TrailColor
                  (Color *__return_storage_ptr__,PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    fVar2 = (pPVar1->fields).trailColor.g;
    fVar3 = (pPVar1->fields).trailColor.b;
    fVar4 = (pPVar1->fields).trailColor.a;
    __return_storage_ptr__->r = (pPVar1->fields).trailColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}

