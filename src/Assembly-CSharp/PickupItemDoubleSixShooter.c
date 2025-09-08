
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
  _isLocal = (Transform *)(uint)isLocal;
  lVar2 = ZEXT48(this) << 0x20;
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
  fStack_3 = (float)(pPVar1->fields).currentAmmo.currentCryptoKey;
  fStack_4 = (float)(pPVar1->fields).currentAmmo.hiddenValue;
  puStack_5 = (undefined *)(pPVar1->fields).currentAmmo.fakeValue;
  fVar6 = *(float *)&(pPVar1->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = (int32_t)fStack_4;
  value.currentCryptoKey = (int32_t)fStack_3;
  value.fakeValue = (int32_t)puStack_5;
  value._12_4_ = fVar6;
  uVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((uVar7 & 1) == 0) {
    pTVar8 = (pPVar1->fields)._._.muzzlePoint;
    if (pTVar8 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
      pBVar10 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_SixShooterBullet,*pVVar9,0.0,(MethodInfo *)0x0);
      pTVar8 = (pPVar1->fields)._._.muzzlePoint;
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
        fVar6 = pVVar9->z;
        pPVar11 = (pPVar1->fields).muzzleParticles;
        if ((pPVar11 != (ParticleSystem *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pPVar11,(MethodInfo *)0x0),
           pTVar8 != (Transform *)0x0)) {
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&fStack_3,pTVar8,(MethodInfo *)0x0);
          fStack_3 = pQVar12->x;
          fStack_4 = pQVar12->y;
          puStack_5 = (undefined *)pQVar12->z;
          fVar13 = pQVar12->w;
          pTVar8 = (pPVar1->fields)._._.muzzlePoint;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          position_00.y = fStack_4;
          position_00.x = fStack_3;
          position_00.z = fVar6;
          rotation.y = fStack_4;
          rotation.x = fStack_3;
          rotation.z = (float)puStack_5;
          rotation.w = fVar13;
          this_03 = (Bullet *)
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
          ;
          pPVar11 = (ParticleSystem *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                              ((Object *)pTVar8,position_00,rotation,pTVar8,
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                              );
          if (pPVar11 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (pPVar11,(MethodInfo *)0x0);
            this_00 = (pPVar1->fields).animComponentL;
            goto code_?;
          }
        }
      }
    }
