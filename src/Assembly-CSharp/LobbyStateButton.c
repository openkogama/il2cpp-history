
/* Void CreateBriefing(WinningConditionType) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateBriefing
               (LobbyStateButton *this,WinningConditionType__Enum winCon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton___CreateBriefing_c__AnonStorey3;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  if ((this->fields).shouldPop != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__LobbyStateButton->static_fields->__f__am_cache3 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__LobbyStateButton___CreateBriefing_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__LobbyStateButton->static_fields->__f__am_cache3 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__LobbyStateButton->static_fields->__f__am_cache3;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  original = (this->fields).winningConditionBriefingMenu;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                     );
  if (this_02 == (ScaleAnimationBase *)0x0) {
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this_02->fields)._._._._.m_CachedPtr = pXVar3;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this_02,
             MethodInfo__LobbyStateButton___CreateBriefing_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this_02->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  in_stack_5[9].klass = in_stack_6;
  this_00 = in_stack_5[9].fields._.m_CachedPtr;
  *(undefined1 *)&in_stack_5[9].monitor = 1;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pXVar3 = (XpBoostParticlePreviewer *)in_stack_5[8].monitor;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar3,
                      PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_
                     );
  in_stack_5[10].fields._.m_CachedPtr = pXVar3;
  if (pXVar3 != (XpBoostParticlePreviewer *)0x0) {
    pDVar7 = (Delegate *)pXVar3[1].fields.previewCam;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)in_stack_5,
               MethodInfo__WinningConditionBriefing__OnPlayPressed__,(MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar7,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pDVar7 = (Delegate *)0x0;
    if (pDVar8 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
        pDVar7 = pDVar8;
      }
      if (pDVar7 == (Delegate *)0x0) goto code_?;
    }
    pXVar3[1].fields.previewCam = (Camera *)pDVar7;
    this_01 = in_stack_5[10].fields._.m_CachedPtr;
    if (this_01 != (Component_1 *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (this_01,(MethodInfo *)0x0);
      in_stack_5[10].monitor = (MonitorData *)pGVar1;
      if (pGVar1 != (GameObject *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0);
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           (in_stack_5,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_03,parent,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateSpawnRoleSelectionMenu() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateSpawnRoleSelectionMenu
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton___CreateSpawnRoleSelectionMenu_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if ((this->fields).shouldPop != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__LobbyStateButton->static_fields->__f__am_cache2 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__LobbyStateButton___CreateSpawnRoleSelectionMenu_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__LobbyStateButton->static_fields->__f__am_cache2 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__LobbyStateButton->static_fields->__f__am_cache2;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  pSVar3 = (this->fields).spawnRoleMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar3 = (SpawnRoleMenu *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pSVar3,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pSVar3;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
      if (pSVar3 != (SpawnRoleMenu *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize(pSVar3,(MVTeam__Enum)team,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this_00,
                   MethodInfo__LobbyStateButton___CreateSpawnRoleSelectionMenu_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateTeamMenu() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_CreateTeamMenu
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton___CreateTeamMenu_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if ((this->fields).shouldPop != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__LobbyStateButton->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__LobbyStateButton___CreateTeamMenu_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__LobbyStateButton->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__LobbyStateButton->static_fields->__f__am_cache1;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  original = (this->fields).teamMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar3;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_00,
               MethodInfo__LobbyStateButton___CreateTeamMenu_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DoLockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_DoLockCursor
               (LobbyStateButton *this,MethodInfo *method)

{
  bVar1 = LobbyStateButton_get_IsRoundEnded(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    LobbyStateButton_StartPlaying(this,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).lobbyStateButton;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                       ((MethodInfo *)0x0);
    if (pIVar2 != (ILockCursorManager *)0x0) {
      func_?(4,TypeInfo__ILockCursorManager,pIVar2,1);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_LockCursor
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(4,TypeInfo__ILockCursorManager,pIVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnCountDownEnd() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnCountDownEnd
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).lobbyStateButton;
  if (pBVar1 != (Button *)0x0) {
    bVar2 = AvatarMotor::AvatarMotor_get_IsMovementLocked((AvatarMotor *)pBVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    pBVar1 = (this->fields).lobbyStateButton;
    if (pBVar1 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)pBVar1,1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar3 != (MVNetworkGame *)0x0) &&
          (this_00 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                               (pMVar3,(MethodInfo *)0x0),
          this_00 != (MVWorldObjectClientManager *)0x0)) &&
         (this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                              (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,
                               (MethodInfo *)0x0), this_01 != (List_1_MVWorldObjectClient_ *)0x0)) {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar3,(MethodInfo *)0x0),
           this_02 != (SkyParam *)0x0)) {
          iVar5 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_02,(MethodInfo *)0x0)
          ;
          if (1 < iVar5) {
            LobbyStateButton_CreateTeamMenu(this,(MethodInfo *)0x0);
            return;
          }
          if ((int)pOVar4 < 1) {
            LobbyStateButton_StartPlaying(this,(MethodInfo *)0x0);
            return;
          }
          LobbyStateButton_CreateSpawnRoleSelectionMenu(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnEnable
               (LobbyStateButton *this,MethodInfo *method)

{
  this_00 = (this->fields).lobbyStateButton;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerDown
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    pHVar1 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if ((pHVar1 == (HashSet_1_System_Int32_ *)0x0) && ((this->fields).isMoveOverButton != 0)) {
      LobbyStateButton_OnPressPlay(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerEnter
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMoveOverButton = 1;
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPointerExit
               (LobbyStateButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMoveOverButton = 0;
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnPressPlay
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LobbyStateButton___OnPressPlay_c__AnonStorey0;
  this_00 = (LobbyStateButton *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (LobbyStateButton *)0x0) {
    ((Vector3 *)&(this_00->fields).winningConditionBriefingMenu)->x = (float)this;
    bVar1 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                      ((WinningConditionType__Enum *)&(this_00->fields).teamMenuPrefab,
                       (MethodInfo *)0x0);
    *(bool *)&(this_00->fields)._._._._.m_CachedPtr = bVar1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 != (MVNetworkGame *)0x0) &&
        (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                             (pMVar2,(MethodInfo *)0x0),
        this_01 != (MVWorldObjectClientManager *)0x0)) &&
       (this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                            (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0)
       , this_02 != (List_1_MVWorldObjectClient_ *)0x0)) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (this_03 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar2,(MethodInfo *)0x0),
         this_03 != (SkyParam *)0x0)) {
        iVar4 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_03,(MethodInfo *)0x0);
        pAStack5 =
             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>;
        if (iVar4 < 2) {
          if (*(char *)&(this_00->fields)._._._._.m_CachedPtr == '\0') {
            this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            this_00 = this;
            method_1 = 
            MethodInfo__LobbyStateButton__OnShowAdFinishedSpawnRolesPresent_Assets__Scripts__AdIntegration__InterstitialAdResult_
            ;
            if ((int)pOVar3 < 1) {
              method_1 = 
              MethodInfo__LobbyStateButton__OnShowAdFinishedEnterPlaymode_Assets__Scripts__AdIntegration__InterstitialAdResult_
              ;
            }
          }
          else {
            this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            method_1 = 
            MethodInfo__LobbyStateButton___OnPressPlay_c__AnonStorey0____m__1_Assets__Scripts__AdIntegration__InterstitialAdResult_
            ;
          }
        }
        else {
          this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          method_1 = 
          MethodInfo__LobbyStateButton___OnPressPlay_c__AnonStorey0____m__0_Assets__Scripts__AdIntegration__InterstitialAdResult_
          ;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,(Object *)this_00,method_1,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Action_System__Object__void__
                  );
        LobbyStateButton_RequestAdWithCallback
                  (this,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)this_04,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnShowAdFinishedEnterPlaymode(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnShowAdFinishedEnterPlaymode
               (LobbyStateButton *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  LobbyStateButton_DoLockCursor(this,(MethodInfo *)0x0);
  return;
}


/* Void OnShowAdFinishedSpawnRolesPresent(InterstitialAdResult) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_OnShowAdFinishedSpawnRolesPresent
               (LobbyStateButton *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  bVar1 = LobbyStateButton_get_IsRoundEnded(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    LobbyStateButton_CreateSpawnRoleSelectionMenu(this,(MethodInfo *)0x0);
    return;
  }
  if ((this->fields).lobbyStateButton == (Button *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetStruct_4
                    ((bool *)0x7c,in_stack_3,
                     bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                    );
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
      func_?();
    }
    pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pEVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
        func_?();
      }
      pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                         ((MethodInfo *)0x0);
      if (pEVar4 == (EventSystem *)0x0) {
code_?:
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      x = (Object_1 *)
          System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
          Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
          Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                    ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                      *)pEVar4,(MethodInfo *)0x0);
      y = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)0x0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)y,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
          func_?();
        }
        pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
        if (pEVar4 == (EventSystem *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
        EventSystem_SetSelectedGameObject_1(pEVar4,(GameObject *)0x0,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') goto code_?;
  }
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_UpdateSelectionState
            ((Selectable *)0x0,(BaseEventData *)0x0,(MethodInfo *)0x0);
code_?:
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
            ((Selectable *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void PopThenLockCursor() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_PopThenLockCursor
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__LobbyStateButton->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__LobbyStateButton___PopThenLockCursor_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__LobbyStateButton->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__LobbyStateButton->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  bVar1 = LobbyStateButton_get_IsRoundEnded(in_stack_2,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    LobbyStateButton_StartPlaying(in_stack_2,(MethodInfo *)0x0);
    return;
  }
  this_00 = (in_stack_2->fields).lobbyStateButton;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pIVar3 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                       ((MethodInfo *)0x0);
    if (pIVar3 != (ILockCursorManager *)0x0) {
      uStack4 = 1;
      uStack5 = 4;
      func_?();
      return;
    }
  }
  uStack4 = 0;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RequestAdWithCallback(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_RequestAdWithCallback
               (LobbyStateButton *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar1 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)auStack_2,this_00,(MethodInfo *)0x0);
    auStack_2._0_4_ = pEVar1->sites;
    auStack_2._4_4_ = pEVar1->siteEnum;
    auStack_2._8_4_ = *(undefined4 *)&pEVar1->showTouristPromotion;
    auStack_2[0xc] = pEVar1->integratedSdk;
    auStack_2[0xd] = pEVar1->allowsFallbackAds;
    bStack_3 = pEVar1->showPlayButtonAd;
    unique0x1000015d = pEVar1->field_0xf;
    if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
      auStack_2._8_4_ = TypeInfo__MVClientSettings;
      auStack_2._4_4_ = &UNK_?;
      func_?();
    }
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                      ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)0x0,(MethodInfo *)this_00);
    if (bVar4 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar5 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if ((pIVar5 == (IEditModeUI *)0x0) && (bStack_3 != 0)) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pIVar6 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        if (pIVar6 != (IAdManager *)0x0) {
          pIVar7 = pIVar6->klass;
          uVar8 = 0;
          uVar9._0_1_ = (pIVar7->_1).rank;
          uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar9 != 0) {
            do {
              if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar10 = &(&(pIVar6->klass->vtable).RequestInterstitial)
                           [pIVar7->interfaceOffsets[uVar8].offset].method;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          ppMVar10 = (MethodInfo **)
                    func_?(pIVar6,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,7);
code_?:
          (*(code *)*ppMVar10)(pIVar6,callback,7,ppMVar10[1]);
          return;
        }
        goto code_?;
      }
    }
    if (callback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                ((Action_1_UIPushOption_ *)callback,
                 UIPushOption__Enum_HideAll|UIPushOption__Enum_Blocking,
                 MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                );
      return;
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_Start
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                    ((WinningConditionType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
  pIVar2 = (this->fields).countdownFill;
  if (bVar1 == 0) {
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar2,1,(MethodInfo *)0x0);
    (this->fields).shouldUpdateFillImage = 1;
  }
  else {
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar2,0,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,method_00);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar3 == (IEditModeUI *)0x0) {
      this_00 = (this->fields).embeddedPlayerConfig;
      if (this_00 != (EmbeddedPlayerConfig *)0x0) {
        pEVar4 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                           ((EmbeddedSiteConfigData *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
        if (pEVar4->showPlayButtonAd == 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar5 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        if (pIVar5 != (IAdManager *)0x0) {
          cVar6 = func_?();
          if (cVar6 == '\0') {
            return;
          }
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Lobby_state_button_interstitial_,(MethodInfo *)0x0);
          pIVar2 = (this->fields).countdownFill;
          if (pIVar2 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar2,0,(MethodInfo *)0x0);
            pIVar2 = (this->fields).playButtonImage;
            (this->fields).shouldUpdateFillImage = 0;
            (this->fields).showingAdSprite = 1;
            if (pIVar2 != (Image *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                        (pIVar2,(this->fields).watchAdPlayButtonImageSprite,(MethodInfo *)0x0);
              return;
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
  }
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_StartPlaying
               (LobbyStateButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimePressPlayController);
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
    cVar3 = func_?(2);
    if (cVar3 == '\0') {
      pIVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                         ((MethodInfo *)0x0);
      if (pIVar2 != (ILockCursorManager *)0x0) {
        func_?(3,TypeInfo__ILockCursorManager);
        return;
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar4 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar4 != (IPlayModeUI *)0x0) {
        func_?(4,TypeInfo__IPlayModeUI);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_Update
               (LobbyStateButton *this,MethodInfo *method)

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
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
     this_00 ==
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     (this_00,(MethodInfo *)0x0);
  this_01 = (LobbyStateButton *)
            MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (this_01 == (LobbyStateButton *)0x0) goto code_?;
  cVar4 = func_?(5);
  if ((cVar4 == '\0') && ((this_01->fields).showingAdSprite != 0)) {
    pIVar5 = (this_01->fields).playButtonImage;
    if (pIVar5 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (pIVar5,(this_01->fields).playButtonImageSprite,(MethodInfo *)0x0);
    (this_01->fields).showingAdSprite = 0;
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar6 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar6 == (IAdManager *)0x0) goto code_?;
    cVar4 = func_?(5);
    if ((cVar4 != '\0') && ((this_01->fields).showingAdSprite == 0)) {
      pIVar5 = (this_01->fields).playButtonImage;
      if (pIVar5 == (Image *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                (pIVar5,(this_01->fields).watchAdPlayButtonImageSprite,(MethodInfo *)0x0);
      (this_01->fields).showingAdSprite = 1;
    }
  }
  if ((pOVar3 != (Object *)0x2) || ((this_01->fields).shouldUpdateFillImage == 0)) {
    pIVar5 = (this_01->fields).countdownFill;
    if ((pIVar5 == (Image *)0x0) ||
       (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar5,(MethodInfo *)0x0), pGVar7 == (GameObject *)0x0))
    goto code_?;
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar7,(MethodInfo *)0x0);
    if (bVar8 == 0) goto code_?;
    LobbyStateButton_OnCountDownEnd(this_01,(MethodInfo *)0x0);
    pIVar5 = (this_01->fields).countdownFill;
    if ((pIVar5 == (Image *)0x0) ||
       (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar5,(MethodInfo *)0x0), pGVar7 == (GameObject *)0x0))
    goto code_?;
    bVar8 = 0;
  }
  else {
    pIVar5 = (this_01->fields).countdownFill;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (this_02 = (MVNetworkGameStateListener *)
                   InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
        this_02 == (MVNetworkGameStateListener *)0x0)) ||
       (value = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                          (this_02,(MethodInfo *)0x0), pIVar5 == (Image *)0x0))
    goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar5,value,(MethodInfo *)0x0)
    ;
    pIVar5 = (this_01->fields).countdownFill;
    if ((pIVar5 == (Image *)0x0) ||
       (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar5,(MethodInfo *)0x0), pGVar7 == (GameObject *)0x0))
    goto code_?;
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar7,(MethodInfo *)0x0);
    if (bVar8 != 0) goto code_?;
    pIVar5 = (this_01->fields).countdownFill;
    if ((pIVar5 == (Image *)0x0) ||
       (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar5,(MethodInfo *)0x0), pGVar7 == (GameObject *)0x0))
    goto code_?;
    bVar8 = 1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar7,bVar8,(MethodInfo *)0x0);
code_?:
  if (pOVar3 != (Object *)0x2) {
    LobbyStateButton_OnCountDownEnd(this_01,(MethodInfo *)0x0);
  }
  return;
}


/* Void <CreateBriefing>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton__CreateBriefing_m__3
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


/* Void <CreateSpawnRoleSelectionMenu>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton__CreateSpawnRoleSelectionMenu_m__2
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


/* Void <CreateTeamMenu>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton__CreateTeamMenu_m__1
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


/* Void <PopThenLockCursor>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton__PopThenLockCursor_m__0
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


/* Boolean get_IsRoundEnded() */

bool Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_get_IsRoundEnded
               (LobbyStateButton *this,MethodInfo *method)

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
    this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                           ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_01,(MethodInfo *)0x0);
      return pOVar1 == (Object *)0x2;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void set_ShouldPop(Boolean) */

void Assembly-CSharp.dll::LobbyStateButton::LobbyStateButton_set_ShouldPop
               (LobbyStateButton *this,bool value,MethodInfo *method)

{
  (this->fields).shouldPop = value;
  return;
}

