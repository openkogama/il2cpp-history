
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
    uVar3 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesShop);
      func_?(&TypeInfo__TierUnlockedPopupController);
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown == 0) {
      TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown = uVar3;
      TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown = 1;
    }
  }
  this_00 = (this->fields).tierProgressBar;
  if ((this_00 == (GameTierProgressBar *)0x0) ||
     (GameTierProgressBar::GameTierProgressBar_Initialize(this_00,(MethodInfo *)0x0),
     (this->fields).gainEffectController == (GameTierProgressBarGainEffectController *)0x0)) {
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
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
  if ((in_stack_5->fields).isInitialized != 0) {
    return;
  }
  (in_stack_5->fields).isInitialized = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
    pAVar6 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__System__Action,unaff_EDI,unaff_retaddr);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)in_stack_5,
               MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar6 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar7 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action *)0x0) {
        func_?();
        goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
      pAVar7 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action *)0x0) goto code_?;
    }
    func_?();
    pAVar8 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pUVar9 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar9,(Object *)in_stack_5,
               MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_,
               (MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
    if (pDVar10 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      pAVar8 = TypeInfo__GamePointGainEffectManager->static_fields->
               OnTierProgressBarGamePointGainEffectShown;
      pUVar9 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar9,(Object *)in_stack_5,
                 MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                 ,(MethodInfo *)0x0);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
      if (pDVar10 == (Delegate *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = (Action_1_Int32_ *)0x0;
code_?:
        func_?();
        iVar11 = 5;
        do {
          GameTierProgressBarGainEffectController::
          GameTierProgressBarGainEffectController_CreateGamePointGainEffect
                    (in_stack_5,(MethodInfo *)0x0);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        return;
      }
      pAVar8 = (Action_1_Int32_ *)func_?();
      if (pAVar8 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown = pAVar8;
        iVar11 = func_?();
        if (iVar11 != 0) goto code_?;
      }
    }
    else {
      pAVar8 = (Action_1_Int32_ *)func_?();
      if (pAVar8 != (Action_1_Int32_ *)0x0) {
        TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar8;
        iVar11 = func_?();
        if (iVar11 != 0) goto code_?;
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
      (in_stack_5->fields).currentGamePoints = (pPVar1->fields).progressionGamePoints;
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__GamePassesUI____c__DisplayClass16_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  pGVar1 = (this->fields).gamePassesShopPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar2 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = pLVar2;
    func_?(&this_00->fields,pLVar2);
    pGVar1 = (GamePassesShop *)(this_00->fields)._._defaultValue_k__BackingField;
    if (pGVar1 != (GamePassesShop *)0x0) {
      GamePassesShop::GamePassesShop_Initialize(pGVar1,tierToShow,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
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
    GameTierProgressBar::GameTierProgressBar_ReplayGainEffect
              (this_00,previousGamePointAmount,newGamePointAmount,(MethodInfo *)0x0);
    if ((this->fields).gainEffectController != (GameTierProgressBarGainEffectController *)0x0) {
      iVar1 = ((in_stack_2->fields).gamePointsToInstantiate - in_stack_3) +
              in_stack_4;
      (in_stack_2->fields).gamePointsToInstantiate = iVar1;
      if (10 < iVar1) {
        (in_stack_2->fields).gamePointsToInstantiate = 10;
      }
      (in_stack_2->fields).currentGamePoints = in_stack_4;
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
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
       (PlayerTierStateCalculator *)0x0) &&
     (0 < (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
          welcomeReward)) {
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if ((pPVar2 != (PlayerPlanetData *)0x0) &&
         (this_00 = (pPVar2->fields).playerPlanetMetaData,
         this_00 != (PlayerPlanetMetaDataClient *)0x0)) {
        bVar1 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
                PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(this_00,(MethodInfo *)0x0)
        ;
        if (bVar1 != 0) {
          return 0;
        }
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
          return (pPVar3->fields).gamePassRewardsActivated;
        }
      }
      uVar4 = func_?(&puStack_5);
      func_?(uVar4);
      pcVar6 = (code *)swi(3);
      bVar1 = (*pcVar6)();
      return bVar1;
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
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__GamePassesUI____c__DisplayClass16_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  pGVar1 = (this->fields).gamePassesShopPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar2 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_01->fields)._._defaultValue_k__BackingField = pLVar2;
    func_?(&this_01->fields,pLVar2);
    pGVar1 = (GamePassesShop *)(this_01->fields)._._defaultValue_k__BackingField;
    if (pGVar1 != (GamePassesShop *)0x0) {
      GamePassesShop::GamePassesShop_Initialize(pGVar1,tierToShow,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_01,
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
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesHighlightArrowManager);
          cRam_? = '\x01';
        }
        if ((uint8_t)tierToShow == (this_00->fields).currentGamePassTierHighlighted) {
          GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_DestroyHighlighArrow
                    (this_00,(MethodInfo *)0x0);
          if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked
              != 0) {
            TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 0
            ;
          }
        }
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
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__GamePassesUI____c__DisplayClass13_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  original = (this->fields).highScoreListPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pLVar1 = (List_1_System_Object_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
                     );
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = pLVar1;
    func_?(&this_00->fields,pLVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
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
    func_?();
    cRam_? = '\x01';
  }
  if (((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
        (PlayerTierStateCalculator *)0x0) ||
      ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).welcomeReward
       < 1)) ||
     (bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar2 != (PlayerPlanetData *)0x0) &&
     (pPVar3 = (pPVar2->fields).playerPlanetMetaData, pPVar3 != (PlayerPlanetMetaDataClient *)0x0))
  {
    bVar1 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(pPVar3,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar4 != (PlayerTierStateCalculator *)0x0) {
      if ((pPVar4->fields).gamePassRewardsActivated == 0) {
        return;
      }
      if ((this->fields).welcomeRewardPopup != (GamePassesWelcomeReward *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pSVar5 = TM::TM__(StringLiteral_DAILY_CRYSTALS_RECEIVED__,(MethodInfo *)0x0);
        pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if (pPVar4 != (PlayerTierStateCalculator *)0x0) {
          str1 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(pPVar4->fields).welcomeReward,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_3(pSVar5,str1,(MethodInfo *)0x0);
          sprite = *(Sprite **)(in_stack_6 + 0x10);
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController::NotificationController_PushNotification
                    (pSVar5,sprite,5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if ((pPVar2 != (PlayerPlanetData *)0x0) &&
             (pPVar3 = (pPVar2->fields).playerPlanetMetaData,
             pPVar3 != (PlayerPlanetMetaDataClient *)0x0)) {
            bVar1 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
                    PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                              (pPVar3,(MethodInfo *)0x0);
            if (bVar1 != 0) {
              return;
            }
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (*(char *)(in_stack_8 + 0x18) != '\0') {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,
                           (MethodInfo *)0x0);
                return;
              }
              piVar9 = *(int **)(in_stack_8 + 0x10);
              *(undefined1 *)(in_stack_8 + 0x18) = 1;
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
              if (piVar9 != (int *)0x0) {
                (**(code **)(*piVar9 + 0x110))(piVar9,0x6d);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar10 = func_?(&stack0xfffffff8);
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

