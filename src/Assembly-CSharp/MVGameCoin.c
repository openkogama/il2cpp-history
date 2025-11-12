
/* Void Destroy() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Destroy(MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
     this_00 == (MVGameCoinManager *)0x0)) goto code_?;
  MVGameCoinManager::MVGameCoinManager_Evaluate(this_00,(MethodInfo *)0x0);
  if ((this->fields).useInteractor != (UseInteractor *)0x0) {
    pMVar3 = (this->fields).pickupObject;
    if (pMVar3 == (MVGameCoinObject *)0x0) goto code_?;
    pTVar4 = (pMVar3->fields).triggerBoxEvents;
    pUVar5 = (this->fields).useInteractor;
    pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar6,(Object *)pUVar5,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar4 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
    pMVar3 = (this->fields).pickupObject;
    if (pMVar3 == (MVGameCoinObject *)0x0) goto code_?;
    pTVar4 = (pMVar3->fields).triggerBoxEvents;
    pUVar5 = (this->fields).useInteractor;
    pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar6,(Object *)pUVar5,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar4 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
              (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
    pUVar5 = (this->fields).useInteractor;
    if ((pUVar5 == (UseInteractor *)0x0) ||
       (this_01 = (pUVar5->fields).useInteractorVisuals,
       this_01 == (UseInteractorVisualization *)0x0)) goto code_?;
    UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
              (this_01,(this->fields)._._._.data,(MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields).useInteractor = (UseInteractor *)0x0;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((pMVar1->fields).game != (MVNetworkGame *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0))
    goto code_?;
    pAVar13 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_03 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar13,(Delegate *)this_03,(MethodInfo *)0x0);
    pAVar15 = TypeInfo__System__Action<IWinningCondition>;
    if (pDVar14 == (Delegate *)0x0) {
      (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar13 = (Action_1_IWinningCondition_ *)
                FUN_?(pDVar14,TypeInfo__System__Action<IWinningCondition>);
      if (pAVar13 == (Action_1_IWinningCondition_ *)0x0) {
        FUN_?(pDVar14,pAVar15);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar13;
      pAVar15 = TypeInfo__System__Action<IWinningCondition>;
      lVar9 = FUN_?();
      if (lVar9 == 0) {
        FUN_?(pDVar14,pAVar15);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar16 = *puVar11;
        LOCK();
        uVar10 = *puVar11;
        if (uVar16 == uVar10) {
          *puVar11 = uVar16 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar16 != uVar10);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar17 = (this->fields)._._.gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar17 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar17->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar17 = (this->fields)._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar17,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pRVar18 = (pMVar2->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar18 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (HashSet_1_System_Int32Enum_ *)(pRVar18->fields).runtimeDataVariables;
      if (this_02 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                 HashSet_1_System_Int32Enum__Contains
                           (this_02,item,
                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar19 != 0) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (pRVar18 = (pMVar2->fields).runtimeVariableNetworkManager,
             pRVar18 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar18,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVGameCoin::MVGameCoin_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVGameCoin *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  fVar4 = VStack_2.x * TypeRef__System__Activator__T._0_4_;
  fVar5 = VStack_2.y + VStack_2.y;
  this_00 = (this->fields)._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&QStack_6);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    aQStack_11[0].x = QStack_6.x;
    aQStack_11[0].y = QStack_6.y;
    aQStack_11[0].z = QStack_6.z;
    aQStack_11[0].w = QStack_6.w;
    VStack_12.y = fVar5;
    VStack_12.x = fVar4;
    VStack_12.z = fVar3 + fVar3;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar5 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Initialize(MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGameCoin_SetupUserInteractor(this,(MethodInfo *)0x0);
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._.data,(pUVar1->fields).woOwnerID,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (this_01 = (pMVar3->fields)._GameCoinManager_k__BackingField,
       this_01 != (MVGameCoinManager *)0x0)) {
      MVGameCoinManager::MVGameCoinManager_Evaluate(this_01,(MethodInfo *)0x0);
      MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
      pMVar4 = (this->fields).pickupObject;
      if (pMVar4 != (MVGameCoinObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pMVar4->fields).visualObject,
                   TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 != (MVGameControllerBase *)0x0) &&
           (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
          pAVar5 = (pMVar3->fields).OnWinningConditionFulfilled;
          this_02 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<IWinningCondition>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_,
                     (MethodInfo *)0x0);
          pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
          pAVar7 = TypeInfo__System__Action<IWinningCondition>;
          if (pDVar6 == (Delegate *)0x0) {
            (pMVar3->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
          }
          else {
            pAVar5 = (Action_1_IWinningCondition_ *)
                      FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
            if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) {
              FUN_?(pDVar6,pAVar7);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (pMVar3->fields).OnWinningConditionFulfilled = pAVar5;
            pAVar7 = TypeInfo__System__Action<IWinningCondition>;
            lVar9 = FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
            if (lVar9 == 0) {
              FUN_?(pDVar6,pAVar7);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)&(pMVar3->fields).OnWinningConditionFulfilled >> 0xc);
            uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
            do {
              uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
              puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsCoinTakeable(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVGameCoin::MVGameCoin_IsCoinTakeable
               (MVGameCoin *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  return (this->fields).state == 0;
}


/* Boolean OnPickup(Int32) */

