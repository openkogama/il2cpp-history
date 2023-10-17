
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
  if ((pUVar2 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__TimeAttackFlag__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0), pTVar1 != (TriggerBoxEvents *)0x0)) {
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
      pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      if ((pUVar2 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar2,(Object *)&UNK_?,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0), pTVar1 != (TriggerBoxEvents *)0x0)) {
        TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                  (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
        pUVar8 = (this->fields).useInteractor;
        pTVar1 = (this->fields).triggerBoxEvents;
        pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        if ((pUVar2 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar2,(Object *)pUVar8,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0), pTVar1 != (TriggerBoxEvents *)0x0)) {
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
  func_?();
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
        puVar3 = (undefined *)(pFVar2->fields).RunStartTime;
        if (cRam_? == '\0') {
          puVar3 = &UNK_?;
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        fVar1 = (fVar1 - (float)puVar3) * _UNK_?;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        fVar4 = (float10)func_?((double)fVar1);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_ReportReachedTimeAttackFlag
                    (this_00,(int)fVar4,(this->fields)._._._._.id,(MethodInfo *)0x0);
          pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                             ((MethodInfo *)0x0);
          if (pFVar2 != (FlagDebriefingControl *)0x0) {
            FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
                      (pFVar2,(int)fVar4,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
      func_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     pWVar2 != (WinningConditionManager *)0x0)) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar2,
                        TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                       );
    if (pOVar3 == (Object *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      pMVar4 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pWVar2 = (pMVar1->fields)._WinningConditionManager_k__BackingField;
        pIVar5 = ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                  field7_0x1c).rgctx_data)->klass;
        if (pIVar5->initialized_and_no_error == 0) {
          pIVar5 = (Il2CppClass *)func_?();
        }
        if (pIVar5->cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pIVar5 = ((pMVar4->field7_0x1c).rgctx_data)->klass;
        if (pIVar5->initialized_and_no_error == 0) {
          pIVar5 = (Il2CppClass *)func_?();
        }
        if (pWVar2 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                    (pWVar2,*(Object__Array **)pIVar5->static_fields,
                     TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<TimeAttackFlagReachedClient>_System__Object____
                    );
          goto code_?;
        }
      }
    }
    else {
code_?:
      this_00 = (this->fields).useInteractor;
      (this->fields).initializedInWorld = 1;
      if (this_00 != (UseInteractor *)0x0) {
        UseInteractor::UseInteractor_UpdateData
                  (this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
        source = (this->fields)._._._.gameObject;
        if (source != (GameObject *)0x0) {
          pWVar6 = (WorldObjectEnableController *)
                    Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                              ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                               WorldObjectEnableController_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<WorldObjectEnableController>__
                              );
          (this->fields).worldObjectEnableController = pWVar6;
          func_?();
          pTVar7 = (this->fields).timeAttackFlagObject;
          if (pTVar7 != (TimeAttackFlagObject *)0x0) {
            MVLogicObject::MVLogicObject_SetupCulling
                      ((MVLogicObject *)this,(pTVar7->fields).visualObject,2.0,(MethodInfo *)0x0);
            this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
            if (this_01 != (MVLocalPlayer *)0x0) {
              bVar8 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
              if (bVar8 != 0) {
                TimeAttackFlag_InitializeCallbacks(this,(MethodInfo *)0x0);
                return;
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (pMVar9 = (pMVar1->fields).playerContainer, pMVar9 != (MVPlayerContainer *)0x0)) {
                this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                  a = (Delegate *)&UNK_?;
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_02,(Object *)this,MethodInfo__TimeAttackFlag__LateInitialize__,
                             (MethodInfo *)0x0);
                  pAVar10 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      (a,(Delegate *)this_02,(MethodInfo *)0x0);
                  uVar11 = CONCAT44(TypeInfo__System__Action,pAVar10);
                  if (pAVar10 == (Action *)0x0) {
                    (pMVar9->fields).OnLocalPlayerReady = (Action *)0x0;
                    ppAStack12 = &(pMVar9->fields).OnLocalPlayerReady;
                    pAStack13 = (Action *)0x0;
                    func_?();
                    return;
                  }
                  pAVar14 = (Action *)0x0;
                  if (pAVar10->klass == TypeInfo__System__Action) {
                    pAVar14 = pAVar10;
                  }
                  if (pAVar14 != (Action *)0x0) {
                    (pMVar9->fields).OnLocalPlayerReady = pAVar14;
                    uVar11 = CONCAT44(TypeInfo__System__Action,pAVar10);
                    pAStack13 = (Action *)0x0;
                    if (pAVar10->klass == TypeInfo__System__Action) {
                      pAStack13 = pAVar10;
                    }
                    if (pAStack13 != (Action *)0x0) {
                      ppAStack12 = &(pMVar9->fields).OnLocalPlayerReady;
                      func_?();
                      return;
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar11 = func_?();
code_?:
  _ppAStack00000020 = uVar11;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    if (this_00 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
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
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__TimeAttackFlag__OnEndFlagDebriefing__,
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
    if ((this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) && (this != (TimeAttackFlag *)0x0)) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,(this->klass->vtable).Initialize.method,(MethodInfo *)0x0);
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
  pTVar1 = (this->fields).timeAttackFlagObject;
  if (pTVar1 != (TimeAttackFlagObject *)0x0) {
    pGVar2 = (pTVar1->fields).useInteractionRotator;
    pTVar3 = (this->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      this_00 = (Predicate_1_Int32Enum_ *)func_?(TypeInfo__System__Func<int,_bool>);
      if (this_00 != (Predicate_1_Int32Enum_ *)0x0) {
        mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                  (this_00,(Object *)this,MethodInfo__TimeAttackFlag__DoReachTimeAttackFlag_int_,
                   (MethodInfo *)0x0);
        pUVar4 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
        if (pUVar4 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor__ctor
                    (pUVar4,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                     (Func_2_Int32_Boolean_ *)this_00,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,0,(MethodInfo *)0x0);
          (this->fields).useInteractor = pUVar4;
          func_?(&(this->fields).useInteractor,pUVar4);
          pUVar4 = (this->fields).useInteractor;
          pTVar3 = (this->fields).triggerBoxEvents;
          pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                   func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar5,(Object *)pUVar4,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar3 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
              pUVar4 = (this->fields).useInteractor;
              pTVar3 = (this->fields).triggerBoxEvents;
              pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar5,(Object *)pUVar4,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar3 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
                  pTVar1 = (this->fields).timeAttackFlagObject;
                  if (pTVar1 != (TimeAttackFlagObject *)0x0) {
                    pGVar2 = (pTVar1->fields).useInteractionRotator;
                    this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                    if (this_01 != (GameCoinLogic *)0x0) {
                      GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar2,0,(MethodInfo *)0x0);
                      pUVar4 = (this->fields).useInteractor;
                      if (pUVar4 != (UseInteractor *)0x0) {
                        UseInteractor::UseInteractor_AddRequirement
                                  (pUVar4,(UseRequirement *)this_01,(MethodInfo *)0x0);
                        pTVar1 = (this->fields).timeAttackFlagObject;
                        if (pTVar1 != (TimeAttackFlagObject *)0x0) {
                          tintObject = (pTVar1->fields).tintObject;
                          this_02 = (TeamRequirement *)func_?(TypeInfo__TeamRequirement);
                          if (this_02 != (TeamRequirement *)0x0) {
                            TeamRequirement::TeamRequirement__ctor
                                      (this_02,tintObject,0,(MethodInfo *)0x0);
                            pUVar4 = (this->fields).useInteractor;
                            if (pUVar4 != (UseInteractor *)0x0) {
                              UseInteractor::UseInteractor_AddRequirement
                                        (pUVar4,(UseRequirement *)this_02,(MethodInfo *)0x0);
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
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      if (((((ObjectPrefab__Class *)pTVar2->klass)->_1).typeHierarchyDepth <
           (TypeInfo__TimeAttackFlagObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pTVar2->klass)->_1).typeHierarchy
          [(TypeInfo__TimeAttackFlagObject->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__TimeAttackFlagObject)) goto code_?;
      (this->fields).timeAttackFlagObject = pTVar2;
      if (((((ObjectPrefab__Class *)pTVar2->klass)->_1).typeHierarchyDepth <
           (TypeInfo__TimeAttackFlagObject->_1).typeHierarchyDepth) ||
         ((((ObjectPrefab__Class *)pTVar2->klass)->_1).typeHierarchy
          [(TypeInfo__TimeAttackFlagObject->_1).typeHierarchyDepth - 1] !=
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
      if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
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
  }
  func_?();
  pTVar2 = extraout_EDX;
code_?:
  func_?(pTVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_get_DocumentationType
          (TimeAttackFlag *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TimeAttackFlag;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::TimeAttackFlag::TimeAttackFlag_triggerBoxEvents_TriggerEnter
               (TimeAttackFlag *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pTVar1 = this;
  pWVar2 = (this->fields).worldObjectEnableController;
  if (pWVar2 != (WorldObjectEnableController *)0x0) {
    if ((pWVar2->fields).enableState != 2) {
      return;
    }
    this_00 = (this->fields).useInteractor;
    if (this_00 != (UseInteractor *)0x0) {
      UVar3 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
      if ((UVar3 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
        return;
      }
      if (e != (TriggerEventArgs *)0x0) {
        if ((this->fields).isTimeAttackDebriefingOn != 0) {
          return;
        }
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (fVar4 < (this->fields).lastCaptureTime + _UNK_?) {
          return;
        }
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).lastCaptureTime = fVar4;
        this = (TimeAttackFlag *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pFVar5 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar5 != (FlagDebriefingControl *)0x0) {
          fVar4 = (pFVar5->fields).RunStartTime;
          if (cRam_? == '\0') {
            this = (TimeAttackFlag *)&TypeInfo__System__Math;
            func_?();
            cRam_? = '\x01';
          }
          pMVar6 = TypeInfo__System__Math;
          pMVar7 = (Math__Class *)(((float)this - fVar4) * _UNK_?);
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            pMVar7 = pMVar6;
          }
          fVar8 = (float10)func_?(SUB84((double)(float)pMVar7,0));
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_ReportReachedTimeAttackFlag
                      (this_01,(int)fVar8,(pTVar1->fields)._._._._.id,(MethodInfo *)0x0);
            pFVar5 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                               ((MethodInfo *)0x0);
            if (pFVar5 != (FlagDebriefingControl *)0x0) {
              FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
                        (pFVar5,(int)fVar8,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

