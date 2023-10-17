
/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
               (ReviveUIHandlerBase *this,UnityAction *onContinueClicked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).continueButton;
  if ((pBVar1 != (Button *)0x0) &&
     (pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick, pUVar2 != (UnityEvent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
              (pUVar2,onContinueClicked,(MethodInfo *)0x0);
    pBVar1 = (this->fields).declineButton;
    if ((pBVar1 != (Button *)0x0) &&
       (pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick, pUVar2 != (UnityEvent *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (pUVar2,onContinueClicked,(MethodInfo *)0x0);
      bVar3 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      (this->fields).isSubscriber = bVar3;
      pGVar4 = (this->fields).reviveButton;
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        pGVar4 = (this->fields).icon;
        MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,MVar5 != MVGameMode__Enum_Edit,(MethodInfo *)0x0);
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          (this->fields).started = fVar6;
          this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (this_01 != (MVLocalPlayer *)0x0) {
            fVar6 = MVLocalPlayer::MVLocalPlayer_get_ReviveTimeout(this_01,(MethodInfo *)0x0);
            (this->fields).duration = fVar6;
            pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (pGVar7 != (GameEventManager *)0x0) {
              this_00 = (pGVar7->fields).AvatarCommandsPlayMode;
              this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_02,(Object *)this,
                           MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,(MethodInfo *)0x0);
                if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                  GameEventManager+AvatarCommandsPlayModeManager::
                  GameEventManager_AvatarCommandsPlayModeManager_add_OnReviveTimeElapsed
                            (this_00,(Action *)this_02,(MethodInfo *)0x0);
                  pGVar4 = (this->fields).countdown;
                  if (pGVar4 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,(this->fields).isSubscriber == 0,(MethodInfo *)0x0);
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_OnDestroy
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar2 != (MVNetworkGame *)0x0) &&
      (this_01 = (Action_1_Object_ *)
                 func_?(TypeInfo__System__Action<IWinningCondition>,
                                 (pMVar2->fields).OnWinningConditionFulfilled),
      this_01 != (Action_1_Object_ *)0x0)) && (this != (ReviveUIHandlerBase *)0x0)) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)this,(this->klass->vtable).RoundEnded.method,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (unaff_EBX,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar4 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar4;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar6 != (GameEventManager *)0x0) {
      this_00 = (pGVar6->fields).AvatarCommandsPlayMode;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if ((this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
         (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
                     (MethodInfo *)0x0),
         this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        GameEventManager+AvatarCommandsPlayModeManager::
        GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
                  (this_00,(Action *)this_02,(MethodInfo *)0x0);
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


/* Void OnSubscriberClicked() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_OnSubscriberClicked
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    original = (this->fields).continuePopup;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,(this->klass->vtable).__unknown_2.method,(MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                  ((ContinueButtonLockCursor *)pOVar1,(Action *)this_00,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnWatchAdClicked() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_OnWatchAdClicked
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandlerBase____c__DisplayClass23_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ReviveUIHandlerBase____c__DisplayClass23_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      a = (pMVar1->fields).OnWinningConditionFulfilled;
      unaff_EBX = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
      if ((unaff_EBX != (Action_1_Object_ *)0x0) && (this != (ReviveUIHandlerBase *)0x0)) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (unaff_EBX,(Object *)this,(this->klass->vtable).RoundEnded.method,
                   (MethodInfo *)0x0);
        unaff_EBX = (Action_1_Object_ *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)unaff_EBX,(MethodInfo *)0x0);
        if (unaff_EBX == (Action_1_Object_ *)0x0) {
          (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        }
        else {
          puVar2 = &UNK_?;
          iVar3 = func_?(unaff_EBX);
          if (iVar3 == 0) goto code_?;
          *(int *)(puVar2 + 0xb8) = iVar3;
          pMVar1 = (MVNetworkGame *)&UNK_?;
          iVar3 = func_?(unaff_EBX);
          if (iVar3 == 0) goto code_?;
        }
        func_?(&(pMVar1->fields).OnWinningConditionFulfilled);
        (this->fields).watchAdClicked = 1;
        MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
        original = (this->fields).continuePopup;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar4 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                           );
        value[1].klass = pOVar4;
        func_?();
        pOVar4 = value[1].klass;
        unaff_EBX = (Action_1_Object_ *)func_?();
        if ((unaff_EBX != (Action_1_Object_ *)0x0) &&
           (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      ((NavMesh_OnNavMeshPreUpdate *)unaff_EBX,(Object *)this,
                       (this->klass->vtable).__unknown_2.method,(MethodInfo *)0x0),
           pOVar4 != (Object__Class *)0x0)) {
          ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                    ((ContinueButtonLockCursor *)pOVar4,(Action *)unaff_EBX,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          unaff_EBX = (Action_1_Object_ *)0x0;
          if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       ,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
                (IEditModeUI *)0x0) {
              (*(this->klass->vtable).__unknown_1.methodPtr)(this);
              return;
            }
            unaff_EBX = (Action_1_Object_ *)
                        MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
            if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (this_00,(Object *)this,(this->klass->vtable).__unknown_1.method,
                         (MethodInfo *)0x0);
              uVar5 = (*(this->klass->vtable).__unknown.methodPtr)
                                (this,(this->klass->vtable).__unknown.method);
              if (unaff_EBX != (Action_1_Object_ *)0x0) {
                uVar6 = 0;
                uVar7 = (unaff_EBX->klass->_1).interface_offsets_count;
                if (uVar7 != 0) {
                  do {
                    if (unaff_EBX->klass->interfaceOffsets[uVar6].interfaceType ==
                        (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                      pVVar8 = &(unaff_EBX->klass->vtable).Clone_1 +
                               unaff_EBX->klass->interfaceOffsets[uVar6].offset;
                      goto code_?;
                    }
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < uVar7);
                }
                pVVar8 = (VirtualInvokeData *)
                         func_?(unaff_EBX,
                                         TypeInfo__Assets__Scripts__AdIntegration__IAdManager,6);
code_?:
                (*pVVar8->methodPtr)(unaff_EBX,this_00,uVar5,pVVar8->method);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_EBX);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ReviveTimeElapsed() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_ReviveTimeElapsed
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 != (GameEventManager *)0x0) {
    this_00 = (pGVar1->fields).AvatarCommandsPlayMode;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
                 (MethodInfo *)0x0);
      if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
        GameEventManager+AvatarCommandsPlayModeManager::
        GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
                  (this_00,(Action *)this_01,(MethodInfo *)0x0);
        if ((this->fields).watchAdClicked == 0) {
          (*(this->klass->vtable).__unknown_1.methodPtr)();
        }
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RoundEnded(IWinningCondition) */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_RoundEnded
               (ReviveUIHandlerBase *this,IWinningCondition *condition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<IWinningCondition>);
    if ((this_00 != (Action_1_Object_ *)0x0) && (this != (ReviveUIHandlerBase *)0x0)) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (this_00,(Object *)this,(this->klass->vtable).RoundEnded.method,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
code_?:
        func_?();
        return;
      }
      pAVar2 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar2 != (Action_1_IWinningCondition_ *)0x0) {
        (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
        iVar4 = func_?();
        if (iVar4 != 0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_Update
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  if ((this->fields).isSubscriber != 0) {
    return;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 - (this->fields).started < (this->fields).duration) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pIVar2 = (this->fields).timerFill;
    if (pIVar2 != (Image *)0x0) {
      uStack_3._4_4_ =
           (Math__Class **)
           (_UNK_? - (fVar1 - (this->fields).started) / (this->fields).duration);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (pIVar2,(float)uStack_3._4_4_,(MethodInfo *)0x0);
      fVar1 = (this->fields).duration;
      pTVar4 = (this->fields).timerText;
      if (cRam_? == '\0') {
        uStack_3._4_4_ = &TypeInfo__System__Math;
        uStack_3._0_4_ = (int32_t)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      fVar1 = fVar1 * (float)uStack_3._4_4_;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        uStack_3._4_4_ = (Math__Class **)TypeInfo__System__Math;
        uStack_3._0_4_ = (int32_t)&UNK_?;
        func_?();
      }
      uStack_3 = (double)fVar1;
      fVar5 = (float10)func_?();
      uStack_3._0_4_ = (int32_t)fVar5;
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&uStack_3,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)
                  (pTVar4,pSVar6,(pTVar4->klass->vtable).set_text.method);
        return;
      }
    }
  }
  else {
    pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar7 != (GameEventManager *)0x0) &&
       (this_00 = (pGVar7->fields).AvatarCommandsPlayMode,
       this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_ReviveTimeElapsed(this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      pIVar2 = (this->fields).timerFill;
      if (pIVar2 != (Image *)0x0) {
        uStack_3._4_4_ = (Math__Class **)&UNK_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar2,0.0,(MethodInfo *)0x0);
        pTVar4 = (this->fields).timerText;
        if (pTVar4 != (Text *)0x0) {
          pTVar8 = pTVar4->klass;
          pMStack9 = (pTVar8->vtable).set_text.method;
          pSStack10 = StringLiteral__0;
          (*(pTVar8->vtable).set_text.methodPtr)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

