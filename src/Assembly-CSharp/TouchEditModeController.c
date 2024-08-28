
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
                    MethodInfo__TouchEditModeController____c___DeleteWoid_b__64_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TouchEditModeController____c__DisplayClass64_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TouchEditModeController____c__DisplayClass64_0);
    func_?(&TypeInfo__TouchEditModeController____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouchEditModeController____c__DisplayClass64_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_00 != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
    if (value != (Object *)0x0) {
      pOVar1 = value + 1;
      pOVar1->klass = (Object__Class *)::StringLiteral__;
      func_?(pOVar1,::StringLiteral__);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,woid,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          cVar3 = (*(code *)pMVar2->klass[2]._0.element_class)
                            (pMVar2,pMVar2->klass[2]._0.castClass,pOVar1);
          if (cVar3 != '\0') {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__TouchEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction = TypeInfo__TouchEditModeController____c->static_fields->__9__64_1;
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
                         MethodInfo__TouchEditModeController____c___DeleteWoid_b__64_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__TouchEditModeController____c->static_fields->__9__64_1 = callbackFunction;
              func_?(&TypeInfo__TouchEditModeController____c->static_fields->__9__64_1,
                              callbackFunction);
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
                     MethodInfo__TouchEditModeController____c__DisplayClass64_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_EnterBuildMode
               (TouchEditModeController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isInPlayInEditMode = 0;
  if (bVar1) {
    func_?(&TypeInfo__TouchEditModeController___HandleCursorVisible_d__55);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouchEditModeController___HandleCursorVisible_d__55;
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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_EnterPlayMode
               (TouchEditModeController *this,MethodInfo *method)

{
  pTVar1 = this;
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
    pEVar2 = (pTVar1->fields)._EditModeStateMachine_k__BackingField;
    this = (TouchEditModeController *)0x3a;
    value = (Object *)func_?(TypeInfo__EditorEvent,&this);
    if (pEVar2 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar2,value,(MethodInfo *)0x0);
      (pTVar1->fields).enterPlayModeOnceGuard = 1;
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
Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_HandleCursorVisible
          (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TouchEditModeController___HandleCursorVisible_d__55);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TouchEditModeController___HandleCursorVisible_d__55;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  this_07 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_07 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered(this_07,1,(MethodInfo *)0x0);
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
      this_08 = (EditorStateMachine *)func_?();
      EditorStateMachine::EditorStateMachine__ctor_2
                (this_08,(GameObject *)pCVar4,pCVar4,gizmoController,(MethodInfo *)0x0);
      puVar5 = &(object->_1).instance_size;
      *puVar5 = (uint32_t)this_08;
      func_?();
      this_00 = *(EditorWorldObjectCreation **)&(object->_0).this_arg.attrs;
      if (this_00 != (EditorWorldObjectCreation *)0x0) {
        EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
                  (this_00,(EditorStateMachine *)*puVar5,(MethodInfo *)0x0);
        if ((*puVar5 != 0) &&
           (this_01 = (MaterialsController *)(object->_0).typeMetadataHandle,
           this_01 != (MaterialsController *)0x0)) {
          MaterialsController::MaterialsController_Initialize
                    (this_01,*(CubeModelingStateMachine **)(*puVar5 + 0x38),(MethodInfo *)0x0);
          p_Var5 = (object->_0).typeMetadataHandle;
          pIVar6 = (object->_0).element_class;
          if (p_Var5 != (Il2CppMetadataTypeHandle)0x0) {
            this_09 = (Component *)
                      (**(code **)(*(int *)p_Var5 + 0xf8))
                                (p_Var5,*(undefined4 *)(*(int *)p_Var5 + 0xfc));
            if (this_09 != (Component *)0x0) {
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_09,(MethodInfo *)0x0);
              if (pIVar6 != (Il2CppClass *)0x0) {
                UIStack::UIStack_Push
                          ((UIStack *)pIVar6,pGVar7,UIPushOption__Enum_None,(UnityAction *)0x0,
                           UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
                if ((*puVar5 != 0) &&
                   (this_02 = *(CubeModelingStateMachine **)(*puVar5 + 0x38),
                   this_02 != (CubeModelingStateMachine *)0x0)) {
                  CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                            (this_02,0x15,(MethodInfo *)0x0);
                  pIVar6 = (object->_0).declaringType;
                  original = (object->_0).castClass;
                  if (pIVar6 != (Il2CppClass *)0x0) {
                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform((GameObject *)pIVar6,(MethodInfo *)0x0);
                    pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_6
                                        ((Object *)original,pTVar3,0,
                                         InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                                        );
                    pp_Var1 = &(object->_1).genericContainerHandle;
                    *pp_Var1 = (Il2CppMetadataGenericContainerHandle)pOVar8;
                    func_?(pp_Var1,pOVar8);
                    if ((Component *)*pp_Var1 != (Component *)0x0) {
                      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)*pp_Var1,(MethodInfo *)0x0);
                      if (pGVar7 != (GameObject *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar7,0,(MethodInfo *)0x0);
                        if ((InEditMenu *)*pp_Var1 != (InEditMenu *)0x0) {
                          InEditMenu::InEditMenu_Initialize
                                    ((InEditMenu *)*pp_Var1,(MethodInfo *)0x0);
                          pIVar6 = (object->_0).parent;
                          if (pIVar6 != (Il2CppClass *)0x0) {
                            ChatControllerUGUI::ChatControllerUGUI_Initialize
                                      ((ChatControllerUGUI *)pIVar6,(MethodInfo *)0x0);
                            pCVar4 = (ContextMenuController *)(object->_0).interopData;
                            if (pCVar4 != (ContextMenuController *)0x0) {
                              ContextMenuController::ContextMenuController_Initialize
                                        (pCVar4,(EditorStateMachine *)*puVar5,(MethodInfo *)0x0);
                              pIVar6 = (object->_0).klass;
                              if (pIVar6 != (Il2CppClass *)0x0) {
                                GizmoController::GizmoController_Initialize
                                          ((GizmoController *)pIVar6,(EditorStateMachine *)*puVar5,
                                           (MethodInfo *)0x0);
                                this_10 = (TouchInputMap *)func_?(TypeInfo__TouchInputMap);
                                TouchInputMap::TouchInputMap__ctor(this_10,(MethodInfo *)0x0);
                                if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0)
                                {
                                  func_?();
                                }
                                func_?();
                                this_03 = (FSMEntity *)*puVar5;
                                pOVar8 = (Object *)func_?();
                                if (this_03 != (FSMEntity *)0x0) {
                                  FSMEntity::FSMEntity_set_Event(this_03,pOVar8,(MethodInfo *)0x0);
                                  this_04 = (EditModeClientShopController *)(object->_0).events;
                                  if (this_04 != (EditModeClientShopController *)0x0) {
                                    EditModeClientShopController::
                                    EditModeClientShopController_Initialize
                                              (this_04,(EditModeRepositoryController *)
                                                       (object->_0).fields,(MethodInfo *)0x0);
                                    this_05 = (PlayerInventoryController *)(object->_0).properties;
                                    if (this_05 != (PlayerInventoryController *)0x0) {
                                      PlayerInventoryController::
                                      PlayerInventoryController_Initialize
                                                (this_05,(MethodInfo *)0x0);
                                      piVar9 = (int *)(object->_1).cctor_thread;
                                      if (piVar9 != (int *)0x0) {
                                        (**(code **)(*piVar9 + 0x140))
                                                  (piVar9,*(undefined4 *)(*piVar9 + 0x144));
                                        this_11 = MVGameControllerBase::
                                                  MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                        if (this_11 != (MVWorldObjectClientManager *)0x0) {
                                          pMVar10 = MVWorldObjectClientManager::
                                                    MVWorldObjectClientManager_get_RootGroup
                                                              (this_11,(MethodInfo *)0x0);
                                          if (pMVar10 != (MVGroup *)0x0) {
                                            (*(code *)(pMVar10->klass->vtable).PlayModeInitialize.
                                                      method)(pMVar10,(pMVar10->klass->vtable).
                                                                      SetupTierInventory.methodPtr);
                                            this_06 = (object->_1).unity_user_data;
                                            if (this_06 != (GoldPurchasedTracker *)0x0) {
                                              GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                                        (this_06,(MethodInfo *)0x0);
                                              pOVar8 = (Object *)(object->_0).nestedTypes;
                                              pppIVar11 = &(object->_0).nestedTypes;
                                              pIVar6 = (object->_0).declaringType;
                                              if (pIVar6 != (Il2CppClass *)0x0) {
                                                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                         GameObject::GameObject_get_transform
                                                                   ((GameObject *)pIVar6,
                                                                    (MethodInfo *)0x0);
                                                pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Object::Object_1_Instantiate_6
                                                                    (pOVar8,pTVar3,0,
                                                                                                                                          
                                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                                  );
                                                *pppIVar11 = (Il2CppClass **)pOVar8;
                                                func_?(pppIVar11,pOVar8);
                                                if ((*puVar5 != 0) &&
                                                   (object->rgctx_data != (Il2CppRGCTXData *)0x0)) {
                                                  FirstTimeSetupTerrainEditTutorial::
                                                  FirstTimeSetupTerrainEditTutorial_Initialize
                                                            ((FirstTimeSetupTerrainEditTutorial *)
                                                             object->rgctx_data,
                                                             *(CubeModelingStateMachine **)
                                                              (*puVar5 + 0x38),
                                                             (MaterialsController *)
                                                             (object->_0).typeMetadataHandle,
                                                             (MethodInfo *)0x0);
                                                  if ((*puVar5 != 0) &&
                                                     (ppIVar12 = (object->_1).typeHierarchy,
                                                     ppIVar12 != (Il2CppClass **)0x0)) {
                                                    pIVar6 = *(Il2CppClass **)(*puVar5 + 0x38);
                                                    ppIVar12 = ppIVar12 + 4;
                                                    *ppIVar12 = pIVar6;
                                                    func_?(ppIVar12,pIVar6);
                                                    if ((TypeInfo__ChatCommandManager->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__ChatCommandManager);
                                                    }
                                                    pAVar13 = ChatCommandManager::
                                                                                                                            
                                                  ChatCommandManager_GetChatCommandCallback
                                                            (ChatCommand__Enum_HideAllUI,
                                                             (MethodInfo *)0x0);
                                                  this_12 = (NavMesh_OnNavMeshPreUpdate *)
                                                            func_?(TypeInfo__System__Action
                                                                           );
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (this_12,(Object *)object,
                                                                                                                          
                                                  MethodInfo__TouchEditModeController__HideUI__,
                                                  (MethodInfo *)0x0);
                                                  pAVar14 = (Action *)
                                                            mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pAVar13,
                                                                             (Delegate *)this_12,
                                                                             (MethodInfo *)0x0);
                                                  pAVar13 = (Action *)0x0;
                                                  if (pAVar14 == (Action *)0x0) {
code_?:
                                                    ChatCommandManager::
                                                    ChatCommandManager_UpdateChatCommandCallback
                                                              (ChatCommand__Enum_HideAllUI,pAVar13,
                                                               (MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  if (pAVar14->klass == TypeInfo__System__Action) {
                                                    pAVar13 = pAVar14;
                                                  }
                                                  if (pAVar13 != (Action *)0x0)
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  ppTVar1 = &(this->fields).mobilePlayModeController;
  *ppTVar1 = mobilePlayModeController;
  func_?(ppTVar1,mobilePlayModeController);
  if (mobilePlayModeController != (TouchPlayModeController *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)mobilePlayModeController,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      pUVar2 = (mobilePlayModeController->fields).OnLeaveEditPlayMode;
      ppUVar3 = &(mobilePlayModeController->fields).OnLeaveEditPlayMode;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__TouchEditModeController__LeaveEditPlayMode__,
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
                    MethodInfo__TouchEditModeController___RegisterShortcuts_b__61_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TouchEditModeController___RegisterShortcuts_b__61_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__TouchEditModeController___RegisterShortcuts_b__61_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__TouchEditModeController___RegisterShortcuts_b__61_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
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
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::MultiColumnController::
    MultiColumnController_OnColumnSortingChanged((MultiColumnController *)this_00,(MethodInfo *)0x0)
    ;
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  pEVar21 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar21 != (EditorStateMachine *)0x0) {
    (*(code *)(pEVar21->klass->vtable).Update.method)();
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_Deprecated_ToggleHD,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    this_00 = (this->fields).uiStack;
    if (this_00 == (UIStack *)0x0) {
      func_?();
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    bVar22 = UIStack::UIStack_IsStackEmpty(this_00,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
    }
  }
  return;
}


/* Void <RegisterShortcuts>b__61_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::TouchEditModeController::
     TouchEditModeController__RegisterShortcuts_b__61_0
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


/* Void <RegisterShortcuts>b__61_1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::TouchEditModeController::
     TouchEditModeController__RegisterShortcuts_b__61_1
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


/* Boolean get_IsInPlayInEditMode() */

bool Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_get_IsInPlayInEditMode
               (TouchEditModeController *this,MethodInfo *method)

{
  return (this->fields).isInPlayInEditMode;
}

