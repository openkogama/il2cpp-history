
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
  object = this;
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
code_?:
    pBStack_2 = (Bullet_OnHitDelegate__Class *)this;
    VStack_3.z = (float)&UNK_?;
    pBStack_4 = unaff_EDI;
    func_?();
code_?:
    VStack_3.z = (float)&UNK_?;
    pBStack_4 = unaff_EDI;
    pBStack_2 = unaff_ESI;
    func_?();
code_?:
    pBStack_2 = (Bullet_OnHitDelegate__Class *)this;
    VStack_3.z = (float)&UNK_?;
    pBStack_4 = unaff_EDI;
    func_?();
  }
  else {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_6,pTVar1,(MethodInfo *)0x0);
    pBStack_7 = Bullet::Bullet_CreateBullet
                          (PoolEnums__Enum_BazookaBullet,*pVVar5,(MethodInfo *)0x0);
    if (pBStack_7 == (Bullet *)0x0) goto code_?;
    pBStack_8 = (pBStack_7->fields).onHit;
    pDVar9 = (Delegate *)func_?(TypeInfo__Bullet__OnHitDelegate);
    pMVar10 = MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_;
    ppOVar11 = &(pDVar9->fields).m_target;
    (pDVar9->fields).method_ptr =
         MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_->virtualMethodPointer;
    (pDVar9->fields).method = pMVar10;
    *ppOVar11 = (Object *)this;
    func_?(ppOVar11,this);
    uVar12 = pMVar10->parameters_count;
    this = (PickupItemBazooka *)CONCAT13(uVar12,this._0_3_);
    (pDVar9->fields).method_code = pDVar9;
    cVar13 = func_?(pMVar10);
    if ((cVar13 == '\0') || (uVar12 != 2)) {
      (pDVar9->fields).method_code = (pDVar9->fields).m_target;
      puVar14 = (pDVar9->fields).method_ptr;
    }
    else {
      puVar14 = &UNK_?;
    }
    (pDVar9->fields).invoke_impl = puVar14;
    (pDVar9->fields).extra_arg = &UNK_?;
    pBVar15 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBStack_8,pDVar9,(MethodInfo *)0x0);
    pBVar16 = pBStack_7;
    pBVar17 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar15 == (Bullet_OnHitDelegate *)0x0) {
      (pBStack_7->fields).onHit = (Bullet_OnHitDelegate *)0x0;
code_?:
      VStack_6.x = (float)pBVar17;
      func_?();
      if (isLocal == 0) {
        VStack_6.x = (float)TypeInfo__System__Action<UnityEngine::Ray>;
        pAVar18 = (pBVar16->fields).onOutOfRange;
        pAVar19 = (Action_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)func_?();
        mscorlib.dll::System::Action`1[UnityEngine::UIElements::Internal::
        MultiColumnCollectionHeader+ViewState+ColumnState]::
        Action_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor
                  (pAVar19,(Object *)object,
                   MethodInfo__PickupItemBazooka__OnHitMaxRangeRemote_UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        unaff_EDI = (Bullet_OnHitDelegate__Class *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar18,(Delegate *)pAVar19,(MethodInfo *)0x0);
        unaff_ESI = (Bullet_OnHitDelegate__Class *)TypeInfo__System__Action<UnityEngine::Ray>;
        if (unaff_EDI == (Bullet_OnHitDelegate__Class *)0x0) {
          unaff_ESI = (Bullet_OnHitDelegate__Class *)&(pBStack_7->fields).onOutOfRange;
          *(Action_1_UnityEngine_Ray_ **)unaff_ESI = (Action_1_UnityEngine_Ray_ *)0x0;
          pBStack_2 = (Bullet_OnHitDelegate__Class *)0x0;
          goto code_?;
        }
        pBStack_2 = (Bullet_OnHitDelegate__Class *)TypeInfo__System__Action<UnityEngine::Ray>;
        VStack_3.z = (float)&UNK_?;
        pBStack_4 = unaff_EDI;
        pAVar18 = (Action_1_UnityEngine_Ray_ *)func_?();
        if (pAVar18 == (Action_1_UnityEngine_Ray_ *)0x0) goto code_?;
        unaff_ESI = (Bullet_OnHitDelegate__Class *)&(pBStack_7->fields).onOutOfRange;
        *(Action_1_UnityEngine_Ray_ **)unaff_ESI = pAVar18;
        pBStack_2 = (Bullet_OnHitDelegate__Class *)TypeInfo__System__Action<UnityEngine::Ray>;
        this = (PickupItemBazooka *)TypeInfo__System__Action<UnityEngine::Ray>;
        VStack_3.z = (float)&UNK_?;
        pBStack_4 = unaff_EDI;
        pBStack_2 = (Bullet_OnHitDelegate__Class *)func_?();
        if (pBStack_2 != (Bullet_OnHitDelegate__Class *)0x0) goto code_?;
        goto code_?;
      }
      pBStack_8 = (pBVar16->fields).onHitLocal;
      VStack_6.x = (float)TypeInfo__Bullet__OnHitDelegate;
      pDVar9 = (Delegate *)func_?();
      pMVar10 = MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_;
      ppOVar11 = &(pDVar9->fields).m_target;
      (pDVar9->fields).method_ptr =
           MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_->
           virtualMethodPointer;
      (pDVar9->fields).method = pMVar10;
      *ppOVar11 = (Object *)object;
      func_?(ppOVar11);
      uVar12 = pMVar10->parameters_count;
      this = (PickupItemBazooka *)CONCAT13(uVar12,this._0_3_);
      (pDVar9->fields).method_code = pDVar9;
      cVar13 = func_?(pMVar10);
      if ((cVar13 == '\0') || (uVar12 != 2)) {
        (pDVar9->fields).method_code = (pDVar9->fields).m_target;
        puVar14 = (pDVar9->fields).method_ptr;
      }
      else {
        puVar14 = &UNK_?;
      }
      (pDVar9->fields).invoke_impl = puVar14;
      (pDVar9->fields).extra_arg = &UNK_?;
      pBVar17 = (Bullet_OnHitDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pBStack_8,pDVar9,(MethodInfo *)0x0);
      if (pBVar17 == (Bullet_OnHitDelegate *)0x0) {
        pBVar15 = (Bullet_OnHitDelegate *)0x0;
        (pBStack_7->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
      }
      else {
        pBVar15 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar17->klass == TypeInfo__Bullet__OnHitDelegate) {
          pBVar15 = pBVar17;
        }
        pBVar20 = TypeInfo__Bullet__OnHitDelegate;
        if (pBVar15 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        (pBStack_7->fields).onHitLocal = pBVar15;
        pBVar15 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar17->klass == TypeInfo__Bullet__OnHitDelegate) {
          pBVar15 = pBVar17;
        }
        unaff_ESI = TypeInfo__Bullet__OnHitDelegate;
        if (pBVar15 == (Bullet_OnHitDelegate *)0x0) goto code_?;
      }
      VStack_6.x = (float)pBVar15;
      func_?();
      pAVar18 = (pBStack_7->fields).onOutOfRange;
      pAVar19 = (Action_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?(TypeInfo__System__Action<UnityEngine::Ray>);
      mscorlib.dll::System::Action`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      Action_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor
                (pAVar19,(Object *)object,
                 MethodInfo__PickupItemBazooka__OnHitMaxRangeLocal_UnityEngine__Ray_,
                 (MethodInfo *)0x0);
      unaff_EDI = (Bullet_OnHitDelegate__Class *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar18,(Delegate *)pAVar19,(MethodInfo *)0x0);
      unaff_ESI = (Bullet_OnHitDelegate__Class *)TypeInfo__System__Action<UnityEngine::Ray>;
      if (unaff_EDI == (Bullet_OnHitDelegate__Class *)0x0) {
        unaff_ESI = (Bullet_OnHitDelegate__Class *)&(pBStack_7->fields).onOutOfRange;
        *(Action_1_UnityEngine_Ray_ **)unaff_ESI = (Action_1_UnityEngine_Ray_ *)0x0;
        pBStack_2 = (Bullet_OnHitDelegate__Class *)0x0;
code_?:
        VStack_3.z = (float)&UNK_?;
        pBStack_4 = unaff_ESI;
        func_?();
        pMVar21 = (object->fields)._._.owner;
        if (pMVar21 != (MVPickupOwner *)0x0) {
          uVar22 = (pMVar21->fields).lookOrigin.x;
          uVar23 = (pMVar21->fields).lookOrigin.y;
          unaff_ESI = (Bullet_OnHitDelegate__Class *)(pMVar21->fields).lookOrigin.z;
          pBStack_2 = (Bullet_OnHitDelegate__Class *)uVar22;
          pBStack_8 = (Bullet_OnHitDelegate *)uVar23;
          pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                              (&VStack_3,pMVar21,(MethodInfo *)0x0);
          VStack_6.x = pVVar5->x;
          VStack_6.y = pVVar5->y;
          VStack_6.z = pVVar5->z;
          pBVar20 = pBStack_2;
          pBVar17 = pBStack_8;
          pBVar24 = unaff_ESI;
          puVar25 = (undefined8 *)func_?(&VStack_3,&VStack_6,0);
          uVar26 = *(undefined4 *)(puVar25 + 1);
          pMVar21 = (object->fields)._._.owner;
          uVar27 = (undefined4)*puVar25;
          uVar28 = (undefined4)((ulonglong)*puVar25 >> 0x20);
          if (pMVar21 != (MVPickupOwner *)0x0) {
            pBStack_8 = (Bullet_OnHitDelegate *)
                        MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                  (pMVar21,(object->fields).rocketSpeed,(MethodInfo *)0x0);
            this = (PickupItemBazooka *)(object->fields).rocketRange;
            pMVar21 = (object->fields)._._.owner;
            if (pMVar21 != (MVPickupOwner *)0x0) {
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar21->klass->vtable).get_IgnoreWOIDs.method)
                                      (pMVar21,pMVar21->klass[1]._0.image);
              lineOfFire.m_Direction.z = (float)uVar26;
              lineOfFire.m_Direction.y = (float)uVar28;
              lineOfFire.m_Origin.y = (float)pBVar17;
              lineOfFire.m_Origin.x = (float)pBVar20;
              lineOfFire.m_Origin.z = (float)pBVar24;
              lineOfFire.m_Direction.x = (float)uVar27;
              Bullet::Bullet_Fire(pBStack_7,(float)pBStack_8,(float)this,lineOfFire,ignoreWoIDs,
                                  (MethodInfo *)0x0);
              unaff_ESI = (Bullet_OnHitDelegate__Class *)
                          MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
              unaff_EDI = (Bullet_OnHitDelegate__Class *)(object->fields).aSource;
              if (isLocal == 0) {
                pTVar1 = (object->fields)._._.muzzlePoint;
                if ((pTVar1 != (Transform *)0x0) &&
                   (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position(&VStack_6,pTVar1,(MethodInfo *)0x0),
                   unaff_ESI != (Bullet_OnHitDelegate__Class *)0x0)) {
                  uVar29._0_4_ = pVVar5->x;
                  uVar29._4_4_ = pVVar5->y;
                  fVar30 = pVVar5->z;
code_?:
                  position.z = fVar30;
                  position.x = (float)uVar29;
                  position.y = SUB84(uVar29,4);
                  AudioManager::AudioManager_Play_2
                            ((AudioManager *)unaff_ESI,StringLiteral_rocket_fired,
                             (AudioSource *)unaff_EDI,position,(MethodInfo *)0x0);
                  iVar31 = (object->fields).currentAmmo.currentCryptoKey;
                  VStack_6.x = (float)(object->fields).currentAmmo.hiddenValue;
                  VStack_6.y = (float)(object->fields).currentAmmo.fakeValue;
                  VStack_6.z = *(float *)&(object->fields).currentAmmo.inited;
                  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                  }
                  value.hiddenValue = (int32_t)VStack_6.x;
                  value.currentCryptoKey = iVar31;
                  value.fakeValue = (int32_t)VStack_6.y;
                  value._12_4_ = VStack_6.z;
                  iVar31 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                  pOVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredInt::ObscuredInt_op_Implicit
                                      ((ObscuredInt *)&stack0xffffffd0,iVar31 + -1,(MethodInfo *)0x0
                                      );
                  iVar31 = pOVar32->hiddenValue;
                  iVar33 = pOVar32->fakeValue;
                  bVar34 = pOVar32->inited;
                  uVar35 = *(undefined3 *)&pOVar32->field_0xd;
                  (object->fields).currentAmmo.currentCryptoKey = pOVar32->currentCryptoKey;
                  (object->fields).currentAmmo.hiddenValue = iVar31;
                  (object->fields).currentAmmo.fakeValue = iVar33;
                  (object->fields).currentAmmo.inited = bVar34;
                  *(undefined3 *)&(object->fields).currentAmmo.field_0xd = uVar35;
                  return;
                }
              }
              else {
                pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar36 != (Camera *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar36,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_6,pTVar1,(MethodInfo *)0x0);
                  VStack_3.x = pVVar5->x;
                  VStack_3.y = pVVar5->y;
                  VStack_3.z = pVVar5->z;
                  pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  if ((pCVar36 != (Camera *)0x0) &&
                     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar36,(MethodInfo *)0x0),
                     pTVar1 != (Transform *)0x0)) {
                    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_forward(&VStack_6,pTVar1,(MethodInfo *)0x0);
                    uVar37 = pVVar5->x;
                    uVar38 = pVVar5->y;
                    pBStack_8 = (Bullet_OnHitDelegate *)pVVar5->z;
                    VStack_6.y = (float)uVar38 + VStack_3.y;
                    VStack_6.x = VStack_3.x + (float)uVar37;
                    fVar30 = (float)pBStack_8 + VStack_3.z;
                    uVar29 = VStack_6._0_8_;
                    VStack_6.z = fVar30;
                    pBStack_4 = (Bullet_OnHitDelegate__Class *)uVar37;
                    pBStack_2 = (Bullet_OnHitDelegate__Class *)uVar38;
                    if (unaff_ESI != (Bullet_OnHitDelegate__Class *)0x0) goto code_?;
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      pBStack_2 = (Bullet_OnHitDelegate__Class *)TypeInfo__System__Action<UnityEngine::Ray>;
      VStack_3.z = (float)&UNK_?;
      pBStack_4 = unaff_EDI;
      pAVar18 = (Action_1_UnityEngine_Ray_ *)func_?();
      if (pAVar18 == (Action_1_UnityEngine_Ray_ *)0x0) goto code_?;
      unaff_ESI = (Bullet_OnHitDelegate__Class *)&(pBStack_7->fields).onOutOfRange;
      *(Action_1_UnityEngine_Ray_ **)unaff_ESI = pAVar18;
      pBStack_2 = (Bullet_OnHitDelegate__Class *)TypeInfo__System__Action<UnityEngine::Ray>;
      this = (PickupItemBazooka *)TypeInfo__System__Action<UnityEngine::Ray>;
      VStack_3.z = (float)&UNK_?;
      pBStack_4 = unaff_EDI;
      pBStack_2 = (Bullet_OnHitDelegate__Class *)func_?();
      if (pBStack_2 != (Bullet_OnHitDelegate__Class *)0x0) goto code_?;
      goto code_?;
    }
    if (pBVar15->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar17 = pBVar15;
    }
    pBVar20 = TypeInfo__Bullet__OnHitDelegate;
    if (pBVar17 == (Bullet_OnHitDelegate *)0x0) goto code_?;
    (pBStack_7->fields).onHit = pBVar17;
    pBVar17 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar15->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar17 = pBVar15;
    }
    unaff_ESI = TypeInfo__Bullet__OnHitDelegate;
    if (pBVar17 != (Bullet_OnHitDelegate *)0x0) goto code_?;
  }