code_?:
    func_?();
  }
  else {
    pTVar8 = (pPVar1->fields).muzzlePoint2;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
    pBVar10 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_SixShooterBullet,*pVVar9,0.0,(MethodInfo *)0x0);
    pTVar8 = (pPVar1->fields).muzzlePoint2;
    if (pTVar8 == (Transform *)0x0) goto code_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
    fVar6 = pVVar9->z;
    pPVar11 = (pPVar1->fields).muzzleParticles;
    if ((pPVar11 == (ParticleSystem *)0x0) ||
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar11,(MethodInfo *)0x0), pTVar8 == (Transform *)0x0))
    goto code_?;
    original = (Object *)0x0;
    pQVar12 = (Quaternion *)&fStack_3;
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        (pQVar12,pTVar8,(MethodInfo *)0x0);
    fStack_3 = pQVar14->x;
    fStack_4 = pQVar14->y;
    puStack_5 = (undefined *)pQVar14->z;
    fVar13 = pQVar14->w;
    _isLocal = (pPVar1->fields).muzzlePoint2;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      _isLocal = (Transform *)&UNK_?;
      func_?();
    }
    uVar15 = CONCAT44(fStack_4,fStack_3);
    lVar2 = CONCAT44(fVar13,puStack_5);
    position_01.y = (float)pTVar8;
    position_01.x = (float)pQVar12;
    position_01.z = fVar6;
    pPVar11 = (ParticleSystem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                        (original,position_01,(Quaternion)CONCAT88(lVar2,uVar15),_isLocal,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                        );
    this_03 = (Bullet *)uVar15;
    if (pPVar11 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (pPVar11,(MethodInfo *)0x0);
    this_00 = (pPVar1->fields).animComponentR;
code_?:
    if ((this_00 == (Animation *)0x0) ||
       (UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                  (this_00,StringLiteral_RevolverRecoil,(MethodInfo *)0x0), pBVar10 == (Bullet *)0x0
       )) goto code_?;
    a = (pBVar10->fields).onHit;
    pBVar16 = (BulletThrowingStar_OnHitDelegate *)func_?();
    this = (PickupItemDoubleSixShooter *)((ulonglong)lVar2 >> 0x20);
    pPVar1 = this;
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar16,(Object *)this,
               MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pIVar17 = (Il2CppClass *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)pBVar16,(MethodInfo *)0x0);
    if (pIVar17 == (Il2CppClass *)0x0) {
      (this_03->fields).onHit = (Bullet_OnHitDelegate *)0x0;
code_?:
      func_?();
      if (isLocal != 0) {
        pBVar16 = (BulletThrowingStar_OnHitDelegate *)func_?();
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar16,(Object *)this,
                   MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                   ,(MethodInfo *)0x0);
        (this_03->fields).onHitLocal = (Bullet_OnHitDelegate *)pBVar16;
        func_?();
      }
      pMVar18 = (this->fields)._._.owner;
      if (pMVar18 != (MVPickupOwner *)0x0) {
        fVar6 = (pMVar18->fields).lookOrigin.x;
        fVar13 = (pMVar18->fields).lookOrigin.y;
        fVar19 = (pMVar18->fields).lookOrigin.z;
        pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffd4,(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffd4,*pVVar9,(MethodInfo *)0x0);
        uVar20 = pVVar9->x;
        uVar21 = pVVar9->y;
        fVar22 = pVVar9->z;
        pMVar18 = (this->fields)._._.owner;
        if (pMVar18 != (MVPickupOwner *)0x0) {
          speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                            (pMVar18,(this->fields).bulletSpeed,(MethodInfo *)0x0);
          range = (this->fields).bulletRange;
          pMVar18 = (this->fields)._._.owner;
          if (pMVar18 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar18->klass->vtable).get_IgnoreWOIDs.method)();
            lineOfFire.m_Origin.y = fVar13;
            lineOfFire.m_Origin.x = fVar6;
            lineOfFire.m_Origin.z = fVar19;
            lineOfFire.m_Direction.x = (float)uVar20;
            lineOfFire.m_Direction.y = (float)uVar21;
            lineOfFire.m_Direction.z = fVar22;
            Bullet::Bullet_Fire(this_03,speed,range,lineOfFire,ignoreWoIDs,0,(MethodInfo *)0x0);
            fStack_3 = (float)(this->fields).currentAmmo.currentCryptoKey;
            fStack_4 = (float)(this->fields).currentAmmo.hiddenValue;
            puStack_5 = (undefined *)(this->fields).currentAmmo.fakeValue;
            fVar6 = *(float *)&(this->fields).currentAmmo.inited;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            input.hiddenValue = (int32_t)fStack_4;
            input.currentCryptoKey = (int32_t)fStack_3;
            input.fakeValue = (int32_t)puStack_5;
            input._12_4_ = fVar6;
            pOVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_op_Decrement
                                ((ObscuredInt *)&fStack_3,input,(MethodInfo *)0x0);
            iVar24 = pOVar23->hiddenValue;
            iVar25 = pOVar23->fakeValue;
            bVar26 = pOVar23->inited;
            uVar27 = *(undefined3 *)&pOVar23->field_0xd;
            (this->fields).currentAmmo.currentCryptoKey = pOVar23->currentCryptoKey;
            (this->fields).currentAmmo.hiddenValue = iVar24;
            (this->fields).currentAmmo.fakeValue = iVar25;
            (this->fields).currentAmmo.inited = bVar26;
            *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar27;
            this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
            ;
            if (isLocal == 0) {
              pTVar8 = (this->fields)._._.muzzlePoint;
              if (pTVar8 != (Transform *)0x0) {
                this = (PickupItemDoubleSixShooter *)0x0;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
                if (this_01 != (AudioManager *)0x0) {
                  uVar15._0_4_ = pVVar9->x;
                  uVar15._4_4_ = pVVar9->y;
                  fVar6 = pVVar9->z;
code_?:
                  position.z = fVar6;
                  position.x = (float)(int)uVar15;
                  position.y = (float)(int)((ulonglong)uVar15 >> 0x20);
                  AudioManager::AudioManager_Play_2
                            (this_01,StringLiteral_projectile_fire,(AudioSource *)this,position,
                             (MethodInfo *)0x0);
                  pMVar18 = (pPVar1->fields)._._.owner;
                  (pPVar1->fields)._.isFiring = 0;
                  if (pMVar18 != (MVPickupOwner *)0x0) {
                    this_02 = (MVRigidBody *)
                              UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_GetComponent_1
                                        ((Component *)pMVar18,
                                         MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                        );
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar26 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                       ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar26 == 0) {
                      return;
                    }
                    pMVar18 = (pPVar1->fields)._._.owner;
                    if (pMVar18 != (MVPickupOwner *)0x0) {
                      pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                          ((Vector3 *)&fStack_4,pMVar18,(MethodInfo *)0x0);
                      uVar28 = pVVar9->x;
                      uVar29 = pVVar9->y;
                      fVar6 = (pPVar1->fields).recoilImpact;
                      if (this_02 != (MVRigidBody *)0x0) {
                        impulse.y = fVar6 * (float)(uVar29 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                        impulse.x = fVar6 * (float)(uVar28 ^ 
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                        impulse.z = fVar6 * (float)((uint)pVVar9->z ^
                                                                                                      
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  );
                        MVRigidBody::MVRigidBody_AddImpulse_1(this_02,impulse,0,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
            else {
              pCVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                  ((MethodInfo *)0x0);
              if ((pCVar30 != (Camera *)0x0) &&
                 (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar30,(MethodInfo *)0x0),
                 pTVar8 != (Transform *)0x0)) {
                this = (PickupItemDoubleSixShooter *)&UNK_?;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffe0,pTVar8,(MethodInfo *)0x0);
                fVar19 = pVVar9->x;
                fVar22 = pVVar9->y;
                fVar6 = pVVar9->z;
                pCVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar30 != (Camera *)0x0) &&
                   (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar30,(MethodInfo *)0x0),
                   pTVar8 != (Transform *)0x0)) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward((Vector3 *)&fStack_4,pTVar8,(MethodInfo *)0x0);
                  uVar31 = pVVar9->x;
                  uVar32 = pVVar9->y;
                  fVar6 = pVVar9->z + fVar6;
                  if (this_01 != (AudioManager *)0x0) {
                    uVar15 = CONCAT44((float)uVar32 + fVar22,(float)uVar31 + fVar19);
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
    pIVar33 = (Il2CppClass *)0x0;
    if ((Bullet_OnHitDelegate__Class *)pIVar17->image == TypeInfo__Bullet__OnHitDelegate) {
      pIVar33 = pIVar17;
    }
    if (pIVar33 == (Il2CppClass *)0x0) goto code_?;
    (this_03->fields).onHit = (Bullet_OnHitDelegate *)pIVar33;
    pIVar33 = (Il2CppClass *)0x0;
    if ((Bullet_OnHitDelegate__Class *)pIVar17->image == TypeInfo__Bullet__OnHitDelegate) {
      pIVar33 = pIVar17;
    }
    if (pIVar33 != (Il2CppClass *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
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
                    (this,(this->klass->vtable).get_HasPercentageAmmo.methodPtr);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_get_MaxAmmo
                  (PickupItemDoubleSixShooter *this,MethodInfo *method)

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

