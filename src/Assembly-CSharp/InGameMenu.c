
/* Void Initialize() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_Initialize(InGameMenu *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&
                    GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
       (IEditModeUI *)0x0) && (bVar1 == 0)) {
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    bVar3 = MVar2 == MVGameMode__Enum_Play;
  }
  else {
    bVar3 = false;
  }
  this_00 = (this->fields).playReward;
  if ((this_00 == (TimedPlayReward *)0x0) ||
     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0)) {
code_?:
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this._3_1_ = 0;
    }
    else {
      this._3_1_ = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
    }
    this_01 = (this_02->fields).embeddedPlayerConfig;
    if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffd0,this_01,(MethodInfo *)0x0);
    cVar6 = pEVar5->hideGoldShop;
    if ((pEVar5->allowsModals == 0) && (pEVar5->allowsOpenInNewTab == 0)) {
      uVar7._0_1_ = pEVar5->showTouristPromotion;
      uVar7._1_1_ = pEVar5->allowsOpenInNewTab;
      uVar7._2_1_ = pEVar5->allowsRedirectToWebpage;
      uVar7._3_1_ = pEVar5->allowsModals;
      uVar7 = uVar7 >> 0x10 & 0xff;
    }
    else {
      uVar7 = 1;
    }
    pGVar4 = (this_02->fields).touristRegisterButton;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    value = 0;
    if (uVar7 != 0) {
      value = this._3_1_;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,value,(MethodInfo *)0x0);
    if (cVar6 == '\0') {
      if (bVar1 == 0) {
        this._0_1_ = 1;
      }
      else {
        this._0_1_ = 0;
        if (uVar7 != 0) {
          this._0_1_ = bVar1;
        }
      }
    }
    else {
      this._0_1_ = 0;
    }
    pGVar4 = (this_02->fields).accessoryShopButton;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,(bool)this,(MethodInfo *)0x0);
    pGVar4 = (this_02->fields).adminObserveButton;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_03 == (MVNetworkGame *)0x0) ||
        (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
        this_04 == (MVLocalPlayer *)0x0)) ||
       (MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_04,(MethodInfo *)0x0),
       pGVar4 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    if (!bVar3) {
code_?:
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
        pGVar8 = (this_02->fields).gamePassesUIPrefab;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_02,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pGVar8 = (GamePassesUI *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pGVar8,pTVar9,0,
                             GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                            );
        (this_02->fields).gamePassesUI = pGVar8;
        func_?(&(this_02->fields).gamePassesUI,pGVar8);
        pGVar8 = (this_02->fields).gamePassesUI;
        if (pGVar8 == (GamePassesUI *)0x0) goto code_?;
        GamePassesUI::GamePassesUI_Initialize(pGVar8,(MethodInfo *)0x0);
        bVar1 = GamePassProgressionController::
                GamePassProgressionController_get_IsProgressionEnabled((MethodInfo *)0x0);
        if (bVar1 == 0) {
          pGVar8 = (this_02->fields).gamePassesUI;
          if ((pGVar8 == (GamePassesUI *)0x0) ||
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pGVar8,(MethodInfo *)0x0),
             pGVar4 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
        }
      }
      pGVar4 = (this_02->fields).winningConditionDebriefing;
      if ((pGVar4 != (GameObject *)0x0) &&
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar4,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar9,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    this = (InGameMenu *)(this_02->fields).playReward;
    if (this == (InGameMenu *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      this = (InGameMenu *)&TypeInfo__UpdateController;
      func_?();
      cRam_? = '\x01';
    }
    a = TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
    this_05 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_05,(Object *)this,MethodInfo__TimedPlayReward__OnCollectedChanged__,
               (MethodInfo *)0x0);
    pAVar10 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_05,(MethodInfo *)0x0);
    if (pAVar10 == (Action *)0x0) {
      TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
code_?:
      func_?();
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UpdateController);
        }
        UpdateController::UpdateController_AddUpdateObject
                  ((IUpdatecontrollerSubscriberUpdate *)a,UpdatePriority__Enum_UPDATEBUCKET_STANDARD
                   ,1,(MethodInfo *)0x0);
        *(undefined1 *)&(a->fields)._._.extra_arg = 0;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)a,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        *(undefined1 *)&(a->fields)._._.interp_method = 0;
        TimedPlayReward::TimedPlayReward_RequestRewardPermission
                  ((TimedPlayReward *)a,(MethodInfo *)0x0);
      }
      goto code_?;
    }
    pAVar11 = (Action *)0x0;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar10;
    }
    if (pAVar11 == (Action *)0x0) goto code_?;
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = pAVar11;
    pAVar11 = (Action *)0x0;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar10;
    }
    if (pAVar11 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  method_00 = (MethodInfo *)
              MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    bVar2 = GoldRewardManager::GoldRewardManager_CanGetGoldReward
                      ((GoldRewardManager *)method_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (this_00 == (GoldRewardManager *)0x0) goto code_?;
      fVar4 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(this_00,(MethodInfo *)0x0);
      if (fVar4 <= 0.0) {
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,method_00);
        pGVar3 = (this->fields).claimGoldRewardPopupPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar5 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar3,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        if (value == (Object *)0x0) goto code_?;
        value[1].klass = pOVar5;
        func_?();
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__InGameMenu____c__DisplayClass14_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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

