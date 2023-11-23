
/* Void CreateStartGoldRewardPopup() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_CreateStartGoldRewardPopup
               (LobbyStateController *this,MethodInfo *method)

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
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__LobbyStateController____c__DisplayClass15_0___CreateStartGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateController____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateController____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pGVar1 = (this->fields).startGoldRewardPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar2;
    func_?(value + 1,pOVar2);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__LobbyStateController____c__DisplayClass15_0___CreateStartGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnableGoldReward() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_EnableGoldReward
               (LobbyStateController *this,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (this_01 != (GoldRewardManager *)0x0) {
    GoldRewardManager::GoldRewardManager_StartGoldRewardCountdownWhenReady
              (this_01,(MethodInfo *)0x0);
    this_00 = (this->fields).goldIconOnPlayButton;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_OnEnable
               (LobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gamePassesUI;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).gamePassesUI;
    if (pGVar1 == (GamePassesUI *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pGVar1,(MethodInfo *)0x0);
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar2 = 0;
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      bVar2 = TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
    }
    if (this_00 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,bVar2 != 0,(MethodInfo *)0x0);
  }
  MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar3 == MVGameMode__Enum_Edit) {
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar3 == MVGameMode__Enum_Edit) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (pMVar4,MaskMode__Enum_Default,(MethodInfo *)0x0);
    }
    return;
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar4 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (pMVar4,MaskMode__Enum_AvatarLobbyFocus,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetShouldPopOnExit(Boolean) */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_SetShouldPopOnExit
               (LobbyStateController *this,bool shouldPop,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pLVar2 = (this->fields).lobbyStatePlayButton;
  if (pLVar2 != (LobbyStateButton *)0x0) {
    (pLVar2->fields).shouldPop = shouldPop;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowBoostMenu() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_ShowBoostMenu
               (LobbyStateController *this,MethodInfo *method)

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
                    BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__LobbyStateController____c__DisplayClass14_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LobbyStateController____c__DisplayClass14_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateController____c__DisplayClass14_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).boosterMenu;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    if (value[1].klass != (Object__Class *)0x0) {
      BoostMenuController::BoostMenuController_Initialize
                ((BoostMenuController *)value[1].klass,(MethodInfo *)0x0);
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
                 MethodInfo__LobbyStateController____c__DisplayClass14_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pLVar2 = (this->fields).playButton;
      if ((pLVar2 != (LobbyStateButton *)0x0) &&
         (this_00 = (pLVar2->fields).lobbyStateButton, this_00 != (Button *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_Start
               (LobbyStateController *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&
                    GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = 0;
    bVar2 = 0;
  }
  else {
    bVar2 = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
  }
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 == (EmbeddedPlayerConfig *)0x0) goto code_?;
  pEVar3 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                     ((EmbeddedSiteConfigData *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
  if ((pEVar3->allowsModals == 0) && (pEVar3->allowsOpenInNewTab == 0)) {
    uVar4._0_1_ = pEVar3->showTouristPromotion;
    uVar4._1_1_ = pEVar3->allowsOpenInNewTab;
    uVar4._2_1_ = pEVar3->allowsRedirectToWebpage;
    uVar4._3_1_ = pEVar3->allowsModals;
    uVar4 = uVar4 >> 0x10 & 0xff;
  }
  else {
    uVar4 = 1;
  }
  uVar5 = pEVar3->hideGoldShop;
  pGVar6 = (this->fields).touristRegisterButton;
  if (pGVar6 == (GameObject *)0x0) goto code_?;
  value = 0;
  if (uVar4 != 0) {
    value = bVar2;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,value,(MethodInfo *)0x0);
  if (uVar5 == '\0') {
    if (bVar1 == 0) {
      this._0_1_ = 1;
    }
    else {
      this._0_1_ = 0;
      if (uVar4 != 0) {
        this._0_1_ = bVar1;
      }
    }
  }
  else {
    this._0_1_ = 0;
  }
  pGVar6 = (this_01->fields).accessoryShop;
  if (pGVar6 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,(bool)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pGVar7 = (this_01->fields).gamePassesUIPrefab;
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_01,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar7 = (GamePassesUI *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar7,parent,0,
                        GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                       );
    (this_01->fields).gamePassesUI = pGVar7;
    func_?(&(this_01->fields).gamePassesUI,pGVar7);
    pGVar7 = (this_01->fields).gamePassesUI;
    if (pGVar7 == (GamePassesUI *)0x0) goto code_?;
    GamePassesUI::GamePassesUI_Initialize(pGVar7,(MethodInfo *)0x0);
    pGVar7 = (this_01->fields).gamePassesUI;
    if (pGVar7 == (GamePassesUI *)0x0) goto code_?;
    GamePassesUI::GamePassesUI_TryShowWelcomeReward(pGVar7,(MethodInfo *)0x0);
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0)
      goto code_?;
    }
    pGVar7 = (this_01->fields).gamePassesUI;
    if ((pGVar7 == (GamePassesUI *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pGVar7,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
  }
code_?:
  pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar8 != (GoldRewardManager *)0x0) {
    bVar1 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar8,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar8 != (GoldRewardManager *)0x0) {
      if ((pGVar8->fields).isCountingDownGoldReward != 0) {
        return;
      }
      pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar8 != (GoldRewardManager *)0x0) {
        GoldRewardManager::GoldRewardManager_StartGoldRewardCountdownWhenReady
                  (pGVar8,(MethodInfo *)0x0);
        pGVar6 = (this_01->fields).goldIconOnPlayButton;
        if (pGVar6 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* LobbyStateController() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController__ctor
               (LobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>)
    ;
    cRam_? = '\x01';
  }
  (this->fields)._.cameraMaskMode = 2;
  this_00 = (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
            );
  (this->fields)._.menuOrder = this_00;
  func_?(&(this->fields)._.menuOrder,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

