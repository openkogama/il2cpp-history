
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
  this_00 = (this->fields).stackBottom;
  pCVar1 = (this->fields).chatController;
  if (this_00 != (GameObject *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar1 = (ChatControllerUGUI *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pCVar1,parent,0,
                        ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                       );
    (this->fields).chatController = pCVar1;
    ppCStack_2 = &(this->fields).chatController;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ClearStateStack() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_ClearStateStack
               (DesktopEditModeController *this,MethodInfo *method)

{
  this_01 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_01 != (EditorStateMachine *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_01->fields)._.stateStack;
    if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      if (0 < (this_00->fields)._size) {
        mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
        Stack_1_UnityEngine_UIElements_TextureId__Pop
                  (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
        (this_01->fields)._.clearStack = 1;
        value = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
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
                    MethodInfo__DesktopEditModeController____c___DeleteWoid_b__63_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DesktopEditModeController____c__DisplayClass63_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopEditModeController____c__DisplayClass63_0);
    func_?(&TypeInfo__DesktopEditModeController____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__DesktopEditModeController____c__DisplayClass63_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_00 != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
    if (this_01 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)::StringLiteral__
      ;
      func_?(&this_01->fields,::StringLiteral__);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,woid,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          cVar3 = (*(code *)pMVar2->klass[2]._0.element_class)
                            (pMVar2,pMVar1,&this_01->fields,pMVar2->klass[2]._0.castClass);
          if (cVar3 != '\0') {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__DesktopEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction = TypeInfo__DesktopEditModeController____c->static_fields->__9__63_1;
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
                         MethodInfo__DesktopEditModeController____c___DeleteWoid_b__63_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__DesktopEditModeController____c->static_fields->__9__63_1 = callbackFunction;
              func_?(&TypeInfo__DesktopEditModeController____c->static_fields->__9__63_1);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
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
                     MethodInfo__DesktopEditModeController____c__DisplayClass63_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,callbackFunction_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
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


/* Void DisableEditMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_DisableEditMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).desktopPlayModeController;
  (this->fields).isInPlayInEditMode = 1;
  if (this_00 != (DesktopPlayModeController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
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
    func_?(&TypeInfo__DesktopEditModeController___HandleCursorVisible_d__54);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__DesktopEditModeController___HandleCursorVisible_d__54);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
  pAVar2 = (this->fields).editModeChange;
  if (pAVar2 != (Action_1_EditModeChangeArgs_ *)0x0) {
    pvStack3 = (pAVar2->fields)._._.method;
    (*(pAVar2->fields)._._.invoke_impl)();
  }
  (this->fields).enterPlayModeOnceGuard = 0;
  return;
}


/* Void EnterPlayMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_EnterPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  pDVar1 = this;
  if ((this->fields).enterPlayModeOnceGuard != 0) {
    return;
  }
  pEVar2 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar2 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)pEVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__EditorEvent);
      cRam_? = '\x01';
    }
    pEVar2 = (pDVar1->fields)._EditModeStateMachine_k__BackingField;
    this = (DesktopEditModeController *)0x3a;
    value = (Object *)func_?(TypeInfo__EditorEvent,&this);
    if (pEVar2 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar2,value,(MethodInfo *)0x0);
      (pDVar1->fields).enterPlayModeOnceGuard = 1;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator HandleCursorVisible() */

IEnumerator *
Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_HandleCursorVisible
          (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopEditModeController___HandleCursorVisible_d__54);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__DesktopEditModeController___HandleCursorVisible_d__54);
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
                    MethodInfo__DesktopEditModeController___HandleInput_b__40_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
      (this->fields).inEditMenu = pIVar3;
      func_?();
      pIVar3 = (this->fields).inEditMenu;
      if (pIVar3 == (InEditMenu *)0x0) goto code_?;
      InEditMenu::InEditMenu_Initialize(pIVar3,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__DesktopEditModeController___HandleInput_b__40_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__EditorStateMachine);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  this_06 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_06 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered(this_06,1,(MethodInfo *)0x0);
    pDVar1 = (this->fields).drawPlaneController;
    if (pDVar1 != (DrawPlaneControllerUUI *)0x0) {
      DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize(pDVar1,(MethodInfo *)0x0);
      pDVar1 = (this->fields).drawPlaneController;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__DrawPlane->static_fields->drawPlaneController = pDVar1;
      func_?();
      pCVar2 = (this->fields).chatBubbleController;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar2 = (ChatBubbleController *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pCVar2,pTVar3,0,
                           ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                          );
      (this->fields).chatBubbleController = pCVar2;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                ((Component *)this,(MethodInfo *)0x0);
      object = TypeInfo__EditorStateMachine;
      pCVar4 = (this->fields).contextMenuController;
      gizmoController = (this->fields).gizmoController;
      this_07 = (EditorStateMachine *)func_?();
      EditorStateMachine::EditorStateMachine__ctor_2
                (this_07,(GameObject *)pCVar4,pCVar4,gizmoController,(MethodInfo *)0x0);
      (object->_1).cctor_finished_or_no_cctor = (uint32_t)this_07;
      func_?();
      this_00 = *(EditorWorldObjectCreation **)&(object->_0).this_arg.attrs;
      if (this_00 != (EditorWorldObjectCreation *)0x0) {
        EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
                  (this_00,(EditorStateMachine *)(object->_1).cctor_finished_or_no_cctor,
                   (MethodInfo *)0x0);
        uVar5 = (object->_1).cctor_finished_or_no_cctor;
        if ((uVar5 != 0) &&
           (this_01 = (MaterialsController *)(object->_0).typeMetadataHandle,
           this_01 != (MaterialsController *)0x0)) {
          MaterialsController::MaterialsController_Initialize
                    (this_01,*(CubeModelingStateMachine **)(uVar5 + 0x38),(MethodInfo *)0x0);
          p_Var4 = (object->_0).typeMetadataHandle;
          pIVar6 = (object->_0).element_class;
          if (p_Var4 != (Il2CppMetadataTypeHandle)0x0) {
            this_08 = (Component *)
                      (**(code **)(*(int *)p_Var4 + 0xf8))
                                (p_Var4,*(undefined4 *)(*(int *)p_Var4 + 0xfc));
            if (this_08 != (Component *)0x0) {
              gameObject = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject(this_08,(MethodInfo *)0x0);
              if (pIVar6 != (Il2CppClass *)0x0) {
                UIStack::UIStack_Push
                          ((UIStack *)pIVar6,gameObject,UIPushOption__Enum_None,(UnityAction *)0x0,
                           UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
                uVar5 = (object->_1).cctor_finished_or_no_cctor;
                if ((uVar5 != 0) &&
                   (this_02 = *(CubeModelingStateMachine **)(uVar5 + 0x38),
                   this_02 != (CubeModelingStateMachine *)0x0)) {
                  CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                            (this_02,0x15,(MethodInfo *)0x0);
                  pIVar6 = (object->_0).parent;
                  if (pIVar6 != (Il2CppClass *)0x0) {
                    ChatControllerUGUI::ChatControllerUGUI_Initialize
                              ((ChatControllerUGUI *)pIVar6,(MethodInfo *)0x0);
                    pCVar4 = (ContextMenuController *)(object->_0).interopData;
                    if (pCVar4 != (ContextMenuController *)0x0) {
                      ContextMenuController::ContextMenuController_Initialize
                                (pCVar4,(EditorStateMachine *)
                                        (object->_1).cctor_finished_or_no_cctor,(MethodInfo *)0x0);
                      pIVar6 = (object->_0).klass;
                      if (pIVar6 != (Il2CppClass *)0x0) {
                        GizmoController::GizmoController_Initialize
                                  ((GizmoController *)pIVar6,
                                   (EditorStateMachine *)(object->_1).cctor_finished_or_no_cctor,
                                   (MethodInfo *)0x0);
                        this_09 = (DesktopPlayMode *)func_?(TypeInfo__DesktopPlayMode);
                        DesktopPlayMode::DesktopPlayMode__ctor(this_09,(MethodInfo *)0x0);
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        func_?();
                        this_03 = (FSMEntity *)(object->_1).cctor_finished_or_no_cctor;
                        pOVar7 = (Object *)func_?();
                        if (this_03 != (FSMEntity *)0x0) {
                          FSMEntity::FSMEntity_set_Event(this_03,pOVar7,(MethodInfo *)0x0);
                          this_04 = (EditModeClientShopController *)(object->_0).events;
                          if (this_04 != (EditModeClientShopController *)0x0) {
                            EditModeClientShopController::EditModeClientShopController_Initialize
                                      (this_04,(EditModeRepositoryController *)(object->_0).fields,
                                       (MethodInfo *)0x0);
                            this_05 = (PlayerInventoryController *)(object->_0).properties;
                            if (this_05 != (PlayerInventoryController *)0x0) {
                              PlayerInventoryController::PlayerInventoryController_Initialize
                                        (this_05,(MethodInfo *)0x0);
                              piVar8 = (int *)(object->_1).initializationExceptionGCHandle;
                              if (piVar8 != (int *)0x0) {
                                (**(code **)(*piVar8 + 0x140))
                                          (piVar8,*(undefined4 *)(*piVar8 + 0x144));
                                this_10 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                    ((MethodInfo *)0x0);
                                if (this_10 != (MVWorldObjectClientManager *)0x0) {
                                  pMVar9 = MVWorldObjectClientManager::
                                            MVWorldObjectClientManager_get_RootGroup
                                                      (this_10,(MethodInfo *)0x0);
                                  if (pMVar9 != (MVGroup *)0x0) {
                                    (*(code *)(pMVar9->klass->vtable).PlayModeInitialize.method)
                                              (pMVar9,(pMVar9->klass->vtable).SetupTierInventory.
                                                       methodPtr);
                                    if (object->rgctx_data != (Il2CppRGCTXData *)0x0) {
                                      GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                                ((GoldPurchasedTracker *)object->rgctx_data,
                                                 (MethodInfo *)0x0);
                                      pIVar6 = (object->_0).declaringType;
                                      pOVar7 = (Object *)(object->_0).nestedTypes;
                                      if (pIVar6 != (Il2CppClass *)0x0) {
                                        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            ((GameObject *)pIVar6,(MethodInfo *)0x0)
                                        ;
                                        pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                  Object_1_Instantiate_6
                                                            (pOVar7,pTVar3,0,
                                                                                                                          
                                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                                  );
                                        (object->_0).nestedTypes = (Il2CppClass **)pOVar7;
                                        func_?(&(object->_0).nestedTypes,pOVar7);
                                        uVar5 = (object->_1).cctor_finished_or_no_cctor;
                                        if ((uVar5 != 0) &&
                                           ((FirstTimeSetupTerrainEditTutorial *)
                                            object->interfaceOffsets !=
                                            (FirstTimeSetupTerrainEditTutorial *)0x0)) {
                                          FirstTimeSetupTerrainEditTutorial::
                                          FirstTimeSetupTerrainEditTutorial_Initialize
                                                    ((FirstTimeSetupTerrainEditTutorial *)
                                                     object->interfaceOffsets,
                                                     *(CubeModelingStateMachine **)(uVar5 + 0x38),
                                                     (MaterialsController *)
                                                     (object->_0).typeMetadataHandle,
                                                     (MethodInfo *)0x0);
                                          uVar5 = (object->_1).cctor_finished_or_no_cctor;
                                          if ((uVar5 != 0) &&
                                             (pEVar10 = object->static_fields,
                                             pEVar10 != (EditorStateMachine__StaticFields *)0x0)) {
                                            uVar11 = *(undefined4 *)(uVar5 + 0x38);
                                            *(undefined4 *)(pEVar10 + 0x10) = uVar11;
                                            func_?(pEVar10 + 0x10,uVar11);
                                            if ((TypeInfo__ChatCommandManager->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?(TypeInfo__ChatCommandManager);
                                            }
                                            pAVar12 = ChatCommandManager::
                                                      ChatCommandManager_GetChatCommandCallback
                                                                (ChatCommand__Enum_HideAllUI,
                                                                 (MethodInfo *)0x0);
                                            this_11 = (NavMesh_OnNavMeshPreUpdate *)
                                                      func_?(TypeInfo__System__Action);
                                            UnityEngine.AIModule.dll::UnityEngine::AI::
                                            NavMesh+OnNavMeshPreUpdate::
                                            NavMesh_OnNavMeshPreUpdate__ctor
                                                      (this_11,(Object *)object,
                                                                                                              
                                                  MethodInfo__DesktopEditModeController__HideUI__,
                                                  (MethodInfo *)0x0);
                                            pAVar13 = (Action *)
                                                      mscorlib.dll::System::Delegate::
                                                      Delegate_Combine((Delegate *)pAVar12,
                                                                       (Delegate *)this_11,
                                                                       (MethodInfo *)0x0);
                                            pAVar12 = (Action *)0x0;
                                            if (pAVar13 == (Action *)0x0) {
code_?:
                                              ChatCommandManager::
                                              ChatCommandManager_UpdateChatCommandCallback
                                                        (ChatCommand__Enum_HideAllUI,pAVar12,
                                                         (MethodInfo *)0x0);
                                              return;
                                            }
                                            if (pAVar13->klass == TypeInfo__System__Action) {
                                              pAVar12 = pAVar13;
                                            }
                                            if (pAVar12 != (Action *)0x0) goto code_?;
                                            goto code_?;
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
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
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
      this_01 = (this->fields)._EditModeStateMachine_k__BackingField;
      value = (Object *)func_?();
      if (this_01 != (EditorStateMachine *)0x0) {
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
        (this->fields).enterBuildModeOnceGuard = 1;
        return;
      }
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
  (this->fields).desktopPlayModeController = desktopPlayModeController;
  func_?(&(this->fields).desktopPlayModeController,desktopPlayModeController);
  if (desktopPlayModeController != (DesktopPlayModeController *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)desktopPlayModeController,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      pUVar1 = (desktopPlayModeController->fields).OnLeaveEditPlayMode;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__DesktopEditModeController__LeaveEditPlayMode__,
                 (MethodInfo *)0x0);
      pUVar1 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar1);
      if (pUVar1 == (UnityAction *)0x0) {
        (desktopPlayModeController->fields).OnLeaveEditPlayMode = (UnityAction *)0x0;
        ppUStack3 = &(desktopPlayModeController->fields).OnLeaveEditPlayMode;
        pUStack4 = (UnityAction *)0x0;
        func_?();
        return;
      }
      pUVar5 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar5 = pUVar1;
      }
      if (pUVar5 != (UnityAction *)0x0) {
        (desktopPlayModeController->fields).OnLeaveEditPlayMode = pUVar5;
        uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar1);
        pUStack4 = (UnityAction *)0x0;
        if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUStack4 = pUVar1;
        }
        if (pUStack4 != (UnityAction *)0x0) {
          ppUStack3 = &(desktopPlayModeController->fields).OnLeaveEditPlayMode;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar2 = func_?();
code_?:
  _ppUStack00000020 = uVar2;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RegisterShortcuts() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_RegisterShortcuts
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopEditModeController___RegisterShortcuts_b__60_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DesktopEditModeController___RegisterShortcuts_b__60_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__DesktopEditModeController___RegisterShortcuts_b__60_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__DesktopEditModeController___RegisterShortcuts_b__60_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  this = (DesktopEditModeController *)editorEvent;
  value = (Object *)func_?(TypeInfo__EditorEvent,&this);
  if (this_00 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
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
  pEVar3 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar3 != (EditorStateMachine *)0x0) {
    (*(code *)(pEVar3->klass->vtable).Update.method)(pEVar3,pEVar3->klass[1]._0.image);
  }
  DesktopEditModeController_HandleInput(this,(MethodInfo *)0x0);
  return;
}


/* Void <HandleInput>b__40_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController__HandleInput_b__40_0
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


/* Void <RegisterShortcuts>b__60_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_b__60_0
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


/* Void <RegisterShortcuts>b__60_1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_b__60_1
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


/* Boolean get_IsInPlayInEditMode() */

bool Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_get_IsInPlayInEditMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  return (this->fields).isInPlayInEditMode;
}

