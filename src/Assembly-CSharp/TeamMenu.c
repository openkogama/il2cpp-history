
/* Boolean CanShowSpawnRoleSelect() */

bool Assembly-CSharp.dll::TeamMenu::TeamMenu_CanShowSpawnRoleSelect
               (TeamMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).teamManager;
    if (this_00 != (MVTeamManager *)0x0) {
      bVar2 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                        (this_00,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean CanSpawnAsSelectedClass() */

bool Assembly-CSharp.dll::TeamMenu::TeamMenu_CanSpawnAsSelectedClass
               (TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
      pOVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                         ((SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields).tierRequirement,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                         );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        bVar5 = (pPVar4->fields).gamePassTier;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar4 != (PlayerPlanetData *)0x0) {
          if ((byte)pOVar3 <= bVar5) {
            return 1;
          }
          return (byte)pOVar3 <= (pPVar4->fields).previewGamePassTier;
        }
      }
    }
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
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    cRam_? = '\x01';
  }
  (this->fields)._.selectedTeam = selectedTeam;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (((pMVar1 != (MVLocalPlayer *)0x0) &&
      (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) &&
     (this_00 = (SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields).spawnRoleMode,
     this_00 != (SpawnRoleVariable_1_System_Object_ *)0x0)) {
    pOVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__get_Value
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    if (pOVar3 == (Object *)0x4) {
      pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar4 == (GameEventManager *)0x0) ||
         (this_01 = (pGVar4->fields).AvatarCommandsPlayMode,
         this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
      GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
      RewardedInterstitialAd__RegisterAdEvents_m__1
                ((RewardedInterstitialAd *)this_01,(Object *)0x0,(EventArgs *)selectedTeam,method);
    }
    LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
    LobbyFlowMenu::LobbyFlowMenu_GoToNextMenu((LobbyFlowMenu *)this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_Start(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Linq__IOrderedEnumerable<TeamData>_MethodInfo__System__Linq__Enumerable__OrderBy<TeamData,_int>_System__Collections__Generic__IEnumerable<TeamData>__System__Func<TeamData,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<TeamData>_MethodInfo__System__Linq__Enumerable__ToList<TeamData>_System__Collections__Generic__IEnumerable<TeamData>_
                   );
    func_?(&TypeInfo__System__Func<TeamData,_int>);
    func_?(&MethodInfo__System__Collections__Generic__List<TeamData>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<TeamData>__get_Item_int_);
    func_?(&
                    TeamSelectButton_MethodInfo__UnityEngine__Object__Instantiate<TeamSelectButton>_TeamSelectButton_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__TeamMenu__OnTeamSelected_MV__WorldObject__MVTeam_);
    func_?(&MethodInfo__TeamMenu____c___Start_b__5_0_TeamData_);
    func_?(&TypeInfo__TeamMenu____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>);
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_Start((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    source = (TeamMenu_c__Class *)
             MVTeamManager::MVTeamManager_GetTeamDatas
                       (this_00,GameStatCounterType__Enum_Kill,(MethodInfo *)0x0);
    if ((TypeInfo__TeamMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      source = TypeInfo__TeamMenu____c;
      func_?();
    }
    this_02 = TypeInfo__TeamMenu____c->static_fields->__9__5_0;
    if (this_02 == (Func_2_TeamData_Int32_ *)0x0) {
      if ((TypeInfo__TeamMenu____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TeamMenu____c);
      }
      object = TypeInfo__TeamMenu____c->static_fields->__9;
      this_02 = (Func_2_TeamData_Int32_ *)func_?(TypeInfo__System__Func<TeamData,_int>);
      if (this_02 == (Func_2_TeamData_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]
      ::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_02,
                 (Object *)object,MethodInfo__TeamMenu____c___Start_b__5_0_TeamData_,
                 (MethodInfo *)0x0);
      TypeInfo__TeamMenu____c->static_fields->__9__5_0 = this_02;
      func_?(&TypeInfo__TeamMenu____c->static_fields->__9__5_0,this_02);
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                          ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Single_ *)this_02,
                           System__Linq__IOrderedEnumerable<TeamData>_MethodInfo__System__Linq__Enumerable__OrderBy<TeamData,_int>_System__Collections__Generic__IEnumerable<TeamData>__System__Func<TeamData,_int>_
                          );
    pLVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                       ((IEnumerable_1_System_Object_ *)source_00,
                        System__Collections__Generic__List<TeamData>_MethodInfo__System__Linq__Enumerable__ToList<TeamData>_System__Collections__Generic__IEnumerable<TeamData>_
                       );
    this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
    if (pLVar2 != (List_1_System_Object_ *)0x0) {
      while( true ) {
        if ((pLVar2->fields)._size <= (int)this_05) {
          return;
        }
        pTVar3 = (this->fields).teamPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pTVar3 = (TeamSelectButton *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pTVar3,
                            TeamSelectButton_MethodInfo__UnityEngine__Object__Instantiate<TeamSelectButton>_TeamSelectButton_
                           );
        teamData = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (this_05,(int32_t)this_05,
                              MethodInfo__System__Collections__Generic__List<TeamData>__get_Item_int_
                             );
        pLVar2 = (List_1_System_Object_ *)&UNK_?;
        this_03 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>
                                 );
        if (this_03 == (UnityAction_1_System_Int32Enum_ *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_03,(Object *)this,
                   MethodInfo__TeamMenu__OnTeamSelected_MV__WorldObject__MVTeam_,(MethodInfo *)0x0);
        if (pTVar3 == (TeamSelectButton *)0x0) break;
        TeamSelectButton::TeamSelectButton_Initialize
                  (pTVar3,(TeamData *)teamData,(UnityAction_1_MV_WorldObject_MVTeam_ *)this_03,
                   (MethodInfo *)0x0);
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar3,(MethodInfo *)0x0);
        this_01 = (this->fields).teamLayoutGroup;
        if (this_01 == (VerticalLayoutGroup *)0x0) break;
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (this_04 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_04,parent,0,(MethodInfo *)0x0);
        this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  ((int)&this_05->klass + 1);
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_StartPlaying(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                   );
    func_?(&
                    MethodInfo__TeamMenu____c___StartPlaying_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TeamMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__TeamMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TeamMenu____c);
  }
  callbackFunction = TypeInfo__TeamMenu____c->static_fields->__9__11_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__TeamMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TeamMenu____c);
    }
    object = TypeInfo__TeamMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__TeamMenu____c___StartPlaying_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TeamMenu____c->static_fields->__9__11_0 = callbackFunction;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 == (MVLocalPlayer *)0x0) ||
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    pSVar3 = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields).woId;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
    iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar1,(MethodInfo *)0x0);
    bVar5 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Inequality_1
                      (pSVar3,iVar4,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                      );
    if (bVar5 == 0) {
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) goto code_?;
    func_?(4);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 == (MVLocalPlayer *)0x0) ||
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    pSVar3 = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields).woId;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
    iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar1,(MethodInfo *)0x0);
    bVar5 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Inequality_1
                      (pSVar3,iVar4,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                      );
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0;
    if (bVar5 == 0) {
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
         this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar5 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return;
        }
        pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar6 != (GameEventManager *)0x0) &&
           ((pGVar6->fields).AvatarCommandsPlayMode !=
            (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          if (*(int *)(in_stack_7 + 0x14) != 0) {
            uStack8 = *(undefined4 *)(*(int *)(in_stack_7 + 0x14) + 0x20);
            (**(code **)(*(int *)(in_stack_7 + 0x14) + 0xc))();
          }
          return;
        }
      }
      goto code_?;
    }
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                     ((MethodInfo *)callbackFunction);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((this_01 != (MVLocalPlayer *)0x0) &&
     (iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_01,(MethodInfo *)0x0),
     pMVar1 != (MVLocalPlayer *)0x0)) {
    MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar1,iVar4,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_Update(TeamMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if ((pMVar1->fields).blueModeEnabled != 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_CamMaskMode
                (pMVar1,MaskMode__Enum_SkyBoxOnly,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
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
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
code_?:
    this._0_1_ = true;
  }
  else {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar1 == (MVLocalPlayer *)0x0) ||
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 == (SpawnRoleDataMediator *)0x0))
    goto code_?;
    pOVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                       ((SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields).tierRequirement,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                       );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    bVar5 = (pPVar4->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    if ((byte)pOVar3 <= bVar5) goto code_?;
    this._0_1_ = (byte)pOVar3 <= (pPVar4->fields).previewGamePassTier;
  }
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,this._0_1_,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* TeamMenu() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu__ctor(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>)
    ;
    cRam_? = '\x01';
  }
  (this->fields)._.cameraMaskMode = 2;
  this_00 = (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>
                           );
  if (this_00 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
              );
    (this->fields)._.menuOrder = this_00;
    func_?(&(this->fields)._.menuOrder,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

