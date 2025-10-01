
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_Awake
               (PickupItemBazooka *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).ResetAmmo.method)
            (this,(this->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  iVar1 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Player,(MethodInfo *)0x0);
  iVar2 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Default,(MethodInfo *)0x0);
  (this->fields).layerMask = (1 << ((byte)iVar2 & 0x1f)) + (1 << ((byte)iVar1 & 0x1f));
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnFire
               (PickupItemBazooka *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Ray>);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_);
    func_?(&MethodInfo__PickupItemBazooka__OnHitMaxRangeLocal_UnityEngine__Ray_);
    func_?(&MethodInfo__PickupItemBazooka__OnHitMaxRangeRemote_UnityEngine__Ray_);
    func_?(&MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_);
    func_?(&StringLiteral_rocket_fired);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.muzzlePoint;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    func_?();
  }
  else {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    this_00 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_BazookaBullet,*pVVar2,0.0,(MethodInfo *)0x0);
    if (this_00 == (Bullet *)0x0) goto code_?;
    pBVar3 = (this_00->fields).onHit;
    pBVar4 = (BulletThrowingStar_OnHitDelegate *)func_?();
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar4,(Object *)this,
               MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_,(MethodInfo *)0x0);
    pBVar3 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar3,(Delegate *)pBVar4,(MethodInfo *)0x0);
    if (pBVar3 == (Bullet_OnHitDelegate *)0x0) {
      (this_00->fields).onHit = (Bullet_OnHitDelegate *)0x0;
    }
    else {
      pBVar5 = (Bullet_OnHitDelegate *)0x0;
      if (pBVar3->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar5 = pBVar3;
      }
      if (pBVar5 == (Bullet_OnHitDelegate *)0x0) goto code_?;
      (this_00->fields).onHit = pBVar5;
      pBVar5 = (Bullet_OnHitDelegate *)0x0;
      if (pBVar3->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar5 = pBVar3;
      }
      if (pBVar5 == (Bullet_OnHitDelegate *)0x0) goto code_?;
    }
    func_?();
    if (isLocal != 0) {
      pBVar3 = (this_00->fields).onHitLocal;
      pBVar4 = (BulletThrowingStar_OnHitDelegate *)func_?();
      BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                (pBVar4,(Object *)this,
                 MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_,
                 (MethodInfo *)0x0);
      pBVar3 = (Bullet_OnHitDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pBVar3,(Delegate *)pBVar4,(MethodInfo *)0x0);
      if (pBVar3 == (Bullet_OnHitDelegate *)0x0) {
        (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
      }
      else {
        pBVar5 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar3->klass == TypeInfo__Bullet__OnHitDelegate) {
          pBVar5 = pBVar3;
        }
        if (pBVar5 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        (this_00->fields).onHitLocal = pBVar5;
        pBVar5 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar3->klass == TypeInfo__Bullet__OnHitDelegate) {
          pBVar5 = pBVar3;
        }
        if (pBVar5 == (Bullet_OnHitDelegate *)0x0) goto code_?;
      }
      func_?();
      pAVar6 = (this_00->fields).onOutOfRange;
      pAVar7 = (Action_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?();
      mscorlib.dll::System::Action`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      Action_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor
                (pAVar7,(Object *)this,
                 MethodInfo__PickupItemBazooka__OnHitMaxRangeLocal_UnityEngine__Ray_,
                 (MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar6,(Delegate *)pAVar7,(MethodInfo *)0x0);
      if (pDVar8 != (Delegate *)0x0) {
        pAVar6 = (Action_1_UnityEngine_Ray_ *)func_?();
        if (pAVar6 != (Action_1_UnityEngine_Ray_ *)0x0) {
          (this_00->fields).onOutOfRange = pAVar6;
          iVar9 = func_?();
          goto joined_?;
        }
        goto code_?;
      }
      (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
code_?:
      func_?();
      pMVar10 = (this->fields)._._.owner;
      if (pMVar10 != (MVPickupOwner *)0x0) {
        fVar11 = (pMVar10->fields).lookOrigin.x;
        fVar12 = (pMVar10->fields).lookOrigin.y;
        fVar13 = (pMVar10->fields).lookOrigin.z;
        pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffe4,(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffe4,*pVVar2,(MethodInfo *)0x0);
        fVar14 = pVVar2->x;
        fVar15 = pVVar2->y;
        fVar16 = pVVar2->z;
        pMVar10 = (this->fields)._._.owner;
        if (pMVar10 != (MVPickupOwner *)0x0) {
          speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                            (pMVar10,(this->fields).rocketSpeed,(MethodInfo *)0x0);
          range = (this->fields).rocketRange;
          pMVar10 = (this->fields)._._.owner;
          if (pMVar10 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar10->klass->vtable).get_IgnoreWOIDs.method)
                                    (pMVar10,pMVar10->klass[1]._0.image);
            lineOfFire.m_Direction.z = fVar16;
            lineOfFire.m_Direction.y = fVar15;
            lineOfFire.m_Origin.y = fVar12;
            lineOfFire.m_Origin.x = fVar11;
            lineOfFire.m_Origin.z = fVar13;
            lineOfFire.m_Direction.x = fVar14;
            Bullet::Bullet_Fire(this_00,speed,range,lineOfFire,ignoreWoIDs,0,(MethodInfo *)0x0);
            this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
            ;
            audioSource = (this->fields).aSource;
            if (isLocal == 0) {
              pTVar1 = (this->fields)._._.muzzlePoint;
              if ((pTVar1 != (Transform *)0x0) &&
                 (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0),
                 this_01 != (AudioManager *)0x0)) {
                uVar17._0_4_ = pVVar2->x;
                uVar17._4_4_ = pVVar2->y;
                fVar11 = pVVar2->z;
code_?:
                position.z = fVar11;
                position.x = (float)uVar17;
                position.y = SUB84(uVar17,4);
                AudioManager::AudioManager_Play_2
                          (this_01,StringLiteral_rocket_fired,audioSource,position,(MethodInfo *)0x0
                          );
                puVar18 = (undefined *)(this->fields).currentAmmo.currentCryptoKey;
                pOVar19 = (ObscuredInt__Class *)(this->fields).currentAmmo.hiddenValue;
                fVar11 = (float)(this->fields).currentAmmo.fakeValue;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                    cctor_finished_or_no_cctor == 0) {
                  puVar18 = &UNK_?;
                  pOVar19 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
                  func_?();
                }
                value.hiddenValue = (int32_t)pOVar19;
                value.currentCryptoKey = (int32_t)puVar18;
                value.fakeValue = (int32_t)fVar11;
                value.inited = (this->fields).currentAmmo.inited;
                value._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                iVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                pOVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Implicit
                                    ((ObscuredInt *)&stack0xffffffd4,iVar20 + -1,(MethodInfo *)0x0);
                iVar20 = pOVar21->hiddenValue;
                iVar22 = pOVar21->fakeValue;
                bVar23 = pOVar21->inited;
                uVar24 = *(undefined3 *)&pOVar21->field_0xd;
                (this->fields).currentAmmo.currentCryptoKey = pOVar21->currentCryptoKey;
                (this->fields).currentAmmo.hiddenValue = iVar20;
                (this->fields).currentAmmo.fakeValue = iVar22;
                (this->fields).currentAmmo.inited = bVar23;
                *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar24;
                return;
              }
            }
            else {
              pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                  ((MethodInfo *)0x0);
              if ((pCVar25 != (Camera *)0x0) &&
                 (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar25,(MethodInfo *)0x0),
                 pTVar1 != (Transform *)0x0)) {
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
                uVar26._0_4_ = pVVar2->x;
                uVar26._4_4_ = pVVar2->y;
                fVar11 = pVVar2->z;
                pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar25 != (Camera *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar25,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward
                                      ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
                  uVar27 = pVVar2->x;
                  uVar28 = pVVar2->y;
                  fVar11 = pVVar2->z + fVar11;
                  uVar17._4_4_ = (float)uVar28 + SUB84(uVar26,4);
                  uVar17._0_4_ = (float)uVar27 + (float)uVar26;
                  if (this_01 != (AudioManager *)0x0) goto code_?;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pAVar6 = (this_00->fields).onOutOfRange;
    pAVar7 = (Action_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Action`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    Action_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor
              (pAVar7,(Object *)this,
               MethodInfo__PickupItemBazooka__OnHitMaxRangeRemote_UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar6,(Delegate *)pAVar7,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
      goto code_?;
    }
    pAVar6 = (Action_1_UnityEngine_Ray_ *)func_?();
    if (pAVar6 != (Action_1_UnityEngine_Ray_ *)0x0) {
      (this_00->fields).onOutOfRange = pAVar6;
      iVar9 = func_?();
joined_?:
      if (iVar9 != 0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Void OnHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHit
               (PickupItemBazooka *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    position.y = voxelHit.point.x;
    position.x = (float)in_stack_2;
    position.z = voxelHit.point.y;
    SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
              ((pPVar1->fields).particleExplosion,position,10.0,(MethodInfo *)0x0);
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHitLocal(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitLocal
               (PickupItemBazooka *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__UnityEngine__Physics);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff40,0,0x48);
  this_02 = (ExplosionEvent *)
            func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  worldPosition.y = voxelHit.point.x;
  worldPosition.x = in_stack_1;
  worldPosition.z = voxelHit.point.y;
  MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
            (this_02,RuntimeEventType__Enum_Bazooka,worldPosition,voxelHit._8_12_,(MethodInfo *)0x0)
  ;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar2 != (MVNetworkGame *)0x0) &&
      (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) &&
     (this_00 = (RuntimeEventManager *)(pWVar3->fields)._.runtimeEventManagerNetwork,
     this_00 != (RuntimeEventManager *)0x0)) {
    RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent(this_00,this_02,(MethodInfo *)0x0);
    fStack_4 = (this->fields).blastRadius;
    if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar5 = (this->fields).layerMask;
    pCVar6 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    position.y = voxelHit.point.x;
    position.x = in_stack_1;
    position.z = voxelHit.point.y;
    iVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                      (position,fStack_4,pCVar6,iVar5,(MethodInfo *)0x0);
    iStack_7 = iVar5;
    this_03 = (HashSet_1_System_UInt32_ *)func_?();
    pHStack_8 = this_03;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              ((HashSet_1_System_Int32_ *)this_03,
               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    uStack_9 = 0;
    if (0 < iVar5) {
      iStack_10 = 0x10;
      do {
        if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar6 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
        if (pCVar6 == (Collider__Array *)0x0) goto code_?;
        if (pCVar6->max_length <= uStack_9) goto code_?;
        pCStack_11 = *(Component **)((int)pCVar6->vector + iStack_10 + -0x10);
        if (pCStack_11 == (Component *)0x0) goto code_?;
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCStack_11,(MethodInfo *)0x0);
        this_04 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (pTVar12,(MethodInfo *)0x0);
        if (this_04 != (MVWorldObjectClient *)0x0) {
          if (this_03 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
          bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                  HashSet_1_System_UInt32__Contains
                            (this_03,(this_04->fields)._.id,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          if (bVar13 == 0) {
            this_05 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_04,(MethodInfo *)0x0);
            pIStack_14 = this_05;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              pOStack_15 = TypeInfo__UnityEngine__Object;
              func_?();
            }
            bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)this_05,(Object_1 *)0x0,(MethodInfo *)0x0);
            this_03 = pHStack_8;
            if (bVar13 != 0) {
              fStack_4 = (float)(this_04->fields)._.ownerActorNr;
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 == (MVNetworkGame *)0x0) ||
                 (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                 pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
              if (fStack_4 != (float)(pMVar16->fields)._._ActorNr_k__BackingField) {
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar2 == (MVNetworkGame *)0x0) ||
                   (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0)
                   , pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
                bVar13 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)pMVar16,this_04,(MethodInfo *)0x0);
                this_03 = pHStack_8;
                if (bVar13 != 0) goto code_?;
              }
              if (this_05 == (InteractionDataHandlerBase *)0x0) goto code_?;
              from.y = voxelHit.point.x;
              from.x = in_stack_1;
              from.z = voxelHit.point.y;
              InteractionDataHandlerBase::InteractionDataHandlerBase_GetClosestPoint
                        ((Vector3 *)&stack0xffffff34,this_05,from,(MethodInfo *)0x0);
              fVar17 = (float10)func_?();
              this_01 = (this->fields).damageFalloff;
              fStack_4 = (float)fVar17;
              if (this_01 == (AnimationCurve *)0x0) goto code_?;
              fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                         AnimationCurve_Evaluate
                                   (this_01,fStack_4 / (this->fields).blastRadius,(MethodInfo *)0x0)
              ;
              auStack_18._4_4_ = (this->fields).baseDamage.currentCryptoKey;
              auStack_18._8_4_ = (this->fields).baseDamage.hiddenValue;
              auStack_18._12_4_ = (this->fields).baseDamage.hiddenValueOld;
              auStack_18._16_4_ = (this->fields).baseDamage.fakeValue;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              }
              value.hiddenValue.b1 = auStack_18[8];
              value.hiddenValue.b2 = auStack_18[9];
              value.hiddenValue.b3 = auStack_18[10];
              value.hiddenValue.b4 = auStack_18[0xb];
              value.currentCryptoKey = auStack_18._4_4_;
              value.hiddenValueOld = (Byte__Array *)auStack_18._12_4_;
              value.fakeValue = (float)auStack_18._16_4_;
              value.inited = (this->fields).baseDamage.inited;
              value._17_3_ = *(undefined3 *)&(this->fields).baseDamage.field_0x11;
              fStack_19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
              fStack_19 = fStack_19 * fStack_4;
              if (fStack_19 < 0.0) {
                fVar20 = 0.0;
code_?:
                fStack_19 = fVar20;
              }
              else {
                fVar20 = _UNK_?;
                if (_UNK_? < fStack_19) goto code_?;
              }
              this_03 = pHStack_8;
              if (0.0 < fStack_19) {
                pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(pCStack_11,(MethodInfo *)0x0);
                if (pTVar12 == (Transform *)0x0) goto code_?;
                pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffff28,pTVar12,(MethodInfo *)0x0);
                uStack_22._0_4_ = pVVar21->x;
                uStack_22._4_4_ = pVVar21->y;
                fStack_23 = pVVar21->z;
                fStack_24 = fStack_23 - voxelHit.point.y;
                uStack_25 = CONCAT44((float)uStack_22._4_4_ - voxelHit.point.x,
                                     (float)(undefined4)uStack_22 - in_stack_1);
                fStack_26 = fStack_24;
                puVar27 = (undefined8 *)func_?();
                VStack_28.z = *(float *)(puVar27 + 1);
                VStack_28.y = (float)((ulonglong)*puVar27 >> 0x20);
                VStack_28.x = (float)*puVar27;
                VStack_28.y = VStack_28.y + _UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                          (&VStack_28,(MethodInfo *)0x0);
                fVar20 = (this->fields).baseImpulse;
                fStack_29 = VStack_28.x * fVar20 * fStack_4;
                fStack_30 = VStack_28.y * fVar20 * fStack_4;
                fStack_31 = VStack_28.z * fVar20 * fStack_4;
                iVar32 = (this_04->fields)._.ownerActorNr;
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar2 == (MVNetworkGame *)0x0) ||
                   (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0)
                   , pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
                uStack_33 = CONCAT31(uStack_33._1_3_,
                                     iVar32 == (pMVar16->fields)._._ActorNr_k__BackingField);
                impulse.y = fStack_30;
                impulse.x = fStack_29;
                impulse.z = fStack_31;
                pIVar34 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                                    ((InteractionData *)auStack_18,fStack_19,impulse,
                                     PlayerKilledByType__Enum_BazookaGun,(MethodInfo *)0x0);
                uVar35._0_4_ = (pIVar34->impulse).x;
                uVar35._4_4_ = (pIVar34->impulse).y;
                fVar20 = (pIVar34->impulse).z;
                uVar36._0_1_ = pIVar34->interactionType;
                uVar36._1_1_ = pIVar34->playerKilledByType;
                uVar36._2_2_ = *(undefined2 *)&pIVar34->field_0x12;
                uVar37 = uStack_33;
                func_?();
                iVar32 = func_?();
                if (iVar32 != 0) {
                  func_?(&stack0xffffff40);
                  pMVar38 = (this->fields)._._.owner;
                  if ((pMVar38 == (MVPickupOwner *)0x0) ||
                     (pMVar39 = (pMVar38->fields)._.worldObjectParent,
                     pMVar39 == (MVWorldObjectClient *)0x0)) goto code_?;
                  pIStack_14 = (InteractionDataHandlerBase *)(pMVar39->fields)._.ownerActorNr;
                  iVar32 = func_?();
                  if ((iVar32 == 0) || (iVar32 = func_?(), iVar32 == 0))
                  goto code_?;
                  func_?(0,TypeInfo__IBulletImpactVisualizer,iVar32,(int)uVar35,
                                  (int)((ulonglong)uVar35 >> 0x20),fVar20,uVar36,uVar37,puStack_40,
                                  pOStack_15,uStack_41,uStack_42,uStack_43,uStack_44,uStack_45,
                                  uStack_46,uStack_47,uStack_48,uStack_49,(int)uStack_50,
                                  (int)((ulonglong)uStack_50 >> 0x20),
                                  voxelHit.interactionFlags._4_4_);
                }
                this_03 = pHStack_8;
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                          ((HashSet_1_System_Int32_ *)pHStack_8,(this_04->fields)._.id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              }
            }
          }
        }
