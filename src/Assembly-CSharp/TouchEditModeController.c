
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
    this_00 = (Stack_1_System_Int32Enum_ *)(this_01->fields)._.stateStack;
    if (this_00 != (Stack_1_System_Int32Enum_ *)0x0) {
      if (0 < (this_00->fields)._size) {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32Enum]::
        Stack_1_System_Int32Enum__Pop
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
  value = (Object *)func_?(TypeInfo__TouchEditModeController____c__DisplayClass64_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
    if (this_00 != (EditorStateMachine *)0x0) {
      EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
      value[1].klass = (Object__Class *)::StringLiteral__;
      func_?(value + 1,::StringLiteral__);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,woid,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          cVar3 = (**(code **)&pMVar2->klass[2]._0.byval_arg.attrs)
                            (pMVar2,pMVar1,value + 1,pMVar2->klass[2]._0.this_arg.data.dummy);
          if (cVar3 != '\0') {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__TouchEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__TouchEditModeController____c);
            }
            callbackFunction = TypeInfo__TouchEditModeController____c->static_fields->__9__64_1;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__TouchEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__TouchEditModeController____c);
              }
              object = TypeInfo__TouchEditModeController____c->static_fields->__9;
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
              goto code_?;
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
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
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
          if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                       MethodInfo__TouchEditModeController____c__DisplayClass64_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
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
  }
