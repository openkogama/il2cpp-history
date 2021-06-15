
/* Boolean CanGoToNextMenu() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanGoToNextMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  bVar2 = false;
  iStack_3 = 0;
  pLVar4 = (this->fields).menuOrder;
  while (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                       );
    if ((int)pOVar5 <= iStack_3) {
      return bVar1;
    }
    if (bVar2) {
      bVar1 = 1;
    }
    pLVar4 = (this->fields).menuOrder;
    if (pLVar4 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
    LVar6 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]::
            List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                      (pLVar4,iStack_3,
                       MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                      );
    LVar7 = func_?(4,this);
    if (LVar6 == LVar7) {
      bVar2 = true;
    }
    iStack_3 = iStack_3 + 1;
    pLVar4 = (this->fields).menuOrder;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar1 = (*pcVar8)();
  return bVar1;
}


/* Boolean CanShowBreifing() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowBreifing
               (LobbyFlowMenu *this,MethodInfo *method)

{
  WStack_1 = WinningConditionType__Enum_Collectible;
  bVar2 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                    (&WStack_1,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean CanShowSpawnRoleSelect() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowSpawnRoleSelect
               (LobbyFlowMenu *this,MethodInfo *method)

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
    this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_02,(MethodInfo *)0x0);
      if (this_01 != (SkyParam *)0x0) {
        bVar1 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles
                          ((MVTeamManager *)this_01,(MVTeam__Enum)team,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean CanShowTeamSelect() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowTeamSelect
               (LobbyFlowMenu *this,MethodInfo *method)

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
      iVar1 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0);
      return 1 < iVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* LobbyFlowMenu+LobbyFlowMenuType GetNextMenuType() */

LobbyFlowMenu_LobbyFlowMenuType__Enum
Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GetNextMenuType
          (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = false;
  iStack_2 = 0;
  pLVar3 = (this->fields).menuOrder;
  do {
    if (pLVar3 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
code_?:
      func_?(0);
      pcVar4 = (code *)swi(3);
      LVar5 = (*pcVar4)();
      return LVar5;
    }
    pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                        MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                       );
    if ((int)pOVar6 <= iStack_2) {
      return LobbyFlowMenu_LobbyFlowMenuType__Enum_None;
    }
    pLVar3 = (this->fields).menuOrder;
    if (bVar1) {
      if (pLVar3 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
        LVar5 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]
                ::List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                          (pLVar3,iStack_2,
                           MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                          );
        return LVar5;
      }
      goto code_?;
    }
    if (pLVar3 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
    LVar5 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]::
            List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                      (pLVar3,iStack_2,
                       MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                      );
    LVar7 = func_?(4,this);
    bVar1 = LVar5 == LVar7;
    pLVar3 = (this->fields).menuOrder;
    iStack_2 = iStack_2 + 1;
  } while( true );
}


/* LobbyFlowMenu+LobbyFlowMenuType GetPreviousMenuType() */