bool Assembly-CSharp.dll::MVGameCoin::MVGameCoin_OnPickup
               (MVGameCoin *this,int32_t instigatorID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    if (instigatorID != (pMVar4->fields)._._ActorNr_k__BackingField) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 == (MVGameControllerBase *)0x0) ||
          (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
         ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0 ||
          ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0)
           , pMVar4 == (MVLocalPlayer *)0x0 ||
           ((pMVar4->fields).spawnRoleDataMediator == (SpawnRoleDataMediator *)0x0))))))
      goto code_?;
      cVar5 = FUN_?(instigatorID);
      if (cVar5 == '\0') {
        return 0;
      }
    }
    if ((this->fields).state != 0) {
      return 0;
    }
    pMVar6 = (this->fields).pickupObject;
    (this->fields).isVisible = 0;
    if ((pMVar6 != (MVGameCoinObject *)0x0) &&
       (this_00 = (pMVar6->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
      pcVar7 = pcRam_?;
      (this->fields).state = 1;
      pcVar8 = pcRam_?;
      if ((pcVar7 == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar8 = pcVar7, pcVar7 == (code *)0x0)
         ) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        bVar10 = (*pcVar7)();
        return bVar10;
      }
      pcRam_? = pcVar8;
      fVar11 = (float)(*pcVar7)();
      pMVar6 = (this->fields).pickupObject;
      (this->fields).pickedUpTime = fVar11;
      if (pMVar6 != (MVGameCoinObject *)0x0) {
        pAVar12 = (pMVar6->fields).audioSource;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                           ((Object_1 *)pAVar12,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          pMVar6 = (this->fields).pickupObject;
          if ((pMVar6 == (MVGameCoinObject *)0x0) ||
             (pAVar12 = (pMVar6->fields).audioSource, pAVar12 == (AudioSource *)0x0))
          goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar12,(MethodInfo *)0x0);
        }
        pMVar6 = (this->fields).pickupObject;
        if ((pMVar6 != (MVGameCoinObject *)0x0) &&
           (this_01 = (pMVar6->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
          ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
             (this_02 = (pMVar2->fields)._GameCoinManager_k__BackingField,
             this_02 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_GameCoinCollect(this_02,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVClientSettings);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((TypeInfo__MVClientSettings->static_fields->flags & 0x100U) == 0) {
              return 1;
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            triggerBoxOwnerId = (this->fields)._._._.id;
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0))
                && ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                         (pMVar3,(MethodInfo *)0x0), pMVar4 != (MVLocalPlayer *)0x0
                    && ((pSVar13 = (pMVar4->fields).spawnRoleDataMediator,
                        pSVar13 != (SpawnRoleDataMediator *)0x0 &&
                        (pSVar14 = (pSVar13->fields).woId,
                        pSVar14 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *
                                  )0x0)))))) &&
               (pSVar15 = (pSVar14->fields)._.subscribableVariable,
               pSVar15 != (SubscribableVariable_1_System_Int32_ *)0x0)) {
              if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   ->klass->field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                          (this_03,triggerBoxOwnerId,(pSVar15->fields)._.value,(MethodInfo *)0x0);
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar10 = (*pcVar7)();
  return bVar10;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_OnUpdate(MVGameCoin *this,MethodInfo *method)

{
  if (((this->fields).state == 0) || ((this->fields).state == 3)) {
    pMVar1 = (this->fields).pickupObject;
    if ((pMVar1 != (MVGameCoinObject *)0x0) &&
       (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 != (RotateLocal *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pRVar2->fields)._._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      cVar6 = (*pcRam_?)(pvVar3);
      if (cVar6 != '\0') {
        return;
      }
      pMVar1 = (this->fields).pickupObject;
      if ((pMVar1 != (MVGameCoinObject *)0x0) &&
         (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 != (RotateLocal *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                        ,1,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pRVar2 == (RotateLocal *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar3 = (pRVar2->fields)._._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,1);
        return;
      }
    }
  }
  else if ((this->fields).state == 1) {
    pMVar1 = (this->fields).pickupObject;
    if ((pMVar1 != (MVGameCoinObject *)0x0) &&
       (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 != (RotateLocal *)0x0)) {
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pRVar2,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        pMVar1 = (this->fields).pickupObject;
        if ((pMVar1 == (MVGameCoinObject *)0x0) ||
           (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 == (RotateLocal *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pRVar2,0,(MethodInfo *)0x0);
      }
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                         ((MethodInfo *)0x0);
      fVar8 = fVar8 - (this->fields).pickedUpTime;
      pfVar9 = &(this->fields).pickedUpStateDuration;
      if (fVar8 < *pfVar9 || fVar8 == *pfVar9) {
        return;
      }
      (this->fields).state = 2;
      return;
    }
  }
  else {
    if ((this->fields).state != 2) {
      return;
    }
    pMVar1 = (this->fields).pickupObject;
    if ((pMVar1 != (MVGameCoinObject *)0x0) &&
       (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 != (RotateLocal *)0x0)) {
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pRVar2,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        pMVar1 = (this->fields).pickupObject;
        if ((pMVar1 == (MVGameCoinObject *)0x0) ||
           (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 == (RotateLocal *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pRVar2,0,(MethodInfo *)0x0);
      }
      fVar8 = (this->fields).pickedUpTime;
      fVar10 = (this->fields).pickedUpStateDuration;
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                         ((MethodInfo *)0x0);
      fVar11 = fVar11 - (fVar8 + fVar10);
      pfVar9 = &(this->fields).reshowingStateDuration;
      if (fVar11 < *pfVar9 || fVar11 == *pfVar9) {
        return;
      }
      (this->fields).state = 3;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Reset(MVGameCoin *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    pMVar1 = (this->fields).pickupObject;
    if ((pMVar1 == (MVGameCoinObject *)0x0) ||
       (this_00 = (pMVar1->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  (this->fields).state = 0;
  return;
}


/* Void SetupUserInteractor() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_SetupUserInteractor
               (MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoin__IsCoinTakeable_int__MVInteractableBase_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pickupObject;
  if (pMVar1 != (MVGameCoinObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pGVar3 = (pMVar1->fields).useInteractionRotator;
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,(this->klass->vtable).OnPickup.method);
      checkCanUseFunction =
           (Func_3_Int32_MVInteractableBase_Boolean_ *)
           FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      FUN_?(checkCanUseFunction,this,
                    MethodInfo__MVGameCoin__IsCoinTakeable_int__MVInteractableBase_);
      pUVar4 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar4,(MVWorldObjectClient *)this,pGVar3,0,triggerCollider,useFunction,
                 checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).useInteractor = pUVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pMVar1 = (this->fields).pickupObject;
      if (pMVar1 != (MVGameCoinObject *)0x0) {
        pGVar3 = (pMVar1->fields).useInteractionRotator;
        useRequirement = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
        bVar5 = iRam_? != 0;
        *(undefined8 *)&useRequirement[1].fields = 0;
        *(undefined4 *)&useRequirement[2].klass = 0;
        *(undefined1 *)((longlong)&useRequirement[1].klass + 4) = 0;
        useRequirement[2].monitor = (MonitorData *)pGVar3;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&useRequirement[2].monitor >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pUVar4 = (this->fields).useInteractor;
        if (pUVar4 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement(pUVar4,useRequirement,(MethodInfo *)0x0);
          pMVar1 = (this->fields).pickupObject;
          if (pMVar1 != (MVGameCoinObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar10,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar10,(MethodInfo *)0x0);
              pMVar1 = (this->fields).pickupObject;
              if (pMVar1 != (MVGameCoinObject *)0x0) {
                pTVar2 = (pMVar1->fields).triggerBoxEvents;
                pUVar4 = (this->fields).useInteractor;
                pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar10,(Object *)pUVar4,
                           MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  ppEVar11 = &(pTVar2->fields).TriggerExit;
                  a = (pTVar2->fields).TriggerExit;
                  do {
                    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)a,(Delegate *)pUVar10,(MethodInfo *)0x0);
                    pEVar13 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                    if (pDVar12 == (Delegate *)0x0) {
                      pEVar14 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                    }
                    else {
                      pEVar14 = (EventHandler_1_TriggerEventArgs_ *)
                                FUN_?(pDVar12,
                                              TypeInfo__System__EventHandler<TriggerEventArgs>);
                      if (pEVar14 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                        FUN_?(pDVar12,pEVar13);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                    }
                    LOCK();
                    pEVar16 = *ppEVar11;
                    bVar5 = a == pEVar16;
                    if (bVar5) {
                      *ppEVar11 = pEVar14;
                      pEVar16 = a;
                    }
                    UNLOCK();
                    pEVar14 = a;
                    if (!bVar5) {
                      pEVar14 = pEVar16;
                    }
                    if (iRam_? != 0) {
                      uVar6 = (uint)((ulonglong)ppEVar11 >> 0xc);
                      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                      do {
                        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                        LOCK();
                        bVar5 = uVar8 == *puVar9;
                        if (bVar5) {
                          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar5);
                    }
                    bVar5 = pEVar14 != a;
                    a = pEVar14;
                  } while (bVar5);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MVGameCoin(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin__ctor
               (MVGameCoin *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameCoinObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGameCoin__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).isVisible = 1;
  (this->fields).pickedUpStateDuration = 0.8;
  (this->fields).reshowingStateDuration = 0.5;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) goto code_?;
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar2->fields).mvGameCoinPrefab,
             worldObjects,(MethodInfo *)0x0);
  pMVar3 = (MVGameCoinObject *)(this->fields)._._.component;
  if (pMVar3 == (MVGameCoinObject *)0x0) {
    (this->fields).pickupObject = (MVGameCoinObject *)0x0;
  }
  else {
    bVar4 = (TypeInfo__MVGameCoinObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__MVGameCoinObject)) {
      FUN_?(pMVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (this->fields).pickupObject = pMVar3;
    bVar4 = (TypeInfo__MVGameCoinObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__MVGameCoinObject)) {
      FUN_?(pMVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).pickupObject >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar8 == *puVar9;
      if (bVar1) {
        *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  piVar10 = &(this->fields)._._.interactionFlags;
  *piVar10 = *piVar10 | 0x200000;
  pMVar3 = (this->fields).pickupObject;
  if (pMVar3 == (MVGameCoinObject *)0x0) goto code_?;
  pTVar11 = (pMVar3->fields).triggerBoxEvents;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar11 == (TriggerBoxEvents *)0x0) {
code_?:
    plVar12 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
    if (plVar12 == (longlong *)0x0) goto code_?;
    pSVar13 = (String *)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    pSVar13 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar13,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar13,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar11->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar3 = (this->fields).pickupObject;
    if (pMVar3 == (MVGameCoinObject *)0x0) goto code_?;
    pTVar11 = (pMVar3->fields).triggerBoxEvents;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__MVGameCoin__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar11 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar11,(EventHandler_1_TriggerEventArgs_ *)this_03,(MethodInfo *)0x0);
  }
  if ((this->fields).isVisible == 0) {
    pMVar3 = (this->fields).pickupObject;
    if ((pMVar3 == (MVGameCoinObject *)0x0) ||
       (this_00 = (pMVar3->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  bVar1 = cRam_? == '\0';
  (this->fields).state = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar14 != (MVGameControllerBase *)0x0) &&
      (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
     (pMVar16 = (pMVar15->fields)._GameCoinManager_k__BackingField,
     pMVar16 != (MVGameCoinManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                    ,0);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar17 != (MVWorldObjectClientManager *)0x0) &&
       (pLVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                            (pMVar17,WorldObjectType__Enum_GameCoin,(MethodInfo *)0x0),
       pLVar18 != (List_1_MVWorldObjectClient_ *)0x0)) {
      iVar19 = (pLVar18->fields)._size;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar17 != (MVWorldObjectClientManager *)0x0) &&
         (pLVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                              (pMVar17,WorldObjectType__Enum_GameCoinChest,(MethodInfo *)0x0),
         pLVar18 != (List_1_MVWorldObjectClient_ *)0x0)) {
        iVar20 = (pLVar18->fields)._size;
        uVar21._0_4_ = (pMVar16->fields).totalPurchaseAmount.currentCryptoKey;
        uVar21._4_4_ = (pMVar16->fields).totalPurchaseAmount.hiddenValue;
        uVar22._0_4_ = (pMVar16->fields).totalPurchaseAmount.fakeValue;
        uVar22._4_1_ = (pMVar16->fields).totalPurchaseAmount.inited;
        uVar22._5_3_ = *(undefined3 *)&(pMVar16->fields).totalPurchaseAmount.field_0xd;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        OStackY_28._0_8_ = uVar21;
        OStackY_28._8_8_ = uVar22;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_InternalDecrypt(&OStackY_28,(MethodInfo *)0x0);
        if (((iVar23 < 1) && (iVar19 < 1)) && (iVar20 < 1)) {
          bVar24 = 0;
        }
        else {
          bVar24 = 1;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,bVar24,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar14 != (MVGameControllerBase *)0x0) &&
             (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
            (this_01 = (pMVar15->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
           ((pMVar25 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_01,(MethodInfo *)0x0), pMVar25 != (MVLocalPlayer *)0x0 &&
            (this_02 = (pMVar25->fields).boostController, this_02 != (BoostController *)0x0)))) {
          BoostController::BoostController_AllowBoost
                    (this_02,BoostType__Enum_GameCoinsIntMultiplier,bVar24,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          bVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                   ::ObscuredBool_InternalDecrypt
                             ((ObscuredBool *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
          if (bVar24 != bVar26) {
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uVar27._0_1_ = 0;
            uVar27._1_3_ = 0;
            uVar28._0_1_ = 0;
            uVar28._1_3_ = 0;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                         field_0x1c == 0) {
              uVar28 = uVar27;
              FUN_?();
            }
            iVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredBool::ObscuredBool_Encrypt(bVar24,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                         field_0x1c == 0) {
              FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            }
            uVar29._4_4_ = iVar23;
            uVar29._0_1_ = (uint8_t)uVar28;
            uVar29._1_3_ = SUB43(uVar28,1);
            uStack_30._0_1_ = 0;
            uStack_30._1_1_ = 0;
            uStack_30._2_1_ = 1;
            uStack_30._3_1_ = 0;
            uVar31._1_7_ = SUB87(uVar29,1);
            uVar31._0_1_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->
                           static_fields->cryptoKey;
            bVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                     ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                               ((MethodInfo *)0x0);
            if (bVar26 != 0) {
              uStack_30._1_1_ = 1;
              uStack_30._0_1_ = bVar24;
              uStack_30._2_2_ = 1;
            }
            pMVar32 = (pMVar16->fields).OnActivationChange;
            (pMVar16->fields).isActive.currentCryptoKey = (uint8_t)uVar31;
            *(int3 *)&(pMVar16->fields).isActive.field_0x1 = SUB83(uVar31,1);
            (pMVar16->fields).isActive.hiddenValue = SUB84(uVar31,4);
            (pMVar16->fields).isActive.fakeValue = (bool)uStack_30;
            (pMVar16->fields).isActive.fakeValueChanged = uStack_30._1_1_;
            (pMVar16->fields).isActive.inited = uStack_30._2_1_;
            (pMVar16->fields).isActive.field_0xb = uStack_30._3_1_;
            if (pMVar32 != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
              pMVar32 = (pMVar16->fields).OnActivationChange;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              bVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredBool::ObscuredBool_InternalDecrypt
                                 ((ObscuredBool *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
              (*(pMVar32->fields)._._.invoke_impl)
                        ((pMVar32->fields)._._.method_code,bVar24,(pMVar32->fields)._._.method);
            }
          }
          return;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_triggerBoxEvents_TriggerEnter
               (MVGameCoin *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UVar2 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (this_00,(MethodInfo *)0x0);
    if ((UVar2 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0),
       pMVar3 != (MVWorldObjectClient *)0x0)) {
      (*(this->klass->vtable).OnPickup.methodPtr)
                (this,(ulonglong)(uint)(pMVar3->fields)._.ownerActorNr,
                 (this->klass->vtable).OnPickup.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

