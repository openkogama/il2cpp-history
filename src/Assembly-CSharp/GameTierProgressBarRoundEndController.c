
/* Void OnDestroy() */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_OnDestroy
               (GameTierProgressBarRoundEndController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) {
      func_?(0);
      pAStack3 = extraout_ECX;
      pAStack4 = extraout_EDX;
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar6 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAStack3 =
         (Action_1_IWinningCondition_ *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar6 = (Action_1_IWinningCondition_ *)0x0;
    if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar6 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar6 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMVar2->fields).OnWinningConditionFulfilled = pAVar6;
  }
  return;
}


/* Void OnRoundEnd(IWinningCondition) */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_OnRoundEnd
               (GameTierProgressBarRoundEndController *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    (this->fields).hasRoundEnded = 1;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_Start
               (GameTierProgressBarRoundEndController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    puVar3 = &UNK_?;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__GameTierProgressBarRoundEndController__OnRoundEnd_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAVar5 = (Action_1_IWinningCondition_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pAVar2 = (Action_1_IWinningCondition_ *)0x0;
    if (pAVar5 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAVar5->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar2 = pAVar5;
      }
      pAVar6 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
    this_00 = (this->fields).tierProgressBar;
    if (this_00 != (GameTierProgressBar *)0x0) {
      GameTierProgressBar::GameTierProgressBar_Initialize(this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).gainEffectController;
      if (this_01 != (GameTierProgressBarGainEffectController *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?,unaff_EBP);
          cRam_? = '\x01';
        }
        if ((this_01->fields).isInitialized != 0) {
          return;
        }
        (this_01->fields).isInitialized = 1;
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager,unaff_ESI);
        }
        bVar7 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
        if (bVar7 != 0) {
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__GamePassesManager);
          }
          pPVar8 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar8 == (PlayerPlanetData *)0x0) goto code_?;
          (this_01->fields).currentGamePoints = (pPVar8->fields).progressionGamePoints;
        }
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        pAVar9 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action,in_stack_10,puVar3);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this_01,
                   MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
                   (MethodInfo *)0x0);
        pAVar11 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar9,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pAVar9 = (Action *)0x0;
        if (pAVar11 == (Action *)0x0) {
code_?:
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar9;
          if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
            func_?();
          }
          pAVar12 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this_01,
                     MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_
                     ,MethodInfo__System__Action<int>__Action_System__Object__void__);
          pAVar13 = (Action_1_Int32_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar12,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pAVar12 = (Action_1_Int32_ *)0x0;
          if (pAVar13 != (Action_1_Int32_ *)0x0) {
            if (pAVar13->klass == TypeInfo__System__Action<int>) {
              pAVar12 = pAVar13;
            }
            if (pAVar12 == (Action_1_Int32_ *)0x0) goto code_?;
          }
          TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar12;
          pAVar12 = TypeInfo__GamePointGainEffectManager->static_fields->
                    OnTierProgressBarGamePointGainEffectShown;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this_01,
                     MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                     ,MethodInfo__System__Action<int>__Action_System__Object__void__);
          pAVar13 = (Action_1_Int32_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar12,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pAVar12 = (Action_1_Int32_ *)0x0;
          if (pAVar13 == (Action_1_Int32_ *)0x0) {
code_?:
            iVar14 = 5;
            TypeInfo__GamePointGainEffectManager->static_fields->
            OnTierProgressBarGamePointGainEffectShown = pAVar12;
            do {
              GameTierProgressBarGainEffectController::
              GameTierProgressBarGainEffectController_CreateGamePointGainEffect
                        (this_01,(MethodInfo *)0x0);
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            return;
          }
          if (pAVar13->klass == TypeInfo__System__Action<int>) {
            pAVar12 = pAVar13;
          }
          if (pAVar12 != (Action_1_Int32_ *)0x0) goto code_?;
        }
        else {
          if (pAVar11->klass == TypeInfo__System__Action) {
            pAVar9 = pAVar11;
          }
          if (pAVar9 != (Action *)0x0) goto code_?;
        }
code_?:
        func_?();
code_?:
        func_?(0);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  func_?(0);
  pAVar5 = extraout_ECX;
  pAVar6 = extraout_EDX;
code_?:
  func_?(pAVar5,pAVar6);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameTierProgressBarRoundEndController::
     GameTierProgressBarRoundEndController_Update
               (GameTierProgressBarRoundEndController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).hasRoundEnded == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
     this_00 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x2) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (this_01 = (KogamaSettingNumericBase_1_System_Single_ *)
                    InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                              ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
         this_01 != (KogamaSettingNumericBase_1_System_Single_ *)0x0)) {
        pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           (this_01,(MethodInfo *)0x0);
        if (3000 < (int)pIVar3) {
          return;
        }
        pGVar4 = (this->fields).tierProgressBar;
        if ((pGVar4 != (GameTierProgressBar *)0x0) &&
           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pGVar4,(MethodInfo *)0x0),
           pGVar5 != (GameObject *)0x0)) {
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar5,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            pGVar4 = (this->fields).tierProgressBar;
            if ((pGVar4 == (GameTierProgressBar *)0x0) ||
               (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pGVar4,(MethodInfo *)0x0),
               pGVar5 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
          }
          pGVar5 = (this->fields).inGameUIContent;
          if (pGVar5 != (GameObject *)0x0) {
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar5,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              return;
            }
            pGVar5 = (this->fields).inGameUIContent;
            if (pGVar5 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      pGVar4 = (this->fields).tierProgressBar;
      (this->fields).hasRoundEnded = 0;
      if ((pGVar4 != (GameTierProgressBar *)0x0) &&
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pGVar4,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0)
         ) {
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          pGVar4 = (this->fields).tierProgressBar;
          if ((pGVar4 == (GameTierProgressBar *)0x0) ||
             (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pGVar4,(MethodInfo *)0x0),
             pGVar5 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
        }
        pGVar5 = (this->fields).inGameUIContent;
        if (pGVar5 != (GameObject *)0x0) {
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar5,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            return;
          }
          pGVar5 = (this->fields).inGameUIContent;
          if (pGVar5 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

