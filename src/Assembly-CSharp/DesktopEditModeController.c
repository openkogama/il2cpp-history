
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
                    MethodInfo__DesktopEditModeController____c___DeleteWoid_b__61_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DesktopEditModeController____c__DisplayClass61_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopEditModeController____c__DisplayClass61_0);
    func_?(&TypeInfo__DesktopEditModeController____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopEditModeController____c__DisplayClass61_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_00 != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
    if (value != (Object *)0x0) {
      value[1].klass = (Object__Class *)::StringLiteral__;
      func_?(value + 1,::StringLiteral__);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,woid,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          cVar3 = (*(code *)pMVar2->klass[2]._0.element_class)
                            (pMVar2,pMVar1,value + 1,pMVar2->klass[2]._0.castClass);
          if (cVar3 != '\0') {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__DesktopEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction = TypeInfo__DesktopEditModeController____c->static_fields->__9__61_1;
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
                         MethodInfo__DesktopEditModeController____c___DeleteWoid_b__61_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__DesktopEditModeController____c->static_fields->__9__61_1 = callbackFunction;
              func_?(&TypeInfo__DesktopEditModeController____c->static_fields->__9__61_1);
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
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                     MethodInfo__DesktopEditModeController____c__DisplayClass61_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
    func_?(&TypeInfo__DesktopEditModeController___HandleCursorVisible_d__52);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopEditModeController___HandleCursorVisible_d__52;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  pAVar2 = (this->fields).editModeChange;
  if (pAVar2 != (Action_1_EditModeChangeArgs_ *)0x0) {
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
    func_?(&TypeInfo__DesktopEditModeController___HandleCursorVisible_d__52);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopEditModeController___HandleCursorVisible_d__52;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  return (IEnumerator *)value;
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
  this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_03 == (MainCameraManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    MainCameraManager::MainCameraManager_set_IsLogicRendered(this_03,1,(MethodInfo *)0x0);
    pDVar1 = (this->fields).drawPlaneController;
    if (pDVar1 == (DrawPlaneControllerUUI *)0x0) goto code_?;
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
    contextMenuController = (this->fields).contextMenuController;
    pGVar4 = (this->fields).gizmoController;
    pEVar5 = (EditorStateMachine *)func_?();
    EditorStateMachine::EditorStateMachine__ctor_2
              (pEVar5,(GameObject *)pGVar4,contextMenuController,pGVar4,(MethodInfo *)0x0);
    this[1].fields._.fpsCounterPrefab = (GameObject *)pEVar5;
    func_?();
    pEVar6 = (EditorWorldObjectCreation *)this[1].fields._.fpsCounter;
    if (pEVar6 == (EditorWorldObjectCreation *)0x0) goto code_?;
    EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
              (pEVar6,(EditorStateMachine *)this[1].fields._.fpsCounterPrefab,(MethodInfo *)0x0);
    pGVar7 = this[1].fields._.fpsCounterPrefab;
    if ((pGVar7 == (GameObject *)0x0) ||
       (pDVar8 = this[1].fields.desktopPlayModeController,
       pDVar8 == (DesktopPlayModeController *)0x0)) goto code_?;
    MaterialsController::MaterialsController_Initialize
              ((MaterialsController *)pDVar8,pGVar7[4].fields._.m_CachedPtr,(MethodInfo *)0x0);
    pDVar8 = this[1].fields.desktopPlayModeController;
    this_00 = *(UIStack **)&this[1].fields._._IsDying_k__BackingField;
    if (pDVar8 == (DesktopPlayModeController *)0x0) goto code_?;
    this_04 = (Component *)
              (*(code *)(pDVar8->klass->vtable).GetCrossHair.method)
                        (pDVar8,(pDVar8->klass->vtable).get_InLobbyState.methodPtr);
    if (this_04 == (Component *)0x0) goto code_?;
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_04,(MethodInfo *)0x0);
    if (this_00 == (UIStack *)0x0) goto code_?;
    UIStack::UIStack_Push
              (this_00,pGVar7,UIPushOption__Enum_None,(UnityAction *)0x0,UIGroupFlags__Enum_MainUI,
               (MethodInfo *)0x0);
    pGVar7 = this[1].fields._.fpsCounterPrefab;
    if ((pGVar7 == (GameObject *)0x0) ||
       (this_01 = pGVar7[4].fields._.m_CachedPtr, this_01 == (CubeModelingStateMachine *)0x0))
    goto code_?;
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (this_01,0x15,(MethodInfo *)0x0);
    pCVar9 = (ChatControllerUGUI *)this[1].fields.editModeChange;
    if (pCVar9 == (ChatControllerUGUI *)0x0) goto code_?;
    ChatControllerUGUI::ChatControllerUGUI_Initialize(pCVar9,(MethodInfo *)0x0);
    pEVar5 = this[1].fields._EditModeStateMachine_k__BackingField;
    pGVar7 = this[1].fields._.fpsCounterPrefab;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    object = pEVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action);
      func_?(&MethodInfo__ContextMenuController__OnFailedToAddItem__);
      func_?(&TypeInfo__IEditModeUI);
      cRam_? = '\x01';
    }
    (pEVar5->fields)._.curEvent = (Object *)pGVar7;
    func_?(&(pEVar5->fields)._.curEvent,pGVar7);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar10 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar10 == (IEditModeUI *)0x0) goto code_?;
    iVar11 = func_?(4,TypeInfo__IEditModeUI,pIVar10);
    if (iVar11 == 0) goto code_?;
    pDVar12 = *(Delegate **)(iVar11 + 8);
    pNVar13 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar13,(Object *)object,MethodInfo__ContextMenuController__OnFailedToAddItem__,
               (MethodInfo *)0x0);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar12,(Delegate *)pNVar13,(MethodInfo *)0x0);
    if (pDVar12 == (Delegate *)0x0) {
      *(undefined4 *)(iVar11 + 8) = 0;
code_?:
      func_?();
      pEVar6 = this[1].fields.editorWorldObjectCreation;
      pTVar14 = (ThemeRepository *)this[1].fields._.fpsCounterPrefab;
      if (pEVar6 == (EditorWorldObjectCreation *)0x0) goto code_?;
      pEVar15 = pEVar6;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__RotationHelper);
        cRam_? = '\x01';
      }
      (pEVar6->fields).themeRepository = pTVar14;
      func_?(&(pEVar6->fields).themeRepository,pTVar14);
      dictionary = (SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)(pEVar6->fields).themeRepository;
      pCVar16 = (CancellationTokenSource *)
                func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__RotationHelper);
      System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
      Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)pCVar16,dictionary,(MethodInfo *)0x0);
      pEVar15[1].fields._.m_CancellationTokenSource = pCVar16;
      func_?(&pEVar15[1].fields._.m_CancellationTokenSource,pCVar16);
      this_05 = (DesktopPlayMode *)func_?(TypeInfo__DesktopPlayMode);
      DesktopPlayMode::DesktopPlayMode__ctor(this_05,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      func_?();
      this_02 = (FSMEntity *)this[1].fields._.fpsCounterPrefab;
      value = (Object *)func_?();
      if (this_02 == (FSMEntity *)0x0) goto code_?;
      FSMEntity::FSMEntity_set_Event(this_02,value,(MethodInfo *)0x0);
      pEVar17 = (EditModeClientShopController *)this[1].fields.stackBottom;
      if (pEVar17 == (EditModeClientShopController *)0x0) goto code_?;
      EditModeClientShopController::EditModeClientShopController_Initialize
                (pEVar17,(EditModeRepositoryController *)this[1].fields.uiStack,(MethodInfo *)0x0);
      pCVar9 = this[1].fields.chatController;
      if (pCVar9 == (ChatControllerUGUI *)0x0) goto code_?;
      PlayerInventoryController::PlayerInventoryController_Initialize
                ((PlayerInventoryController *)pCVar9,(MethodInfo *)0x0);
      pCVar16 = this[1].fields._._.m_CancellationTokenSource;
      if (pCVar16 == (CancellationTokenSource *)0x0) goto code_?;
      (*(code *)pCVar16->klass[1]._0.typeMetadataHandle)(pCVar16,pCVar16->klass[1]._0.interopData);
      this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_06 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_06,(MethodInfo *)0x0);
      if (pMVar18 == (MVGroup *)0x0) goto code_?;
      (*(code *)(pMVar18->klass->vtable).PlayModeInitialize.method)
                (pMVar18,(pMVar18->klass->vtable).SetupTierInventory.methodPtr);
      pEVar17 = this[1].fields.clientShopController;
      if (pEVar17 == (EditModeClientShopController *)0x0) goto code_?;
      GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                ((GoldPurchasedTracker *)pEVar17,(MethodInfo *)0x0);
      pGVar7 = *(GameObject **)&this[1].fields.enterPlayModeOnceGuard;
      pMVar19 = this[1].fields.materialsController;
      if (pGVar7 == (GameObject *)0x0) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar7,(MethodInfo *)0x0);
      pMVar19 = (MaterialsControllerEditMode *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pMVar19,pTVar3,0,
                           UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                          );
      this[1].fields.materialsController = pMVar19;
      func_?(&this[1].fields.materialsController,pMVar19);
      pGVar7 = this[1].fields._.fpsCounterPrefab;
      if (pGVar7 == (GameObject *)0x0) goto code_?;
      pGVar4 = this[1].fields.gizmoController;
      pDVar8 = this[1].fields.desktopPlayModeController;
      if (pGVar4 == (GizmoController *)0x0) goto code_?;
      pEVar5 = pGVar7[4].fields._.m_CachedPtr;
      pGVar4[1].fields.editorStateMachine = pEVar5;
      func_?(&pGVar4[1].fields.editorStateMachine,pEVar5);
      pGVar4[1].fields.gizmoMenuPrefab = (GizmoMenu *)pDVar8;
      func_?(&pGVar4[1].fields.gizmoMenuPrefab,pDVar8);
      pGVar7 = this[1].fields._.fpsCounterPrefab;
      if ((pGVar7 == (GameObject *)0x0) ||
         (pEVar20 = this[1].fields.repositoryController,
         pEVar20 == (EditModeRepositoryController *)0x0)) goto code_?;
      pSVar21 = pGVar7[4].fields._.m_CachedPtr;
      (pEVar20->fields).currentlyBuyingItem = pSVar21;
      func_?(&(pEVar20->fields).currentlyBuyingItem,pSVar21);
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ChatCommandManager);
      }
      pAVar22 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                          (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
      pNVar13 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar13,(Object *)&(this->fields).chatBubbleController,
                 MethodInfo__DesktopEditModeController__HideUI__,(MethodInfo *)0x0);
      pAVar23 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar22,(Delegate *)pNVar13,(MethodInfo *)0x0);
      pAVar22 = (Action *)0x0;
      if (pAVar23 == (Action *)0x0) {
code_?:
        ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                  (ChatCommand__Enum_HideAllUI,pAVar22,(MethodInfo *)0x0);
        return;
      }
      if (pAVar23->klass == TypeInfo__System__Action) {
        pAVar22 = pAVar23;
      }
      if (pAVar22 != (Action *)0x0) goto code_?;
      goto code_?;
    }
    pDVar24 = (Delegate *)0x0;
    if ((Action__Class *)pDVar12->klass == TypeInfo__System__Action) {
      pDVar24 = pDVar12;
    }
    if (pDVar24 == (Delegate *)0x0) goto code_?;
    *(Delegate **)(iVar11 + 8) = pDVar24;
    pDVar24 = (Delegate *)0x0;
    if ((Action__Class *)pDVar12->klass == TypeInfo__System__Action) {
      pDVar24 = pDVar12;
    }
    if (pDVar24 != (Delegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
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
                    MethodInfo__DesktopEditModeController___RegisterShortcuts_b__58_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DesktopEditModeController___RegisterShortcuts_b__58_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__DesktopEditModeController___RegisterShortcuts_b__58_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__DesktopEditModeController___RegisterShortcuts_b__58_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
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


/* Void ToggleHD() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_ToggleHD
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVQualitySettings);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVQualitySettings);
  }
  iVar1 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVQualitySettings);
  }
  MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar1 == 0),(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Update
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
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
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_ToggleHD,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).uiStack;
    if (this_00 == (UIStack *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar1 = UIStack::UIStack_IsStackEmpty(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar5 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
      if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar5 == 0),(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void <RegisterShortcuts>b__58_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_b__58_0
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


/* Void <RegisterShortcuts>b__58_1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_b__58_1
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

