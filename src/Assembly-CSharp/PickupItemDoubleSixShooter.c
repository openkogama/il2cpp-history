
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
                           ((Quaternion *)&stack0xffffffe4,voxelHit._8_12_,(MethodInfo *)0x0);
        position.y = voxelHit.point.x;
        position.x = (float)in_stack_5;
        position.z = voxelHit.point.y;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_SixShooterSparks,position,*pQVar4,(Nullable_1_Single_)0x0,
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

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnFire
               (PickupItemDoubleSixShooter *this,bool isLocal,MethodInfo *method)

{
  pPVar1 = this;
  _isLocal = (float)(uint)isLocal;
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
  fVar2 = (float)(this->fields).currentAmmo.currentCryptoKey;
  fVar3 = (float)(this->fields).currentAmmo.hiddenValue;
  fVar4 = (float)(this->fields).currentAmmo.fakeValue;
  fVar5 = *(float *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = (int32_t)fVar3;
  value.currentCryptoKey = (int32_t)fVar2;
  value.fakeValue = (int32_t)fVar4;
  value._12_4_ = fVar5;
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
                          (PoolEnums__Enum_SixShooterBullet,*pVVar9,0.0,(MethodInfo *)0x0);
      pTVar8 = (this->fields)._._.muzzlePoint;
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
        uVar11 = pVVar9->x;
        pPVar12 = (this->fields).muzzleParticles;
        if (pPVar12 != (ParticleSystem *)0x0) {
          puVar13 = &UNK_?;
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar12,(MethodInfo *)0x0);
          if (pTVar8 != (Transform *)0x0) {
            pQVar14 = (Quaternion *)&stack0xffffffb8;
            pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                (pQVar14,pTVar8,(MethodInfo *)0x0);
            fVar2 = pQVar15->x;
            pOVar16 = (Object *)pQVar15->y;
            this_00 = (Bullet *)pQVar15->z;
            fVar3 = pQVar15->w;
            pTVar8 = (this->fields)._._.muzzlePoint;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = (PickupItemDoubleSixShooter *)
                   UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
            ;
            position_00.y = (float)puVar13;
            position_00.x = (float)uVar11;
            position_00.z = (float)pQVar14;
            rotation_00.y = (float)pOVar16;
            rotation_00.x = fVar2;
            rotation_00.z = (float)this_00;
            rotation_00.w = fVar3;
            pPVar12 = (ParticleSystem *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                                (pOVar16,position_00,rotation_00,pTVar8,
                                 UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                                );
            if (pPVar12 != (ParticleSystem *)0x0) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Play_1(pPVar12,(MethodInfo *)0x0);
              this_01 = (pPVar1->fields).animComponentL;
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
                        (PoolEnums__Enum_SixShooterBullet,*pVVar9,0.0,(MethodInfo *)0x0);
    pTVar8 = (this->fields).muzzlePoint2;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
    this_00 = (Bullet *)pVVar9->x;
    pPVar12 = (this->fields).muzzleParticles;
    if (pPVar12 == (ParticleSystem *)0x0) goto code_?;
    puVar13 = &UNK_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar12,(MethodInfo *)0x0);
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pQVar14 = (Quaternion *)&stack0xffffffb8;
    pOVar16 = (Object *)&UNK_?;
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (pQVar14,pTVar8,(MethodInfo *)0x0);
    pPVar1 = (PickupItemDoubleSixShooter *)pQVar15->x;
    _isLocal = pQVar15->y;
    fVar2 = pQVar15->z;
    fVar3 = pQVar15->w;
    pTVar8 = (this->fields).muzzlePoint2;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    position_01.y = (float)puVar13;
    position_01.x = (float)this_00;
    position_01.z = (float)pQVar14;
    rotation.y = _isLocal;
    rotation.x = (float)pPVar1;
    rotation.z = fVar2;
    rotation.w = fVar3;
    pPVar12 = (ParticleSystem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                        (pOVar16,position_01,rotation,pTVar8,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                        );
    if (pPVar12 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (pPVar12,(MethodInfo *)0x0);
    this_01 = (this->fields).animComponentR;
    this = pPVar1;
code_?:
    if ((this_01 == (Animation *)0x0) ||
       (UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                  (this_01,StringLiteral_RevolverRecoil,(MethodInfo *)0x0), pBVar10 == (Bullet *)0x0
       )) goto code_?;
    pBVar17 = (pBVar10->fields).onHit;
    pBVar18 = (BulletThrowingStar_OnHitDelegate *)func_?();
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar18,(Object *)this,
               MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pBVar17 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar17,(Delegate *)pBVar18,(MethodInfo *)0x0);
    if (pBVar17 == (Bullet_OnHitDelegate *)0x0) {
      (this_00->fields).onHit = (Bullet_OnHitDelegate *)0x0;
code_?:
      func_?();
      if (isLocal != 0) {
        pBVar18 = (BulletThrowingStar_OnHitDelegate *)func_?();
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar18,(Object *)this,
                   MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                   ,(MethodInfo *)0x0);
        (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)pBVar18;
        func_?();
      }
      pMVar19 = (this->fields)._._.owner;
      if (pMVar19 != (MVPickupOwner *)0x0) {
        uVar20 = (pMVar19->fields).lookOrigin.x;
        uVar21 = (pMVar19->fields).lookOrigin.y;
        fVar2 = (pMVar19->fields).lookOrigin.z;
        pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffbc,pMVar19,(MethodInfo *)0x0);
        uVar22 = CONCAT44(uVar21,uVar20);
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffbc,*pVVar9,(MethodInfo *)0x0);
        uVar23 = pVVar9->x;
        uVar24 = pVVar9->y;
        fVar3 = pVVar9->z;
        pMVar19 = (this->fields)._._.owner;
        fStack_25 = (float)uVar23;
        puStack_26 = (undefined *)uVar24;
        if (pMVar19 != (MVPickupOwner *)0x0) {
          fVar5 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                             (pMVar19,(this->fields).bulletSpeed,(MethodInfo *)0x0);
          fVar4 = (this->fields).bulletRange;
          pMVar19 = (this->fields)._._.owner;
          if (pMVar19 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar19->klass->vtable).get_IgnoreWOIDs.method)();
            lineOfFire.m_Origin.z = fVar2;
            lineOfFire.m_Origin.x = (float)(int)uVar22;
            lineOfFire.m_Origin.y = (float)(int)((ulonglong)uVar22 >> 0x20);
            lineOfFire.m_Direction.x = fStack_25;
            lineOfFire.m_Direction.y = (float)puStack_26;
            lineOfFire.m_Direction.z = fVar3;
            Bullet::Bullet_Fire(this_00,fVar5,fVar4,lineOfFire,ignoreWoIDs,0,(MethodInfo *)0x0);
            fVar2 = (float)(this->fields).currentAmmo.currentCryptoKey;
            fVar3 = (float)(this->fields).currentAmmo.hiddenValue;
            fVar4 = (float)(this->fields).currentAmmo.fakeValue;
            fVar5 = *(float *)&(this->fields).currentAmmo.inited;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            input.hiddenValue = (int32_t)fVar3;
            input.currentCryptoKey = (int32_t)fVar2;
            input.fakeValue = (int32_t)fVar4;
            input._12_4_ = fVar5;
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
            this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
            ;
            audioSource = (this->fields).fireSound;
            pCVar32 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                ((MethodInfo *)0x0);
            if ((pCVar32 != (Camera *)0x0) &&
               (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar32,(MethodInfo *)0x0),
               pTVar8 != (Transform *)0x0)) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
              uVar33 = pVVar9->x;
              uVar34 = pVVar9->y;
              fVar2 = pVVar9->z;
              fStack_25 = (float)uVar33;
              puStack_26 = (undefined *)uVar34;
              pCVar32 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                  ((MethodInfo *)0x0);
              if ((pCVar32 != (Camera *)0x0) &&
                 (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar32,(MethodInfo *)0x0),
                 pTVar8 != (Transform *)0x0)) {
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&stack0xffffffbc,pTVar8,(MethodInfo *)0x0);
                uVar35 = pVVar9->x;
                uVar36 = pVVar9->y;
                if (this_02 != (AudioManager *)0x0) {
                  position.y = (float)uVar36 + (float)puStack_26;
                  position.x = (float)uVar35 + fStack_25;
                  position.z = pVVar9->z + fVar2;
                  AudioManager::AudioManager_Play_2
                            (this_02,StringLiteral_projectile_fire,audioSource,position,
                             (MethodInfo *)0x0);
                  pMVar19 = (this->fields)._._.owner;
                  (this->fields)._.isFiring = 0;
                  if (pMVar19 != (MVPickupOwner *)0x0) {
                    this_03 = (MVRigidBody *)
                              UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_GetComponent_1
                                        ((Component *)pMVar19,
                                         MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                        );
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar30 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                       ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar30 == 0) {
                      return;
                    }
                    pMVar19 = (this->fields)._._.owner;
                    if (pMVar19 != (MVPickupOwner *)0x0) {
                      pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                          ((Vector3 *)&fStack_25,pMVar19,(MethodInfo *)0x0);
                      uVar37 = pVVar9->x;
                      uVar38 = pVVar9->y;
                      fVar2 = (this->fields).recoilImpact;
                      if (this_03 != (MVRigidBody *)0x0) {
                        impulse.y = (float)(uVar38 ^ 
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                           ) * fVar2;
                        impulse.x = (float)(uVar37 ^ 
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                           ) * fVar2;
                        impulse.z = (float)((uint)pVVar9->z ^
                                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                           ) * fVar2;
                        MVRigidBody::MVRigidBody_AddImpulse_1(this_03,impulse,0,(MethodInfo *)0x0);
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
      goto code_?;
    }
    pBVar39 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar17->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar39 = pBVar17;
    }
    if (pBVar39 == (Bullet_OnHitDelegate *)0x0) goto code_?;
    (this_00->fields).onHit = pBVar39;
    pBVar39 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar17->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar39 = pBVar17;
    }
    if (pBVar39 != (Bullet_OnHitDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
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
  iVar2 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,iVar2,(this->klass->vtable).UpdateWithDirection.methodPtr);
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

