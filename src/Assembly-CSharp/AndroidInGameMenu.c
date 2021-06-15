
/* Void Initialize() */

void Assembly-CSharp.dll::AndroidInGameMenu::AndroidInGameMenu_Initialize
               (AndroidInGameMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  pIVar2 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if ((pIVar2 == (IEditModeUI *)0x0) && (bVar1 == 0)) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    cVar4 = '\x01' - (MVar3 != MVGameMode__Enum_Play);
  }
  else {
    cVar4 = '\0';
  }
  pTVar5 = (this->fields).playReward;
  if ((pTVar5 == (TimedPlayReward *)0x0) ||
     (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
  goto code_?;
  method_00 = (MethodInfo *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = 0;
  }
  else {
    if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVClientSettings);
    }
    bVar1 = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
  }
  pGVar6 = (this->fields).touristRegisterButton;
  if (pGVar6 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,bVar1,(MethodInfo *)0x0);
  if (cVar4 != '\0') {
    pTVar5 = (this->fields).playReward;
    if (pTVar5 == (TimedPlayReward *)0x0) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    TimedPlayReward::TimedPlayReward_Initialize(pTVar5,(MethodInfo *)0x0);
  }
  this_00 = (ScaleAnimationBase *)(this->fields).rewardedAd;
  if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    method_00 = (MethodInfo *)&UNK_?;
    func_?();
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pGVar7 = (this->fields).gamePassesUIPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar7 = (GamePassesUI *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pGVar7,
                        GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI_
                       );
    (this->fields).gamePassesUI = pGVar7;
    if (pGVar7 == (GamePassesUI *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pGVar7,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar8 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar8,parent,0,(MethodInfo *)0x0);
    pGVar7 = (this->fields).gamePassesUI;
    if (pGVar7 == (GamePassesUI *)0x0) goto code_?;
    GamePassesUI::GamePassesUI_Initialize(pGVar7,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
    }
    pGVar7 = (this->fields).gamePassesUI;
    if ((pGVar7 == (GamePassesUI *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pGVar7,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
  }
code_?:
  pGVar6 = (this->fields).winningConditionDebriefing;
  if ((pGVar6 != (GameObject *)0x0) &&
     (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar6,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)func_?(&UNK_?,method_00), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?,0,0);
      func_?(uVar10);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pTVar8);
    return;
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AndroidInGameMenu::AndroidInGameMenu_OnEnable
               (AndroidInGameMenu *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gamePassesUI;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).gamePassesUI;
    if (pGVar1 == (GamePassesUI *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pGVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar2 == 0) {
      this._0_1_ = 0;
    }
    else {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      this._0_1_ = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
    }
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,(bool)this,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  method_00 = (MethodInfo *)
              MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    bVar2 = GoldRewardManager::GoldRewardManager_CanGetGoldReward
                      ((GoldRewardManager *)method_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (this_01 == (GoldRewardManager *)0x0) goto code_?;
      fVar4 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(this_01,(MethodInfo *)0x0);
      if (fVar4 <= 0.0) {
        this_02 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
        pXVar5 = (XpBoostParticlePreviewer *)(this_00->fields).claimGoldRewardPopupPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar5,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        if (this_02 == (ScaleAnimationBase *)0x0) goto code_?;
        (this_02->fields)._._._._.m_CachedPtr = pXVar5;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_02,
                   MethodInfo__AndroidInGameMenu___OnEnable_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar3,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
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

