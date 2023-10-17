
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
  object = this;
  _isLocal = (Object_1__Class *)(uint)isLocal;
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
  puStack_1 = (undefined *)(this->fields).currentAmmo.currentCryptoKey;
  puStack_2 = (undefined *)(this->fields).currentAmmo.hiddenValue;
  unique0x10000c8e = (float)(this->fields).currentAmmo.fakeValue;
  fVar3 = *(float *)&(this->fields).currentAmmo.inited;
  puVar4 = (undefined *)(this->fields).currentAmmo.hiddenValue;
  fVar5 = (float)(this->fields).currentAmmo.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    puVar4 = puStack_2;
    fVar5 = stack0xffffffd0;
  }
  value.hiddenValue = (int32_t)puVar4;
  value.currentCryptoKey = (int32_t)puStack_1;
  value.fakeValue = (int32_t)fVar5;
  value._12_4_ = fVar3;
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
                          ((Vector3 *)&puStack_2,pTVar8,(MethodInfo *)0x0);
      fVar3 = pVVar9->x;
      fVar5 = pVVar9->y;
      fVar10 = pVVar9->z;
      fVar11 = 0.0;
      fVar12 = 2.8026e-45;
      puVar4 = &UNK_?;
      pBVar13 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_SixShooterBullet,*pVVar9,(MethodInfo *)0x0);
      lVar14 = ZEXT48(pBVar13) << 0x20;
      pTVar8 = (object->fields)._._.muzzlePoint;
      if (pTVar8 != (Transform *)0x0) {
        stack0xffffffd0 = (float)&puStack_2;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&puStack_2,pTVar8,(MethodInfo *)0x0);
        puVar15 = (undefined *)pVVar9->z;
        pPVar16 = (object->fields).muzzleParticles;
        if ((pPVar16 != (ParticleSystem *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pPVar16,(MethodInfo *)0x0),
           pTVar8 != (Transform *)0x0)) {
          pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&puStack_1,pTVar8,(MethodInfo *)0x0);
          puStack_1 = (undefined *)pQVar17->x;
          puStack_2 = (undefined *)pQVar17->y;
          unique0x100008de = pQVar17->z;
          fVar18 = pQVar17->w;
          pTVar8 = (object->fields)._._.muzzlePoint;
          fVar19 = unique0x100008de;
          fVar20 = fVar3;
          fVar21 = fVar5;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            puVar15 = &UNK_?;
            func_?();
            fVar19 = stack0xffffffd0;
            fVar20 = fVar3;
            fVar21 = fVar5;
          }
          stack0xffffffd0 = (float)&UNK_?;
          position_00.y = fVar19;
          position_00.x = (float)puStack_2;
          position_00.z = (float)puVar15;
          rotation.y = (float)puStack_2;
          rotation.x = (float)puStack_1;
          rotation.z = fVar19;
          rotation.w = fVar18;
          pPVar16 = (ParticleSystem *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                              ((Object *)
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                               ,position_00,rotation,pTVar8,
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                              );
          if (pPVar16 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (pPVar16,(MethodInfo *)0x0);
            this_01 = (object->fields).animComponentL;
            goto code_?;
          }
        }
      }
    }
  }
  else {
    pTVar8 = (this->fields).muzzlePoint2;
    if (pTVar8 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&puStack_2,pTVar8,(MethodInfo *)0x0);
      fVar20 = pVVar9->x;
      fVar21 = pVVar9->y;
      fVar10 = pVVar9->z;
      fVar11 = 0.0;
      fVar12 = 2.8026e-45;
      puVar4 = &UNK_?;
      pBVar13 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_SixShooterBullet,*pVVar9,(MethodInfo *)0x0);
      pPVar16 = (this->fields).muzzleParticles;
      pTVar8 = (this->fields).muzzlePoint2;
      if (pTVar8 != (Transform *)0x0) {
        stack0xffffffd0 = (float)&puStack_2;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&puStack_2,pTVar8,(MethodInfo *)0x0);
        puVar15 = (undefined *)pVVar9->z;
        this_00 = (this->fields).muzzleParticles;
        if ((this_00 != (ParticleSystem *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0),
           pTVar8 != (Transform *)0x0)) {
          uVar22 = 0;
          pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&puStack_1,pTVar8,(MethodInfo *)0x0);
          puStack_1 = (undefined *)pQVar17->x;
          puStack_2 = (undefined *)pQVar17->y;
          unique0x10000ca2 = pQVar17->z;
          fVar3 = pQVar17->w;
          _isLocal = (Object_1__Class *)(this->fields).muzzlePoint2;
          puVar23 = (undefined *)pQVar17->y;
          fVar5 = pQVar17->z;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            puVar15 = &UNK_?;
            _isLocal = TypeInfo__UnityEngine__Object;
            func_?();
            puVar23 = puStack_2;
            fVar5 = stack0xffffffd0;
          }
          lVar14 = CONCAT44(fVar3,fVar5);
          position_01.y = (float)uVar22;
          position_01.x = (float)pTVar8;
          position_01.z = (float)puVar15;
          pPVar16 = (ParticleSystem *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_8
                              ((Object *)pPVar16,position_01,
                               (Quaternion)
                               CONCAT88(lVar14,CONCAT44((float)puVar23,(float)puStack_1)),
                               (Transform *)_isLocal,
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                              );
          if (pPVar16 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (pPVar16,(MethodInfo *)0x0);
            this_01 = (object->fields).animComponentR;
code_?:
            if ((this_01 != (Animation *)0x0) &&
               (UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                          (this_01,StringLiteral_RevolverRecoil,(MethodInfo *)0x0),
               pBVar13 != (Bullet *)0x0)) {
              pBVar24 = (pBVar13->fields).onHit;
              pBVar25 = (BulletThrowingStar_OnHitDelegate *)func_?();
              if (pBVar25 != (BulletThrowingStar_OnHitDelegate *)0x0) {
                BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                          (pBVar25,(Object *)object,
                           MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_
                           ,(MethodInfo *)0x0);
                pBVar24 = (Bullet_OnHitDelegate *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pBVar24,(Delegate *)pBVar25,(MethodInfo *)0x0);
                if (pBVar24 == (Bullet_OnHitDelegate *)0x0) {
                  (pBVar13->fields).onHit = (Bullet_OnHitDelegate *)0x0;
                }
                else {
                  pBVar26 = (Bullet_OnHitDelegate *)0x0;
                  if (pBVar24->klass == TypeInfo__Bullet__OnHitDelegate) {
                    pBVar26 = pBVar24;
                  }
                  if (pBVar26 == (Bullet_OnHitDelegate *)0x0) goto code_?;
                  (pBVar13->fields).onHit = pBVar26;
                  pBVar26 = (Bullet_OnHitDelegate *)0x0;
                  if (pBVar24->klass == TypeInfo__Bullet__OnHitDelegate) {
                    pBVar26 = pBVar24;
                  }
                  if (pBVar26 == (Bullet_OnHitDelegate *)0x0) goto code_?;
                }
                func_?();
                if (isLocal != 0) {
                  pBVar25 = (BulletThrowingStar_OnHitDelegate *)func_?();
                  if (pBVar25 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
                  BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                            (pBVar25,(Object *)object,
                             MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                             ,(MethodInfo *)0x0);
                  (pBVar13->fields).onHitLocal = (Bullet_OnHitDelegate *)pBVar25;
                  func_?();
                }
                pMVar27 = (object->fields)._._.owner;
                if (pMVar27 != (MVPickupOwner *)0x0) {
                  uVar22 = (pMVar27->fields).lookOrigin.x;
                  uVar28 = (pMVar27->fields).lookOrigin.y;
                  fVar3 = (pMVar27->fields).lookOrigin.z;
                  pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                      ((Vector3 *)&puStack_2,(object->fields)._._.owner,
                                       (MethodInfo *)0x0);
                  origin.y = (float)uVar28;
                  origin.x = (float)uVar22;
                  origin.z = fVar3;
                  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                            ((Ray *)&stack0xffffffb0,origin,*pVVar9,(MethodInfo *)0x0);
                  pMVar27 = (object->fields)._._.owner;
                  if (pMVar27 != (MVPickupOwner *)0x0) {
                    fVar5 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                      (pMVar27,(object->fields).bulletSpeed,(MethodInfo *)0x0);
                    fVar3 = (object->fields).bulletRange;
                    pMVar27 = (object->fields)._._.owner;
                    stack0xffffffd0 = fVar20;
                    puStack_2 = (undefined *)fVar12;
                    puStack_1 = puVar4;
                    if (pMVar27 != (MVPickupOwner *)0x0) {
                      ignoreWoIDs = (HashSet_1_System_Int32_ *)
                                    (*(pMVar27->klass->vtable).get_IgnoreWOIDs.methodPtr)();
                      this = (PickupItemDoubleSixShooter *)((ulonglong)lVar14 >> 0x20);
                      lineOfFire.m_Origin.y = (float)puStack_2;
                      lineOfFire.m_Origin.x = (float)puStack_1;
                      lineOfFire.m_Origin.z = stack0xffffffd0;
                      lineOfFire.m_Direction.x = fVar21;
                      lineOfFire.m_Direction.y = fVar10;
                      lineOfFire.m_Direction.z = fVar11;
                      Bullet::Bullet_Fire((Bullet *)this,fVar5,fVar3,lineOfFire,ignoreWoIDs,
                                          (MethodInfo *)0x0);
                      puStack_1 = (undefined *)(object->fields).currentAmmo.currentCryptoKey;
                      puStack_2 = (undefined *)(object->fields).currentAmmo.hiddenValue;
                      unique0x1000097e = (float)(object->fields).currentAmmo.fakeValue;
                      fVar3 = *(float *)&(object->fields).currentAmmo.inited;
                      fVar5 = unique0x1000097e;
                      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                        fVar5 = stack0xffffffd0;
                      }
                      stack0xffffffd0 = (float)&UNK_?;
                      input.hiddenValue = (int32_t)puStack_2;
                      input.currentCryptoKey = (int32_t)puStack_1;
                      input.fakeValue = (int32_t)fVar5;
                      input._12_4_ = fVar3;
                      pOVar29 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                                ObscuredInt::ObscuredInt_op_Decrement
                                          ((ObscuredInt *)&puStack_1,input,(MethodInfo *)0x0);
                      iVar30 = pOVar29->hiddenValue;
                      iVar31 = pOVar29->fakeValue;
                      bVar32 = pOVar29->inited;
                      uVar33 = *(undefined3 *)&pOVar29->field_0xd;
                      (object->fields).currentAmmo.currentCryptoKey = pOVar29->currentCryptoKey;
                      (object->fields).currentAmmo.hiddenValue = iVar30;
                      (object->fields).currentAmmo.fakeValue = iVar31;
                      (object->fields).currentAmmo.inited = bVar32;
                      *(undefined3 *)&(object->fields).currentAmmo.field_0xd = uVar33;
                      this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                          ((MethodInfo *)0x0);
                      if (isLocal == 0) {
                        pTVar8 = (object->fields)._._.muzzlePoint;
                        if (pTVar8 != (Transform *)0x0) {
                          this = (PickupItemDoubleSixShooter *)0x0;
                          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_position
                                              ((Vector3 *)&puStack_2,pTVar8,(MethodInfo *)0x0);
                          if (this_02 != (AudioManager *)0x0) {
                            uVar34._0_4_ = pVVar9->x;
                            uVar34._4_4_ = pVVar9->y;
                            fVar3 = pVVar9->z;
code_?:
                            position.z = fVar3;
                            position.x = (float)uVar34;
                            position.y = SUB84(uVar34,4);
                            AudioManager::AudioManager_Play_2
                                      (this_02,StringLiteral_projectile_fire,(AudioSource *)this,
                                       position,(MethodInfo *)0x0);
                            pMVar27 = (object->fields)._._.owner;
                            (object->fields)._.isFiring = 0;
                            if (pMVar27 != (MVPickupOwner *)0x0) {
                              this_03 = (MVRigidBody *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_GetComponent_1
                                                  ((Component *)pMVar27,
                                                                                                      
                                                  MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                                  );
                              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor ==
                                  0) {
                                func_?();
                              }
                              bVar32 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                       Object_1_op_Inequality
                                                 ((Object_1 *)this_03,(Object_1 *)0x0,
                                                  (MethodInfo *)0x0);
                              if (bVar32 == 0) {
                                return;
                              }
                              pMVar27 = (object->fields)._._.owner;
                              if (pMVar27 != (MVPickupOwner *)0x0) {
                                pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                                    ((Vector3 *)&stack0xffffffd8,pMVar27,
                                                     (MethodInfo *)0x0);
                                uVar35 = pVVar9->x;
                                uVar36 = pVVar9->y;
                                fVar3 = (object->fields).recoilImpact;
                                puStack_2 = (undefined *)
                                             ((float)(uVar35 ^ 
                                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                  ) * fVar3);
                                register0x00001240 =
                                     (float)(uVar36 ^ 
                                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                            ) * fVar3;
                                if (this_03 != (MVRigidBody *)0x0) {
                                  impulse.y = register0x00001240;
                                  impulse.x = (float)puStack_2;
                                  impulse.z = (float)((uint)pVVar9->z ^
                                                                                                          
                                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                  ) * fVar3;
                                  MVRigidBody::MVRigidBody_AddImpulse_1
                                            (this_03,impulse,0,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        pCVar37 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                            ((MethodInfo *)0x0);
                        if ((pCVar37 != (Camera *)0x0) &&
                           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pCVar37,(MethodInfo *)0x0),
                           pTVar8 != (Transform *)0x0)) {
                          this = (PickupItemDoubleSixShooter *)&UNK_?;
                          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_position
                                              ((Vector3 *)&puStack_2,pTVar8,(MethodInfo *)0x0);
                          fVar10 = pVVar9->x;
                          fVar12 = pVVar9->y;
                          fVar3 = pVVar9->z;
                          pCVar37 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                              ((MethodInfo *)0x0);
                          if ((pCVar37 != (Camera *)0x0) &&
                             (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pCVar37,(MethodInfo *)0x0),
                             pTVar8 != (Transform *)0x0)) {
                            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_forward
                                                ((Vector3 *)&puStack_2,pTVar8,(MethodInfo *)0x0);
                            uVar38 = pVVar9->x;
                            uVar39 = pVVar9->y;
                            stack0xffffffd0 = (float)uVar39 + fVar12;
                            puStack_2 = (undefined *)((float)uVar38 + fVar10);
                            fVar3 = pVVar9->z + fVar3;
                            uVar34 = _puStack_34;
                            if (this_02 != (AudioManager *)0x0) goto code_?;
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
  }
code_?:
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
                    (*(x->klass->vtable).__unknown_1.methodPtr)
                              (x,pMVar5,pIVar12->damage,(pIVar12->impulse).x,(pIVar12->impulse).y,
                               (pIVar12->impulse).z,uVar13,0,(x->klass->vtable).__unknown_1.method);
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


/* PickupItemDoubleSixShooter() */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemDoubleSixShooter);
    cRam_? = '\x01';
  }
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  pIVar2 = DoubleSixShooterHitPackage::DoubleSixShooterHitPackage_Create
                     (&IStack_1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  TypeInfo__PickupItemDoubleSixShooter->static_fields->baseDamage = pIVar2->damage;
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
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
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

