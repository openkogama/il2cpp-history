
/* Void CloseInEditMenu() */

void Assembly-CSharp.dll::InEditMenu::InEditMenu_CloseInEditMenu
               (InEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__InEditMenu____c___CloseInEditMenu_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InEditMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__InEditMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__InEditMenu____c);
  }
  callbackFunction = TypeInfo__InEditMenu____c->static_fields->__9__7_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__InEditMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__InEditMenu____c);
    }
    object = TypeInfo__InEditMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__InEditMenu____c___CloseInEditMenu_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__InEditMenu____c->static_fields->__9__7_0 = callbackFunction;
    func_?(&TypeInfo__InEditMenu____c->static_fields->__9__7_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::InEditMenu::InEditMenu_Initialize(InEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).adminObserveButton;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (MVLocalPlayer *)0x0)) &&
     (MVLocalPlayer::MVLocalPlayer_get_IsAdmin(this_01,(MethodInfo *)0x0),
     pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
      return;
    }
    pGVar2 = (this->fields).gamePassesUIPrefab;
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pGVar2 = (GamePassesUI *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar2,parent,0,
                        GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                       );
    (this->fields).gamePassesUI = pGVar2;
    func_?();
    pGVar2 = (this->fields).gamePassesUI;
    if (pGVar2 != (GamePassesUI *)0x0) {
      GamePassesUI::GamePassesUI_Initialize(pGVar2,(MethodInfo *)0x0);
      bVar3 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
      if (bVar3 != 0) {
        return;
      }
      pGVar2 = (this->fields).gamePassesUI;
      if ((pGVar2 != (GamePassesUI *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pGVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::InEditMenu::InEditMenu_OnEnable(InEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__InEditMenu____c__DisplayClass6_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__InEditMenu____c__DisplayClass6_0);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gamePassesUI;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).gamePassesUI;
    if (pGVar1 == (GamePassesUI *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pGVar1,(MethodInfo *)0x0);
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar2 = 0;
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      bVar2 = TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
    }
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,bVar2 != 0,(MethodInfo *)0x0);
  }
  method_00 = (MethodInfo *)
              MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    bVar2 = GoldRewardManager::GoldRewardManager_CanGetGoldReward
                      ((GoldRewardManager *)method_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (this_00 == (GoldRewardManager *)0x0) goto code_?;
      fVar4 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(this_00,(MethodInfo *)0x0);
      if (fVar4 <= 0.0) {
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,method_00);
        pGVar3 = (this->fields).claimGoldRewardPopupPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar5 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar3,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        if (value == (Object *)0x0) goto code_?;
        value[1].klass = pOVar5;
        func_?();
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__InEditMenu____c__DisplayClass6_0___OnEnable_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,callbackFunction,
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

void Assembly-CSharp.dll::InEditMenu::InEditMenu_Update(InEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  return;
}

