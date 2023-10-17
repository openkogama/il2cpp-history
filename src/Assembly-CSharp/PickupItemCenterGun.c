
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
  fVar1 = 0.0;
  pTVar2 = (this->fields)._._.muzzlePoint;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc0,pTVar2,(MethodInfo *)0x0);
    fVar4 = 0.0;
    this_01 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_CenterGunBullet,*pVVar3,(MethodInfo *)0x0);
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (this_00,(MethodInfo *)0x0);
      pMVar5 = (this->fields)._._.owner;
      if (pMVar5 != (MVPickupOwner *)0x0) {
        pVVar3 = &(pMVar5->fields).lookOrigin;
        fVar6 = pVVar3->y;
        VVar7 = *pVVar3;
        pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffc0,(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                  ((Ray *)&stack0xffffff98,VVar7,*pVVar3,(MethodInfo *)0x0);
        if (this_01 != (Bullet *)0x0) {
          pBVar8 = (BulletThrowingStar_OnHitDelegate *)func_?();
          if (pBVar8 != (BulletThrowingStar_OnHitDelegate *)0x0) {
            BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                      (pBVar8,(Object *)this,
                       MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                       (MethodInfo *)0x0);
            pBVar9 = (Bullet_OnHitDelegate *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)&UNK_?,(Delegate *)pBVar8,(MethodInfo *)0x0);
            pBVar10 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar9 == (Bullet_OnHitDelegate *)0x0) {
              (this_01->fields).onHit = (Bullet_OnHitDelegate *)0x0;
            }
            else {
              if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
                pBVar10 = pBVar9;
              }
              if (pBVar10 == (Bullet_OnHitDelegate *)0x0) goto code_?;
              (this_01->fields).onHit = pBVar10;
              pBVar10 = (Bullet_OnHitDelegate *)0x0;
              if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
                pBVar10 = pBVar9;
              }
              if (pBVar10 == (Bullet_OnHitDelegate *)0x0) goto code_?;
            }
            ppBVar11 = &(this_01->fields).onHit;
            func_?();
            if (isLocal != 0) {
              pBVar8 = (BulletThrowingStar_OnHitDelegate *)
                        func_?(TypeInfo__Bullet__OnHitDelegate);
              if (pBVar8 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
              BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                        (pBVar8,(Object *)this,
                         MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                         ,(MethodInfo *)0x0);
              (this_01->fields).onHitLocal = (Bullet_OnHitDelegate *)pBVar8;
              func_?(&(this_01->fields).onHitLocal,pBVar8);
            }
            pMVar5 = (this->fields)._._.owner;
            if (pMVar5 != (MVPickupOwner *)0x0) {
              speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                (pMVar5,(this->fields).projectileSpeed,(MethodInfo *)0x0);
              range = (this->fields).range;
              pMVar5 = (this->fields)._._.owner;
              puVar12 = &UNK_?;
              lineOfFire.m_Direction.z = fVar6;
              lineOfFire.m_Direction.y = (float)pBVar10;
              if (pMVar5 != (MVPickupOwner *)0x0) {
                ignoreWoIDs = (HashSet_1_System_Int32_ *)
                              (*(pMVar5->klass->vtable).get_IgnoreWOIDs.methodPtr)(pMVar5);
                lineOfFire.m_Origin.y = fVar1;
                lineOfFire.m_Origin.x = fVar4;
                lineOfFire.m_Origin.z = (float)puVar12;
                lineOfFire.m_Direction.x = (float)ppBVar11;
                Bullet::Bullet_Fire(this_01,speed,range,lineOfFire,ignoreWoIDs,(MethodInfo *)0x0);
                fVar1 = (float)(this->fields).currentAmmo.currentCryptoKey;
                fVar4 = (float)(this->fields).currentAmmo.hiddenValue;
                fVar6 = (float)(this->fields).currentAmmo.fakeValue;
                uVar13._0_1_ = (this->fields).currentAmmo.inited;
                uVar13._1_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                }
                input.hiddenValue = (int32_t)fVar4;
                input.currentCryptoKey = (int32_t)fVar1;
                input.fakeValue = (int32_t)fVar6;
                input.inited = (bool)uVar13;
                input._13_3_ = SUB43(uVar13,1);
                pOVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Decrement
                                    ((ObscuredInt *)&stack0xffffffb0,input,(MethodInfo *)0x0);
                iVar15 = pOVar14->hiddenValue;
                iVar16 = pOVar14->fakeValue;
                bVar17 = pOVar14->inited;
                uVar18 = *(undefined3 *)&pOVar14->field_0xd;
                (this->fields).currentAmmo.currentCryptoKey = pOVar14->currentCryptoKey;
                (this->fields).currentAmmo.hiddenValue = iVar15;
                (this->fields).currentAmmo.fakeValue = iVar16;
                (this->fields).currentAmmo.inited = bVar17;
                *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar18;
                if (isLocal == 0) {
                  pTVar2 = (this->fields)._._.muzzlePoint;
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffffb0,pTVar2,(MethodInfo *)0x0);
                    fStack_19 = pVVar3->x;
                    fStack_20 = pVVar3->y;
                    fVar1 = pVVar3->z;
code_?:
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                        ((MethodInfo *)0x0);
                    if (this_02 != (AudioManager *)0x0) {
                      VVar7.y = fStack_20;
                      VVar7.x = fStack_19;
                      VVar7.z = fVar1;
                      AudioManager::AudioManager_Play_2
                                (this_02,StringLiteral_CenterGun_fire,(this->fields).audioSource,
                                 VVar7,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                else {
                  pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  if (pCVar21 != (Camera *)0x0) {
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar21,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffc0,pTVar2,(MethodInfo *)0x0);
                      uVar22 = pVVar3->x;
                      uVar23 = pVVar3->y;
                      fVar1 = pVVar3->z;
                      pCVar21 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                          ((MethodInfo *)0x0);
                      if (pCVar21 != (Camera *)0x0) {
                        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pCVar21,(MethodInfo *)0x0);
                        if (pTVar2 != (Transform *)0x0) {
                          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_forward
                                              ((Vector3 *)&stack0xffffffb0,pTVar2,(MethodInfo *)0x0
                                              );
                          uVar24 = pVVar3->x;
                          uVar25 = pVVar3->y;
                          fStack_19 = (float)uVar24 + (float)uVar22;
                          fStack_20 = (float)uVar23 + (float)uVar25;
                          fVar1 = pVVar3->z + fVar1;
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
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
      voxelHit_00.point.y = voxelHit.point.y;
      voxelHit_00.point.x = voxelHit.point.x;
      voxelHit_00.point.z = voxelHit.point.z;
      voxelHit_00.normal.x = voxelHit.normal.x;
      voxelHit_00.normal.y = voxelHit.normal.y;
      voxelHit_00.normal.z = voxelHit.normal.z;
      voxelHit_00.cubePos.x = voxelHit.cubePos.x;
      voxelHit_00.cubePos.y = voxelHit.cubePos.y;
      voxelHit_00.cubePos.z = voxelHit.cubePos.z;
      voxelHit_00._30_2_ = voxelHit._30_2_;
      voxelHit_00.face = voxelHit.face;
      voxelHit_00.isCubeHit = voxelHit.isCubeHit;
      voxelHit_00._37_3_ = voxelHit._37_3_;
      voxelHit_00.woId = voxelHit.woId;
      voxelHit_00.cube = voxelHit.cube;
      voxelHit_00.distance = voxelHit.distance;
      voxelHit_00.collider = voxelHit.collider;
      voxelHit_00.transform = voxelHit.transform;
      voxelHit_00._60_4_ = voxelHit._60_4_;
      voxelHit_00.interactionFlags._0_4_ = (undefined4)voxelHit.interactionFlags;
      voxelHit_00.interactionFlags._4_4_ = TypeInfo__PickupItemCenterGun->static_fields->damage;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,voxelHit_00,0.0,unaff_ESI);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        voxelHit._36_4_ =
             int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
        ;
        voxelHit.face =
             (int32_t)
             int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
        ;
        voxelHit.cubePos._0_4_ = &UNK_?;
        voxelHit._28_4_ = pMVar3;
        fVar4 = (float)MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                                 (pMVar3,(int32_t)
                                         int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                  ,
                                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                 );
        voxelHit.isCubeHit = 0;
        voxelHit._37_3_ = 0;
        voxelHit.face = (int32_t)&UNK_?;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          voxelHit.collider = (Collider *)0x0;
          voxelHit.woId = (int32_t)&UNK_?;
          voxelHit.cube = (Cube *)pMVar3;
          voxelHit.distance = fVar4;
          this_01 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,(int32_t)fVar4,(MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClient *)0x0) {
            voxelHit.interactionFlags._0_4_ = 0;
            voxelHit.transform = (Transform *)&UNK_?;
            voxelHit._60_4_ = this_01;
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_01,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              voxelHit.interactionFlags._4_4_ = &UNK_?;
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_02 != (MVLocalPlayer *)0x0)) {
                bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_02,this_01,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  return;
                }
                pRVar6 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                         Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                         Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                   ((Regex_CachedCodeEntryKey *)&IStack_7.impulse.y,
                                    (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                     *)((int)&voxelHit.interactionFlags + 4),(MethodInfo *)0x0);
                uStack_8._0_4_ = pRVar6->_options;
                uStack_8._4_4_ = pRVar6->_cultureKey;
                fVar4 = (this->fields).impulseStrength;
                fStack_9 = (float)pRVar6->_pattern * fVar4;
                impulse.y = (float)uStack_8._4_4_ * fVar4;
                impulse.x = (float)(undefined4)uStack_8 * fVar4;
                impulse.z = fStack_9;
                pIVar10 = CenterGunHitPackage::CenterGunHitPackage_Create
                                   (&IStack_7,impulse,(MethodInfo *)0x0);
                if (x != (InteractionDataHandlerBase *)0x0) {
                  uVar11._0_1_ = pIVar10->interactionType;
                  uVar11._1_1_ = pIVar10->playerKilledByType;
                  uVar11._2_2_ = *(undefined2 *)&pIVar10->field_0x12;
                  (*(x->klass->vtable).__unknown_1.methodPtr)
                            (x,(this->fields)._._.owner,pIVar10->damage,(pIVar10->impulse).x,
                             (pIVar10->impulse).y,(pIVar10->impulse).z,uVar11,0,
                             (x->klass->vtable).__unknown_1.method);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  OStack_1.currentCryptoKey = (this->fields).maxAmmo.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).maxAmmo.hiddenValue;
  OStack_1.fakeValue = (this->fields).maxAmmo.fakeValue;
  OStack_1.inited = (this->fields).maxAmmo.inited;
  OStack_1._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = OStack_1.hiddenValue;
  value.currentCryptoKey = OStack_1.currentCryptoKey;
  value.fakeValue = OStack_1.fakeValue;
  value.inited = OStack_1.inited;
  value._13_3_ = OStack_1._13_3_;
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = (*(this->klass->vtable).GetAmmoMultiplier.methodPtr)
                    (this,iVar2,(this->klass->vtable).GetAmmoMultiplier.method);
  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_1,iVar2,(MethodInfo *)0x0);
  iVar2 = pOVar3->hiddenValue;
  iVar4 = pOVar3->fakeValue;
  bVar5 = pOVar3->inited;
  uVar6 = *(undefined3 *)&pOVar3->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar3->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
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
    func_?(&TypeInfo__PickupItemCenterGun);
    cRam_? = '\x01';
  }
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  pIVar2 = CenterGunHitPackage::CenterGunHitPackage_Create
                     (&IStack_1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  TypeInfo__PickupItemCenterGun->static_fields->damage = pIVar2->damage;
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
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar5 == '\0';
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

