
/* Void Awake() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Awake
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).chatController;
  this_00 = (this->fields).stackBottom;
  pCVar2 = *ppCVar1;
  if (this_00 != (GameObject *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar2 = (ChatControllerUGUI *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pCVar2,parent,0,
                        ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                       );
    *ppCVar1 = pCVar2;
    ppCStack_3 = ppCVar1;
    func_?();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean CanEdit() */

bool Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_CanEdit
               (DesktopEditModeController *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      PVar1 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
      if ((char)PVar1 == '\x02') {
        return 1;
      }
      return (char)PVar1 == '\x01';
    }
  }
  uVar2 = func_?(&stack0x00000000);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean CanEnterPlayMode() */

bool Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_CanEnterPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      PVar1 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
      cVar2 = (char)PVar1;
      if ((cVar2 != '\x02') && (cVar2 != '\x01')) {
        return cVar2 == '\x03';
      }
      return 1;
    }
  }
  uVar3 = func_?(&stack0x00000000);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void ClearStateStack() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_ClearStateStack
               (DesktopEditModeController *this,MethodInfo *method)

{
  this_01 = (this->fields).stateMachine;
  if (this_01 != (FSMEntity *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_01->fields).stateStack;
    if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      if (0 < (this_00->fields)._size) {
        mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
        Stack_1_UnityEngine_UIElements_TextureId__Pop
                  (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
        (this_01->fields).clearStack = 1;
        value = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event(this_01,value,(MethodInfo *)0x0);
      }
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeleteWoid(Int32) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_DeleteWoid
               (DesktopEditModeController *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__DesktopEditModeController____c___DeleteWoid_b__75_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DesktopEditModeController____c__DisplayClass75_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopEditModeController____c__DisplayClass75_0);
    func_?(&TypeInfo__DesktopEditModeController____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__DesktopEditModeController____c__DisplayClass75_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  if ((this->fields).canEdit == 0) {
    return;
  }
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if ((this_00 != (EditorStateMachine *)0x0) &&
     (EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0),
     this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0)) {
    pUVar1 = &this_01->fields;
    (pUVar1->_)._defaultValue_k__BackingField = (List_1_System_Object_ *)::StringLiteral__;
    func_?(pUVar1,::StringLiteral__);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,woid,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObject *)0x0) {
        cVar3 = (*(code *)pMVar2->klass[2]._0.declaringType)
                          (pMVar2,pUVar1,pUVar1,pMVar2->klass[2]._0.parent);
        if (cVar3 != '\0') {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__DesktopEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__DesktopEditModeController____c->static_fields->__9__75_1;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__DesktopEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            object = TypeInfo__DesktopEditModeController____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)object,
                       MethodInfo__DesktopEditModeController____c___DeleteWoid_b__75_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__DesktopEditModeController____c->static_fields->__9__75_1 = callbackFunction;
            func_?(&TypeInfo__DesktopEditModeController____c->static_fields->__9__75_1);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_00 =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                   (Object *)this_01,
                   MethodInfo__DesktopEditModeController____c__DisplayClass75_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DestroyFirstTimeEditTutorials() */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_DestroyFirstTimeEditTutorials
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    FirstTimeActivatableMessagePopup_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeActivatableMessagePopup>__
                   );
    func_?(&
                    FirstTimeSetupTerrainEditTutorial_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeSetupTerrainEditTutorial>__
                   );
    func_?(&
                    FirstTimeActivatablePopup__MethodInfo__UnityEngine__GameObject__GetComponents<FirstTimeActivatablePopup>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stackBottom;
  if (pGVar1 != (GameObject *)0x0) {
    p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponents_1
                       (pGVar1,
                        FirstTimeActivatablePopup__MethodInfo__UnityEngine__GameObject__GetComponents<FirstTimeActivatablePopup>______
                       );
    uVar2 = 0;
    if (p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var6 = p_Var3->vector;
      while( true ) {
        if ((int)p_Var3->max_length <= (int)uVar2) break;
        if (p_Var3->max_length <= uVar2) goto code_?;
        pOVar3 = (Object_1 *)*pp_Var6;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  (pOVar3,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        pp_Var6 = pp_Var6 + 1;
      }
      pGVar1 = (this->fields).stackBottom;
      if (pGVar1 != (GameObject *)0x0) {
        pOVar3 = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            FirstTimeSetupTerrainEditTutorial_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeSetupTerrainEditTutorial>__
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  (pOVar3,(MethodInfo *)0x0);
        pGVar1 = (this->fields).stackBottom;
        if (pGVar1 != (GameObject *)0x0) {
          pOVar3 = (Object_1 *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar1,
                              FirstTimeActivatableMessagePopup_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeActivatableMessagePopup>__
                             );
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    (pOVar3,(MethodInfo *)0x0);
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


/* Void DisableEditMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_DisableEditMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if ((this->fields).canEnterPlayMode == 0) {
    return;
  }
  this_00 = (this->fields).desktopPlayModeController;
  (this->fields).isInPlayInEditMode = 1;
  if ((this_00 != (DesktopPlayModeController *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pAVar2 = (this->fields).editModeChange;
      if (pAVar2 != (Action_1_EditModeChangeArgs_ *)0x0) {
        pvStack3 = (pAVar2->fields)._._.method;
        pvStack4 = (pAVar2->fields)._._.method_code;
        (*(pAVar2->fields)._._.invoke_impl)();
      }
      (this->fields).enterBuildModeOnceGuard = 0;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void EnterBuildMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_EnterBuildMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  (this->fields).isInPlayInEditMode = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField = 0;
  if (bVar1) {
    func_?(&TypeInfo__DesktopEditModeController___HandleCursorVisible_d__66);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__DesktopEditModeController___HandleCursorVisible_d__66);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered
              (this_01,(this->fields).storedRenderLogicState,(MethodInfo *)0x0);
    pAVar2 = (this->fields).editModeChange;
    if (pAVar2 != (Action_1_EditModeChangeArgs_ *)0x0) {
      pvStack3 = (pAVar2->fields)._._.method;
      pvStack4 = (pAVar2->fields)._._.method_code;
      (*(pAVar2->fields)._._.invoke_impl)();
    }
    (this->fields).enterPlayModeOnceGuard = 0;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void EnterPlayMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_EnterPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (((this->fields).canEnterPlayMode != 0) && ((this->fields).enterPlayModeOnceGuard == 0)) {
    this_00 = (this->fields).stateMachine;
    if (this_00 != (FSMEntity *)0x0) {
      FSMEntity::FSMEntity_ClearStateStack(this_00,(MethodInfo *)0x0);
      if ((this->fields).canEdit == 0) {
        DesktopEditModeController_SetState_1
                  (this,PlayModeOnlyEvent__Enum_PMOWaitForPlayModeAvatar,(MethodInfo *)0x0);
      }
      else {
        DesktopEditModeController_SetState
                  (this,EditorEvent__Enum_ESWaitForPlayModeAvatar,(MethodInfo *)0x0);
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 != (MainCameraManager *)0x0) {
        (this->fields).storedRenderLogicState = (pMVar1->fields).isLogicRendered;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar1 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_set_IsLogicRendered(pMVar1,0,(MethodInfo *)0x0);
          (this->fields).enterPlayModeOnceGuard = 1;
          return;
        }
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* IEnumerator HandleCursorVisible() */

IEnumerator *
Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_HandleCursorVisible
          (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopEditModeController___HandleCursorVisible_d__66);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__DesktopEditModeController___HandleCursorVisible_d__66);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  return (IEnumerator *)this_00;
}


/* Void HandleFocusInputSuppress() */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_HandleFocusInputSuppress
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((this->fields).focusSuppressInput != 0) {
    bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                      (KeyCode__Enum_Mouse0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                        (KeyCode__Enum_Mouse1,(MethodInfo *)0x0);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      if (_UNK_? < fVar2 - (this->fields).focusTime) {
        bVar1 = 1;
      }
      if (bVar1 == 0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
        return;
      }
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                ((MethodInfo *)0x0);
    }
    (this->fields).focusSuppressInput = 0;
  }
  return;
}


/* Void HandleInput() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_HandleInput
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopEditModeController___HandleInput_b__49_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__NotificationController);
    func_?(&
                    InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_LobbyMenu,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pUVar2 = (this->fields).uiStack;
    if (pUVar2 == (UIStack *)0x0) goto code_?;
    bVar1 = UIStack::UIStack_IsStackEmpty(pUVar2,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pIVar3 = (this->fields).inEditMenuPrefab;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar3 = (InEditMenu *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pIVar3,parent,0,
                          InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                         );
      ppIVar4 = &(this->fields).inEditMenu;
      *ppIVar4 = pIVar3;
      func_?();
      pIVar3 = *ppIVar4;
      if (pIVar3 == (InEditMenu *)0x0) goto code_?;
      InEditMenu::InEditMenu_Initialize(pIVar3,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__DesktopEditModeController___HandleInput_b__49_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_Deprecated_ToggleHD,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pUVar2 = (this->fields).uiStack;
    if (pUVar2 == (UIStack *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar1 = UIStack::UIStack_IsStackEmpty(pUVar2,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Initialize
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&MethodInfo__DesktopEditModeController__HideUI__);
    func_?(&TypeInfo__DesktopPlayMode);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered(this_01,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chatBubbleController;
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar1 = (ChatBubbleController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pCVar1,parent,0,
                        ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                       );
    (this->fields).chatBubbleController = pCVar1;
    func_?();
    this_00 = (this->fields).chatController;
    if (this_00 != (ChatControllerUGUI *)0x0) {
      ChatControllerUGUI::ChatControllerUGUI_Initialize(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ChatCommandManager);
      }
      pAVar2 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                         (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__DesktopEditModeController__HideUI__,
                 (MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_02,(MethodInfo *)0x0);
      pAVar2 = (Action *)0x0;
      if (pAVar3 != (Action *)0x0) {
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar2 = pAVar3;
        }
        if (pAVar2 == (Action *)0x0) goto code_?;
      }
      ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                (ChatCommand__Enum_HideAllUI,pAVar2,(MethodInfo *)0x0);
      this_03 = (DesktopPlayMode *)func_?();
      DesktopPlayMode::DesktopPlayMode__ctor(this_03,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      func_?();
      ModeControllerBase::ModeControllerBase_TogglePlayerIndicators
                ((ModeControllerBase *)this,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
         pMVar5 != (MVLocalPlayer *)0x0)) {
        PVar6 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(pMVar5,(MethodInfo *)0x0);
        (this->fields).canEdit = (char)PVar6 == '\x02' || (char)PVar6 == '\x01';
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
           pMVar5 != (MVLocalPlayer *)0x0)) {
          PVar6 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(pMVar5,(MethodInfo *)0x0);
          cVar7 = (char)PVar6;
          if ((cVar7 == '\x02') || (cVar7 == '\x01')) {
            bVar8 = true;
          }
          else {
            bVar8 = cVar7 == '\x03';
          }
          (this->fields).canEnterPlayMode = bVar8;
          if ((this->fields).canEdit != 0) {
            DesktopEditModeController_InitializeEditSystems(this,(MethodInfo *)0x0);
code_?:
            if ((this->fields).canEnterPlayMode != 0) {
              DesktopEditModeController_InitializePlayModeSystems(this,(MethodInfo *)0x0);
            }
            return;
          }
          if (cRam_? == '\0') {
            func_?(&
                            FirstTimeActivatableMessagePopup_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeActivatableMessagePopup>__
                           );
            func_?(&
                            FirstTimeSetupTerrainEditTutorial_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeSetupTerrainEditTutorial>__
                           );
            func_?(&
                            FirstTimeActivatablePopup__MethodInfo__UnityEngine__GameObject__GetComponents<FirstTimeActivatablePopup>______
                           );
            func_?(&TypeInfo__UnityEngine__Object);
            cRam_? = '\x01';
          }
          pGVar9 = (this->fields).stackBottom;
          if (pGVar9 != (GameObject *)0x0) {
            p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponents_1
                                (pGVar9,
                                 FirstTimeActivatablePopup__MethodInfo__UnityEngine__GameObject__GetComponents<FirstTimeActivatablePopup>______
                                );
            uVar10 = 0;
            if (p_Var10 != (_Il2CppFullySharedGenericType__Array *)0x0) {
              pp_Var13 = p_Var10->vector;
              for (; (int)uVar10 < (int)p_Var10->max_length; uVar10 = uVar10 + 1) {
                if (p_Var10->max_length <= uVar10) goto code_?;
                pOVar11 = (Object_1 *)*pp_Var13;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          (pOVar11,(MethodInfo *)0x0);
                pp_Var13 = pp_Var13 + 1;
              }
              pGVar9 = (this->fields).stackBottom;
              if (pGVar9 != (GameObject *)0x0) {
                pOVar11 = (Object_1 *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (pGVar9,
                                     FirstTimeSetupTerrainEditTutorial_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeSetupTerrainEditTutorial>__
                                    );
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          (pOVar11,(MethodInfo *)0x0);
                pGVar9 = (this->fields).stackBottom;
                if (pGVar9 != (GameObject *)0x0) {
                  pOVar11 = (Object_1 *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponent_1
                                      (pGVar9,
                                       FirstTimeActivatableMessagePopup_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeActivatableMessagePopup>__
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            (pOVar11,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeEditSystems() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_InitializeEditSystems
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__EditorStateMachine);
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pCVar2 = (this->fields).contextMenuController;
  pGVar3 = (this->fields).gizmoController;
  pEVar4 = (EditorStateMachine *)func_?(TypeInfo__EditorStateMachine);
  EditorStateMachine::EditorStateMachine__ctor_2(pEVar4,pGVar1,pCVar2,pGVar3,(MethodInfo *)0x0);
  ppEVar5 = &(this->fields)._EditModeStateMachine_k__BackingField;
  *ppEVar5 = pEVar4;
  func_?(ppEVar5,pEVar4);
  if ((*ppEVar5 != (EditorStateMachine *)0x0) &&
     (this_00 = ((*ppEVar5)->fields).cubeModelingStateMachine,
     this_00 != (CubeModelingStateMachine *)0x0)) {
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (this_00,0x15,(MethodInfo *)0x0);
    pEVar4 = *ppEVar5;
    pOVar6 = (Object *)func_?();
    if (pEVar4 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar4,pOVar6,(MethodInfo *)0x0);
      (this->fields).stateMachine = (FSMEntity *)*ppEVar5;
      func_?();
      pDVar7 = (this->fields).drawPlaneController;
      if (pDVar7 != (DrawPlaneControllerUUI *)0x0) {
        DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize(pDVar7,(MethodInfo *)0x0);
        pDVar7 = (this->fields).drawPlaneController;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        TypeInfo__DrawPlane->static_fields->drawPlaneController = pDVar7;
        func_?();
        this_01 = (this->fields).editorWorldObjectCreation;
        if (this_01 != (EditorWorldObjectCreation *)0x0) {
          EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
                    (this_01,*ppEVar5,(MethodInfo *)0x0);
          if ((*ppEVar5 != (EditorStateMachine *)0x0) &&
             (pMVar8 = (this->fields).materialsController,
             pMVar8 != (MaterialsControllerEditMode *)0x0)) {
            MaterialsController::MaterialsController_Initialize
                      ((MaterialsController *)pMVar8,((*ppEVar5)->fields).cubeModelingStateMachine,
                       (MethodInfo *)0x0);
            pMVar8 = (this->fields).materialsController;
            this_02 = (this->fields).uiStack;
            if (pMVar8 != (MaterialsControllerEditMode *)0x0) {
              this_07 = (Component *)(*(code *)(pMVar8->klass->vtable).SetActive.method)();
              if (this_07 != (Component *)0x0) {
                pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject(this_07,(MethodInfo *)0x0);
                if (this_02 != (UIStack *)0x0) {
                  UIStack::UIStack_Push
                            (this_02,pGVar1,UIPushOption__Enum_None,(UnityAction *)0x0,
                             UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
                  pCVar2 = (this->fields).contextMenuController;
                  if (pCVar2 != (ContextMenuController *)0x0) {
                    ContextMenuController::ContextMenuController_Initialize
                              (pCVar2,*ppEVar5,(MethodInfo *)0x0);
                    pGVar3 = (this->fields).gizmoController;
                    if (pGVar3 != (GizmoController *)0x0) {
                      GizmoController::GizmoController_Initialize(pGVar3,*ppEVar5,(MethodInfo *)0x0)
                      ;
                      this_03 = (this->fields).clientShopController;
                      if (this_03 != (EditModeClientShopController *)0x0) {
                        EditModeClientShopController::EditModeClientShopController_Initialize
                                  (this_03,(this->fields).repositoryController,(MethodInfo *)0x0);
                        this_04 = (this->fields).playerInventoryController;
                        if (this_04 != (PlayerInventoryController *)0x0) {
                          PlayerInventoryController::PlayerInventoryController_Initialize
                                    (this_04,(MethodInfo *)0x0);
                          this_05 = (this->fields).goldPurchasedTracker;
                          if (this_05 != (GoldPurchasedTracker *)0x0) {
                            GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                      (this_05,(MethodInfo *)0x0);
                            pGVar1 = (this->fields).stackBottom;
                            if (pGVar1 != (GameObject *)0x0) {
                              pOVar6 = (Object *)&UNK_?;
                              parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor ==
                                  0) {
                                func_?();
                                parent = (Transform *)&UNK_?;
                              }
                              pRVar9 = (RectTransform *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_Instantiate_6
                                                  (pOVar6,parent,0,
                                                                                                      
                                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                                  );
                              (this->fields).notificationsManager = pRVar9;
                              func_?();
                              if ((*ppEVar5 != (EditorStateMachine *)0x0) &&
                                 (this_06 = (this->fields).firstTimeSetupTerrainEditTutorial,
                                 this_06 != (FirstTimeSetupTerrainEditTutorial *)0x0)) {
                                FirstTimeSetupTerrainEditTutorial::
                                FirstTimeSetupTerrainEditTutorial_Initialize
                                          (this_06,((*ppEVar5)->fields).cubeModelingStateMachine,
                                           (MaterialsController *)(this->fields).materialsController
                                           ,(MethodInfo *)0x0);
                                if ((*ppEVar5 != (EditorStateMachine *)0x0) &&
                                   (pSVar10 = (this->fields).setupCubeModelTutorialUI,
                                   pSVar10 != (SetupCubeModelTutorialUI *)0x0)) {
                                  (pSVar10->fields).cubeModelingStateMachine =
                                       ((*ppEVar5)->fields).cubeModelingStateMachine;
                                  func_?();
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializePlayModeSystems() */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_InitializePlayModeSystems
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PlayModeOnlyEvent);
    func_?(&TypeInfo__PlayModeOnlyStateMachine);
    cRam_? = '\x01';
  }
  pDVar1 = this;
  if ((this->fields).canEdit == 0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pPVar3 = (PlayModeOnlyStateMachine *)func_?(TypeInfo__PlayModeOnlyStateMachine);
    PlayModeOnlyStateMachine::PlayModeOnlyStateMachine__ctor(pPVar3,pGVar2,(MethodInfo *)0x0);
    ppPVar4 = &(pDVar1->fields).playModeOnlyStateMachine;
    *ppPVar4 = pPVar3;
    func_?(ppPVar4,pPVar3);
    pPVar3 = *ppPVar4;
    this = (DesktopEditModeController *)0x2f;
    value = (Object *)func_?(TypeInfo__PlayModeOnlyEvent,&this);
    if (pPVar3 == (PlayModeOnlyStateMachine *)0x0) goto code_?;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)pPVar3,value,(MethodInfo *)0x0);
    ppFVar5 = &(pDVar1->fields).stateMachine;
    *ppFVar5 = (FSMEntity *)*ppPVar4;
    func_?(ppFVar5,*ppPVar4);
  }
  pDVar6 = (pDVar1->fields).desktopPlayModeController;
  if (pDVar6 != (DesktopPlayModeController *)0x0) {
    (*(code *)(pDVar6->klass->vtable).Initialize.method)
              (pDVar6,(pDVar6->klass->vtable).ShowEUseIcon_1.methodPtr);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (this_01,(MethodInfo *)0x0);
      if (pMVar7 != (MVGroup *)0x0) {
        (*(code *)(pMVar7->klass->vtable).PlayModeInitialize.method)
                  (pMVar7,(pMVar7->klass->vtable).SetupTierInventory.methodPtr);
        if ((pDVar1->fields).canEdit == 0) {
          pGVar2 = (pDVar1->fields).stackBottom;
          if (pGVar2 == (GameObject *)0x0) goto code_?;
          parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0);
        }
        else {
          this_00 = (pDVar1->fields).materialsController;
          if (this_00 == (MaterialsControllerEditMode *)0x0) goto code_?;
          parent = MaterialsControllerEditMode::
                   MaterialsControllerEditMode_get_CubeModelingControllerTransform
                             (this_00,(MethodInfo *)0x0);
        }
        pGVar2 = (pDVar1->fields).playModeButton;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                  ((Object *)pGVar2,parent,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsGridSnap() */

bool Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_IsGridSnap
               (DesktopEditModeController *this,MethodInfo *method)

{
  return (this->fields).gridSnap;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_LeaveEditPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if ((this->fields).enterBuildModeOnceGuard != 0) {
    return;
  }
  this_00 = (this->fields).desktopPlayModeController;
  if ((this_00 != (DesktopPlayModeController *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      if ((this->fields).canEdit != 0) {
        DesktopEditModeController_SetState
                  (this,EditorEvent__Enum_ESWaitForBuildModeAvatar,(MethodInfo *)0x0);
        (this->fields).enterBuildModeOnceGuard = 1;
        return;
      }
      DesktopEditModeController_SetState_1
                (this,PlayModeOnlyEvent__Enum_PMOWaitForBuildModeAvatar,(MethodInfo *)0x0);
      (this->fields).enterBuildModeOnceGuard = 1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MoveToSelectedObject() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_MoveToSelectedObject
               (DesktopEditModeController *this,MethodInfo *method)

{
  if ((this->fields).canEdit == 0) {
    return;
  }
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_00 != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(this_00,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_01 != (MainCameraManager *)0x0) &&
       (pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0),
       pMVar2 != (MVCameraBase *)0x0)) {
      (*(code *)(pMVar2->klass->vtable).FocusOnObject.method)(pMVar2,pMVar1,0x40000000,0,0,0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnApplicationFocus(Boolean) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_OnApplicationFocus
               (DesktopEditModeController *this,bool focus,MethodInfo *method)

{
  if (focus != 0) {
    (this->fields).focusSuppressInput = 1;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    (this->fields).focusTime = fVar1;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_OnDestroy
               (DesktopEditModeController *this,MethodInfo *method)

{
  MVGameControllerDesktop::MVGameControllerDesktop_UnregisterEditModeController((MethodInfo *)0x0);
  return;
}


/* Void RegisterPlayModeController(DesktopPlayModeController) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_RegisterPlayModeController
               (DesktopEditModeController *this,DesktopPlayModeController *desktopPlayModeController
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DesktopEditModeController__LeaveEditPlayMode__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  ppDVar1 = &(this->fields).desktopPlayModeController;
  *ppDVar1 = desktopPlayModeController;
  func_?(ppDVar1,desktopPlayModeController);
  if (desktopPlayModeController != (DesktopPlayModeController *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)desktopPlayModeController,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      pUVar2 = (desktopPlayModeController->fields).OnLeaveEditPlayMode;
      ppUVar3 = &(desktopPlayModeController->fields).OnLeaveEditPlayMode;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__DesktopEditModeController__LeaveEditPlayMode__,
                 (MethodInfo *)0x0);
      pUVar2 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar2);
      ppUStack5 = ppUVar3;
      if (pUVar2 == (UnityAction *)0x0) {
        pUStack6 = (UnityAction *)0x0;
        *ppUVar3 = (UnityAction *)0x0;
        func_?();
        return;
      }
      pUVar7 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar2;
      }
      if (pUVar7 != (UnityAction *)0x0) {
        *ppUVar3 = pUVar7;
        uVar4 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar2);
        pUStack6 = (UnityAction *)0x0;
        if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUStack6 = pUVar2;
        }
        if (pUStack6 != (UnityAction *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?();
code_?:
  _ppUStack00000018 = uVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RegisterShortcuts() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_RegisterShortcuts
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopEditModeController___RegisterShortcuts_b__72_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DesktopEditModeController___RegisterShortcuts_b__72_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)this,
             MethodInfo__DesktopEditModeController___RegisterShortcuts_b__72_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)this,
             MethodInfo__DesktopEditModeController___RegisterShortcuts_b__72_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  return;
}


/* Void Set(Boolean) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Set
               (DesktopEditModeController *this,bool snap,MethodInfo *method)

{
  (this->fields).gridSnap = snap;
  return;
}


/* Void SetState(EditorEvent) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_SetState
               (DesktopEditModeController *this,EditorEvent__Enum editorEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stateMachine;
  this = (DesktopEditModeController *)editorEvent;
  value = (Object *)func_?(TypeInfo__EditorEvent,&this);
  if (this_00 != (FSMEntity *)0x0) {
    FSMEntity::FSMEntity_set_Event(this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetState(PlayModeOnlyEvent) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_SetState_1
               (DesktopEditModeController *this,PlayModeOnlyEvent__Enum playModeOnlyEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayModeOnlyEvent);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stateMachine;
  this = (DesktopEditModeController *)playModeOnlyEvent;
  value = (Object *)func_?(TypeInfo__PlayModeOnlyEvent,&this);
  if (this_00 != (FSMEntity *)0x0) {
    FSMEntity::FSMEntity_set_Event(this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_SetUIReady
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_SetStackReady(this_00,(MethodInfo *)0x0);
    source = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__DesktopEditModeController__SetUIReady__,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar1 != (Delegate *)0x0) {
      pDVar2 = (Delegate *)0x0;
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        pDStack_3 = pDVar1;
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).firstFrameUpdateActorReady,
       pFVar6 != (FirstFrameUpdateActorReady *)0x0)) {
      (pFVar6->fields).callbacks = unaff_ESI;
      func_?();
      return;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Update
               (DesktopEditModeController *this,MethodInfo *method)

{
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((this->fields).focusSuppressInput != 0) {
    bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                      (KeyCode__Enum_Mouse0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                        (KeyCode__Enum_Mouse1,(MethodInfo *)0x0);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      if (_UNK_? < fVar2 - (this->fields).focusTime) {
        bVar1 = 1;
      }
      if (bVar1 == 0) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
        goto code_?;
      }
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                ((MethodInfo *)0x0);
    }
    (this->fields).focusSuppressInput = 0;
  }
code_?:
  pFVar3 = (this->fields).stateMachine;
  if (pFVar3 != (FSMEntity *)0x0) {
    (*(code *)(pFVar3->klass->vtable).Update.method)(pFVar3,pFVar3->klass[1]._0.image);
  }
  DesktopEditModeController_HandleInput(this,(MethodInfo *)0x0);
  return;
}


/* Void <HandleInput>b__49_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController__HandleInput_b__49_0
               (DesktopEditModeController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inEditMenu;
  if (this_00 != (InEditMenu *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <RegisterShortcuts>b__72_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_b__72_0
               (DesktopEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DesktopEditModeController__Respawn__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__DesktopEditModeController__Respawn__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0x10);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RegisterShortcuts>b__72_1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_b__72_1
               (DesktopEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DesktopEditModeController__MoveToSelectedObject__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__DesktopEditModeController__MoveToSelectedObject__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0x15);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DesktopEditModeController() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController__ctor
               (DesktopEditModeController *this,MethodInfo *method)

{
  (this->fields).enterBuildModeOnceGuard = 1;
  (this->fields).storedRenderLogicState = 1;
  (this->fields).focusSuppressInput = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

