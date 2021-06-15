
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_AwaitSpawnThenClose
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    pOVar1 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
             TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__Close_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      a = pOVar1[2].klass;
      do {
        pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
        pDVar3 = (Delegate *)0x0;
        if (pDVar2 != (Delegate *)0x0) {
          if ((Action_1_Int32___Class *)pDVar2->klass == TypeInfo__System__Action<int>) {
            pDVar3 = pDVar2;
          }
          pAVar4 = TypeInfo__System__Action<int>;
          if (pDVar3 == (Delegate *)0x0) goto code_?;
        }
        pOVar5 = (Object__Class *)func_?(pOVar1 + 2,pDVar3,a);
        bVar6 = pOVar5 == a;
        a = pOVar5;
        if (bVar6) {
          return;
        }
      } while( true );
    }
  }
  func_?(0);
  pDVar2 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pDVar2,pAVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Close
               (SpawnRoleUnlockedPopupController *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__SpawnRoleUnlockedPopupController->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__SpawnRoleUnlockedPopupController___Close_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__SpawnRoleUnlockedPopupController->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__SpawnRoleUnlockedPopupController->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (in_stack_3->fields).maskMode = in_stack_4;
  if (in_stack_4 == 0) {
    pCVar5 = (in_stack_3->fields).mainCamera;
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar5,(in_stack_3->fields).cullingMask,(MethodInfo *)0x0);
      (in_stack_3->fields).blueModeEnabled = 0;
      MainCameraManager::MainCameraManager_RenderLogic
                (in_stack_3,(in_stack_3->fields).isLogicRendered,(MethodInfo *)0x0);
      return;
    }
  }
  else if (in_stack_4 == 1) {
    pCVar5 = (in_stack_3->fields).mainCamera;
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar5,1 << ((byte)iVar6 & 0x1f),(MethodInfo *)0x0);
      (in_stack_3->fields).blueModeEnabled = 1;
      return;
    }
  }
  else {
    if (in_stack_4 != 2) {
      return;
    }
    if ((in_stack_3->fields).mainCamera != (Camera *)0x0) {
      uStack7 = 0;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
        func_?();
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Color GetColor(MVTeam) */

Color * Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
        SpawnRoleUnlockedPopupController_GetColor
                  (Color *__return_storage_ptr__,SpawnRoleUnlockedPopupController *this,
                  MVTeam__Enum spawnRoleTeam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (SkyParam *)0x0) {
      this_02 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)this_01,(MethodInfo *)0x0)
      ;
      if (this_02 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                           );
        if (1 < (int)pOVar1) {
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?();
          }
          pCVar2 = Styles::Styles_GetTeamColor
                             ((Color *)&stack0xffffffec,spawnRoleTeam,0,(MethodInfo *)0x0);
          fRam00000000 = pCVar2->r;
          fRam00000004 = pCVar2->g;
          fRam00000008 = pCVar2->b;
          fRam0000000c = pCVar2->a;
          return (Color *)0x0;
        }
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar2 = Styles::Styles_GetColor
                           ((Color *)&stack0xffffffec,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
        fRam00000000 = pCVar2->r;
        fRam00000004 = pCVar2->g;
        fRam00000008 = pCVar2->b;
        fRam0000000c = pCVar2->a;
        return (Color *)0x0;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pCVar2 = (Color *)(*pcVar3)();
  return pCVar2;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_HandleTeamSwitching
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (IKogamaSetting *)(this->fields).team;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,(MethodInfo *)0x0);
    if (pIVar1 == pIVar4) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_00,(this->fields).team,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        this_01 = (GameStatCounterManager *)
                  DayNightCycle::DayNightCycle_get_CurrentStarsParam
                            ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          actorNr = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar3,(MethodInfo *)0x0)
          ;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             ((pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
              pMVar3 != (MVLocalPlayer *)0x0 &&
              (pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                        KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                        KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                  ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,
                                   (MethodInfo *)0x0), this_01 != (GameStatCounterManager *)0x0))))
          {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_01,(int32_t)actorNr,(MVTeam__Enum)pIVar1,(MethodInfo *)0x0);
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar2 != (MVNetworkGame *)0x0) &&
               (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
               pMVar3 != (MVLocalPlayer *)0x0)) {
              MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)pMVar3,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                 pMVar3 != (MVLocalPlayer *)0x0)) {
                UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
                ObjectPool_1_System_Object__set_countAll
                          ((ObjectPool_1_System_Object_ *)pMVar3,(this->fields).team,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(GamePassTier, Boolean, Boolean, Int32) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_Initialize
               (SpawnRoleUnlockedPopupController *this,GamePassTier__Enum unlockedTier,
               bool wasPurchased,bool wasTempUnlocked,int32_t spawnRoleWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).unlockedTier = (undefined1)unlockedTier;
  (this->fields).wasPurchased = wasPurchased;
  (this->fields).wasTempUnlocked = wasTempUnlocked;
  (this->fields).spawnRoleWoId = spawnRoleWoId;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).bounceEffectStartTime = fVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
  }
  else {
    this_00 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar2,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar3 = (MVAvatarSpawnRoleCreator *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,spawnRoleWoId,(MethodInfo *)0x0);
    if (pMVar3 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    bVar4 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
       ((MVAvatarSpawnRoleCreator__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    this_03 = (MVAvatarSpawnRoleCreator *)0x0;
    if (bVar5) {
      this_03 = pMVar3;
    }
    if (this_03 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    spawnRolePreviewObject =
         MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
                   (this_03,(MethodInfo *)0x0);
    SpawnRoleUnlockedPopupController_SetupPreviewImage
              (this,spawnRolePreviewObject,(MethodInfo *)0x0);
    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(this_03,(MethodInfo *)0x0);
    pIVar6 = (this->fields).Background;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
    if (this_01 == (SkyParam *)0x0) goto code_?;
    this_02 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)this_01,(MethodInfo *)0x0);
    if (this_02 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
    wasTempUnlocked = 0xaf;
    pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                       );
    if ((int)pOVar7 < 2) {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      Styles::Styles_GetColor((Color *)&stack0xffffffdc,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?();
      }
      wasTempUnlocked = 0xe4;
      Styles::Styles_GetTeamColor(&CStack_8,0xADDR,0,(MethodInfo *)0x0);
    }
    if (pIVar6 == (Image *)0x0) goto code_?;
    (*(code *)(pIVar6->klass->vtable).set_color.method)();
    TM::TM__(StringLiteral_NEW_CLASS_UNLOCKED_,(MethodInfo *)0x0);
    if (wasTempUnlocked != 0) {
      TM::TM__(StringLiteral_NEW_CLASS_IS_NOW_UNLOCKED_UNTIL_,(MethodInfo *)0x0);
    }
    pTVar9 = (this->fields).titleText;
    if (pTVar9 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar9->klass->vtable).set_text.method)();
    MVar10 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(this_03,(MethodInfo *)0x0);
    (this->fields).team = MVar10;
    pCVar11 = (this->fields).continueButtonHandler;
    if (pCVar11 == (ContinueButtonHandler *)0x0) goto code_?;
    pAVar12 = (pCVar11->fields).OnClick;
    pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar13,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,
               (MethodInfo *)0x0);
    pAVar14 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
    pAVar12 = (Action *)0x0;
    if (pAVar14 == (Action *)0x0) {
code_?:
      (pCVar11->fields).OnClick = pAVar12;
      pCVar11 = (this->fields).backgroundContinueButtonHandler;
      if (pCVar11 == (ContinueButtonHandler *)0x0) goto code_?;
      pAVar12 = (pCVar11->fields).OnClick;
      pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar13,(Object *)this,
                 MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,(MethodInfo *)0x0);
      pAVar14 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
      pAVar12 = (Action *)0x0;
      if (pAVar14 == (Action *)0x0) {
code_?:
        (pCVar11->fields).OnClick = pAVar12;
        return;
      }
      if (pAVar14->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar14;
      }
      if (pAVar12 != (Action *)0x0) goto code_?;
    }
    else {
      if (pAVar14->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar14;
      }
      if (pAVar12 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_OnDestroy
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).spawnRolePreviewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  if ((this->fields).awaitingSpawn == 0) {
code_?:
    pCVar1 = (this->fields).continueButtonHandler;
    if (pCVar1 != (ContinueButtonHandler *)0x0) {
      pAVar2 = (pCVar1->fields).OnClick;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__
                 ,(MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action *)0x0;
      if (pAVar4 != (Action *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar2 = pAVar4;
        }
        pAVar5 = TypeInfo__System__Action;
        if (pAVar2 == (Action *)0x0) goto code_?;
      }
      (pCVar1->fields).OnClick = pAVar2;
      pCVar1 = (this->fields).backgroundContinueButtonHandler;
      if (pCVar1 != (ContinueButtonHandler *)0x0) {
        pAVar2 = (pCVar1->fields).OnClick;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__SpawnRoleUnlockedPopupController__OnPressedPlay__,(MethodInfo *)0x0);
        pAVar4 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pAVar2 = (Action *)0x0;
        if (pAVar4 == (Action *)0x0) {
code_?:
          (pCVar1->fields).OnClick = pAVar2;
          return;
        }
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar2 = pAVar4;
        }
        pAVar5 = TypeInfo__System__Action;
        if (pAVar2 != (Action *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
               TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,(MethodInfo *)0x0
                         );
      pOVar7 = pOVar6;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<int>,pOVar6);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__Close_int_,
                 MethodInfo__System__Action<int>__Action_System__Object__void__);
      if (pOVar6 != (Object *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        source = pOVar6[2].klass;
        do {
          pAVar4 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
          pAVar2 = (Action *)0x0;
          if (pAVar4 != (Action *)0x0) {
            if ((Action_1_Int32___Class *)pAVar4->klass == TypeInfo__System__Action<int>) {
              pAVar2 = pAVar4;
            }
            pAVar5 = (Action__Class *)TypeInfo__System__Action<int>;
            if (pAVar2 == (Action *)0x0) goto code_?;
          }
          pOVar8 = (Object__Class *)func_?(pOVar7 + 2,pAVar2,source);
          bVar9 = pOVar8 != source;
          source = pOVar8;
        } while (bVar9);
        goto code_?;
      }
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPressedPlay() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_OnPressedPlay
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_01 != (SkyParam *)0x0))
  {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0);
    if (1 < iVar2) {
      SpawnRoleUnlockedPopupController_HandleTeamSwitching(this,(MethodInfo *)0x0);
    }
    iVar2 = (this->fields).spawnRoleWoId;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = (PrefabPool *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((this_02 != (PrefabPool *)0x0) &&
       (this_03 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0),
       this_03 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)) {
      a = (SpawnRoleVariable_1_System_Int32_ *)
          System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    (this_03,(MethodInfo *)0x0);
      bVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                        (iVar2,a,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                        );
      if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimePressPlayController);
      }
      bVar4 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                        ((MethodInfo *)0x0);
      if (bVar4 == 0) {
        if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
          func_?(TypeInfo__FirstTimePressPlayController);
        }
        FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                  ((MethodInfo *)0x0);
      }
      if (bVar3 == 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        (this->fields).awaitingSpawn = 1;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar5 != (MVLocalPlayer *)0x0) {
          pOVar6 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                   TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)pMVar5,
                              (MethodInfo *)0x0);
          pOVar7 = pOVar6;
          pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<int>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar8,(Object *)this,MethodInfo__SpawnRoleUnlockedPopupController__Close_int_,
                     MethodInfo__System__Action<int>__Action_System__Object__void__);
          if (pOVar6 != (Object *)0x0) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            a_00 = pOVar6[2].klass;
            do {
              pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)a_00,(Delegate *)pUVar8,(MethodInfo *)0x0);
              pDVar10 = (Delegate *)0x0;
              if (pDVar9 != (Delegate *)0x0) {
                if ((Action_1_Int32___Class *)pDVar9->klass == TypeInfo__System__Action<int>) {
                  pDVar10 = pDVar9;
                }
                pAVar11 = TypeInfo__System__Action<int>;
                if (pDVar10 == (Delegate *)0x0) goto code_?;
              }
              pOVar12 = (Object__Class *)func_?(pOVar7 + 2,pDVar10,a_00);
              bVar13 = pOVar12 != a_00;
              a_00 = pOVar12;
            } while (bVar13);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
               pMVar5 != (MVLocalPlayer *)0x0)) {
              MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                        (pMVar5,(this->fields).spawnRoleWoId,(MethodInfo *)0x0);
              pIVar14 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                                  ((MethodInfo *)0x0);
              if (pIVar14 != (ILockCursorManager *)0x0) {
                func_?(4,TypeInfo__ILockCursorManager,pIVar14,1);
                return;
              }
            }
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__SpawnRoleUnlockedPopupController->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar8,(Object *)0x0,
                     MethodInfo__SpawnRoleUnlockedPopupController___Close_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__SpawnRoleUnlockedPopupController->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar8;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__SpawnRoleUnlockedPopupController->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_04 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_set_CamMaskMode
                    (this_04,MaskMode__Enum_Default,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pIVar14 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                              ((MethodInfo *)0x0);
          if (pIVar14 != (ILockCursorManager *)0x0) {
            func_?(3,TypeInfo__ILockCursorManager,pIVar14,1);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pGVar15 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                ((MethodInfo *)0x0);
            if (pGVar15 != (GameSessionData *)0x0) {
              if ((pGVar15->fields).gameMode == 0) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pGVar15 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                    ((MethodInfo *)0x0);
                if (pGVar15 == (GameSessionData *)0x0) goto code_?;
                if ((pGVar15->fields).gameMode != 0) {
                  return;
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pIVar16 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI
                                    ((MethodInfo *)0x0);
                if (pIVar16 == (IEditModeUI *)0x0) goto code_?;
                cVar17 = func_?(1,TypeInfo__IEditModeUI,pIVar16);
                if (cVar17 == '\0') {
                  return;
                }
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pGVar18 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                  ((MethodInfo *)0x0);
              if ((pGVar18 != (GameEventManager *)0x0) &&
                 (this_00 = (pGVar18->fields).AvatarCommandsPlayMode,
                 this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                ShowingAdsPopup::ShowingAdsPopup_OnSkip
                          ((ShowingAdsPopup *)this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pDVar9 = extraout_ECX;
  pAVar11 = extraout_EDX;
code_?:
  func_?(pDVar9,pAVar11);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SeeTierReward() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_SeeTierReward
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleUnlockedPopupController___SeeTierReward_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pTVar1 = (this->fields).TierUnlockedPopupControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pTVar1,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
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
               MethodInfo__SpawnRoleUnlockedPopupController___SeeTierReward_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pTVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if (pTVar1 != (TierUnlockedPopupController *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                (pTVar1,(uint)(this->fields).unlockedTier,(this->fields).wasPurchased,
                 (this->fields).wasTempUnlocked,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupColor(MVTeam) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_SetupColor
               (SpawnRoleUnlockedPopupController *this,MVTeam__Enum spawnRoleTeam,MethodInfo *method
               )

{
  pIVar1 = (this->fields).Background;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (SkyParam *)0x0) {
      this_02 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)this_01,(MethodInfo *)0x0)
      ;
      if (this_02 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                           );
        if ((int)pOVar2 < 2) {
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?();
          }
          Styles::Styles_GetColor
                    ((Color *)&stack0xffffffdc,ColorStyle__Enum_OffGray,(MethodInfo *)0x0);
        }
        else {
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?();
          }
          Styles::Styles_GetTeamColor((Color *)&stack0xffffffec,spawnRoleTeam,0,(MethodInfo *)0x0);
        }
        if (pIVar1 != (Image *)0x0) {
          (*(code *)(pIVar1->klass->vtable).set_color.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_SetupPreviewImage
               (SpawnRoleUnlockedPopupController *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  (this->fields).spawnRolePreviewer = pSVar1;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 != (XpBoostParticlePreviewer *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffd4,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar2,*pQVar3,(MethodInfo *)0x0);
      this_02 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        func_?();
        func_?();
        pSVar1 = (this->fields).spawnRolePreviewer;
        if (pSVar1 != (SpawnRolePreviewer *)0x0) {
          SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                    (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,
                     LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,
                     (Vector3)ZEXT812(0xc09000003f800000),pTVar2,(Vector3)ZEXT812(0),
                     StringLiteral_SpawnRole,0,(GameObject *)this_01,(MethodInfo *)0x0);
          pSVar1 = (this->fields).spawnRolePreviewer;
          this_00 = (this->fields).spawnRolePreviewImage;
          if (pSVar1 != (SpawnRolePreviewer *)0x0) {
            value = (Texture *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)pSVar1,
                               (MethodInfo *)0x0);
            if (this_00 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartEffect() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_StartEffect
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).bounceEffectStartTime = fVar1;
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController_StartPlaying
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar2 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar2->fields).gameMode != 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if (pIVar3 == (IEditModeUI *)0x0) goto code_?;
        cVar4 = func_?(1,TypeInfo__IEditModeUI);
        if (cVar4 == '\0') {
          return;
        }
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar5 != (GameEventManager *)0x0) &&
         (this_00 = (pGVar5->fields).AvatarCommandsPlayMode,
         this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Update
               (SpawnRoleUnlockedPopupController *this,MethodInfo *method)

{
  this_00 = (this->fields).bounceEffect;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(fVar1 - (this->fields).bounceEffectStartTime) /
                               (this->fields).bounceEffectDuration,(MethodInfo *)0x0);
    this_01 = (Transform *)(this->fields).spawnRoleContentTransform;
    fStack_2 = 0.0;
    uStack_3 = 0x3f800000;
    func_?(&uStack_3,fVar1,fVar1);
    if (this_01 != (Transform *)0x0) {
      value.z = fStack_2;
      value.x = (float)(undefined4)uStack_3;
      value.y = (float)uStack_3._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <Close>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleUnlockedPopupController::
     SpawnRoleUnlockedPopupController__Close_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

