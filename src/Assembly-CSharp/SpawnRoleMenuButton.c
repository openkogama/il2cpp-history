
/* Void AvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_AvatarStateChanged
               (SpawnRoleMenuButton *this,SpawnRoleModeType__Enum state,MethodInfo *method)

{
  if ((state & SpawnRoleModeType__Enum_Hidden) != SpawnRoleModeType__Enum_None) {
    SpawnRoleMenuButton_SetButtonIsActive(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_OnDestroy
               (SpawnRoleMenuButton *this,MethodInfo *method)

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
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    pSVar3 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
              );
    if (pSVar3 != (SpawnRoleModeTypeWrapper *)0x0) {
      if (cRam_? == '\0') {
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)&UNK_?;
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      source = (pSVar3->fields).OnChange;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar4 != (Delegate *)0x0) {
          pDVar5 = (Delegate *)0x0;
          if ((Action_1_MV_Common_SpawnRoleModeType___Class *)pDVar4->klass ==
              TypeInfo__System__Action<MV::Common::SpawnRoleModeType>) {
            pDVar5 = pDVar4;
          }
          if (pDVar5 == (Delegate *)0x0) goto code_?;
        }
        pAVar6 = (Action_1_MV_Common_SpawnRoleModeType_ *)func_?();
        bVar7 = pAVar6 == source;
        source = pAVar6;
        if (bVar7) {
          return;
        }
      } while( true );
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetButtonIsActive() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_SetButtonIsActive
               (SpawnRoleMenuButton *this,MethodInfo *method)

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
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (this_00 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0)
      , this_00 != (MVWorldObjectClientManager *)0x0)) &&
     (this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                          (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
     this_01 != (List_1_MVWorldObjectClient_ *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), this_02 != (SkyParam *)0x0)
       ) {
      iVar3 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_02,(MethodInfo *)0x0);
      if (_UNK_? != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (_UNK_?,iVar3 < 2 && 0 < (int)pOVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowSpawnRoleMenu() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_ShowSpawnRoleMenu
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleMenuButton___ShowSpawnRoleMenu_c__AnonStorey0;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  pSVar1 = (this->fields).spawnRoleMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pSVar1 = (SpawnRoleMenu *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar1,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (this_02 != (ScaleAnimationBase *)0x0) {
    (this_02->fields)._._._._.m_CachedPtr = pSVar1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_03 != (MVLocalPlayer *)0x0) {
      team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_03,(MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleMenu *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize(pSVar1,(MVTeam__Enum)team,(MethodInfo *)0x0);
        this = (SpawnRoleMenuButton *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__SpawnRoleMenuButton->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          this = (SpawnRoleMenuButton *)
                 MethodInfo__SpawnRoleMenuButton___ShowSpawnRoleMenu_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
          ;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)0x0,
                     MethodInfo__SpawnRoleMenuButton___ShowSpawnRoleMenu_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__SpawnRoleMenuButton->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__SpawnRoleMenuButton->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  ((GameObject *)this,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_01,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this_02,
                   MethodInfo__SpawnRoleMenuButton___ShowSpawnRoleMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar3 != (GameEventManager *)0x0) &&
           (this_00 = (pGVar3->fields).AvatarCommandsPlayMode,
           this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_RemoveFromGame(this_00,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_ShowSpawnRoleMenu,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_Start
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SpawnRoleMenuButton_SetButtonIsActive(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
              );
    if (pSVar2 != (SpawnRoleModeTypeWrapper *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      ppAVar3 = &(pSVar2->fields).OnChange;
      a = (pSVar2->fields).OnChange;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        pDVar5 = (Delegate *)0x0;
        if (pDVar4 != (Delegate *)0x0) {
          if ((Action_1_MV_Common_SpawnRoleModeType___Class *)pDVar4->klass ==
              TypeInfo__System__Action<MV::Common::SpawnRoleModeType>) {
            pDVar5 = pDVar4;
          }
          if (pDVar5 == (Delegate *)0x0) goto code_?;
        }
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)ppAVar3;
        pAVar6 = (Action_1_MV_Common_SpawnRoleModeType_ *)func_?(ppAVar3,pDVar5);
        bVar7 = pAVar6 == a;
        a = pAVar6;
        if (bVar7) {
          return;
        }
      } while( true );
    }
  }
  func_?(0);
  pDVar4 = extraout_ECX;
code_?:
  func_?(pDVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <ShowSpawnRoleMenu>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton__ShowSpawnRoleMenu_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

