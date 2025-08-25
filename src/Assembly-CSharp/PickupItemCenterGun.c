
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnBulletHit
               (PickupItemCenterGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__PickupItemCenterGun);
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
                           ((Quaternion *)&stack0xffffffe4,voxelHit._8_12_,(MethodInfo *)0x0);
        position.y = voxelHit.point.x;
        position.x = (float)in_stack_5;
        position.z = voxelHit.point.y;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,(Nullable_1_Single_)0x0,
                   (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
        return;
      }
      pMVar6 = (this->fields)._._.owner;
      if ((pMVar6 != (MVPickupOwner *)0x0) &&
         ((pMVar6->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
        if ((TypeInfo__PickupItemCenterGun->_1).cctor_finished_or_no_cctor == 0) {
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
                              voxelHit._60_4_,(int)voxelHit.interactionFlags,
                              voxelHit.interactionFlags._4_4_,lineOfFire.m_Origin.x,
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

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnFire
               (PickupItemCenterGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&StringLiteral_CenterGun_fire);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.muzzlePoint;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc0,pTVar1,(MethodInfo *)0x0);
    this_01 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_CenterGunBullet,*pVVar2,0.0,(MethodInfo *)0x0);
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (this_00,(MethodInfo *)0x0);
      pMVar3 = (this->fields)._._.owner;
      if (pMVar3 != (MVPickupOwner *)0x0) {
        uVar4 = (pMVar3->fields).lookOrigin.y;
        puVar5 = (undefined *)(pMVar3->fields).lookOrigin.z;
        pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffc0,(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        puStack_6 = puVar5;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffc0,*pVVar2,(MethodInfo *)0x0);
        fVar7 = pVVar2->x;
        fVar8 = pVVar2->y;
        fVar9 = pVVar2->z;
        if (this_01 != (Bullet *)0x0) {
          pBVar10 = (this_01->fields).onHit;
          pBVar11 = (BulletThrowingStar_OnHitDelegate *)func_?();
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar11,(Object *)this,
                     MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          pBVar12 = (Bullet_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBVar10,(Delegate *)pBVar11,(MethodInfo *)0x0);
          pBVar10 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar12 == (Bullet_OnHitDelegate *)0x0) {
            (this_01->fields).onHit = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            if (pBVar12->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar10 = pBVar12;
            }
            if (pBVar10 == (Bullet_OnHitDelegate *)0x0) goto code_?;
            (this_01->fields).onHit = pBVar10;
            pBVar10 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar12->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar10 = pBVar12;
            }
            if (pBVar10 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          }
          func_?();
          if (isLocal != 0) {
            pBVar11 = (BulletThrowingStar_OnHitDelegate *)
                      func_?(TypeInfo__Bullet__OnHitDelegate);
            BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                      (pBVar11,(Object *)pBVar10,
                       MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                       ,(MethodInfo *)0x0);
            (this_01->fields).onHitLocal = (Bullet_OnHitDelegate *)pBVar11;
            func_?(&(this_01->fields).onHitLocal,pBVar11);
          }
          pMVar3 = (pBVar10->fields)._._.interp_invoke_impl;
          if (pMVar3 != (MVPickupOwner *)0x0) {
            speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              (pMVar3,(float)pBVar10[3].fields._._.m_target,(MethodInfo *)0x0);
            pvVar13 = pBVar10[3].fields._._.method;
            piVar14 = (pBVar10->fields)._._.interp_invoke_impl;
            if (piVar14 != (int *)0x0) {
              uVar15 = *(undefined4 *)(*piVar14 + 0xfc);
              ignoreWoIDs = (HashSet_1_System_Int32_ *)(**(code **)(*piVar14 + 0xf8))(piVar14);
              lineOfFire.m_Direction.z = fVar9;
              lineOfFire.m_Direction.y = fVar8;
              lineOfFire.m_Origin.y = (float)uVar4;
              lineOfFire.m_Origin.x = (float)uVar15;
              lineOfFire.m_Origin.z = (float)puStack_6;
              lineOfFire.m_Direction.x = fVar7;
              Bullet::Bullet_Fire(this_01,speed,(float)pvVar13,lineOfFire,ignoreWoIDs,0,
                                  (MethodInfo *)0x0);
              puStack_6 = pBVar10[3].fields._._.extra_arg;
              pvVar13 = pBVar10[3].fields._._.method_code;
              pvVar16 = pBVar10[3].fields._._.interp_method;
              pvVar17 = pBVar10[3].fields._._.interp_invoke_impl;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              }
              input.hiddenValue = (int32_t)pvVar13;
              input.currentCryptoKey = (int32_t)puStack_6;
              input.fakeValue = (int32_t)pvVar16;
              input._12_4_ = pvVar17;
              pOVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Decrement
                                  ((ObscuredInt *)&puStack_6,input,(MethodInfo *)0x0);
              pvVar13 = (void *)pOVar18->hiddenValue;
              pvVar16 = (void *)pOVar18->fakeValue;
              pvVar17 = *(void **)&pOVar18->inited;
              pBVar10[3].fields._._.extra_arg = (void *)pOVar18->currentCryptoKey;
              pBVar10[3].fields._._.method_code = pvVar13;
              pBVar10[3].fields._._.interp_method = pvVar16;
              pBVar10[3].fields._._.interp_invoke_impl = pvVar17;
              if (isLocal == 0) {
                pTVar1 = (Transform *)(pBVar10->fields)._._.m_target;
                if (pTVar1 != (Transform *)0x0) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position((Vector3 *)&puStack_6,pTVar1,(MethodInfo *)0x0)
                  ;
                  fVar8 = pVVar2->x;
                  fVar9 = pVVar2->y;
                  fVar7 = pVVar2->z;
code_?:
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                      ((MethodInfo *)0x0);
                  if (this_02 != (AudioManager *)0x0) {
                    position.y = fVar9;
                    position.x = fVar8;
                    position.z = fVar7;
                    AudioManager::AudioManager_Play_2
                              (this_02,StringLiteral_CenterGun_fire,
                               *(AudioSource **)&pBVar10[2].fields._._.method_is_virtual,position,
                               (MethodInfo *)0x0);
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
                                        ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
                    uVar20._0_4_ = pVVar2->x;
                    uVar20._4_4_ = pVVar2->y;
                    fVar7 = pVVar2->z;
                    pCVar19 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                        ((MethodInfo *)0x0);
                    if (pCVar19 != (Camera *)0x0) {
                      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar19,(MethodInfo *)0x0);
                      if (pTVar1 != (Transform *)0x0) {
                        uVar20 = uVar20 & 0xffffffff00000000;
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&puStack_6,pTVar1,(MethodInfo *)0x0);
                        uVar21 = pVVar2->x;
                        uVar22 = pVVar2->y;
                        fVar8 = (float)uVar20 + (float)uVar21;
                        fVar9 = (float)(uVar20 >> 0x20) + (float)uVar22;
                        fVar7 = pVVar2->z + fVar7;
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
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnLocalBulletHit
               (PickupItemCenterGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemCenterGun);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    if ((TypeInfo__PickupItemCenterGun->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PickupItemCenterGun);
    }
    if (this_00 != (RuntimeEventManager *)0x0) {
      voxelHit_00.interactionFlags._4_4_ = TypeInfo__PickupItemCenterGun->static_fields->damage;
      voxelHit_00._0_68_ = voxelHit._0_68_;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,voxelHit_00,0.0,unaff_ESI);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar3,voxelHit._36_4_,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          this_01 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,id,(MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClient *)0x0) {
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_01,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              lineOfFire.m_Direction.x = (float)TypeInfo__UnityEngine__Object;
              lineOfFire.m_Origin.z = (float)&UNK_?;
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_02 != (MVLocalPlayer *)0x0)) {
                bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_02,this_01,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  return;
                }
                fVar5 = (this->fields).impulseStrength;
                auStack_6._16_4_ = lineOfFire.m_Direction.y * fVar5;
                impulse.y = lineOfFire.m_Direction.x * fVar5;
                impulse.x = lineOfFire.m_Origin.z * fVar5;
                impulse.z = (float)auStack_6._16_4_;
                pIVar7 = CenterGunHitPackage::CenterGunHitPackage_Create
                                   ((InteractionData *)auStack_6,impulse,(MethodInfo *)0x0);
                if (x != (InteractionDataHandlerBase *)0x0) {
                  uVar8._0_1_ = pIVar7->interactionType;
                  uVar8._1_1_ = pIVar7->playerKilledByType;
                  uVar8._2_2_ = *(undefined2 *)&pIVar7->field_0x12;
                  (*(code *)(x->klass->vtable).__unknown_1.method)
                            (x,(this->fields)._._.owner,pIVar7->damage,(pIVar7->impulse).x,
                             (pIVar7->impulse).y,(pIVar7->impulse).z,uVar8,0,
                             (x->klass->vtable).OnValidate.methodPtr);
                  return;
                }
              }
              goto code_?;
            }
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_ResetAmmo
               (PickupItemCenterGun *this,MethodInfo *method)

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

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_TriggerBegin
               (PickupItemCenterGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  (this->fields)._.isFiring = 1;
  return;
}


/* PickupItemCenterGun() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    func_?(&TypeInfo__PickupItemCenterGun);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pIVar2 = CenterGunHitPackage::CenterGunHitPackage_Create
                     ((InteractionData *)auStack_3,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  fStack_4 = pIVar2->damage;
  fStack_5 = (pIVar2->impulse).x;
  fStack_6 = (pIVar2->impulse).y;
  fStack_7 = (pIVar2->impulse).z;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    auStack_3._16_4_ = TypeInfo__MV__WorldObject__InteractionData;
    auStack_3._12_4_ = &UNK_?;
    func_?();
  }
  TypeInfo__PickupItemCenterGun->static_fields->damage = fStack_4;
  return;
}


/* PickupItemCenterGun() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun__ctor
               (PickupItemCenterGun *this,MethodInfo *method)

{
  (this->fields).projectileSpeed = 70.0;
  (this->fields).range = 100.0;
  (this->fields).impulseStrength = 700.0;
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

bool Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_IsAmmoDepleted
               (PickupItemCenterGun *this,MethodInfo *method)

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
                    (this,(this->klass->vtable).get_CanUnequip.methodPtr);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_MaxAmmo
                  (PickupItemCenterGun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_Quantity
                  (PickupItemCenterGun *this,MethodInfo *method)

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

