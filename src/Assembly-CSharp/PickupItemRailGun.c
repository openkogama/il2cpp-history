
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
  (*(pPVar3->vtable).ResetAmmo.methodPtr)(this,(pPVar3->vtable).ResetAmmo.method);
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
  RStack_2.m_Origin.x = 0.0;
  RStack_2.m_Origin.y = 0.0;
  RStack_2.m_Origin.z = 0.0;
  RStack_2.m_Direction.x = 0.0;
  RStack_2.m_Direction.y = 0.0;
  RStack_2.m_Direction.z = 0.0;
  func_?(&stack0xffffff30,0,0x48);
  pMVar3 = (this->fields)._._.owner;
  if (pMVar3 != (MVPickupOwner *)0x0) {
    uStack_4._0_4_ = (pMVar3->fields).lookOrigin.x;
    uStack_4._4_4_ = (pMVar3->fields).lookOrigin.y;
    fVar5 = (pMVar3->fields).lookOrigin.z;
    pVVar6 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_7,(this->fields)._._.owner,(MethodInfo *)0x0);
    origin.z = fVar5;
    origin.x = (float)uStack_4;
    origin.y = uStack_4._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
              (&RStack_2,origin,*pVVar6,(MethodInfo *)0x0);
    fVar8 = RStack_2.m_Direction.x;
    fVar9 = RStack_2.m_Origin.z;
    fVar10 = RStack_2.m_Origin.y;
    fVar11 = RStack_2.m_Origin.x;
    pMVar3 = (this->fields)._._.owner;
    bVar12 = false;
    uStack_4._0_4_ = RStack_2.m_Direction.y;
    uStack_4._4_4_ = RStack_2.m_Direction.z;
    fVar5 = (this->fields).range;
    if (pMVar3 != (MVPickupOwner *)0x0) {
      ignoreWoIds = (HashSet_1_System_Int32_ *)
                    (*(pMVar3->klass->vtable).get_IgnoreWOIDs.methodPtr)
                              (pMVar3,(pMVar3->klass->vtable).get_IgnoreWOIDs.method);
      ray.m_Origin.y = fVar10;
      ray.m_Origin.x = fVar11;
      ray.m_Origin.z = fVar9;
      ray.m_Direction.x = fVar8;
      ray.m_Direction.y = (float)uStack_4;
      ray.m_Direction.z = (float)((ulonglong)uStack_4 >> 0x20);
      bVar13 = CollisionDetection::CollisionDetection_MVHit_1
                         (ray,(VoxelHit *)&stack0xffffff30,fVar5,ignoreWoIds,
                          (this->fields).hitLayerMask,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            (&VStack_7,&RStack_2,(this->fields).range,(MethodInfo *)0x0);
        fStack_14 = pVVar6->x;
        fStack_15 = pVVar6->y;
        this = (PickupItemRailGun *)pVVar6->z;
code_?:
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar16 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar16 != (PrefabPool *)0x0) &&
           (this_01 = (pPVar16->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) {
          this_05 = (RailRay *)
                    EnumPoolManager::EnumPoolManager_Instantiate
                              (this_01,PoolEnums__Enum_RailGunRay,
                               RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_)
          ;
          if (this_05 != (RailRay *)0x0) {
            (this_05->fields).target.x = fStack_14;
            (this_05->fields).target.y = fStack_15;
            (this_05->fields).target.z = (float)this;
            if (bVar12) {
              fVar5 = (pPVar1->fields).hitColor.r;
              fVar11 = (pPVar1->fields).hitColor.g;
              fVar10 = (pPVar1->fields).hitColor.b;
              fVar9 = (pPVar1->fields).hitColor.a;
            }
            else {
              fVar5 = (pPVar1->fields).missColor.r;
              fVar11 = (pPVar1->fields).missColor.g;
              fVar10 = (pPVar1->fields).missColor.b;
              fVar9 = (pPVar1->fields).missColor.a;
            }
            (this_05->fields).startColor.r = fVar5;
            (this_05->fields).startColor.g = fVar11;
            (this_05->fields).startColor.b = fVar10;
            (this_05->fields).startColor.a = fVar9;
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
        fVar5 = in_stack_17;
        fVar11 = in_stack_18;
        pPVar19 = in_stack_20;
        pMVar21 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar21 != (MVWorldObjectClientManager *)0x0) {
          iVar22 = MVWorldObjectClientManager::
                   MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                             (pMVar21,iStack_23,
                              int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                             );
          pMVar21 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar21 != (MVWorldObjectClientManager *)0x0) {
            this_03 = (MVWorldObjectClient *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar21,iVar22,(MethodInfo *)0x0);
            if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
            pMVar3 = (this->fields)._._.owner;
            if (pMVar3 != (MVPickupOwner *)0x0) {
              if ((pMVar3->fields)._IsLocal_k__BackingField == 0) goto code_?;
              pMVar24 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar24 != (MVNetworkGame *)0x0) &&
                 (pWVar25 = (pMVar24->fields).worldNetwork, pWVar25 != (WorldNetwork *)0x0)) {
                this_00 = (RuntimeEventManager *)(pWVar25->fields)._.runtimeEventManagerNetwork;
                fStack_26 = *(float *)&(this->fields).baseDamage.inited;
                uStack_4 = iStack_27;
                iStack_28 = (this->fields).baseDamage.currentCryptoKey;
                VStack_7.x = *(float *)&(this->fields).baseDamage.hiddenValue;
                VStack_7.y = (float)(this->fields).baseDamage.hiddenValueOld;
                VStack_7.z = (this->fields).baseDamage.fakeValue;
                pBVar29 = (this->fields).baseDamage.hiddenValueOld;
                fVar10 = (this->fields).baseDamage.fakeValue;
                fVar9 = fVar11;
                pPVar30 = pPVar19;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pBVar29 = (Byte__Array *)VStack_7.y;
                  fVar10 = VStack_7.z;
                }
                OVar31.hiddenValue = (ACTkByte4)VStack_7.x;
                OVar31.currentCryptoKey = iStack_28;
                OVar31.hiddenValueOld = pBVar29;
                OVar31.fakeValue = fVar10;
                OVar31._16_4_ = fStack_26;
                fStack_26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredFloat::ObscuredFloat_op_Implicit_1(OVar31,(MethodInfo *)0x0);
                if (this_00 != (RuntimeEventManager *)0x0) {
                  voxelHit.point.y = (float)pPVar19;
                  voxelHit.point.x = fVar11;
                  voxelHit.point.z = fStack_32;
                  voxelHit.normal.x = fStack_33;
                  voxelHit.normal.y = fStack_34;
                  voxelHit.normal.z = (float)IStack_35._0_4_;
                  voxelHit.cubePos._0_4_ = stack0xffffff4c;
                  voxelHit._28_4_ = iStack_36;
                  voxelHit.face = uStack_37;
                  voxelHit._36_4_ = iStack_23;
                  voxelHit.woId = (int32_t)pCStack_38;
                  voxelHit.cube = (Cube *)fStack_39;
                  voxelHit.distance = (float)pCStack_40;
                  voxelHit.collider = (Collider *)pTStack_41;
                  voxelHit.transform = (Transform *)uStack_42;
                  voxelHit._60_8_ = uStack_4;
                  voxelHit.interactionFlags._4_4_ = fStack_26;
                  RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                            (this_00,voxelHit,0.0,in_stack_43);
                  x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_03,(MethodInfo *)0x0);
                  fVar11 = fVar9;
                  pPVar19 = pPVar30;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                    fVar11 = fVar9;
                    pPVar19 = pPVar30;
                  }
                  bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar13 == 0) goto code_?;
                  pMVar24 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar24 != (MVNetworkGame *)0x0) {
                    this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar24,(MethodInfo *)0x0);
                    if (this_04 != (MVLocalPlayer *)0x0) {
                      bVar13 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                         ((MVPlayer *)this_04,this_03,(MethodInfo *)0x0);
                      if (bVar13 == 0) {
                        pIVar44 = RailgunHitPackage::RailgunHitPackage_Create
                                            ((InteractionData *)&stack0xffffff1c,(MethodInfo *)0x0);
                        if (x == (InteractionDataHandlerBase *)0x0) goto code_?;
                        uVar45._0_1_ = pIVar44->interactionType;
                        uVar45._1_1_ = pIVar44->playerKilledByType;
                        uVar45._2_2_ = *(undefined2 *)&pIVar44->field_0x12;
                        func_?(7,x,(this->fields)._._.owner,pIVar44->damage,
                                        (pIVar44->impulse).x,(pIVar44->impulse).y,
                                        (pIVar44->impulse).z,uVar45,0);
                      }
code_?:
                      iVar46 = func_?(this_03,TypeInfo__IBulletImpactVisualizer);
                      uVar47 = RStack_2.m_Direction._4_8_;
                      fVar8 = RStack_2.m_Direction.x;
                      fVar9 = RStack_2.m_Origin.y;
                      fVar10 = RStack_2.m_Origin.x;
                      if (iVar46 != 0) {
                        pMVar3 = (this->fields)._._.owner;
                        VStack_7._4_8_ = iStack_27;
                        if ((pMVar3 == (MVPickupOwner *)0x0) ||
                           (pMVar48 = (pMVar3->fields)._.worldObjectParent,
                           pMVar48 == (MVWorldObjectClient *)0x0)) goto code_?;
                        pOVar49 = &(this->fields).baseDamage;
                        iVar22 = pOVar49->currentCryptoKey;
                        AVar50 = (this->fields).baseDamage.hiddenValue;
                        pBVar29 = (this->fields).baseDamage.hiddenValueOld;
                        OVar31 = *pOVar49;
                        uStack_4 = CONCAT44((pMVar48->fields)._.ownerActorNr,(float)uStack_4);
                        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(
                                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                         );
                        }
                        puVar51 = &UNK_?;
                        fStack_26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                   ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1
                                             (OVar31,(MethodInfo *)0x0);
                        puVar52 = &UNK_?;
                        iVar46 = func_?(this_03,TypeInfo__IBulletImpactVisualizer);
                        if (iVar46 == 0) goto code_?;
                        iVar46 = func_?();
                        if (iVar46 == 0) goto code_?;
                        func_?(0,TypeInfo__IBulletImpactVisualizer,iVar46,fVar5,fVar11,
                                        pPVar19,fStack_32,pBVar29,puVar52,fVar10,fVar9,iStack_36,
                                        puVar51,iVar22,AVar50,fVar8,(float)uVar47,SUB84(uVar47,4),
                                        uStack_4._4_4_,VStack_7.y,VStack_7.z);
                      }
