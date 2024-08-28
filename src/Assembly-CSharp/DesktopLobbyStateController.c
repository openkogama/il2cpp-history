
/* Void CreateStartGoldRewardPopup() */

void Assembly-CSharp.dll::DesktopLobbyStateController::
     DesktopLobbyStateController_CreateStartGoldRewardPopup
               (DesktopLobbyStateController *this,MethodInfo *method)

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
                    MethodInfo__DesktopLobbyStateController____c__DisplayClass19_0___CreateStartGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopLobbyStateController____c__DisplayClass19_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopLobbyStateController____c__DisplayClass19_0;
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
               MethodInfo__DesktopLobbyStateController____c__DisplayClass19_0___CreateStartGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnDisable() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_OnDisable
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if ((pMVar1->fields).maskMode == 1) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (pMVar1,MaskMode__Enum_Default,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_OnEnable
               (DesktopLobbyStateController *this,MethodInfo *method)

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
    if (pGVar1 != (GamePassesUI *)0x0) {
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
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,bVar2 != 0,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
code_?:
  DesktopLobbyStateController_SetCamMaskMode(this,(MethodInfo *)0x0);
  return;
}


/* Void SetCamMaskMode() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_SetCamMaskMode
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar1 == MVGameMode__Enum_Edit) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (pMVar2,MaskMode__Enum_Default,(MethodInfo *)0x0);
    }
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar2 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (pMVar2,MaskMode__Enum_AvatarLobbyFocus,(MethodInfo *)0x0);
    return;
  }
code_?:
  uVar3 = func_?(&stack0xfffffffc);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetShouldPopOnExit(Boolean) */

void Assembly-CSharp.dll::DesktopLobbyStateController::
     DesktopLobbyStateController_SetShouldPopOnExit
               (DesktopLobbyStateController *this,bool shouldPop,MethodInfo *method)

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

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_ShowBoostMenu
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&
                    BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__DesktopLobbyStateController____c__DisplayClass18_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopLobbyStateController____c__DisplayClass18_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopLobbyStateController____c__DisplayClass18_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).boosterMenu;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?();
    pOVar1 = value[1].klass;
    if (pOVar1 != (Object__Class *)0x0) {
      BoostMenuController::BoostMenuController_Initialize
                ((BoostMenuController *)pOVar1,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__DesktopLobbyStateController____c__DisplayClass18_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_Start
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 == (EmbeddedPlayerConfig *)0x0) goto code_?;
  pEVar1 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                     ((EmbeddedSiteConfigData *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
  uVar2._0_1_ = pEVar1->showTouristPromotion;
  uVar2._1_1_ = pEVar1->allowsOpenInNewTab;
  uVar2._2_1_ = pEVar1->allowsRedirectToWebpage;
  uVar2._3_1_ = pEVar1->allowsModals;
  uVar3 = pEVar1->hideGoldShop;
  bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar4 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
  }
  if (((char)(uVar2 >> 0x18) == '\0') && ((char)(uVar2 >> 8) == '\0')) {
    uVar2 = uVar2 >> 0x10 & 0xff;
  }
  else {
    uVar2 = 1;
  }
  pGVar5 = (this->fields).touristRegisterButton;
  if (pGVar5 == (GameObject *)0x0) goto code_?;
  value = 0;
  if (uVar2 != 0) {
    value = bVar4;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,value,(MethodInfo *)0x0);
  pGVar5 = (this->fields).avatarAccessoriesButton;
  if (uVar3 == '\0') {
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar4 == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      bVar4 = -(uVar2 != 0) & bVar4;
    }
  }
  else {
    bVar4 = 0;
  }
  if (pGVar5 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,bVar4,(MethodInfo *)0x0);
  pGVar5 = (this->fields).adminObserveButton;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_01 == (MVNetworkGame *)0x0) ||
      (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
      this_02 == (MVLocalPlayer *)0x0)) ||
     (bVar4 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_02,(MethodInfo *)0x0),
     pGVar5 == (GameObject *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,bVar4,(MethodInfo *)0x0);
  DesktopLobbyStateController_SetCamMaskMode(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pGVar6 = (this->fields).gamePassesUIPrefab;
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar6 = (GamePassesUI *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar6,parent,0,
                        GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                       );
    ppGVar7 = &(this->fields).gamePassesUI;
    *ppGVar7 = pGVar6;
    func_?(ppGVar7,pGVar6);
    if (*ppGVar7 == (GamePassesUI *)0x0) goto code_?;
    GamePassesUI::GamePassesUI_Initialize(*ppGVar7,(MethodInfo *)0x0);
    if (*ppGVar7 == (GamePassesUI *)0x0) goto code_?;
    GamePassesUI::GamePassesUI_TryShowWelcomeReward(*ppGVar7,(MethodInfo *)0x0);
    bVar4 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar8 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar8->fields).gameMode != 0) goto code_?;
    }
    if ((*ppGVar7 == (GamePassesUI *)0x0) ||
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)*ppGVar7,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
  }
code_?:
  pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar9 != (GoldRewardManager *)0x0) {
    bVar4 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar9,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar9 != (GoldRewardManager *)0x0) {
      if ((pGVar9->fields).isCountingDownGoldReward != 0) {
        return;
      }
      pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar9 != (GoldRewardManager *)0x0) {
        GoldRewardManager::GoldRewardManager_StartGoldRewardCountdownWhenReady
                  (pGVar9,(MethodInfo *)0x0);
        pGVar5 = (this->fields).goldIconOnPlayButton;
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
          return;
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


/* Void Update() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_Update
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
  pIVar2 = (this->fields).lobbyStateBlockingOverlay;
  if (bVar1 == 0) {
    if (pIVar2 == (Image *)0x0) goto code_?;
    pIVar3 = pIVar2->klass;
    pIVar4 = (pIVar3->vtable).SetAllDirty.methodPtr;
    uVar5 = 0;
  }
  else {
    if (pIVar2 == (Image *)0x0) goto code_?;
    pIVar3 = pIVar2->klass;
    pIVar4 = (pIVar3->vtable).SetAllDirty.methodPtr;
    uVar5 = 1;
  }
  (*(code *)(pIVar3->vtable).set_raycastTarget.method)(pIVar2,uVar5,pIVar4);
  pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar6 == (SpawnRoleDataMediator *)0x0) ||
     (pSVar7 = (pSVar6->fields).SpawnRoleModeTypeWrapper, pSVar7 == (SpawnRoleModeTypeWrapper *)0x0)
     ) goto code_?;
  bVar1 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                    (pSVar7,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    pGVar8 = (GameObject *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar8,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    pGVar8 = (GameObject *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    bVar1 = 0;
  }
  else {
code_?:
    pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar6 == (SpawnRoleDataMediator *)0x0) ||
       (pSVar7 = (pSVar6->fields).SpawnRoleModeTypeWrapper,
       pSVar7 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
    bVar1 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (pSVar7,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pGVar8 = (GameObject *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar8,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    pGVar8 = (GameObject *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    bVar1 = 1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar8,bVar1,(MethodInfo *)0x0);
code_?:
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  return;
}

