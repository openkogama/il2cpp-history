
/* Void Awake() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Awake
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    ppCStack_1 = (ChatControllerUGUI **)&MethodInfo__TouchEditModeController__SetUIReady__;
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stackBottom;
  pCVar2 = (this->fields).chatController;
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
    (this->fields).chatController = pCVar2;
    ppCStack_1 = &(this->fields).chatController;
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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_ClearStateStack
               (TouchEditModeController *this,MethodInfo *method)

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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_DeleteWoid
               (TouchEditModeController *this,int32_t woid,MethodInfo *method)

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
                    MethodInfo__TouchEditModeController____c___DeleteWoid_b__65_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TouchEditModeController____c__DisplayClass65_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouchEditModeController____c__DisplayClass65_0);
    func_?(&TypeInfo__TouchEditModeController____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouchEditModeController____c__DisplayClass65_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
          cVar3 = (*(code *)pMVar2->klass[2]._0.declaringType)
                            (pMVar2,pMVar1,value + 1,pMVar2->klass[2]._0.parent);
          if (cVar3 != '\0') {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__TouchEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction = TypeInfo__TouchEditModeController____c->static_fields->__9__65_1;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__TouchEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              object = TypeInfo__TouchEditModeController____c->static_fields->__9;
              callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)object,
                         MethodInfo__TouchEditModeController____c___DeleteWoid_b__65_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__TouchEditModeController____c->static_fields->__9__65_1 = callbackFunction;
              func_?(&TypeInfo__TouchEditModeController____c->static_fields->__9__65_1);
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
                     MethodInfo__TouchEditModeController____c__DisplayClass65_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_DisableEditMode
               (TouchEditModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).mobilePlayModeController;
  (this->fields).isInPlayInEditMode = 1;
  if (this_00 != (TouchPlayModeController *)0x0) {
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
        if ((this->fields).editModeChange != (Action_1_EditModeChangeArgs_ *)0x0) {
          pAVar2 = (this->fields).editModeChange;
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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_EnterBuildMode
               (TouchEditModeController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isInPlayInEditMode = 0;
  if (bVar1) {
    func_?(&TypeInfo__TouchEditModeController___HandleCursorVisible_d__56);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouchEditModeController___HandleCursorVisible_d__56;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  if ((this->fields).editModeChange != (Action_1_EditModeChangeArgs_ *)0x0) {
    (*(((this->fields).editModeChange)->fields)._._.invoke_impl)();
  }
  (this->fields).enterPlayModeOnceGuard = 0;
  return;
}


/* Void EnterPlayMode() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_EnterPlayMode
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = this;
  if ((this->fields).enterPlayModeOnceGuard != 0) {
    return;
  }
  pEVar2 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar2 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)pEVar2,(MethodInfo *)0x0);
    pCVar3 = (pTVar1->fields).contextMenuController;
    if (pCVar3 != (ContextMenuController *)0x0) {
      pCVar4 = (pCVar3->fields).currentContextMenu;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pCVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pCVar3 = (pTVar1->fields).contextMenuController;
        if ((pCVar3 == (ContextMenuController *)0x0) ||
           (pCVar4 = (pCVar3->fields).currentContextMenu, pCVar4 == (ContextMenu *)0x0))
        goto code_?;
        this = (TouchEditModeController *)0x0;
        ContextMenu::ContextMenu_Pop(pCVar4,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        in_stack_6 = &TypeInfo__EditorEvent;
        method = (MethodInfo *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pEVar2 = (pTVar1->fields)._EditModeStateMachine_k__BackingField;
      in_stack_6 = (EditorEvent__Enum__Class **)&this;
      method = (MethodInfo *)TypeInfo__EditorEvent;
      this = (TouchEditModeController *)&UNK_?;
      value = (Object *)func_?();
      if (pEVar2 != (EditorStateMachine *)0x0) {
        this = (TouchEditModeController *)0x0;
        FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar2,value,(MethodInfo *)0x0);
        (pTVar1->fields).enterPlayModeOnceGuard = 1;
        return;
      }
    }
  }
code_?:
  this = (TouchEditModeController *)&UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IState GetCurrentState() */

