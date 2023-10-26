
/* Void DoFire(Boolean) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_DoFire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((this->fields).throwingStarsFired < (this->fields).numStars) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).fireTime + (this->fields).fireSpacingDelay <= fVar1) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).fireTime = fVar1;
      PickupItemMultiThrowingStar_Fire(this,isLocal,(MethodInfo *)0x0);
    }
  }
  uVar2 = (this->fields).currentAmmo.currentCryptoKey;
  uVar3 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar3;
  value.currentCryptoKey = uVar2;
  iVar4 = (this->fields).currentAmmo.fakeValue;
  uVar5 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.fakeValue = iVar4;
  value._12_4_ = uVar5;
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if (iVar4 < 1) {
    cVar6 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                      (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
    if (cVar6 == '\0') {
      pMVar7 = (this->fields)._._.owner;
      if (((pMVar7 == (MVPickupOwner *)0x0) ||
          (pMVar8 = (pMVar7->fields)._.worldObjectParent, pMVar8 == (MVWorldObjectClient *)0x0)) ||
         (this_00 = (pMVar8->fields).gameObject, this_00 == (GameObject *)0x0)) {
code_?:
        func_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    (this_00,
                     MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        if (x == (Object_1 *)0x0) goto code_?;
        (*(code *)x->klass[1]._0.byval_arg.data)();
      }
    }
  }
  return;
}


/* Void Fire(Boolean) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_Fire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__BulletThrowingStar__OnHitDelegate);
    func_?(&
                    MethodInfo__PickupItemMultiThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_
                   );
    func_?(&
                    MethodInfo__PickupItemMultiThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                   );
    func_?(&StringLiteral_projectile_fire);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.muzzlePoint;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
    this_00 = BulletThrowingStar::BulletThrowingStar_CreateBullet
                        (PoolEnums__Enum_MultiThrowingStarBullet,*pVVar2,(MethodInfo *)0x0);
    pMVar3 = (this->fields)._._.owner;
    if (pMVar3 != (MVPickupOwner *)0x0) {
      VVar4 = (pMVar3->fields).lookOrigin;
      pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                          ((Vector3 *)&stack0xffffffd8,(this->fields)._._.owner,(MethodInfo *)0x0);
      fVar5 = pVVar2->x;
      fVar6 = pVVar2->y;
      this_02 = (Ray *)&stack0xffffffbc;
      UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                (this_02,VVar4,*pVVar2,(MethodInfo *)0x0);
      if (this_00 != (BulletThrowingStar *)0x0) {
        pBVar7 = (this_00->fields).onHit;
        pBVar8 = (BulletThrowingStar_OnHitDelegate *)func_?();
        if (pBVar8 != (BulletThrowingStar_OnHitDelegate *)0x0) {
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar8,(Object *)this,
                     MethodInfo__PickupItemMultiThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_
                     ,(MethodInfo *)0x0);
          pBVar8 = (BulletThrowingStar_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBVar7,(Delegate *)pBVar8,(MethodInfo *)0x0);
          pBVar7 = (BulletThrowingStar_OnHitDelegate *)0x0;
          if (pBVar8 == (BulletThrowingStar_OnHitDelegate *)0x0) {
            (this_00->fields).onHit = (BulletThrowingStar_OnHitDelegate *)0x0;
          }
          else {
            if (pBVar8->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
              pBVar7 = pBVar8;
            }
            if (pBVar7 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
            (this_00->fields).onHit = pBVar7;
            pBVar7 = (BulletThrowingStar_OnHitDelegate *)0x0;
            if (pBVar8->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
              pBVar7 = pBVar8;
            }
            if (pBVar7 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
          }
          ppBVar9 = &(this_00->fields).onHit;
          puVar10 = &UNK_?;
          func_?();
          if (isLocal != 0) {
            pBVar8 = (BulletThrowingStar_OnHitDelegate *)
                      func_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
            if (pBVar8 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
            BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                      (pBVar8,(Object *)this,
                       MethodInfo__PickupItemMultiThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                       ,(MethodInfo *)0x0);
            (this_00->fields).onHitLocal = pBVar8;
            func_?(&(this_00->fields).onHitLocal,pBVar8);
          }
          pMVar3 = (this->fields)._._.owner;
          if (pMVar3 != (MVPickupOwner *)0x0) {
            speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              (pMVar3,(this->fields).bulletSpeed,(MethodInfo *)0x0);
            rangeStraight = (this->fields).bulletRangeStraight;
            pMVar3 = (this->fields)._._.owner;
            if (pMVar3 != (MVPickupOwner *)0x0) {
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(pMVar3->klass->vtable).get_IgnoreWOIDs.methodPtr)
                                      (pMVar3,(pMVar3->klass->vtable).get_IgnoreWOIDs.method);
              lineOfFire.m_Direction.z = fVar6;
              lineOfFire.m_Direction.y = fVar5;
              lineOfFire.m_Origin.y = (float)puVar10;
              lineOfFire.m_Origin.x = (float)this_02;
              lineOfFire.m_Origin.z = (float)ppBVar9;
              lineOfFire.m_Direction.x = (float)pBVar7;
              BulletThrowingStar::BulletThrowingStar_Fire
                        (this_00,speed,rangeStraight,lineOfFire,ignoreWoIDs,
                         (this->fields).bulletRangeFall,(this->fields).bulletFallRate,
                         (MethodInfo *)0x0);
              this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                  ((MethodInfo *)0x0);
              audioSource = (this->fields).fireSound;
              if (isLocal == 0) {
                pTVar1 = (this->fields)._._.muzzlePoint;
                if (pTVar1 != (Transform *)0x0) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
                  if (this_01 != (AudioManager *)0x0) {
                    uVar11._0_4_ = pVVar2->x;
                    uVar11._4_4_ = pVVar2->y;
                    fVar5 = pVVar2->z;
code_?:
                    VVar4.z = fVar5;
                    VVar4.x = (float)(int)uVar11;
                    VVar4.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                    AudioManager::AudioManager_Play_2
                              (this_01,StringLiteral_projectile_fire,audioSource,VVar4,
                               (MethodInfo *)0x0);
                    piVar12 = &(this->fields).throwingStarsFired;
                    *piVar12 = *piVar12 + 1;
                    iVar13 = (this->fields).currentAmmo.currentCryptoKey;
                    fVar5 = (float)(this->fields).currentAmmo.hiddenValue;
                    iVar14 = (this->fields).currentAmmo.fakeValue;
                    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    input.hiddenValue = (int32_t)fVar5;
                    input.currentCryptoKey = iVar13;
                    input.fakeValue = iVar14;
                    input.inited = (this->fields).currentAmmo.inited;
                    input._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                    pOVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredInt::ObscuredInt_op_Decrement
                                        ((ObscuredInt *)&stack0xffffffd4,input,(MethodInfo *)0x0);
                    iVar13 = pOVar15->hiddenValue;
                    iVar14 = pOVar15->fakeValue;
                    bVar16 = pOVar15->inited;
                    uVar17 = *(undefined3 *)&pOVar15->field_0xd;
                    iVar18 = (this->fields).throwingStarsFired;
                    (this->fields).currentAmmo.currentCryptoKey = pOVar15->currentCryptoKey;
                    (this->fields).currentAmmo.hiddenValue = iVar13;
                    (this->fields).currentAmmo.fakeValue = iVar14;
                    (this->fields).currentAmmo.inited = bVar16;
                    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar17;
                    if ((this->fields).numStars <= iVar18) {
                      (this->fields)._.isFiring = 0;
                      (this->fields).throwingStarsFired = 0;
                    }
                    return;
                  }
                }
              }
              else {
                pCVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if (pCVar19 != (Camera *)0x0) {
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar19,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
                    uVar20 = pVVar2->x;
                    uVar21 = pVVar2->y;
                    fVar5 = pVVar2->z;
                    pCVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                        ((MethodInfo *)0x0);
                    if (pCVar19 != (Camera *)0x0) {
                      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar19,(MethodInfo *)0x0);
                      if (pTVar1 != (Transform *)0x0) {
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
                        uVar22 = pVVar2->x;
                        uVar23 = pVVar2->y;
                        fVar5 = pVVar2->z + fVar5;
                        if (this_01 != (AudioManager *)0x0) {
                          uVar11 = CONCAT44((float)uVar21 + (float)uVar23,(float)uVar22 + (float)uVar20);
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
  func_?();
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnBulletHit
               (PickupItemMultiThrowingStar *this,VoxelHit voxelHit,Ray lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__PickupItemMultiThrowingStar);
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
        if ((TypeInfo__PickupItemMultiThrowingStar->_1).cctor_finished_or_no_cctor == 0) {
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

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnFire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  (this->fields).isLocal = isLocal;
  pMVar2 = (this->fields)._._.owner;
  if ((pMVar2 != (MVPickupOwner *)0x0) &&
     (pMVar3 = (pMVar2->fields)._.worldObjectParent, pMVar3 != (MVWorldObjectClient *)0x0)) {
    pMStack_1 = (this->klass->vtable).TriggerBegin.method;
    iStack_4 = (pMVar3->fields)._.id;
    pPStack_5 = this;
    (*(this->klass->vtable).TriggerBegin.methodPtr)();
    return;
  }
  uVar6 = func_?(&pPStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnHolstered
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_OnLeaveVehicleWithWeapon
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((this->fields).numStars <= (this->fields).throwingStarsFired) {
    (this->fields)._.isFiring = 0;
  }
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnLocalBulletHit
               (PickupItemMultiThrowingStar *this,VoxelHit voxelHit,Ray lineOfFire,
               MethodInfo *method)

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
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          voxelHit.point.x = 0.0;
          in_stack_3 = &UNK_?;
          this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame *)0x0) {
            voxelHit.point.y = 0.0;
            in_stack_3 = &UNK_?;
            voxelHit.point.x = (float)this_01;
            this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
            if (this_02 != (MVLocalPlayer *)0x0) {
              voxelHit.normal.x = 0.0;
              voxelHit.point.x = (float)&UNK_?;
              voxelHit.point.y = (float)this_02;
              voxelHit.point.z = (float)this_00;
              bVar2 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                ((MVPlayer *)this_02,this_00,(MethodInfo *)0x0);
              if (bVar2 != 0) {
                return;
              }
              pMVar4 = (this->fields)._._.owner;
              if (pMVar4 != (MVPickupOwner *)0x0) {
                voxelHit.cubePos.x = 0;
                voxelHit.cubePos.y = 0;
                voxelHit.normal.y = (float)&UNK_?;
                voxelHit.normal.z = (float)pMVar4;
                this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pMVar4,(MethodInfo *)0x0);
                if (this_03 != (Transform *)0x0) {
                  voxelHit.face = 0;
                  voxelHit.cubePos._0_4_ = &stack0xffffffe4;
                  voxelHit.normal.z = (float)&UNK_?;
                  voxelHit._28_4_ = this_03;
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)voxelHit.cubePos._0_4_,this_03,(MethodInfo *)0x0);
                  uVar6 = pVVar5->x;
                  uVar7 = pVVar5->y;
                  voxelHit.face = (int32_t)((float)in_stack_3 - (float)uVar6);
                  voxelHit._36_4_ = voxelHit.point.x - (float)uVar7;
                  voxelHit.woId = (int32_t)(voxelHit.point.y - pVVar5->z);
                  voxelHit.cube = (Cube *)0x0;
                  voxelHit._28_4_ = &voxelHit.transform;
                  voxelHit.cubePos._0_4_ = &UNK_?;
                  value.y = (float)voxelHit._36_4_;
                  value.x = (float)voxelHit.face;
                  value.z = (float)voxelHit.woId;
                  voxelHit.interactionFlags._0_4_ = (float)voxelHit.woId;
                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)voxelHit._28_4_,value,(MethodInfo *)0x0);
                  pMVar4 = (this->fields)._._.owner;
                  voxelHit.woId = (int32_t)&voxelHit.distance;
                  voxelHit.cube = (Cube *)0x0;
                  voxelHit._36_4_ = &UNK_?;
                  pIVar8 = MultiThrowingStarHitPackage::MultiThrowingStarHitPackage_Create
                                     ((InteractionData *)voxelHit.woId,(MethodInfo *)0x0);
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    voxelHit.distance = pIVar8->damage;
                    voxelHit.collider = (Collider *)(pIVar8->impulse).x;
                    voxelHit.transform = (Transform *)(pIVar8->impulse).y;
                    voxelHit._60_4_ = (pIVar8->impulse).z;
                    voxelHit.interactionFlags._0_1_ = pIVar8->interactionType;
                    voxelHit.interactionFlags._1_1_ = pIVar8->playerKilledByType;
                    voxelHit.interactionFlags._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
                    voxelHit.interactionFlags._4_4_ = 0;
                    voxelHit._36_4_ = &UNK_?;
                    voxelHit.woId = (int32_t)x;
                    voxelHit.cube = (Cube *)pMVar4;
                    (*(x->klass->vtable).__unknown_1.methodPtr)();
                    return;
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_ResetAmmo
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

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

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_TriggerBegin
               (PickupItemMultiThrowingStar *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) &&
      ((this->fields)._.isFiring == 0)) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     (this->fields).fireTime + (this->fields).fireRate < fVar1)) {
    (this->fields)._.isFiring = 1;
    (this->fields).throwingStarsFired = 0;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).fireTime = fVar1;
  }
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_TriggerEnd
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) &&
      ((this->fields)._.isFiring == 0)) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     (this->fields).fireTime + (this->fields).fireRate < fVar1)) {
    (this->fields)._.isFiring = 1;
    (this->fields).throwingStarsFired = 0;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).fireTime = fVar1;
  }
  return;
}


/* Void TriggerFire() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_TriggerFire
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if ((this->fields)._.isFiring == 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).fireTime + (this->fields).fireRate < fVar1) {
      (this->fields)._.isFiring = 1;
      (this->fields).throwingStarsFired = 0;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).fireTime = fVar1;
    }
  }
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_UpdateControllerUpdate
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if ((this->fields)._.isFiring != 0) {
    if (cRam_? == '\0') {
      func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
      ;
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      cRam_? = '\x01';
    }
    cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                      (this,(this->klass->vtable).get_IsAmmoDepleted.method);
    if (cVar1 == '\0') {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar3 = (this->fields)._.lastFireTime;
      iVar4 = (this->fields)._.fireInterval.currentCryptoKey;
      AVar5 = (this->fields)._.fireInterval.hiddenValue;
      pBVar6 = (this->fields)._.fireInterval.hiddenValueOld;
      fVar7 = (this->fields)._.fireInterval.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value.hiddenValue = AVar5;
      value.currentCryptoKey = iVar4;
      value.hiddenValueOld = pBVar6;
      value.fakeValue = fVar7;
      value.inited = (this->fields)._.fireInterval.inited;
      value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
      fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      if (fVar7 < fVar2 - fVar3) {
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pMVar8 = (this->fields)._._.owner;
        (this->fields)._.lastFireTime = fVar3;
        if (pMVar8 == (MVPickupOwner *)0x0) goto code_?;
        (*(this->klass->vtable).OnFire.methodPtr)
                  (this,(uint)(pMVar8->fields)._IsLocal_k__BackingField,
                   (this->klass->vtable).OnFire.method);
        (this->fields)._._.firedThisFrame = 1;
      }
    }
    cVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                      (this,(this->klass->vtable).get_IsAmmoDepleted.method);
    if (cVar1 != '\0') {
      pMVar8 = (this->fields)._._.owner;
      if (((pMVar8 == (MVPickupOwner *)0x0) ||
          (pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0)) ||
         (pGVar10 = (pMVar9->fields).gameObject, pGVar10 == (GameObject *)0x0)) goto code_?;
      pOVar11 = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (pGVar10,
                          MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (pOVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar12 != 0) {
        if (pOVar11 == (Object_1 *)0x0) goto code_?;
        pOVar13 = pOVar11->klass;
        uVar14._0_2_ = pOVar13[1]._0.byval_arg.attrs;
        uVar14._2_1_ = pOVar13[1]._0.byval_arg.type;
        uVar14._3_1_ = pOVar13[1]._0.byval_arg.field_0x7;
        (*(code *)pOVar13[1]._0.byval_arg.data)(pOVar11,uVar14);
      }
      (this->fields)._.isFiring = 0;
    }
    if ((this->fields)._.isFiring != 0) {
      if (cRam_? == '\0') {
        func_?(&
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        cRam_? = '\x01';
      }
      if ((this->fields).throwingStarsFired < (this->fields).numStars) {
        bVar12 = 0x23;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if ((this->fields).fireTime + (this->fields).fireSpacingDelay <= fVar3) {
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (this->fields).fireTime = fVar3;
          PickupItemMultiThrowingStar_Fire(this,bVar12,(MethodInfo *)0x0);
        }
      }
      iVar4 = (this->fields).currentAmmo.currentCryptoKey;
      iVar15 = (this->fields).currentAmmo.hiddenValue;
      iVar16 = (this->fields).currentAmmo.fakeValue;
      uVar14 = *(undefined4 *)&(this->fields).currentAmmo.inited;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      value_00.hiddenValue = iVar15;
      value_00.currentCryptoKey = iVar4;
      value_00.fakeValue = iVar16;
      value_00._12_4_ = uVar14;
      iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
      if (iVar4 < 1) {
        cVar1 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)();
        if (cVar1 == '\0') {
          pMVar8 = (this->fields)._._.owner;
          if (((pMVar8 == (MVPickupOwner *)0x0) ||
              (pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0))
             || (pGVar10 = (pMVar9->fields).gameObject, pGVar10 == (GameObject *)0x0)) {
code_?:
            func_?();
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pOVar11 = (Object_1 *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar10,
                              MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                             );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            (pOVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar12 != 0) {
            if (pOVar11 == (Object_1 *)0x0) goto code_?;
            pOVar13 = pOVar11->klass;
            uVar18._0_2_ = pOVar13[1]._0.byval_arg.attrs;
            uVar18._2_1_ = pOVar13[1]._0.byval_arg.type;
            uVar18._3_1_ = pOVar13[1]._0.byval_arg.field_0x7;
            (*(code *)pOVar13[1]._0.byval_arg.data)(pOVar11,uVar18);
          }
        }
      }
    }
  }
  return;
}


/* PickupItemMultiThrowingStar() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemMultiThrowingStar);
    cRam_? = '\x01';
  }
  pIVar1 = MultiThrowingStarHitPackage::MultiThrowingStarHitPackage_Create
                     (&IStack_2,(MethodInfo *)0x0);
  TypeInfo__PickupItemMultiThrowingStar->static_fields->baseDamage = pIVar1->damage;
  return;
}


/* PickupItemMultiThrowingStar() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar__ctor
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_2,0x96,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  (this->fields).bulletRangeStraight = 50.0;
  (this->fields).bulletRangeFall = 50.0;
  (this->fields).bulletFallRate = 0.1;
  (this->fields).bulletSpeed = 80.0;
  (this->fields).numStars = 5;
  (this->fields).fireSpacingDelay = 0.1;
  (this->fields).fireRate = 1.0;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_get_IsAmmoDepleted
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_get_Quantity
                  (PickupItemMultiThrowingStar *this,MethodInfo *method)

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


/* AvatarItemType get_Type() */

AvatarItemType__Enum
Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_get_Type
          (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  return AvatarItemType__Enum_MultiThrowingStar;
}

