
/* Void Initialize() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_Initialize(InGameMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  bVar2 = bVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
       (IEditModeUI *)0x0) && (bVar1 == 0)) {
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    bVar4 = MVar3 == MVGameMode__Enum_Play;
  }
  else {
    bVar4 = false;
  }
  pTVar5 = (this->fields).playReward;
  if (pTVar5 == (TimedPlayReward *)0x0) {
code_?:
    func_?();
  }
  else {
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar5,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
    }
    this_00 = (this->fields).embeddedPlayerConfig;
    if (this_00 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar7 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffd0,this_00,(MethodInfo *)0x0);
    cVar8 = pEVar7->hideGoldShop;
    if ((pEVar7->allowsModals == 0) && (pEVar7->allowsOpenInNewTab == 0)) {
      uVar9._0_1_ = pEVar7->showTouristPromotion;
      uVar9._1_1_ = pEVar7->allowsOpenInNewTab;
      uVar9._2_1_ = pEVar7->allowsRedirectToWebpage;
      uVar9._3_1_ = pEVar7->allowsModals;
      uVar9 = uVar9 >> 0x10 & 0xff;
    }
    else {
      uVar9 = 1;
    }
    pGVar6 = (this->fields).touristRegisterButton;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    value = 0;
    if (uVar9 != 0) {
      value = bVar1;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,value,(MethodInfo *)0x0);
    if (cVar8 == '\0') {
      if (bVar2 == 0) {
        bVar2 = 1;
      }
      else {
        bVar2 = -(uVar9 != 0) & bVar2;
      }
    }
    else {
      bVar2 = 0;
    }
    pGVar6 = (this->fields).accessoryShopButton;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,bVar2,(MethodInfo *)0x0);
    pGVar6 = (this->fields).adminObserveButton;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame *)0x0) goto code_?;
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
    bVar2 = MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_02,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,bVar2,(MethodInfo *)0x0);
    if (!bVar4) goto code_?;
    pTVar5 = (this->fields).playReward;
    if (pTVar5 == (TimedPlayReward *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pAVar10 = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
    this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_03 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_03,(Object *)pTVar5,MethodInfo__TimedPlayReward__OnCollectedChanged__,
               (MethodInfo *)0x0);
    pAVar10 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pAVar10 == (Action *)0x0) {
      TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
code_?:
      func_?();
      bVar2 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UpdateController);
        }
        UpdateController::UpdateController_AddUpdateObject
                  ((IUpdatecontrollerSubscriberUpdate *)pTVar5,
                   UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
        (pTVar5->fields)._RewardAvailable_k__BackingField = 0;
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar5,(MethodInfo *)0x0);
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        (pTVar5->fields)._IsClaimable_k__BackingField = 0;
        TimedPlayReward::TimedPlayReward_RequestRewardPermission(pTVar5,(MethodInfo *)0x0);
      }
code_?:
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
        pGVar6 = (this->fields).winningConditionDebriefing;
        if (pGVar6 != (GameObject *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar6,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar11,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pGVar12 = (this->fields).gamePassesUIPrefab;
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pGVar12 = (GamePassesUI *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pGVar12,pTVar11,0,
                             GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                            );
        (this->fields).gamePassesUI = pGVar12;
        func_?(&(this->fields).gamePassesUI,pGVar12);
        pGVar12 = (this->fields).gamePassesUI;
        if (pGVar12 != (GamePassesUI *)0x0) {
          GamePassesUI::GamePassesUI_Initialize(pGVar12,(MethodInfo *)0x0);
          bVar2 = GamePassProgressionController::
                  GamePassProgressionController_get_IsProgressionEnabled((MethodInfo *)0x0);
          if (bVar2 != 0) goto code_?;
          pGVar12 = (this->fields).gamePassesUI;
          if (pGVar12 != (GamePassesUI *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pGVar12,(MethodInfo *)0x0);
            if (pGVar6 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    pAVar13 = (Action *)0x0;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar10;
    }
    if (pAVar13 == (Action *)0x0) goto code_?;
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar13;
    pAVar13 = (Action *)0x0;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar10;
    }
    if (pAVar13 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_OnEnable(InGameMenu *this,MethodInfo *method)

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
                    MethodInfo__InGameMenu____c__DisplayClass14_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InGameMenu____c__DisplayClass14_0);
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
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,bVar2 != 0,(MethodInfo *)0x0);
  }
  pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar4 != (GoldRewardManager *)0x0) {
    bVar2 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar4,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar4 != (GoldRewardManager *)0x0) {
      fVar5 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(pGVar4,(MethodInfo *)0x0);
      if (0.0 < fVar5) {
        return;
      }
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_EBX);
        pGVar3 = (this->fields).claimGoldRewardPopupPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar6 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar3,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        value[1].klass = pOVar6;
        func_?();
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__InGameMenu____c__DisplayClass14_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar3,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
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


/* Void Update() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_Update(InGameMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
  pIVar2 = (this->fields).inGameMenuBlockingOverlay;
  if (bVar1 == 0) {
    if (pIVar2 == (Image *)0x0) goto code_?;
    pIVar3 = pIVar2->klass;
    pMVar4 = (pIVar3->vtable).set_raycastTarget.method;
    uVar5 = 0;
  }
  else {
    if (pIVar2 == (Image *)0x0) goto code_?;
    pIVar3 = pIVar2->klass;
    pMVar4 = (pIVar3->vtable).set_raycastTarget.method;
    uVar5 = 1;
  }
  (*(pIVar3->vtable).set_raycastTarget.methodPtr)(pIVar2,uVar5,pMVar4);
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
             mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       ((Void *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar8,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    pGVar8 = (GameObject *)
             mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       ((Void *)pGVar8,(MethodInfo *)0x0);
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
             mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       ((Void *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar8,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    pGVar8 = (GameObject *)
             mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       ((Void *)pGVar8,(MethodInfo *)0x0);
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

