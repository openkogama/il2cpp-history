
/* Void CheckHit(Boolean) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_CheckHit
               (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  pPVar4 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar4 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    pEStack_5 = (ExplosionEvent *)(pPVar4->fields)._.radius;
    pPVar4 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar4 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      fStack_6 = (pPVar4->fields)._.range;
      this_00 = (this->fields)._.weaponHandle;
      if (this_00 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_8,this_00,(MethodInfo *)0x0);
        uStack_9._0_4_ = pVVar7->x;
        uStack_9._4_4_ = pVVar7->y;
        pGStack_10 = (GamePassesTextBubble *)pVVar7->z;
        pMVar11 = (this->fields)._._._.owner;
        if (pMVar11 != (MVPickupOwner *)0x0) {
          pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection
                              (&VStack_12,pMVar11,(MethodInfo *)0x0);
          VStack_8.x = pVVar7->x;
          VStack_8.y = pVVar7->y;
          VStack_8.z = pVVar7->z;
          fStack_13 = (float)uStack_9 - VStack_8.x * (float)pEStack_5;
          fStack_14 = uStack_9._4_4_ - VStack_8.y * (float)pEStack_5;
          fStack_15 = (float)pGStack_10 - VStack_8.z * (float)pEStack_5;
          pMVar11 = (this->fields)._._._.owner;
          if (pMVar11 != (MVPickupOwner *)0x0) {
            pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                (&VStack_12,pMVar11,(MethodInfo *)0x0);
            fStack_16 = fStack_13;
            fStack_17 = fStack_14;
            fStack_18 = fStack_15;
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                (&VStack_12,*pVVar7,(MethodInfo *)0x0);
            uVar19 = pVVar7->x;
            uVar20 = pVVar7->y;
            pMVar11 = (this->fields)._._._.owner;
            fStack_3 = pVVar7->z;
            uStack_1 = uVar19;
            uStack_2 = uVar20;
            if (pMVar11 != (MVPickupOwner *)0x0) {
              ignoreWoIds = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar11->klass->vtable).get_IgnoreWOIDs.method)();
              ray.m_Direction.z = fStack_3;
              ray.m_Direction.y = (float)uStack_2;
              ray.m_Origin.y = fStack_17;
              ray.m_Origin.x = fStack_16;
              ray.m_Origin.z = fStack_18;
              ray.m_Direction.x = (float)uStack_1;
              this_02 = (List_1_GameTierProgressBar_TierProgressData_ *)
                        CollisionDetection::CollisionDetection_MVSphereCastAll
                                  (ray,(float)pEStack_5,fStack_6 + (float)pEStack_5,ignoreWoIds,
                                   (this->fields)._.hitLayerMask,(MethodInfo *)0x0);
              if (this_02 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                if (((this_02->fields)._size < 1) ||
                   (lineOfFire.m_Origin.y = fStack_17, lineOfFire.m_Origin.x = fStack_16,
                   lineOfFire.m_Origin.z = fStack_18, lineOfFire.m_Direction.x = (float)uStack_1,
                   lineOfFire.m_Direction.y = (float)uStack_2, lineOfFire.m_Direction.z = fStack_3
                   , PickupItemMeleeWeapon_OnHit
                               (this,(List_1_VoxelHit_ *)this_02,lineOfFire,(MethodInfo *)0x0),
                   isLocal == 0)) {
                  return;
                }
                if (cRam_? == '\0') {
                  func_?();
                  func_?();
                  func_?();
                  cRam_? = '\x01';
                }
                pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar21 != (MVNetworkGame *)0x0) &&
                   (pWVar22 = (pMVar21->fields).worldNetwork, pWVar22 != (WorldNetwork *)0x0)) {
                  this_01 = (RuntimeEventManager *)(pWVar22->fields)._.runtimeEventManagerNetwork;
                  pGVar23 = mscorlib.dll::System::Collections::Generic::
                            List`1[GameTierProgressBar+TierProgressData]::
                            List_1_GameTierProgressBar_TierProgressData__get_Item
                                      ((GameTierProgressBar_TierProgressData *)&stack0xffffff14,
                                       this_02,0,
                                       MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                      );
                  pPStack_24 = pGVar23->progressBar;
                  uStack_9._0_4_ = (float)pGVar23->progressText;
                  uStack_9._4_4_ = (float)pGVar23->progressDivider;
                  pGStack_10 = pGVar23->progressBarTextBubble;
                  pGVar23 = mscorlib.dll::System::Collections::Generic::
                            List`1[GameTierProgressBar+TierProgressData]::
                            List_1_GameTierProgressBar_TierProgressData__get_Item
                                      ((GameTierProgressBar_TierProgressData *)&stack0xffffff14,
                                       this_02,0,
                                       MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                      );
                  pGVar25 = pGVar23->progressBarTextBubble;
                  method_00 = (MethodInfo *)pGVar23->avatarHead;
                  VStack_12.x = (float)pGVar23->avatarHeadImage;
                  VStack_12.y = (float)pGVar23->avatarHeadUI;
                  VStack_12.z = (float)pGVar23->disabledProgressBar;
                  pEStack_5 = (ExplosionEvent *)func_?();
                  worldPosition.y = (float)uStack_9;
                  worldPosition.x = (float)pPStack_24;
                  worldPosition.z = uStack_9._4_4_;
                  normal.y = (float)method_00;
                  normal.x = (float)pGVar25;
                  normal.z = VStack_12.x;
                  MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
                  ExplosionEvent__ctor_1
                            (pEStack_5,RuntimeEventType__Enum_MeleeWeaponTerrainDestroy,
                             worldPosition,normal,(MethodInfo *)0x0);
                  if (this_01 != (RuntimeEventManager *)0x0) {
                    RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                              (this_01,pEStack_5,(MethodInfo *)0x0);
                    for (index = 0; index < (this_02->fields)._size; index = index + 1) {
                      pGVar23 = mscorlib.dll::System::Collections::Generic::
                                List`1[GameTierProgressBar+TierProgressData]::
                                List_1_GameTierProgressBar_TierProgressData__get_Item
                                          ((GameTierProgressBar_TierProgressData *)&stack0xffffff14,
                                           this_02,index,
                                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                          );
                      uVar26 = pGVar23->LockedTierIcon;
                      uVar27 = pGVar23->progressText;
                      uVar28 = pGVar23->progressDivider;
                      uVar29 = pGVar23->progressBarTextBubble;
                      uVar30 = pGVar23->avatarHead;
                      uVar31 = pGVar23->avatarHeadImage;
                      uVar32 = pGVar23->avatarHeadUI;
                      uVar33 = pGVar23->disabledProgressBar;
                      uVar34 = pGVar23->disabledProgressDivider;
                      uVar35 = pGVar23->disabledBarTextBubble;
                      uVar36 = pGVar23->tierIconTempUnlock;
                      uVar37 = pGVar23->tierIconNumber;
                      uVar38 = pGVar23->endResultProgressBar;
                      uVar39 = pGVar23->tempProgress;
                      uVar40 = pGVar23->disabledTempProgress;
                      uVar41 = pGVar23->freeTryTextBubble;
                      uVar42 = pGVar23->hoverInputHandler;
                      voxelHit._60_4_ = uVar42;
                      voxelHit.transform = (Transform *)uVar41;
                      voxelHit.collider = (Collider *)uVar40;
                      voxelHit.distance = (float)uVar39;
                      voxelHit.cube = (Cube *)uVar38;
                      voxelHit.woId = uVar37;
                      voxelHit._36_4_ = uVar36;
                      voxelHit.face = uVar35;
                      voxelHit._28_4_ = uVar34;
                      voxelHit.cubePos._0_4_ = uVar33;
                      voxelHit.normal.z = (float)uVar32;
                      voxelHit.normal.y = (float)uVar31;
                      voxelHit.normal.x = (float)uVar30;
                      voxelHit.point.z = (float)uVar29;
                      voxelHit.point.y = (float)uVar28;
                      voxelHit.point.x = (float)uVar27;
                      voxelHit.interactionFlags._0_4_ = uVar26;
                      voxelHit.interactionFlags._4_4_ = 0;
                      PickupItemMeleeWeapon_OnLocalHit_1(this,voxelHit,method_00);
                    }
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
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* IEnumerator CheckHitCoroutine(Boolean) */

