
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
          method_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (method_00 != (MVLocalPlayer *)0x0) {
            fVar6 = RTG::DirectionalLightGizmo3DLookAndFeel::
                    DirectionalLightGizmo3DLookAndFeel_get_DefaultLightRayLength
                              ((MethodInfo *)method_00);
            (this->fields).duration = fVar6;
            pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (pGVar7 != (GameEventManager *)0x0) {
              this_00 = (pGVar7->fields).AvatarCommandsPlayMode;
              this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_01,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__
                         ,(MethodInfo *)0x0);
              if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                GameEventManager+AvatarCommandsPlayModeManager::
                GameEventManager_AvatarCommandsPlayModeManager_add_OnReviveTimeElapsed
                          (this_00,(Action *)this_01,(MethodInfo *)0x0);
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
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<IWinningCondition>);
    if (this != (ReviveUIHandlerBase *)0x0) {
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,(MethodInfo *)0x0)
      ;
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar3 = (Action_1_IWinningCondition_ *)func_?();
        if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
        iVar5 = func_?();
        if (iVar5 == 0) goto code_?;
      }
      func_?();
      pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (pGVar6 != (GameEventManager *)0x0) {
        this_00 = (pGVar6->fields).AvatarCommandsPlayMode;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
                   (MethodInfo *)0x0);
        if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
                    (this_00,(Action *)this_02,(MethodInfo *)0x0);
          return;
        }
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
  method_00 = TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
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
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,(this->klass->vtable).Initialize.methodPtr,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
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
  method_00 = TypeInfo__ReviveUIHandlerBase____c__DisplayClass23_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      if (this != (ReviveUIHandlerBase *)0x0) {
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_00,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
                   (MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        }
        else {
          pAVar2 = (Action_1_IWinningCondition_ *)func_?();
          if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
          (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
          iVar4 = func_?();
          if (iVar4 == 0) goto code_?;
        }
        func_?();
        (this->fields).watchAdClicked = 1;
        MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
        original = (this->fields).continuePopup;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar5 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                           );
        value[1].klass = pOVar5;
        func_?();
        pOVar5 = value[1].klass;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,(this->klass->vtable).Initialize.methodPtr,
                   (MethodInfo *)0x0);
        if (pOVar5 != (Object__Class *)0x0) {
          ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                    ((ContinueButtonLockCursor *)pOVar5,(Action *)this_01,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
              (IEditModeUI *)0x0) {
            (*(code *)(this->klass->vtable).__unknown_1.method)();
            return;
          }
          pIVar6 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          pIVar7 = pIVar6;
          this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_02,(Object *)this,(this->klass->vtable).__unknown_2.methodPtr,
                     (MethodInfo *)0x0);
          uVar8 = (*(code *)(this->klass->vtable).__unknown.method)();
          if (pIVar6 != (IAdManager *)0x0) {
            pIVar9 = pIVar6->klass;
            uVar10 = 0;
            uVar11._0_1_ = (pIVar9->_1).rank;
            uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
            if (uVar11 != 0) {
              do {
                if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                    (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                  ppMVar12 = &(&(pIVar9->vtable).RequestRewardedAd)
                              [pIVar9->interfaceOffsets[uVar10].offset].method;
                  goto code_?;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
            }
            ppMVar12 = (MethodInfo **)
                       func_?(pIVar7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,
                                       6);
code_?:
            (*(code *)*ppMVar12)(pIVar7,this_02,uVar8,ppMVar12[1]);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
                (this_00,(Action *)this_01,(MethodInfo *)0x0);
      if ((this->fields).watchAdClicked == 0) {
        (*(code *)(this->klass->vtable).__unknown_1.method)();
      }
      return;
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
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<IWinningCondition>);
    if (this != (ReviveUIHandlerBase *)0x0) {
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,(MethodInfo *)0x0)
      ;
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
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (pIVar2,_UNK_? - (fVar1 - (this->fields).started) / (this->fields).duration,
                 (MethodInfo *)0x0);
      pTVar3 = (this->fields).timerText;
      func_?();
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3,pSVar4);
        return;
      }
    }
  }
  else {
    pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar5 != (GameEventManager *)0x0) &&
       (this_00 = (pGVar5->fields).AvatarCommandsPlayMode,
       this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_ReviveTimeElapsed(this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      pIVar2 = (this->fields).timerFill;
      if (pIVar2 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar2,0.0,(MethodInfo *)0x0);
        pTStack6 = (this->fields).timerText;
        if (pTStack6 != (Text *)0x0) {
          pIStack7 =
               (pTStack6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          pSStack8 = StringLiteral__0;
          (*(code *)(pTStack6->klass->vtable).set_text.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

