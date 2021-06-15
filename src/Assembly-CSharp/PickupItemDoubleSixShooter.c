
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnBulletHit
               (PickupItemDoubleSixShooter *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      iVar3 = func_?();
      if (iVar3 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffe8,voxelHit._8_12_,(MethodInfo *)0x0);
        position.y = voxelHit.point.x;
        position.x = (float)in_stack_5;
        position.z = voxelHit.point.y;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_SixShooterSparks,position,*pQVar4,(MethodInfo *)0x0);
        return;
      }
      this_00 = (this->fields)._._.owner;
      if (this_00 != (MVPickupOwner *)0x0) {
        this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)this_00,(MethodInfo *)0x0);
        if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
          TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
          TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                    (this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__PickupItemDoubleSixShooter->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__PickupItemDoubleSixShooter->_1).cctor_started == 0)) {
            func_?();
          }
          if (pMVar2 != (MVWorldObject *)0x0) {
            iVar3 = func_?();
            if (iVar3 != 0) {
              iVar3 = func_?();
              if (iVar3 != 0) {
                func_?(0,TypeInfo__IBulletImpactVisualizer,iVar3,in_stack_5,
                                voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x
                                ,voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,
                                voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,voxelHit.woId,
                                voxelHit.cube,voxelHit.distance,voxelHit.collider,voxelHit.transform
                                ,voxelHit._60_8_,voxelHit.interactionFlags._4_4_,
                                lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,
                                lineOfFire.m_Direction.x,lineOfFire.m_Direction.y);
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnFire
               (PickupItemDoubleSixShooter *this,bool isLocal,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  puStack_2 = (undefined *)(this->fields).currentAmmo.currentCryptoKey;
  fVar3 = (float)(this->fields).currentAmmo.hiddenValue;
  fVar4 = (float)(this->fields).currentAmmo.fakeValue;
  fVar5 = *(float *)&(this->fields).currentAmmo.inited;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = (int32_t)fVar3;
  value.currentCryptoKey = (int32_t)puStack_2;
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
                          ((Vector3 *)&stack0xffffffe0,pTVar8,(MethodInfo *)0x0);
      fVar3 = pVVar9->x;
      fVar4 = pVVar9->y;
      fVar5 = pVVar9->z;
      uVar1 = uVar1 & 0xffffffff00000000;
      puVar10 = (undefined *)0x2;
      pBVar11 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_SixShooterBullet,*pVVar9,(MethodInfo *)0x0);
      lVar12 = ZEXT48(pBVar11) << 0x20;
      pTVar8 = (object->fields)._._.muzzlePoint;
      if (pTVar8 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
        pPVar13 = (object->fields).muzzleParticles;
        if ((pPVar13 != (ParticleSystem *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pPVar13,(MethodInfo *)0x0),
           pTVar8 != (Transform *)0x0)) {
          puVar14 = &UNK_?;
          pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&puStack_2,pTVar8,(MethodInfo *)0x0);
          pTVar16 = (object->fields)._._.muzzlePoint;
          puStack_2 = (undefined *)pQVar15->x;
          fVar17 = pQVar15->y;
          uVar18._0_4_ = pQVar15->z;
          uVar18._4_4_ = pQVar15->w;
          fVar19 = fVar3;
          fVar20 = fVar4;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
            fVar19 = fVar3;
            fVar20 = fVar4;
          }
          position.y = (float)puStack_2;
          position.x = (float)puVar14;
          position.z = (float)pTVar8;
          QVar21.y = fVar17;
          QVar21.x = (float)puStack_2;
          QVar21.z = (float)uVar18;
          QVar21.w = uVar18._4_4_;
          pPVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_136
                              ((ParticleSystem *)pTVar16,position,QVar21,pTVar16,
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                              );
          if (pPVar13 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (pPVar13,(MethodInfo *)0x0);
            this_00 = (object->fields).animComponentL;
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
                          ((Vector3 *)&stack0xffffffe0,pTVar8,(MethodInfo *)0x0);
      fVar19 = pVVar9->x;
      fVar20 = pVVar9->y;
      fVar5 = pVVar9->z;
      uVar1 = uVar1 & 0xffffffff00000000;
      puVar10 = (undefined *)0x2;
      pBVar11 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_SixShooterBullet,*pVVar9,(MethodInfo *)0x0);
      pTVar8 = (this->fields).muzzlePoint2;
      if (pTVar8 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xfffffff0,pTVar8,(MethodInfo *)0x0);
        puVar14 = (undefined *)pVVar9->z;
        pPVar13 = (this->fields).muzzleParticles;
        if ((pPVar13 != (ParticleSystem *)0x0) &&
           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pPVar13,(MethodInfo *)0x0),
           pTVar8 != (Transform *)0x0)) {
          pQVar15 = (Quaternion *)&puStack_2;
          puVar22 = &UNK_?;
          pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              (pQVar15,pTVar8,(MethodInfo *)0x0);
          pTVar16 = (this->fields).muzzlePoint2;
          puStack_2 = (undefined *)pQVar23->x;
          fVar3 = pQVar23->y;
          fVar4 = pQVar23->z;
          _isLocal = pQVar23->w;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            puVar14 = &UNK_?;
            func_?();
          }
          lVar12 = CONCAT44(fVar4,fVar3);
          position_00.y = (float)pQVar15;
          position_00.x = (float)puVar22;
          position_00.z = (float)puVar14;
          QVar21.x = (float)puStack_2;
          QVar21 = (Quaternion)CONCAT124(VVar24,QVar21.x);
          pPVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_136
                              ((ParticleSystem *)pTVar8,position_00,QVar21,pTVar16,
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                              );
          if (pPVar13 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (pPVar13,(MethodInfo *)0x0);
            this_00 = (object->fields).animComponentR;
code_?:
            if ((this_00 != (Animation *)0x0) &&
               (UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                          (this_00,StringLiteral_RevolverRecoil,(MethodInfo *)0x0),
               pBVar11 != (Bullet *)0x0)) {
              a = (pBVar11->fields).onHit;
              this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_01,(Object *)object,
                         MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_
                         ,(MethodInfo *)0x0);
              pDVar25 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
              pDVar26 = (Delegate *)0x0;
              if (pDVar25 != (Delegate *)0x0) {
                if ((Bullet_OnHitDelegate__Class *)pDVar25->klass == TypeInfo__Bullet__OnHitDelegate
                   ) {
                  pDVar26 = pDVar25;
                }
                if (pDVar26 == (Delegate *)0x0) goto code_?;
              }
              this = (PickupItemDoubleSixShooter *)((ulonglong)lVar12 >> 0x20);
              *(Delegate **)&(this->fields)._._.firedThisFrame = pDVar26;
              pMVar27 = (MVPickupOwner *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)pMVar27,(Object *)object,
                         MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                         ,(MethodInfo *)0x0);
              (this->fields)._._.owner = pMVar27;
              pMVar27 = (object->fields)._._.owner;
              if (pMVar27 != (MVPickupOwner *)0x0) {
                InventoryItem+ItemDescription::
                InventoryItem_ItemDescription_get_CameraPreviewerOffset
                          ((Vector3 *)&stack0xffffffd4,(InventoryItem_ItemDescription *)pMVar27,
                           (MethodInfo *)0x0);
                pMVar27 = (object->fields)._._.owner;
                if (pMVar27 != (MVPickupOwner *)0x0) {
                  MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffd4,pMVar27,(MethodInfo *)0x0);
                  func_?();
                  pMVar27 = (object->fields)._._.owner;
                  if (pMVar27 != (MVPickupOwner *)0x0) {
                    fVar4 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                      (pMVar27,(object->fields).bulletSpeed,(MethodInfo *)0x0);
                    fVar3 = (object->fields).bulletRange;
                    pMVar27 = (object->fields)._._.owner;
                    fVar17 = (float)uVar1;
                    uVar18._0_4_ = (float)(uVar1 >> 0x20);
                    puStack_2 = puVar10;
                    if (pMVar27 != (MVPickupOwner *)0x0) {
                      ignoreWoIDs = (HashSet_1_System_Int32_ *)
                                    (*(code *)(pMVar27->klass->vtable).get_IgnoreWOIDs.method)();
                      lineOfFire.m_Origin.y = fVar19;
                      lineOfFire.m_Origin.x = (float)puStack_2;
                      lineOfFire.m_Origin.z = fVar20;
                      lineOfFire.m_Direction.x = fVar5;
                      lineOfFire.m_Direction.y = fVar17;
                      lineOfFire.m_Direction.z = (float)uVar18;
                      Bullet::Bullet_Fire((Bullet *)this,fVar4,fVar3,lineOfFire,ignoreWoIDs,
                                          (MethodInfo *)0x0);
                      puStack_2 = (undefined *)(object->fields).currentAmmo.currentCryptoKey;
                      fVar3 = (float)(object->fields).currentAmmo.hiddenValue;
                      fVar4 = (float)(object->fields).currentAmmo.fakeValue;
                      fVar5 = *(float *)&(object->fields).currentAmmo.inited;
                      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                                  vtable).Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                          cctor_started == 0)) {
                        func_?();
                      }
                      input.hiddenValue = (int32_t)fVar3;
                      input.currentCryptoKey = (int32_t)puStack_2;
                      input.fakeValue = (int32_t)fVar4;
                      input._12_4_ = fVar5;
                      pOVar28 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                                ObscuredInt::ObscuredInt_op_Decrement
                                          ((ObscuredInt *)&puStack_2,input,(MethodInfo *)0x0);
                      iVar29 = pOVar28->hiddenValue;
                      iVar30 = pOVar28->fakeValue;
                      bVar31 = pOVar28->inited;
                      uVar32 = *(undefined3 *)&pOVar28->field_0xd;
                      (object->fields).currentAmmo.currentCryptoKey = pOVar28->currentCryptoKey;
                      (object->fields).currentAmmo.hiddenValue = iVar29;
                      (object->fields).currentAmmo.fakeValue = iVar30;
                      (object->fields).currentAmmo.inited = bVar31;
                      *(undefined3 *)&(object->fields).currentAmmo.field_0xd = uVar32;
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?();
                      }
                      this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                          ((MethodInfo *)0x0);
                      audioSource = (object->fields).fireSound;
                      pCVar33 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                          ((MethodInfo *)0x0);
                      if ((pCVar33 != (Camera *)0x0) &&
                         (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_transform
                                              ((Component_1 *)pCVar33,(MethodInfo *)0x0),
                         pTVar8 != (Transform *)0x0)) {
                        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
                        fVar5 = pVVar9->x;
                        fVar17 = pVVar9->y;
                        fVar3 = pVVar9->z;
                        pCVar33 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                            ((MethodInfo *)0x0);
                        if ((pCVar33 != (Camera *)0x0) &&
                           (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_transform
                                                ((Component_1 *)pCVar33,(MethodInfo *)0x0),
                           pTVar8 != (Transform *)0x0)) {
                          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_forward
                                              ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0
                                              );
                          uVar18._0_4_ = pVVar9->x;
                          uVar18._4_4_ = pVVar9->y;
                          fVar4 = pVVar9->z;
                          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                            func_?();
                          }
                          a_00.y = fVar17;
                          a_00.x = fVar5;
                          a_00.z = fVar3;
                          b.z = fVar4;
                          b.x = (float)(int)uVar18;
                          b.y = (float)(int)((ulonglong)uVar18 >> 0x20);
                          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                    Vector3_op_Addition((Vector3 *)&stack0xffffffd4,a_00,b,
                                                        (MethodInfo *)0x0);
                          if (this_02 != (AudioManager *)0x0) {
                            AudioManager::AudioManager_Play_2
                                      (this_02,StringLiteral_projectile_fire,audioSource,*pVVar9,
                                       (MethodInfo *)0x0);
                            pMVar27 = (object->fields)._._.owner;
                            (object->fields)._.isFiring = 0;
                            if (pMVar27 != (MVPickupOwner *)0x0) {
                              this_03 = (MVRigidBody *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_1_GetComponent_58
                                                  ((Component_1 *)pMVar27,
                                                                                                      
                                                  MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                                  );
                              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                                   0x2000000) != 0) &&
                                 ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                                func_?();
                              }
                              bVar31 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                       Object_1_op_Inequality
                                                 ((Object_1 *)this_03,(Object_1 *)0x0,
                                                  (MethodInfo *)0x0);
                              if (bVar31 == 0) {
                                return;
                              }
                              pMVar27 = (object->fields)._._.owner;
                              if (pMVar27 != (MVPickupOwner *)0x0) {
                                pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                                    ((Vector3 *)&stack0xffffffd4,pMVar27,
                                                     (MethodInfo *)0x0);
                                uVar34._0_4_ = pVVar9->x;
                                uVar34._4_4_ = pVVar9->y;
                                _isLocal = pVVar9->z;
                                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.
                                            methodPtr & 0x2000000) != 0) &&
                                   ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                VVar24.x = (float)(int)uVar34;
                                this = (PickupItemDoubleSixShooter *)
                                       (int)((ulonglong)uVar34 >> 0x20);
                                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                          Vector3_op_UnaryNegation
                                                    ((Vector3 *)&stack0xffffffd4,VVar24,
                                                     (MethodInfo *)0x0);
                                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                          Vector3_op_Multiply((Vector3 *)&stack0xffffffd4,*pVVar9,
                                                              (object->fields).recoilImpact,
                                                              (MethodInfo *)0x0);
                                if (this_03 != (MVRigidBody *)0x0) {
                                  MVRigidBody::MVRigidBody_AddImpulse_1
                                            (this_03,*pVVar9,0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar1,(MethodInfo *)0x0),
     this_00 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    this_01 = (RuntimeEventManager *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__PickupItemDoubleSixShooter->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__PickupItemDoubleSixShooter->_1).cctor_started == 0)) {
      func_?();
    }
    if (this_01 != (RuntimeEventManager *)0x0) {
      voxelHit_00.interactionFlags._4_4_ =
           TypeInfo__PickupItemDoubleSixShooter->static_fields->baseDamage;
      voxelHit_00._0_68_ = voxelHit._0_68_;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_01,voxelHit_00,0.0,in_stack_2);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                       (pMVar3,voxelHit._36_4_,
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
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_03 != (MVLocalPlayer *)0x0)) {
                bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  return;
                }
                pMVar5 = (this->fields)._._.owner;
                if ((pMVar5 != (MVPickupOwner *)0x0) &&
                   (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pMVar5,(MethodInfo *)0x0),
                   this_04 != (Transform *)0x0)) {
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xffffffe8,this_04,(MethodInfo *)0x0);
                  b = *pVVar6;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Vector3);
                  }
                  a.y = voxelHit.point.x;
                  a.x = (float)in_stack_7;
                  a.z = voxelHit.point.y;
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                     ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                     ((Vector3 *)&stack0xffffffe8,*pVVar6,(MethodInfo *)0x0);
                  pMVar5 = (this->fields)._._.owner;
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                     ((Vector3 *)&stack0xffffffe8,*pVVar6,(this->fields).hitImpact,
                                      (MethodInfo *)0x0);
                  pIVar8 = DoubleSixShooterHitPackage::DoubleSixShooterHitPackage_Create
                                     ((InteractionData *)&stack0xffffffe0,*pVVar6,(MethodInfo *)0x0)
                  ;
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    uVar9._0_1_ = pIVar8->interactionType;
                    uVar9._1_1_ = pIVar8->playerKilledByType;
                    uVar9._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
                    (*(code *)(x->klass->vtable).__unknown_1.method)
                              (x,pMVar5,pIVar8->damage,(pIVar8->impulse).x,(pIVar8->impulse).y,
                               (pIVar8->impulse).z,uVar9);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_ResetAmmo
               (PickupItemDoubleSixShooter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = (this->fields).maxAmmo.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).maxAmmo.hiddenValue;
  OStack_1.fakeValue = (this->fields).maxAmmo.fakeValue;
  OStack_1.inited = (this->fields).maxAmmo.inited;
  OStack_1._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  func_?(&uStack_3,0,0,0,0);
  impulse.z = fStack_2;
  impulse.x = (float)(undefined4)uStack_3;
  impulse.y = (float)uStack_3._4_4_;
  pIVar8 = DoubleSixShooterHitPackage::DoubleSixShooterHitPackage_Create
                     (&IStack_9,impulse,(MethodInfo *)0x0);
  fStack_4 = pIVar8->damage;
  fStack_5 = (pIVar8->impulse).x;
  fStack_6 = (pIVar8->impulse).y;
  fStack_7 = (pIVar8->impulse).z;
  uStack_1._0_1_ = pIVar8->interactionType;
  uStack_1._1_1_ = pIVar8->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
  fVar10 = (float10)func_?(&fStack_4,0);
  TypeInfo__PickupItemDoubleSixShooter->static_fields->baseDamage = (float)fVar10;
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_get_IsAmmoDepleted
               (PickupItemDoubleSixShooter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}


/* AvatarItemType get_Type() */

AvatarItemType__Enum
Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_get_Type
          (PickupItemDoubleSixShooter *this,MethodInfo *method)

{
  return AvatarItemType__Enum_DoubleSixShooter;
}