LobbyFlowMenu_LobbyFlowMenuType__Enum
Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GetPreviousMenuType
          (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = false;
  pLVar2 = (this->fields).menuOrder;
  if (pLVar2 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                       MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                      );
    while( true ) {
      index = (Object *)((int)&index[-1].monitor + 3);
      if ((int)index < 0) {
        return LobbyFlowMenu_LobbyFlowMenuType__Enum_None;
      }
      pLVar2 = (this->fields).menuOrder;
      if (bVar1) break;
      if (pLVar2 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
      LVar3 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]::
              List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                        (pLVar2,(int32_t)index,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      LVar4 = func_?(4,this);
      bVar1 = LVar3 == LVar4;
    }
    if (pLVar2 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
      LVar3 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]::
              List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                        (pLVar2,(int32_t)index,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      return LVar3;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  LVar3 = (*pcVar5)();
  return LVar3;
}


/* Void GoToMenu(LobbyFlowMenu+LobbyFlowMenuType) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToMenu
               (LobbyFlowMenu *this,LobbyFlowMenu_LobbyFlowMenuType__Enum newMenuType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__LobbyFlowMenu->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__LobbyFlowMenu___GoToMenu_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__LobbyFlowMenu->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__LobbyFlowMenu->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  switch(newMenuType) {
  default:
    return;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_Briefing:
    method_00 = TypeInfo__LobbyFlowMenu___GoToMenu_c__AnonStorey1;
    pSVar3 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)method_00);
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
              ((WinningConditionType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
    this_02 = (this->fields).winningConditionBriefingMenuPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)this_02,
                        WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                       );
    if (pSVar3 != (ScaleAnimationBase *)0x0) {
      (pSVar3->fields)._._._._.m_CachedPtr = pXVar4;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      this_02 = (WinningConditionBriefing *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)this_02,(Object *)pSVar3,
                 MethodInfo__LobbyFlowMenu___GoToMenu_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      winConType = this_02;
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      this_00 = (pSVar3->fields)._._._._.m_CachedPtr;
      if (this_00 != (WinningConditionBriefing *)0x0) {
        WinningConditionBriefing::WinningConditionBriefing_Initialize
                  (this_00,(WinningConditionType__Enum)winConType,(MethodInfo *)0x0);
        pvVar5 = (pSVar3->fields)._._._._.m_CachedPtr;
        if (pvVar5 != (void *)0x0) {
          *(int32_t *)((int)pvVar5 + 0x20) = (this->fields).selectedTeam;
          *(undefined1 *)((int)pvVar5 + 0x1c) = 1;
          return;
        }
      }
    }
    break;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_TeamSelect:
    pSVar3 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)newMenuType);
    this_02 = (WinningConditionBriefing *)(this->fields).teamMenuPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)this_02,
                        TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    if (pSVar3 != (ScaleAnimationBase *)0x0) {
      (pSVar3->fields)._._._._.m_CachedPtr = pXVar4;
      this_02 = (WinningConditionBriefing *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)pSVar3,
                 MethodInfo__LobbyFlowMenu___GoToMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                ((GameObject *)this_02,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      this_01 = (pSVar3->fields)._._._._.m_CachedPtr;
      if (this_01 != (TeamMenu *)0x0) {
        TeamMenu::TeamMenu_UpdateBackButtonVisibility(this_01,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect:
    pSVar3 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)newMenuType);
    this_02 = (WinningConditionBriefing *)(this->fields).spawnRoleMenuPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = (SpawnRoleMenu *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)this_02,
                         SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                        );
    if ((pSVar3 != (ScaleAnimationBase *)0x0) &&
       ((pSVar3->fields)._._._._.m_CachedPtr = this_03, this_03 != (SpawnRoleMenu *)0x0)) {
      SpawnRoleMenu::SpawnRoleMenu_Initialize(this_03,(this->fields).selectedTeam,(MethodInfo *)0x0)
      ;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)pSVar3,
                 MethodInfo__LobbyFlowMenu___GoToMenu_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)&this_02[-0x92e438].fields.desktopPlayButton + 1))();
  return;
}


/* Void GoToNextMenu() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToNextMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = false;
  uVar2 = 0;
  iVar3 = 0;
  pLVar4 = (this->fields).menuOrder;
  while (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    index = iVar3;
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                       );
    if ((int)pOVar5 <= iVar3) {
      if (!bVar1) {
        (*(code *)(this->klass->vtable).StartPlaying.method)(this,this->klass[1]._0.image);
        return;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pLVar4 = (this->fields).menuOrder;
      bVar1 = false;
      this = (LobbyFlowMenu *)0x0;
      if (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
      break;
    }
    if ((char)uVar2 != '\0') {
      bVar1 = true;
    }
    pLVar4 = (this->fields).menuOrder;
    if (pLVar4 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
    LVar6 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]::
            List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                      (pLVar4,index,
                       MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                      );
    LVar7 = func_?(4,this);
    uVar2 = uVar2 & 0xff;
    if (LVar6 == LVar7) {
      uVar2 = 1;
    }
    iVar3 = index + 1;
    pLVar4 = (this->fields).menuOrder;
  }
  goto code_?;
  while( true ) {
    if (pLVar4 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
    LVar6 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]::
            List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                      (pLVar4,(int32_t)this,
                       MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                      );
    LVar7 = func_?(4,this_00);
    if (LVar6 == LVar7) {
      bVar1 = true;
    }
    pLVar4 = (this_00->fields).menuOrder;
    this = (LobbyFlowMenu *)((int)&this->klass + 1);
    if (pLVar4 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
code_?:
    pLVar8 = this;
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                       );
    if ((int)pOVar5 <= (int)pLVar8) {
      LobbyFlowMenu_GoToMenu(this_00,LobbyFlowMenu_LobbyFlowMenuType__Enum_None,(MethodInfo *)0x0);
      return;
    }
    pLVar4 = (this_00->fields).menuOrder;
    if (bVar1) {
      if (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
        LVar6 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]
                ::List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                          (pLVar4,(int32_t)this,
                           MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                          );
        LobbyFlowMenu_GoToMenu(this_00,LVar6,(MethodInfo *)0x0);
        return;
      }
      break;
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void GoToPreviousMenu() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToPreviousMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = false;
  pLVar2 = (this->fields).menuOrder;
  if (pLVar2 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                       MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                      );
    while( true ) {
      index = (Object *)((int)&index[-1].monitor + 3);
      if ((int)index < 0) {
        LobbyFlowMenu_GoToMenu(this,LobbyFlowMenu_LobbyFlowMenuType__Enum_None,(MethodInfo *)0x0);
        return;
      }
      pLVar2 = (this->fields).menuOrder;
      if (bVar1) break;
      if (pLVar2 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
      LVar3 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]::
              List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                        (pLVar2,(int32_t)index,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      LVar4 = func_?(4,this);
      bVar1 = LVar3 == LVar4;
    }
    if (pLVar2 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
      LVar3 = mscorlib.dll::System::Collections::Generic::List`1[LobbyFlowMenu+LobbyFlowMenuType]::
              List_1_LobbyFlowMenu_LobbyFlowMenuType__get_Item
                        (pLVar2,(int32_t)index,
                         MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                        );
      LobbyFlowMenu_GoToMenu(this,LVar3,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_OnDestroy
               (LobbyFlowMenu *this,MethodInfo *method)

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
      func_?();
    }
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if (pIVar2 != (IPlayModeUI *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar2 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar2 == (IPlayModeUI *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = func_?();
      if (cVar4 == '\0') {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_00 == (MainCameraManager *)0x0) goto code_?;
        MainCameraManager::MainCameraManager_set_CamMaskMode
                  (this_00,MaskMode__Enum_Default,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_Start(LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CamMaskMode
              (this_01,(this->fields).cameraMaskMode,(MethodInfo *)0x0);
    if ((this->fields).haveSetSelectedTeam == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
      pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)this_02,(MethodInfo *)0x0);
      (this->fields).selectedTeam = (int32_t)pIVar1;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).menuOrder;
    if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Clear__
                );
      pLVar2 = (this->fields).menuOrder;
      if (pLVar2 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar2,UIPushOption__Enum_None,
                   MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                  );
        cVar3 = (*(code *)(this->klass->vtable).CanShowTeamSelect.method)(this);
        if (cVar3 != '\0') {
          pLVar2 = (this->fields).menuOrder;
          if (pLVar2 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar2,UIPushOption__Enum_HideAll,
                     MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                    );
        }
        cVar3 = (*(code *)(this->klass->vtable).CanShowBreifing.method)
                          (this,(this->klass->vtable).CanShowSpawnRoleSelect.methodPtr);
        if (cVar3 != '\0') {
          pLVar2 = (this->fields).menuOrder;
          if (pLVar2 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar2,UIPushOption__Enum_Blocking,
                     MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                    );
        }
        cVar3 = (*(code *)(this->klass->vtable).CanShowSpawnRoleSelect.method)
                          (this,(this->klass->vtable).StartPlaying.methodPtr);
        if (cVar3 != '\0') {
          pLVar2 = (this->fields).menuOrder;
          if (pLVar2 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar2,
                     UIPushOption__Enum_HideAll|UIPushOption__Enum_Blocking,
                     MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_StartPlaying
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__LobbyFlowMenu->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__LobbyFlowMenu___StartPlaying_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__LobbyFlowMenu->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__LobbyFlowMenu->static_fields->__f__am_cache1;
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
  pIStack2 =
       MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0);
  if (pIStack2 != (ILockCursorManager *)0x0) {
    cVar3 = func_?();
    if (cVar3 == '\0') {
      pIVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                         ((MethodInfo *)0x0);
      if (pIVar4 != (ILockCursorManager *)0x0) {
        pIStack2 = (ILockCursorManager *)0x1;
        puStack5 = (undefined *)0x3;
        func_?();
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar6 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar6 != (IPlayModeUI *)0x0) {
        pIStack2 = (ILockCursorManager *)0x0;
        puStack5 = (undefined *)0x4;
        func_?();
        return;
      }
    }
  }
  pIStack2 = (ILockCursorManager *)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateAvailableMenues() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).menuOrder;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Clear__
              );
    pLVar1 = (this->fields).menuOrder;
    if (pLVar1 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,UIPushOption__Enum_None,
                 MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                );
      cVar2 = (*(code *)(this->klass->vtable).CanShowTeamSelect.method)
                        (this,(this->klass->vtable).CanShowBreifing.methodPtr);
      if (cVar2 != '\0') {
        pLVar1 = (this->fields).menuOrder;
        if (pLVar1 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,UIPushOption__Enum_HideAll,
                   MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                  );
      }
      cVar2 = (*(code *)(this->klass->vtable).CanShowBreifing.method)
                        (this,(this->klass->vtable).CanShowSpawnRoleSelect.methodPtr);
      if (cVar2 != '\0') {
        pLVar1 = (this->fields).menuOrder;
        if (pLVar1 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,UIPushOption__Enum_Blocking,
                   MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                  );
      }
      cVar2 = (*(code *)(this->klass->vtable).CanShowSpawnRoleSelect.method)
                        (this,(this->klass->vtable).StartPlaying.methodPtr);
      if (cVar2 != '\0') {
        pLVar1 = (this->fields).menuOrder;
        if (pLVar1 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar1,
                   UIPushOption__Enum_HideAll|UIPushOption__Enum_Blocking,
                   MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                  );
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <GoToMenu>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu__GoToMenu_m__0
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


/* Void <StartPlaying>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu__StartPlaying_m__1
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


/* Void set_SelectedTeam(MVTeam) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_set_SelectedTeam
               (LobbyFlowMenu *this,MVTeam__Enum value,MethodInfo *method)

{
  (this->fields).selectedTeam = value;
  (this->fields).haveSetSelectedTeam = 1;
  return;
}

