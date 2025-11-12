
/* Void Initialize() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_Initialize(InGameMenu *this,MethodInfo *method)

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
  if (pGVar1 != (GameSessionData *)0x0) {
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
    if ((pTVar5 != (TimedPlayReward *)0x0) &&
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
      if (iVar2 < 1) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVClientSettings);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar4 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2);
      }
      pEVar7 = (this->fields).embeddedPlayerConfig;
      if (pEVar7 != (EmbeddedPlayerConfig *)0x0) {
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
        value = uVar11 != 0;
        if (pGVar6 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,bVar4 & value,(MethodInfo *)0x0);
          if (cVar10 == '\0') {
            if (0 < iVar2) {
              value = true;
            }
          }
          else {
            value = false;
          }
          pGVar6 = (this->fields).accessoryShopButton;
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,value,(MethodInfo *)0x0);
            pGVar6 = (this->fields).adminObserveButton;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
                 (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                (this_00 = (pMVar13->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
               && (pMVar14 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (this_00,(MethodInfo *)0x0), pMVar14 != (MVLocalPlayer *)0x0)
               ) {
              if ((pMVar14->fields)._._ProfileID_k__BackingField < 1) {
                bVar15 = 0;
              }
              else {
                pUVar16 = (pMVar14->fields)._._UserProfileData_k__BackingField;
                if (pUVar16 == (UserProfileData *)0x0) goto code_?;
                bVar15 = (pUVar16->fields).IsAdmin;
              }
              if (pGVar6 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,bVar15,(MethodInfo *)0x0);
                if (bVar3) {
                  pTVar5 = (this->fields).playReward;
                  if (pTVar5 == (TimedPlayReward *)0x0) goto code_?;
                  TimedPlayReward::TimedPlayReward_Initialize(pTVar5,(MethodInfo *)0x0);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__GamePassesManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField !=
                    0) {
                  pGVar17 = (this->fields).gamePassesUIPrefab;
                  pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pGVar17 = (GamePassesUI *)
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                      ((Object *)pGVar17,pTVar18,0,
                                       GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                                      );
                  bVar3 = iRam_? != 0;
                  (this->fields).gamePassesUI = pGVar17;
                  if (bVar3) {
                    uVar19 = (uint)((ulonglong)&(this->fields).gamePassesUI >> 0xc);
                    puVar20 = (ulonglong *)((ulonglong)((uVar19 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar21 = *puVar20;
                      LOCK();
                      uVar22 = *puVar20;
                      if (uVar21 == uVar22) {
                        *puVar20 = uVar21 | 1L << (uVar19 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar21 != uVar22);
                  }
                  pGVar17 = (this->fields).gamePassesUI;
                  if (pGVar17 == (GamePassesUI *)0x0) goto code_?;
                  GamePassesUI::GamePassesUI_Initialize(pGVar17,(MethodInfo *)0x0);
                  bVar15 = GamePassProgressionController::
                           GamePassProgressionController_get_IsProgressionEnabled((MethodInfo *)0x0)
                  ;
                  if (bVar15 == 0) {
                    pGVar17 = (this->fields).gamePassesUI;
                    if ((pGVar17 == (GamePassesUI *)0x0) ||
                       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pGVar17,(MethodInfo *)0x0),
                       pGVar6 == (GameObject *)0x0)) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar6,0,(MethodInfo *)0x0);
                  }
                }
                pGVar6 = (this->fields).winningConditionDebriefing;
                if ((pGVar6 != (GameObject *)0x0) &&
                   (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar6,(MethodInfo *)0x0),
                   pTVar18 != (Transform *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar23 = (pTVar18->fields)._._.m_CachedPtr;
                  if (pvVar23 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
                    pcVar24 = (code *)swi(3);
                    (*pcVar24)();
                    return;
                  }
                  pcVar24 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                    uVar25 = func_?(&UNK_?);
                    FUN_?(uVar25,0);
                    pcVar24 = (code *)swi(3);
                    (*pcVar24)();
                    return;
                  }
                  pcRam_? = pcVar24;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam_?)(pvVar23);
                  return;
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
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_OnEnable(InGameMenu *this,MethodInfo *method)

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
                  MethodInfo__InGameMenu____c__DisplayClass14_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InGameMenu____c__DisplayClass14_0);
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
        object = (Object *)FUN_?(TypeInfo__InGameMenu____c__DisplayClass14_0);
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
                   MethodInfo__InGameMenu____c__DisplayClass14_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void Update() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_Update(InGameMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
  pIVar2 = (this->fields).inGameMenuBlockingOverlay;
  if (bVar1 == 0) {
    if (pIVar2 == (Image *)0x0) goto code_?;
    uVar3 = 0;
  }
  else {
    if (pIVar2 == (Image *)0x0) goto code_?;
    uVar3 = CONCAT71((int7)((ulonglong)method >> 8),1);
  }
  (*(pIVar2->klass->vtable).set_raycastTarget.methodPtr)();
  pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((pSVar4 == (SpawnRoleDataMediator *)0x0) ||
     (pSVar5 = (pSVar4->fields).SpawnRoleModeTypeWrapper, pSVar5 == (SpawnRoleModeTypeWrapper *)0x0
     )) goto code_?;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar6 = (pSVar5->fields).spawnRoleType;
  if ((pSVar6 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
     (pSVar7 = (pSVar6->fields).subscribableVariable,
     pSVar7 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
  goto code_?;
  if (((pSVar7->fields)._.value & 1) == 0) {
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    uVar3 = 0;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar8,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    uVar3 = 0;
  }
  else {
code_?:
    pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if ((pSVar4 == (SpawnRoleDataMediator *)0x0) ||
       (pSVar5 = (pSVar4->fields).SpawnRoleModeTypeWrapper,
       pSVar5 == (SpawnRoleModeTypeWrapper *)0x0)) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar6 = (pSVar5->fields).spawnRoleType;
    if ((pSVar6 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
       (pSVar7 = (pSVar6->fields).subscribableVariable,
       pSVar7 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
    goto code_?;
    if (((pSVar7->fields)._.value & 1) == 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    uVar3 = 0;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar8,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar8,(bool)uVar3,(MethodInfo *)0x0);
code_?:
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = (MVInputWrapper_InputSuppression *)
            FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  pIVar11 = (pMVar10->klass->vtable).set_IsSuppressed.methodPtr;
  (*pIVar11)(pMVar10,CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
            (pMVar10->klass->vtable).set_IsSuppressed.method,pIVar11,unaff_RBX);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = pMVar10;
  if (iRam_? != 0) {
    uVar12 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed >>
                   0xc);
    puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar14 = *puVar13;
      LOCK();
      uVar15 = *puVar13;
      if (uVar14 == uVar15) {
        *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (uVar14 != uVar15);
  }
  return;
}