IState * Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_GetCurrentState
                   (TouchEditModeController *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pEVar2 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar2 != (EditorStateMachine *)0x0) {
    return (pEVar2->fields)._.currentState;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pIVar6 = (IState *)(*pcVar5)();
  return pIVar6;
}


/* IEnumerator HandleCursorVisible() */

IEnumerator *
Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_HandleCursorVisible
          (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TouchEditModeController___HandleCursorVisible_d__56);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouchEditModeController___HandleCursorVisible_d__56;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  return (IEnumerator *)value;
}


/* Void HandleFocusInputSupress() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_HandleFocusInputSupress
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  func_?(auStack_1,0,0x44);
  if ((this->fields).focusSuppressInput != 0) {
    iVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                      ((MethodInfo *)0x0);
    if (iVar2 < 1) {
      bVar3 = false;
    }
    else {
      pTVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                         ((Touch *)&stack0xffffff74,0,(MethodInfo *)0x0);
      auStack_1._0_4_ = pTVar4->m_FingerId;
      auStack_1._4_4_ = (pTVar4->m_Position).x;
      auStack_1._8_4_ = (pTVar4->m_Position).y;
      fStack_5 = (pTVar4->m_RawPosition).x;
      fStack_6 = (pTVar4->m_RawPosition).y;
      pFStack_7 = (Func_2_Single_Single_ *)(pTVar4->m_PositionDelta).x;
      fStack_8 = (pTVar4->m_PositionDelta).y;
      pAStack_9 = (Action *)pTVar4->m_TimeDelta;
      iStack_10 = pTVar4->m_TapCount;
      pVStack_11 = (VisualElement *)pTVar4->m_Phase;
      pAStack_12 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                    *)pTVar4->m_Type;
      pFStack_13 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                    *)pTVar4->m_Pressure;
      pFStack_14 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                    *)pTVar4->m_maximumPossiblePressure;
      SStack_15.m_StyleValues = (StyleValueCollection *)pTVar4->m_Radius;
      fStack_16 = pTVar4->m_RadiusVariance;
      SStack_17.m_StyleValues = (StyleValueCollection *)pTVar4->m_AltitudeAngle;
      fStack_18 = pTVar4->m_AzimuthAngle;
      pVVar19 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
               ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                         ((ValueAnimation_1_StyleValues_ *)auStack_1,(MethodInfo *)0x0);
      bVar3 = pVVar19 == (VisualElement *)0x0;
    }
    fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? < fVar20 - (this->fields).focusTime) {
      bVar3 = true;
    }
    if (!bVar3) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
      return;
    }
    (this->fields).focusSuppressInput = 0;
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Initialize
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ChatCommandManager);
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__EditorStateMachine);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                   );
    func_?(&
                    InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__TouchEditModeController__HideUI__);
    func_?(&TypeInfo__TouchInputMap);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  this_09 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_09 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered(this_09,1,(MethodInfo *)0x0);
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
      pGVar5 = (this->fields).gizmoController;
      this_10 = (EditorStateMachine *)func_?();
      EditorStateMachine::EditorStateMachine__ctor_2
                (this_10,(GameObject *)pCVar4,pCVar4,pGVar5,(MethodInfo *)0x0);
      (object->_1).thread_static_fields_offset = (int32_t)this_10;
      func_?();
      this_00 = (EditorWorldObjectCreation *)(object->_0).typeMetadataHandle;
      if (this_00 != (EditorWorldObjectCreation *)0x0) {
        EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
                  (this_00,(EditorStateMachine *)(object->_1).thread_static_fields_offset,
                   (MethodInfo *)0x0);
        iVar6 = (object->_1).thread_static_fields_offset;
        if ((iVar6 != 0) &&
           (this_01 = (MaterialsController *)(object->_0).methods,
           this_01 != (MaterialsController *)0x0)) {
          MaterialsController::MaterialsController_Initialize
                    (this_01,*(CubeModelingStateMachine **)(iVar6 + 0x38),(MethodInfo *)0x0);
          ppMVar7 = (object->_0).methods;
          this_02 = (UIStack *)(object->_0).interopData;
          if (ppMVar7 != (MethodInfo **)0x0) {
            pCVar8 = (Component *)
                      (*(*ppMVar7)[5].invoker_method)
                                ((Il2CppMethodPointer)ppMVar7,(MethodInfo *)(*ppMVar7)[5].name,
                                 in_stack_9,in_stack_10,in_stack_11);
            if (pCVar8 != (Component *)0x0) {
              pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (pCVar8,(MethodInfo *)0x0);
              if (this_02 != (UIStack *)0x0) {
                UIStack::UIStack_Push
                          (this_02,pGVar12,UIPushOption__Enum_None,(UnityAction *)0x0,
                           UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
                iVar6 = (object->_1).thread_static_fields_offset;
                if ((iVar6 != 0) &&
                   (this_03 = *(CubeModelingStateMachine **)(iVar6 + 0x38),
                   this_03 != (CubeModelingStateMachine *)0x0)) {
                  CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                            (this_03,0x15,(MethodInfo *)0x0);
                  pFVar13 = (object->_0).fields;
                  original = (object->_0).klass;
                  if (pFVar13 != (FieldInfo *)0x0) {
                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform((GameObject *)pFVar13,(MethodInfo *)0x0);
                    pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_6
                                        ((Object *)original,pTVar3,0,
                                         InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                                        );
                    (object->_1).thread_static_fields_size = (uint32_t)pOVar14;
                    func_?(&(object->_1).thread_static_fields_size,pOVar14);
                    pCVar8 = (Component *)(object->_1).thread_static_fields_size;
                    if (pCVar8 != (Component *)0x0) {
                      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject(pCVar8,(MethodInfo *)0x0);
                      if (pGVar12 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar12,0,(MethodInfo *)0x0);
                        this_04 = (InEditMenu *)(object->_1).thread_static_fields_size;
                        if (this_04 != (InEditMenu *)0x0) {
                          InEditMenu::InEditMenu_Initialize(this_04,(MethodInfo *)0x0);
                          this_05 = (ChatControllerUGUI *)(object->_0).events;
                          if (this_05 != (ChatControllerUGUI *)0x0) {
                            ChatControllerUGUI::ChatControllerUGUI_Initialize
                                      (this_05,(MethodInfo *)0x0);
                            pCVar4 = (ContextMenuController *)(object->_0).nestedTypes;
                            if (pCVar4 != (ContextMenuController *)0x0) {
                              ContextMenuController::ContextMenuController_Initialize
                                        (pCVar4,(EditorStateMachine *)
                                                (object->_1).thread_static_fields_offset,
                                         (MethodInfo *)0x0);
                              pGVar5 = (GizmoController *)(object->_0).implementedInterfaces;
                              if (pGVar5 != (GizmoController *)0x0) {
                                GizmoController::GizmoController_Initialize
                                          (pGVar5,(EditorStateMachine *)
                                                  (object->_1).thread_static_fields_offset,
                                           (MethodInfo *)0x0);
                                this_11 = (TouchInputMap *)func_?(TypeInfo__TouchInputMap);
                                TouchInputMap::TouchInputMap__ctor(this_11,(MethodInfo *)0x0);
                                if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0)
                                {
                                  func_?();
                                }
                                func_?();
                                this_06 = (FSMEntity *)(object->_1).thread_static_fields_offset;
                                pOVar14 = (Object *)func_?();
                                if (this_06 != (FSMEntity *)0x0) {
                                  FSMEntity::FSMEntity_set_Event(this_06,pOVar14,(MethodInfo *)0x0);
                                  if ((EditModeClientShopController *)object->static_fields !=
                                      (EditModeClientShopController *)0x0) {
                                    EditModeClientShopController::
                                    EditModeClientShopController_Initialize
                                              ((EditModeClientShopController *)object->static_fields
                                               ,(EditModeRepositoryController *)
                                                object->interfaceOffsets,(MethodInfo *)0x0);
                                    if (object->rgctx_data != (Il2CppRGCTXData *)0x0) {
                                      PlayerInventoryController::
                                      PlayerInventoryController_Initialize
                                                ((PlayerInventoryController *)object->rgctx_data,
                                                 (MethodInfo *)0x0);
                                      piVar15 = (int *)(object->_1).static_fields_size;
                                      if (piVar15 != (int *)0x0) {
                                        (**(code **)(*piVar15 + 0x168))
                                                  (piVar15,*(undefined4 *)(*piVar15 + 0x16c));
                                        this_12 = MVGameControllerBase::
                                                  MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                        if (this_12 != (MVWorldObjectClientManager *)0x0) {
                                          pMVar16 = MVWorldObjectClientManager::
                                                    MVWorldObjectClientManager_get_RootGroup
                                                              (this_12,(MethodInfo *)0x0);
                                          if (pMVar16 != (MVGroup *)0x0) {
                                            (*(code *)(pMVar16->klass->vtable).PlayModeInitialize.
                                                      method)(pMVar16,(pMVar16->klass->vtable).
                                                                      SetupTierInventory.methodPtr);
                                            this_07 = (GoldPurchasedTracker *)
                                                      (object->_1).instance_size;
                                            if (this_07 != (GoldPurchasedTracker *)0x0) {
                                              GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                                        (this_07,(MethodInfo *)0x0);
                                              pFVar13 = (object->_0).fields;
                                              pOVar14 = (object->_1).unity_user_data;
                                              if (pFVar13 != (FieldInfo *)0x0) {
                                                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::GameObject_get_transform
                                                                    ((GameObject *)pFVar13,
                                                                     (MethodInfo *)0x0);
                                                pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Object::Object_1_Instantiate_6
                                                                    (pOVar14,pTVar3,0,
                                                                                                                                          
                                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                                  );
                                                (object->_1).unity_user_data = pOVar14;
                                                func_?(&(object->_1).unity_user_data,
                                                                pOVar14);
                                                iVar6 = (object->_1).thread_static_fields_offset;
                                                if ((iVar6 != 0) &&
                                                   (this_08 = (FirstTimeSetupTerrainEditTutorial *)
                                                              (object->_1).cctor_thread,
                                                   this_08 !=
                                                   (FirstTimeSetupTerrainEditTutorial *)0x0)) {
                                                  FirstTimeSetupTerrainEditTutorial::
                                                  FirstTimeSetupTerrainEditTutorial_Initialize
                                                            (this_08,*(CubeModelingStateMachine **)
                                                                      (iVar6 + 0x38),
                                                             (MaterialsController *)
                                                             (object->_0).methods,(MethodInfo *)0x0)
                                                  ;
                                                  iVar6 = (object->_1).thread_static_fields_offset;
                                                  if ((iVar6 != 0) &&
                                                     (p_Var8 = (object->_1).genericContainerHandle,
                                                     p_Var8 != (Il2CppMetadataGenericContainerHandle
                                                               )0x0)) {
                                                    uVar17 = *(undefined4 *)(iVar6 + 0x38);
                                                    *(undefined4 *)(p_Var8 + 0x10) = uVar17;
                                                    func_?(p_Var8 + 0x10,uVar17);
                                                    if ((TypeInfo__ChatCommandManager->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__ChatCommandManager);
                                                    }
                                                    pAVar18 = ChatCommandManager::
                                                                                                                            
                                                  ChatCommandManager_GetChatCommandCallback
                                                            (ChatCommand__Enum_HideAllUI,
                                                             (MethodInfo *)0x0);
                                                  this_13 = (NavMesh_OnNavMeshPreUpdate *)
                                                            func_?(TypeInfo__System__Action
                                                                           );
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (this_13,(Object *)object,
                                                                                                                          
                                                  MethodInfo__TouchEditModeController__HideUI__,
                                                  (MethodInfo *)0x0);
                                                  pAVar19 = (Action *)
                                                            mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pAVar18,
                                                                             (Delegate *)this_13,
                                                                             (MethodInfo *)0x0);
                                                  pAVar18 = (Action *)0x0;
                                                  if (pAVar19 == (Action *)0x0) {
code_?:
                                                    ChatCommandManager::
                                                    ChatCommandManager_UpdateChatCommandCallback
                                                              (ChatCommand__Enum_HideAllUI,pAVar18,
                                                               (MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  if (pAVar19->klass == TypeInfo__System__Action) {
                                                    pAVar18 = pAVar19;
                                                  }
                                                  if (pAVar18 != (Action *)0x0)
                                                  goto code_?;
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
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_LeaveEditPlayMode
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  if ((this->fields).enterBuildModeOnceGuard != 0) {
    return;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (((pMVar1 != (MVLocalPlayer *)0x0) &&
      (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) &&
     (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
     this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
    bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    this_01 = (this->fields).mobilePlayModeController;
    if ((this_01 != (TouchPlayModeController *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        this_02 = (this->fields)._EditModeStateMachine_k__BackingField;
        value = (Object *)func_?();
        if (this_02 != (EditorStateMachine *)0x0) {
          FSMEntity::FSMEntity_set_Event((FSMEntity *)this_02,value,(MethodInfo *)0x0);
          (this->fields).enterBuildModeOnceGuard = 1;
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


/* Void MoveToSelectedObject() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_MoveToSelectedObject
               (TouchEditModeController *this,MethodInfo *method)

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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_OnApplicationFocus
               (TouchEditModeController *this,bool focus,MethodInfo *method)

{
  if (focus != 0) {
    (this->fields).focusSuppressInput = 1;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    (this->fields).focusTime = fVar1;
  }
  return;
}


/* Void RegisterPlayModeController(TouchPlayModeController) */

