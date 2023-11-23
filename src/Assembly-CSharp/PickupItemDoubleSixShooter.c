
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
  auVar1._8_4_ = unaff_EBP;
  auVar1._0_8_ = in_stack_2;
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
  pMStack_3 = (MVPickupOwner *)(this->fields).currentAmmo.currentCryptoKey;
  pTStack_4 = (Transform *)(this->fields).currentAmmo.hiddenValue;
  fVar5 = (float)(this->fields).currentAmmo.fakeValue;
  fVar6 = *(float *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = (int32_t)pTStack_4;
  value.currentCryptoKey = (int32_t)pMStack_3;
  value.fakeValue = (int32_t)fVar5;
  value._12_4_ = fVar6;
  uVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((uVar7 & 1) == 0) {
    pTVar8 = (this->fields)._._.muzzlePoint;
    if (pTVar8 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
      pBVar10 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_SixShooterBullet,*pVVar9,(MethodInfo *)0x0);
      uVar11._4_4_ = auVar1._8_4_;
      uVar11._0_4_ = (Transform *)pBVar10;
      pTVar8 = (this->fields)._._.muzzlePoint;
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
        puVar12 = (undefined *)pVVar9->z;
        pPVar13 = (this->fields).muzzleParticles;
        if ((pPVar13 != (ParticleSystem *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pPVar13,(MethodInfo *)0x0),
           pTVar8 != (Transform *)0x0)) {
          pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&pMStack_3,pTVar8,(MethodInfo *)0x0);
          pMStack_3 = (MVPickupOwner *)pQVar14->x;
          pTStack_4 = (Transform *)pQVar14->y;
          fVar5 = pQVar14->z;
          fVar6 = pQVar14->w;
          pCVar15 = (CancellationTokenSource *)(this->fields)._._.muzzlePoint;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            puVar12 = &UNK_?;
            func_?();
          }
          auVar16._4_4_ = (Transform *)uVar11;
          auVar16._8_4_ = SUB84(uVar11,4);
          auVar16._0_4_ =
               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
          ;
          position_00.y = fVar5;
          position_00.x = (float)pTStack_4;
          position_00.z = (float)puVar12;
          rotation.y = (float)pTStack_4;
          rotation.x = (float)pMStack_3;
          rotation.z = fVar5;
          rotation.w = fVar6;
          pPVar13 = (ParticleSystem *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                              ((Object *)
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                               ,position_00,rotation,(Transform *)pCVar15,
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                              );
          if (pPVar13 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (pPVar13,(MethodInfo *)0x0);
            this_00 = (this->fields).animComponentL;
            goto code_?;
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
                        ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
    pBVar10 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_SixShooterBullet,*pVVar9,(MethodInfo *)0x0);
    pCVar15 = (CancellationTokenSource *)(this->fields).muzzleParticles;
    pTVar8 = (this->fields).muzzlePoint2;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
    puVar12 = (undefined *)pVVar9->z;
    pPVar13 = (this->fields).muzzleParticles;
    if ((pPVar13 == (ParticleSystem *)0x0) ||
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar13,(MethodInfo *)0x0), pTVar8 == (Transform *)0x0))
    goto code_?;
    BVar17._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&pMStack_3,pTVar8,(MethodInfo *)0x0);
    pMStack_3 = (MVPickupOwner *)pQVar14->x;
    pTStack_4 = (Transform *)pQVar14->y;
    fVar5 = pQVar14->z;
    fVar6 = pQVar14->w;
    pPVar18 = (PickupItemDoubleSixShooter *)(this->fields).muzzlePoint2;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      puVar12 = &UNK_?;
      pPVar18 = (PickupItemDoubleSixShooter *)TypeInfo__UnityEngine__Object;
      func_?();
    }
    isLocal = (bool)
              UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
    ;
    auVar16._4_4_ = pTStack_4;
    auVar16._0_4_ = pMStack_3;
    auVar16._8_4_ = fVar5;
    position_01.y = (float)BVar17._._.m_CachedPtr;
    position_01.x = (float)pTVar8;
    position_01.z = (float)puVar12;
    rotation_00.w = fVar6;
    rotation_00.x = (float)pMStack_3;
    rotation_00.y = (float)pTStack_4;
    rotation_00.z = fVar5;
    pPVar13 = (ParticleSystem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                        ((Object *)pCVar15,position_01,rotation_00,(Transform *)pPVar18,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                        );
    if (pPVar13 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (pPVar13,(MethodInfo *)0x0);
    this_00 = (this->fields).animComponentR;
    this = pPVar18;
code_?:
    pPVar18 = this;
    if ((this_00 == (Animation *)0x0) ||
       (UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                  (this_00,StringLiteral_RevolverRecoil,(MethodInfo *)0x0), pBVar10 == (Bullet *)0x0
       )) goto code_?;
    a = (pBVar10->fields).onHit;
    pBVar19 = (BulletThrowingStar_OnHitDelegate *)func_?();
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar19,(Object *)this,
               MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)pBVar19,(MethodInfo *)0x0);
    if (pDVar20 == (Delegate *)0x0) {
      auVar16._4_4_[1].monitor = (MonitorData *)0x0;
code_?:
      func_?();
      if (isLocal != 0) {
        pBVar19 = (BulletThrowingStar_OnHitDelegate *)func_?();
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar19,(Object *)this,
                   MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                   ,(MethodInfo *)0x0);
        auVar16._4_4_[1].fields._._.m_CachedPtr = pBVar19;
        func_?();
      }
      pMVar21 = (this->fields)._._.owner;
      if (pMVar21 != (MVPickupOwner *)0x0) {
        pMVar22 = (MonitorData *)(pMVar21->fields).lookOrigin.x;
        BVar17._._.m_CachedPtr = (Component__Fields)(pMVar21->fields).lookOrigin.y;
        fVar5 = (pMVar21->fields).lookOrigin.z;
        pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffd4,(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffd4,*pVVar9,(MethodInfo *)0x0);
        uVar23 = pVVar9->x;
        uVar24 = pVVar9->y;
        fVar6 = pVVar9->z;
        pMVar21 = (this->fields)._._.owner;
        if (pMVar21 != (MVPickupOwner *)0x0) {
          pCVar15 = (CancellationTokenSource *)
                    MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              (pMVar21,(this->fields).bulletSpeed,(MethodInfo *)0x0);
          fVar25 = (this->fields).bulletRange;
          pMVar21 = (this->fields)._._.owner;
          if (pMVar21 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar21->klass->vtable).get_IgnoreWOIDs.method)();
            lineOfFire.m_Origin.y = (float)BVar17._._.m_CachedPtr;
            lineOfFire.m_Origin.x = (float)pMVar22;
            lineOfFire.m_Origin.z = fVar5;
            lineOfFire.m_Direction.x = (float)uVar23;
            lineOfFire.m_Direction.y = (float)uVar24;
            lineOfFire.m_Direction.z = fVar6;
            Bullet::Bullet_Fire(auVar16._4_4_,(float)pCVar15,fVar25,lineOfFire,ignoreWoIDs,
                                (MethodInfo *)0x0);
            pMStack_3 = (MVPickupOwner *)(this->fields).currentAmmo.currentCryptoKey;
            pTStack_4 = (Transform *)(this->fields).currentAmmo.hiddenValue;
            fVar5 = (float)(this->fields).currentAmmo.fakeValue;
            fVar6 = *(float *)&(this->fields).currentAmmo.inited;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            input.hiddenValue = (int32_t)pTStack_4;
            input.currentCryptoKey = (int32_t)pMStack_3;
            input.fakeValue = (int32_t)fVar5;
            input._12_4_ = fVar6;
            pOVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_op_Decrement
                                ((ObscuredInt *)&pMStack_3,input,(MethodInfo *)0x0);
            iVar27 = pOVar26->hiddenValue;
            iVar28 = pOVar26->fakeValue;
            bVar29 = pOVar26->inited;
            uVar30 = *(undefined3 *)&pOVar26->field_0xd;
            (this->fields).currentAmmo.currentCryptoKey = pOVar26->currentCryptoKey;
            (this->fields).currentAmmo.hiddenValue = iVar27;
            (this->fields).currentAmmo.fakeValue = iVar28;
            (this->fields).currentAmmo.inited = bVar29;
            *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar30;
            this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
            ;
            pPVar31 = (PickupItemDoubleSixShooter *)(this->fields).fireSound;
            if (isLocal == 0) {
              pTVar8 = (this->fields)._._.muzzlePoint;
              if ((pTVar8 != (Transform *)0x0) &&
                 (pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0),
                 this_01 != (AudioManager *)0x0)) {
                uVar32._0_4_ = pVVar9->x;
                uVar32._4_4_ = pVVar9->y;
                fVar25 = pVVar9->z;
                this = pPVar31;
code_?:
                position.z = fVar25;
                position.x = (float)(int)uVar32;
                position.y = (float)(int)((ulonglong)uVar32 >> 0x20);
                AudioManager::AudioManager_Play_2
                          (this_01,StringLiteral_projectile_fire,(AudioSource *)this,position,
                           (MethodInfo *)0x0);
                pMVar21 = (pPVar18->fields)._._.owner;
                (pPVar18->fields)._.isFiring = 0;
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
                  bVar29 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar29 == 0) {
                    return;
                  }
                  pMVar21 = (pPVar18->fields)._._.owner;
                  if (pMVar21 != (MVPickupOwner *)0x0) {
                    pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                        ((Vector3 *)&pTStack_4,pMVar21,(MethodInfo *)0x0);
                    uVar33 = pVVar9->x;
                    uVar34 = pVVar9->y;
                    fVar5 = (pPVar18->fields).recoilImpact;
                    if (this_02 != (MVRigidBody *)0x0) {
                      impulse.y = fVar5 * (float)(uVar34 ^ 
                                                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                 );
                      impulse.x = fVar5 * (float)(uVar33 ^ 
                                                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                 );
                      impulse.z = fVar5 * (float)((uint)pVVar9->z ^
                                                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                 );
                      MVRigidBody::MVRigidBody_AddImpulse_1(this_02,impulse,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            else {
              pCVar35 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                  ((MethodInfo *)0x0);
              if ((pCVar35 != (Camera *)0x0) &&
                 (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar35,(MethodInfo *)0x0),
                 pTVar8 != (Transform *)0x0)) {
                this = (PickupItemDoubleSixShooter *)&stack0xffffffe0;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)this,pTVar8,(MethodInfo *)0x0);
                fVar5 = pVVar9->x;
                fVar6 = pVVar9->y;
                fVar25 = pVVar9->z;
                pCVar35 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar35 != (Camera *)0x0) &&
                   (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar35,(MethodInfo *)0x0),
                   pTVar8 != (Transform *)0x0)) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward((Vector3 *)&pTStack_4,pTVar8,(MethodInfo *)0x0);
                  uVar36 = pVVar9->x;
                  uVar37 = pVVar9->y;
                  fVar25 = pVVar9->z + fVar25;
                  if (this_01 != (AudioManager *)0x0) {
                    uVar32 = CONCAT44((float)uVar37 + fVar6,(float)uVar36 + fVar5);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pDVar38 = (Delegate *)0x0;
    if ((Bullet_OnHitDelegate__Class *)pDVar20->klass == TypeInfo__Bullet__OnHitDelegate) {
      pDVar38 = pDVar20;
    }
    if (pDVar38 == (Delegate *)0x0) goto code_?;
    auVar16._4_4_[1].monitor = (MonitorData *)pDVar38;
    pDVar38 = (Delegate *)0x0;
    if ((Bullet_OnHitDelegate__Class *)pDVar20->klass == TypeInfo__Bullet__OnHitDelegate) {
      pDVar38 = pDVar20;
    }
    if (pDVar38 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
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