code_?:
        uStack_9 = uStack_9 + 1;
        iStack_10 = iStack_10 + 4;
      } while ((int)uStack_9 < iStack_7);
    }
    return;
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar51 = (code *)swi(3);
  (*pcVar51)();
  return;
}


/* Void OnHitMaxRangeLocal(Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitMaxRangeLocal
               (PickupItemBazooka *this,Ray lineOfFire,MethodInfo *method)

{
  fVar1 = (this->fields).rocketRange;
  pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if (pCVar2 != (Camera *)0x0) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                      (pCVar2,(MethodInfo *)0x0);
    if (fVar3 < fVar1) {
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar2 == (Camera *)0x0) goto code_?;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                        (pCVar2,(MethodInfo *)0x0);
      fVar1 = fVar1 * _UNK_?;
    }
    else {
      fVar1 = (this->fields).rocketRange;
    }
    voxelHit.interactionFlags._4_4_ = lineOfFire.m_Origin.x;
    voxelHit._0_68_ =
         ZEXT2068(CONCAT416((MethodInfo *)
                            ((uint)lineOfFire.m_Direction.z ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ),CONCAT412((uint)lineOfFire.m_Direction.y ^
                                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                        ,CONCAT48((uint)lineOfFire.m_Direction.x ^
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ,CONCAT44(lineOfFire.m_Origin.z +
                                                            lineOfFire.m_Direction.z * fVar1,
                                                            lineOfFire.m_Direction.x)))));
    auVar4 = lineOfFire._4_20_;
    lineOfFire_00.m_Direction.z =
         (float)((uint)lineOfFire.m_Direction.y ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    auVar5 = auVar4._0_12_;
    lineOfFire_00.m_Origin.x = (float)auVar5._0_4_;
    lineOfFire_00.m_Origin.y = (float)auVar5._4_4_;
    lineOfFire_00.m_Origin.z = (float)auVar5._8_4_;
    lineOfFire_00.m_Direction.x = (float)auVar4._12_4_;
    lineOfFire_00.m_Direction.y = (float)auVar4._16_4_;
    PickupItemBazooka_OnHitLocal
              (this,voxelHit,lineOfFire_00,
               (MethodInfo *)
               ((uint)lineOfFire.m_Direction.z ^
               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field));
    fStack6 = lineOfFire.m_Direction.y;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
      fStack6 = lineOfFire.m_Direction.y;
    }
    pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar7 != (PrefabPool *)0x0) {
      position.y = lineOfFire.m_Direction.x;
      position.x = lineOfFire.m_Origin.z;
      position.z = fStack6;
      SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                ((pPVar7->fields).particleExplosion,position,10.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnHitMaxRangeRemote(Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitMaxRangeRemote
               (PickupItemBazooka *this,Ray lineOfFire,MethodInfo *method)

{
  fVar1 = (this->fields).rocketRange;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    position.y = lineOfFire.m_Origin.y + lineOfFire.m_Direction.y * fVar1;
    position.x = lineOfFire.m_Origin.x + lineOfFire.m_Direction.x * fVar1;
    position.z = lineOfFire.m_Origin.z + lineOfFire.m_Direction.z * fVar1;
    SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
              ((pPVar2->fields).particleExplosion,position,10.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_ResetAmmo
               (PickupItemBazooka *this,MethodInfo *method)

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


/* PickupItemBazooka() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka__ctor
               (PickupItemBazooka *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,10,(MethodInfo *)0x0);
  iVar2 = pOVar1->hiddenValue;
  iVar3 = pOVar1->fakeValue;
  bVar4 = pOVar1->inited;
  uVar5 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar2;
  (this->fields).maxAmmo.fakeValue = iVar3;
  (this->fields).maxAmmo.inited = bVar4;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar5;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,75.0,(MethodInfo *)0x0);
  AVar7 = pOVar6->hiddenValue;
  pBVar8 = pOVar6->hiddenValueOld;
  fVar9 = pOVar6->fakeValue;
  bVar4 = pOVar6->inited;
  uVar5 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields).baseDamage.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields).baseDamage.hiddenValue = AVar7;
  (this->fields).baseDamage.hiddenValueOld = pBVar8;
  (this->fields).baseDamage.fakeValue = fVar9;
  (this->fields).baseDamage.inited = bVar4;
  *(undefined3 *)&(this->fields).baseDamage.field_0x11 = uVar5;
  func_?();
  (this->fields).blastRadius = 10.0;
  (this->fields).baseImpulse = 1500.0;
  (this->fields).rocketSpeed = 30.0;
  (this->fields).rocketRange = 200.0;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_get_IsAmmoDepleted
               (PickupItemBazooka *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_get_MaxAmmo
                  (PickupItemBazooka *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_get_Quantity
                  (PickupItemBazooka *this,MethodInfo *method)

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

