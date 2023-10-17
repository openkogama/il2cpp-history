
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
                    MethodInfo__LobbyStateButton____c___CreateBriefing_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass39_0___CreateBriefing_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass39_0);
    func_?(&TypeInfo__LobbyStateButton____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LobbyStateButton____c__DisplayClass39_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    if ((this->fields).shouldPop != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LobbyStateButton____c);
      }
      callbackFunction = TypeInfo__LobbyStateButton____c->static_fields->__9__39_0;
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
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__LobbyStateButton____c___CreateBriefing_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__LobbyStateButton____c->static_fields->__9__39_0 = callbackFunction;
        func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__39_0,callbackFunction)
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
    original = (this->fields).winningConditionBriefingMenu;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                       );
    value[1].klass = pOVar1;
    func_?();
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction_00 =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__LobbyStateButton____c__DisplayClass39_0___CreateBriefing_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (value[1].klass != (Object__Class *)0x0) {
        WinningConditionBriefing::WinningConditionBriefing_Initialize
                  ((WinningConditionBriefing *)value[1].klass,winCon,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
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
                    MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass38_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass38_0);
    func_?(&TypeInfo__LobbyStateButton____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LobbyStateButton____c__DisplayClass38_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    if ((this->fields).shouldPop != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LobbyStateButton____c);
      }
      callbackFunction = TypeInfo__LobbyStateButton____c->static_fields->__9__38_0;
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
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__LobbyStateButton____c___CreateSpawnRoleSelectionMenu_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__LobbyStateButton____c->static_fields->__9__38_0 = callbackFunction;
        func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__38_0,callbackFunction)
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
    original = (this->fields).spawnRoleMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                       );
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
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                   MethodInfo__LobbyStateButton____c__DisplayClass38_0___CreateSpawnRoleSelectionMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
code_?:
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
                    MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass37_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass37_0);
    func_?(&TypeInfo__LobbyStateButton____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LobbyStateButton____c__DisplayClass37_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    if ((this->fields).isInAd == 0) {
      if ((this->fields).shouldPop != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__LobbyStateButton____c);
        }
        callbackFunction = TypeInfo__LobbyStateButton____c->static_fields->__9__37_0;
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
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__LobbyStateButton____c___CreateTeamMenu_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__LobbyStateButton____c->static_fields->__9__37_0 = callbackFunction;
          func_?(&TypeInfo__LobbyStateButton____c->static_fields->__9__37_0,
                          callbackFunction);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
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
      pOVar1 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_)
      ;
      value[1].klass = pOVar1;
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__LobbyStateButton____c__DisplayClass37_0___CreateTeamMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      this_00 = (this->fields).lobbyStateButton;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,0,(MethodInfo *)0x0);
        MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
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
                GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
                RewardedInterstitialAd__RegisterAdEvents_m__2
                          ((RewardedInterstitialAd *)this_02,(Object *)0x0,in_stack_6,
                           in_stack_7);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar8 = func_?(&stack0xfffffff4);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
                    MethodInfo__LobbyStateButton____c__DisplayClass26_0___OnPressPlay_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass26_0___OnPressPlay_b__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass26_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LobbyStateButton____c__DisplayClass26_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    bVar1 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                      ((WinningConditionType__Enum *)(value + 2),(MethodInfo *)0x0);
    *(bool *)&value[1].monitor = bVar1;
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
            if (*(char *)&value[1].monitor == '\0') {
              pUVar7 = (UnityAction_1_System_Int32Enum_ *)
                       func_?(
                                      TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                      );
              if (iVar4 < 1) {
                if (pUVar7 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]
                  ::UnityAction_1_System_Int32Enum___ctor
                            (pUVar7,(Object *)this,
                             MethodInfo__LobbyStateButton__OnShowAdFinishedEnterPlaymode_Assets__Scripts__AdIntegration__InterstitialAdResult_
                             ,(MethodInfo *)0x0);
                  LobbyStateButton_RequestAdWithCallback
                            (this,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)
                                  pUVar7,(MethodInfo *)0x0);
                  return;
                }
              }
              else if (pUVar7 != (UnityAction_1_System_Int32Enum_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
                UnityAction_1_System_Int32Enum___ctor
                          (pUVar7,(Object *)this,
                           MethodInfo__LobbyStateButton__OnShowAdFinishedSpawnRolesPresent_Assets__Scripts__AdIntegration__InterstitialAdResult_
                           ,(MethodInfo *)0x0);
                LobbyStateButton_RequestAdWithCallback
                          (this,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)
                                pUVar7,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
            pUVar7 = (UnityAction_1_System_Int32Enum_ *)
                     func_?(
                                    TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                    );
            method_1 = 
            MethodInfo__LobbyStateButton____c__DisplayClass26_0___OnPressPlay_b__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
            ;
          }
          else {
            pUVar7 = (UnityAction_1_System_Int32Enum_ *)
                     func_?(
                                    TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                    );
            method_1 = 
            MethodInfo__LobbyStateButton____c__DisplayClass26_0___OnPressPlay_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
            ;
          }
          if (pUVar7 != (UnityAction_1_System_Int32Enum_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor(pUVar7,value,method_1,(MethodInfo *)0x0);
            LobbyStateButton_RequestAdWithCallback
                      (this,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)pUVar7,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    if ((pMVar2->fields).currentGameState != 2) {
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
                        ((bool *)0x98,0,
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
                    MethodInfo__LobbyStateButton____c___PopThenLockCursor_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateButton____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__LobbyStateButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LobbyStateButton____c);
  }
  callbackFunction = TypeInfo__LobbyStateButton____c->static_fields->__9__30_0;
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
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__LobbyStateButton____c___PopThenLockCursor_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyStateButton____c->static_fields->__9__30_0 = callbackFunction;
    func_?();
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
    if ((pMVar2->fields).currentGameState != 2) {
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestAdWithCallback(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_RequestAdWithCallback
               (LobbyStateButton *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__LobbyStateButton____c__DisplayClass27_0___RequestAdWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&TypeInfo__LobbyStateButton____c__DisplayClass27_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LobbyStateButton____c__DisplayClass27_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)callback;
    func_?(&value[1].monitor,callback);
    this_00 = (this->fields).embeddedPlayerConfig;
    (this->fields).isInAd = 1;
    if (this_00 != (EmbeddedPlayerConfig *)0x0) {
      pEVar1 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                         (&EStack_2,this_00,(MethodInfo *)0x0);
      pLStack_3 = pEVar1->sites;
      iStack_4 = pEVar1->siteEnum;
      uStack_5._0_1_ = pEVar1->showTouristPromotion;
      uStack_5._1_1_ = pEVar1->allowsOpenInNewTab;
      uStack_5._2_1_ = pEVar1->allowsRedirectToWebpage;
      uStack_5._3_1_ = pEVar1->allowsModals;
      uStack_6._0_1_ = pEVar1->integratedSdk;
      uStack_6._1_1_ = pEVar1->allowsFallbackAds;
      uStack_6._2_1_ = pEVar1->showPlayButtonAd;
      uStack_6._3_1_ = pEVar1->hideGoldShop;
      bVar7 = MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled((MethodInfo *)0x0);
      if (bVar7 != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
             (IEditModeUI *)0x0) && ((char)((uint)uStack_6 >> 0x10) != '\0')) {
          pIVar8 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          this_01 = (UnityAction_1_System_Int32Enum_ *)
                    func_?(
                                   TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                   );
          if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_01,value,
                       MethodInfo__LobbyStateButton____c__DisplayClass27_0___RequestAdWithCallback_b__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
                       ,(MethodInfo *)0x0);
            if (pIVar8 != (IAdManager *)0x0) {
              func_?(7,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar8,this_01,
                              7);
              return;
            }
          }
          goto code_?;
        }
      }
      (this->fields).isInAd = 0;
      pMVar9 = value[1].monitor;
      if (pMVar9 != (MonitorData *)0x0) {
        (**(code **)(pMVar9 + 0xc))(*(undefined4 *)(pMVar9 + 0x20),3,*(undefined4 *)(pMVar9 + 0x14))
        ;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  puStack_1 = (undefined *)0x0;
  bVar2 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                    ((WinningConditionType__Enum *)&puStack_1,(MethodInfo *)0x0);
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
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
      this_00 = (this->fields).embeddedPlayerConfig;
      if (this_00 != (EmbeddedPlayerConfig *)0x0) {
        pEVar4 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                           ((EmbeddedSiteConfigData *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
        if (pEVar4->showPlayButtonAd == 0) {
          return;
        }
        pIVar5 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        if (pIVar5 != (IAdManager *)0x0) {
          cVar6 = func_?();
          if (cVar6 == '\0') {
            return;
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Lobby_state_button_interstitial_,(MethodInfo *)0x0);
          pIVar3 = (this->fields).countdownFill;
          if (pIVar3 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar3,0,(MethodInfo *)0x0);
            pIVar3 = (this->fields).playButtonImage;
            (this->fields).shouldUpdateFillImage = 0;
            (this->fields).showingAdSprite = 1;
            if (pIVar3 != (Image *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                        (pIVar3,(this->fields).watchAdPlayButtonImageSprite,(MethodInfo *)0x0);
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
            GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
            RewardedInterstitialAd__RegisterAdEvents_m__2
                      ((RewardedInterstitialAd *)this_01,(Object *)0x0,in_stack_4,
                       in_stack_5);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    iVar3 = (pMVar2->fields).currentGameState;
    pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar4 != (IAdManager *)0x0) {
      cVar5 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4);
      if ((cVar5 == '\0') && ((this->fields).showingAdSprite != 0)) {
        pIVar6 = (this->fields).playButtonImage;
        if (pIVar6 == (Image *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                  (pIVar6,(this->fields).playButtonImageSprite,(MethodInfo *)0x0);
        (this->fields).showingAdSprite = 0;
      }
      else {
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        if (pIVar4 == (IAdManager *)0x0) goto code_?;
        cVar5 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4);
        if ((cVar5 != '\0') && ((this->fields).showingAdSprite == 0)) {
          pIVar6 = (this->fields).playButtonImage;
          if (pIVar6 == (Image *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (pIVar6,(this->fields).watchAdPlayButtonImageSprite,(MethodInfo *)0x0);
          (this->fields).showingAdSprite = 1;
        }
      }
      bVar7 = iVar3 != 2;
      if ((bVar7) || ((this->fields).shouldUpdateFillImage == 0)) {
        pIVar6 = (this->fields).countdownFill;
        if ((pIVar6 != (Image *)0x0) &&
           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pIVar6,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)
           ) {
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar8,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            LobbyStateButton_OnCountDownEnd(this,(MethodInfo *)0x0);
            pIVar6 = (this->fields).countdownFill;
            if ((pIVar6 == (Image *)0x0) ||
               (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pIVar6,(MethodInfo *)0x0),
               pGVar8 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar8,0,(MethodInfo *)0x0);
          }
          if (!bVar7) {
            return;
          }
          LobbyStateButton_OnCountDownEnd(this,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pIVar6 = (this->fields).countdownFill;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 != (MVNetworkGame *)0x0) &&
            (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
            pMVar2 != (MVNetworkGameStateListener *)0x0)) &&
           (value = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                              (pMVar2,(MethodInfo *)0x0), pIVar6 != (Image *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                    (pIVar6,value,(MethodInfo *)0x0);
          pIVar6 = (this->fields).countdownFill;
          if ((pIVar6 != (Image *)0x0) &&
             (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pIVar6,(MethodInfo *)0x0),
             pGVar8 != (GameObject *)0x0)) {
            bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar8,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              return;
            }
            pIVar6 = (this->fields).countdownFill;
            if ((pIVar6 != (Image *)0x0) &&
               (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pIVar6,(MethodInfo *)0x0),
               pGVar8 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar8,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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


/* Void set_ShouldPop(Boolean) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_set_ShouldPop
               (LobbyStateButton *this,bool value,MethodInfo *method)

{
  (this->fields).shouldPop = value;
  return;
}

