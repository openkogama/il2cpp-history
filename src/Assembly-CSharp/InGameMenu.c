
/* Void Initialize() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_Initialize(InGameMenu *this,MethodInfo *method)

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
  if ((pTVar5 != (TimedPlayReward *)0x0) &&
     (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
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
    this_00 = (this->fields).embeddedPlayerConfig;
    if (this_00 != (EmbeddedPlayerConfig *)0x0) {
      pEVar7 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                         ((EmbeddedSiteConfigData *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
      EVar8 = *pEVar7;
      if ((EVar8.allowsModals == 0) && (EVar8.allowsOpenInNewTab == 0)) {
        uVar9 = EVar8._8_4_ >> 0x10 & 0xff;
      }
      else {
        uVar9 = 1;
      }
      pGVar6 = (this->fields).touristRegisterButton;
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,bVar1 != 0 && uVar9 != 0,(MethodInfo *)0x0);
        pGVar6 = (this->fields).accessoryShopButton;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar1 == 0) {
          value = true;
        }
        else {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
          ;
          if (bVar1 == 0) {
            value = false;
          }
          else {
            value = uVar9 != 0;
          }
        }
        if (pGVar6 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,value,(MethodInfo *)0x0);
          if (cVar4 != '\0') {
            pTVar5 = (this->fields).playReward;
            if (pTVar5 == (TimedPlayReward *)0x0) goto code_?;
            TimedPlayReward::TimedPlayReward_Initialize(pTVar5,(MethodInfo *)0x0);
          }
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__GamePassesManager);
          }
          bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
          if (bVar1 != 0) {
            pGVar10 = (this->fields).gamePassesUIPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pGVar10 = (GamePassesUI *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)pGVar10,
                                GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI_
                               );
            (this->fields).gamePassesUI = pGVar10;
            if (pGVar10 == (GamePassesUI *)0x0) goto code_?;
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pGVar10,(MethodInfo *)0x0);
            parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar11 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar11,parent,0,(MethodInfo *)0x0);
            pGVar10 = (this->fields).gamePassesUI;
            if (pGVar10 == (GamePassesUI *)0x0) goto code_?;
            GamePassesUI::GamePassesUI_Initialize(pGVar10,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
              func_?(TypeInfo__GamePassProgressionController);
            }
            bVar1 = GamePassProgressionController::
                    GamePassProgressionController_get_IsProgressionEnabled((MethodInfo *)0x0);
            if (bVar1 == 0) {
              pGVar10 = (this->fields).gamePassesUI;
              if ((pGVar10 == (GamePassesUI *)0x0) ||
                 (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pGVar10,(MethodInfo *)0x0),
                 pGVar6 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
            }
          }
          pGVar6 = (this->fields).winningConditionDebriefing;
          if ((pGVar6 != (GameObject *)0x0) &&
             (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar6,(MethodInfo *)0x0),
             pTVar11 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar11,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_OnEnable(InGameMenu *this,MethodInfo *method)

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
                   MethodInfo__InGameMenu___OnEnable_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void Update() */

void Assembly-CSharp.dll::InGameMenu::InGameMenu_Update(InGameMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 == (ILockCursorManager *)0x0) goto code_?;
  cVar2 = func_?(2,TypeInfo__ILockCursorManager,pIVar1);
  pIVar3 = (this->fields).inGameMenuBlockingOverlay;
  if (cVar2 == '\0') {
    if (pIVar3 == (Image *)0x0) goto code_?;
    pIVar4 = pIVar3->klass;
    pIVar5 = (pIVar4->vtable).SetAllDirty.methodPtr;
    uVar6 = 0;
  }
  else {
    if (pIVar3 == (Image *)0x0) goto code_?;
    pIVar4 = pIVar3->klass;
    pIVar5 = (pIVar4->vtable).SetAllDirty.methodPtr;
    uVar6 = 1;
  }
  (*(code *)(pIVar4->vtable).set_raycastTarget.method)(pIVar3,uVar6,pIVar5);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar7 == (SpawnRoleDataMediator *)0x0) ||
     (pSVar8 = (pSVar7->fields).SpawnRoleModeTypeWrapper, pSVar8 == (SpawnRoleModeTypeWrapper *)0x0)
     ) goto code_?;
  bVar9 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                    (pSVar8,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).respawnButton;
    if (pDVar10 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) goto code_?;
    pGVar11 = (GameObject *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (pDVar10,(MethodInfo *)0x0);
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar11,(MethodInfo *)0x0);
    if (bVar9 == 0) goto code_?;
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).respawnButton;
    if (pDVar10 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) goto code_?;
    pGVar11 = (GameObject *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (pDVar10,(MethodInfo *)0x0);
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    bVar9 = 0;
  }
  else {
code_?:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar7 == (SpawnRoleDataMediator *)0x0) ||
       (pSVar8 = (pSVar7->fields).SpawnRoleModeTypeWrapper,
       pSVar8 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
    bVar9 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (pSVar8,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    if (bVar9 == 0) goto code_?;
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).respawnButton;
    if (pDVar10 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
code_?:
      func_?(0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pGVar11 = (GameObject *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (pDVar10,(MethodInfo *)0x0);
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar11,(MethodInfo *)0x0);
    if (bVar9 != 0) goto code_?;
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).respawnButton;
    if (pDVar10 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) goto code_?;
    pGVar11 = (GameObject *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (pDVar10,(MethodInfo *)0x0);
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    bVar9 = 1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar11,bVar9,(MethodInfo *)0x0);
code_?:
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  return;
}

