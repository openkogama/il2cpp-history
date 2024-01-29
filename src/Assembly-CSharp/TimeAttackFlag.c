
/* Void Destroy() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_Destroy
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
           func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar1 != (TriggerBoxEvents *)0x0) {
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    if ((this->fields).useInteractor == (UseInteractor *)0x0) {
code_?:
      MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
                ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
      if ((this->fields).initializedInWorld == 0) {
        return;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((((pMVar3 != (MVNetworkGame *)0x0) &&
           (pWVar4 = (pMVar3->fields).worldNetwork, pWVar4 != (WorldNetwork *)0x0)) &&
          (this_00 = (MVWorldObjectClientManager *)(pWVar4->fields)._.worldObjectClientManager,
          this_00 != (MVWorldObjectClientManager *)0x0)) &&
         (pLVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                             (this_00,(this->fields)._._._._.type,(MethodInfo *)0x0),
         pLVar5 != (List_1_MVWorldObjectClient_ *)0x0)) {
        if ((pLVar5->fields)._size != 0) {
          return;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pWVar6 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
           pWVar6 != (WinningConditionManager *)0x0)) {
          pOVar7 = MVWorldObject.dll::WinningConditionManager::
                   WinningConditionManager_GetSingletonWinnerConditionByType
                             (pWVar6,
                              TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                             );
          if (pOVar7 == (Object *)0x0) goto code_?;
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 != (MVNetworkGame *)0x0) &&
             (pWVar6 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
             pWVar6 != (WinningConditionManager *)0x0)) {
            MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_RemoveWinnerCondition
                      (pWVar6,(int32_t)pOVar7[1].monitor,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pTVar1 = (this->fields).triggerBoxEvents;
      pUVar8 = (this->fields).useInteractor;
      pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar2,(Object *)pUVar8,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar1 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                  (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pTVar1 = (this->fields).triggerBoxEvents;
        pUVar8 = (this->fields).useInteractor;
        pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar2,(Object *)pUVar8,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)pUVar2);
        if (pTVar1 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
          pUVar8 = (this->fields).useInteractor;
          if (pUVar8 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor_OnDestroy
                      (pUVar8,(this->fields)._._._._.data,(MethodInfo *)0x0);
            (this->fields).useInteractor = (UseInteractor *)0x0;
            func_?();
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  this_01 = (Exception *)func_?();
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
  uStack9 = func_?();
  pEStack10 = this_01;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean DoReachTimeAttackFlag(Int32) */

bool Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_DoReachTimeAttackFlag
               (TimeAttackFlag *this,int32_t instigator,MethodInfo *method)