code_?:
                      bVar12 = true;
                      this = in_stack_20;
                      fStack_14 = in_stack_17;
                      fStack_15 = in_stack_18;
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
  pcVar53 = (code *)swi(3);
  (*pcVar53)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  PickupItemCollectTheItem::PickupItemCollectTheItem_OnEquip
            ((PickupItemCollectTheItem *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pOVar1 = (ObscuredInt__Class *)(this->fields).maxAmmo.currentCryptoKey;
  iVar2 = (this->fields).maxAmmo.hiddenValue;
  iVar3 = (this->fields).maxAmmo.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    func_?();
  }
  value.hiddenValue = iVar2;
  value.currentCryptoKey = (int32_t)pOVar1;
  value.fakeValue = iVar3;
  value.inited = (this->fields).maxAmmo.inited;
  value._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = (*(this->klass->vtable).GetAmmoMultiplier.methodPtr)(this,iVar2);
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar2,(MethodInfo *)0x0);
  iVar2 = pOVar4->hiddenValue;
  iVar3 = pOVar4->fakeValue;
  bVar5 = pOVar4->inited;
  uVar6 = *(undefined3 *)&pOVar4->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
  (this->fields).currentAmmo.fakeValue = iVar3;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_TriggerBegin
               (PickupItemRailGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Got_TriggerStart__but_were_firin);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if ((this->fields)._.isFiring == 0) {
      (this->fields)._.isFiring = 1;
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Got_TriggerStart__but_were_firin,(MethodInfo *)0x0);
    }
  }
  else {
    (this->fields)._.triggerBegin = 1;
  }
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
code_?:
    (this->fields)._.isFiring = 0;
  }
  else if ((this->fields)._.triggerBegin != 0) {
    pPVar1 = this->klass;
    (this->fields)._.triggerBegin = 0;
    (this->fields)._.isFiring = 1;
    (*(pPVar1->vtable).UpdateControllerUpdate_1.methodPtr)
              (this,(pPVar1->vtable).UpdateControllerUpdate_1.method);
    goto code_?;
  }
  if ((this->fields).isCharging != 0) {
    pfVar2 = &(this->fields).currentCharge;
    if (*pfVar2 <= _UNK_? && _UNK_? != *pfVar2) {
      pAVar3 = (this->fields).chargeAudioSource;
      if (pAVar3 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                  (pAVar3,(MethodInfo *)0x0);
        pAVar3 = (this->fields).chargeAudioSource;
        if (pAVar3 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar3,0,(MethodInfo *)0x0);
          (this->fields).isCharging = 0;
          return;
        }
      }
      goto code_?;
    }
    pAVar3 = (this->fields).releaseSound;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pAVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pAVar3 = (this->fields).chargeAudioSource;
      if (pAVar3 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar3,(MethodInfo *)0x0);
      pAVar3 = (this->fields).chargeAudioSource;
      if (pAVar3 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar3,0,(MethodInfo *)0x0);
      pAVar3 = (this->fields).chargeAudioSource;
      if (pAVar3 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar3,_UNK_? - (this->fields).currentCharge * _UNK_?,
                 (MethodInfo *)0x0);
      pMVar5 = (this->fields)._._.owner;
      if (pMVar5 == (MVPickupOwner *)0x0) goto code_?;
      if ((pMVar5->fields)._IsLocal_k__BackingField == 0) {
        pTVar6 = (this->fields)._._.muzzlePoint;
        if (pTVar6 == (Transform *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffc0,pTVar6,(MethodInfo *)0x0);
        fVar8 = pVVar7->x;
        fVar9 = pVVar7->y;
        fVar10 = pVVar7->z;
      }
      else {
        pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar11 == (Camera *)0x0) goto code_?;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar11,(MethodInfo *)0x0);
        if (pTVar6 == (Transform *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe0,pTVar6,(MethodInfo *)0x0);
        uVar12._0_4_ = pVVar7->x;
        uVar12._4_4_ = pVVar7->y;
        puVar13 = &UNK_?;
        pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar11 == (Camera *)0x0) goto code_?;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar11,(MethodInfo *)0x0);
        if (pTVar6 == (Transform *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffc0,pTVar6,(MethodInfo *)0x0);
        uVar14 = pVVar7->x;
        uVar15 = pVVar7->y;
        fVar8 = (float)uVar12 + (float)uVar14;
        fVar9 = (float)uVar15 + (float)((ulonglong)uVar12 >> 0x20);
        fVar10 = pVVar7->z + (float)puVar13;
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      if (this_00 == (AudioManager *)0x0) goto code_?;
      position.y = fVar9;
      position.x = fVar8;
      position.z = fVar10;
      AudioManager::AudioManager_Play_2
                (this_00,StringLiteral_RailShot,(this->fields).releaseSound,position,
                 (MethodInfo *)0x0);
    }
    (this->fields).missColor.a = 1.0;
    (this->fields).hitColor.a = 1.0;
    PickupItemRailGun_Fire(this,(MethodInfo *)0x0);
    fVar10 = (float)(this->fields).currentAmmo.currentCryptoKey;
    fVar8 = (float)(this->fields).currentAmmo.hiddenValue;
    fVar9 = (float)(this->fields).currentAmmo.fakeValue;
    puVar13 = *(undefined **)&(this->fields).currentAmmo.inited;
    (this->fields).isCharging = 0;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      puVar13 = &UNK_?;
      func_?();
    }
    OVar16.hiddenValue = (int32_t)fVar8;
    OVar16.currentCryptoKey = (int32_t)fVar10;
    OVar16.fakeValue = (int32_t)fVar9;
    OVar16._12_4_ = puVar13;
    iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(OVar16,(MethodInfo *)0x0);
    pOVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffc0,iVar17 + -1,(MethodInfo *)0x0)
    ;
    iVar17 = pOVar18->hiddenValue;
    iVar19 = pOVar18->fakeValue;
    bVar4 = pOVar18->inited;
    uVar20 = *(undefined3 *)&pOVar18->field_0xd;
    OVar16 = *pOVar18;
    (this->fields).currentAmmo.currentCryptoKey = pOVar18->currentCryptoKey;
    (this->fields).currentAmmo.hiddenValue = iVar17;
    (this->fields).currentAmmo.fakeValue = iVar19;
    (this->fields).currentAmmo.inited = bVar4;
    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar20;
    iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(OVar16,(MethodInfo *)0x0);
    if (iVar17 == 0) {
      cVar21 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)();
      if (cVar21 == '\0') {
        pMVar5 = (this->fields)._._.owner;
        if (pMVar5 == (MVPickupOwner *)0x0) {
code_?:
          func_?();
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)pMVar5,
                       MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
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
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
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
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar5 == '\0';
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

