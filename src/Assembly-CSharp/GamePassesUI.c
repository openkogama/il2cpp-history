
/* Void Initialize() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_Initialize
               (GamePassesUI *this,MethodInfo *method)

{
  if ((this->fields).isInitialized != 0) {
    return;
  }
  (this->fields).isInitialized = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    unaff_EDI = (this->fields).totalGamePointAmountText;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 == (PlayerPlanetData *)0x0) ||
       (pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&pPVar1->fields,(MethodInfo *)0x0), unaff_EDI == (Text *)0x0))
    goto code_?;
    (*(code *)(unaff_EDI->klass->vtable).set_text.method)
              (unaff_EDI,pSVar2,
               (unaff_EDI->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    GamePassesShop::GamePassesShop_UpdateHighestTierRewardShown
              ((uint)(pPVar1->fields).gamePassTier,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).tierProgressBar;
  if ((this_00 == (GameTierProgressBar *)0x0) ||
     (GameTierProgressBar::GameTierProgressBar_Initialize(this_00,(MethodInfo *)0x0),
     (this->fields).gainEffectController == (GameTierProgressBarGainEffectController *)0x0)) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__GamePointGainEffectManager);
    func_?(&MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_
                   );
    func_?(&
                    MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                   );
    func_?(&
                    MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__
                   );
    cRam_? = '\x01';
  }
  if ((in_stack_4->fields).isInitialized != 0) {
    return;
  }
  (in_stack_4->fields).isInitialized = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__System__Action,unaff_EDI,unaff_retaddr);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)in_stack_4,
               MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action *)0x0) {
        func_?();
        goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar6;
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action *)0x0) goto code_?;
    }
    func_?();
    pAVar7 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar8 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar8,(Object *)in_stack_4,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
               (MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
    if (pDVar9 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pAVar7 = TypeInfo__GamePointGainEffectManager->static_fields->
               OnTierProgressBarGamePointGainEffectShown;
      pUVar8 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar8,(Object *)in_stack_4,
                 MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                 ,(MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
      if (pDVar9 == (Delegate *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = (Action_1_Int32_ *)0x0;
code_?:
        func_?();
        iVar10 = 5;
        do {
          GameTierProgressBarGainEffectController::
          GameTierProgressBarGainEffectController_CreateGamePointGainEffect
                    (in_stack_4,(MethodInfo *)0x0);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        return;
      }
      pAVar7 = (Action_1_Int32_ *)func_?();
      if (pAVar7 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = pAVar7;
        iVar10 = func_?();
        if (iVar10 != 0) goto code_?;
      }
    }
    else {
      pAVar7 = (Action_1_Int32_ *)func_?();
      if (pAVar7 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar7;
        iVar10 = func_?();
        if (iVar10 != 0) goto code_?;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      (in_stack_4->fields).currentGamePoints = (pPVar1->fields).progressionGamePoints;
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InstantiateGamePassesShop(GamePassTier) */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_InstantiateGamePassesShop
               (GamePassesUI *this,GamePassTier__Enum tierToShow,MethodInfo *method)

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
                    GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesUI____c__DisplayClass16_0___InstantiateGamePassesShop_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesUI____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesUI____c__DisplayClass16_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).gamePassesShopPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (value != (Object *)0x0) {
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    if (pOVar2->klass != (Object__Class *)0x0) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)pOVar2->klass,tierToShow,(MethodInfo *)0x0);
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
                 MethodInfo__GamePassesUI____c__DisplayClass16_0___InstantiateGamePassesShop_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnDisable
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAStack2 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
    func_?();
    return;
  }
  pAVar1 = (Action *)0x0;
  if (pAStack2->klass == TypeInfo__System__Action) {
    pAVar1 = pAStack2;
  }
  pAStack3 = TypeInfo__System__Action;
  if (pAVar1 != (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 != (Action *)0x0) goto code_?;
    pAStack3 = TypeInfo__System__Action;
    pAStack3 = (Action__Class *)func_?();
    pAStack2 = extraout_ECX;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnEnable(GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pTVar1 = (this->fields).totalGamePointAmountText;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&pPVar2->fields,(MethodInfo *)0x0)
    ;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar4 == (Action *)0x0) {
        TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
        func_?();
        return;
      }
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 != (Action *)0x0) {
        TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
        pAVar5 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 != (Action *)0x0) goto code_?;
        func_?();
      }
      func_?();
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnPlayerPlanetDataUpdated
               (GamePassesUI *this,MethodInfo *method)

