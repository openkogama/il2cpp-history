
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_Awake
               (PickupItemThrowingStar *this,MethodInfo *method)

{
  (*(this->klass->vtable).ResetAmmo.methodPtr)(this,(this->klass->vtable).ResetAmmo.method);
  return;
}


/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnBulletHit
               (PickupItemThrowingStar *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__PickupItemThrowingStar);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      iVar3 = func_?();
      if (iVar3 == 0) {
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffe8,voxelHit._8_12_,(MethodInfo *)0x0);
        position.y = voxelHit.point.x;
        position.x = (float)in_stack_5;
        position.z = voxelHit.point.y;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,
                   (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
        return;
      }
      pMVar6 = (this->fields)._._.owner;
      if ((pMVar6 != (MVPickupOwner *)0x0) &&
         ((pMVar6->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
        if ((TypeInfo__PickupItemThrowingStar->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (pMVar2 != (MVWorldObject *)0x0) {
          iVar3 = func_?();
          if (iVar3 != 0) {
            iVar3 = func_?();
            if (iVar3 != 0) {
              func_?(0,TypeInfo__IBulletImpactVisualizer,iVar3,in_stack_5,
                              voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x,
                              voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,
                              voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,voxelHit.woId,
                              voxelHit.cube,voxelHit.distance,voxelHit.collider,voxelHit.transform,
                              voxelHit._60_8_,voxelHit.interactionFlags._4_4_,lineOfFire.m_Origin.x,
                              lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,lineOfFire.m_Direction.x,
                              lineOfFire.m_Direction.y);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnFire
               (PickupItemThrowingStar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__BulletThrowingStar__OnHitDelegate);
    func_?(&MethodInfo__PickupItemThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&
                    MethodInfo__PickupItemThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                   );
    func_?(&StringLiteral_projectile_fire);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  puStack_2 = (undefined *)0x0;
  ppBStack_3 = (BulletThrowingStar_OnHitDelegate **)0x0;
  pBStack_4 = (BulletThrowingStar_OnHitDelegate *)0x0;
  pBStack_5 = (BulletThrowingStar_OnHitDelegate__Class *)0x0;
  pTVar6 = (this->fields)._._.muzzlePoint;
  if (pTVar6 != (Transform *)0x0) {
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
    this_00 = BulletThrowingStar::BulletThrowingStar_CreateBullet
                        (PoolEnums__Enum_ThrowingStarBullet,*pVVar7,(MethodInfo *)0x0);
    if (this_00 != (BulletThrowingStar *)0x0) {
      pBVar8 = (this_00->fields).onHit;
      pBStack_5 = TypeInfo__BulletThrowingStar__OnHitDelegate;
      this_01 = (BulletThrowingStar_OnHitDelegate *)func_?();
      if (this_01 != (BulletThrowingStar_OnHitDelegate *)0x0) {
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (this_01,(Object *)this,
                   MethodInfo__PickupItemThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar8 = (BulletThrowingStar_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar8,(Delegate *)this_01,(MethodInfo *)0x0);
        uVar9._4_4_ = (float)TypeInfo__BulletThrowingStar__OnHitDelegate;
        uVar9._0_4_ = (float)pBVar8;
        pBStack_4 = (BulletThrowingStar_OnHitDelegate *)0x0;
        if (pBVar8 == (BulletThrowingStar_OnHitDelegate *)0x0) {
          (this_00->fields).onHit = (BulletThrowingStar_OnHitDelegate *)0x0;
        }
        else {
          if (pBVar8->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
            pBStack_4 = pBVar8;
          }
          if (pBStack_4 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
          (this_00->fields).onHit = pBStack_4;
          uVar9._4_4_ = (float)TypeInfo__BulletThrowingStar__OnHitDelegate;
          pBStack_4 = (BulletThrowingStar_OnHitDelegate *)0x0;
          if (pBVar8->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
            pBStack_4 = pBVar8;
          }
          if (pBStack_4 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
        }
        ppBStack_3 = &(this_00->fields).onHit;
        func_?();
        if (isLocal != 0) {
          pBVar8 = (BulletThrowingStar_OnHitDelegate *)
                    func_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
          if (pBVar8 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar8,(Object *)this,
                     MethodInfo__PickupItemThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                     ,(MethodInfo *)0x0);
          (this_00->fields).onHitLocal = pBVar8;
          func_?(&(this_00->fields).onHitLocal,pBVar8);
        }
        pMVar10 = (this->fields)._._.owner;
        if (pMVar10 != (MVPickupOwner *)0x0) {
          VVar11 = (pMVar10->fields).lookOrigin;
          pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection
                              ((Vector3 *)&stack0xffffffd8,(this->fields)._._.owner,
                               (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                    ((Ray *)&fStack_1,VVar11,*pVVar7,(MethodInfo *)0x0);
          pMVar10 = (this->fields)._._.owner;
          if (pMVar10 != (MVPickupOwner *)0x0) {
            speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              (pMVar10,(this->fields).bulletSpeed,(MethodInfo *)0x0);
            pBVar12 = pBStack_5;
            fVar13 = (this->fields).bulletRangeStraight;
            pMVar14 = (this->fields)._._.owner;
            if (pMVar14 != (MVPickupOwner *)0x0) {
              fVar15 = fStack_1;
              puVar16 = puStack_2;
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(pMVar14->klass->vtable).get_IgnoreWOIDs.methodPtr)();
              lineOfFire.m_Direction.z = (float)pMVar10;
              lineOfFire.m_Direction.y = (float)pBVar12;
              lineOfFire.m_Origin.y = (float)puVar16;
              lineOfFire.m_Origin.x = fVar15;
              lineOfFire.m_Origin.z = (float)&UNK_?;
              lineOfFire.m_Direction.x = (float)pMVar14;
              BulletThrowingStar::BulletThrowingStar_Fire
                        (this_00,speed,fVar13,lineOfFire,ignoreWoIDs,(this->fields).bulletRangeFall,
                         (this->fields).bulletFallRate,(MethodInfo *)0x0);
              iVar17 = (this->fields).currentAmmo.currentCryptoKey;
              fVar13 = (float)(this->fields).currentAmmo.hiddenValue;
              iVar18 = (this->fields).currentAmmo.fakeValue;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              }
              input.hiddenValue = (int32_t)fVar13;
              input.currentCryptoKey = iVar17;
              input.fakeValue = iVar18;
              input.inited = (this->fields).currentAmmo.inited;
              input._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
              pOVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Decrement
                                  ((ObscuredInt *)&stack0xffffffd4,input,(MethodInfo *)0x0);
              iVar17 = pOVar19->hiddenValue;
              iVar18 = pOVar19->fakeValue;
              bVar20 = pOVar19->inited;
              uVar21 = *(undefined3 *)&pOVar19->field_0xd;
              (this->fields).currentAmmo.currentCryptoKey = pOVar19->currentCryptoKey;
              (this->fields).currentAmmo.hiddenValue = iVar17;
              (this->fields).currentAmmo.fakeValue = iVar18;
              (this->fields).currentAmmo.inited = bVar20;
              *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar21;
              this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                  ((MethodInfo *)0x0);
              audioSource = (this->fields).fireSound;
              if (isLocal == 0) {
                pTVar6 = (this->fields)._._.muzzlePoint;
                if (pTVar6 != (Transform *)0x0) {
                  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
                  if (this_02 != (AudioManager *)0x0) {
                    uVar22._0_4_ = pVVar7->x;
                    uVar22._4_4_ = pVVar7->y;
                    fVar13 = pVVar7->z;
code_?:
                    VVar11.z = fVar13;
                    VVar11.x = (float)(int)uVar22;
                    VVar11.y = (float)(int)((ulonglong)uVar22 >> 0x20);
                    AudioManager::AudioManager_Play_2
                              (this_02,StringLiteral_projectile_fire,audioSource,VVar11,
                               (MethodInfo *)0x0);
                    (this->fields)._.isFiring = 0;
                    return;
                  }
                }
              }
              else {
                pCVar23 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if (pCVar23 != (Camera *)0x0) {
                  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar23,(MethodInfo *)0x0);
                  if (pTVar6 != (Transform *)0x0) {
                    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
                    uVar24 = pVVar7->x;
                    uVar25 = pVVar7->y;
                    fVar13 = pVVar7->z;
                    pCVar23 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                        ((MethodInfo *)0x0);
                    if (pCVar23 != (Camera *)0x0) {
                      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar23,(MethodInfo *)0x0);
                      if (pTVar6 != (Transform *)0x0) {
                        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
                        uVar26 = pVVar7->x;
                        uVar27 = pVVar7->y;
                        fVar13 = pVVar7->z + fVar13;
                        if (this_02 != (AudioManager *)0x0) {
                          uVar22 = CONCAT44((float)uVar25 + (float)uVar27,(float)uVar26 + (float)uVar24);
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
    }
  }
code_?:
  uVar9 = func_?();
code_?:
  _ppBStack_3c = uVar9;
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnLocalBulletHit
               (PickupItemThrowingStar *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_00 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,id,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClient *)0x0) {
        voxelHit.point.y = 0.0;
        in_stack_2 = &UNK_?;
        voxelHit.point.x = (float)this_00;
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          voxelHit.normal.x = (float)TypeInfo__UnityEngine__Object;
          voxelHit.point.z = (float)&UNK_?;
          func_?();
        }
        voxelHit.normal.x = 0.0;
        voxelHit.point.z = 0.0;
        voxelHit.point.x = (float)&UNK_?;
        voxelHit.point.y = (float)x;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          voxelHit.cubePos.x = 0;
          voxelHit.cubePos.y = 0;
          voxelHit.normal.z = (float)&UNK_?;
          this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame *)0x0) {
            voxelHit.cubePos.z = 0;
            voxelHit._30_2_ = 0;
            voxelHit.normal.z = (float)&UNK_?;
            voxelHit.cubePos._0_4_ = this_01;
            this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
            if (this_02 != (MVLocalPlayer *)0x0) {
              voxelHit.isCubeHit = 0;
              voxelHit._37_3_ = 0;
              voxelHit.cubePos._0_4_ = &UNK_?;
              voxelHit._28_4_ = this_02;
              voxelHit.face = (int32_t)this_00;
              bVar3 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                ((MVPlayer *)this_02,this_00,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                return;
              }
              voxelHit.distance = 0.0;
              uVar4._0_2_ = (int16_t)uRam_?;
              uVar4._2_2_ = uRam_?._2_2_;
              voxelHit.cube = (Cube *)&voxelHit.distance;
              voxelHit.woId = (int32_t)&UNK_?;
              pIVar5 = ThrowingStarHitPackage::ThrowingStarHitPackage_Create
                                 ((InteractionData *)voxelHit.cube,(MethodInfo *)0x0);
              if (x != (InteractionDataHandlerBase *)0x0) {
                voxelHit.face = (int32_t)pIVar5->damage;
                voxelHit._36_4_ = (pIVar5->impulse).x;
                voxelHit.woId = (int32_t)(pIVar5->impulse).y;
                voxelHit.cube = (Cube *)(pIVar5->impulse).z;
                voxelHit.distance = *(float *)&pIVar5->interactionType;
                voxelHit.transform = (Transform *)(x->klass->vtable).__unknown_1.method;
                voxelHit.collider = (Collider *)0x0;
                voxelHit.normal.z = (float)&UNK_?;
                voxelHit.cubePos._0_4_ = x;
                voxelHit._28_4_ = uVar4;
                (*(x->klass->vtable).__unknown_1.methodPtr)();
                return;
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
  voxelHit.transform = (Transform *)&UNK_?;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_ResetAmmo
               (PickupItemThrowingStar *this,MethodInfo *method)

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


/* PickupItemThrowingStar() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemThrowingStar);
    cRam_? = '\x01';
  }
  pIVar1 = ThrowingStarHitPackage::ThrowingStarHitPackage_Create(&IStack_2,(MethodInfo *)0x0);
  TypeInfo__PickupItemThrowingStar->static_fields->damage = pIVar1->damage;
  return;
}


/* PickupItemThrowingStar() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar__ctor
               (PickupItemThrowingStar *this,MethodInfo *method)

{
  (this->fields).bulletRangeStraight = 50.0;
  (this->fields).bulletRangeFall = 50.0;
  (this->fields).bulletFallRate = 0.1;
  (this->fields).bulletSpeed = 80.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._.crossHairCannotFireLow.b = fVar2;
  (this->fields)._.crossHairCannotFireLow.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._.crossHairCannotFireHigh.b = fVar2;
  (this->fields)._.crossHairCannotFireHigh.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = _UNK_?;
  (this->fields)._.crossHairCanFire.g = fVar3;
  (this->fields)._.crossHairCanFire.b = fVar2;
  (this->fields)._.crossHairCanFire.a = fVar1;
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
  (this->fields)._.fireInterval.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = AVar6;
  (this->fields)._.fireInterval.hiddenValueOld = pBVar7;
  (this->fields)._.fireInterval.fakeValue = fVar3;
  (this->fields)._.fireInterval.inited = bVar8;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar9;
  func_?(&(this->fields)._.fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_get_IsAmmoDepleted
               (PickupItemThrowingStar *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_get_Quantity
                  (PickupItemThrowingStar *this,MethodInfo *method)

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