{
  if ((this->fields).isTimeAttackDebriefingOn == 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).lastCaptureTime + _UNK_? <= fVar1) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastCaptureTime = fVar1;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                         ((MethodInfo *)0x0);
      if (pFVar2 != (FlagDebriefingControl *)0x0) {
        captureTime = func_?((fVar1 - (pFVar2->fields).RunStartTime) * _UNK_?);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_ReportReachedTimeAttackFlag
                    (this_00,captureTime,(this->fields)._._._._.id,(MethodInfo *)0x0);
          pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                             ((MethodInfo *)0x0);
          if (pFVar2 != (FlagDebriefingControl *)0x0) {
            FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
                      (pFVar2,captureTime,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  return 0;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,TimeAttackFlag *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).y;
  fVar2 = (float)uVar1 * _UNK_?;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      pSVar3 = TypeInfo__SharedCubeFunctions;
      pSVar4 = (SharedCubeFunctions__Class *)0x3f800000;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar4 = pSVar3;
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = (float)pSVar4;
      rotation.x = gridSize;
      rotation.z = fVar2;
      rotation.w = 1.0;
      scale.y = fVar2;
      scale.x = (float)pSVar4;
      scale.z = 1.0;
      pVVar5 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar6 = pVVar5->y;
      fVar2 = pVVar5->z;
      __return_storage_ptr__->x = pVVar5->x;
      __return_storage_ptr__->y = fVar6;
      __return_storage_ptr__->z = fVar2;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar7)();
  return pVVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_Initialize
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&
                    WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                   );
    func_?(&MethodInfo__TimeAttackFlag__LateInitialize__);
    func_?(&
                    TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeAttackFlagReachedClient>_System__Object____
                   );
    func_?(&
                    TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                   );
    cRam_? = '\x01';
  }
  TimeAttackFlag_SetupUseInteractor(this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     pWVar2 == (WinningConditionManager *)0x0)) {
code_?:
    pDStack3 = (Delegate *)func_?();
  }
  else {
    pOVar4 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar2,
                        TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                       );
    if (pOVar4 == (Object *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      pMVar5 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField;
        if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
            rgctx_data == (Il2CppRGCTXData *)0x0) {
          func_?();
        }
        pIVar6 = (pMVar5->field7_0x1c).rgctx_data[2].klass;
        if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
          pIVar6 = (Il2CppClass *)func_?();
        }
        if (pIVar6->cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pIVar6 = (pMVar5->field7_0x1c).rgctx_data[2].klass;
        if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
          pIVar6 = (Il2CppClass *)func_?();
        }
        unaff_ESI = (Action__Class *)pMVar5;
        if (pWVar2 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                    (pWVar2,*(Object__Array **)pIVar6->static_fields,
                     TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeAttackFlagReachedClient>_System__Object____
                    );
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    this_00 = (this->fields).useInteractor;
    (this->fields).initializedInWorld = 1;
    if (this_00 == (UseInteractor *)0x0) goto code_?;
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 == (GameObject *)0x0) goto code_?;
    pWVar7 = (WorldObjectEnableController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (this_01,
                         WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                        );
    (this->fields).worldObjectEnableController = pWVar7;
    func_?();
    pTVar8 = (this->fields).timeAttackFlagObject;
    if (pTVar8 == (TimeAttackFlagObject *)0x0) goto code_?;
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pTVar8->fields).visualObject,2.0,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
    bVar9 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      TimeAttackFlag_InitializeCallbacks(this,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar10 = (pMVar1->fields).playerContainer;
    if (pMVar10 == (MVPlayerContainer *)0x0) goto code_?;
    a = (pMVar10->fields).OnLocalPlayerReady;
    this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_03,(Object *)this,MethodInfo__TimeAttackFlag__LateInitialize__,(MethodInfo *)0x0
              );
    puVar11 = &UNK_?;
    pDStack3 =
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDStack3 == (Delegate *)0x0) {
      pAStack12 = (Action__Class *)0x0;
      *(undefined4 *)(puVar11 + 0x1c) = 0;
      pDStack3 = (Delegate *)(puVar11 + 0x1c);
      func_?();
      return;
    }
    pDVar13 = (Delegate *)0x0;
    if ((Action__Class *)pDStack3->klass == TypeInfo__System__Action) {
      pDVar13 = pDStack3;
    }
    pAStack12 = TypeInfo__System__Action;
    if (pDVar13 == (Delegate *)0x0) goto code_?;
    *(Delegate **)(puVar11 + 0x1c) = pDVar13;
    pAStack12 = (Action__Class *)(Delegate *)0x0;
    if ((Action__Class *)pDStack3->klass == TypeInfo__System__Action) {
      pAStack12 = (Action__Class *)pDStack3;
    }
    unaff_ESI = TypeInfo__System__Action;
    if (pAStack12 != (Action__Class *)0x0) {
      pDStack3 = (Delegate *)(puVar11 + 0x1c);
      func_?();
      return;
    }
  }
  pAStack12 = unaff_ESI;
  pDStack3 = (Delegate *)func_?();
  pAStack12 = extraout_ECX;
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeCallbacks() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_InitializeCallbacks
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__TimeAttackFlag__OnEndFlagDebriefing__);
    func_?(&MethodInfo__TimeAttackFlag__OnStartFlagDebriefing_int_);
    cRam_? = '\x01';
  }
  pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar1 == (FlagDebriefingControl *)0x0) {
code_?:
    func_?();
  }
  else {
    pAVar2 = (pFVar1->fields).OnFlagDebriefing;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__TimeAttackFlag__OnStartFlagDebriefing_int_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pFVar1->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_Int32_ *)func_?();
      if (pAVar2 == (Action_1_Int32_ *)0x0) goto code_?;
      (pFVar1->fields).OnFlagDebriefing = pAVar2;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar1 == (FlagDebriefingControl *)0x0) goto code_?;
    pAVar5 = (pFVar1->fields).OnFlagDebriefingEnd;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)&UNK_?,MethodInfo__TimeAttackFlag__OnEndFlagDebriefing__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      (pFVar1->fields).OnFlagDebriefingEnd = (Action *)0x0;
      func_?();
      return;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 != (Action *)0x0) {
      (pFVar1->fields).OnFlagDebriefingEnd = pAVar6;
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 != (Action *)0x0) {
        func_?();
        return;
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


/* Void LateInitialize() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_LateInitialize
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  TimeAttackFlag_InitializeCallbacks(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__System__Action,(pMVar2->fields).OnLocalPlayerReady);
    if (this != (TimeAttackFlag *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,(this->klass->vtable).InitializeInventory.methodPtr,
                 (MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)0x0,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar3);
      if (pAVar3 == (Action *)0x0) {
        (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
        ppAStack5 = &(pMVar2->fields).OnLocalPlayerReady;
        pAStack6 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar7 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar3;
      }
      if (pAVar7 != (Action *)0x0) {
        (pMVar2->fields).OnLocalPlayerReady = pAVar7;
        uVar4 = CONCAT44(TypeInfo__System__Action,pAVar3);
        pAStack6 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAStack6 = pAVar3;
        }
        if (pAStack6 != (Action *)0x0) {
          ppAStack5 = &(pMVar2->fields).OnLocalPlayerReady;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?();
code_?:
  _ppAStack00000014 = uVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnDataUpdate
               (TimeAttackFlag *this,MethodInfo *method)

{
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEndFlagDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnEndFlagDebriefing
               (TimeAttackFlag *this,MethodInfo *method)

{
  (this->fields).isTimeAttackDebriefingOn = 0;
  return;
}


/* Void OnStartFlagDebriefing(Int32) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_OnStartFlagDebriefing
               (TimeAttackFlag *this,int32_t captureTime,MethodInfo *method)

{
  (this->fields).isTimeAttackDebriefingOn = 1;
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_SetupUseInteractor
               (TimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&TypeInfo__TeamRequirement);
    func_?(&MethodInfo__TimeAttackFlag__DoReachTimeAttackFlag_int_);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).timeAttackFlagObject != (TimeAttackFlagObject *)0x0) {
    pTVar1 = (this->fields).triggerBoxEvents;
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar1,(MethodInfo *)0x0);
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__TimeAttackFlag__DoReachTimeAttackFlag_int_,
                 (MethodInfo *)0x0);
      pUVar2 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar2,(MVWorldObjectClient *)this,(GameObject *)0x40200000,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
                 2.5,0,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar2;
      func_?(&(this->fields).useInteractor);
      pTVar1 = (this->fields).triggerBoxEvents;
      pUVar2 = (this->fields).useInteractor;
      pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar3,(Object *)pUVar2,
                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar1 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
        pTVar1 = (this->fields).triggerBoxEvents;
        pUVar2 = (this->fields).useInteractor;
        pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar3,(Object *)pUVar2,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar1 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                    (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pTVar4 = (this->fields).timeAttackFlagObject;
          if (pTVar4 != (TimeAttackFlagObject *)0x0) {
            root = (pTVar4->fields).useInteractionRotator;
            this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
            GameCoinLogic::GameCoinLogic__ctor(this_01,root,0,(MethodInfo *)0x0);
            pUVar2 = (this->fields).useInteractor;
            if (pUVar2 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement
                        (pUVar2,(UseRequirement *)this_01,(MethodInfo *)0x0);
              pTVar4 = (this->fields).timeAttackFlagObject;
              if (pTVar4 != (TimeAttackFlagObject *)0x0) {
                tintObject = (pTVar4->fields).tintObject;
                this_02 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                TeamRequirement::TeamRequirement__ctor(this_02,tintObject,0,(MethodInfo *)0x0);
                pUVar2 = (this->fields).useInteractor;
                if (pUVar2 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar2,(UseRequirement *)this_02,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TimeAttackFlag(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag__ctor
               (TimeAttackFlag *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__TimeAttackFlagObject);
    func_?(&
                    MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,(pPVar1->fields).timeAttackFlagPrefab,
               worldObjects,(MethodInfo *)0x0);
    pTVar2 = (TimeAttackFlagObject *)(this->fields)._._._.component;
    if (pTVar2 == (TimeAttackFlagObject *)0x0) {
      (this->fields).timeAttackFlagObject = (TimeAttackFlagObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pTVar2->klass)->_1).naturalAligment <
           (TypeInfo__TimeAttackFlagObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pTVar2->klass)->_1).typeHierarchy
          [(TypeInfo__TimeAttackFlagObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__TimeAttackFlagObject)) goto code_?;
      (this->fields).timeAttackFlagObject = pTVar2;
      if (((((ObjectPrefab__Class *)pTVar2->klass)->_1).naturalAligment <
           (TypeInfo__TimeAttackFlagObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pTVar2->klass)->_1).typeHierarchy
          [(TypeInfo__TimeAttackFlagObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__TimeAttackFlagObject)) goto code_?;
    }
    func_?(&(this->fields).timeAttackFlagObject);
    pTVar2 = (this->fields).timeAttackFlagObject;
    if (pTVar2 != (TimeAttackFlagObject *)0x0) {
      pTVar3 = (pTVar2->fields).triggerBoxEvents;
      (this->fields).triggerBoxEvents = pTVar3;
      func_?(&(this->fields).triggerBoxEvents,pTVar3);
      pTVar3 = (this->fields).triggerBoxEvents;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (pTVar3 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (pTVar3,(EventHandler_1_TriggerEventArgs_ *)this_00,(MethodInfo *)0x0);
        piVar4 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar4 = (uint)*piVar4 | 0x2000000;
        uVar5 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        piVar4 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar4 = (uint)*piVar4 | 0x20000000;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar5;
        return;
      }
    }
  }
  func_?();
  pTVar2 = extraout_EDX;
code_?:
  func_?(pTVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_triggerBoxEvents_TriggerEnter
               (TimeAttackFlag *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pWVar1 = (this->fields).worldObjectEnableController;
  if (pWVar1 != (WorldObjectEnableController *)0x0) {
    if ((pWVar1->fields).enableState != 2) {
      return;
    }
    this_00 = (this->fields).useInteractor;
    if (this_00 != (UseInteractor *)0x0) {
      UVar2 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
      if ((UVar2 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
        return;
      }
      if (e != (TriggerEventArgs *)0x0) {
        if ((this->fields).isTimeAttackDebriefingOn != 0) {
          return;
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (fVar3 < (this->fields).lastCaptureTime + _UNK_?) {
          return;
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).lastCaptureTime = fVar3;
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar4 != (FlagDebriefingControl *)0x0) {
          captureTime = func_?();
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_ReportReachedTimeAttackFlag
                      (this_01,captureTime,(this->fields)._._._._.id,(MethodInfo *)0x0);
            pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                               ((MethodInfo *)0x0);
            if (pFVar4 != (FlagDebriefingControl *)0x0) {
              FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
                        (pFVar4,captureTime,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

