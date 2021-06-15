
/* Void Initialize() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_Initialize
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized != 0) {
    return;
  }
  (this->fields).isInitialized = 1;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pTVar1 = (this->fields).totalGamePointAmountText;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar2 == (PlayerPlanetData *)0x0) ||
       (uVar3 = func_?(&pPVar2->fields,0), pTVar1 == (Text *)0x0)) goto code_?;
    unaff_EDI = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1,uVar3,unaff_EDI);
    pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
    uVar4 = (pPVar2->fields).gamePassTier;
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesShop);
    }
    if (TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown == 0) {
      if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0
          ) && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
        func_?(TypeInfo__TierUnlockedPopupController);
      }
      TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown = uVar4;
      if ((((uint)(TypeInfo__GamePassesShop->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesShop->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesShop);
      }
      TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown = 1;
    }
  }
  this_00 = (this->fields).tierProgressBar;
  if ((this_00 == (GameTierProgressBar *)0x0) ||
     (GameTierProgressBar::GameTierProgressBar_Initialize(this_00,(MethodInfo *)0x0),
     (this->fields).gainEffectController == (GameTierProgressBarGainEffectController *)0x0)) {
code_?:
    func_?(0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((in_stack_6->fields).isInitialized != 0) {
    return;
  }
  (in_stack_6->fields).isInitialized = 1;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar7 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
    (in_stack_6->fields).currentGamePoints = (pPVar2->fields).progressionGamePoints;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pAVar8 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action,unaff_EDI);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar9,(Object *)in_stack_6,
             MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar10 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
  pAVar8 = (Action *)0x0;
  if (pAVar10 == (Action *)0x0) {
code_?:
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar8;
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar11 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar9,(Object *)in_stack_6,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar12 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)pUVar9,(MethodInfo *)0x0);
    pAVar11 = (Action_1_Int32_ *)0x0;
    if (pAVar12 != (Action_1_Int32_ *)0x0) {
      if (pAVar12->klass == TypeInfo__System__Action<int>) {
        pAVar11 = pAVar12;
      }
      if (pAVar11 == (Action_1_Int32_ *)0x0) goto code_?;
    }
    TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar11;
    pAVar11 = TypeInfo__GamePointGainEffectManager->static_fields->
              OnTierProgressBarGamePointGainEffectShown;
    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar9,(Object *)in_stack_6,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
               ,MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar12 = (Action_1_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)pUVar9,(MethodInfo *)0x0);
    pAVar11 = (Action_1_Int32_ *)0x0;
    if (pAVar12 == (Action_1_Int32_ *)0x0) {
code_?:
      iVar13 = 5;
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = pAVar11;
      do {
        GameTierProgressBarGainEffectController::
        GameTierProgressBarGainEffectController_CreateGamePointGainEffect
                  (in_stack_6,(MethodInfo *)0x0);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      return;
    }
    if (pAVar12->klass == TypeInfo__System__Action<int>) {
      pAVar11 = pAVar12;
    }
    if (pAVar11 != (Action_1_Int32_ *)0x0) goto code_?;
  }
  else {
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar10;
    }
    if (pAVar8 != (Action *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InstantiateGamePassesShop(GamePassTier) */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_InstantiateGamePassesShop
               (GamePassesUI *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesUI___InstantiateGamePassesShop_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pGVar1 = (this->fields).gamePassesShopPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GamePassesShop *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if ((this_00 != (ScaleAnimationBase *)0x0) &&
     ((this_00->fields)._._._._.m_CachedPtr = pGVar1, pGVar1 != (GamePassesShop *)0x0)) {
    GamePassesShop::GamePassesShop_Initialize(pGVar1,tierToShow,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesUI___InstantiateGamePassesShop_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnDisable
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAStack2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAStack2 != (Action *)0x0) {
      if (pAStack2->klass == TypeInfo__System__Action) {
        pAVar1 = pAStack2;
      }
      if (pAVar1 == (Action *)0x0) {
        pAStack3 = TypeInfo__System__Action;
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnEnable(GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pTVar1 = (this->fields).totalGamePointAmountText;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar2 != (PlayerPlanetData *)0x0) &&
     (uVar3 = func_?(&pPVar2->fields,0), pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,uVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    _uStack00000010 = CONCAT44(TypeInfo__System__Action,pAVar5);
    pAVar4 = (Action *)0x0;
    if (pAVar5 != (Action *)0x0) {
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar5;
      }
      if (pAVar4 == (Action *)0x0) goto code_?;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
    return;
  }
  _uStack00000010 = func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnPlayerPlanetDataUpdated
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).totalGamePointAmountText;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    uVar3 = func_?(&pPVar2->fields,0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,uVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnTier1ShopPressed() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnTier1ShopPressed
               (GamePassesUI *this,MethodInfo *method)

{
  GamePassesUI_ShowGamePassesShop(this,GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  return;
}


/* Void OnTier2ShopPressed() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnTier2ShopPressed
               (GamePassesUI *this,MethodInfo *method)

{
  GamePassesUI_ShowGamePassesShop(this,GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
  return;
}


/* Void OnTier3ShopPressed() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnTier3ShopPressed
               (GamePassesUI *this,MethodInfo *method)

{
  GamePassesUI_ShowGamePassesShop(this,GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
  return;
}


/* Void ReplayGainEffect(Int32, Int32) */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ReplayGainEffect
               (GamePassesUI *this,int32_t previousGamePointAmount,int32_t newGamePointAmount,
               MethodInfo *method)

{
  this_00 = (this->fields).tierProgressBar;
  if (this_00 != (GameTierProgressBar *)0x0) {
    GameTierProgressBar::GameTierProgressBar_ReplayGainEffect
              (this_00,previousGamePointAmount,newGamePointAmount,(MethodInfo *)0x0);
    if ((this->fields).gainEffectController != (GameTierProgressBarGainEffectController *)0x0) {
      piVar1 = &(in_stack_2->fields).gamePointsToInstantiate;
      *piVar1 = *piVar1 + (in_stack_3 - in_stack_4);
      if (10 < (in_stack_2->fields).gamePointsToInstantiate) {
        (in_stack_2->fields).gamePointsToInstantiate = 10;
      }
      (in_stack_2->fields).currentGamePoints = in_stack_3;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pfVar6 = &(in_stack_2->fields).createGamePointTime;
      if (*pfVar6 <= fVar5 && fVar5 != *pfVar6) {
        GameTierProgressBarGainEffectController::
        GameTierProgressBarGainEffectController_StartGamePointGainEffect
                  (in_stack_2,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean ShouldShowWelcomeReward() */

bool Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ShouldShowWelcomeReward
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
      (PlayerTierStateCalculator *)0x0) {
    return 0;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if (pPVar1 != (PlayerTierStateCalculator *)0x0) {
    if (0 < (pPVar1->fields).welcomeReward) {
      if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassProgressionController);
      }
      bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if ((pPVar3 != (PlayerPlanetData *)0x0) &&
           (this_00 = (pPVar3->fields).playerPlanetMetaData,
           this_00 != (PlayerPlanetMetaDataClient *)0x0)) {
          bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
                  PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                            (this_00,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return 0;
          }
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__GamePassesManager);
          }
          pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
          if (pPVar1 != (PlayerTierStateCalculator *)0x0) {
            return (pPVar1->fields).gamePassRewardsActivated != 0;
          }
        }
        goto code_?;
      }
    }
    return 0;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void ShowGamePassesShop(GamePassTier) */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ShowGamePassesShop
               (GamePassesUI *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesUI___InstantiateGamePassesShop_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pGVar1 = (this->fields).gamePassesShopPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GamePassesShop *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if ((this_01 != (ScaleAnimationBase *)0x0) &&
     ((this_01->fields)._._._._.m_CachedPtr = pGVar1, pGVar1 != (GamePassesShop *)0x0)) {
    GamePassesShop::GamePassesShop_Initialize(pGVar1,tierToShow,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__GamePassesUI___InstantiateGamePassesShop_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = (this->fields).highLightArrowManager;
    if (this_00 != (GamePassesHighlightArrowManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((uint8_t)tierToShow == (this_00->fields).currentGamePassTierHighlighted) {
        GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_DestroyHighlighArrow
                  (this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr & 0x2000000
             ) != 0) && ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked !=
            0) {
          if ((((uint)(TypeInfo__GamePassesHighlightArrowManager->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__GamePassesHighlightArrowManager->_1).cctor_started == 0)) {
            func_?();
          }
          TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 0;
        }
      }
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowHighScore() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ShowHighScore
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesUI___ShowHighScore_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  original = (this->fields).highScoreListPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesUI___ShowHighScore_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TryShowWelcomeReward() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_TryShowWelcomeReward
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
      (PlayerTierStateCalculator *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if (pPVar1 == (PlayerTierStateCalculator *)0x0) goto code_?;
  if ((pPVar1->fields).welcomeReward < 1) {
code_?:
    bVar2 = 0;
  }
  else {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      unaff_EBP = TypeInfo__GamePassesManager;
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar3 == (PlayerPlanetData *)0x0) ||
       (pPVar4 = (pPVar3->fields).playerPlanetMetaData, pPVar4 == (PlayerPlanetMetaDataClient *)0x0)
       ) goto code_?;
    bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(pPVar4,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar1 == (PlayerTierStateCalculator *)0x0) goto code_?;
    bVar2 = (pPVar1->fields).gamePassRewardsActivated;
  }
  if (bVar2 == 0) {
    return;
  }
  pGVar5 = (this->fields).welcomeRewardPopup;
  if (pGVar5 != (GamePassesWelcomeReward *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?,unaff_EBP);
      cRam_? = '\x01';
    }
    pSVar6 = TM::TM__(StringLiteral_DAILY_CRYSTALS_RECEIVED__,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar1 != (PlayerTierStateCalculator *)0x0) {
      piVar7 = &(pPVar1->fields).welcomeReward;
      uVar8 = 0;
      str1 = (String *)func_?(piVar7,0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_2(pSVar6,str1,(MethodInfo *)0x0);
      sprite = (pGVar5->fields).crystalIcon;
      if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_PushNotification
                (pSVar6,sprite,5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if ((pPVar3 != (PlayerPlanetData *)0x0) &&
         (pPVar4 = (pPVar3->fields).playerPlanetMetaData,
         pPVar4 != (PlayerPlanetMetaDataClient *)0x0)) {
        bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
                PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(pPVar4,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          unaff_EBP = (GamePassesManager__Class *)&UNK_?;
          func_?();
        }
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar9 != (MVNetworkGame_OperationRequests *)0x0) {
          if (cRam_? == '\0') {
            func_?(_UNK_?,unaff_EBP);
            cRam_? = '\x01';
          }
          if ((pMVar9->fields).gamepointWelcomeClaimed != 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,(MethodInfo *)0x0);
            return;
          }
          pPVar10 = (pMVar9->fields).peer;
          (pMVar9->fields).gamepointWelcomeClaimed = 1;
          this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                    func_?(TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                    ,piVar7,uVar8);
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
            func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          pSVar11 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
          if (pPVar10 == (PhotonPeer *)0x0) {
            func_?(0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar8._0_1_ = (pSVar11->SendReliable).Encrypt;
          uVar8._1_1_ = (pSVar11->SendReliable).Channel;
          uVar8._2_2_ = *(undefined2 *)&(pSVar11->SendReliable).field_0x6;
          (*(code *)(pPVar10->klass->vtable).SendOperation.method)
                    (pPVar10,0x6d,this_00,(pSVar11->SendReliable).DeliveryMode,uVar8,
                     pPVar10->klass[1]._0.image);
          return;
        }
      }
    }
    func_?(0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

