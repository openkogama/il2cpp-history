
/* Void CreateStartGoldRewardPopup() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_CreateStartGoldRewardPopup
               (LobbyStateController *this,MethodInfo *method)

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
                  MethodInfo__LobbyStateController____c__DisplayClass18_0___CreateStartGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateController____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__LobbyStateController____c__DisplayClass18_0);
  pGVar1 = (this->fields).startGoldRewardPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = iRam_? != 0;
  object[1].klass = pOVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__LobbyStateController____c__DisplayClass18_0___CreateStartGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar5 = 0;
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
        if ((uint)(pLVar10->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar5) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeGamePassesUI() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_InitializeGamePassesUI
               (LobbyStateController *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pGVar1 = (this->fields).gamePassesUIPrefab;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GamePassesUI *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pGVar1,parent,0,
                      GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).gamePassesUI = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gamePassesUI >> 0xc);
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
  pGVar1 = (this->fields).gamePassesUI;
  if (pGVar1 != (GamePassesUI *)0x0) {
    GamePassesUI::GamePassesUI_Initialize(pGVar1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gamePassesUI;
    if (pGVar1 != (GamePassesUI *)0x0) {
      GamePassesUI::GamePassesUI_TryShowWelcomeReward(pGVar1,(MethodInfo *)0x0);
      bVar7 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
      if (bVar7 != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
          return;
        }
      }
      pGVar1 = (this->fields).gamePassesUI;
      if ((pGVar1 != (GamePassesUI *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pGVar1,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (GameObject *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pvVar9 = (obj->fields)._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar9,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeGoldReward(Boolean) */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_InitializeGoldReward
               (LobbyStateController *this,bool isTourist,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
    bVar3 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
      bVar4 = 0;
      if ((pGVar2->fields).isCountingDownGoldReward == 0) {
        bVar4 = isTourist ^ 1;
      }
      if ((bVar3 & bVar4) == 0) {
        obj = (this->fields).goldIconOnPlayButton;
        if (obj != (GameObject *)0x0) {
          uVar5 = 0;
code_?:
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,uVar5,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (GameObject *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pvVar7 = (obj->fields)._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar7,uVar5);
          return;
        }
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
          GoldRewardManager::GoldRewardManager_StartGoldRewardCountdownWhenReady
                    (pGVar2,(MethodInfo *)0x0);
          obj = (this->fields).goldIconOnPlayButton;
          if (obj != (GameObject *)0x0) {
            uVar5 = 1;
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitializeLobbyMenuButtons(Boolean) */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_InitializeLobbyMenuButtons
               (LobbyStateController *this,bool isTourist,MethodInfo *method)

{
  if (isTourist == 0) {
    bVar1 = 0;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar1 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2);
  }
  pEVar2 = (this->fields).embeddedPlayerConfig;
  if (pEVar2 != (EmbeddedPlayerConfig *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pEVar2->fields).initialized == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
      auVar3._0_8_ = (pEVar2->fields).kogamaDefaultData.sites;
      auVar3._8_4_ = (pEVar2->fields).kogamaDefaultData.siteEnum;
      auVar3[0xc] = (pEVar2->fields).kogamaDefaultData.showTouristPromotion;
      auVar3[0xd] = (pEVar2->fields).kogamaDefaultData.allowsOpenInNewTab;
      auVar3[0xe] = (pEVar2->fields).kogamaDefaultData.allowsRedirectToWebpage;
      auVar3[0xf] = (pEVar2->fields).kogamaDefaultData.allowsModals;
      uVar4 = (pEVar2->fields).kogamaDefaultData.hideGoldShop;
      cVar5 = uVar4;
    }
    else {
      auVar3._0_8_ = (pEVar2->fields).currentSite.sites;
      auVar3._8_4_ = (pEVar2->fields).currentSite.siteEnum;
      auVar3[0xc] = (pEVar2->fields).currentSite.showTouristPromotion;
      auVar3[0xd] = (pEVar2->fields).currentSite.allowsOpenInNewTab;
      auVar3[0xe] = (pEVar2->fields).currentSite.allowsRedirectToWebpage;
      auVar3[0xf] = (pEVar2->fields).currentSite.allowsModals;
      cVar5 = (pEVar2->fields).currentSite.hideGoldShop;
    }
    if ((auVar3[0xf] == '\0') && (auVar3[0xd] == '\0')) {
      uVar6 = auVar3._14_2_ & 0xff;
    }
    else {
      uVar6 = 1;
    }
    pGVar7 = (this->fields).touristRegisterButton;
    if (pGVar7 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,bVar1 & uVar6 != 0,(MethodInfo *)0x0);
      if (cVar5 == '\0') {
        if (isTourist == 0) {
          bVar1 = 1;
        }
        else {
          bVar1 = uVar6 != 0 & isTourist;
        }
      }
      else {
        bVar1 = 0;
      }
      pGVar7 = (this->fields).accessoryShop;
      if (pGVar7 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar1,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar7 == (GameObject *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pvVar9 = (pGVar7->fields)._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar7,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar9,bVar1);
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_OnEnable
               (LobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
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
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pGVar1,(MethodInfo *)0x0);
      bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
      if (bVar2 == 0) {
        bVar2 = 0;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar2 = TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
      }
      if (this_00 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,bVar2 != 0,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar3 != (GameSessionData *)0x0) {
    if ((pGVar3->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar3 != (GameSessionData *)0x0) {
        if ((pGVar3->fields).gameMode != 0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar4 != (MainCameraManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_CamRotateTarget);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pMVar4->fields).maskMode = 0;
          pCVar5 = (pMVar4->fields).mainCamera;
          if (pCVar5 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (pCVar5,(pMVar4->fields).cullingMask,(MethodInfo *)0x0);
            (pMVar4->fields).blueModeEnabled = 0;
            MainCameraManager::MainCameraManager_RenderLogic
                      (pMVar4,(pMVar4->fields).isLogicRendered,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar4 != (MainCameraManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_CamRotateTarget);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (pMVar4->fields).maskMode = 1;
        pCVar5 = (pMVar4->fields).mainCamera;
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
        if (pCVar5 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar5,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
          (pMVar4->fields).blueModeEnabled = 1;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetShouldPopOnExit(Boolean) */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_SetShouldPopOnExit
               (LobbyStateController *this,bool shouldPop,MethodInfo *method)

{
  pLVar1 = (this->fields).lobbyStatePlayButton;
  if (pLVar1 != (LobbyStateButton *)0x0) {
    (pLVar1->fields).shouldPop = shouldPop;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowBoostMenu() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_ShowBoostMenu
               (LobbyStateController *this,MethodInfo *method)

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
                  BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyStateController____c__DisplayClass17_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyStateController____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__LobbyStateController____c__DisplayClass17_0);
  original = (this->fields).boosterMenu;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
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
      BoostMenuController::BoostMenuController_Initialize
                ((BoostMenuController *)object[1].klass,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__LobbyStateController____c__DisplayClass17_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar7,(BaseEventData *)0x0,this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pLVar8 = (this->fields).playButton;
      if ((pLVar8 != (LobbyStateButton *)0x0) &&
         (this_00 = (pLVar8->fields).lobbyStateButton, this_00 != (Button *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          FUN_?(&
                        bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar9 = FUN_?(&(this_00->fields)._.m_Interactable);
        if (cVar9 == '\0') {
          return;
        }
        if ((this_00->fields)._.m_Interactable == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
            FUN_?();
          }
          pEVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                   EventSystem_get_current((MethodInfo *)0x0);
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
          if (pEVar10 != (EventSystem *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pEVar10->fields)._._._._._.m_CachedPtr != (void *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
                FUN_?();
              }
              pEVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar10 != (EventSystem *)0x0) {
                pGVar7 = (pEVar10->fields).m_CurrentSelected;
                pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
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
                if (pGVar11 != (GameObject *)0x0 || pGVar7 != (GameObject *)0x0) {
                  if (pGVar11 == (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (pGVar7 == (GameObject *)0x0) goto DAT_?;
                    bVar2 = (pGVar7->fields)._.m_CachedPtr == (void *)0x0;
                  }
                  else if (pGVar7 == (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    bVar2 = (pGVar11->fields)._.m_CachedPtr == (void *)0x0;
                  }
                  else {
                    bVar2 = pGVar7 == pGVar11;
                  }
                  if (!bVar2) goto code_?;
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0)
                {
                  FUN_?();
                }
                pEVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                         EventSystem_get_current((MethodInfo *)0x0);
                if (pEVar10 != (EventSystem *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                  EventSystem_SetSelectedGameObject_1(pEVar10,(GameObject *)0x0,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
DAT_?:
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
        }
code_?:
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                  ((Selectable *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController_Start
               (LobbyStateController *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    value = (this->fields)._.cameraMaskMode;
    player = (MVPlayer *)(ulonglong)value;
    method_00 = (MethodInfo *)0x0;
    MainCameraManager::MainCameraManager_set_CamMaskMode(this_00,value,(MethodInfo *)0x0);
    if ((this->fields)._.haveSetSelectedTeam == 0) {
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
      if (extraout_RAX == 0) goto code_?;
      (this->fields)._.selectedTeam = *(int32_t *)(extraout_RAX + 0x84);
    }
    LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      iVar2 = (pGVar1->fields).profileID;
      bVar3 = 0;
      if (iVar2 < 1) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVClientSettings);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar3 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2);
      }
      pEVar4 = (this->fields).embeddedPlayerConfig;
      if (pEVar4 != (EmbeddedPlayerConfig *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pEVar4->fields).initialized == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
          auVar5._0_8_ = (pEVar4->fields).kogamaDefaultData.sites;
          auVar5._8_4_ = (pEVar4->fields).kogamaDefaultData.siteEnum;
          auVar5[0xc] = (pEVar4->fields).kogamaDefaultData.showTouristPromotion;
          auVar5[0xd] = (pEVar4->fields).kogamaDefaultData.allowsOpenInNewTab;
          auVar5[0xe] = (pEVar4->fields).kogamaDefaultData.allowsRedirectToWebpage;
          auVar5[0xf] = (pEVar4->fields).kogamaDefaultData.allowsModals;
          uVar6 = (pEVar4->fields).kogamaDefaultData.hideGoldShop;
          cVar7 = uVar6;
        }
        else {
          auVar5._0_8_ = (pEVar4->fields).currentSite.sites;
          auVar5._8_4_ = (pEVar4->fields).currentSite.siteEnum;
          auVar5[0xc] = (pEVar4->fields).currentSite.showTouristPromotion;
          auVar5[0xd] = (pEVar4->fields).currentSite.allowsOpenInNewTab;
          auVar5[0xe] = (pEVar4->fields).currentSite.allowsRedirectToWebpage;
          auVar5[0xf] = (pEVar4->fields).currentSite.allowsModals;
          cVar7 = (pEVar4->fields).currentSite.hideGoldShop;
        }
        if ((auVar5[0xf] == '\0') && (auVar5[0xd] == '\0')) {
          uVar8 = auVar5._14_2_ & 0xff;
        }
        else {
          uVar8 = 1;
        }
        pGVar9 = (this->fields).touristRegisterButton;
        if (pGVar9 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar9,bVar3 & uVar8 != 0,(MethodInfo *)0x0);
          if (cVar7 == '\0') {
            if (iVar2 < 1) {
              value_00 = iVar2 < 1 && uVar8 != 0;
            }
            else {
              value_00 = true;
            }
          }
          else {
            value_00 = false;
          }
          pGVar9 = (this->fields).accessoryShop;
          if (pGVar9 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar9,value_00,(MethodInfo *)0x0);
            LobbyStateController_InitializeGamePassesUI(this,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar10 != (MVGameControllerBase *)0x0) &&
               (pGVar11 = (pMVar10->fields).goldRewardManager, pGVar11 != (GoldRewardManager *)0x0)) {
              bVar12 = GoldRewardManager::GoldRewardManager_CanGetGoldReward
                                (pGVar11,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar10 != (MVGameControllerBase *)0x0) &&
                 (pGVar11 = (pMVar10->fields).goldRewardManager, pGVar11 != (GoldRewardManager *)0x0))
              {
                bVar3 = 0;
                if (0 < iVar2) {
                  bVar3 = bVar12;
                }
                if (((pGVar11->fields).isCountingDownGoldReward == 0 & bVar3) == 0) {
                  pGVar9 = (this->fields).goldIconOnPlayButton;
                  if (pGVar9 != (GameObject *)0x0) {
                    uVar13 = 0;
code_?:
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                    ,uVar13,0);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (pGVar9 == (GameObject *)0x0) {
                      FUN_?();
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pvVar15 = (pGVar9->fields)._.m_CachedPtr;
                    if (pvVar15 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar9,(MethodInfo *)0x0)
                      ;
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pcVar14 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                      uVar13 = func_?(&UNK_?);
                      FUN_?(uVar13,0);
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    pcRam_? = pcVar14;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam_?)(pvVar15,uVar13);
                    return;
                  }
                }
                else {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar10 != (MVGameControllerBase *)0x0) &&
                     (pGVar11 = (pMVar10->fields).goldRewardManager,
                     pGVar11 != (GoldRewardManager *)0x0)) {
                    GoldRewardManager::GoldRewardManager_StartGoldRewardCountdownWhenReady
                              (pGVar11,(MethodInfo *)0x0);
                    pGVar9 = (this->fields).goldIconOnPlayButton;
                    if (pGVar9 != (GameObject *)0x0) {
                      uVar13 = 1;
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* LobbyStateController() */

void Assembly-CSharp.dll::LobbyStateController::LobbyStateController__ctor
               (LobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.cameraMaskMode = 2;
  this_00 = (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.menuOrder = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.menuOrder >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
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
  return;
}

