
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnBulletHit
               (PickupItemDoubleSixShooter *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__PickupItemDoubleSixShooter);
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
        if ((TypeInfo__PickupItemDoubleSixShooter->_1).cctor_finished_or_no_cctor == 0) {
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

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnFire
               (PickupItemDoubleSixShooter *this,bool isLocal,MethodInfo *method)

{
  _isLocal = (MonitorData *)(uint)isLocal;
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_
                   );
    func_?(&
                    MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                   );
    func_?(&StringLiteral_RevolverRecoil);
    func_?(&StringLiteral_projectile_fire);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  fVar2 = (float)(this->fields).currentAmmo.currentCryptoKey;
  pAVar3 = (AudioSource__Class *)(this->fields).currentAmmo.hiddenValue;
  pMVar4 = (MonitorData *)(this->fields).currentAmmo.fakeValue;
  AVar5._._._._.m_CachedPtr = *(AudioBehaviour__Fields *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = (int32_t)pAVar3;
  value.currentCryptoKey = (int32_t)fVar2;
  value.fakeValue = (int32_t)pMVar4;
  value._12_4_ = AVar5._._._._.m_CachedPtr;
  uVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  uVar6 = uVar6 & 0x80000001;
  bVar7 = uVar6 == 0;
  if ((int)uVar6 < 0) {
    bVar7 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar7) {
    pTVar8 = (this->fields)._._.muzzlePoint;
    if (pTVar8 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
      pBVar10 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_SixShooterBullet,*pVVar9,(MethodInfo *)0x0);
      pTVar8 = (this->fields)._._.muzzlePoint;
      if (pTVar8 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
        pPVar11 = (this->fields).muzzleParticles;
        if (pPVar11 != (ParticleSystem *)0x0) {
          puVar12 = &UNK_?;
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar11,(MethodInfo *)0x0);
          if (pTVar8 != (Transform *)0x0) {
            puVar13 = &UNK_?;
            pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&stack0xffffffb8,pTVar8,(MethodInfo *)0x0);
            fVar2 = pQVar14->x;
            pAVar3 = (AudioSource__Class *)pQVar14->y;
            original = (Object *)pQVar14->z;
            AVar5._._._._.m_CachedPtr = (AudioBehaviour__Fields)pQVar14->w;
            pTVar15 = (this->fields)._._.muzzlePoint;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            position.y = (float)puVar13;
            position.x = (float)puVar12;
            position.z = (float)pTVar8;
            rotation_00.y = (float)pAVar3;
            rotation_00.x = fVar2;
            rotation_00.z = (float)original;
            rotation_00.w = (float)AVar5._._._._.m_CachedPtr;
            pPVar11 = (ParticleSystem *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                                (original,position,rotation_00,pTVar15,
                                 UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                                );
            if (pPVar11 != (ParticleSystem *)0x0) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Play_1(pPVar11,(MethodInfo *)0x0);
              this_00 = (this->fields).animComponentL;
              goto code_?;
            }
          }
        }
      }
    }
