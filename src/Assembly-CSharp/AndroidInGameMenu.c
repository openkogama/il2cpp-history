
/* Void Initialize() */

void Assembly-CSharp.dll::AndroidInGameMenu::AndroidInGameMenu_Initialize
               (AndroidInGameMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  iVar2 = (pGVar1->fields).profileID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
       (IEditModeUI *)0x0) && (0 < iVar2)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    bVar3 = (pGVar1->fields).gameMode == 1;
  }
  else {
    bVar3 = false;
  }
  bVar4 = 0;
  pTVar5 = (this->fields).playReward;
  if ((pTVar5 == (TimedPlayReward *)0x0) ||
     (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar1->fields).profileID < 1) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar4 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2);
  }
  pEVar7 = (this->fields).embeddedPlayerConfig;
  if (pEVar7 == (EmbeddedPlayerConfig *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pEVar7->fields).initialized == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
    auVar8._0_8_ = (pEVar7->fields).kogamaDefaultData.sites;
    auVar8._8_4_ = (pEVar7->fields).kogamaDefaultData.siteEnum;
    auVar8[0xc] = (pEVar7->fields).kogamaDefaultData.showTouristPromotion;
    auVar8[0xd] = (pEVar7->fields).kogamaDefaultData.allowsOpenInNewTab;
    auVar8[0xe] = (pEVar7->fields).kogamaDefaultData.allowsRedirectToWebpage;
    auVar8[0xf] = (pEVar7->fields).kogamaDefaultData.allowsModals;
    uVar9 = (pEVar7->fields).kogamaDefaultData.hideGoldShop;
    cVar10 = uVar9;
  }
  else {
    auVar8._0_8_ = (pEVar7->fields).currentSite.sites;
    auVar8._8_4_ = (pEVar7->fields).currentSite.siteEnum;
    auVar8[0xc] = (pEVar7->fields).currentSite.showTouristPromotion;
    auVar8[0xd] = (pEVar7->fields).currentSite.allowsOpenInNewTab;
    auVar8[0xe] = (pEVar7->fields).currentSite.allowsRedirectToWebpage;
    auVar8[0xf] = (pEVar7->fields).currentSite.allowsModals;
    cVar10 = (pEVar7->fields).currentSite.hideGoldShop;
  }
  if ((auVar8[0xf] == '\0') && (auVar8[0xd] == '\0')) {
    uVar11 = auVar8._14_2_ & 0xff;
  }
  else {
    uVar11 = 1;
  }
  pGVar6 = (this->fields).touristRegisterButton;
  if (pGVar6 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,bVar4 & uVar11 != 0,(MethodInfo *)0x0);
  pGVar6 = (this->fields).accessoryShopButton;
  if (cVar10 == '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).profileID < 1) {
      bVar12 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      bVar12 = bVar12 & uVar11 != 0;
    }
    else {
      bVar12 = 1;
    }
  }
  else {
    bVar12 = 0;
  }
  if (pGVar6 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,bVar12,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar5 = (this->fields).playReward;
    if (pTVar5 == (TimedPlayReward *)0x0) goto code_?;
    TimedPlayReward::TimedPlayReward_Initialize(pTVar5,(MethodInfo *)0x0);
  }
  if ((this->fields).rewardedAd == (FreeGoldAndroid *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    pGVar13 = (this->fields).gamePassesUIPrefab;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar13 = (GamePassesUI *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)pGVar13,pTVar14,0,
                         GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                        );
    bVar3 = iRam_? != 0;
    (this->fields).gamePassesUI = pGVar13;
    if (bVar3) {
      uVar15 = (uint)((ulonglong)&(this->fields).gamePassesUI >> 0xc);
      puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar17 = *puVar16;
        LOCK();
        uVar18 = *puVar16;
        if (uVar17 == uVar18) {
          *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (uVar17 != uVar18);
    }
    pGVar13 = (this->fields).gamePassesUI;
    if (pGVar13 == (GamePassesUI *)0x0) goto code_?;
    GamePassesUI::GamePassesUI_Initialize(pGVar13,(MethodInfo *)0x0);
    bVar12 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                       ((MethodInfo *)0x0);
    if (bVar12 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0)
      goto code_?;
    }
    pGVar13 = (this->fields).gamePassesUI;
    if ((pGVar13 == (GamePassesUI *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pGVar13,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
  }
code_?:
  pGVar6 = (this->fields).winningConditionDebriefing;
  if ((pGVar6 != (GameObject *)0x0) &&
     (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar6,(MethodInfo *)0x0), pTVar14 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar19 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar19 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    pcVar20 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
      uVar21 = func_?(&UNK_?);
      FUN_?(uVar21,0);
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    pcRam_? = pcVar20;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar19);
    return;
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AndroidInGameMenu::AndroidInGameMenu_OnEnable
               (AndroidInGameMenu *this,MethodInfo *method)

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
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AndroidInGameMenu____c__DisplayClass10_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AndroidInGameMenu____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gamePassesUI;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GamePassesUI *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).gamePassesUI;
      if (pGVar1 == (GamePassesUI *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pGVar1,(MethodInfo *)0x0);
      bVar3 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
      if (bVar3 == 0) {
        bVar3 = 0;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar3 = TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
      }
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,bVar3 != 0,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar4 != (MVGameControllerBase *)0x0) &&
     (pGVar5 = (pMVar4->fields).goldRewardManager, pGVar5 != (GoldRewardManager *)0x0)) {
    bVar3 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar5,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 == (MVGameControllerBase *)0x0) ||
         (pGVar5 = (pMVar4->fields).goldRewardManager, pGVar5 == (GoldRewardManager *)0x0))
      goto code_?;
      fVar6 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(pGVar5,(MethodInfo *)0x0);
      if (fVar6 <= 0.0) {
        object = (Object *)FUN_?(TypeInfo__AndroidInGameMenu____c__DisplayClass10_0);
        pGVar2 = (this->fields).claimGoldRewardPopupPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar7 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar2,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        if (object == (Object *)0x0) goto code_?;
        bVar8 = iRam_? != 0;
        object[1].klass = pOVar7;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)(object + 1) >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_00,object,
                   MethodInfo__AndroidInGameMenu____c__DisplayClass10_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,this_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

