
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_OnBulletHit
               (PickupItemSixShooter *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

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
          if ((((uint)(TypeInfo__PickupItemSixShooter->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__PickupItemSixShooter->_1).cctor_started == 0)) {
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

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_OnFire
               (PickupItemSixShooter *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  this_00 = (this->fields).animComponent;
  if (this_00 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
              (this_00,StringLiteral_RevolverRecoil,(MethodInfo *)0x0);
    pTVar2 = (this->fields)._._.muzzlePoint;
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_4,pTVar2,(MethodInfo *)0x0);
      this_02 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_SixShooterBullet,*pVVar3,(MethodInfo *)0x0);
      if (this_02 != (Bullet *)0x0) {
        auStack_5._4_4_ = TypeInfo__Bullet__OnHitDelegate;
        pBVar6 = (this_02->fields).onHit;
        auStack_5._0_4_ = &UNK_?;
        pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar7,(Object *)this,
                   MethodInfo__PickupItemSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar8 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
        pBVar6 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar8 != (Bullet_OnHitDelegate *)0x0) {
          if (pBVar8->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar6 = pBVar8;
          }
          pBVar9 = TypeInfo__Bullet__OnHitDelegate;
          if (pBVar6 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        }
        (this_02->fields).onHit = pBVar6;
        if (isLocal != 0) {
          pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__Bullet__OnHitDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar7,(Object *)this,
                     MethodInfo__PickupItemSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          (this_02->fields).onHitLocal = (Bullet_OnHitDelegate *)pUVar7;
        }
        pMVar10 = (this->fields)._._.owner;
        if (pMVar10 != (MVPickupOwner *)0x0) {
          pVVar3 = InventoryItem+ItemDescription::
                    InventoryItem_ItemDescription_get_CameraPreviewerOffset
                              (&VStack_4,(InventoryItem_ItemDescription *)pMVar10,(MethodInfo *)0x0)
          ;
          uStack_11._0_4_ = pVVar3->x;
          uStack_11._4_4_ = pVVar3->y;
          fVar12 = pVVar3->z;
          pMVar10 = (this->fields)._._.owner;
          if (pMVar10 != (MVPickupOwner *)0x0) {
            pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                (&VStack_4,pMVar10,(MethodInfo *)0x0);
            uVar13 = pVVar3->x;
            puVar14 = (undefined *)pVVar3->y;
            pBVar9 = (Bullet_OnHitDelegate__Class *)pVVar3->z;
            fVar15 = 0.0;
            func_?(&stack0xffffffb4,(int)uStack_11,(int)((ulonglong)uStack_11 >> 0x20),fVar12,
                            uVar13);
            pMVar10 = (this->fields)._._.owner;
            if (pMVar10 != (MVPickupOwner *)0x0) {
              fVar16 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                 (pMVar10,(this->fields).bulletSpeed,(MethodInfo *)0x0);
              fVar12 = (this->fields).bulletRange;
              pMVar10 = (this->fields)._._.owner;
              uStack_11 = CONCAT44(fVar16,(undefined4)uStack_11);
              VStack_17.y = 0.0;
              VStack_17.z = 0.0;
              auStack_5._0_4_ = puVar14;
              auStack_5._4_4_ = pBVar9;
              fStack_18 = fVar15;
              fStack_19 = fVar1;
              if (pMVar10 != (MVPickupOwner *)0x0) {
                ignoreWoIDs = (HashSet_1_System_Int32_ *)
                              (*(code *)(pMVar10->klass->vtable).get_IgnoreWOIDs.method)
                                        (pMVar10,pMVar10->klass[1]._0.image);
                lineOfFire.m_Origin.y = (float)auStack_5._4_4_;
                lineOfFire.m_Origin.x = (float)auStack_5._0_4_;
                lineOfFire.m_Origin.z = fStack_18;
                lineOfFire.m_Direction.x = fStack_19;
                lineOfFire.m_Direction.y = VStack_17.y;
                lineOfFire.m_Direction.z = VStack_17.z;
                Bullet::Bullet_Fire(this_02,uStack_11._4_4_,fVar12,lineOfFire,ignoreWoIDs,
                                    (MethodInfo *)0x0);
                auStack_5._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
                auStack_5._4_4_ = (this->fields).currentAmmo.hiddenValue;
                fStack_18 = (float)(this->fields).currentAmmo.fakeValue;
                fStack_19 = *(float *)&(this->fields).currentAmmo.inited;
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started
                    == 0)) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                }
                input.hiddenValue = auStack_5._4_4_;
                input.currentCryptoKey = auStack_5._0_4_;
                input.fakeValue = (int32_t)fStack_18;
                input._12_4_ = fStack_19;
                pOVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Decrement
                                    ((ObscuredInt *)auStack_5,input,(MethodInfo *)0x0);
                iVar21 = pOVar20->hiddenValue;
                iVar22 = pOVar20->fakeValue;
                bVar23 = pOVar20->inited;
                uVar24 = *(undefined3 *)&pOVar20->field_0xd;
                pPVar25 = (this->fields).muzzleParticles;
                pTVar2 = (this->fields)._._.muzzlePoint;
                (this->fields).currentAmmo.currentCryptoKey = pOVar20->currentCryptoKey;
                (this->fields).currentAmmo.hiddenValue = iVar21;
                (this->fields).currentAmmo.fakeValue = iVar22;
                (this->fields).currentAmmo.inited = bVar23;
                *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar24;
                if (pTVar2 != (Transform *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_4,pTVar2,(MethodInfo *)0x0);
                  VStack_17.y = pVVar3->x;
                  VStack_17.z = pVVar3->y;
                  fVar1 = pVVar3->z;
                  this_01 = (this->fields).muzzleParticles;
                  if ((this_01 != (ParticleSystem *)0x0) &&
                     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)this_01,(MethodInfo *)0x0),
                     pTVar2 != (Transform *)0x0)) {
                    pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_rotation
                                        ((Quaternion *)auStack_5,pTVar2,(MethodInfo *)0x0);
                    pTVar2 = (this->fields)._._.muzzlePoint;
                    auStack_5._0_4_ = pQVar26->x;
                    auStack_5._4_4_ = pQVar26->y;
                    fStack_18 = pQVar26->z;
                    fStack_19 = pQVar26->w;
                    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    position.z = fVar1;
                    position.x = VStack_17.y;
                    position.y = VStack_17.z;
                    rotation.y = (float)auStack_5._4_4_;
                    rotation.x = (float)auStack_5._0_4_;
                    rotation.z = fStack_18;
                    rotation.w = fStack_19;
                    pPVar25 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_136
                                        (pPVar25,position,rotation,pTVar2,
                                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                                        );
                    if (pPVar25 != (ParticleSystem *)0x0) {
                      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                      ParticleSystem_Play_1(pPVar25,(MethodInfo *)0x0);
                      if (isLocal == 0) {
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MVGameControllerBase);
                        }
                        this_03 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                            ((MethodInfo *)0x0);
                        audioSource = (this->fields).fireSound;
                        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                        if (pTVar2 != (Transform *)0x0) {
                          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_position(&VStack_4,pTVar2,(MethodInfo *)0x0);
code_?:
                          if (this_03 != (AudioManager *)0x0) {
                            AudioManager::AudioManager_Play_2
                                      (this_03,StringLiteral_projectile_fire,audioSource,*pVVar3,
                                       (MethodInfo *)0x0);
                            pMVar10 = (this->fields)._._.owner;
                            (this->fields)._.isFiring = 0;
                            if (pMVar10 != (MVPickupOwner *)0x0) {
                              this_04 = (MVRigidBody *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_1_GetComponent_58
                                                  ((Component_1 *)pMVar10,
                                                                                                      
                                                  MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                                  );
                              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                                   0x2000000) != 0) &&
                                 ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                                func_?();
                              }
                              bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_op_Inequality
                                                ((Object_1 *)this_04,(Object_1 *)0x0,
                                                 (MethodInfo *)0x0);
                              if (bVar23 == 0) {
                                return;
                              }
                              pMVar10 = (this->fields)._._.owner;
                              if (pMVar10 != (MVPickupOwner *)0x0) {
                                pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                                    ((Vector3 *)(auStack_5 + 4),pMVar10,
                                                     (MethodInfo *)0x0);
                                VStack_4.y = pVVar3->x;
                                VStack_4.z = pVVar3->y;
                                fVar1 = pVVar3->z;
                                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.
                                            methodPtr & 0x2000000) != 0) &&
                                   ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                                  func_?(TypeInfo__UnityEngine__Vector3);
                                }
                                a.z = fVar1;
                                a.x = VStack_4.y;
                                a.y = VStack_4.z;
                                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                          Vector3_op_UnaryNegation
                                                    ((Vector3 *)(auStack_5 + 4),a,(MethodInfo *)0x0
                                                    );
                                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                          Vector3_op_Multiply((Vector3 *)(auStack_5 + 4),*pVVar3,
                                                              (this->fields).recoilImpact,
                                                              (MethodInfo *)0x0);
                                if (this_04 != (MVRigidBody *)0x0) {
                                  MVRigidBody::MVRigidBody_AddImpulse_1
                                            (this_04,*pVVar3,0,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MVGameControllerBase);
                        }
                        this_03 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                            ((MethodInfo *)0x0);
                        audioSource = (this->fields).fireSound;
                        pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                            ((MethodInfo *)0x0);
                        if ((pCVar27 != (Camera *)0x0) &&
                           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_transform
                                                ((Component_1 *)pCVar27,(MethodInfo *)0x0),
                           pTVar2 != (Transform *)0x0)) {
                          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_position(&VStack_17,pTVar2,(MethodInfo *)0x0);
                          VStack_4.y = pVVar3->x;
                          VStack_4.z = pVVar3->y;
                          uStack_11 = CONCAT44(pVVar3->z,(undefined4)uStack_11);
                          pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                              ((MethodInfo *)0x0);
                          if ((pCVar27 != (Camera *)0x0) &&
                             (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_1_get_transform
                                                  ((Component_1 *)pCVar27,(MethodInfo *)0x0),
                             pTVar2 != (Transform *)0x0)) {
                            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_forward
                                                ((Vector3 *)(auStack_5 + 4),pTVar2,
                                                 (MethodInfo *)0x0);
                            VStack_17.y = pVVar3->x;
                            VStack_17.z = pVVar3->y;
                            fVar1 = pVVar3->z;
                            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                              func_?(TypeInfo__UnityEngine__Vector3);
                            }
                            a_00.z = uStack_11._4_4_;
                            a_00.x = VStack_4.y;
                            a_00.y = VStack_4.z;
                            b.z = fVar1;
                            b.x = VStack_17.y;
                            b.y = VStack_17.z;
                            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                      Vector3_op_Addition((Vector3 *)(auStack_5 + 4),a_00,b,
                                                          (MethodInfo *)0x0);
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
  }
  func_?(0);
  pBVar8 = extraout_ECX;
  pBVar9 = extraout_EDX;
code_?:
  func_?(pBVar8,pBVar9);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_OnLocalBulletHit
               (PickupItemSixShooter *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

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
     (this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar1,(MethodInfo *)0x0),
     this_01 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    this_02 = (RuntimeEventManager *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__PickupItemSixShooter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PickupItemSixShooter->_1).cctor_started == 0)) {
      func_?();
    }
    if (this_02 != (RuntimeEventManager *)0x0) {
      voxelHit_00.interactionFlags._4_4_ = TypeInfo__PickupItemSixShooter->static_fields->baseDamage
      ;
      voxelHit_00._0_68_ = voxelHit._0_68_;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_02,voxelHit_00,0.0,in_stack_2);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                       (pMVar3,voxelHit._36_4_,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          this_03 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,id,(MethodInfo *)0x0);
          if (this_03 != (MVWorldObjectClient *)0x0) {
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_03,(MethodInfo *)0x0);
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
                 (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_04 != (MVLocalPlayer *)0x0)) {
                bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_04,this_03,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  return;
                }
                this_00 = (this->fields)._._.owner;
                if ((this_00 != (MVPickupOwner *)0x0) &&
                   (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0),
                   this_05 != (Transform *)0x0)) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xffffffe8,this_05,(MethodInfo *)0x0);
                  b = *pVVar5;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Vector3);
                  }
                  a.y = voxelHit.point.x;
                  a.x = (float)in_stack_6;
                  a.z = voxelHit.point.y;
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                     ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                     ((Vector3 *)&stack0xffffffe8,*pVVar5,(MethodInfo *)0x0);
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                     ((Vector3 *)&stack0xffffffe8,*pVVar5,(this->fields).hitImpact,
                                      (MethodInfo *)0x0);
                  pIVar7 = SixShooterHitPackage::SixShooterHitPackage_Create
                                     ((InteractionData *)&stack0xffffffe0,*pVVar5,(MethodInfo *)0x0)
                  ;
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    uVar8._0_1_ = pIVar7->interactionType;
                    uVar8._1_1_ = pIVar7->playerKilledByType;
                    uVar8._2_2_ = *(undefined2 *)&pIVar7->field_0x12;
                    (*(code *)(x->klass->vtable).__unknown_1.method)
                              (x,(this->fields)._._.owner,pIVar7->damage,(pIVar7->impulse).x,
                               (pIVar7->impulse).y,(pIVar7->impulse).z,uVar8);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_ResetAmmo
               (PickupItemSixShooter *this,MethodInfo *method)

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


