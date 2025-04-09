
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
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&
                    MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetButtonIsActive() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_SetButtonIsActive
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar1,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (this_01,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
      if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
        iVar3 = (pLVar2->fields)._size;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
          iVar4 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
          if (pGRam00000014 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGRam00000014,iVar4 < 2 && 0 < iVar3,(MethodInfo *)0x0);
            return;
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


/* Void ShowSpawnRoleMenu() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_ShowSpawnRoleMenu
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__SpawnRoleMenuButton____c___ShowSpawnRoleMenu_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SpawnRoleMenuButton____c__DisplayClass6_0___ShowSpawnRoleMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleMenuButton____c__DisplayClass6_0);
    func_?(&TypeInfo__SpawnRoleMenuButton____c);
    func_?(&StringLiteral_ShowSpawnRoleMenu);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SpawnRoleMenuButton____c__DisplayClass6_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).spawnRoleMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) && (pOVar1 != (Object__Class *)0x0)) {
      SpawnRoleMenu::SpawnRoleMenu_Initialize
                ((SpawnRoleMenu *)pOVar1,(pMVar2->fields)._._Team_k__BackingField,(MethodInfo *)0x0)
      ;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SpawnRoleMenuButton____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__SpawnRoleMenuButton____c->static_fields->__9__6_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__SpawnRoleMenuButton____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__SpawnRoleMenuButton____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        pGVar3 = (GameObject *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SpawnRoleMenuButton____c___ShowSpawnRoleMenu_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleMenuButton____c->static_fields->__9__6_0 = callbackFunction;
        this = (SpawnRoleMenuButton *)&TypeInfo__SpawnRoleMenuButton____c->static_fields->__9__6_0;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__SpawnRoleMenuButton____c__DisplayClass6_0___ShowSpawnRoleMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar4 != (GameEventManager *)0x0) &&
         (this_00 = (pGVar4->fields).AvatarCommandsPlayMode,
         this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        PlayButtonTouch::PlayButtonTouch_OnConfirmPlay((PlayButtonTouch *)this_00,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_ShowSpawnRoleMenu,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SpawnRoleMenuButton::SpawnRoleMenuButton_Start
               (SpawnRoleMenuButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&
                    MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    cRam_? = '\x01';
  }
  SpawnRoleMenuButton_SetButtonIsActive(this,(MethodInfo *)0x0);
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,unaff_EBX,
               MethodInfo__SpawnRoleMenuButton__AvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