void Assembly-CSharp.dll::TouchEditModeController::
     TouchEditModeController_RegisterPlayModeController
               (TouchEditModeController *this,TouchPlayModeController *mobilePlayModeController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__TouchEditModeController__LeaveEditPlayMode__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).mobilePlayModeController = mobilePlayModeController;
  func_?(&(this->fields).mobilePlayModeController,mobilePlayModeController);
  if (mobilePlayModeController != (TouchPlayModeController *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)mobilePlayModeController,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      pUVar1 = (mobilePlayModeController->fields).OnLeaveEditPlayMode;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__TouchEditModeController__LeaveEditPlayMode__,
                 (MethodInfo *)0x0);
      pUVar1 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar1);
      if (pUVar1 == (UnityAction *)0x0) {
        (mobilePlayModeController->fields).OnLeaveEditPlayMode = (UnityAction *)0x0;
        ppUStack3 = &(mobilePlayModeController->fields).OnLeaveEditPlayMode;
        pUStack4 = (UnityAction *)0x0;
        func_?();
        return;
      }
      pUVar5 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar5 = pUVar1;
      }
      if (pUVar5 != (UnityAction *)0x0) {
        (mobilePlayModeController->fields).OnLeaveEditPlayMode = pUVar5;
        uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar1);
        pUStack4 = (UnityAction *)0x0;
        if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUStack4 = pUVar1;
        }
        if (pUStack4 != (UnityAction *)0x0) {
          ppUStack3 = &(mobilePlayModeController->fields).OnLeaveEditPlayMode;
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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_RegisterShortcuts
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__TouchEditModeController___RegisterShortcuts_b__62_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TouchEditModeController___RegisterShortcuts_b__62_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
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
             MethodInfo__TouchEditModeController___RegisterShortcuts_b__62_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__TouchEditModeController___RegisterShortcuts_b__62_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  return;
}