code_?:
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
    func_?(&TypeInfo__TouchEditModeController___HandleCursorVisible_d__55);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__TouchEditModeController___HandleCursorVisible_d__55);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    if ((this->fields).editModeChange != (Action_1_EditModeChangeArgs_ *)0x0) {
      (*(((this->fields).editModeChange)->fields)._._.invoke_impl)();
    }
    (this->fields).enterPlayModeOnceGuard = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  value = (Object *)func_?(TypeInfo__TouchEditModeController___HandleCursorVisible_d__55);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void HandleFocusInputSupress() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_HandleFocusInputSupress
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  func_?(&OStack_1,0,0x44);
  if ((this->fields).focusSuppressInput != 0) {
    iVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                      ((MethodInfo *)0x0);
    if (iVar2 < 1) {
      bVar3 = false;
    }
    else {
      pTVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                         ((Touch *)&stack0xffffff74,0,(MethodInfo *)0x0);
      OStack_1.klass = (ObjectPool_1_System_Object___Class *)pTVar4->m_FingerId;
      OStack_1.monitor = (MonitorData *)(pTVar4->m_Position).x;
      OStack_1.fields.m_Stack = (Stack_1_System_Object_ *)(pTVar4->m_Position).y;
      OStack_1.fields.m_CreateFunc = (Func_1_Object_ *)(pTVar4->m_RawPosition).x;
      OStack_1.fields.m_ActionOnGet = (Action_1_Object_ *)(pTVar4->m_RawPosition).y;
      OStack_1.fields.m_ActionOnRelease = (Action_1_Object_ *)(pTVar4->m_PositionDelta).x;
      OStack_1.fields.m_ActionOnDestroy = (Action_1_Object_ *)(pTVar4->m_PositionDelta).y;
      OStack_1.fields.m_MaxSize = (int32_t)pTVar4->m_TimeDelta;
      OStack_1.fields._24_4_ = pTVar4->m_TapCount;
      OStack_1.fields._CountAll_k__BackingField = pTVar4->m_Phase;
      iStack_5 = pTVar4->m_Type;
      fStack_6 = pTVar4->m_Pressure;
      fStack_7 = pTVar4->m_maximumPossiblePressure;
      fStack_8 = pTVar4->m_Radius;
      fStack_9 = pTVar4->m_RadiusVariance;
      fStack_10 = pTVar4->m_AltitudeAngle;
      fStack_11 = pTVar4->m_AzimuthAngle;
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Pool::ObjectPool`1[System::Object]::
              ObjectPool_1_System_Object__get_CountAll(&OStack_1,(MethodInfo *)0x0);
      bVar3 = iVar2 == 0;
    }
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? < fVar12 - (this->fields).focusTime) {
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
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pCVar5 = (this->fields).contextMenuController;
      pGVar6 = (this->fields).gizmoController;
      pEVar7 = (EditorStateMachine *)func_?();
      if (pEVar7 != (EditorStateMachine *)0x0) {
        EditorStateMachine::EditorStateMachine__ctor_2
                  (pEVar7,pGVar4,pCVar5,pGVar6,(MethodInfo *)0x0);
        (this->fields)._EditModeStateMachine_k__BackingField = pEVar7;
        func_?(&(this->fields)._EditModeStateMachine_k__BackingField,pEVar7);
        this_00 = (this->fields).editorWorldObjectCreation;
        if (this_00 != (EditorWorldObjectCreation *)0x0) {
          EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
                    (this_00,(this->fields)._EditModeStateMachine_k__BackingField,(MethodInfo *)0x0)
          ;
          pEVar7 = (this->fields)._EditModeStateMachine_k__BackingField;
          if ((pEVar7 != (EditorStateMachine *)0x0) &&
             (pMVar8 = (this->fields).materialsController,
             pMVar8 != (MaterialsControllerEditMode *)0x0)) {
            MaterialsController::MaterialsController_Initialize
                      ((MaterialsController *)pMVar8,(pEVar7->fields).cubeModelingStateMachine,
                       (MethodInfo *)0x0);
            pMVar8 = (this->fields).materialsController;
            this_01 = (this->fields).uiStack;
            if (pMVar8 != (MaterialsControllerEditMode *)0x0) {
              this_08 = (Component *)
                        (*(pMVar8->klass->vtable).SetActive.methodPtr)
                                  (pMVar8,(pMVar8->klass->vtable).SetActive.method);
              if (this_08 != (Component *)0x0) {
                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject(this_08,(MethodInfo *)0x0);
                if (this_01 != (UIStack *)0x0) {
                  UIStack::UIStack_Push
                            (this_01,pGVar4,UIPushOption__Enum_None,(UnityAction *)0x0,
                             UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
                  pEVar7 = (this->fields)._EditModeStateMachine_k__BackingField;
                  if ((pEVar7 != (EditorStateMachine *)0x0) &&
                     (pCVar9 = (pEVar7->fields).cubeModelingStateMachine,
                     pCVar9 != (CubeModelingStateMachine *)0x0)) {
                    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                              (pCVar9,0x15,(MethodInfo *)0x0);
                    this_02 = (this->fields).chatController;
                    if (this_02 != (ChatControllerUGUI *)0x0) {
                      ChatControllerUGUI::ChatControllerUGUI_Initialize(this_02,(MethodInfo *)0x0);
                      pCVar5 = (this->fields).contextMenuController;
                      if (pCVar5 != (ContextMenuController *)0x0) {
                        ContextMenuController::ContextMenuController_Initialize
                                  (pCVar5,(this->fields)._EditModeStateMachine_k__BackingField,
                                   (MethodInfo *)0x0);
                        pGVar6 = (this->fields).gizmoController;
                        if (pGVar6 != (GizmoController *)0x0) {
                          GizmoController::GizmoController_Initialize
                                    (pGVar6,(this->fields)._EditModeStateMachine_k__BackingField,
                                     (MethodInfo *)0x0);
                          this_09 = (TouchInputMap *)func_?(TypeInfo__TouchInputMap);
                          if (this_09 != (TouchInputMap *)0x0) {
                            TouchInputMap::TouchInputMap__ctor(this_09,(MethodInfo *)0x0);
                            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pTStack_10 = this_09;
                            func_?();
                            pEVar7 = (this->fields)._EditModeStateMachine_k__BackingField;
                            pTStack_10 = (TouchInputMap *)0x2f;
                            value = (Object *)func_?(TypeInfo__EditorEvent,&pTStack_10);
                            if (pEVar7 != (EditorStateMachine *)0x0) {
                              FSMEntity::FSMEntity_set_Event
                                        ((FSMEntity *)pEVar7,value,(MethodInfo *)0x0);
                              this_03 = (this->fields).clientShopController;
                              if (this_03 != (EditModeClientShopController *)0x0) {
                                EditModeClientShopController::
                                EditModeClientShopController_Initialize
                                          (this_03,(this->fields).repositoryController,
                                           (MethodInfo *)0x0);
                                this_04 = (this->fields).playerInventoryController;
                                if (this_04 != (PlayerInventoryController *)0x0) {
                                  PlayerInventoryController::PlayerInventoryController_Initialize
                                            (this_04,(MethodInfo *)0x0);
                                  pTVar11 = (this->fields).mobilePlayModeController;
                                  if (pTVar11 != (TouchPlayModeController *)0x0) {
                                    (*(pTVar11->klass->vtable).Initialize.methodPtr)
                                              (pTVar11,(pTVar11->klass->vtable).Initialize.method);
                                    this_10 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                        ((MethodInfo *)0x0);
                                    if (this_10 != (MVWorldObjectClientManager *)0x0) {
                                      pMVar12 = MVWorldObjectClientManager::
                                                MVWorldObjectClientManager_get_RootGroup
                                                          (this_10,(MethodInfo *)0x0);
                                      if (pMVar12 != (MVGroup *)0x0) {
                                        (*(pMVar12->klass->vtable).PlayModeInitialize.methodPtr)
                                                  (pMVar12,(pMVar12->klass->vtable).
                                                           PlayModeInitialize.method);
                                        this_05 = (this->fields).goldPurchasedTracker;
                                        if (this_05 != (GoldPurchasedTracker *)0x0) {
                                          GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                                    (this_05,(MethodInfo *)0x0);
                                          pGVar4 = (this->fields).stackBottom;
                                          pRVar13 = (this->fields).notificationsManager;
                                          if (pGVar4 != (GameObject *)0x0) {
                                            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                     GameObject::GameObject_get_transform
                                                               (pGVar4,(MethodInfo *)0x0);
                                            pRVar13 = (RectTransform *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Object::Object_1_Instantiate_6
                                                                ((Object *)pRVar13,pTVar3,0,
                                                                                                                                  
                                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                                  );
                                            (this->fields).notificationsManager = pRVar13;
                                            func_?(&(this->fields).notificationsManager,
                                                            pRVar13);
                                            pEVar7 = (this->fields).
                                                      _EditModeStateMachine_k__BackingField;
                                            if ((pEVar7 != (EditorStateMachine *)0x0) &&
                                               (this_06 = (this->fields).
                                                          firstTimeSetupTerrainEditTutorial,
                                               this_06 != (FirstTimeSetupTerrainEditTutorial *)0x0))
                                            {
                                              FirstTimeSetupTerrainEditTutorial::
                                              FirstTimeSetupTerrainEditTutorial_Initialize
                                                        (this_06,(pEVar7->fields).
                                                                 cubeModelingStateMachine,
                                                         (MaterialsController *)
                                                         (this->fields).materialsController,
                                                         (MethodInfo *)0x0);
                                              pEVar7 = (this->fields).
                                                        _EditModeStateMachine_k__BackingField;
                                              if ((pEVar7 != (EditorStateMachine *)0x0) &&
                                                 (pSVar14 = (this->fields).setupCubeModelTutorialUI,
                                                 pSVar14 != (SetupCubeModelTutorialUI *)0x0)) {
                                                pCVar9 = (pEVar7->fields).cubeModelingStateMachine;
                                                (pSVar14->fields).cubeModelingStateMachine = pCVar9;
                                                func_?(&(pSVar14->fields).
                                                                 cubeModelingStateMachine,pCVar9);
                                                if ((TypeInfo__ChatCommandManager->_1).
                                                    cctor_finished_or_no_cctor == 0) {
                                                  func_?(TypeInfo__ChatCommandManager);
                                                }
                                                pAVar15 = ChatCommandManager::
                                                          ChatCommandManager_GetChatCommandCallback
                                                                    (ChatCommand__Enum_HideAllUI,
                                                                     (MethodInfo *)0x0);
                                                this_11 = (NavMesh_OnNavMeshPreUpdate *)
                                                          func_?(TypeInfo__System__Action);
                                                if (this_11 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                                                  UnityEngine.AIModule.dll::UnityEngine::AI::
                                                  NavMesh+OnNavMeshPreUpdate::
                                                  NavMesh_OnNavMeshPreUpdate__ctor
                                                            (this_11,(Object *)this,
                                                                                                                          
                                                  MethodInfo__TouchEditModeController__HideUI__,
                                                  (MethodInfo *)0x0);
                                                  pAVar16 = (Action *)
                                                            mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pAVar15,
                                                                             (Delegate *)this_11,
                                                                             (MethodInfo *)0x0);
                                                  pAVar15 = (Action *)0x0;
                                                  if (pAVar16 == (Action *)0x0) {
code_?:
                                                    ChatCommandManager::
                                                    ChatCommandManager_UpdateChatCommandCallback
                                                              (ChatCommand__Enum_HideAllUI,pAVar15,
                                                               (MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  if (pAVar16->klass == TypeInfo__System__Action) {
                                                    pAVar15 = pAVar16;
                                                  }
                                                  if (pAVar15 != (Action *)0x0)
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
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
      (*(pMVar2->klass->vtable).FocusOnObject.methodPtr)(pMVar2,pMVar1,0x40000000,0,0,0);
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
      if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
  }
  uVar2 = func_?();
code_?:
  _ppUStack00000014 = uVar2;
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
  if (pEVar2 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
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
    if (pEVar2 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)this,
                 MethodInfo__TouchEditModeController___RegisterShortcuts_b__61_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    GoogleMobileAds.dll::GoogleMobileAds::Api::BannerView::BannerView__ConfigureBannerEvents_m__7
              ((BannerView *)this_00,(MethodInfo *)0x0);
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
    if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
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
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ToggleHD() */

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_ToggleHD
               (TouchEditModeController *this,MethodInfo *method)

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

void Assembly-CSharp.dll::TouchEditModeController::TouchEditModeController_Update
               (TouchEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?(&OStack_1,0);
  if ((this->fields).focusSuppressInput != 0) {
    iVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                      ((MethodInfo *)0x0);
    if (iVar2 < 1) {
      bVar3 = false;
    }
    else {
      pTVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetTouch
                         ((Touch *)&stack0xffffff74,0,(MethodInfo *)0x0);
      OStack_1.klass = (ObjectPool_1_System_Object___Class *)pTVar4->m_FingerId;
      OStack_1.monitor = (MonitorData *)(pTVar4->m_Position).x;
      OStack_1.fields.m_Stack = (Stack_1_System_Object_ *)(pTVar4->m_Position).y;
      OStack_1.fields.m_CreateFunc = (Func_1_Object_ *)(pTVar4->m_RawPosition).x;
      OStack_1.fields.m_ActionOnGet = (Action_1_Object_ *)(pTVar4->m_RawPosition).y;
      OStack_1.fields.m_ActionOnRelease = (Action_1_Object_ *)(pTVar4->m_PositionDelta).x;
      OStack_1.fields.m_ActionOnDestroy = (Action_1_Object_ *)(pTVar4->m_PositionDelta).y;
      OStack_1.fields.m_MaxSize = (int32_t)pTVar4->m_TimeDelta;
      OStack_1.fields._24_4_ = pTVar4->m_TapCount;
      OStack_1.fields._CountAll_k__BackingField = pTVar4->m_Phase;
      iStack_5 = pTVar4->m_Type;
      fStack_6 = pTVar4->m_Pressure;
      fStack_7 = pTVar4->m_maximumPossiblePressure;
      fStack_8 = pTVar4->m_Radius;
      fStack_9 = pTVar4->m_RadiusVariance;
      fStack_10 = pTVar4->m_AltitudeAngle;
      fStack_11 = pTVar4->m_AzimuthAngle;
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Pool::ObjectPool`1[System::Object]::
              ObjectPool_1_System_Object__get_CountAll(&OStack_1,(MethodInfo *)0x0);
      bVar3 = iVar2 == 0;
    }
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? < fVar12 - (this->fields).focusTime) {
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
    (*(((this->fields)._EditModeStateMachine_k__BackingField)->klass->vtable).Update.methodPtr)();
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar13 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_ToggleHD,(MethodInfo *)0x0);
  if (bVar13 != 0) {
    this_00 = (this->fields).uiStack;
    if (this_00 == (UIStack *)0x0) {
      func_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    bVar13 = UIStack::UIStack_IsStackEmpty(this_00,(MethodInfo *)0x0);
    if (bVar13 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar2 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
      if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar2 == 0),(MethodInfo *)0x0);
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
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__TouchEditModeController__Respawn__,
               (MethodInfo *)0x0);
    if (x != (IShortcutKeyRegister *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0x10);
      return;
    }
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
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__TouchEditModeController__MoveToSelectedObject__,
               (MethodInfo *)0x0);
    if (x != (IShortcutKeyRegister *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0x15);
      return;
    }
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

