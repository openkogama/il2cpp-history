
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
                        (&VStack_3,pTVar1,(MethodInfo *)0x0);
    this_00 = Bullet::Bullet_CreateBullet(PoolEnums__Enum_BazookaBullet,*pVVar2,(MethodInfo *)0x0);
    if (this_00 == (Bullet *)0x0) goto code_?;
    pBStack_4 = (this_00->fields).onHit;
    pDVar5 = (Delegate *)func_?(TypeInfo__Bullet__OnHitDelegate);
    pMVar6 = MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_;
    (pDVar5->fields).method_ptr =
         MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_->virtualMethodPointer;
    (pDVar5->fields).method = pMVar6;
    (pDVar5->fields).m_target = (Object *)this;
    func_?(&(pDVar5->fields).m_target,this);
    uStack_7 = pMVar6->parameters_count;
    (pDVar5->fields).method_code = pDVar5;
    cVar8 = func_?(pMVar6);
    if ((cVar8 == '\0') || (uStack_7 != 2)) {
      (pDVar5->fields).method_code = (pDVar5->fields).m_target;
      puVar9 = (pDVar5->fields).method_ptr;
    }
    else {
      puVar9 = &UNK_?;
    }
    (pDVar5->fields).invoke_impl = puVar9;
    (pDVar5->fields).extra_arg = &UNK_?;
    pBVar10 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBStack_4,pDVar5,(MethodInfo *)0x0);
    VStack_11.x = 0.0;
    if (pBVar10 == (Bullet_OnHitDelegate *)0x0) {
      (this_00->fields).onHit = (Bullet_OnHitDelegate *)0x0;
    }
    else {
      if (pBVar10->klass == TypeInfo__Bullet__OnHitDelegate) {
        VStack_11.x = (float)pBVar10;
      }
      pBVar12 = TypeInfo__Bullet__OnHitDelegate;
      if ((Bullet_OnHitDelegate *)VStack_11.x == (Bullet_OnHitDelegate *)0x0) goto code_?;
      (this_00->fields).onHit = (Bullet_OnHitDelegate *)VStack_11.x;
      VStack_11.x = (float)(Bullet_OnHitDelegate *)0x0;
      if (pBVar10->klass == TypeInfo__Bullet__OnHitDelegate) {
        VStack_11.x = (float)pBVar10;
      }
      pBVar12 = TypeInfo__Bullet__OnHitDelegate;
      if ((Bullet_OnHitDelegate *)VStack_11.x == (Bullet_OnHitDelegate *)0x0) goto code_?;
    }
    func_?();
    if (isLocal != 0) {
      pBStack_4 = (this_00->fields).onHitLocal;
      VStack_11.x = (float)TypeInfo__Bullet__OnHitDelegate;
      pDVar5 = (Delegate *)func_?();
      pMVar6 = MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_;
      (pDVar5->fields).method_ptr =
           MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_->
           virtualMethodPointer;
      (pDVar5->fields).method = pMVar6;
      (pDVar5->fields).m_target = (Object *)this;
      func_?(&(pDVar5->fields).m_target);
      uStack_7 = pMVar6->parameters_count;
      (pDVar5->fields).method_code = pDVar5;
      cVar8 = func_?(pMVar6);
      if ((cVar8 == '\0') || (uStack_7 != 2)) {
        (pDVar5->fields).method_code = (pDVar5->fields).m_target;
        puVar9 = (pDVar5->fields).method_ptr;
      }
      else {
        puVar9 = &UNK_?;
      }
      (pDVar5->fields).invoke_impl = puVar9;
      (pDVar5->fields).extra_arg = &UNK_?;
      pAVar13 = (Action_1_UnityEngine_Ray___Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pBStack_4,pDVar5,(MethodInfo *)0x0);
      VStack_11.x = 0.0;
      if (pAVar13 == (Action_1_UnityEngine_Ray___Class *)0x0) {
        (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
      }
      else {
        if ((Bullet_OnHitDelegate__Class *)(pAVar13->_0).image == TypeInfo__Bullet__OnHitDelegate) {
          VStack_11.x = (float)pAVar13;
        }
        pBVar12 = TypeInfo__Bullet__OnHitDelegate;
        if ((Action_1_UnityEngine_Ray___Class *)VStack_11.x ==
            (Action_1_UnityEngine_Ray___Class *)0x0) goto code_?;
        (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)VStack_11.x;
        VStack_11.x = (float)(Action_1_UnityEngine_Ray___Class *)0x0;
        if ((Bullet_OnHitDelegate__Class *)(pAVar13->_0).image == TypeInfo__Bullet__OnHitDelegate) {
          VStack_11.x = (float)pAVar13;
        }
        pBVar12 = TypeInfo__Bullet__OnHitDelegate;
        if ((Action_1_UnityEngine_Ray___Class *)VStack_11.x ==
            (Action_1_UnityEngine_Ray___Class *)0x0) goto code_?;
      }
      func_?();
      pAVar14 = (this_00->fields).onOutOfRange;
      pAVar15 = (Action_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Ray>);
      mscorlib.dll::System::Action`1[UnityEngine::UIElements::UIR::UIRenderDevice+AllocToFree]::
      Action_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree___ctor
                (pAVar15,(Object *)this,
                 MethodInfo__PickupItemBazooka__OnHitMaxRangeLocal_UnityEngine__Ray_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar14,(Delegate *)pAVar15,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Action<UnityEngine::Ray>;
      if (unaff_ESI != (Delegate *)0x0) {
        pAStack_16 = TypeInfo__System__Action<UnityEngine::Ray>;
        VStack_3.z = (float)&UNK_?;
        pDStack_17 = unaff_ESI;
        pAVar14 = (Action_1_UnityEngine_Ray_ *)func_?();
        if (pAVar14 != (Action_1_UnityEngine_Ray_ *)0x0) {
          (this_00->fields).onOutOfRange = pAVar14;
          unaff_EDI = TypeInfo__System__Action<UnityEngine::Ray>;
          pAStack_16 = TypeInfo__System__Action<UnityEngine::Ray>;
          VStack_3.z = (float)&UNK_?;
          pDStack_17 = unaff_ESI;
          pAStack_16 = (Action_1_UnityEngine_Ray___Class *)func_?();
          goto joined_?;
        }
        goto code_?;
      }
      (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
      pAStack_16 = (Action_1_UnityEngine_Ray___Class *)0x0;
code_?:
      pDStack_17 = (Delegate *)&(this_00->fields).onOutOfRange;
      VStack_3.z = (float)&UNK_?;
      func_?();
      pMVar18 = (this->fields)._._.owner;
      unaff_ESI = (Delegate *)0x0;
      unaff_EDI = (Action_1_UnityEngine_Ray___Class *)this;
      if (pMVar18 != (MVPickupOwner *)0x0) {
        uVar19 = (pMVar18->fields).lookOrigin.x;
        uVar20 = (pMVar18->fields).lookOrigin.y;
        unaff_ESI = (Delegate *)(pMVar18->fields).lookOrigin.z;
        pAStack_16 = (Action_1_UnityEngine_Ray___Class *)uVar19;
        pBStack_4 = (Bullet_OnHitDelegate *)uVar20;
        pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            (&VStack_11,(this->fields)._._.owner,(MethodInfo *)0x0);
        VStack_3.x = pVVar2->x;
        VStack_3.y = pVVar2->y;
        VStack_3.z = pVVar2->z;
        pAVar13 = pAStack_16;
        pBVar10 = pBStack_4;
        pDVar5 = unaff_ESI;
        puVar21 = (undefined8 *)func_?(&VStack_11,&VStack_3,0);
        uVar22 = *(undefined4 *)(puVar21 + 1);
        pMVar18 = (this->fields)._._.owner;
        uVar23 = (undefined4)*puVar21;
        uVar24 = (undefined4)((ulonglong)*puVar21 >> 0x20);
        if (pMVar18 != (MVPickupOwner *)0x0) {
          pBStack_4 = (Bullet_OnHitDelegate *)
                      MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                (pMVar18,(this->fields).rocketSpeed,(MethodInfo *)0x0);
          range = (this->fields).rocketRange;
          pMVar18 = (this->fields)._._.owner;
          if (pMVar18 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar18->klass->vtable).get_IgnoreWOIDs.method)
                                    (pMVar18,pMVar18->klass[1]._0.image);
            lineOfFire.m_Direction.z = (float)uVar22;
            lineOfFire.m_Direction.y = (float)uVar24;
            lineOfFire.m_Origin.y = (float)pBVar10;
            lineOfFire.m_Origin.x = (float)pAVar13;
            lineOfFire.m_Origin.z = (float)pDVar5;
            lineOfFire.m_Direction.x = (float)uVar23;
            Bullet::Bullet_Fire(this_00,(float)pBStack_4,range,lineOfFire,ignoreWoIDs,
                                (MethodInfo *)0x0);
            unaff_ESI = (Delegate *)
                        MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                  ((MethodInfo *)0x0);
            audioSource = (this->fields).aSource;
            if (isLocal == 0) {
              pTVar1 = (this->fields)._._.muzzlePoint;
              if ((pTVar1 != (Transform *)0x0) &&
                 (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_11,pTVar1,(MethodInfo *)0x0),
                 unaff_ESI != (Delegate *)0x0)) {
                uVar25._0_4_ = pVVar2->x;
                uVar25._4_4_ = pVVar2->y;
                puVar9 = (undefined *)pVVar2->z;
code_?:
                position.z = (float)puVar9;
                position.x = (float)uVar25;
                position.y = SUB84(uVar25,4);
                AudioManager::AudioManager_Play_2
                          ((AudioManager *)unaff_ESI,StringLiteral_rocket_fired,audioSource,position
                           ,(MethodInfo *)0x0);
                iVar26 = (this->fields).currentAmmo.currentCryptoKey;
                VStack_11.x = (float)(this->fields).currentAmmo.hiddenValue;
                VStack_11.y = (float)(this->fields).currentAmmo.fakeValue;
                VStack_11.z = *(float *)&(this->fields).currentAmmo.inited;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                }
                value.hiddenValue = (int32_t)VStack_11.x;
                value.currentCryptoKey = iVar26;
                value.fakeValue = (int32_t)VStack_11.y;
                value._12_4_ = VStack_11.z;
                iVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                pOVar27 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Implicit
                                    ((ObscuredInt *)&stack0xffffffd0,iVar26 + -1,(MethodInfo *)0x0);
                iVar26 = pOVar27->hiddenValue;
                iVar28 = pOVar27->fakeValue;
                bVar29 = pOVar27->inited;
                uVar30 = *(undefined3 *)&pOVar27->field_0xd;
                (this->fields).currentAmmo.currentCryptoKey = pOVar27->currentCryptoKey;
                (this->fields).currentAmmo.hiddenValue = iVar26;
                (this->fields).currentAmmo.fakeValue = iVar28;
                (this->fields).currentAmmo.inited = bVar29;
                *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar30;
                return;
              }
            }
            else {
              pCVar31 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                  ((MethodInfo *)0x0);
              if ((pCVar31 != (Camera *)0x0) &&
                 (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar31,(MethodInfo *)0x0),
                 pTVar1 != (Transform *)0x0)) {
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_11,pTVar1,(MethodInfo *)0x0);
                VStack_3.x = pVVar2->x;
                VStack_3.y = pVVar2->y;
                VStack_3.z = pVVar2->z;
                pCVar31 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar31 != (Camera *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar31,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward(&VStack_11,pTVar1,(MethodInfo *)0x0);
                  uVar32 = pVVar2->x;
                  uVar33 = pVVar2->y;
                  pBStack_4 = (Bullet_OnHitDelegate *)pVVar2->z;
                  puVar9 = (undefined *)((float)pBStack_4 + VStack_3.z);
                  VStack_3.y = (float)uVar33 + VStack_3.y;
                  VStack_3.x = (float)uVar32 + VStack_3.x;
                  uVar25 = VStack_3._0_8_;
                  VStack_3.z = (float)puVar9;
                  pDStack_17 = (Delegate *)uVar32;
                  pAStack_16 = (Action_1_UnityEngine_Ray___Class *)uVar33;
                  if (unaff_ESI != (Delegate *)0x0) goto code_?;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    VStack_11.x = (float)TypeInfo__System__Action<UnityEngine::Ray>;
    pAVar14 = (this_00->fields).onOutOfRange;
    pAVar15 = (Action_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree_ *)func_?();
    mscorlib.dll::System::Action`1[UnityEngine::UIElements::UIR::UIRenderDevice+AllocToFree]::
    Action_1_UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree___ctor
              (pAVar15,(Object *)this,
               MethodInfo__PickupItemBazooka__OnHitMaxRangeRemote_UnityEngine__Ray_,
               (MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar14,(Delegate *)pAVar15,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<UnityEngine::Ray>;
    if (unaff_ESI == (Delegate *)0x0) {
      (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
      pAStack_16 = (Action_1_UnityEngine_Ray___Class *)0x0;
      goto code_?;
    }
    pAStack_16 = TypeInfo__System__Action<UnityEngine::Ray>;
    VStack_3.z = (float)&UNK_?;
    pDStack_17 = unaff_ESI;
    pAVar14 = (Action_1_UnityEngine_Ray_ *)func_?();
    if (pAVar14 != (Action_1_UnityEngine_Ray_ *)0x0) {
      (this_00->fields).onOutOfRange = pAVar14;
      unaff_EDI = TypeInfo__System__Action<UnityEngine::Ray>;
      pAStack_16 = TypeInfo__System__Action<UnityEngine::Ray>;
      VStack_3.z = (float)&UNK_?;
      pDStack_17 = unaff_ESI;
      pAStack_16 = (Action_1_UnityEngine_Ray___Class *)func_?();
joined_?:
      if (pAStack_16 != (Action_1_UnityEngine_Ray___Class *)0x0) goto code_?;
    }
  }
code_?:
  VStack_3.z = (float)&UNK_?;
  pDStack_17 = unaff_ESI;
  pAStack_16 = unaff_EDI;
  func_?();
  pBVar12 = extraout_EDX;
code_?:
  VStack_11.x = (float)pBVar12;
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
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
              fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                         AnimationCurve_Evaluate
                                   (this_01,fStack_5 / (this->fields).blastRadius,(MethodInfo *)0x0)
              ;
              auStack_18._4_4_ = (this->fields).baseDamage.currentCryptoKey;
              auStack_18._8_4_ = (this->fields).baseDamage.hiddenValue;
              auStack_18._12_4_ = (this->fields).baseDamage.hiddenValueOld;
              auStack_18._16_4_ = (this->fields).baseDamage.fakeValue;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
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
              fStack_19 = fStack_19 * fStack_5;
              if (fStack_19 < 0.0) {
                fVar20 = 0.0;
code_?:
                fStack_19 = fVar20;
              }
              else {
                fVar20 = _UNK_?;
                if (_UNK_? < fStack_19) goto code_?;
              }
              this_03 = pHStack_9;
              if (0.0 < fStack_19) {
                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(pCStack_12,(MethodInfo *)0x0);
                if (pTVar13 == (Transform *)0x0) goto code_?;
                pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffff2c,pTVar13,(MethodInfo *)0x0);
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
                fStack_29 = VStack_28.x * fVar20 * fStack_5;
                fStack_30 = VStack_28.y * fVar20 * fStack_5;
                fStack_31 = VStack_28.z * fVar20 * fStack_5;
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
                                    ((InteractionData *)auStack_18,fStack_19,impulse,
                                     PlayerKilledByType__Enum_BazookaGun,(MethodInfo *)0x0);
                fVar20 = pIVar34->damage;
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
                                  fVar20,(int)uVar35,(int)((ulonglong)uVar35 >> 0x20),fVar36,uVar37,
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

