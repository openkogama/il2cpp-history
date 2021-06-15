
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_Awake
               (PickupItemThrowingStar *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).ResetAmmo.method)
            (this,(this->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  return;
}


/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnBulletHit
               (PickupItemThrowingStar *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

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
          if ((((uint)(TypeInfo__PickupItemThrowingStar->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__PickupItemThrowingStar->_1).cctor_started == 0)) {
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

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnFire
               (PickupItemThrowingStar *this,bool isLocal,MethodInfo *method)

{
  uStack_1 = CONCAT44(iStack_2,unaff_EBX);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = uStack_1 & 0xffffffff;
  fStack_3 = 0.0;
  iStack_4 = 0;
  puStack_5 = (undefined *)0x0;
  uStack_6._0_4_ = 0.0;
  uStack_6._4_4_ = 0.0;
  pTVar7 = (this->fields)._._.muzzlePoint;
  if (pTVar7 != (Transform *)0x0) {
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_9,pTVar7,(MethodInfo *)0x0);
    uStack_1 = uStack_1 & 0xffffffff00000000;
    this_00 = BulletThrowingStar::BulletThrowingStar_CreateBullet
                        (PoolEnums__Enum_ThrowingStarBullet,*pVVar8,(MethodInfo *)0x0);
    if (this_00 != (BulletThrowingStar *)0x0) {
      uStack_6._0_4_ = (float)TypeInfo__BulletThrowingStar__OnHitDelegate;
      pBVar10 = (this_00->fields).onHit;
      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar11,(Object *)this,
                 MethodInfo__PickupItemThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                 (MethodInfo *)0x0);
      pBVar12 = (BulletThrowingStar_OnHitDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pBVar10,(Delegate *)pUVar11,(MethodInfo *)0x0);
      pBVar10 = (BulletThrowingStar_OnHitDelegate *)0x0;
      if (pBVar12 != (BulletThrowingStar_OnHitDelegate *)0x0) {
        if (pBVar12->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
          pBVar10 = pBVar12;
        }
        pBVar13 = TypeInfo__BulletThrowingStar__OnHitDelegate;
        if (pBVar10 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
      }
      (this_00->fields).onHit = pBVar10;
      if (isLocal != 0) {
        pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar11,(Object *)this,
                   MethodInfo__PickupItemThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        (this_00->fields).onHitLocal = (BulletThrowingStar_OnHitDelegate *)pUVar11;
      }
      pMVar14 = (this->fields)._._.owner;
      if (pMVar14 != (MVPickupOwner *)0x0) {
        pVVar8 = InventoryItem+ItemDescription::
                 InventoryItem_ItemDescription_get_CameraPreviewerOffset
                           (&VStack_9,(InventoryItem_ItemDescription *)pMVar14,(MethodInfo *)0x0);
        uStack_15._0_4_ = pVVar8->x;
        uStack_15._4_4_ = pVVar8->y;
        fVar16 = pVVar8->z;
        pMVar14 = (this->fields)._._.owner;
        if (pMVar14 != (MVPickupOwner *)0x0) {
          uStack_1 = uStack_1 & 0xffffffff00000000;
          pVVar8 = MVPickupOwner::MVPickupOwner_get_LookDirection
                             (&VStack_9,pMVar14,(MethodInfo *)0x0);
          uStack_1._0_4_ = pVVar8->x;
          iStack_2 = (int32_t)pVVar8->y;
          fStack_3 = pVVar8->z;
          iStack_4 = 0;
          func_?(&iStack_2,(int)uStack_15,(int)((ulonglong)uStack_15 >> 0x20),fVar16);
          pMVar14 = (this->fields)._._.owner;
          if (pMVar14 != (MVPickupOwner *)0x0) {
            fVar17 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                               (pMVar14,(this->fields).bulletSpeed,(MethodInfo *)0x0);
            fVar16 = (this->fields).bulletRangeStraight;
            pMVar14 = (this->fields)._._.owner;
            uStack_15 = CONCAT44(fVar17,(undefined4)uStack_15);
            auStack_18._0_4_ = iStack_2;
            auStack_18._4_4_ = fStack_3;
            iStack_19 = iStack_4;
            puStack_20 = puStack_5;
            VStack_21.y = (float)uStack_6;
            VStack_21.z = uStack_6._4_4_;
            if (pMVar14 != (MVPickupOwner *)0x0) {
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar14->klass->vtable).get_IgnoreWOIDs.method)
                                      (pMVar14,pMVar14->klass[1]._0.image);
              lineOfFire.m_Origin.y = (float)auStack_18._4_4_;
              lineOfFire.m_Origin.x = (float)auStack_18._0_4_;
              lineOfFire.m_Origin.z = (float)iStack_19;
              lineOfFire.m_Direction.x = (float)puStack_20;
              lineOfFire.m_Direction.y = VStack_21.y;
              lineOfFire.m_Direction.z = VStack_21.z;
              BulletThrowingStar::BulletThrowingStar_Fire
                        (this_00,uStack_15._4_4_,fVar16,lineOfFire,ignoreWoIDs,
                         (this->fields).bulletRangeFall,(this->fields).bulletFallRate,
                         (MethodInfo *)0x0);
              auStack_18._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
              auStack_18._4_4_ = (this->fields).currentAmmo.hiddenValue;
              iStack_19 = (this->fields).currentAmmo.fakeValue;
              puStack_20 = *(undefined **)&(this->fields).currentAmmo.inited;
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started ==
                  0)) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              }
              input.hiddenValue = auStack_18._4_4_;
              input.currentCryptoKey = auStack_18._0_4_;
              input.fakeValue = iStack_19;
              input._12_4_ = puStack_20;
              pOVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Decrement
                                  ((ObscuredInt *)auStack_18,input,(MethodInfo *)0x0);
              iVar23 = pOVar22->hiddenValue;
              iVar24 = pOVar22->fakeValue;
              bVar25 = pOVar22->inited;
              uVar26 = *(undefined3 *)&pOVar22->field_0xd;
              (this->fields).currentAmmo.currentCryptoKey = pOVar22->currentCryptoKey;
              (this->fields).currentAmmo.hiddenValue = iVar23;
              (this->fields).currentAmmo.fakeValue = iVar24;
              (this->fields).currentAmmo.inited = bVar25;
              *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar26;
              if (isLocal == 0) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                pTVar7 = (this->fields)._._.muzzlePoint;
                audioSource = (this->fields).fireSound;
                if (pTVar7 != (Transform *)0x0) {
                  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&VStack_9,pTVar7,(MethodInfo *)0x0);
code_?:
                  if (this_01 != (AudioManager *)0x0) {
                    AudioManager::AudioManager_Play_2
                              (this_01,StringLiteral_projectile_fire,audioSource,*pVVar8,
                               (MethodInfo *)0x0);
                    (this->fields)._.isFiring = 0;
                    return;
                  }
                }
              }
              else {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                audioSource = (this->fields).fireSound;
                pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if (pCVar27 != (Camera *)0x0) {
                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)pCVar27,(MethodInfo *)0x0);
                  if (pTVar7 != (Transform *)0x0) {
                    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_position(&VStack_21,pTVar7,(MethodInfo *)0x0);
                    VStack_9.y = pVVar8->x;
                    VStack_9.z = pVVar8->y;
                    uStack_15 = CONCAT44(pVVar8->z,(undefined4)uStack_15);
                    pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                        ((MethodInfo *)0x0);
                    if (pCVar27 != (Camera *)0x0) {
                      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pCVar27,(MethodInfo *)0x0);
                      if (pTVar7 != (Transform *)0x0) {
                        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_forward
                                           ((Vector3 *)(auStack_18 + 4),pTVar7,(MethodInfo *)0x0);
                        VStack_21.y = pVVar8->x;
                        VStack_21.z = pVVar8->y;
                        fVar16 = pVVar8->z;
                        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                          uStack_1 = CONCAT44(iStack_2,TypeInfo__UnityEngine__Vector3);
                          func_?(TypeInfo__UnityEngine__Vector3);
                        }
                        uStack_1 = uStack_1 & 0xffffffff00000000;
                        a.z = uStack_15._4_4_;
                        a.x = VStack_9.y;
                        a.y = VStack_9.z;
                        b.z = fVar16;
                        b.x = VStack_21.y;
                        b.y = VStack_21.z;
                        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                 Vector3_op_Addition((Vector3 *)(auStack_18 + 4),a,b,
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
  func_?(0);
  pBVar12 = extraout_ECX;
  pBVar13 = extraout_EDX;
code_?:
  func_?(pBVar12,pBVar13);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnLocalBulletHit
               (PickupItemThrowingStar *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

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
      this_00 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,id,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClient *)0x0) {
        voxelHit.point.y = 0.0;
        in_stack_2 = &UNK_?;
        voxelHit.point.x = (float)this_00;
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          voxelHit.normal.x = (float)TypeInfo__UnityEngine__Object;
          voxelHit.point.z = (float)&UNK_?;
          func_?();
        }
        voxelHit.normal.x = 0.0;
        voxelHit.point.z = 0.0;
        voxelHit.point.x = (float)&UNK_?;
        voxelHit.point.y = (float)x;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            voxelHit.cubePos._0_4_ = TypeInfo__MVGameControllerBase;
            voxelHit.normal.z = (float)&UNK_?;
            func_?();
          }
          voxelHit.cubePos.x = 0;
          voxelHit.cubePos.y = 0;
          voxelHit.normal.z = (float)&UNK_?;
          this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame *)0x0) {
            voxelHit.cubePos.z = 0;
            voxelHit._30_2_ = 0;
            voxelHit.normal.z = (float)&UNK_?;
            voxelHit.cubePos._0_4_ = this_01;
            this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
            if (this_02 != (MVLocalPlayer *)0x0) {
              voxelHit.isCubeHit = 0;
              voxelHit._37_3_ = 0;
              voxelHit.cubePos._0_4_ = &UNK_?;
              voxelHit._28_4_ = this_02;
              voxelHit.face = (int32_t)this_00;
              bVar3 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                ((MVPlayer *)this_02,this_00,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                return;
              }
              voxelHit.distance = 0.0;
              uVar4._0_2_ = (int16_t)uRam_?;
              uVar4._2_2_ = uRam_?._2_2_;
              voxelHit.cube = (Cube *)&voxelHit.distance;
              voxelHit.woId = (int32_t)&UNK_?;
              pIVar5 = ThrowingStarHitPackage::ThrowingStarHitPackage_Create
                                 ((InteractionData *)voxelHit.cube,(MethodInfo *)0x0);
              if (x != (InteractionDataHandlerBase *)0x0) {
                voxelHit.face = (int32_t)pIVar5->damage;
                voxelHit._36_4_ = (pIVar5->impulse).x;
                voxelHit.woId = (int32_t)(pIVar5->impulse).y;
                voxelHit.cube = (Cube *)(pIVar5->impulse).z;
                voxelHit.distance = *(float *)&pIVar5->interactionType;
                voxelHit.transform = (Transform *)(x->klass->vtable).OnValidate.methodPtr;
                voxelHit.collider = (Collider *)0x0;
                voxelHit.normal.z = (float)&UNK_?;
                voxelHit.cubePos._0_4_ = x;
                voxelHit._28_4_ = uVar4;
                (*(code *)(x->klass->vtable).__unknown_1.method)();
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
code_?:
  voxelHit.transform = (Transform *)0x0;
  voxelHit.collider = (Collider *)&UNK_?;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_ResetAmmo
               (PickupItemThrowingStar *this,MethodInfo *method)

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


/* PickupItemThrowingStar() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  pIVar6 = ThrowingStarHitPackage::ThrowingStarHitPackage_Create(&IStack_7,(MethodInfo *)0x0);
  fStack_2 = pIVar6->damage;
  fStack_3 = (pIVar6->impulse).x;
  fStack_4 = (pIVar6->impulse).y;
  fStack_5 = (pIVar6->impulse).z;
  uStack_1._0_1_ = pIVar6->interactionType;
  uStack_1._1_1_ = pIVar6->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&pIVar6->field_0x12;
  fVar8 = (float10)func_?(&fStack_2,0);
  TypeInfo__PickupItemThrowingStar->static_fields->damage = (float)fVar8;
  return;
}


/* PickupItemThrowingStar() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar__ctor
               (PickupItemThrowingStar *this,MethodInfo *method)

{
  (this->fields).bulletRangeStraight = 50.0;
  (this->fields).bulletRangeFall = 50.0;
  (this->fields).bulletFallRate = 0.1;
  (this->fields).bulletSpeed = 80.0;
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

bool Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_get_IsAmmoDepleted
               (PickupItemThrowingStar *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_get_Quantity
                  (PickupItemThrowingStar *this,MethodInfo *method)

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

