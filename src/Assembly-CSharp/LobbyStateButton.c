
/* Void CreateBriefing(WinningConditionType) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateBriefing
               (LobbyStateButton *this,WinningConditionType__Enum winCon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__LobbyStateButton____c___CreateBriefing_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass36_0___CreateBriefing_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass36_0);
    func_?(&TypeInfo__LobbyStateButton____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton____c__DisplayClass36_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if ((this->fields).shouldPop != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LobbyStateButton____c);
    }
    callbackFunction = TypeInfo__LobbyStateButton____c->static_fields->__9__36_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LobbyStateButton____c);
      }
      object = TypeInfo__LobbyStateButton____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__LobbyStateButton____c___CreateBriefing_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__LobbyStateButton____c->static_fields->__9__36_0 = callbackFunction;
      func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__36_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
               ,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  original = (this->fields).winningConditionBriefingMenu;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?();
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    winConType = 
    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
    ;
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
               MethodInfo__LobbyStateButton____c__DisplayClass36_0___CreateBriefing_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (value[1].klass != (Object__Class *)0x0) {
      WinningConditionBriefing::WinningConditionBriefing_Initialize
                ((WinningConditionBriefing *)value[1].klass,(WinningConditionType__Enum)winConType,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateSpawnRoleSelectionMenu() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateSpawnRoleSelectionMenu
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass35_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass35_0);
    func_?(&TypeInfo__LobbyStateButton____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton____c__DisplayClass35_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if ((this->fields).shouldPop != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LobbyStateButton____c);
    }
    callbackFunction = TypeInfo__LobbyStateButton____c->static_fields->__9__35_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LobbyStateButton____c);
      }
      object = TypeInfo__LobbyStateButton____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__LobbyStateButton____c->static_fields->__9__35_0 = callbackFunction;
      func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__35_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
               ,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  original = (this->fields).spawnRoleMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?();
    pOVar1 = value[1].klass;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) && (pOVar1 != (Object__Class *)0x0)) {
      SpawnRoleMenu::SpawnRoleMenu_Initialize
                ((SpawnRoleMenu *)pOVar1,(pMVar2->fields)._._Team_k__BackingField,(MethodInfo *)0x0)
      ;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__LobbyStateButton____c__DisplayClass35_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateTeamMenu() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateTeamMenu
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass34_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass34_0);
    func_?(&TypeInfo__LobbyStateButton____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton____c__DisplayClass34_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if ((this->fields).isInAd == 0) {
    if ((this->fields).shouldPop != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LobbyStateButton____c);
      }
      callbackFunction = TypeInfo__LobbyStateButton____c->static_fields->__9__34_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__LobbyStateButton____c);
        }
        object = TypeInfo__LobbyStateButton____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__LobbyStateButton____c->static_fields->__9__34_0 = callbackFunction;
        func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__34_0,callbackFunction)
        ;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 ,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    original = (this->fields).teamMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOStack1 =
         (Object__Class *)
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                   ((Object *)original,
                    TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    if (value == (Object *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    value[1].klass = pOStack1;
    pOStack3 = value + 1;
    func_?();
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
               MethodInfo__LobbyStateButton____c__DisplayClass34_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void DoLockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_DoLockCursor
               (LobbyStateButton *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).currentGameState == 2) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         this_03 != (MVLocalPlayer *)0x0)) {
        bVar3 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_03,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_04 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Observe
                    (this_04,0,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
          FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                    ((MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          bVar3 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
                            ((MethodInfo *)0x0);
          if (bVar3 == 0) {
            MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
            return;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
              (IPlayModeUI *)0x0) {
            func_?();
            return;
          }
        }
        else {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
              (IPlayModeUI *)0x0) {
            func_?();
            pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                               ((MethodInfo *)0x0);
            if ((pSVar4 != (SpawnRoleDataMediator *)0x0) &&
               (this_01 = (pSVar4->fields).SpawnRoleModeTypeWrapper,
               this_01 != (SpawnRoleModeTypeWrapper *)0x0)) {
              bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                                (this_01,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return;
              }
              pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar5 != (GameEventManager *)0x0) &&
                 (this_02 = (pGVar5->fields).AvatarCommandsPlayMode,
                 this_02 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
                RewardedAd__RegisterAdEvents_m__9((RewardedAd *)this_02,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      this_00 = (this->fields).lobbyStateButton;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,0,(MethodInfo *)0x0);
        MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  uVar6 = func_?(&stack0xfffffff4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void LockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_LockCursor
               (LobbyStateButton *this,MethodInfo *method)

{
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,1,(MethodInfo *)0x0);
  return;
}


/* Void OnCountDownEnd() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnCountDownEnd
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lobbyStateButton;
  if (this_00 != (Button *)0x0) {
    if ((this_00->fields)._.m_Interactable != 0) {
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (this_02 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                             (pMVar1,(MethodInfo *)0x0),
        this_02 != (MVWorldObjectClientManager *)0x0)) &&
       (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (this_02,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
       pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
      iVar3 = (pLVar2->fields)._size;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_01 = (pMVar1->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
        iVar4 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
        if (1 < iVar4) {
          LobbyStateButton_CreateTeamMenu(this,(MethodInfo *)0x0);
          return;
        }
        if (iVar3 < 1) {
          LobbyStateButton_StartPlaying(this,(MethodInfo *)0x0);
          return;
        }
        LobbyStateButton_CreateSpawnRoleSelectionMenu(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnEnable
               (LobbyStateButton *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyStateButton;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerDown
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    if (((eventData->fields)._button_k__BackingField == 0) && ((this->fields).isMoveOverButton != 0)
       ) {
      LobbyStateButton_OnPressPlay(this,(MethodInfo *)0x0);
    }
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerEnter
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMoveOverButton = 1;
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerExit
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMoveOverButton = 0;
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPressPlay
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__LobbyStateButton__OnShowAdFinishedEnterPlaymode_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton__OnShowAdFinishedSpawnRolesPresent_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass23_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton____c__DisplayClass23_0;
  value = (LobbyStateButton *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (LobbyStateButton *)0x0) {
    (value->fields)._._._._.m_CachedPtr = this;
    func_?(&value->fields,this);
    bVar1 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                      ((WinningConditionType__Enum *)&(value->fields).teamMenuPrefab,
                       (MethodInfo *)0x0);
    *(bool *)&(value->fields)._.m_CancellationTokenSource = bVar1;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 != (MVNetworkGame *)0x0) &&
        (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                             (pMVar2,(MethodInfo *)0x0),
        this_01 != (MVWorldObjectClientManager *)0x0)) &&
       (pLVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
       pLVar3 != (List_1_MVWorldObjectClient_ *)0x0)) {
      iVar4 = (pLVar3->fields)._size;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar5 != (MVLocalPlayer *)0x0)) {
        bVar1 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(pMVar5,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
             pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
          if ((pMVar5->fields)._.playerState == 3) {
            this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Observe
                      (this_02,0,(MethodInfo *)0x0);
          }
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
          iVar6 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
          if (iVar6 < 2) {
            if (*(char *)&(value->fields)._.m_CancellationTokenSource == '\0') {
              this_03 = (UnityAction_1_System_Int32Enum_ *)
                        func_?(
                                       TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                       );
              value = this;
              method_1 = 
              MethodInfo__LobbyStateButton__OnShowAdFinishedSpawnRolesPresent_Assets__Scripts__AdIntegration__InterstitialAdResult_
              ;
              if (iVar4 < 1) {
                method_1 = 
                MethodInfo__LobbyStateButton__OnShowAdFinishedEnterPlaymode_Assets__Scripts__AdIntegration__InterstitialAdResult_
                ;
              }
            }
            else {
              this_03 = (UnityAction_1_System_Int32Enum_ *)
                        func_?(
                                       TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                       );
              method_1 = 
              MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
              ;
            }
          }
          else {
            this_03 = (UnityAction_1_System_Int32Enum_ *)
                      func_?(
                                     TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                     );
            method_1 = 
            MethodInfo__LobbyStateButton____c__DisplayClass23_0___OnPressPlay_b__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
            ;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor(this_03,(Object *)value,method_1,(MethodInfo *)0x0);
          LobbyStateButton_PressPlayWithCallback
                    (this,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)this_03,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnShowAdFinishedEnterPlaymode(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnShowAdFinishedEnterPlaymode
               (LobbyStateButton *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).currentGameState == 2) {
      LobbyStateButton_StartPlaying(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (this->fields).lobbyStateButton;
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        return;
      }
      pMVar3 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if (in_stack_4 == '\0') {
        if ((pMVar3 != (MVGameControllerDesktop *)0x0) &&
           ((pMVar3->fields).lockCursorManager != (ILockCursorManager *)0x0)) {
          func_?();
          return;
        }
      }
      else if ((pMVar3 != (MVGameControllerDesktop *)0x0) &&
              ((pMVar3->fields).lockCursorManager != (ILockCursorManager *)0x0)) {
        func_?();
        return;
      }
    }
  }
  uVar5 = func_?(&stack0xfffffff4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnShowAdFinishedSpawnRolesPresent(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnShowAdFinishedSpawnRolesPresent
               (LobbyStateButton *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).currentGameState != 2) {
      LobbyStateButton_CreateSpawnRoleSelectionMenu(this,(MethodInfo *)0x0);
      return;
    }
    if ((this->fields).lobbyStateButton != (Button *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      bVar3 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetStruct
                        ((bool *)0x9c,0,
                         bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                        );
      if (bVar3 != 0) {
        if (cRam_? == '\0') {
          if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                   EventSystem_get_current((MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pEVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?();
            }
            pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar4 == (EventSystem *)0x0) goto code_?;
            x = (pEVar4->fields).m_CurrentSelected;
            y = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)0x0,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar4 == (EventSystem *)0x0) goto code_?;
              UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_SetSelectedGameObject_1(pEVar4,(GameObject *)0x0,(MethodInfo *)0x0);
            }
          }
        }
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                  ((Selectable *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  uVar5 = func_?(&stack0xfffffff4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PopThenLockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_PopThenLockCursor
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__LobbyStateButton____c___PopThenLockCursor_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateButton____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LobbyStateButton____c);
  }
  callbackFunction = TypeInfo__LobbyStateButton____c->static_fields->__9__27_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LobbyStateButton____c);
    }
    object = TypeInfo__LobbyStateButton____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__LobbyStateButton____c___PopThenLockCursor_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyStateButton____c->static_fields->__9__27_0 = callbackFunction;
    func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__27_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar2->fields).currentGameState == 2) {
      LobbyStateButton_StartPlaying(this,(MethodInfo *)0x0);
      return;
    }
    this_00 = (this->fields).lobbyStateButton;
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PressPlayWithCallback(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_PressPlayWithCallback
               (LobbyStateButton *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass24_0___PressPlayWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass24_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton____c__DisplayClass24_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) goto code_?;
  value[1].klass = (Object__Class *)this;
  func_?(value + 1,this);
  value[1].monitor = (MonitorData *)callback;
  func_?(&value[1].monitor,callback);
  bVar1 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    (this->fields).isInAd = 0;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) goto code_?;
    this_00 = (this->fields).embeddedPlayerConfig;
    if (this_00 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar2 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&pLStack_3,this_00,(MethodInfo *)0x0);
    bVar1 = pEVar2->showPlayButtonAd;
    (this->fields).isInAd = bVar1 != 0;
    if (bVar1 != 0) {
      pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,value,
                 MethodInfo__LobbyStateButton____c__DisplayClass24_0___PressPlayWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar4 != (IAdManager *)0x0) {
        func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4,this_01,7);
        return;
      }
      goto code_?;
    }
  }
  pMVar5 = value[1].monitor;
  if (pMVar5 != (MonitorData *)0x0) {
    (**(code **)(pMVar5 + 0xc))(*(undefined4 *)(pMVar5 + 0x20),3,*(undefined4 *)(pMVar5 + 0x14));
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_Start
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&StringLiteral_Lobby_state_button_interstitial_);
    cRam_? = '\x01';
  }
  WStack_1 = WinningConditionType__Enum_Collectible;
  bVar2 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                    (&WStack_1,(MethodInfo *)0x0);
  pIVar3 = (this->fields).countdownFill;
  if (bVar2 == 0) {
    if (pIVar3 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar3,1,(MethodInfo *)0x0);
    (this->fields).shouldUpdateFillImage = 1;
  }
  else {
    if (pIVar3 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar3,0,(MethodInfo *)0x0);
  }
  bVar2 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      pEVar4 = (this->fields).embeddedPlayerConfig;
      if (pEVar4 != (EmbeddedPlayerConfig *)0x0) {
        pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                           ((EmbeddedSiteConfigData *)&pLStack_6,pEVar4,(MethodInfo *)0x0);
        if (pEVar5->showPlayButtonAd == 0) {
          return;
        }
        pIVar7 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        if (pIVar7 != (IAdManager *)0x0) {
          puStack_8 = (undefined *)0x5;
          cVar9 = func_?();
          if (cVar9 == '\0') {
            return;
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Lobby_state_button_interstitial_,(MethodInfo *)0x0);
          pIVar3 = (this->fields).countdownFill;
          if (pIVar3 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar3,0,(MethodInfo *)0x0);
            pEVar4 = (this->fields).embeddedPlayerConfig;
            (this->fields).shouldUpdateFillImage = 0;
            if (pEVar4 != (EmbeddedPlayerConfig *)0x0) {
              pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                 ((EmbeddedSiteConfigData *)&pLStack_6,pEVar4,(MethodInfo *)0x0);
              uVar10 = pEVar5->noPlayButtonVideoIcon;
              if (uVar10 != '\0') {
                return;
              }
              (this->fields).showingAdSprite = 1;
              return;
            }
          }
        }
      }
code_?:
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_StartPlaying
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_02 != (MVNetworkGame *)0x0) &&
     (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
     this_03 != (MVLocalPlayer *)0x0)) {
    bVar1 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_03,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_04 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Observe
                (this_04,0,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
      FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                ((MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      bVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
      if (bVar1 == 0) {
        MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        func_?();
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        func_?();
        pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                           ((MethodInfo *)0x0);
        if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
           (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
           this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
          bVar1 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                            (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return;
          }
          pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar3 != (GameEventManager *)0x0) &&
             (this_01 = (pGVar3->fields).AvatarCommandsPlayMode,
             this_01 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
            GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__9
                      ((RewardedAd *)this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_Update
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 == (MVNetworkGameStateListener *)0x0)) goto code_?;
  iVar3 = (pMVar2->fields).currentGameState;
  bVar4 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
  if (bVar4 == 0) {
    bVar5 = false;
  }
  else {
    pIVar6 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar6 == (IAdManager *)0x0) goto code_?;
    cVar7 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar6);
    if (cVar7 != '\0') {
      pEVar8 = (this->fields).embeddedPlayerConfig;
      if (pEVar8 == (EmbeddedPlayerConfig *)0x0) goto code_?;
      pEVar9 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                          ((EmbeddedSiteConfigData *)&stack0xffffffe4,pEVar8,(MethodInfo *)0x0);
      if (pEVar9->showPlayButtonAd != 0) {
        pEVar8 = (this->fields).embeddedPlayerConfig;
        if (pEVar8 == (EmbeddedPlayerConfig *)0x0) goto code_?;
        pEVar9 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                            ((EmbeddedSiteConfigData *)&stack0xffffffe4,pEVar8,(MethodInfo *)0x0);
        uVar10 = pEVar9->noPlayButtonVideoIcon;
        bVar5 = uVar10 == '\0';
        goto code_?;
      }
    }
    bVar5 = false;
  }
code_?:
  bVar11 = iVar3 != 2;
  if (bVar5 != (bool)(this->fields).showingAdSprite) {
    (this->fields).showingAdSprite = bVar5;
  }
  if ((bVar11) || ((this->fields).shouldUpdateFillImage == 0)) {
    pIVar12 = (this->fields).countdownFill;
    if ((pIVar12 != (Image *)0x0) &&
       (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar12,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0))
    {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar13,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        LobbyStateButton_OnCountDownEnd(this,(MethodInfo *)0x0);
        pIVar12 = (this->fields).countdownFill;
        if ((pIVar12 == (Image *)0x0) ||
           (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar12,(MethodInfo *)0x0),
           pGVar13 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar13,0,(MethodInfo *)0x0);
      }
      if (!bVar11) {
        return;
      }
      LobbyStateButton_OnCountDownEnd(this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pIVar12 = (this->fields).countdownFill;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
        pMVar2 != (MVNetworkGameStateListener *)0x0)) &&
       (value = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                          (pMVar2,(MethodInfo *)0x0), pIVar12 != (Image *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                (pIVar12,value,(MethodInfo *)0x0);
      pIVar12 = (this->fields).countdownFill;
      if ((pIVar12 != (Image *)0x0) &&
         (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar12,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0)
         ) {
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar13,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return;
        }
        pIVar12 = (this->fields).countdownFill;
        if ((pIVar12 != (Image *)0x0) &&
           (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIVar12,(MethodInfo *)0x0),
           pGVar13 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar13,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean get_IsRoundEnded() */

bool Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_get_IsRoundEnded
               (LobbyStateButton *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    return (pMVar2->fields).currentGameState == 2;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

