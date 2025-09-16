
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_Awake
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  pPVar3 = this->klass;
  (this->fields).hitLayerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  (*(code *)(pPVar3->vtable).ResetAmmo.method)
            (this,(pPVar3->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  (this->fields).toFieldOfView = (this->fields).targetFieldOfView;
  return;
}


/* Void DoChargingAnimation() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_DoChargingAnimation
               (PickupItemRailGun *this,MethodInfo *method)

{
  this_00 = (this->fields).chargeCurve;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 == (AnimationCurve *)0x0) goto code_?;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                    (this_00,(fVar1 - (this->fields).chargeBeginTime) /
                             (this->fields).curveChargeLength,(MethodInfo *)0x0);
  this_01 = (this->fields).chargeAudioSource;
  (this->fields).currentCharge = fVar1;
  if (this_01 == (AudioSource *)0x0) goto code_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
            (this_01,fVar1 + _UNK_?,(MethodInfo *)0x0);
  pMVar2 = (this->fields)._._.owner;
  if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
  if ((pMVar2->fields)._IsLocal_k__BackingField == 0) {
    if ((this->fields).canDoFOVZoom == 0) goto code_?;
  }
  else {
    if ((this->fields).canDoFOVZoom == 0) {
code_?:
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar3 == (MainCameraManager *)0x0) ||
         (this_03 = (pMVar3->fields).mainCamera, this_03 == (Camera *)0x0)) goto code_?;
      fVar1 = (this->fields).initialFOV;
    }
    else {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
      fVar4 = (this->fields).currentCharge;
      this_03 = (pMVar3->fields).mainCamera;
      fVar1 = (this->fields).initialFOV;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (_UNK_? < fVar4) {
        fVar4 = _UNK_?;
      }
      if (this_03 == (Camera *)0x0) goto code_?;
      fVar1 = ((this->fields).toFieldOfView - fVar1) * fVar4 + fVar1;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (this_03,fVar1,(MethodInfo *)0x0);
  }
  this_02 = (this->fields).chargeParticles;
  if (this_02 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_set_time
              (this_02,(this->fields).currentCharge,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Fire() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_Fire
               (PickupItemRailGun *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_);
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  func_?(auStack_2,0,0x48);
  pMVar3 = (this->fields)._._.owner;
  if (pMVar3 != (MVPickupOwner *)0x0) {
    VStack_4.x = (pMVar3->fields).lookOrigin.x;
    VStack_4.y = (pMVar3->fields).lookOrigin.y;
    fVar5 = (pMVar3->fields).lookOrigin.z;
    pVVar6 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_7,(this->fields)._._.owner,(MethodInfo *)0x0);
    RStack_8.m_Origin.x = VStack_4.x;
    RStack_8.m_Origin.y = VStack_4.y;
    RStack_8.m_Origin.z = fVar5;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_7,*pVVar6,(MethodInfo *)0x0);
    uVar9 = pVVar6->x;
    uVar10 = pVVar6->y;
    RStack_8.m_Direction.z = pVVar6->z;
    pMVar3 = (this->fields)._._.owner;
    bVar11 = false;
    fStack_12 = RStack_8.m_Origin.x;
    VStack_7.x = RStack_8.m_Origin.y;
    VStack_7.z = (float)uVar9;
    VStack_7.y = RStack_8.m_Origin.z;
    VStack_4._0_8_ = CONCAT44(RStack_8.m_Direction.z,uVar10);
    fVar5 = (this->fields).range;
    RStack_8.m_Direction.x = (float)uVar9;
    RStack_8.m_Direction.y = (float)uVar10;
    if (pMVar3 != (MVPickupOwner *)0x0) {
      ignoreWoIds = (HashSet_1_System_Int32_ *)
                    (*(code *)(pMVar3->klass->vtable).get_IgnoreWOIDs.method)
                              (pMVar3,pMVar3->klass[1]._0.image);
      ray.m_Origin.y = VStack_7.x;
      ray.m_Origin.x = fStack_12;
      ray.m_Origin.z = VStack_7.y;
      ray.m_Direction.x = VStack_7.z;
      ray.m_Direction.y = (float)VStack_4.x;
      ray.m_Direction.z = VStack_4.y;
      bVar13 = CollisionDetection::CollisionDetection_MVHit_1
                         (ray,(VoxelHit *)auStack_2,fVar5,ignoreWoIds,(this->fields).hitLayerMask,
                          (MethodInfo *)0x0);
      if (bVar13 == 0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            (&VStack_7,&RStack_8,(this->fields).range,(MethodInfo *)0x0);
        VStack_4.x = pVVar6->x;
        VStack_4.y = pVVar6->y;
        this = (PickupItemRailGun *)pVVar6->z;
code_?:
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar14 != (PrefabPool *)0x0) &&
           (this_01 = (pPVar14->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) {
          this_05 = (RailRay *)
                    EnumPoolManager::EnumPoolManager_Instantiate
                              (this_01,PoolEnums__Enum_RailGunRay,
                               RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_)
          ;
          if (this_05 != (RailRay *)0x0) {
            (this_05->fields).target.x = VStack_4.x;
            (this_05->fields).target.y = VStack_4.y;
            (this_05->fields).target.z = (float)this;
            if (bVar11) {
              fVar5 = (pPVar1->fields).hitColor.r;
              fVar15 = (pPVar1->fields).hitColor.g;
              fVar16 = (pPVar1->fields).hitColor.b;
              fVar17 = (pPVar1->fields).hitColor.a;
            }
            else {
              fVar5 = (pPVar1->fields).missColor.r;
              fVar15 = (pPVar1->fields).missColor.g;
              fVar16 = (pPVar1->fields).missColor.b;
              fVar17 = (pPVar1->fields).missColor.a;
            }
            (this_05->fields).startColor.r = fVar5;
            (this_05->fields).startColor.g = fVar15;
            (this_05->fields).startColor.b = fVar16;
            (this_05->fields).startColor.a = fVar17;
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_05,(MethodInfo *)0x0);
            this_02 = (pPVar1->fields)._._.muzzlePoint;
            if (this_02 != (Transform *)0x0) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_7,this_02,(MethodInfo *)0x0);
              if (this_06 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (this_06,*pVVar6,(MethodInfo *)0x0);
                RailRay::RailRay_Reset(this_05,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        VStack_4._0_8_ = CONCAT44(auStack_2._4_4_,auStack_2._0_4_);
        this = (PickupItemRailGun *)auStack_2._8_4_;
        pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar18 != (MVWorldObjectClientManager *)0x0) {
          id = MVWorldObjectClientManager::
               MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                         (pMVar18,(int32_t)fStack_19,
                          int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                         );
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar18 != (MVWorldObjectClientManager *)0x0) {
            this_03 = (MVWorldObjectClient *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar18,id,(MethodInfo *)0x0);
            if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
            pMVar3 = (pPVar1->fields)._._.owner;
            if (pMVar3 != (MVPickupOwner *)0x0) {
              if ((pMVar3->fields)._IsLocal_k__BackingField == 0) goto code_?;
              pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar20 != (MVNetworkGame *)0x0) &&
                 (pWVar21 = (pMVar20->fields).worldNetwork, pWVar21 != (WorldNetwork *)0x0)) {
                this_00 = (RuntimeEventManager *)(pWVar21->fields)._.runtimeEventManagerNetwork;
                VStack_4.z = *(float *)&(pPVar1->fields).baseDamage.inited;
                fStack_22 = (float)auStack_2._0_4_;
                fStack_23 = (float)auStack_2._4_4_;
                uStack_24 = CONCAT44(auStack_2._12_4_,auStack_2._8_4_);
                fStack_25 = (float)auStack_2._16_4_;
                fStack_26 = (float)auStack_2._20_4_;
                pPStack_27 = (PickupItemRailGun *)auStack_2._24_4_;
                fStack_28 = fStack_29;
                fStack_30 = fStack_31;
                fStack_32 = fStack_33;
                fStack_34 = fStack_19;
                pCStack_35 = pCStack_36;
                fStack_37 = fStack_38;
                AStack_39 = AStack_40;
                pBStack_41 = pBStack_42;
                fStack_43 = fStack_44;
                uStack_45 = iStack_46;
                fStack_12 = (float)(pPVar1->fields).baseDamage.currentCryptoKey;
                VStack_7.x = *(float *)&(pPVar1->fields).baseDamage.hiddenValue;
                VStack_7.y = (float)(pPVar1->fields).baseDamage.hiddenValueOld;
                VStack_7.z = (pPVar1->fields).baseDamage.fakeValue;
                pBVar47 = (pPVar1->fields).baseDamage.hiddenValueOld;
                fVar5 = (pPVar1->fields).baseDamage.fakeValue;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pBVar47 = (Byte__Array *)VStack_7.y;
                  fVar5 = VStack_7.z;
                }
                value.hiddenValue = (ACTkByte4)VStack_7.x;
                value.currentCryptoKey = (int32_t)fStack_12;
                value.hiddenValueOld = pBVar47;
                value.fakeValue = fVar5;
                value._16_4_ = VStack_4.z;
                VStack_4.z = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
                if (this_00 != (RuntimeEventManager *)0x0) {
                  voxelHit.point.y = (float)(undefined4)uStack_24;
                  voxelHit.point.x = fStack_23;
                  voxelHit.point.z = (float)uStack_24._4_4_;
                  voxelHit.normal.x = fStack_25;
                  voxelHit.normal.y = fStack_26;
                  voxelHit.normal.z = (float)pPStack_27;
                  voxelHit.cubePos._0_4_ = fStack_28;
                  voxelHit._28_4_ = fStack_30;
                  voxelHit.face = (int32_t)fStack_32;
                  voxelHit._36_4_ = fStack_34;
                  voxelHit.woId = (int32_t)pCStack_35;
                  voxelHit.cube = (Cube *)fStack_37;
                  voxelHit.distance = (float)AStack_39;
                  voxelHit.collider = (Collider *)pBStack_41;
                  voxelHit.transform = (Transform *)fStack_43;
                  voxelHit._60_8_ = uStack_45;
                  voxelHit.interactionFlags._4_4_ = VStack_4.z;
                  RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                            (this_00,voxelHit,0.0,in_stack_48);
                  x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_03,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar13 == 0) goto code_?;
                  pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar20 != (MVNetworkGame *)0x0) {
                    this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar20,(MethodInfo *)0x0);
                    if (this_04 != (MVLocalPlayer *)0x0) {
                      bVar13 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                         ((MVPlayer *)this_04,this_03,(MethodInfo *)0x0);
                      if (bVar13 == 0) {
                        pIVar49 = RailgunHitPackage::RailgunHitPackage_Create
                                            ((InteractionData *)&stack0xffffff24,(MethodInfo *)0x0);
                        if (x == (InteractionDataHandlerBase *)0x0) goto code_?;
                        uVar50._0_1_ = pIVar49->interactionType;
                        uVar50._1_1_ = pIVar49->playerKilledByType;
                        uVar50._2_2_ = *(undefined2 *)&pIVar49->field_0x12;
                        func_?(7,x,(pPVar1->fields)._._.owner,pIVar49->damage,
                                        (pIVar49->impulse).x,(pIVar49->impulse).y,
                                        (pIVar49->impulse).z,uVar50,0);
                      }
code_?:
                      iVar51 = func_?(this_03,TypeInfo__IBulletImpactVisualizer);
                      if (iVar51 != 0) {
                        pMVar3 = (pPVar1->fields)._._.owner;
                        fStack_25 = (float)auStack_2._0_4_;
                        fStack_26 = (float)auStack_2._4_4_;
                        pPStack_27 = (PickupItemRailGun *)auStack_2._8_4_;
                        fStack_28 = (float)auStack_2._12_4_;
                        VStack_7.y = (float)(undefined4)iStack_46;
                        VStack_7.z = (float)iStack_46._4_4_;
                        fStack_30 = RStack_8.m_Origin.x;
                        fStack_32 = RStack_8.m_Origin.y;
                        fStack_34 = RStack_8.m_Origin.z;
                        pCStack_35 = (Cube *)RStack_8.m_Direction.x;
                        uStack_24 = CONCAT44(RStack_8.m_Direction.z,RStack_8.m_Direction.y);
                        if ((pMVar3 == (MVPickupOwner *)0x0) ||
                           (pMVar52 = (pMVar3->fields)._.worldObjectParent,
                           pMVar52 == (MVWorldObjectClient *)0x0)) goto code_?;
                        fStack_37 = (float)(pPVar1->fields).baseDamage.currentCryptoKey;
                        AStack_39 = (pPVar1->fields).baseDamage.hiddenValue;
                        pBStack_41 = (pPVar1->fields).baseDamage.hiddenValueOld;
                        fStack_43 = (pPVar1->fields).baseDamage.fakeValue;
                        uStack_45 = CONCAT44((pMVar52->fields)._.ownerActorNr,(float)uStack_45);
                        pBVar47 = pBStack_42;
                        fVar5 = fStack_44;
                        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                          ,auStack_2._20_4_,auStack_2._24_4_,fStack_29);
                          pBVar47 = pBStack_42;
                          fVar5 = fStack_44;
                        }
                        value_00.hiddenValue = AStack_39;
                        value_00.currentCryptoKey = (int32_t)fStack_37;
                        value_00.hiddenValueOld = pBStack_41;
                        value_00.fakeValue = fStack_43;
                        value_00.inited = (pPVar1->fields).baseDamage.inited;
                        value_00._17_3_ = *(undefined3 *)&(pPVar1->fields).baseDamage.field_0x11;
                        AVar53 = AStack_39;
                        pBVar54 = pBStack_41;
                        VStack_4.z = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                      ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1
                                                (value_00,(MethodInfo *)0x0);
                        puVar55 = &UNK_?;
                        iVar51 = func_?(this_03,TypeInfo__IBulletImpactVisualizer);
                        if (iVar51 == 0) goto code_?;
                        iVar51 = func_?();
                        if (iVar51 == 0) goto code_?;
                        func_?(0,TypeInfo__IBulletImpactVisualizer,iVar51,fStack_25,
                                        fStack_26,pPStack_27,fStack_28,fStack_32,fStack_34,
                                        pCStack_35,(int)uStack_24,AVar53,pBVar54,puVar55,fStack_30,
                                        uStack_45._4_4_,VStack_4.z,pBVar47,fVar5,VStack_7.y,
                                        VStack_7.z);
                      }
code_?:
                      bVar11 = true;
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
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar56 = (code *)swi(3);
  (*pcVar56)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_OnEnterVehicleWithWeapon
               (PickupItemRailGun *this,MethodInfo *method)

{
  (this->fields).canDoFOVZoom = 1;
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_OnEquip
               (PickupItemRailGun *this,MethodInfo *method)

{
  PickupItemWithDelay::PickupItemWithDelay_OnEquip((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (this_00,(MethodInfo *)0x0);
    (this->fields).initialFOV = fVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_OnLeaveVehicleWithWeapon
               (PickupItemRailGun *this,MethodInfo *method)

{
  (this->fields).canDoFOVZoom = 0;
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_OnUnequip
               (PickupItemRailGun *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._._.owner;
  (this->fields)._.isFiring = 0;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if ((pMVar1->fields)._IsLocal_k__BackingField != 0) {
      (this->fields).isCharging = 0;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar2 == (MainCameraManager *)0x0) ||
         (this_00 = (pMVar2->fields).mainCamera, this_00 == (Camera *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (this_00,(this->fields).initialFOV,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_ResetAmmo
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).get_MaxAmmo.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_3,iVar1,(MethodInfo *)0x0);
  iVar1 = pOVar2->hiddenValue;
  iVar4 = pOVar2->fakeValue;
  bVar5 = pOVar2->inited;
  uVar6 = *(undefined3 *)&pOVar2->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar2->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = iVar4;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_TriggerBegin
               (PickupItemRailGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  PickupItemWithDelay::PickupItemWithDelay_TriggerBegin
            ((PickupItemWithDelay *)this,instigatorActorNr,(MethodInfo *)0x0);
  (this->fields).isCharging = 1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).chargeBeginTime = fVar1;
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_TriggerEnd
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_RailShot);
    cRam_? = '\x01';
  }
  PickupItemWithDelay::PickupItemWithDelay_TriggerEnd((PickupItemWithDelay *)this,(MethodInfo *)0x0)
  ;
  if ((this->fields).isCharging != 0) {
    pfVar1 = &(this->fields).currentCharge;
    if (*pfVar1 <= _UNK_? && _UNK_? != *pfVar1) {
      pAVar2 = (this->fields).chargeAudioSource;
      if (pAVar2 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                  (pAVar2,(MethodInfo *)0x0);
        pAVar2 = (this->fields).chargeAudioSource;
        if (pAVar2 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar2,0,(MethodInfo *)0x0);
          (this->fields).isCharging = 0;
          return;
        }
      }
      goto code_?;
    }
    pAVar2 = (this->fields).releaseSound;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pAVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pAVar2 = (this->fields).chargeAudioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar2,(MethodInfo *)0x0);
      pAVar2 = (this->fields).chargeAudioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,0,(MethodInfo *)0x0);
      pAVar2 = (this->fields).chargeAudioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar2,_UNK_? - (this->fields).currentCharge * _UNK_?,
                 (MethodInfo *)0x0);
      pMVar4 = (this->fields)._._.owner;
      if (pMVar4 == (MVPickupOwner *)0x0) goto code_?;
      if ((pMVar4->fields)._IsLocal_k__BackingField == 0) {
        pTVar5 = (this->fields)._._.muzzlePoint;
        if (pTVar5 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&puStack_7,pTVar5,(MethodInfo *)0x0);
        fVar8 = pVVar6->x;
        fStack_9 = pVVar6->y;
        fVar10 = pVVar6->z;
      }
      else {
        pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar11 == (Camera *)0x0) goto code_?;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar11,(MethodInfo *)0x0);
        if (pTVar5 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
        fVar12 = pVVar6->y;
        fVar10 = pVVar6->z;
        pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar11 == (Camera *)0x0) goto code_?;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar11,(MethodInfo *)0x0);
        if (pTVar5 == (Transform *)0x0) goto code_?;
        fVar8 = 0.0;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&puStack_7,pTVar5,(MethodInfo *)0x0);
        uVar13 = pVVar6->x;
        uVar14 = pVVar6->y;
        fVar8 = fVar8 + (float)uVar13;
        fStack_9 = (float)uVar14 + fVar12;
        fVar10 = pVVar6->z + fVar10;
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      if (this_00 == (AudioManager *)0x0) goto code_?;
      position.y = fStack_9;
      position.x = fVar8;
      position.z = fVar10;
      AudioManager::AudioManager_Play_2
                (this_00,StringLiteral_RailShot,(this->fields).releaseSound,position,
                 (MethodInfo *)0x0);
    }
    (this->fields).missColor.a = 1.0;
    (this->fields).hitColor.a = 1.0;
    PickupItemRailGun_Fire(this,(MethodInfo *)0x0);
    puStack_7 = (undefined *)(this->fields).currentAmmo.currentCryptoKey;
    fVar10 = (float)(this->fields).currentAmmo.hiddenValue;
    fVar8 = (float)(this->fields).currentAmmo.fakeValue;
    uVar15._0_1_ = (this->fields).currentAmmo.inited;
    uVar15._1_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
    (this->fields).isCharging = 0;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    OVar16.hiddenValue = (int32_t)fVar10;
    OVar16.currentCryptoKey = (int32_t)puStack_7;
    OVar16.fakeValue = (int32_t)fVar8;
    OVar16.inited = (bool)uVar15;
    OVar16._13_3_ = SUB43(uVar15,1);
    iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(OVar16,(MethodInfo *)0x0);
    pOVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&puStack_7,iVar17 + -1,(MethodInfo *)0x0);
    iVar17 = pOVar18->hiddenValue;
    iVar19 = pOVar18->fakeValue;
    bVar3 = pOVar18->inited;
    uVar20 = *(undefined3 *)&pOVar18->field_0xd;
    OVar16 = *pOVar18;
    (this->fields).currentAmmo.currentCryptoKey = pOVar18->currentCryptoKey;
    (this->fields).currentAmmo.hiddenValue = iVar17;
    (this->fields).currentAmmo.fakeValue = iVar19;
    (this->fields).currentAmmo.inited = bVar3;
    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar20;
    iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(OVar16,(MethodInfo *)0x0);
    if (iVar17 == 0) {
      cVar21 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
      if (cVar21 == '\0') {
        pMVar4 = (this->fields)._._.owner;
        if (pMVar4 == (MVPickupOwner *)0x0) {
code_?:
          func_?();
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)pMVar4,
                       MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          if (x == (Object_1 *)0x0) goto code_?;
          func_?(6,x);
        }
      }
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_Update
               (PickupItemRailGun *this,MethodInfo *method)

{
  if ((this->fields).isCharging == 0) {
    pPVar1 = (this->fields).chargeParticles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pPVar1 = (this->fields).chargeParticles;
        if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar1,(MethodInfo *)0x0);
      }
      pMVar3 = (this->fields)._._.owner;
      if (pMVar3 != (MVPickupOwner *)0x0) {
        if ((pMVar3->fields)._IsLocal_k__BackingField == 0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if ((pMVar4 != (MainCameraManager *)0x0) &&
           (pCVar5 = (pMVar4->fields).mainCamera, pCVar5 != (Camera *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                    (pCVar5,(this->fields).initialFOV,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto code_?;
  }
  this_00 = (this->fields).chargeCurve;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 == (AnimationCurve *)0x0) goto code_?;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                    (this_00,(fVar6 - (this->fields).chargeBeginTime) /
                             (this->fields).curveChargeLength,(MethodInfo *)0x0);
  pAVar7 = (this->fields).chargeAudioSource;
  (this->fields).currentCharge = fVar6;
  if (pAVar7 == (AudioSource *)0x0) goto code_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
            (pAVar7,fVar6 + _UNK_?,(MethodInfo *)0x0);
  pMVar3 = (this->fields)._._.owner;
  if (pMVar3 == (MVPickupOwner *)0x0) goto code_?;
  if ((pMVar3->fields)._IsLocal_k__BackingField == 0) {
    if ((this->fields).canDoFOVZoom == 0) goto code_?;
  }
  else {
    if ((this->fields).canDoFOVZoom == 0) {
code_?:
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar4 == (MainCameraManager *)0x0) ||
         (pCVar5 = (pMVar4->fields).mainCamera, pCVar5 == (Camera *)0x0)) goto code_?;
      fVar6 = (this->fields).initialFOV;
    }
    else {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
      fVar8 = (this->fields).currentCharge;
      pCVar5 = (pMVar4->fields).mainCamera;
      fVar6 = (this->fields).initialFOV;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (_UNK_? < fVar8) {
        fVar8 = _UNK_?;
      }
      if (pCVar5 == (Camera *)0x0) goto code_?;
      fVar6 = ((this->fields).toFieldOfView - fVar6) * fVar8 + fVar6;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar5,fVar6,(MethodInfo *)0x0);
  }
  pPVar1 = (this->fields).chargeParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_set_time
              (pPVar1,(this->fields).currentCharge,(MethodInfo *)0x0);
    pAVar7 = (this->fields).chargeAudioSource;
    if (pAVar7 != (AudioSource *)0x0) {
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar7,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pAVar7 = (this->fields).chargeAudioSource;
        if (pAVar7 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar7,(MethodInfo *)0x0);
      }
      pPVar1 = (this->fields).chargeParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        if ((this->fields).chargeParticles != (ParticleSystem *)0x0) {
          if (pcRam_? == (code *)0x0) {
            pcRam_? = (code *)func_?();
          }
          uStack9 = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* PickupItemRailGun() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun__ctor
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  (this->fields).range = 300.0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0xf,(MethodInfo *)0x0);
  iVar2 = pOVar1->currentCryptoKey;
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).targetFieldOfView = 25.0;
  (this->fields).maxAmmo.currentCryptoKey = iVar2;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,25.0,(MethodInfo *)0x0);
  AVar8 = pOVar7->hiddenValue;
  pBVar9 = pOVar7->hiddenValueOld;
  fVar10 = pOVar7->fakeValue;
  bVar5 = pOVar7->inited;
  uVar6 = *(undefined3 *)&pOVar7->field_0x11;
  (this->fields).baseDamage.currentCryptoKey = pOVar7->currentCryptoKey;
  (this->fields).baseDamage.hiddenValue = AVar8;
  (this->fields).baseDamage.hiddenValueOld = pBVar9;
  (this->fields).baseDamage.fakeValue = fVar10;
  (this->fields).baseDamage.inited = bVar5;
  *(undefined3 *)&(this->fields).baseDamage.field_0x11 = uVar6;
  func_?();
  fVar11 = _UNK_?;
  fVar12 = _UNK_?;
  fVar10 = _UNK_?;
  (this->fields).hitColor.r = _UNK_?;
  (this->fields).hitColor.g = fVar10;
  (this->fields).hitColor.b = fVar12;
  (this->fields).hitColor.a = fVar11;
  fVar11 = _UNK_?;
  fVar12 = _UNK_?;
  fVar10 = _UNK_?;
  (this->fields).missColor.r = _UNK_?;
  (this->fields).missColor.g = fVar10;
  (this->fields).missColor.b = fVar12;
  (this->fields).missColor.a = fVar11;
  (this->fields).curveChargeLength = 5.0;
  (this->fields).canDoFOVZoom = 1;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_ChargeState() */

float Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_ChargeState
                (PickupItemRailGun *this,MethodInfo *method)

{
  if ((this->fields).isCharging == 0) {
    return 0.0;
  }
  return (this->fields).currentCharge;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItemRailGun *this,MethodInfo *method)

{
  if ((this->fields).currentCharge < _UNK_?) {
    fVar1 = (this->fields)._.crossHairCannotFireLow.r;
    fVar2 = (this->fields)._.crossHairCannotFireLow.g;
    fVar3 = (this->fields)._.crossHairCannotFireLow.b;
    fVar4 = (this->fields)._.crossHairCannotFireLow.a;
    fVar5 = (this->fields).currentCharge;
    fVar6 = (this->fields)._.crossHairCannotFireHigh.g;
    fVar7 = (this->fields)._.crossHairCannotFireHigh.b;
    fVar8 = (this->fields)._.crossHairCannotFireHigh.a;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    __return_storage_ptr__->r = ((this->fields)._.crossHairCannotFireHigh.r - fVar1) * fVar5 + fVar1
    ;
    __return_storage_ptr__->g = (fVar6 - fVar2) * fVar5 + fVar2;
    __return_storage_ptr__->b = (fVar7 - fVar3) * fVar5 + fVar3;
    __return_storage_ptr__->a = (fVar8 - fVar4) * fVar5 + fVar4;
    return __return_storage_ptr__;
  }
  fVar5 = (this->fields)._.crossHairCanFire.g;
  fVar1 = (this->fields)._.crossHairCanFire.b;
  fVar2 = (this->fields)._.crossHairCanFire.a;
  __return_storage_ptr__->r = (this->fields)._.crossHairCanFire.r;
  __return_storage_ptr__->g = fVar5;
  __return_storage_ptr__->b = fVar1;
  __return_storage_ptr__->a = fVar2;
  return __return_storage_ptr__;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_IsAmmoDepleted
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.fakeValue = iVar3;
  value._12_4_ = uVar4;
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if (0 < iVar3) {
    return 0;
  }
  cVar5 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                    (this,(this->klass->vtable).get_HasPercentageAmmo.methodPtr);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_MaxAmmo
                  (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).maxAmmo;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar1 = (*(code *)(this->klass->vtable).CalculateMaxAmmo.method)
                    (this,iVar1,(this->klass->vtable).UpdateWithDirection.methodPtr);
  return iVar1;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_Quantity
                  (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