code_?:
    func_?();
  }
  else {
    pTVar8 = (this->fields).muzzlePoint2;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
    pBVar10 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_SixShooterBullet,*pVVar9,(MethodInfo *)0x0);
    pTVar8 = (this->fields).muzzlePoint2;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
    pPVar11 = (this->fields).muzzleParticles;
    if (pPVar11 == (ParticleSystem *)0x0) goto code_?;
    puVar12 = &UNK_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar11,(MethodInfo *)0x0);
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pQVar14 = (Quaternion *)&stack0xffffffb8;
    AVar5._._._._.m_CachedPtr = (AudioBehaviour__Fields)&UNK_?;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (pQVar14,pTVar8,(MethodInfo *)0x0);
    fVar2 = pQVar16->x;
    pPVar17 = (PickupItemDoubleSixShooter *)pQVar16->y;
    _isLocal = (MonitorData *)pQVar16->z;
    AVar18._._._._.m_CachedPtr = (AudioBehaviour__Fields)pQVar16->w;
    pTVar15 = (this->fields).muzzlePoint2;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    position_00.y = (float)AVar5._._._._.m_CachedPtr;
    position_00.x = (float)puVar12;
    position_00.z = (float)pTVar8;
    rotation.y = (float)pPVar17;
    rotation.x = fVar2;
    rotation.z = (float)_isLocal;
    rotation.w = (float)AVar18._._._._.m_CachedPtr;
    pPVar11 = (ParticleSystem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                        ((Object *)pQVar14,position_00,rotation,pTVar15,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                        );
    if (pPVar11 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (pPVar11,(MethodInfo *)0x0);
    this_00 = (this->fields).animComponentR;
    this = pPVar17;
code_?:
    if ((this_00 == (Animation *)0x0) ||
       (UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                  (this_00,StringLiteral_RevolverRecoil,(MethodInfo *)0x0), pBVar10 == (Bullet *)0x0
       )) goto code_?;
    pBVar19 = (pBVar10->fields).onHit;
    pBVar20 = (BulletThrowingStar_OnHitDelegate *)func_?();
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar20,(Object *)this,
               MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pBVar19 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar19,(Delegate *)pBVar20,(MethodInfo *)0x0);
    if (pBVar19 == (Bullet_OnHitDelegate *)0x0) {
      (((Bullet *)AVar5._._._._.m_CachedPtr)->fields).onHit = (Bullet_OnHitDelegate *)0x0;
code_?:
      func_?();
      if (isLocal != 0) {
        pBVar20 = (BulletThrowingStar_OnHitDelegate *)func_?();
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar20,(Object *)this,
                   MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                   ,(MethodInfo *)0x0);
        (((Bullet *)AVar5._._._._.m_CachedPtr)->fields).onHitLocal =
             (Bullet_OnHitDelegate *)pBVar20;
        func_?();
      }
      pMVar21 = (this->fields)._._.owner;
      if (pMVar21 != (MVPickupOwner *)0x0) {
        uVar22 = (pMVar21->fields).lookOrigin.x;
        uVar23 = (pMVar21->fields).lookOrigin.y;
        fVar24 = (pMVar21->fields).lookOrigin.z;
        pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffbc,(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffbc,*pVVar9,(MethodInfo *)0x0);
        uVar25 = pVVar9->x;
        fVar2 = pVVar9->y;
        fVar26 = pVVar9->z;
        pMVar21 = (this->fields)._._.owner;
        puStack_1 = (undefined *)uVar25;
        if (pMVar21 != (MVPickupOwner *)0x0) {
          speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                            (pMVar21,(this->fields).bulletSpeed,(MethodInfo *)0x0);
          range = (this->fields).bulletRange;
          pMVar21 = (this->fields)._._.owner;
          if (pMVar21 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar21->klass->vtable).get_IgnoreWOIDs.method)();
            lineOfFire.m_Origin.y = (float)uVar23;
            lineOfFire.m_Origin.x = (float)uVar22;
            lineOfFire.m_Origin.z = fVar24;
            lineOfFire.m_Direction.x = (float)puStack_1;
            lineOfFire.m_Direction.y = fVar2;
            lineOfFire.m_Direction.z = fVar26;
            Bullet::Bullet_Fire((Bullet *)AVar5._._._._.m_CachedPtr,speed,range,lineOfFire,
                                ignoreWoIDs,(MethodInfo *)0x0);
            fVar2 = (float)(this->fields).currentAmmo.currentCryptoKey;
            pAVar3 = (AudioSource__Class *)(this->fields).currentAmmo.hiddenValue;
            pMVar4 = (MonitorData *)(this->fields).currentAmmo.fakeValue;
            AVar5._._._._.m_CachedPtr =
                 *(AudioBehaviour__Fields *)&(this->fields).currentAmmo.inited;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            input.hiddenValue = (int32_t)pAVar3;
            input.currentCryptoKey = (int32_t)fVar2;
            input.fakeValue = (int32_t)pMVar4;
            input._12_4_ = AVar5._._._._.m_CachedPtr;
            pOVar27 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_op_Decrement
                                ((ObscuredInt *)&stack0xffffffb8,input,(MethodInfo *)0x0);
            iVar28 = pOVar27->hiddenValue;
            iVar29 = pOVar27->fakeValue;
            bVar30 = pOVar27->inited;
            uVar31 = *(undefined3 *)&pOVar27->field_0xd;
            (this->fields).currentAmmo.currentCryptoKey = pOVar27->currentCryptoKey;
            (this->fields).currentAmmo.hiddenValue = iVar28;
            (this->fields).currentAmmo.fakeValue = iVar29;
            (this->fields).currentAmmo.inited = bVar30;
            *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar31;
            this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
            ;
            pTVar8 = (this->fields)._._.muzzlePoint;
            if (pTVar8 != (Transform *)0x0) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
              if (this_01 != (AudioManager *)0x0) {
                AudioManager::AudioManager_Play_2
                          (this_01,StringLiteral_projectile_fire,(AudioSource *)&stack0xffffffbc,
                           *pVVar9,(MethodInfo *)0x0);
                pMVar21 = (this->fields)._._.owner;
                (this->fields)._.isFiring = 0;
                if (pMVar21 != (MVPickupOwner *)0x0) {
                  this_02 = (MVRigidBody *)
                            UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_GetComponent_1
                                      ((Component *)pMVar21,
                                       MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                      );
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar30 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar30 == 0) {
                    return;
                  }
                  pMVar21 = (this->fields)._._.owner;
                  if (pMVar21 != (MVPickupOwner *)0x0) {
                    pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                        ((Vector3 *)&puStack_1,pMVar21,(MethodInfo *)0x0);
                    uVar32 = pVVar9->x;
                    uVar33 = pVVar9->y;
                    fVar2 = (this->fields).recoilImpact;
                    if (this_02 != (MVRigidBody *)0x0) {
                      impulse.y = (float)(uVar33 ^ 
                                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                         ) * fVar2;
                      impulse.x = (float)(uVar32 ^ 
                                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                         ) * fVar2;
                      impulse.z = (float)((uint)pVVar9->z ^
                                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                         ) * fVar2;
                      MVRigidBody::MVRigidBody_AddImpulse_1(this_02,impulse,0,(MethodInfo *)0x0);
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
    pBVar34 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar19->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar34 = pBVar19;
    }
    if (pBVar34 == (Bullet_OnHitDelegate *)0x0) goto code_?;
    (((Bullet *)AVar5._._._._.m_CachedPtr)->fields).onHit = pBVar34;
    pBVar34 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar19->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar34 = pBVar19;
    }
    if (pBVar34 != (Bullet_OnHitDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnLocalBulletHit
               (PickupItemDoubleSixShooter *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemDoubleSixShooter);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    if ((TypeInfo__PickupItemDoubleSixShooter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PickupItemDoubleSixShooter);
    }
    if (this_00 != (RuntimeEventManager *)0x0) {
      voxelHit_00.interactionFlags._4_4_ =
           TypeInfo__PickupItemDoubleSixShooter->static_fields->baseDamage;
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
                pMVar5 = (this->fields)._._.owner;
                if ((pMVar5 != (MVPickupOwner *)0x0) &&
                   (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pMVar5,(MethodInfo *)0x0),
                   this_03 != (Transform *)0x0)) {
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&IStack_7.impulse.y,this_03,(MethodInfo *)0x0);
                  uStack_8._0_4_ = pVVar6->x;
                  uStack_8._4_4_ = pVVar6->y;
                  fStack_9 = voxelHit.point.y - pVVar6->z;
                  value.y = voxelHit.point.x - (float)uStack_8._4_4_;
                  value.x = in_stack_10 - (float)(undefined4)uStack_8;
                  value.z = fStack_9;
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                     ((Vector3 *)&IStack_7.impulse.y,value,(MethodInfo *)0x0);
                  fVar11 = (this->fields).hitImpact;
                  pMVar5 = (this->fields)._._.owner;
                  uStack_8._0_4_ = pVVar6->x;
                  uStack_8._4_4_ = pVVar6->y;
                  fStack_9 = pVVar6->z * fVar11;
                  impulse.y = (float)uStack_8._4_4_ * fVar11;
                  impulse.x = (float)(undefined4)uStack_8 * fVar11;
                  impulse.z = fStack_9;
                  pIVar12 = DoubleSixShooterHitPackage::DoubleSixShooterHitPackage_Create
                                      (&IStack_7,impulse,(MethodInfo *)0x0);
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    uVar13._0_1_ = pIVar12->interactionType;
                    uVar13._1_1_ = pIVar12->playerKilledByType;
                    uVar13._2_2_ = *(undefined2 *)&pIVar12->field_0x12;
                    (*(code *)(x->klass->vtable).__unknown_1.method)
                              (x,pMVar5,pIVar12->damage,(pIVar12->impulse).x,(pIVar12->impulse).y,
                               (pIVar12->impulse).z,uVar13,0,(x->klass->vtable).OnValidate.methodPtr)
                    ;
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_ResetAmmo
               (PickupItemDoubleSixShooter *this,MethodInfo *method)

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


/* PickupItemDoubleSixShooter() */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    func_?(&TypeInfo__PickupItemDoubleSixShooter);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pIVar2 = DoubleSixShooterHitPackage::DoubleSixShooterHitPackage_Create
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
  TypeInfo__PickupItemDoubleSixShooter->static_fields->baseDamage = fStack_4;
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_get_IsAmmoDepleted
               (PickupItemDoubleSixShooter *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_get_Quantity
                  (PickupItemDoubleSixShooter *this,MethodInfo *method)

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