/* Void Respawn() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Respawn
               (TouchEditModeController *this,MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_KillSelf(this_00,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Set(Boolean) */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Set
               (TouchEditModeController *this,bool snap,MethodInfo *method)

{
  (this->fields).gridSnap = snap;
  return;
}


/* Void SetState(EditorEvent) */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_SetState
               (TouchEditModeController *this,EditorEvent__Enum editorEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  this = (TouchEditModeController *)editorEvent;
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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_SetUIReady
               (TouchEditModeController *this,MethodInfo *method)

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
              (this_01,(Object *)this,MethodInfo__TouchEditModeController__SetUIReady__,
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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Update
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?(auStack_1,0);
  if ((this->fields).focusSuppressInput != 0) {
    iVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                      ((MethodInfo *)0x0);
    if (iVar2 < 1) {
      bVar3 = false;
    }
    else {
      pTVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                         ((Touch *)&stack0xffffff74,0,(MethodInfo *)0x0);
      auStack_1._0_4_ = pTVar4->m_FingerId;
      auStack_1._4_4_ = (pTVar4->m_Position).x;
      auStack_1._8_4_ = (pTVar4->m_Position).y;
      fStack_5 = (pTVar4->m_RawPosition).x;
      fStack_6 = (pTVar4->m_RawPosition).y;
      pFStack_7 = (Func_2_Single_Single_ *)(pTVar4->m_PositionDelta).x;
      fStack_8 = (pTVar4->m_PositionDelta).y;
      pAStack_9 = (Action *)pTVar4->m_TimeDelta;
      iStack_10 = pTVar4->m_TapCount;
      pVStack_11 = (VisualElement *)pTVar4->m_Phase;
      pAStack_12 = (Action_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                    *)pTVar4->m_Type;
      pFStack_13 = (Func_2_UnityEngine_UIElements_VisualElement_UnityEngine_UIElements_Experimental_StyleValues_
                    *)pTVar4->m_Pressure;
      pFStack_14 = (Func_4_UnityEngine_UIElements_Experimental_StyleValues_UnityEngine_UIElements_Experimental_StyleValues_Single_UnityEngine_UIElements_Experimental_StyleValues_
                    *)pTVar4->m_maximumPossiblePressure;
      SStack_15.m_StyleValues = (StyleValueCollection *)pTVar4->m_Radius;
      fStack_16 = pTVar4->m_RadiusVariance;
      SStack_17.m_StyleValues = (StyleValueCollection *)pTVar4->m_AltitudeAngle;
      fStack_18 = pTVar4->m_AzimuthAngle;
      pVVar19 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
               ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__get_owner
                         ((ValueAnimation_1_StyleValues_ *)auStack_1,(MethodInfo *)0x0);
      bVar3 = pVVar19 == (VisualElement *)0x0;
    }
    fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? < fVar20 - (this->fields).focusTime) {
      bVar3 = true;
    }
    if (bVar3) {
      (this->fields).focusSuppressInput = 0;
    }
    else {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
    }
  }
  if ((this->fields)._EditModeStateMachine_k__BackingField != (EditorStateMachine *)0x0) {
    (*(code *)(((this->fields)._EditModeStateMachine_k__BackingField)->klass->vtable).Update.method)
              ();
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar21 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_Deprecated_ToggleHD,(MethodInfo *)0x0);
  if (bVar21 != 0) {
    this_00 = (this->fields).uiStack;
    if (this_00 == (UIStack *)0x0) {
      func_?();
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    bVar21 = UIStack::UIStack_IsStackEmpty(this_00,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
    }
  }
  return;
}


/* Void <RegisterShortcuts>b__62_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::TouchEditModeController::
     TouchEditModeController__RegisterShortcuts_b__62_0
               (TouchEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&MethodInfo__TouchEditModeController__Respawn__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TouchEditModeController__Respawn__,(MethodInfo *)0x0
            );
  if (x != (IShortcutKeyRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0x10);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RegisterShortcuts>b__62_1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::TouchEditModeController::
     TouchEditModeController__RegisterShortcuts_b__62_1
               (TouchEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&MethodInfo__TouchEditModeController__MoveToSelectedObject__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TouchEditModeController__MoveToSelectedObject__,
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


/* TouchEditModeController() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController__ctor
               (TouchEditModeController *this,MethodInfo *method)

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

