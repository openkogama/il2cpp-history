
/* Void Awake() */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_Awake
               (FullscreenToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    func_?(&MethodInfo__FullscreenToggleExecute__FullscreenChanged_bool_);
    func_?(&MethodInfo__FullscreenToggleExecute__StartSetValue__);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  pUVar1 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
  this_00 = (UnityAction_1_System_ByteEnum_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
  if (this_00 == (UnityAction_1_System_ByteEnum_ *)0x0) {
code_?:
    func_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_00,(Object *)this,MethodInfo__FullscreenToggleExecute__FullscreenChanged_bool_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      TypeInfo__FullScreenController->static_fields->OnFullScreenChange =
           (UnityAction_1_System_Boolean_ *)0x0;
    }
    else {
      pUVar1 = (UnityAction_1_System_Boolean_ *)func_?();
      if (pUVar1 == (UnityAction_1_System_Boolean_ *)0x0) goto code_?;
      TypeInfo__FullScreenController->static_fields->OnFullScreenChange = pUVar1;
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    func_?();
    pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar4 == (IAdManager *)0x0) goto code_?;
    cVar5 = func_?(10,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar4);
    if (cVar5 != '\0') {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
    }
    pTVar6 = (this->fields).toggleStateHandler;
    if (pTVar6 == (ToggleStateHandler *)0x0) goto code_?;
    pTVar7 = (pTVar6->fields)._.OnStartSetValue;
    this_02 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
              func_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
    if (this_02 == (Func_1_System_Threading_Tasks_VoidTaskResult_ *)0x0) goto code_?;
    mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
    Func_1_System_Threading_Tasks_VoidTaskResult___ctor
              (this_02,(Object *)this,MethodInfo__FullscreenToggleExecute__StartSetValue__,
               (MethodInfo *)0x0);
    pTVar7 = (ToggleStateHandlerOnStartSetValue *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pTVar7,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pTVar7 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar6->fields)._.OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
      func_?();
      return;
    }
    pTVar8 = (ToggleStateHandlerOnStartSetValue *)0x0;
    if (pTVar7->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
      pTVar8 = pTVar7;
    }
    if (pTVar8 != (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar6->fields)._.OnStartSetValue = pTVar8;
      pTVar8 = (ToggleStateHandlerOnStartSetValue *)0x0;
      if (pTVar7->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
        pTVar8 = pTVar7;
      }
      if (pTVar8 != (ToggleStateHandlerOnStartSetValue *)0x0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_ExecuteToggleState
               (FullscreenToggleExecute *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__FullScreenController);
    func_?(&
                    MethodInfo__FullscreenToggleExecute____c___ExecuteToggleState_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FullscreenToggleExecute____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  bVar1 = FullScreenController::FullScreenController_AllowFullscreenChange((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
      (*(toggleCallback->fields)._._.invoke_impl)
                ((toggleCallback->fields)._._.method_code,toggleState ^ 1,
                 (toggleCallback->fields)._._.method);
      if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__FullScreenController);
      }
      FullScreenController::FullScreenController_set_FullScreen(toggleState,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__FullscreenToggleExecute____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullscreenToggleExecute____c);
  }
  callbackFunction = TypeInfo__FullscreenToggleExecute____c->static_fields->__9__3_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__FullscreenToggleExecute____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullscreenToggleExecute____c);
    }
    object = TypeInfo__FullscreenToggleExecute____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__FullscreenToggleExecute____c___ExecuteToggleState_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__FullscreenToggleExecute____c->static_fields->__9__3_0 = callbackFunction;
    func_?(&TypeInfo__FullscreenToggleExecute____c->static_fields->__9__3_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void FullscreenChanged(Boolean) */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_FullscreenChanged
               (FullscreenToggleExecute *this,bool fullscreenState,MethodInfo *method)

{
  pTVar1 = (this->fields).toggleStateHandler;
  if (pTVar1 != (ToggleStateHandler *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if ((pTVar1->fields)._.waitingForToggleCallback != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
    }
    (pTVar1->fields)._.toggleState = fullscreenState;
    (*(pTVar1->klass->vtable).UpdateToggleState.methodPtr)();
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean StartSetValue() */

bool Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_StartSetValue
               (FullscreenToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  bVar1 = FullScreenController::FullScreenController_get_FullScreen((MethodInfo *)0x0);
  return bVar1;
}