/* PickupItemSixShooter() */

void Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter__cctor(MethodInfo *method)

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
  pIVar8 = SixShooterHitPackage::SixShooterHitPackage_Create(&IStack_9,impulse,(MethodInfo *)0x0);
  fStack_4 = pIVar8->damage;
  fStack_5 = (pIVar8->impulse).x;
  fStack_6 = (pIVar8->impulse).y;
  fStack_7 = (pIVar8->impulse).z;
  uStack_1._0_1_ = pIVar8->interactionType;
  uStack_1._1_1_ = pIVar8->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
  fVar10 = (float10)func_?(&fStack_4,0);
  TypeInfo__PickupItemSixShooter->static_fields->baseDamage = (float)fVar10;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCannotFireLow.r = pCVar1->r;
  (this->fields)._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._.crossHairCannotFireLow.b = fVar4;
  (this->fields)._.crossHairCannotFireLow.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCannotFireHigh.r = pCVar1->r;
  (this->fields)._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._.crossHairCannotFireHigh.b = fVar4;
  (this->fields)._.crossHairCannotFireHigh.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCanFire.r = pCVar1->r;
  (this->fields)._.crossHairCanFire.g = fVar3;
  (this->fields)._.crossHairCanFire.b = fVar4;
  (this->fields)._.crossHairCanFire.a = fVar5;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
  bVar7 = cRam_? == '\0';
  AVar8 = pOVar6->hiddenValue;
  pBVar9 = pOVar6->hiddenValueOld;
  fVar3 = pOVar6->fakeValue;
  bVar10 = pOVar6->inited;
  uVar11 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields)._.fireInterval.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = AVar8;
  (this->fields)._.fireInterval.hiddenValueOld = pBVar9;
  (this->fields)._.fireInterval.fakeValue = fVar3;
  (this->fields)._.fireInterval.inited = bVar10;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar11;
  if (bVar7) {
    func_?();
    cRam_? = '\x01';
  }
  pMVar12 = (MeshRenderer__Array *)func_?();
  (this->fields)._._.meshRenderers = pMVar12;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_get_IsAmmoDepleted
               (PickupItemSixShooter *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemSixShooter::PickupItemSixShooter_get_Quantity
                  (PickupItemSixShooter *this,MethodInfo *method)

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

