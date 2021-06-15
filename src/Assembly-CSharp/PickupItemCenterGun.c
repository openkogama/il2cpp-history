
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnBulletHit
               (PickupItemCenterGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

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
                  (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,(MethodInfo *)0x0);
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
          if ((((uint)(TypeInfo__PickupItemCenterGun->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PickupItemCenterGun->_1).cctor_started == 0)) {
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

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnFire
               (PickupItemCenterGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  puStack_2 = (undefined *)0x0;
  pTVar3 = (this->fields)._._.muzzlePoint;
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)((int)register0x00000010 + -0x18),pTVar3,(MethodInfo *)0x0);
    this_01 = Bullet::Bullet_CreateBullet(PoolEnums__Enum_CenterGunBullet,*pVVar4,(MethodInfo *)0x0)
    ;
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      puVar5 = &UNK_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (this_00,(MethodInfo *)0x0);
      pMVar6 = (this->fields)._._.owner;
      if (pMVar6 != (MVPickupOwner *)0x0) {
        puVar7 = &UNK_?;
        pVVar4 = InventoryItem+ItemDescription::
                 InventoryItem_ItemDescription_get_CameraPreviewerOffset
                           ((Vector3 *)((int)register0x00000010 + -0x18),
                            (InventoryItem_ItemDescription *)pMVar6,(MethodInfo *)0x0);
        uStack_8._0_4_ = pVVar4->x;
        uStack_8._4_4_ = pVVar4->y;
        pMVar6 = (this->fields)._._.owner;
        if (pMVar6 != (MVPickupOwner *)0x0) {
          uStack_9 = uStack_9 & 0xffffffff00000000;
          pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection
                             ((Vector3 *)((int)register0x00000010 + -0x18),pMVar6,(MethodInfo *)0x0)
          ;
          uStack_9._0_4_ = pVVar4->x;
          uStack_9._4_4_ = pVVar4->y;
          VStack_10.z = 0.0;
          VStack_10.y = pVVar4->z;
          piVar11 = &iStack_1;
          puVar12 = &UNK_?;
          func_?();
          if (this_01 != (Bullet *)0x0) {
            pBVar13 = (this_01->fields).onHit;
            pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__Bullet__OnHitDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar14,(Object *)this,
                       MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                       (MethodInfo *)0x0);
            pBVar15 = (Bullet_OnHitDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pBVar13,(Delegate *)pUVar14,(MethodInfo *)0x0);
            pBVar13 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar15 != (Bullet_OnHitDelegate *)0x0) {
              if (pBVar15->klass == TypeInfo__Bullet__OnHitDelegate) {
                pBVar13 = pBVar15;
              }
              pBVar16 = TypeInfo__Bullet__OnHitDelegate;
              if (pBVar13 == (Bullet_OnHitDelegate *)0x0) goto code_?;
            }
            (this_01->fields).onHit = pBVar13;
            if (isLocal != 0) {
              pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__Bullet__OnHitDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar14,(Object *)this,
                         MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                         ,(MethodInfo *)0x0);
              (this_01->fields).onHitLocal = (Bullet_OnHitDelegate *)pUVar14;
            }
            pMVar6 = (this->fields)._._.owner;
            if (pMVar6 != (MVPickupOwner *)0x0) {
              fVar17 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                 (pMVar6,(this->fields).projectileSpeed,(MethodInfo *)0x0);
              fVar18 = (this->fields).range;
              pMVar6 = (this->fields)._._.owner;
              uStack_8 = CONCAT44(fVar17,(undefined4)uStack_8);
              uStack_9._0_4_ = (float)puVar7;
              VStack_10._4_8_ = CONCAT44(piVar11,puVar12);
              if (pMVar6 != (MVPickupOwner *)0x0) {
                iVar19 = iStack_1;
                puVar7 = puStack_2;
                ignoreWoIDs = (HashSet_1_System_Int32_ *)
                              (*(code *)(pMVar6->klass->vtable).get_IgnoreWOIDs.method)
                                        (pMVar6,pMVar6->klass[1]._0.image);
                lineOfFire.m_Origin.y = (float)puVar7;
                lineOfFire.m_Origin.x = (float)iVar19;
                lineOfFire.m_Origin.z = (float)puVar5;
                lineOfFire.m_Direction.x = (float)uStack_9;
                lineOfFire.m_Direction.y = VStack_10.y;
                lineOfFire.m_Direction.z = VStack_10.z;
                Bullet::Bullet_Fire(this_01,uStack_8._4_4_,fVar18,lineOfFire,ignoreWoIDs,
                                    (MethodInfo *)0x0);
                iVar19 = (this->fields).currentAmmo.currentCryptoKey;
                fVar18 = (float)(this->fields).currentAmmo.hiddenValue;
                fVar17 = (float)(this->fields).currentAmmo.fakeValue;
                fVar20 = *(float *)&(this->fields).currentAmmo.inited;
                uStack_9._0_4_ = fVar20;
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started
                    == 0)) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                  fVar20 = (float)uStack_9;
                }
                input.hiddenValue = (int32_t)fVar18;
                input.currentCryptoKey = iVar19;
                input.fakeValue = (int32_t)fVar17;
                input._12_4_ = fVar20;
                pOVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Decrement
                                    ((ObscuredInt *)&stack0xffffffd8,input,(MethodInfo *)0x0);
                iVar19 = pOVar21->hiddenValue;
                iVar22 = pOVar21->fakeValue;
                bVar23 = pOVar21->inited;
                uVar24 = *(undefined3 *)&pOVar21->field_0xd;
                (this->fields).currentAmmo.currentCryptoKey = pOVar21->currentCryptoKey;
                (this->fields).currentAmmo.hiddenValue = iVar19;
                (this->fields).currentAmmo.fakeValue = iVar22;
                (this->fields).currentAmmo.inited = bVar23;
                *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar24;
                if (isLocal == 0) {
                  pTVar3 = (this->fields)._._.muzzlePoint;
                  if (pTVar3 != (Transform *)0x0) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_position
                                       ((Vector3 *)((int)register0x00000010 + -0x18),pTVar3,
                                        (MethodInfo *)0x0);
code_?:
                    uStack_8._0_4_ = pVVar4->x;
                    uStack_8._4_4_ = pVVar4->y;
                    fVar18 = pVVar4->z;
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                        ((MethodInfo *)0x0);
                    if (this_02 != (AudioManager *)0x0) {
                      position.z = fVar18;
                      position.x = (float)(undefined4)uStack_8;
                      position.y = uStack_8._4_4_;
                      AudioManager::AudioManager_Play_2
                                (this_02,StringLiteral_CenterGun_fire,(this->fields).audioSource,
                                 position,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                else {
                  pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  if (pCVar25 != (Camera *)0x0) {
                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pCVar25,(MethodInfo *)0x0);
                    if (pTVar3 != (Transform *)0x0) {
                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_position
                                         ((Vector3 *)((int)register0x00000010 + -0x18),pTVar3,
                                          (MethodInfo *)0x0);
                      uStack_8._0_4_ = pVVar4->x;
                      uStack_8._4_4_ = pVVar4->y;
                      fVar18 = pVVar4->z;
                      pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                          ((MethodInfo *)0x0);
                      if (pCVar25 != (Camera *)0x0) {
                        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_transform
                                            ((Component_1 *)pCVar25,(MethodInfo *)0x0);
                        if (pTVar3 != (Transform *)0x0) {
                          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                   Transform_get_forward
                                             ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0)
                          ;
                          VStack_10.y = pVVar4->x;
                          VStack_10.z = pVVar4->y;
                          fVar17 = pVVar4->z;
                          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                            func_?(TypeInfo__UnityEngine__Vector3);
                          }
                          a.z = fVar18;
                          a.x = (float)(undefined4)uStack_8;
                          a.y = uStack_8._4_4_;
                          b.z = fVar17;
                          b.x = VStack_10.y;
                          b.y = VStack_10.z;
                          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                   Vector3_op_Addition((Vector3 *)&stack0xffffffdc,a,b,
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
  func_?(0);
  pBVar15 = extraout_ECX;
  pBVar16 = extraout_EDX;
code_?:
  func_?(pBVar15,pBVar16);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnLocalBulletHit
               (PickupItemCenterGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

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
    if ((((uint)(TypeInfo__PickupItemCenterGun->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PickupItemCenterGun->_1).cctor_started == 0)) {
      func_?();
    }
    if (this_01 != (RuntimeEventManager *)0x0) {
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
                (this_01,voxelHit_00,0.0,in_stack_2);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar4 = voxelHit._36_4_;
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        voxelHit.distance =
             (float)
             int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
        ;
        voxelHit.cube = (Cube *)voxelHit._36_4_;
        voxelHit._36_4_ = &UNK_?;
        voxelHit.woId = (int32_t)pMVar3;
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                       (pMVar3,uVar4,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        voxelHit.distance = 0.0;
        voxelHit.cube = (Cube *)&UNK_?;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          voxelHit.interactionFlags._0_4_ = 0;
          voxelHit.collider = (Collider *)&UNK_?;
          voxelHit.transform = (Transform *)pMVar3;
          voxelHit._60_4_ = id;
          this_02 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,id,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClient *)0x0) {
            voxelHit.interactionFlags._4_4_ = &UNK_?;
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_02,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_03 != (MVLocalPlayer *)0x0)) {
                bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  return;
                }
                pVVar6 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                   ((Vector3 *)&stack0xffffffe4,
                                    (InputToPlayerMovementAndroid *)
                                    ((int)&voxelHit.interactionFlags + 4),(MethodInfo *)0x0);
                a = *pVVar6;
                d = (this->fields).impulseStrength;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector3);
                }
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   ((Vector3 *)&stack0xffffffe4,a,d,(MethodInfo *)0x0);
                pIVar7 = CenterGunHitPackage::CenterGunHitPackage_Create
                                   ((InteractionData *)&stack0xffffffdc,*pVVar6,(MethodInfo *)0x0);
                if (x != (InteractionDataHandlerBase *)0x0) {
                  uVar4._0_1_ = pIVar7->interactionType;
                  uVar4._1_1_ = pIVar7->playerKilledByType;
                  uVar4._2_2_ = *(undefined2 *)&pIVar7->field_0x12;
                  (*(code *)(x->klass->vtable).__unknown_1.method)
                            (x,(this->fields)._._.owner,pIVar7->damage,(pIVar7->impulse).x,
                             (pIVar7->impulse).y,(pIVar7->impulse).z,uVar4);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_ResetAmmo
               (PickupItemCenterGun *this,MethodInfo *method)

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
  pIVar8 = CenterGunHitPackage::CenterGunHitPackage_Create(&IStack_9,impulse,(MethodInfo *)0x0);
  fStack_4 = pIVar8->damage;
  fStack_5 = (pIVar8->impulse).x;
  fStack_6 = (pIVar8->impulse).y;
  fStack_7 = (pIVar8->impulse).z;
  uStack_1._0_1_ = pIVar8->interactionType;
  uStack_1._1_1_ = pIVar8->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
  fVar10 = (float10)func_?(&fStack_4,0);
  TypeInfo__PickupItemCenterGun->static_fields->damage = (float)fVar10;
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

bool Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_IsAmmoDepleted
               (PickupItemCenterGun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_Quantity
                  (PickupItemCenterGun *this,MethodInfo *method)

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

