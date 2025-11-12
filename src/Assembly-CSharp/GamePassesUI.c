
/* Void Initialize() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_Initialize
               (GamePassesUI *this,MethodInfo *method)

{
  if ((this->fields).isInitialized != 0) {
    return;
  }
  bVar1 = cRam_? == '\0';
  (this->fields).isInitialized = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pTVar2 = (this->fields).totalGamePointAmountText;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar3 == (PlayerPlanetData *)0x0) ||
       (pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&pPVar3->fields,(MethodInfo *)0x0), pTVar2 == (Text *)0x0))
    goto DAT_?;
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 == (PlayerPlanetData *)0x0) goto DAT_?;
    uVar5 = (pPVar3->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesShop);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__TierUnlockedPopupController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown == 0) {
      TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown = uVar5;
      TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown = 1;
    }
  }
  this_00 = (this->fields).tierProgressBar;
  if (this_00 != (GameTierProgressBar *)0x0) {
    GameTierProgressBar::GameTierProgressBar_Initialize(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).gainEffectController;
    if (this_01 != (GameTierProgressBarGainEffectController *)0x0) {
      GameTierProgressBarGainEffectController::GameTierProgressBarGainEffectController_Initialize
                (this_01,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InstantiateGamePassesShop(GamePassTier) */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_InstantiateGamePassesShop
               (GamePassesUI *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesUI____c__DisplayClass16_0___InstantiateGamePassesShop_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesUI____c__DisplayClass16_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesUI____c__DisplayClass16_0);
  original = (this->fields).gamePassesShopPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    if (object[1].klass != (Object__Class *)0x0) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)object[1].klass,tierToShow & 0xff,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__GamePassesUI____c__DisplayClass16_0___InstantiateGamePassesShop_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar10 = (longlong)(pLVar9->fields)._size;
        uVar3 = 0;
        if (0 < lVar10) {
          lVar11 = 0;
          lVar12 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pTVar14 = (pLVar9->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar3) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_01,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 8;
          } while (lVar11 < lVar10);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnDisable
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action *)0x0) {
        FUN_?(pAVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
      pAVar2 = (Action *)0x0;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action *)0x0) {
        FUN_?(pAVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                     &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnEnable(GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pTVar1 = (this->fields).totalGamePointAmountText;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar2 == (PlayerPlanetData *)0x0) ||
       (pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&pPVar2->fields,(MethodInfo *)0x0), pTVar1 == (Text *)0x0)) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method);
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GamePassesUI__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action *)0x0) {
        FUN_?(pAVar5,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar6;
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action *)0x0) {
        FUN_?(pAVar5,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
  }
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnPlayerPlanetDataUpdated
               (GamePassesUI *this,MethodInfo *method)

{
  pTVar1 = (this->fields).totalGamePointAmountText;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&pPVar2->fields,(MethodInfo *)0x0)
    ;
    if (pTVar1 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnTier1ShopPressed() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnTier1ShopPressed
               (GamePassesUI *this,MethodInfo *method)

{
  GamePassesUI_InstantiateGamePassesShop
            (this,(GamePassTier__Enum)CONCAT71((int7)((ulonglong)method >> 8),1),(MethodInfo *)0x0);
  this_00 = (this->fields).highLightArrowManager;
  if (this_00 != (GamePassesHighlightArrowManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this_00->fields).currentGamePassTierHighlighted == 1) {
      GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_DestroyHighlighArrow
                (this_00,(MethodInfo *)0x0);
      if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked != 0)
      {
        TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 0;
      }
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnTier2ShopPressed() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnTier2ShopPressed
               (GamePassesUI *this,MethodInfo *method)

{
  GamePassesUI_InstantiateGamePassesShop
            (this,(GamePassTier__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),(MethodInfo *)0x0);
  this_00 = (this->fields).highLightArrowManager;
  if (this_00 != (GamePassesHighlightArrowManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this_00->fields).currentGamePassTierHighlighted == 2) {
      GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_DestroyHighlighArrow
                (this_00,(MethodInfo *)0x0);
      if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked != 0)
      {
        TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 0;
      }
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnTier3ShopPressed() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_OnTier3ShopPressed
               (GamePassesUI *this,MethodInfo *method)

{
  GamePassesUI_InstantiateGamePassesShop
            (this,(GamePassTier__Enum)CONCAT71((int7)((ulonglong)method >> 8),3),(MethodInfo *)0x0);
  this_00 = (this->fields).highLightArrowManager;
  if (this_00 != (GamePassesHighlightArrowManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this_00->fields).currentGamePassTierHighlighted == 3) {
      GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_DestroyHighlighArrow
                (this_00,(MethodInfo *)0x0);
      if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked != 0)
      {
        TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 0;
      }
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReplayGainEffect(Int32, Int32) */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ReplayGainEffect
               (GamePassesUI *this,int32_t previousGamePointAmount,int32_t newGamePointAmount,
               MethodInfo *method)

{
  pGVar1 = (this->fields).tierProgressBar;
  if (pGVar1 != (GameTierProgressBar *)0x0) {
    GameTierProgressBar::GameTierProgressBar_UpdateProgressBars
              (pGVar1,previousGamePointAmount,(MethodInfo *)0x0);
    GameTierProgressBar::GameTierProgressBar_UpdateDividerVisibility
              (pGVar1,previousGamePointAmount,(MethodInfo *)0x0);
    fVar2 = GameTierProgressBar::GameTierProgressBar_CalculateTotalProgressValue
                       (pGVar1,previousGamePointAmount,(MethodInfo *)0x0);
    (pGVar1->fields).previousProgressValue = fVar2;
    fVar2 = GameTierProgressBar::GameTierProgressBar_CalculateTotalProgressValue
                       (pGVar1,newGamePointAmount,(MethodInfo *)0x0);
    pcVar3 = pcRam_?;
    (pGVar1->fields).interpolateTowardsProgressValue = fVar2;
    pcVar4 = pcRam_?;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3, pcVar3 == (code *)0x0))
    {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar4;
    fVar2 = (float)(*pcVar3)();
    (pGVar1->fields).interpolationStartTime = fVar2;
    (pGVar1->fields).shouldInterpolate = 1;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
              (newGamePointAmount,(MethodInfo *)0x0);
    this_00 = (this->fields).gainEffectController;
    if (this_00 != (GameTierProgressBarGainEffectController *)0x0) {
      (this_00->fields).currentGamePoints = previousGamePointAmount;
      iVar6 = ((this_00->fields).gamePointsToInstantiate - (this_00->fields).currentGamePoints) +
               newGamePointAmount;
      (this_00->fields).gamePointsToInstantiate = iVar6;
      if (10 < iVar6) {
        (this_00->fields).gamePointsToInstantiate = 10;
      }
      pcVar3 = pcRam_?;
      (this_00->fields).currentGamePoints = newGamePointAmount;
      pcVar4 = pcRam_?;
      if ((pcVar3 == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3, pcVar3 == (code *)0x0
         )) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar4;
      fVar2 = (float)(*pcVar3)();
      pfVar7 = &(this_00->fields).createGamePointTime;
      if (fVar2 < *pfVar7 || fVar2 == *pfVar7) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar8 = (this_00->fields).gamePointGainEffectPool;
      if (pLVar8 != (List_1_GamePointGainEffect_ *)0x0) {
        if ((pLVar8->fields)._size == 0) {
          GameTierProgressBarGainEffectController::
          GameTierProgressBarGainEffectController_CreateGamePointGainEffect
                    (this_00,(MethodInfo *)0x0);
        }
        pLVar8 = (this_00->fields).gamePointGainEffectPool;
        if (pLVar8 != (List_1_GamePointGainEffect_ *)0x0) {
          iVar6 = (pLVar8->fields)._size;
          if ((uint)(pLVar8->fields)._size <= iVar6 - 1U) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pGVar9 = (pLVar8->fields)._items;
          if (pGVar9 != (GamePointGainEffect__Array *)0x0) {
            if ((uint)pGVar9->max_length <= iVar6 - 1U) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pLVar8 = (this_00->fields).gamePointGainEffectPool;
            this_01 = pGVar9->vector[(longlong)iVar6 + -1];
            if ((pLVar8 != (List_1_GamePointGainEffect_ *)0x0) &&
               (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__RemoveAt
                          ((List_1_System_Object_ *)(this_00->fields).gamePointGainEffectPool,
                           (pLVar8->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                          ), this_01 != (GamePointGainEffect *)0x0)) {
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
              if (obj != (Transform *)0x0) {
                uStack_11._0_4_ = (pVVar10->zeroVector).x;
                uStack_11._4_4_ = (pVVar10->zeroVector).y;
                fStack_12 = (pVVar10->zeroVector).z;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar13 = (obj->fields)._._.m_CachedPtr;
                if (pvVar13 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar5 = func_?(&UNK_?);
                  FUN_?(uVar5,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                (*pcRam_?)(pvVar13,&uStack_11);
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar1 = (this_00->fields).tierProgressBar;
                if (pGVar1 != (GameTierProgressBar *)0x0) {
                  cVar14 = FUN_?((pGVar1->fields).previousProgressValue);
                  pLVar15 = (this_00->fields).targetDataList;
                  uVar16 = (byte)(cVar14 + 1) - 1;
                  if (pLVar15 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)
                                0x0) {
                    if ((int)uVar16 < 0) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = (pLVar15->fields)._size - 1;
                      if ((int)uVar16 <= (int)uVar17) {
                        uVar17 = uVar16;
                      }
                    }
                    if ((uint)(pLVar15->fields)._size <= uVar17) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pGVar18 = (pLVar15->fields)._items;
                    if (pGVar18 != (GameTierProgressBarGainEffectController_TierTargetData__Array *)
                                  0x0) {
                      if ((uint)pGVar18->max_length <= uVar17) {
                        FUN_?();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      if (pGVar18->vector[(int)uVar17] !=
                          (GameTierProgressBarGainEffectController_TierTargetData *)0x0) {
                        GamePointGainEffect::GamePointGainEffect_StartEffect
                                  (this_01,(pGVar18->vector[(int)uVar17]->fields).
                                           gamePointEffectTargetTransform,
                                   (this_00->fields).offsetDirectionXMin,
                                   (this_00->fields).offsetDirectionXMax,
                                   (this_00->fields).offsetDirectionYMin,
                                   (this_00->fields).offsetDirectionYMax,(MethodInfo *)0x0);
                        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                        if (this_02 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (this_02,1,(MethodInfo *)0x0);
                          pLVar8 = (this_00->fields).gamePointGainEffectCurrentlyUsed;
                          if (pLVar8 != (List_1_GamePointGainEffect_ *)0x0) {
                            FUN_?(pLVar8,this_01);
                            pcVar3 = pcRam_?;
                            piVar19 = &(this_00->fields).gamePointsToInstantiate;
                            *piVar19 = *piVar19 + -1;
                            pcVar4 = pcRam_?;
                            if ((pcVar3 == (code *)0x0) &&
                               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3,
                               pcVar3 == (code *)0x0)) {
                              uVar5 = func_?(&UNK_?);
                              FUN_?(uVar5,0);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            pcRam_? = pcVar4;
                            fVar2 = (float)(*pcVar3)();
                            pcVar3 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar3 = (code *)FUN_?(&UNK_?),
                               pcVar3 == (code *)0x0)) {
                              uVar5 = func_?(&UNK_?);
                              FUN_?(uVar5,0);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            pcRam_? = pcVar3;
                            fVar20 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
                            (this_00->fields).createGamePointTime = fVar20 + fVar2;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ShouldShowWelcomeReward() */

bool Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ShouldShowWelcomeReward
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
        (PlayerTierStateCalculator *)0x0) ||
      ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).welcomeReward
       < 1)) ||
     (bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0), bVar1 == 0)) {
    return 0;
  }
  lVar2 = FUN_?();
  if ((lVar2 != 0) &&
     (*(PlayerPlanetMetaDataClient **)(lVar2 + 0x30) != (PlayerPlanetMetaDataClient *)0x0)) {
    bVar1 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                      (*(PlayerPlanetMetaDataClient **)(lVar2 + 0x30),(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
      return (pPVar3->fields).gamePassRewardsActivated;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void ShowGamePassesShop(GamePassTier) */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ShowGamePassesShop
               (GamePassesUI *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  GamePassesUI_InstantiateGamePassesShop(this,tierToShow,(MethodInfo *)0x0);
  this_00 = (this->fields).highLightArrowManager;
  if (this_00 != (GamePassesHighlightArrowManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((uint8_t)tierToShow == (this_00->fields).currentGamePassTierHighlighted) {
      GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_DestroyHighlighArrow
                (this_00,(MethodInfo *)0x0);
      if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked != 0)
      {
        TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 0;
      }
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowHighScore() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_ShowHighScore
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesUI____c__DisplayClass13_0___ShowHighScore_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesUI____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesUI____c__DisplayClass13_0);
  original = (this->fields).highScoreListPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__GamePassesUI____c__DisplayClass13_0___ShowHighScore_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar4 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar4) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TryShowWelcomeReward() */

void Assembly-CSharp.dll::GamePassesUI::GamePassesUI_TryShowWelcomeReward
               (GamePassesUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
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
  lVar2 = FUN_?();
  if ((lVar2 != 0) &&
     (*(PlayerPlanetMetaDataClient **)(lVar2 + 0x30) != (PlayerPlanetMetaDataClient *)0x0)) {
    bVar1 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                      (*(PlayerPlanetMetaDataClient **)(lVar2 + 0x30),(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
      if ((pPVar3->fields).gamePassRewardsActivated == 0) {
        return;
      }
      pGVar4 = (this->fields).welcomeRewardPopup;
      if (pGVar4 != (GamePassesWelcomeReward *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__NotificationController);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_DAILY_CRYSTALS_RECEIVED__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar5 = TM::TM__(StringLiteral_DAILY_CRYSTALS_RECEIVED__,(MethodInfo *)0x0);
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
          str1 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(pPVar3->fields).welcomeReward,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_4(pSVar5,str1,(MethodInfo *)0x0);
          sprite = (pGVar4->fields).crystalIcon;
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          NotificationController::NotificationController_PushNotification
                    (pSVar5,sprite,5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if ((pPVar6 != (PlayerPlanetData *)0x0) &&
             (this_00 = (pPVar6->fields).playerPlanetMetaData,
             this_00 != (PlayerPlanetMetaDataClient *)0x0)) {
            bVar1 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
                    PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday
                              (this_00,(MethodInfo *)0x0);
            if (bVar1 != 0) {
              return;
            }
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_ClaimGamePointWelcomeReward_bein);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((pMVar7->fields).gamepointWelcomeClaimed != 0) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,
                           (MethodInfo *)0x0);
                return;
              }
              (pMVar7->fields).gamepointWelcomeClaimed = 1;
              pPVar8 = (pMVar7->fields).peer;
              this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
              pMVar9 = 
              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar8 != (PhotonPeer *)0x0) {
                (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                          (pPVar8,CONCAT71((int7)((ulonglong)pMVar9 >> 8),0x6d),this_01,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable,(pPVar8->klass->vtable).SendOperation.method);
                return;
              }
            }
          }
        }
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