IEnumerator *
Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_CheckHitCoroutine
          (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__28);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__28;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  *(bool *)&value[2].monitor = isLocal;
  return (IEnumerator *)value;
}


/* PickupItemEditable+EditableItemConfiguration GetDefaultConfiguration() */

PickupItemEditable_EditableItemConfiguration *
Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_GetDefaultConfiguration
          (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
           func_?(TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (pPVar1->fields).name = ::StringLiteral__;
  method_00 = (MethodInfo *)&pPVar1->fields;
  func_?(method_00,::StringLiteral__);
  (pPVar1->fields).cubeModelId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pPVar1,ExceptionArgument__Enum_obj,method_00);
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar2 = (String *)
           Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
           MeleeWeaponData_DefaultValue(StringLiteral_Name,(MethodInfo *)0x0);
  if (pSVar2 == (String *)0x0) {
    (pPVar1->fields).name = (String *)0x0;
  }
  else {
    pSVar3 = (String *)0x0;
    if (pSVar2->klass == TypeInfo__System__String) {
      pSVar3 = pSVar2;
    }
    if (pSVar3 == (String *)0x0) goto code_?;
    (pPVar1->fields).name = pSVar3;
    pSVar3 = (String *)0x0;
    if (pSVar2->klass == TypeInfo__System__String) {
      pSVar3 = pSVar2;
    }
    if (pSVar3 == (String *)0x0) goto code_?;
  }
  func_?();
  pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
           MeleeWeaponData_DefaultValue(StringLiteral_Damage,(MethodInfo *)0x0);
  if (pOVar4 != (Object *)0x0) {
    if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar5 = (float *)func_?();
    (pPVar1->fields).damage = *pfVar5;
    pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
             MeleeWeaponData_DefaultValue(StringLiteral_ImpulseStrength,(MethodInfo *)0x0);
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar5 = (float *)func_?();
      (pPVar1->fields).impulseStrength = *pfVar5;
      pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
               MeleeWeaponData_DefaultValue(StringLiteral_RecoilStrength,(MethodInfo *)0x0);
      if (pOVar4 != (Object *)0x0) {
        if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar5 = (float *)func_?();
        (pPVar1->fields).recoilStrength = *pfVar5;
        pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                 MeleeWeaponData_DefaultValue(StringLiteral_AttackAnimationTime,(MethodInfo *)0x0);
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar5 = (float *)func_?();
          (pPVar1->fields).fireAnimationTime = *pfVar5;
          pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                   MeleeWeaponData_DefaultValue(StringLiteral_AttackCooldown,(MethodInfo *)0x0);
          if (pOVar4 != (Object *)0x0) {
            if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
            goto code_?;
            pfVar5 = (float *)func_?();
            (pPVar1->fields).attackCooldown = *pfVar5;
            pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                     MeleeWeaponData_DefaultValue(StringLiteral_Range,(MethodInfo *)0x0);
            if (pOVar4 != (Object *)0x0) {
              if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
              goto code_?;
              pfVar5 = (float *)func_?();
              (pPVar1->fields).range = *pfVar5;
              pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                       MeleeWeaponData_DefaultValue(StringLiteral_Radius,(MethodInfo *)0x0);
              if (pOVar4 != (Object *)0x0) {
                if ((pOVar4->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar5 = (float *)func_?();
                (pPVar1->fields).radius = *pfVar5;
                pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                         MeleeWeaponData_DefaultValue
                                   (StringLiteral_FireSoundEffect,(MethodInfo *)0x0);
                if (pOVar4 != (Object *)0x0) {
                  if ((pOVar4->klass->_0).element_class !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  piVar6 = (int32_t *)func_?();
                  (pPVar1->fields).fireSoundEffect = *piVar6;
                  pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                           MeleeWeaponData_DefaultValue
                                     (StringLiteral_HitSoundEffect,(MethodInfo *)0x0);
                  if (pOVar4 != (Object *)0x0) {
                    if ((pOVar4->klass->_0).element_class ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar6 = (int32_t *)func_?();
                      (pPVar1->fields).hitSoundEffect = *piVar6;
                      pCVar7 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                                MeleeWeaponData_DefaultColor
                                          ((Color *)&stack0xffffffec,StringLiteral_TrailColor,
                                           (MethodInfo *)0x0);
                      pMVar8 = (MonitorData *)pCVar7->g;
                      pSVar2 = (String *)pCVar7->b;
                      fVar9 = pCVar7->a;
                      pPVar1[1].klass =
                           (PickupItemEditable_EditableItemConfiguration__Class *)pCVar7->r;
                      pPVar1[1].monitor = pMVar8;
                      pPVar1[1].fields.name = pSVar2;
                      pPVar1[1].fields.cubeModelId = (int32_t)fVar9;
                      pCVar7 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                                MeleeWeaponData_DefaultColor
                                          ((Color *)&stack0xffffffec,StringLiteral_HitEffectColor,
                                           (MethodInfo *)0x0);
                      fVar9 = pCVar7->g;
                      fVar10 = pCVar7->b;
                      fVar11 = pCVar7->a;
                      pPVar1[1].fields.maxAmmo = pCVar7->r;
                      pPVar1[1].fields.damage = fVar9;
                      pPVar1[1].fields.impulseStrength = fVar10;
                      pPVar1[1].fields.recoilStrength = fVar11;
                      return pPVar1;
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
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar12)();
  return pPVar1;
}


/* Void InitializeAudioPlayers() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_InitializeAudioPlayers
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&
                    CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.fireAudioPlayer;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (CustomItemAudioPlayer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                     ((Object *)pCVar1,pTVar2,
                      CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                     );
  (this->fields)._.fireAudioPlayer = pCVar1;
  func_?(&(this->fields)._.fireAudioPlayer,pCVar1);
  pCVar1 = (this->fields)._.hitAudioPlayer;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pCVar1 = (CustomItemAudioPlayer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                     ((Object *)pCVar1,pTVar2,
                      CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                     );
  (this->fields)._.hitAudioPlayer = pCVar1;
  func_?(&(this->fields)._.hitAudioPlayer,pCVar1);
  pCVar1 = (this->fields)._.fireAudioPlayer;
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
    CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
              (pCVar1,TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                      static_fields->fireSoundEffects,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._.hitAudioPlayer;
    if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
      CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
                (pCVar1,TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                        static_fields->hitSoundEffects,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_InterruptFire
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._.fireAudioPlayer;
  (this->fields)._._.isFiring = 0;
  if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
    CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(pCVar1,(MethodInfo *)0x0);
    if ((this->fields)._.animatorRoutine != (IEnumerator *)0x0) {
      Coroutines::Coroutines_Stop((this->fields)._.animatorRoutine,(MethodInfo *)0x0);
      (this->fields)._.animatorRoutine = (IEnumerator *)0x0;
      func_?(&(this->fields)._.animatorRoutine,0);
      PickupItemEditable::PickupItemEditable_DisableAnimation
                ((PickupItemEditable *)this,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).animationEventHandler;
    if (this_00 != (MeleeWeaponAnimationEventHandler *)0x0) {
      MeleeWeaponAnimationEventHandler::MeleeWeaponAnimationEventHandler_MeleeWeaponArcEnd
                (this_00,(MethodInfo *)0x0);
      pCVar1 = (this->fields)._.fireAudioPlayer;
      if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
        CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(pCVar1,(MethodInfo *)0x0);
        if ((this->fields).checkHitCoroutine != (IEnumerator *)0x0) {
          Coroutines::Coroutines_Stop((this->fields).checkHitCoroutine,(MethodInfo *)0x0);
          (this->fields).checkHitCoroutine = (IEnumerator *)0x0;
          func_?();
        }
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsSameItemData(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_IsSameItemData
               (PickupItemMeleeWeapon *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    a = (pPVar1->fields)._.name;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    b = (String *)
        Extensions::Extensions_GetValueOrDefault_3
                  (itemData,StringLiteral_Name,(Object *)StringLiteral_error,
                   System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                  );
    bVar2 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    CStack_3.a = (float)&UNK_?;
    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      fVar4 = (pPVar1->fields)._.damage;
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = Extensions::Extensions_GetValueOrDefault_4
                         (itemData,StringLiteral_Damage,-1.0,
                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                         );
      if (fVar4 != fVar5) {
        return 0;
      }
      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        fVar4 = (pPVar1->fields)._.impulseStrength;
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        fVar5 = Extensions::Extensions_GetValueOrDefault_4
                           (itemData,StringLiteral_ImpulseStrength,-1.0,
                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                           );
        if (fVar4 != fVar5) {
          return 0;
        }
        pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          fVar4 = (pPVar1->fields)._.recoilStrength;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          fVar5 = Extensions::Extensions_GetValueOrDefault_4
                             (itemData,StringLiteral_RecoilStrength,-1.0,
                              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                             );
          if (fVar4 != fVar5) {
            return 0;
          }
          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
            fVar4 = (pPVar1->fields)._.fireAnimationTime;
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Extensions);
            }
            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_AttackAnimationTime,-1.0,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
            if (fVar4 != fVar5) {
              return 0;
            }
            pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
              fVar4 = (pPVar1->fields)._.attackCooldown;
              if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Extensions);
              }
              fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                 (itemData,StringLiteral_AttackCooldown,-1.0,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 );
              if (fVar4 != fVar5) {
                return 0;
              }
              pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                fVar4 = (pPVar1->fields)._.range;
                if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Extensions);
                }
                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_Range,-1.0,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   );
                if (fVar4 != fVar5) {
                  return 0;
                }
                pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                  fVar4 = (pPVar1->fields)._.radius;
                  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Extensions);
                  }
                  fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                     (itemData,StringLiteral_Radius,-1.0,
                                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                     );
                  if (fVar4 != fVar5) {
                    return 0;
                  }
                  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                    IVar6 = (pPVar1->fields)._.fireSoundEffect;
                    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Extensions);
                    }
                    IVar7 = Extensions::Extensions_GetValueOrDefault_2
                                      (itemData,StringLiteral_FireSoundEffect,0xffffffff,
                                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                      );
                    if (IVar6 != IVar7) {
                      return 0;
                    }
                    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                      IVar6 = (pPVar1->fields)._.hitSoundEffect;
                      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Extensions);
                      }
                      IVar7 = Extensions::Extensions_GetValueOrDefault_2
                                        (itemData,StringLiteral_HitSoundEffect,0xffffffff,
                                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                        );
                      if (IVar6 != IVar7) {
                        return 0;
                      }
                      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                        fVar4 = (pPVar1->fields).trailColor.r;
                        fVar5 = (pPVar1->fields).trailColor.g;
                        fVar8 = (pPVar1->fields).trailColor.b;
                        fVar9 = (pPVar1->fields).trailColor.a;
                        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Extensions);
                        }
                        defaultColor.g = (float)_UNK_?;
                        defaultColor.r = (float)_UNK_?;
                        defaultColor.b = (float)_UNK_?;
                        defaultColor.a = _UNK_?;
                        pCVar10 = Extensions::Extensions_GetColorOrDefault
                                           (&CStack_3,itemData,StringLiteral_TrailColor,
                                            defaultColor,(MethodInfo *)0x0);
                        fVar4 = fVar4 - pCVar10->r;
                        fVar5 = fVar5 - pCVar10->g;
                        fVar8 = fVar8 - pCVar10->b;
                        fVar9 = fVar9 - pCVar10->a;
                        if (_UNK_? <=
                            fVar4 * fVar4 + fVar5 * fVar5 + fVar8 * fVar8 + fVar9 * fVar9) {
                          return 0;
                        }
                        pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                          fVar4 = (pPVar1->fields).hitEffectColor.r;
                          fVar5 = (pPVar1->fields).hitEffectColor.g;
                          fVar8 = (pPVar1->fields).hitEffectColor.b;
                          fVar9 = (pPVar1->fields).hitEffectColor.a;
                          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__Extensions);
                          }
                          defaultColor_00.g = (float)_UNK_?;
                          defaultColor_00.r = (float)_UNK_?;
                          defaultColor_00.b = (float)_UNK_?;
                          defaultColor_00.a = _UNK_?;
                          pCVar10 = Extensions::Extensions_GetColorOrDefault
                                             (&CStack_3,itemData,StringLiteral_HitEffectColor,
                                              defaultColor_00,(MethodInfo *)0x0);
                          fVar4 = fVar4 - pCVar10->r;
                          fVar5 = fVar5 - pCVar10->g;
                          fVar8 = fVar8 - pCVar10->b;
                          fVar9 = fVar9 - pCVar10->a;
                          return fVar4 * fVar4 + fVar5 * fVar5 + fVar8 * fVar8 + fVar9 * fVar9 <
                                 _UNK_?;
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
  func_?();
  pcVar11 = (code *)swi(3);
  bVar2 = (*pcVar11)();
  return bVar2;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnFire
               (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  _isLocal = (CustomItemAudioPlayer *)(uint)isLocal;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.fireAudioPlayer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (this->fields)._.fireAudioPlayer;
    if (pCVar1 == (CustomItemAudioPlayer *)0x0) goto code_?;
    fVar3 = CustomItemAudioPlayer::CustomItemAudioPlayer_get_ClipLength(pCVar1,(MethodInfo *)0x0);
    pPVar4 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar4 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) goto code_?;
    fVar3 = fVar3 / (pPVar4->fields)._.fireAnimationTime;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
    CustomItemAudioPlayer::CustomItemAudioPlayer_SetPitch(pCVar1,fVar3,(MethodInfo *)0x0);
    _isLocal = (this->fields)._.fireAudioPlayer;
    pPVar4 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if ((pPVar4 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) ||
       (_isLocal == (CustomItemAudioPlayer *)0x0)) goto code_?;
    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
              (_isLocal,(pPVar4->fields)._.fireSoundEffect,0,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pAVar5 = (this->fields)._.animator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar5 = (this->fields)._.animator;
    if (pAVar5 != (Animator *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pAVar5,1,(MethodInfo *)0x0);
      pAVar5 = (this->fields)._.animator;
      stateName = (String *)(*(code *)(this->klass->vtable).get_AttackAnimationName.method)();
      if (pAVar5 != (Animator *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animator::Animator_Play
                  (pAVar5,stateName,0,0.0,(MethodInfo *)0x0);
        if ((this->fields)._.animatorRoutine != (IEnumerator *)0x0) {
          Coroutines::Coroutines_Stop((this->fields)._.animatorRoutine,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39;
        pOVar6 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        pOVar6[1].klass = (Object__Class *)0x0;
        pOVar6[2].klass = (Object__Class *)this;
        func_?();
        (this->fields)._.animatorRoutine = (IEnumerator *)pOVar6;
        func_?();
        Coroutines::Coroutines_Start((this->fields)._.animatorRoutine,(MethodInfo *)0x0);
        goto code_?;
      }
    }
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  if ((this->fields).checkHitCoroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).checkHitCoroutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__28;
  pOVar6 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  pOVar6[1].klass = (Object__Class *)0x0;
  pOVar6[2].klass = (Object__Class *)this;
  func_?();
  *(bool *)&pOVar6[2].monitor = isLocal;
  (this->fields).checkHitCoroutine = (IEnumerator *)pOVar6;
  func_?();
  Coroutines::Coroutines_Start((this->fields).checkHitCoroutine,(MethodInfo *)0x0);
  (this->fields)._._.isFiring = 0;
  return;
}


/* Void OnHit(List`1[VoxelHit], Ray) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnHit
               (PickupItemMeleeWeapon *this,List_1_VoxelHit_ *voxelHits,Ray lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__ParticleSystem__Burst);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_)
    ;
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  puStack_2 = (undefined *)0x0;
  if (voxelHits != (List_1_VoxelHit_ *)0x0) {
    pGVar3 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&pPStack_4,
                        (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                        MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    pPStack_5 = pGVar3->progressBar;
    pTStack_6 = pGVar3->progressText;
    pGStack_7 = pGVar3->progressDivider;
    pGStack_8 = pGVar3->progressBarTextBubble;
    pGStack_9 = pGVar3->avatarHead;
    pRStack_10 = pGVar3->avatarHeadImage;
    pGStack_11 = pGVar3->avatarHeadUI;
    pPStack_12 = pGVar3->disabledProgressBar;
    pGStack_13 = pGVar3->disabledProgressDivider;
    pGStack_14 = pGVar3->disabledBarTextBubble;
    pGStack_15 = pGVar3->tierIconTempUnlock;
    pGStack_16 = pGVar3->tierIconNumber;
    pPStack_17 = pGVar3->endResultProgressBar;
    pGStack_18 = pGVar3->tempProgress;
    pGStack_19 = pGVar3->disabledTempProgress;
    pGStack_20 = pGVar3->freeTryTextBubble;
    uStack_21._0_4_ = pGVar3->hoverInputHandler;
    uStack_21._4_4_ = pGVar3->LockedTierIcon;
    pGVar3 = mscorlib.dll::System::Collections::Generic::
             List`1[GameTierProgressBar+TierProgressData]::
             List_1_GameTierProgressBar_TierProgressData__get_Item
                       ((GameTierProgressBar_TierProgressData *)&stack0xfffffecc,
                        (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                        MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    pPStack_4 = pGVar3->progressBar;
    pTStack_22 = pGVar3->progressText;
    pGStack_23 = pGVar3->progressDivider;
    pGStack_24 = pGVar3->progressBarTextBubble;
    pGStack_25 = pGVar3->avatarHead;
    pRStack_26 = pGVar3->avatarHeadImage;
    forward.x = (float)pGVar3->progressBarTextBubble;
    forward.y = (float)pGVar3->avatarHead;
    forward.z = (float)pGVar3->avatarHeadImage;
    pGStack_27 = pGVar3->avatarHeadUI;
    pPStack_28 = pGVar3->disabledProgressBar;
    pGStack_29 = pGVar3->disabledProgressDivider;
    pGStack_30 = pGVar3->disabledBarTextBubble;
    pGStack_31 = pGVar3->tierIconTempUnlock;
    pGStack_32 = pGVar3->tierIconNumber;
    pPStack_33 = pGVar3->endResultProgressBar;
    pGStack_34 = pGVar3->tempProgress;
    pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       (&QStack_36,forward,(MethodInfo *)0x0);
    QStack_36.x = pQVar35->x;
    QStack_36.y = pQVar35->y;
    QStack_36.z = pQVar35->z;
    QStack_36.w = pQVar35->w;
    NStack_37.hasValue = 0;
    NStack_37._1_3_ = 0;
    NStack_37.value = 0.0;
    pPVar38 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar38 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      value.m_XMin = (pPVar38->fields).hitEffectColor.r;
      value.m_YMin = (pPVar38->fields).hitEffectColor.g;
      value.m_Width = (pPVar38->fields).hitEffectColor.b;
      value.m_Height = (pPVar38->fields).hitEffectColor.a;
      NStack_39.value.m_Height = 0.0;
      NStack_39.hasValue = 0;
      NStack_39._1_3_ = 0;
      NStack_39.value.m_XMin = 0.0;
      NStack_39.value.m_YMin = 0.0;
      NStack_39.value.m_Width = 0.0;
      mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::Nullable_1_UnityEngine_Rect___ctor
                (&NStack_39,value,
                 MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_);
      position.y = (float)pTStack_6;
      position.x = (float)pPStack_5;
      position.z = (float)pGStack_7;
      rotation.y = QStack_36.y;
      rotation.x = QStack_36.x;
      rotation.z = QStack_36.z;
      rotation.w = QStack_36.w;
      color.value.r = NStack_39.value.m_XMin;
      color.hasValue = NStack_39.hasValue;
      color._1_3_ = NStack_39._1_3_;
      color.value.g = NStack_39.value.m_YMin;
      color.value.b = NStack_39.value.m_Width;
      color.value.a = NStack_39.value.m_Height;
      this_01 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                          (PoolEnums__Enum_WhiteSparks,position,rotation,NStack_37,color,
                           (MethodInfo *)0x0);
      pPVar38 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar38 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
        ParticleSystem_Burst__ctor
                  ((ParticleSystem_Burst *)&fStack_1,0.0,(int16_t)(int)(pPVar38->fields)._.damage,
                   (MethodInfo *)0x0);
        if (this_01 != (ParticleSystem *)0x0) {
          PStack_40.m_ParticleSystem =
               (ParticleSystem *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(this_01,(MethodInfo *)0x0);
          pAVar41 = (AnimationCurve *)0x1;
          pPVar42 = TypeInfo__UnityEngine__ParticleSystem__Burst;
          bursts = (ParticleSystem_Burst__Array *)func_?();
          if (bursts != (ParticleSystem_Burst__Array *)0x0) {
            if (bursts->max_length == 0) {
              func_?();
            }
            else {
              bursts->vector[0].m_Time = fStack_1;
              bursts->vector[0].m_Count.m_Mode = (int32_t)puStack_2;
              bursts->vector[0].m_Count.m_CurveMultiplier = (float)pPVar42;
              bursts->vector[0].m_Count.m_CurveMin = pAVar41;
              bursts->vector[0].m_Count.m_CurveMax = (AnimationCurve *)0x0;
              bursts->vector[0].m_Count.m_ConstantMin = 0.0;
              bursts->vector[0].m_Count.m_ConstantMax = 0.0;
              bursts->vector[0].m_RepeatCount = 0;
              bursts->vector[0].m_RepeatInterval = 0.0;
              bursts->vector[0].m_InvProbability = 0.0;
              func_?(&bursts->vector[0].m_Count.m_CurveMin,0);
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
              ParticleSystem_EmissionModule_SetBursts(&PStack_40,bursts,(MethodInfo *)0x0);
              this_00 = (this->fields)._.hitAudioPlayer;
              pPVar38 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar38 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                index = (pPVar38->fields)._.hitSoundEffect;
                pGVar3 = mscorlib.dll::System::Collections::Generic::
                         List`1[GameTierProgressBar+TierProgressData]::
                         List_1_GameTierProgressBar_TierProgressData__get_Item
                                   ((GameTierProgressBar_TierProgressData *)&stack0xfffffecc,
                                    (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                                    MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                   );
                pPStack_5 = pGVar3->progressBar;
                pTStack_6 = pGVar3->progressText;
                pGStack_7 = pGVar3->progressDivider;
                position_00.x = (float)pGVar3->progressBar;
                position_00.y = (float)pGVar3->progressText;
                position_00.z = (float)pGVar3->progressDivider;
                pGStack_8 = pGVar3->progressBarTextBubble;
                pGStack_9 = pGVar3->avatarHead;
                pRStack_10 = pGVar3->avatarHeadImage;
                pGStack_11 = pGVar3->avatarHeadUI;
                pPStack_12 = pGVar3->disabledProgressBar;
                pGStack_13 = pGVar3->disabledProgressDivider;
                pGStack_14 = pGVar3->disabledBarTextBubble;
                pGStack_15 = pGVar3->tierIconTempUnlock;
                pGStack_16 = pGVar3->tierIconNumber;
                pPStack_17 = pGVar3->endResultProgressBar;
                pGStack_18 = pGVar3->tempProgress;
                pGStack_19 = pGVar3->disabledTempProgress;
                pGStack_20 = pGVar3->freeTryTextBubble;
                uStack_21._0_4_ = pGVar3->hoverInputHandler;
                uStack_21._4_4_ = pGVar3->LockedTierIcon;
                if (this_00 != (CustomItemAudioPlayer *)0x0) {
                  CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
                            (this_00,index,1,position_00,(MethodInfo *)0x0);
                  for (index_00 = 0; index_00 < (voxelHits->fields)._size; index_00 = index_00 + 1)
                  {
                    pGVar3 = mscorlib.dll::System::Collections::Generic::
                             List`1[GameTierProgressBar+TierProgressData]::
                             List_1_GameTierProgressBar_TierProgressData__get_Item
                                       ((GameTierProgressBar_TierProgressData *)&stack0xfffffecc,
                                        (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,
                                        index_00,
                                        MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                       );
                    uVar43._0_4_ = pGVar3->hoverInputHandler;
                    uVar43._4_4_ = pGVar3->LockedTierIcon;
                    (*(code *)(this->klass->vtable).OnHit.method)
                              (this,pGVar3->progressBar,pGVar3->progressText,pGVar3->progressDivider
                               ,pGVar3->progressBarTextBubble,pGVar3->avatarHead,
                               pGVar3->avatarHeadImage,pGVar3->avatarHeadUI,
                               pGVar3->disabledProgressBar,pGVar3->disabledProgressDivider,
                               pGVar3->disabledBarTextBubble,pGVar3->tierIconTempUnlock,
                               pGVar3->tierIconNumber,pGVar3->endResultProgressBar,
                               pGVar3->tempProgress,pGVar3->disabledTempProgress,
                               pGVar3->freeTryTextBubble,uVar43);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
  return;
}


/* Void OnLocalHit(List`1[VoxelHit]) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnLocalHit
               (PickupItemMeleeWeapon *this,List_1_VoxelHit_ *voxelHits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    if (voxelHits != (List_1_VoxelHit_ *)0x0) {
      pGVar3 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)&stack0xffffff4c,
                           (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      worldPosition.x = (float)pGVar3->progressBar;
      worldPosition.y = (float)pGVar3->progressText;
      worldPosition.z = (float)pGVar3->progressDivider;
      pGVar3 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)&stack0xffffff4c,
                           (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      normal.x = (float)pGVar3->progressBarTextBubble;
      normal.y = (float)pGVar3->avatarHead;
      normal.z = (float)pGVar3->avatarHeadImage;
      this_01 = (ExplosionEvent *)
                func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
                (this_01,RuntimeEventType__Enum_MeleeWeaponTerrainDestroy,worldPosition,normal,
                 (MethodInfo *)0x0);
      if (this_00 != (RuntimeEventManager *)0x0) {
        RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent(this_00,this_01,(MethodInfo *)0x0)
        ;
        for (index = 0; index < (voxelHits->fields)._size; index = index + 1) {
          pGVar3 = mscorlib.dll::System::Collections::Generic::
                    List`1[GameTierProgressBar+TierProgressData]::
                    List_1_GameTierProgressBar_TierProgressData__get_Item
                              ((GameTierProgressBar_TierProgressData *)&stack0xffffff4c,
                               (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,index,
                               MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                              );
          uVar4 = pGVar3->progressText;
          uVar5 = pGVar3->progressDivider;
          uVar6 = pGVar3->progressBarTextBubble;
          uVar7 = pGVar3->avatarHead;
          uVar8 = pGVar3->avatarHeadImage;
          uVar9 = pGVar3->avatarHeadUI;
          uVar10 = pGVar3->disabledProgressBar;
          uVar11 = pGVar3->disabledProgressDivider;
          uVar12 = pGVar3->disabledBarTextBubble;
          uVar13 = pGVar3->tierIconTempUnlock;
          uVar14 = pGVar3->tierIconNumber;
          uVar15 = pGVar3->endResultProgressBar;
          uVar16 = pGVar3->tempProgress;
          uVar17 = pGVar3->disabledTempProgress;
          uVar18 = pGVar3->freeTryTextBubble;
          uVar19 = pGVar3->hoverInputHandler;
          uVar20 = pGVar3->LockedTierIcon;
          voxelHit.interactionFlags._0_4_ = uVar20;
          voxelHit._60_4_ = uVar19;
          voxelHit.transform = (Transform *)uVar18;
          voxelHit.collider = (Collider *)uVar17;
          voxelHit.distance = (float)uVar16;
          voxelHit.cube = (Cube *)uVar15;
          voxelHit.woId = uVar14;
          voxelHit._36_4_ = uVar13;
          voxelHit.face = uVar12;
          voxelHit._28_4_ = uVar11;
          voxelHit.cubePos._0_4_ = uVar10;
          voxelHit.normal.z = (float)uVar9;
          voxelHit.normal.y = (float)uVar8;
          voxelHit.normal.x = (float)uVar7;
          voxelHit.point.z = (float)uVar6;
          voxelHit.point.y = (float)uVar5;
          voxelHit.point.x = (float)uVar4;
          voxelHit.interactionFlags._4_4_ = 0;
          PickupItemMeleeWeapon_OnLocalHit_1(this,voxelHit,(MethodInfo *)in_stack_21);
        }
        return;
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnLocalHit(VoxelHit) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnLocalHit_1
               (PickupItemMeleeWeapon *this,VoxelHit voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pTVar2 = voxelHit.transform;
  pTVar3 = (Transform *)voxelHit._60_4_;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pTVar2 = voxelHit.transform;
    pTVar3 = (Transform *)voxelHit._60_4_;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_00 = (PickupItemMeleeWeapon *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,id,(MethodInfo *)0x0);
      if (this_00 != (PickupItemMeleeWeapon *)0x0) {
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      ((MVWorldObjectClient *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          pTVar2 = voxelHit.transform;
          pTVar3 = (Transform *)voxelHit._60_4_;
          if ((this_01 != (MVNetworkGame *)0x0) &&
             (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
             pTVar2 = voxelHit.transform, pTVar3 = (Transform *)voxelHit._60_4_,
             this_02 != (MVLocalPlayer *)0x0)) {
            bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                              ((MVPlayer *)this_02,(MVWorldObjectClient *)this_00,(MethodInfo *)0x0)
            ;
            if (bVar4 != 0) {
              return;
            }
            pMVar5 = (this_00->fields)._._._.owner;
            pTVar2 = voxelHit.transform;
            pTVar3 = (Transform *)voxelHit._60_4_;
            if (pMVar5 != (MVPickupOwner *)0x0) {
              voxelHit.point.z = 0.0;
              voxelHit.point.x = (float)&voxelHit.transform;
              voxelHit.point.y = (float)pMVar5;
              pVVar6 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                 ((Vector3 *)voxelHit.point.x,pMVar5,(MethodInfo *)0x0);
              fVar7 = pVVar6->x;
              uVar8 = pVVar6->y;
              fVar9 = pVVar6->z;
              fVar10 = _UNK_?;
              if (((float)uVar8 < _UNK_?) ||
                 (fVar10 = _UNK_?, fVar11 = (float)uVar8, _UNK_? < (float)uVar8)) {
                fVar11 = fVar10;
              }
              voxelHit.normal.y = (float)&stack0xffffffe8;
              voxelHit.normal.z = 0.0;
              voxelHit.normal.x = (float)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                        ((Vector3 *)voxelHit.normal.y,(MethodInfo *)0x0);
              voxelHit.normal.z = 0.0;
              voxelHit.normal.x = (float)&UNK_?;
              voxelHit.normal.y = (float)this_00;
              pPVar12 = PickupItemMeleeWeapon_get_Configuration(this_00,(MethodInfo *)0x0);
              pTVar2 = voxelHit.transform;
              pTVar3 = (Transform *)voxelHit._60_4_;
              if (pPVar12 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                fVar10 = (pPVar12->fields)._.impulseStrength;
                fVar13 = fVar10 * fVar11;
                fVar14 = fVar7 * fVar10;
                fVar10 = fVar9 * fVar10;
                voxelHit.interactionFlags._0_4_ = (this_00->fields)._._._.owner;
                voxelHit.isCubeHit = 0;
                voxelHit._37_3_ = 0;
                voxelHit._28_4_ = &UNK_?;
                voxelHit.face = (int32_t)this_00;
                pPVar12 = PickupItemMeleeWeapon_get_Configuration(this_00,(MethodInfo *)0x0);
                pTVar2 = voxelHit.transform;
                pTVar3 = (Transform *)voxelHit._60_4_;
                if (pPVar12 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                  voxelHit._28_4_ = (pPVar12->fields)._.damage;
                  voxelHit.cube = (Cube *)0x0;
                  voxelHit.cubePos._0_4_ = &stack0xffffffd4;
                  voxelHit.normal.z = (float)&UNK_?;
                  impulse.y = fVar13;
                  impulse.x = fVar14;
                  impulse.z = fVar10;
                  voxelHit.face = (int32_t)fVar14;
                  voxelHit._36_4_ = fVar13;
                  voxelHit.woId = (int32_t)fVar10;
                  pIVar15 = MeleeWeaponHitPackage::MeleeWeaponHitPackage_Create
                                      ((InteractionData *)voxelHit.cubePos._0_4_,
                                       (float)voxelHit._28_4_,impulse,(MethodInfo *)0x0);
                  pTVar2 = voxelHit.transform;
                  pTVar3 = (Transform *)voxelHit._60_4_;
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    voxelHit.cube = (Cube *)pIVar15->damage;
                    voxelHit.distance = (pIVar15->impulse).x;
                    voxelHit.collider = (Collider *)(pIVar15->impulse).y;
                    voxelHit.transform = (Transform *)(pIVar15->impulse).z;
                    voxelHit._60_1_ = pIVar15->interactionType;
                    voxelHit._61_1_ = pIVar15->playerKilledByType;
                    voxelHit._62_2_ = *(undefined2 *)&pIVar15->field_0x12;
                    voxelHit.interactionFlags._4_4_ = (x->klass->vtable).OnValidate.methodPtr;
                    voxelHit.interactionFlags._0_4_ = (MVPickupOwner *)0x0;
                    voxelHit.woId = 0;
                    voxelHit.face = (int32_t)&UNK_?;
                    voxelHit._36_4_ = x;
                    (*(code *)(x->klass->vtable).__unknown_1.method)();
                    pMVar5 = (this_00->fields)._._._.owner;
                    pTVar2 = voxelHit.transform;
                    pTVar3 = (Transform *)voxelHit._60_4_;
                    if (pMVar5 != (MVPickupOwner *)0x0) {
                      voxelHit.woId =
                           (int32_t)
                           MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                      ;
                      voxelHit.face = (int32_t)&UNK_?;
                      voxelHit._36_4_ = pMVar5;
                      this_03 = (MVRigidBody *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_GetComponent_1
                                          ((Component *)pMVar5,
                                           MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                          );
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        voxelHit.distance = (float)TypeInfo__UnityEngine__Object;
                        voxelHit.cube = (Cube *)&UNK_?;
                        func_?();
                      }
                      voxelHit.distance = 0.0;
                      voxelHit.cube = (Cube *)0x0;
                      voxelHit._36_4_ = &UNK_?;
                      voxelHit.woId = (int32_t)this_03;
                      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_op_Inequality
                                        ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar4 == 0) {
                        return;
                      }
                      voxelHit.interactionFlags._0_4_ =
                           (MVPickupOwner *)
                           ((uint)fVar7 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                      ;
                      fVar11 = (float)((uint)fVar11 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                      fVar9 = (float)((uint)fVar9 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                      voxelHit._60_4_ = 0;
                      voxelHit.collider = (Collider *)&UNK_?;
                      voxelHit.transform = (Transform *)this_00;
                      pPVar12 = PickupItemMeleeWeapon_get_Configuration(this_00,(MethodInfo *)0x0);
                      pTVar2 = voxelHit.transform;
                      pTVar3 = (Transform *)voxelHit._60_4_;
                      if (pPVar12 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                        fVar7 = (pPVar12->fields)._.recoilStrength;
                        voxelHit.transform = (Transform *)(fVar7 * fVar11);
                        pTVar2 = (Transform *)
                                  ((float)(MVPickupOwner *)voxelHit.interactionFlags * fVar7);
                        voxelHit._60_4_ = fVar7 * fVar9;
                        pTVar3 = voxelHit.transform;
                        voxelHit.interactionFlags._0_4_ = (MVPickupOwner *)voxelHit._60_4_;
                        if (this_03 != (MVRigidBody *)0x0) {
                          voxelHit.interactionFlags._4_4_ = (Il2CppMethodPointer)0x0;
                          voxelHit.interactionFlags._0_4_ = (MVPickupOwner *)0x0;
                          voxelHit.cube = (Cube *)&UNK_?;
                          impulse_00.y = (float)voxelHit.transform;
                          impulse_00.x = (float)pTVar2;
                          impulse_00.z = (float)voxelHit._60_4_;
                          voxelHit.distance = (float)this_03;
                          voxelHit.collider = (Collider *)pTVar2;
                          MVRigidBody::MVRigidBody_AddImpulse_1
                                    (this_03,impulse_00,0,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      return;
    }
  }
code_?:
  voxelHit._60_4_ = pTVar3;
  voxelHit.transform = pTVar2;
  voxelHit.interactionFlags._4_4_ = (Il2CppMethodPointer)&UNK_?;
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnPickupNewEditableItem() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnPickupNewEditableItem
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._._._.muzzlePoint;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    pTVar1 = (this->fields)._._._.muzzlePoint;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
      fVar4 = pVVar2->x;
      pPVar5 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar5 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        fVar6 = (pPVar5->fields)._.radius;
        puVar7 = &UNK_?;
        pPVar5 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar5 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          pTVar1 = (this->fields)._._._.muzzlePoint;
          if (pTVar1 != (Transform *)0x0) {
            value.y = (fVar6 + (pPVar5->fields)._.range) * (_UNK_? / fVar4) * _UNK_?;
            value.x = (float)puVar7;
            value.z = fVar3;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnUnequip
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pPVar1 = this->klass;
  (this->fields).isUnequipped = 1;
  (*(code *)(pPVar1->vtable).InterruptFire.method)(this,pPVar1[1]._0.image);
  return;
}


/* Void SetConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_SetConfiguration
               (PickupItemMeleeWeapon *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_CubeModelId);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    IVar3 = (pPVar2->fields)._.cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,IVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = IVar3;
      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        pSVar4 = (String *)
                 Extensions::Extensions_GetValueOrDefault_3
                           (itemData,StringLiteral_Name,(Object *)(pPVar2->fields)._.name,
                            System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                           );
        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          (pPVar1->fields)._.name = pSVar4;
          func_?();
          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                              (itemData,StringLiteral_Damage,(pPVar2->fields)._.damage,
                               float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                              );
            if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
              (pPVar1->fields)._.damage = fVar5;
              pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                  (itemData,StringLiteral_ImpulseStrength,
                                   (pPVar2->fields)._.impulseStrength,
                                   float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                  );
                if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                  (pPVar1->fields)._.impulseStrength = fVar5;
                  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                      (itemData,StringLiteral_RecoilStrength,
                                       (pPVar2->fields)._.recoilStrength,
                                       float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                      );
                    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                      (pPVar1->fields)._.recoilStrength = fVar5;
                      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                        fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                          (itemData,StringLiteral_AttackAnimationTime,
                                           (pPVar2->fields)._.fireAnimationTime,
                                           float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                          );
                        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                          (pPVar1->fields)._.fireAnimationTime = fVar5;
                          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                          pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                          if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                              (itemData,StringLiteral_AttackCooldown,
                                               (pPVar2->fields)._.attackCooldown,
                                               float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                              );
                            if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                              (pPVar1->fields)._.attackCooldown = fVar5;
                              pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                 (this,(MethodInfo *)0x0);
                              pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                 (this,(MethodInfo *)0x0);
                              if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                  (itemData,StringLiteral_Range,
                                                   (pPVar2->fields)._.range,
                                                                                                      
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)
                                {
                                  (pPVar1->fields)._.range = fVar5;
                                  pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                0x0) {
                                    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                      (itemData,StringLiteral_Radius,
                                                       (pPVar2->fields)._.radius,
                                                                                                              
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                      (pPVar1->fields)._.radius = fVar5;
                                      pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                         (this,(MethodInfo *)0x0);
                                      pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                         (this,(MethodInfo *)0x0);
                                      if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration
                                                     *)0x0) {
                                        IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                                          (itemData,StringLiteral_FireSoundEffect,
                                                           (pPVar2->fields)._.fireSoundEffect,
                                                                                                                      
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                        if (pPVar1 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                          (pPVar1->fields)._.fireSoundEffect = IVar3;
                                          pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                             (this,(MethodInfo *)0x0);
                                          pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                             (this,(MethodInfo *)0x0);
                                          if (pPVar2 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                            IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                                              (itemData,StringLiteral_HitSoundEffect
                                                               ,(pPVar2->fields)._.hitSoundEffect,
                                                                                                                              
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                            if (pPVar1 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                              (pPVar1->fields)._.hitSoundEffect = IVar3;
                                              pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                                 (this,(MethodInfo *)0x0);
                                              pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                                 (this,(MethodInfo *)0x0);
                                              if (pPVar2 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                                pCVar6 = Extensions::Extensions_GetColorOrDefault
                                                                   ((Color *)&stack0xffffffec,
                                                                    itemData,
                                                  StringLiteral_TrailColor,
                                                  (pPVar2->fields).trailColor,(MethodInfo *)0x0);
                                                fVar5 = pCVar6->g;
                                                fVar7 = pCVar6->b;
                                                fVar8 = pCVar6->a;
                                                if (pPVar1 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                                  (pPVar1->fields).trailColor.r = pCVar6->r;
                                                  (pPVar1->fields).trailColor.g = fVar5;
                                                  (pPVar1->fields).trailColor.b = fVar7;
                                                  (pPVar1->fields).trailColor.a = fVar8;
                                                  pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                                     (this,(MethodInfo *)0x0);
                                                  pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                                     (this,(MethodInfo *)0x0);
                                                  if (pPVar2 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                                    pCVar6 = Extensions::
                                                             Extensions_GetColorOrDefault
                                                                       ((Color *)&stack0xffffffec,
                                                                        itemData,
                                                  StringLiteral_HitEffectColor,
                                                  (pPVar2->fields).hitEffectColor,(MethodInfo *)0x0)
                                                  ;
                                                  fVar5 = pCVar6->g;
                                                  fVar7 = pCVar6->b;
                                                  fVar8 = pCVar6->a;
                                                  if (pPVar1 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                                    (pPVar1->fields).hitEffectColor.r = pCVar6->r;
                                                    (pPVar1->fields).hitEffectColor.g = fVar5;
                                                    (pPVar1->fields).hitEffectColor.b = fVar7;
                                                    (pPVar1->fields).hitEffectColor.a = fVar8;
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* PickupItemMeleeWeapon() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon__ctor
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.r = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._._.crossHairCannotFireLow.b = fVar2;
  (this->fields)._._.crossHairCannotFireLow.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.r = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._._.crossHairCannotFireHigh.b = fVar2;
  (this->fields)._._.crossHairCannotFireHigh.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCanFire.r = _UNK_?;
  (this->fields)._._.crossHairCanFire.g = fVar3;
  (this->fields)._._.crossHairCanFire.b = fVar2;
  (this->fields)._._.crossHairCanFire.a = fVar1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_5,1.0,(MethodInfo *)0x0);
  AVar6 = pOVar4->hiddenValue;
  pBVar7 = pOVar4->hiddenValueOld;
  fVar3 = pOVar4->fakeValue;
  bVar8 = pOVar4->inited;
  uVar9 = *(undefined3 *)&pOVar4->field_0x11;
  (this->fields)._._.fireInterval.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields)._._.fireInterval.hiddenValue = AVar6;
  (this->fields)._._.fireInterval.hiddenValueOld = pBVar7;
  (this->fields)._._.fireInterval.fakeValue = fVar3;
  (this->fields)._._.fireInterval.inited = bVar8;
  *(undefined3 *)&(this->fields)._._.fireInterval.field_0x11 = uVar9;
  func_?(&(this->fields)._._.fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}


/* String get_AttackAnimationName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_AttackAnimationName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_MeleeWeaponSwing);
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
    func_?(&TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
           (this->fields)._._Configuration_k__BackingField;
  if (pPVar1 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    return (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0;
  }
  if (((TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration->_1).naturalAligment <=
       (pPVar1->klass->_1).naturalAligment) &&
     ((pPVar1->klass->_1).typeHierarchy
      [(TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration)) {
    return pPVar1;
  }
  func_?(pPVar1,TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
  pcVar2 = (code *)swi(3);
  pPVar1 = (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)(*pcVar2)();
  return pPVar1;
}


/* String get_FireSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_FireSoundEffectName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->fireSoundEffects;
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) ||
     (pSVar1 == (String__Array *)0x0)) {
    func_?();
  }
  else {
    uVar3 = (pPVar2->fields)._.fireSoundEffect;
    if (uVar3 < pSVar1->max_length) {
      return pSVar1->vector[uVar3];
    }
  }
  func_?();
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
  uVar5 = func_?(&stack0xfffffff8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}


/* String get_HitSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_HitSoundEffectName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->hitSoundEffects;
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) ||
     (pSVar1 == (String__Array *)0x0)) {
    func_?();
  }
  else {
    uVar3 = (pPVar2->fields)._.hitSoundEffect;
    if (uVar3 < pSVar1->max_length) {
      return pSVar1->vector[uVar3];
    }
  }
  func_?();
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
  uVar5 = func_?(&stack0xfffffff8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}

