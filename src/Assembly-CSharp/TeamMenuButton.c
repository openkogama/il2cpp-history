
/* Void AvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_AvatarStateChanged
               (TeamMenuButton *this,SpawnRoleModeType__Enum state,MethodInfo *method)

{
  if ((state & SpawnRoleModeType__Enum_Hidden) != SpawnRoleModeType__Enum_None) {
    TeamMenuButton_SetButtonIsActive(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetButtonIsActive() */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_SetButtonIsActive
               (TeamMenuButton *this,MethodInfo *method)

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
      if (pGRam00000010 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGRam00000010,1 < iVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowTeamMenu() */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_ShowTeamMenu
               (TeamMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TeamMenuButton___ShowTeamMenu_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  original = (this->fields).teamMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__TeamMenuButton->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__TeamMenuButton___ShowTeamMenu_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__TeamMenuButton->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__TeamMenuButton->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
               ,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_01,
               MethodInfo__TeamMenuButton___ShowTeamMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
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
                ((Object *)StringLiteral_ShowTeamMenu,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_Start
               (TeamMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__TeamMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
              );
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar2,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__TeamMenuButton__TeamChanged_System__Object__MV__WorldObject__TeamEventArgs_
                   ,
                   MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__EventHandler_System__Object__void__
                  );
        if (pSVar4 != (SkyParam *)0x0) {
          MVTeamManager::MVTeamManager_add_OnTeamAdded
                    ((MVTeamManager *)pSVar4,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar2,
                     (MethodInfo *)0x0);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar3 != (MVNetworkGame *)0x0) {
            pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                               ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__TeamMenuButton__TeamChanged_System__Object__MV__WorldObject__TeamEventArgs_
                       ,
                       MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__EventHandler_System__Object__void__
                      );
            if (pSVar4 != (SkyParam *)0x0) {
              MVTeamManager::MVTeamManager_add_OnTeamRemoved
                        ((MVTeamManager *)pSVar4,
                         (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar2,(MethodInfo *)0x0);
              TeamMenuButton_SetButtonIsActive(this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TeamChanged(Object, TeamEventArgs) */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton_TeamChanged
               (TeamMenuButton *this,Object *sender,TeamEventArgs *eventArgs,MethodInfo *method)

{
  TeamMenuButton_SetButtonIsActive(this,(MethodInfo *)0x0);
  return;
}


/* Void <ShowTeamMenu>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TeamMenuButton::TeamMenuButton__ShowTeamMenu_m__0
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