code_?:
  VStack_6.x = (float)unaff_ESI;
  func_?();
  pBVar20 = extraout_EDX;
code_?:
  VStack_6.x = (float)pBVar20;
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
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
  func_?(&stack0xffffff44,0,0x48);
  runtimeEvent = (RuntimeEvent *)
                 func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  worldPosition.y = voxelHit.point.x;
  worldPosition.x = in_stack_1;
  worldPosition.z = voxelHit.point.y;
  MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
            ((ExplosionEvent *)runtimeEvent,RuntimeEventType__Enum_Bazooka,worldPosition,
             voxelHit._8_12_,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar2 != (MVNetworkGame *)0x0) &&
      (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) &&
     (this_00 = (RuntimeEventManager *)(pWVar3->fields)._.runtimeEventManagerNetwork,
     this_00 != (RuntimeEventManager *)0x0)) {
    bVar4 = RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                      (this_00,(ExplosionEvent *)runtimeEvent,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendRuntimeEventOperation
                (this_02,runtimeEvent,(MethodInfo *)0x0);
    }
    fStack_5 = (this->fields).blastRadius;
    if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar6 = (this->fields).layerMask;
    pCVar7 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    position.y = voxelHit.point.x;
    position.x = in_stack_1;
    position.z = voxelHit.point.y;
    iVar6 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                       (position,fStack_5,pCVar7,iVar6,(MethodInfo *)0x0);
    iStack_8 = iVar6;
    this_03 = (HashSet_1_System_Int32_ *)func_?();
    pHStack_9 = this_03;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    uStack_10 = 0;
    if (0 < iVar6) {
      iStack_11 = 0x10;
      do {
        if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar7 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
        if (pCVar7 == (Collider__Array *)0x0) goto code_?;
        if (pCVar7->max_length <= uStack_10) goto code_?;
        pCStack_12 = *(Component **)((int)pCVar7->vector + iStack_11 + -0x10);
        if (pCStack_12 == (Component *)0x0) goto code_?;
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCStack_12,(MethodInfo *)0x0);
        this_04 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (pTVar13,(MethodInfo *)0x0);
        if (this_04 != (MVWorldObjectClient *)0x0) {
          if (this_03 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
          bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                  HashSet_1_System_Int32Enum__Contains
                            ((HashSet_1_System_Int32Enum_ *)this_03,(this_04->fields)._.id,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          if (bVar4 == 0) {
            this_05 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_04,(MethodInfo *)0x0);
            pIStack_14 = this_05;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              pOStack_15 = TypeInfo__UnityEngine__Object;
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)this_05,(Object_1 *)0x0,(MethodInfo *)0x0);
            this_03 = pHStack_9;
            if (bVar4 != 0) {
              fStack_5 = (float)(this_04->fields)._.ownerActorNr;
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 == (MVNetworkGame *)0x0) ||
                 (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                 pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
              if (fStack_5 != (float)(pMVar16->fields)._._ActorNr_k__BackingField) {
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar2 == (MVNetworkGame *)0x0) ||
                   (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0)
                   , pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
                bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)pMVar16,this_04,(MethodInfo *)0x0);
                this_03 = pHStack_9;
                if (bVar4 != 0) goto code_?;
              }
              if (this_05 == (InteractionDataHandlerBase *)0x0) goto code_?;
              from.y = voxelHit.point.x;
              from.x = in_stack_1;
              from.z = voxelHit.point.y;
              InteractionDataHandlerBase::InteractionDataHandlerBase_GetClosestPoint
                        ((Vector3 *)&stack0xffffff38,this_05,from,(MethodInfo *)0x0);
              fVar17 = (float10)func_?();
              this_01 = (this->fields).damageFalloff;
              fStack_5 = (float)fVar17;
              if (this_01 == (AnimationCurve *)0x0) goto code_?;
              fStack_18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                          AnimationCurve_Evaluate
                                    (this_01,fStack_5 / (this->fields).blastRadius,(MethodInfo *)0x0
                                    );
              auStack_19._4_4_ = (this->fields).baseDamage.currentCryptoKey;
              auStack_19._8_4_ = (this->fields).baseDamage.hiddenValue;
              auStack_19._12_4_ = (this->fields).baseDamage.hiddenValueOld;
              auStack_19._16_4_ = (this->fields).baseDamage.fakeValue;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              value.hiddenValue.b1 = auStack_19[8];
              value.hiddenValue.b2 = auStack_19[9];
              value.hiddenValue.b3 = auStack_19[10];
              value.hiddenValue.b4 = auStack_19[0xb];
              value.currentCryptoKey = auStack_19._4_4_;
              value.hiddenValueOld = (Byte__Array *)auStack_19._12_4_;
              value.fakeValue = (float)auStack_19._16_4_;
              value.inited = (this->fields).baseDamage.inited;
              value._17_3_ = *(undefined3 *)&(this->fields).baseDamage.field_0x11;
              fStack_5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
              fStack_5 = fStack_5 * fStack_18;
              this_03 = pHStack_9;
              if (0.0 <= fStack_5) {
                if (fStack_5 <= _UNK_?) {
                  if (fStack_5 <= 0.0) goto code_?;
                }
                else {
                  fStack_5 = _UNK_?;
                }
                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(pCStack_12,(MethodInfo *)0x0);
                if (pTVar13 == (Transform *)0x0) goto code_?;
                pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffff2c,pTVar13,(MethodInfo *)0x0);
                uStack_21._0_4_ = pVVar20->x;
                uStack_21._4_4_ = pVVar20->y;
                fStack_22 = pVVar20->z;
                fStack_23 = fStack_22 - voxelHit.point.y;
                uStack_24 = CONCAT44((float)uStack_21._4_4_ - voxelHit.point.x,
                                     (float)(undefined4)uStack_21 - in_stack_1);
                fStack_25 = fStack_23;
                puVar26 = (undefined8 *)func_?();
                VStack_27.z = *(float *)(puVar26 + 1);
                VStack_27.y = (float)((ulonglong)*puVar26 >> 0x20);
                VStack_27.x = (float)*puVar26;
                VStack_27.y = VStack_27.y + _UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                          (&VStack_27,(MethodInfo *)0x0);
                fVar28 = (this->fields).baseImpulse;
                fStack_29 = VStack_27.x * fVar28 * fStack_18;
                fStack_30 = VStack_27.y * fVar28 * fStack_18;
                fStack_31 = VStack_27.z * fVar28 * fStack_18;
                pCStack_12 = (Component *)(this_04->fields)._.ownerActorNr;
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar2 == (MVNetworkGame *)0x0) ||
                   (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0)
                   , pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
                pCVar32 = (Component *)(pMVar16->fields)._._ActorNr_k__BackingField;
                pMVar33 = (this->fields)._._.owner;
                impulse.y = fStack_30;
                impulse.x = fStack_29;
                impulse.z = fStack_31;
                pIVar34 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                                    ((InteractionData *)auStack_19,fStack_5,impulse,
                                     PlayerKilledByType__Enum_BazookaGun,(MethodInfo *)0x0);
                fVar28 = pIVar34->damage;
                uVar35._0_4_ = (pIVar34->impulse).x;
                uVar35._4_4_ = (pIVar34->impulse).y;
                fVar36 = (pIVar34->impulse).z;
                uVar37._0_1_ = pIVar34->interactionType;
                uVar37._1_1_ = pIVar34->playerKilledByType;
                uVar37._2_2_ = *(undefined2 *)&pIVar34->field_0x12;
                uVar38 = (uint)(pCStack_12 == pCVar32);
                func_?();
                iVar39 = func_?();
                if (iVar39 != 0) {
                  func_?();
                  pMVar40 = (this->fields)._._.owner;
                  if ((pMVar40 == (MVPickupOwner *)0x0) ||
                     (pMVar41 = (pMVar40->fields)._.worldObjectParent,
                     pMVar41 == (MVWorldObjectClient *)0x0)) goto code_?;
                  pIStack_14 = (InteractionDataHandlerBase *)(pMVar41->fields)._.ownerActorNr;
                  iVar39 = func_?();
                  if ((iVar39 == 0) || (iVar39 = func_?(), iVar39 == 0))
                  goto code_?;
                  func_?(0,TypeInfo__IBulletImpactVisualizer,iVar39,pIStack_14,0,pMVar33,
                                  fVar28,(int)uVar35,(int)((ulonglong)uVar35 >> 0x20),fVar36,uVar37,
                                  uVar38,puStack_42,pOStack_15,uStack_43,uStack_44,uStack_45,
                                  uStack_46);
                }
                this_03 = pHStack_9;
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                          (pHStack_9,(this_04->fields)._.id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              }
            }
          }
        }
