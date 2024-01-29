
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_OnBulletHit
               (PickupItemSixShooter *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__PickupItemSixShooter);
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
                  (PoolEnums__Enum_SixShooterSparks,position,*pQVar4,
                   (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
        return;
      }
      pMVar6 = (this->fields)._._.owner;
      if ((pMVar6 != (MVPickupOwner *)0x0) &&
         ((pMVar6->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
        if ((TypeInfo__PickupItemSixShooter->_1).cctor_finished_or_no_cctor == 0) {
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

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_OnFire
               (PickupItemSixShooter *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&MethodInfo__PickupItemSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&MethodInfo__PickupItemSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_)
    ;
    func_?(&StringLiteral_RevolverRecoil);
    func_?(&StringLiteral_projectile_fire);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).animComponent;
  if (this_00 == (Animation *)0x0) {
code_?:
    func_?();
  }
  else {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
              (this_00,StringLiteral_RevolverRecoil,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._._.muzzlePoint;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    pBVar3 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_SixShooterBullet,*pVVar2,(MethodInfo *)0x0);
    if (pBVar3 == (Bullet *)0x0) goto code_?;
    a = (pBVar3->fields).onHit;
    pBVar4 = (BulletThrowingStar_OnHitDelegate *)func_?();
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar4,(Object *)this,
               MethodInfo__PickupItemSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pBVar5 = (Bullet *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)pBVar4,(MethodInfo *)0x0);
    this_04 = (Bullet *)0x0;
    if (pBVar5 == (Bullet *)0x0) {
      (pBVar3->fields).onHit = (Bullet_OnHitDelegate *)0x0;
code_?:
      func_?();
      if (isLocal != 0) {
        pBVar4 = (BulletThrowingStar_OnHitDelegate *)
                  func_?(TypeInfo__Bullet__OnHitDelegate);
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar4,(Object *)this,
                   MethodInfo__PickupItemSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        (this_04->fields).onHitLocal = (Bullet_OnHitDelegate *)pBVar4;
        func_?(&(this_04->fields).onHitLocal,pBVar4);
      }
      pMVar6 = (this->fields)._._.owner;
      if (pMVar6 != (MVPickupOwner *)0x0) {
        fVar7 = (pMVar6->fields).lookOrigin.y;
        pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffd8,(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        uVar8 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                  ((Vector3 *)&stack0xffffffd8,*pVVar2,(MethodInfo *)0x0);
        pMVar6 = (this->fields)._._.owner;
        if (pMVar6 != (MVPickupOwner *)0x0) {
          fVar9 = (this->fields).bulletSpeed;
          uVar10 = 0;
          puVar11 = &UNK_?;
          fVar12 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                             (pMVar6,fVar9,(MethodInfo *)0x0);
          fVar13 = (this->fields).bulletRange;
          pMVar14 = (this->fields)._._.owner;
          if (pMVar14 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar14->klass->vtable).get_IgnoreWOIDs.method)();
            lineOfFire.m_Direction.z = (float)uVar10;
            lineOfFire.m_Direction.y = fVar9;
            lineOfFire.m_Origin.y = fVar7;
            lineOfFire.m_Origin.x = (float)uVar8;
            lineOfFire.m_Origin.z = (float)puVar11;
            lineOfFire.m_Direction.x = (float)pMVar6;
            Bullet::Bullet_Fire(this_04,fVar12,fVar13,lineOfFire,ignoreWoIDs,(MethodInfo *)0x0);
            fVar7 = (float)(this->fields).currentAmmo.currentCryptoKey;
            fVar9 = (float)(this->fields).currentAmmo.hiddenValue;
            fVar13 = (float)(this->fields).currentAmmo.fakeValue;
            fVar12 = *(float *)&(this->fields).currentAmmo.inited;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            }
            input.hiddenValue = (int32_t)fVar9;
            input.currentCryptoKey = (int32_t)fVar7;
            input.fakeValue = (int32_t)fVar13;
            input._12_4_ = fVar12;
            pOVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_op_Decrement
                                ((ObscuredInt *)&stack0xffffffd4,input,(MethodInfo *)0x0);
            iVar16 = pOVar15->hiddenValue;
            iVar17 = pOVar15->fakeValue;
            bVar18 = pOVar15->inited;
            uVar19 = *(undefined3 *)&pOVar15->field_0xd;
            pPVar20 = (this->fields).muzzleParticles;
            pTVar1 = (this->fields)._._.muzzlePoint;
            (this->fields).currentAmmo.currentCryptoKey = pOVar15->currentCryptoKey;
            (this->fields).currentAmmo.hiddenValue = iVar16;
            (this->fields).currentAmmo.fakeValue = iVar17;
            (this->fields).currentAmmo.inited = bVar18;
            *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar19;
            if (pTVar1 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
              VVar21 = *pVVar2;
              this_01 = (this->fields).muzzleParticles;
              if ((this_01 != (ParticleSystem *)0x0) &&
                 (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
                 pTVar1 != (Transform *)0x0)) {
                pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                    ((Quaternion *)&stack0xffffffd4,pTVar1,(MethodInfo *)0x0);
                pTVar1 = (this->fields)._._.muzzlePoint;
                fVar7 = pQVar22->x;
                fVar9 = pQVar22->y;
                fVar13 = pQVar22->z;
                fVar12 = pQVar22->w;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                rotation.y = fVar9;
                rotation.x = fVar7;
                rotation.z = fVar13;
                rotation.w = fVar12;
                pPVar20 = (ParticleSystem *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                                    ((Object *)pPVar20,VVar21,rotation,pTVar1,
                                     UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                                    );
                if (pPVar20 != (ParticleSystem *)0x0) {
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                  ParticleSystem_Play_1(pPVar20,(MethodInfo *)0x0);
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                      ((MethodInfo *)0x0);
                  audioSource = (this->fields).fireSound;
                  if (isLocal == 0) {
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if ((pTVar1 != (Transform *)0x0) &&
                       (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0),
                       this_02 != (AudioManager *)0x0)) {
                      uVar23._0_4_ = pVVar2->x;
                      uVar23._4_4_ = pVVar2->y;
                      fVar7 = pVVar2->z;
code_?:
                      VVar21.z = fVar7;
                      VVar21.x = (float)(int)uVar23;
                      VVar21.y = (float)(int)((ulonglong)uVar23 >> 0x20);
                      AudioManager::AudioManager_Play_2
                                (this_02,StringLiteral_projectile_fire,audioSource,VVar21,
                                 (MethodInfo *)0x0);
                      pMVar6 = (this->fields)._._.owner;
                      (this->fields)._.isFiring = 0;
                      if (pMVar6 != (MVPickupOwner *)0x0) {
                        this_03 = (MVRigidBody *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_GetComponent_1
                                            ((Component *)pMVar6,
                                             MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                            );
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                 Object_1_op_Inequality
                                           ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
                        if (bVar18 == 0) {
                          return;
                        }
                        pMVar6 = (this->fields)._._.owner;
                        if (pMVar6 != (MVPickupOwner *)0x0) {
                          pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                              ((Vector3 *)&stack0xffffffd8,pMVar6,(MethodInfo *)0x0
                                              );
                          uVar24 = pVVar2->x;
                          uVar25 = pVVar2->y;
                          fVar7 = (this->fields).recoilImpact;
                          if (this_03 != (MVRigidBody *)0x0) {
                            impulse.y = (float)(uVar25 ^ 
                                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                               ) * fVar7;
                            impulse.x = (float)(uVar24 ^ 
                                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                               ) * fVar7;
                            impulse.z = (float)((uint)pVVar2->z ^
                                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                               ) * fVar7;
                            MVRigidBody::MVRigidBody_AddImpulse_1
                                      (this_03,impulse,0,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                  else {
                    pCVar26 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                        ((MethodInfo *)0x0);
                    if ((pCVar26 != (Camera *)0x0) &&
                       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pCVar26,(MethodInfo *)0x0),
                       pTVar1 != (Transform *)0x0)) {
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
                      uVar27 = pVVar2->x;
                      uVar28 = pVVar2->y;
                      fVar7 = pVVar2->z;
                      pCVar26 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                          ((MethodInfo *)0x0);
                      if ((pCVar26 != (Camera *)0x0) &&
                         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pCVar26,(MethodInfo *)0x0),
                         pTVar1 != (Transform *)0x0)) {
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
                        uVar29 = pVVar2->x;
                        uVar30 = pVVar2->y;
                        fVar7 = pVVar2->z + fVar7;
                        if (this_02 != (AudioManager *)0x0) {
                          uVar23 = CONCAT44((float)uVar30 + (float)uVar28,(float)uVar29 + (float)uVar27);
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
      goto code_?;
    }
    if ((Bullet_OnHitDelegate__Class *)pBVar5->klass == TypeInfo__Bullet__OnHitDelegate) {
      this_04 = pBVar5;
    }
    if (this_04 == (Bullet *)0x0) goto code_?;
    (pBVar3->fields).onHit = (Bullet_OnHitDelegate *)this_04;
    this_04 = (Bullet *)0x0;
    if ((Bullet_OnHitDelegate__Class *)pBVar5->klass == TypeInfo__Bullet__OnHitDelegate) {
      this_04 = pBVar5;
    }
    if (this_04 != (Bullet *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_OnLocalBulletHit
               (PickupItemSixShooter *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemSixShooter);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    if ((TypeInfo__PickupItemSixShooter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PickupItemSixShooter);
    }
    if (this_00 != (RuntimeEventManager *)0x0) {
      voxelHit_00.interactionFlags._4_4_ = TypeInfo__PickupItemSixShooter->static_fields->baseDamage
      ;
      voxelHit_00._0_68_ = voxelHit._0_68_;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,voxelHit_00,0.0,unaff_ESI);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar3,(int32_t)
                               int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                        ,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          this_02 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,id,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClient *)0x0) {
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_02,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_03 != (MVLocalPlayer *)0x0)) {
                bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  return;
                }
                this_01 = (this->fields)._._.owner;
                if ((this_01 != (MVPickupOwner *)0x0) &&
                   (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
                   this_04 != (Transform *)0x0)) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&IStack_6.impulse.y,this_04,(MethodInfo *)0x0);
                  uStack_7._0_4_ = pVVar5->x;
                  uStack_7._4_4_ = pVVar5->y;
                  fStack_8 = voxelHit.point.y - pVVar5->z;
                  value.y = voxelHit.point.x - (float)uStack_7._4_4_;
                  value.x = in_stack_9 - (float)(undefined4)uStack_7;
                  value.z = fStack_8;
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                     ((Vector3 *)&IStack_6.impulse.y,value,(MethodInfo *)0x0);
                  fVar10 = (this->fields).hitImpact;
                  uStack_7._0_4_ = pVVar5->x;
                  uStack_7._4_4_ = pVVar5->y;
                  fStack_8 = pVVar5->z * fVar10;
                  impulse.y = (float)uStack_7._4_4_ * fVar10;
                  impulse.x = (float)(undefined4)uStack_7 * fVar10;
                  impulse.z = fStack_8;
                  pIVar11 = SixShooterHitPackage::SixShooterHitPackage_Create
                                     (&IStack_6,impulse,(MethodInfo *)0x0);
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    uVar12._0_1_ = pIVar11->interactionType;
                    uVar12._1_1_ = pIVar11->playerKilledByType;
                    uVar12._2_2_ = *(undefined2 *)&pIVar11->field_0x12;
                    (*(code *)(x->klass->vtable).__unknown_1.method)
                              (x,(this->fields)._._.owner,pIVar11->damage,(pIVar11->impulse).x,
                               (pIVar11->impulse).y,(pIVar11->impulse).z,uVar12,0,
                               (x->klass->vtable).OnValidate.methodPtr);
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
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_ResetAmmo
               (PickupItemSixShooter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  iVar2 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)(this,iVar2);
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


/* PickupItemSixShooter() */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    func_?(&TypeInfo__PickupItemSixShooter);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pIVar2 = SixShooterHitPackage::SixShooterHitPackage_Create
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
  TypeInfo__PickupItemSixShooter->static_fields->baseDamage = fStack_4;
  return;
}


/* PickupItemSixShooter() */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter__ctor
               (PickupItemSixShooter *this,MethodInfo *method)

{
  (this->fields).recoilImpact = 700.0;
  (this->fields).bulletRange = 50.0;
  (this->fields).bulletSpeed = 80.0;
  (this->fields).hitImpact = 300.0;
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

bool Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_get_IsAmmoDepleted
               (PickupItemSixShooter *this,MethodInfo *method)

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


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_get_Quantity
                  (PickupItemSixShooter *this,MethodInfo *method)

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

