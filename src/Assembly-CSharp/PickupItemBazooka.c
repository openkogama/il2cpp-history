
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_Awake
               (PickupItemBazooka *this,MethodInfo *method)

{
  (*(this->klass->vtable).ResetAmmo.methodPtr)(this,(this->klass->vtable).ResetAmmo.method);
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
  puVar1 = (undefined *)0x0;
  pTVar2 = (this->fields)._._.muzzlePoint;
  if (pTVar2 == (Transform *)0x0) {
code_?:
    func_?();
  }
  else {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
    this_00 = Bullet::Bullet_CreateBullet(PoolEnums__Enum_BazookaBullet,*pVVar3,(MethodInfo *)0x0);
    pBVar5 = TypeInfo__Bullet__OnHitDelegate;
    if (this_00 == (Bullet *)0x0) goto code_?;
    pBVar6 = (this_00->fields).onHit;
    pBVar7 = (BulletThrowingStar_OnHitDelegate *)func_?();
    if (pBVar7 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar7,(Object *)this,
               MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_,(MethodInfo *)0x0);
    pBVar6 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar6,(Delegate *)pBVar7,(MethodInfo *)0x0);
    if (pBVar6 == (Bullet_OnHitDelegate *)0x0) {
      (this_00->fields).onHit = (Bullet_OnHitDelegate *)0x0;
    }
    else {
      pBVar8 = (Bullet_OnHitDelegate *)0x0;
      if (pBVar6->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar8 = pBVar6;
      }
      if (pBVar8 == (Bullet_OnHitDelegate *)0x0) goto code_?;
      (this_00->fields).onHit = pBVar8;
      pBVar8 = (Bullet_OnHitDelegate *)0x0;
      if (pBVar6->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar8 = pBVar6;
      }
      if (pBVar8 == (Bullet_OnHitDelegate *)0x0) goto code_?;
    }
    func_?();
    if (isLocal != 0) {
      pBVar6 = (this_00->fields).onHitLocal;
      pBVar7 = (BulletThrowingStar_OnHitDelegate *)func_?();
      if (pBVar7 != (BulletThrowingStar_OnHitDelegate *)0x0) {
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar7,(Object *)this,
                   MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar6 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar6,(Delegate *)pBVar7,(MethodInfo *)0x0);
        if (pBVar6 == (Bullet_OnHitDelegate *)0x0) {
          (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          pBVar8 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar6->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar8 = pBVar6;
          }
          if (pBVar8 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          (this_00->fields).onHitLocal = pBVar8;
          pBVar8 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar6->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar8 = pBVar6;
          }
          if (pBVar8 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        }
        func_?();
        pAVar9 = (this_00->fields).onOutOfRange;
        puVar1 = &UNK_?;
        pAVar10 = (Action_1_SpawnRolesSkillDataManager_SkillData_ *)func_?();
        if (pAVar10 != (Action_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
          mscorlib.dll::System::Action`1[SpawnRolesSkillDataManager+SkillData]::
          Action_1_SpawnRolesSkillDataManager_SkillData___ctor
                    (pAVar10,(Object *)this,
                     MethodInfo__PickupItemBazooka__OnHitMaxRangeLocal_UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar9,(Delegate *)pAVar10,(MethodInfo *)0x0);
          if (pDVar11 != (Delegate *)0x0) {
            pAVar9 = (Action_1_UnityEngine_Ray_ *)func_?();
            if (pAVar9 != (Action_1_UnityEngine_Ray_ *)0x0) {
              (this_00->fields).onOutOfRange = pAVar9;
              fVar12 = (float)func_?();
              goto joined_?;
            }
            goto code_?;
          }
          (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
          fVar12 = 0.0;
          goto code_?;
        }
      }
      goto code_?;
    }
    pAVar9 = (this_00->fields).onOutOfRange;
    pAVar10 = (Action_1_SpawnRolesSkillDataManager_SkillData_ *)func_?();
    if (pAVar10 == (Action_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[SpawnRolesSkillDataManager+SkillData]::
    Action_1_SpawnRolesSkillDataManager_SkillData___ctor
              (pAVar10,(Object *)this,
               MethodInfo__PickupItemBazooka__OnHitMaxRangeRemote_UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar9,(Delegate *)pAVar10,(MethodInfo *)0x0);
    if (pDVar11 == (Delegate *)0x0) {
      (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
      fVar12 = 0.0;
code_?:
      ppAVar13 = &(this_00->fields).onOutOfRange;
      puVar14 = &UNK_?;
      func_?();
      pMVar15 = (this->fields)._._.owner;
      if (pMVar15 != (MVPickupOwner *)0x0) {
        uVar16 = (pMVar15->fields).lookOrigin.x;
        uVar17 = (pMVar15->fields).lookOrigin.y;
        fVar18 = (pMVar15->fields).lookOrigin.z;
        fStack_19 = (float)uVar16;
        fStack_20 = (float)uVar17;
        pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)(auStack_4 + 4),(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        origin.y = fStack_20;
        origin.x = fStack_19;
        origin.z = fVar18;
        UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                  ((Ray *)&stack0xffffffbc,origin,*pVVar3,(MethodInfo *)0x0);
        pMVar15 = (this->fields)._._.owner;
        if (pMVar15 != (MVPickupOwner *)0x0) {
          fStack_20 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                               (pMVar15,(this->fields).rocketSpeed,(MethodInfo *)0x0);
          fVar18 = (this->fields).rocketRange;
          pMVar15 = (this->fields)._._.owner;
          pBStack_21 = pBVar5;
          fStack_22 = 0.0;
          auStack_4._0_4_ = puVar1;
          auStack_4._4_4_ = puVar14;
          ppAStack_23 = ppAVar13;
          fStack_24 = fVar12;
          if (pMVar15 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(pMVar15->klass->vtable).get_IgnoreWOIDs.methodPtr)
                                    (pMVar15,(pMVar15->klass->vtable).get_IgnoreWOIDs.method);
            lineOfFire.m_Direction.z = fStack_22;
            lineOfFire.m_Direction.y = (float)pBStack_21;
            lineOfFire.m_Origin.y = (float)auStack_4._4_4_;
            lineOfFire.m_Origin.x = (float)auStack_4._0_4_;
            lineOfFire.m_Origin.z = (float)ppAStack_23;
            lineOfFire.m_Direction.x = fStack_24;
            Bullet::Bullet_Fire(this_00,fStack_20,fVar18,lineOfFire,ignoreWoIDs,(MethodInfo *)0x0);
            this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
            ;
            audioSource = (this->fields).aSource;
            if (isLocal == 0) {
              pTVar2 = (this->fields)._._.muzzlePoint;
              if ((pTVar2 != (Transform *)0x0) &&
                 (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0),
                 this_01 != (AudioManager *)0x0)) {
                uVar25._0_4_ = pVVar3->x;
                uVar25._4_4_ = pVVar3->y;
                fVar12 = pVVar3->z;
code_?:
                position.z = fVar12;
                position.x = (float)(int)uVar25;
                position.y = (float)(int)((ulonglong)uVar25 >> 0x20);
                AudioManager::AudioManager_Play_2
                          (this_01,StringLiteral_rocket_fired,audioSource,position,(MethodInfo *)0x0
                          );
                auStack_4._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
                auStack_4._4_4_ = (this->fields).currentAmmo.hiddenValue;
                ppAStack_23 = (Action_1_UnityEngine_Ray_ **)(this->fields).currentAmmo.fakeValue;
                fStack_24._0_1_ = (this->fields).currentAmmo.inited;
                fStack_24._1_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                value.hiddenValue = auStack_4._4_4_;
                value.currentCryptoKey = auStack_4._0_4_;
                value.fakeValue = (int32_t)ppAStack_23;
                value._12_4_ = fStack_24;
                iVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                pOVar27 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Implicit
                                    ((ObscuredInt *)auStack_4,iVar26 + -1,(MethodInfo *)0x0);
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
                 (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar31,(MethodInfo *)0x0),
                 pTVar2 != (Transform *)0x0)) {
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
                uVar32 = pVVar3->x;
                uVar33 = pVVar3->y;
                fStack_20 = pVVar3->z;
                fStack_34 = (float)uVar32;
                fStack_19 = (float)uVar33;
                pCVar31 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar31 != (Camera *)0x0) &&
                   (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar31,(MethodInfo *)0x0),
                   pTVar2 != (Transform *)0x0)) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_forward
                                      ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
                  uVar35 = pVVar3->x;
                  uVar36 = pVVar3->y;
                  fStack_22 = pVVar3->z;
                  auStack_4._4_4_ = (float)uVar35 + fStack_34;
                  ppAStack_23 = (Action_1_UnityEngine_Ray_ **)(fStack_19 + (float)uVar36);
                  fVar12 = fStack_22 + fStack_20;
                  fStack_24 = fVar12;
                  fStack_37 = (float)uVar35;
                  pBStack_21 = (Bullet_OnHitDelegate__Class *)uVar36;
                  if (this_01 != (AudioManager *)0x0) {
                    uVar25 = CONCAT44(ppAStack_23,auStack_4._4_4_);
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
    pAVar9 = (Action_1_UnityEngine_Ray_ *)func_?();
    if (pAVar9 != (Action_1_UnityEngine_Ray_ *)0x0) {
      (this_00->fields).onOutOfRange = pAVar9;
      fVar12 = (float)func_?();
joined_?:
      if (fVar12 != 0.0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff44,0,0x48);
  runtimeEvent = (RuntimeEvent *)
                 func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  if (runtimeEvent != (RuntimeEvent *)0x0) {
    worldPosition.y = voxelHit.point.x;
    worldPosition.x = in_stack_1;
    worldPosition.z = voxelHit.point.y;
    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
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
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendRuntimeEventOperation
                  (this_02,runtimeEvent,(MethodInfo *)0x0);
      }
      fStack_5 = (this->fields).blastRadius;
      if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      position.y = voxelHit.point.x;
      position.x = in_stack_1;
      position.z = voxelHit.point.y;
      iVar6 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                         (position,fStack_5,
                          TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                          (this->fields).layerMask,(MethodInfo *)0x0);
      iStack_7 = iVar6;
      this_03 = (HashSet_1_UnityEngine_Vector3_ *)func_?();
      pHStack_8 = this_03;
      if (this_03 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3___ctor
                  (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        uStack_9 = 0;
        if (0 < iVar6) {
          iStack_10 = 0x10;
          do {
            if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pCVar11 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
            if (pCVar11 == (Collider__Array *)0x0) goto code_?;
            if (pCVar11->max_length <= uStack_9) goto code_?;
            pCStack_12 = *(Component **)((int)pCVar11->vector + iStack_10 + -0x10);
            if (pCStack_12 == (Component *)0x0) goto code_?;
            pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCStack_12,(MethodInfo *)0x0);
            this_04 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                (pTVar13,(MethodInfo *)0x0);
            if ((this_04 != (MVWorldObjectClient *)0x0) &&
               (bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                        HashSet_1_System_Int32__Contains
                                  ((HashSet_1_System_Int32_ *)this_03,(this_04->fields)._.id,
                                   MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                  ), bVar4 == 0)) {
              this_05 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                  (this_04,(MethodInfo *)0x0);
              pIStack_14 = this_05;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                pOStack_15 = TypeInfo__UnityEngine__Object;
                func_?();
              }
              bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)this_05,(Object_1 *)0x0,(MethodInfo *)0x0);
              this_03 = pHStack_8;
              if (bVar4 != 0) {
                fStack_5 = (float)(this_04->fields)._.ownerActorNr;
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar2 == (MVNetworkGame *)0x0) ||
                   (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0)
                   , pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
                if (fStack_5 != (float)(pMVar16->fields)._._ActorNr_k__BackingField) {
                  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar2 == (MVNetworkGame *)0x0) ||
                     (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar2,(MethodInfo *)0x0),
                     pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
                  bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                    ((MVPlayer *)pMVar16,this_04,(MethodInfo *)0x0);
                  this_03 = pHStack_8;
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
                                     (this_01,fStack_5 / (this->fields).blastRadius,
                                      (MethodInfo *)0x0);
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
                this_03 = pHStack_8;
                if (0.0 < fStack_19) {
                  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCStack_12,(MethodInfo *)0x0);
                  if (pTVar13 == (Transform *)0x0) goto code_?;
                  pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
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
                     (pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar2,(MethodInfo *)0x0),
                     pMVar16 == (MVLocalPlayer *)0x0)) goto code_?;
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
                                    fVar20,(int)uVar35,(int)((ulonglong)uVar35 >> 0x20),fVar36,uVar37
                                    ,uVar38,puStack_42,pOStack_15,uStack_43,uStack_44,uStack_45,
                                    uStack_46);
                  }
                  this_03 = pHStack_8;
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                  HashSet_1_System_Object__Add
                            ((HashSet_1_System_Object_ *)pHStack_8,(Object *)(this_04->fields)._.id
                             ,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
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
    }
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
  method_00 = (MethodInfo *)0x0;
  puStack_1 = (undefined *)(this->fields).rocketRange;
  pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if (pCVar2 != (Camera *)0x0) {
    fStack_3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                          (pCVar2,(MethodInfo *)0x0);
    if (fStack_3 < (float)puStack_1) {
      pRVar4 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_5,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&lineOfFire,(MethodInfo *)0x0);
      uVar6 = pRVar4->_options;
      uVar7 = pRVar4->_cultureKey;
      pSStack_8 = pRVar4->_pattern;
      RStack_9._cultureKey = (String *)uVar6;
      RStack_9._pattern = (String *)uVar7;
      pRVar4 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          (&RStack_5,
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&lineOfFire,(MethodInfo *)0x0);
      uStack_10._0_4_ = (float)pRVar4->_options;
      uStack_10._4_4_ = (float)pRVar4->_cultureKey;
      pSStack_11 = pRVar4->_pattern;
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar2 == (Camera *)0x0) goto code_?;
      fStack_3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                            (pCVar2,(MethodInfo *)0x0);
      fStack_3 = fStack_3 * _UNK_?;
      pSStack_11 = (String *)((float)pSStack_8 + (float)pSStack_11 * fStack_3);
      RStack_9._options = (int32_t)((float)RStack_9._cultureKey + (float)uStack_10 * fStack_3);
      RStack_9._cultureKey = (String *)((float)RStack_9._pattern + uStack_10._4_4_ * fStack_3);
    }
    else {
      pRVar4 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          (&RStack_9,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&lineOfFire,(MethodInfo *)0x0);
      uStack_10._0_4_ = (float)pRVar4->_options;
      uStack_10._4_4_ = (float)pRVar4->_cultureKey;
      pSStack_11 = pRVar4->_pattern;
      pRVar4 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                          (&RStack_5,
                           (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&lineOfFire,(MethodInfo *)0x0);
      uVar12 = pRVar4->_options;
      uVar13 = pRVar4->_cultureKey;
      fVar14 = (this->fields).rocketRange;
      pSStack_11 = (String *)((float)pSStack_11 + (float)pRVar4->_pattern * fVar14);
      RStack_9._options = (int32_t)((float)uStack_10 + (float)uVar12 * fVar14);
      RStack_9._cultureKey = (String *)(uStack_10._4_4_ + (float)uVar13 * fVar14);
    }
    pSVar15 = pSStack_11;
    pSStack_8 = (String *)0x0;
    RStack_9._pattern = (String *)0x0;
    pSVar16 = RStack_9._cultureKey;
    pRVar4 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                        (&RStack_5,
                         (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&lineOfFire,(MethodInfo *)0x0);
    uStack_10._0_4_ = (float)pRVar4->_options;
    uStack_10._4_4_ = (float)pRVar4->_cultureKey;
    pSVar17 = (String *)
              ((uint)pRVar4->_pattern ^
              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    voxelHit.interactionFlags._4_4_ = lineOfFire.m_Origin.x;
    voxelHit._0_68_ =
         ZEXT5268(CONCAT448(method_00,
                            CONCAT444(0,CONCAT440(lineOfFire.m_Direction.z,
                                                  CONCAT436(lineOfFire.m_Direction.y,
                                                            CONCAT432(lineOfFire.m_Direction.x,
                                                                      CONCAT428(lineOfFire.m_Origin.
                                                                                z,CONCAT424(
                                                  lineOfFire.m_Origin.y,
                                                  CONCAT420(lineOfFire.m_Origin.x,
                                                            CONCAT416(pSVar17,CONCAT412((uint)
                                                  uStack_10._4_4_ ^
                                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                  ,CONCAT48((uint)(float)uStack_10 ^
                                                                                                                        
                                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                  ,CONCAT44(pSStack_11,pSVar16)))))))))))));
    lineOfFire_00.m_Origin.y = lineOfFire.m_Origin.z;
    lineOfFire_00.m_Origin.x = lineOfFire.m_Origin.y;
    lineOfFire_00.m_Origin.z = lineOfFire.m_Direction.x;
    lineOfFire_00.m_Direction.x = lineOfFire.m_Direction.y;
    lineOfFire_00.m_Direction.y = lineOfFire.m_Direction.z;
    lineOfFire_00.m_Direction.z = 0.0;
    pSStack_11 = pSVar17;
    PickupItemBazooka_OnHitLocal(this,voxelHit,lineOfFire_00,method_00);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar18 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar18 != (PrefabPool *)0x0) {
      position.y = (float)RStack_9._cultureKey;
      position.x = (float)RStack_9._options;
      position.z = (float)pSVar15;
      SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                ((pPVar18->fields).particleExplosion,position,10.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnHitMaxRangeRemote(Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitMaxRangeRemote
               (PickupItemBazooka *this,Ray lineOfFire,MethodInfo *method)

{
  pRVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                      (&RStack_2,
                       (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&lineOfFire,(MethodInfo *)0x0);
  uVar3 = pRVar1->_options;
  uVar4 = pRVar1->_cultureKey;
  pSVar5 = pRVar1->_pattern;
  pRVar1 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                      ((Regex_CachedCodeEntryKey *)&stack0xffffffc0,
                       (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&lineOfFire,(MethodInfo *)0x0);
  uVar6 = pRVar1->_options;
  uVar7 = pRVar1->_cultureKey;
  pSVar8 = pRVar1->_pattern;
  fVar9 = (this->fields).rocketRange;
  RStack_2._options = (int32_t)((float)uVar3 + (float)uVar6 * fVar9);
  RStack_2._cultureKey = (String *)((float)uVar4 + (float)uVar7 * fVar9);
  RStack_2._pattern = (String *)0x0;
  uStack_10 = 0;
  mscorlib.dll::System::Collections::Generic::
  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::RegularExpressions::
  Regex+CachedCodeEntryKey,System::Object]::
  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
            ((Regex_CachedCodeEntryKey *)&stack0xffffffc0,
             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
              *)&lineOfFire,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar11 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar11 != (PrefabPool *)0x0) {
    position.y = (float)RStack_2._cultureKey;
    position.x = (float)RStack_2._options;
    position.z = (float)pSVar5 + (float)pSVar8 * fVar9;
    SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
              ((pPVar11->fields).particleExplosion,position,10.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  iVar2 = (*(this->klass->vtable).GetAmmoMultiplier.methodPtr)
                    (this,iVar2,(this->klass->vtable).GetAmmoMultiplier.method);
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
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
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