code_?:
        uStack_10 = uStack_10 + 1;
        iStack_11 = iStack_11 + 4;
      } while ((int)uStack_10 < iStack_8);
    }
    return;
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar47 = (code *)swi(3);
  (*pcVar47)();
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
    fStack_4 = lineOfFire.m_Origin.y + lineOfFire.m_Direction.y * fVar1;
    fVar3 = lineOfFire.m_Origin.z + lineOfFire.m_Direction.z * fVar1;
    fStack_5 = lineOfFire.m_Origin.x + lineOfFire.m_Direction.x * fVar1;
    voxelHit.interactionFlags._4_4_ = lineOfFire.m_Origin.x;
    voxelHit._0_68_ =
         ZEXT2068(CONCAT416((uint)lineOfFire.m_Direction.z ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ,CONCAT412((MethodInfo *)
                                       ((uint)lineOfFire.m_Direction.y ^
                                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                       ),CONCAT48((uint)lineOfFire.m_Direction.x ^
                                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                                  ,CONCAT44(fVar3,fStack_4)))));
    auVar6 = lineOfFire._4_20_;
    lineOfFire_00.m_Direction.z =
         (float)((uint)lineOfFire.m_Direction.x ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    auVar7 = auVar6._0_12_;
    lineOfFire_00.m_Origin.x = (float)auVar7._0_4_;
    lineOfFire_00.m_Origin.y = (float)auVar7._4_4_;
    lineOfFire_00.m_Origin.z = (float)auVar7._8_4_;
    lineOfFire_00.m_Direction.x = (float)auVar6._12_4_;
    lineOfFire_00.m_Direction.y = (float)auVar6._16_4_;
    PickupItemBazooka_OnHitLocal
              (this,voxelHit,lineOfFire_00,
               (MethodInfo *)
               ((uint)lineOfFire.m_Direction.y ^
               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field));
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar8 != (PrefabPool *)0x0) {
      position.y = fStack_4;
      position.x = fStack_5;
      position.z = fVar3;
      SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                ((pPVar8->fields).particleExplosion,position,10.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
                    (this,(this->klass->vtable).get_CanUnequip.methodPtr);
  return cVar5 == '\0';
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

