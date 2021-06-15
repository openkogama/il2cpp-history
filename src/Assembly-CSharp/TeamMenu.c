
/* Boolean CanShowSpawnRoleSelect() */

bool Assembly-CSharp.dll::TeamMenu::TeamMenu_CanShowSpawnRoleSelect
               (TeamMenu *this,MethodInfo *method)

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
      bVar1 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                        ((MVTeamManager *)this_01,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean CanSpawnAsSelectedClass() */

bool Assembly-CSharp.dll::TeamMenu::TeamMenu_CanSpawnAsSelectedClass
               (TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar2 = (PrefabPool *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar2 != (PrefabPool *)0x0) {
      pPVar2 = (PrefabPool *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar2,(MethodInfo *)0x0);
      if (pPVar2 != (PrefabPool *)0x0) {
        s = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar2,(MethodInfo *)0x0);
        SVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
                SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                          ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)s,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                          );
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if (pPVar1 != (PlayerPlanetData *)0x0) {
          bVar4 = (pPVar1->fields).gamePassTier;
          pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar1 != (PlayerPlanetData *)0x0) {
            if ((byte)SVar3 <= bVar4) {
              return 1;
            }
            return 1 - ((pPVar1->fields).previewGamePassTier < (byte)SVar3);
          }
        }
      }
    }
    uStack5 = 0;
    func_?();
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
  return 1;
}


/* Void OnTeamSelected(MVTeam) */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_OnTeamSelected
               (TeamMenu *this,MVTeam__Enum selectedTeam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.selectedTeam = selectedTeam;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (PrefabPool *)
            MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    this_02 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
               *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0);
    if (this_02 !=
        (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)
    {
      this_03 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          (this_02,(MethodInfo *)0x0);
      if (this_03 !=
          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
        iVar1 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                          (this_03,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                          );
        if (iVar1 == 4) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar2 == (GameEventManager *)0x0) ||
             (this_00 = (pGVar2->fields).AvatarCommandsPlayMode,
             this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
          goto code_?;
          ShowingAdsPopup::ShowingAdsPopup_OnSkip((ShowingAdsPopup *)this_00,(MethodInfo *)0x0);
        }
        LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
        LobbyFlowMenu::LobbyFlowMenu_GoToNextMenu((LobbyFlowMenu *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_Start(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVNetworkGame *)0x0) &&
     (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_01,(MethodInfo *)0x0), this_02 != (SkyParam *)0x0))
  {
    source = MVTeamManager::MVTeamManager_GetTeamDatas
                       ((MVTeamManager *)this_02,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
    if (TypeInfo__TeamMenu->static_fields->__f__am_cache0 == (Func_2_TeamData_Int32_ *)0x0) {
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)0x0,MethodInfo__TeamMenu___Start_m__0_TeamData_,
                 MethodInfo__System__Func<TeamData,_int>__Func_System__Object__void__);
      TypeInfo__TeamMenu->static_fields->__f__am_cache0 = (Func_2_TeamData_Int32_ *)pUVar1;
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                          ((IOrderedEnumerable_1_System_Object_ *)source,
                           (Func_2_Object_Int64_ *)TypeInfo__TeamMenu->static_fields->__f__am_cache0
                           ,
                           System__Linq__IOrderedEnumerable<TeamData>_MethodInfo__System__Linq__Enumerable__OrderBy<TeamData,_int>_System__Collections__Generic__IEnumerable<TeamData>__System__Func<TeamData,_int>_
                          );
    this_03 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)source_00,
                         System__Collections__Generic__List<TeamData>_MethodInfo__System__Linq__Enumerable__ToList<TeamData>_System__Collections__Generic__IEnumerable<TeamData>_
                        );
    index = 0;
    if (this_03 != (List_1_UseInteractor_ *)0x0) {
      while( true ) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                            MethodInfo__System__Collections__Generic__List<TeamData>__get_Count__);
        if ((int)pOVar2 <= index) {
          return;
        }
        pTVar3 = (this->fields).teamPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar3 = (TeamSelectButton *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           ((XpBoostParticlePreviewer *)pTVar3,
                            TeamSelectButton_MethodInfo__UnityEngine__Object__Instantiate<TeamSelectButton>_TeamSelectButton_
                           );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
        IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,index,
                   MethodInfo__System__Collections__Generic__List<TeamData>__get_Item_int_);
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)this,
                   MethodInfo__TeamMenu__OnTeamSelected_MV__WorldObject__MVTeam_,
                   MethodInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>__UnityAction_System__Object__void__
                  );
        if (pTVar3 == (TeamSelectButton *)0x0) break;
        TeamSelectButton::TeamSelectButton_Initialize
                  (pTVar3,(TeamData *)0x0,(UnityAction_1_MV_WorldObject_MVTeam_ *)0x0,
                   (MethodInfo *)0x0);
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pTVar3,(MethodInfo *)0x0);
        this_00 = (this->fields).teamLayoutGroup;
        if ((this_00 == (VerticalLayoutGroup *)0x0) ||
           (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_00,(MethodInfo *)0x0),
           this_04 == (Transform *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_04,parent,0,(MethodInfo *)0x0);
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_StartPlaying(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__TeamMenu->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__TeamMenu___StartPlaying_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__TeamMenu->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__TeamMenu->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar2 != (ILockCursorManager *)0x0) {
    func_?();
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = (PrefabPool *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((this_01 != (PrefabPool *)0x0) &&
       (this_02 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0),
       this_02 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)) {
      a = (SpawnRoleVariable_1_System_Int32_ *)
          System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    (this_02,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar3 != (MVLocalPlayer *)0x0) {
        iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar3,(MethodInfo *)0x0);
        bVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Int32]::
                SpawnRoleVariable_1_System_Int32__op_Inequality
                          (a,iVar4,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                          );
        if (bVar1 == 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((this_03 != (MVLocalPlayer *)0x0) &&
           (iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_03,(MethodInfo *)0x0),
           pMVar3 != (MVLocalPlayer *)0x0)) {
          MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar3,iVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_Update(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    bVar2 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (pMVar1,MaskMode__Enum_SkyBoxOnly,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateBackButtonVisibility() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_UpdateBackButtonVisibility
               (TeamMenu *this,MethodInfo *method)

{
  this_00 = (this->fields).backButton;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 == (PlayerPlanetData *)0x0) {
    this._0_1_ = 1;
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pPVar2 = (PrefabPool *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pPVar2 = (PrefabPool *)PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar2,(MethodInfo *)0x0);
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    s = PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar2,(MethodInfo *)0x0);
    SVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
            SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                      ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)s,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                      );
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar4 = (pPVar1->fields).gamePassTier;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    if (bVar4 < (byte)SVar3) {
      this._0_1_ = 1 - ((pPVar1->fields).previewGamePassTier < (byte)SVar3);
    }
    else {
      this._0_1_ = 1;
    }
  }
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,(bool)this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <StartPlaying>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TeamMenu::TeamMenu__StartPlaying_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 <Start>m__0(TeamData) */

int32_t Assembly-CSharp.dll::TeamMenu::TeamMenu__Start_m__0(TeamData *teamData,MethodInfo *method)

{
  if (teamData != (TeamData *)0x0) {
    return (teamData->fields).playersCount;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* TeamMenu() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu__ctor(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.cameraMaskMode = 2;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
            );
  (this->fields)._.menuOrder = (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