{
  pTVar1 = (this->fields).totalGamePointAmountText;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&pPVar2->fields,(MethodInfo *)0x0)
    ;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  func_?();
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
    GameTierProgressBar::GameTierProgressBar_UpdateProgressBars
              (this_00,previousGamePointAmount,(MethodInfo *)0x0);
    GameTierProgressBar::GameTierProgressBar_UpdateDividerVisibility
              (this_00,previousGamePointAmount,(MethodInfo *)0x0);
    fVar1 = GameTierProgressBar::GameTierProgressBar_CalculateTotalProgressValue
                      (this_00,previousGamePointAmount,(MethodInfo *)0x0);
    (this_00->fields).previousProgressValue = fVar1;
    fVar1 = GameTierProgressBar::GameTierProgressBar_CalculateTotalProgressValue
                      (this_00,newGamePointAmount,(MethodInfo *)0x0);
    (this_00->fields).interpolateTowardsProgressValue = fVar1;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this_00->fields).shouldInterpolate = 1;
    bVar2 = cRam_? == '\0';
    (this_00->fields).interpolationStartTime = fVar1;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
         newGamePointAmount;
    pAVar3 = TypeInfo__GamePointGainEffectManager->static_fields->
             OnTierProgressBarGamePointGainEffectShown;
    if (pAVar3 != (Action_1_Int32_ *)0x0) {
      (*(pAVar3->fields)._._.invoke_impl)();
    }
    this_01 = (this->fields).gainEffectController;
    if (this_01 != (GameTierProgressBarGainEffectController *)0x0) {
      piVar4 = &(this_01->fields).gamePointsToInstantiate;
      *piVar4 = *piVar4 + (newGamePointAmount - previousGamePointAmount);
      iVar5 = (this_01->fields).gamePointsToInstantiate;
      if (10 < iVar5) {
        iVar5 = 10;
      }
      (this_01->fields).gamePointsToInstantiate = iVar5;
      (this_01->fields).currentGamePoints = newGamePointAmount;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pfVar6 = &(this_01->fields).createGamePointTime;
      if (*pfVar6 <= fVar1 && fVar1 != *pfVar6) {
        GameTierProgressBarGainEffectController::
        GameTierProgressBarGainEffectController_StartGamePointGainEffect(this_01,(MethodInfo *)0x0);
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
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if ((pPVar1 != (PlayerTierStateCalculator *)0x0) && (0 < (pPVar1->fields).welcomeReward)) {
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if ((pPVar3 != (PlayerPlanetData *)0x0) &&
         (this_00 = (pPVar3->fields).playerPlanetMetaData,
         this_00 != (PlayerPlanetMetaDataClient *)0x0)) {
        bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
                PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(this_00,(MethodInfo *)0x0)
        ;
        if (bVar2 != 0) {
          return 0;
        }
        pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if (pPVar1 != (PlayerTierStateCalculator *)0x0) {
          return (pPVar1->fields).gamePassRewardsActivated;
        }
      }
      uVar4 = func_?(&puStack_5);
      func_?(uVar4);
      pcVar6 = (code *)swi(3);
      bVar2 = (*pcVar6)();
      return bVar2;
    }
  }
  return 0;
}


/* Void ShowGamePassesShop(GamePassTier) */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ShowGamePassesShop
               (GamePassesUI *this,GamePassTier__Enum tierToShow,MethodInfo *method)

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
                    GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesUI____c__DisplayClass16_0___InstantiateGamePassesShop_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesUI____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesUI____c__DisplayClass16_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).gamePassesShopPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (value != (Object *)0x0) {
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    if (pOVar2->klass != (Object__Class *)0x0) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)pOVar2->klass,tierToShow,(MethodInfo *)0x0);
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
                 MethodInfo__GamePassesUI____c__DisplayClass16_0___InstantiateGamePassesShop_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      this_00 = (this->fields).highLightArrowManager;
      if (this_00 != (GamePassesHighlightArrowManager *)0x0) {
        GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_OnTierBeingShown
                  (this_00,tierToShow,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowHighScore() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ShowHighScore
               (GamePassesUI *this,MethodInfo *method)

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
                    GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesUI____c__DisplayClass13_0___ShowHighScore_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesUI____c__DisplayClass13_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesUI____c__DisplayClass13_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).highScoreListPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GamePassesUI____c__DisplayClass13_0___ShowHighScore_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if (((pPVar1 == (PlayerTierStateCalculator *)0x0) || ((pPVar1->fields).welcomeReward < 1)) ||
     (bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0), bVar2 == 0)) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar3 != (PlayerPlanetData *)0x0) &&
     (pPVar4 = (pPVar3->fields).playerPlanetMetaData, pPVar4 != (PlayerPlanetMetaDataClient *)0x0))
  {
    bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(pPVar4,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar1 != (PlayerTierStateCalculator *)0x0) {
      if ((pPVar1->fields).gamePassRewardsActivated == 0) {
        return;
      }
      pGVar5 = (this->fields).welcomeRewardPopup;
      if (pGVar5 != (GamePassesWelcomeReward *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          func_?(&TypeInfo__NotificationController);
          func_?(&StringLiteral_DAILY_CRYSTALS_RECEIVED__);
          cRam_? = '\x01';
        }
        pSVar6 = TM::TM__(StringLiteral_DAILY_CRYSTALS_RECEIVED__,(MethodInfo *)0x0);
        pPVar1 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if (pPVar1 != (PlayerTierStateCalculator *)0x0) {
          str1 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(pPVar1->fields).welcomeReward,(MethodInfo *)0x0);
          pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
          sprite = (pGVar5->fields).crystalIcon;
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            in_stack_7 = &UNK_?;
            func_?();
          }
          NotificationController::NotificationController_PushNotification
                    (pSVar6,sprite,5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GamePassesManager);
            cRam_? = '\x01';
          }
          pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if ((pPVar3 != (PlayerPlanetData *)0x0) &&
             (pPVar4 = (pPVar3->fields).playerPlanetMetaData,
             pPVar4 != (PlayerPlanetMetaDataClient *)0x0)) {
            bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
                    PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                              (pPVar4,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              return;
            }
            puVar8 = &UNK_?;
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar9 != (MVNetworkGame_OperationRequests *)0x0) {
              puStack10 = puVar8;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                func_?(&StringLiteral_ClaimGamePointWelcomeReward_bein);
                cRam_? = '\x01';
              }
              if (in_stack_7[0x18] != '\0') {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,
                           (MethodInfo *)0x0);
                return;
              }
              piVar11 = *(int **)(in_stack_7 + 0x10);
              in_stack_7[0x18] = 1;
              this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              if (piVar11 == (int *)0x0) {
                func_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              (**(code **)(*piVar11 + 0x110))(piVar11,0x6d,this_00);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

