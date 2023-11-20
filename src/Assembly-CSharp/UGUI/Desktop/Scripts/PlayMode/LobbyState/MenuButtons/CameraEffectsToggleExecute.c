
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_Awake
               (CameraEffectsToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__CamEffectsUpdate_bool_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__StartSetValue__
                   );
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->gameHasCameraEffects == 0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pTVar1 = (this->fields).toggleStateHandler;
    (this->fields).hasCallbacks = 1;
    if (pTVar1 != (ToggleStateHandler *)0x0) {
      pTVar2 = (pTVar1->fields)._.OnStartSetValue;
      this_00 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
                func_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
      mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
      Func_1_System_Threading_Tasks_VoidTaskResult___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__StartSetValue__
                 ,(MethodInfo *)0x0);
      pTVar2 = (ToggleStateHandlerOnStartSetValue *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pTVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pTVar2 == (ToggleStateHandlerOnStartSetValue *)0x0) {
        (pTVar1->fields)._.OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
code_?:
        func_?(&(pTVar1->fields)._.OnStartSetValue);
        return;
      }
      pTVar3 = (ToggleStateHandlerOnStartSetValue *)0x0;
      if (pTVar2->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
        pTVar3 = pTVar2;
      }
      if (pTVar3 != (ToggleStateHandlerOnStartSetValue *)0x0) {
        (pTVar1->fields)._.OnStartSetValue = pTVar3;
        pTVar3 = (ToggleStateHandlerOnStartSetValue *)0x0;
        if (pTVar2->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
          pTVar3 = pTVar2;
        }
        if (pTVar3 != (ToggleStateHandlerOnStartSetValue *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CamEffectsUpdate(Boolean) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_CamEffectsUpdate
               (CameraEffectsToggleExecute *this,bool obj,MethodInfo *method)

{
  if ((this->fields).ignoreCamEffectCallback != 0) {
    return;
  }
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
    }
    (pTVar1->fields)._.toggleState = obj;
    (*(code *)(pTVar1->klass->vtable).UpdateToggleState.method)();
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_ExecuteToggleState
               (CameraEffectsToggleExecute *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Enable_Camera_Effects);
    func_?(&StringLiteral_Disable_Camera_Effects);
    cRam_? = '\x01';
  }
  (this->fields).ignoreCamEffectCallback = 1;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CameraEffects(this_01,toggleState,(MethodInfo *)0x0);
    this_00 = (this->fields).toolTip;
    textToBeChanged = StringLiteral_Enable_Camera_Effects;
    if (toggleState != 0) {
      textToBeChanged = StringLiteral_Disable_Camera_Effects;
    }
    if (this_00 != (ToolTip *)0x0) {
      ToolTip::ToolTip_SetText(this_00,textToBeChanged,(MethodInfo *)0x0);
      if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
        (*(toggleCallback->fields)._._.invoke_impl)();
        (this->fields).ignoreCamEffectCallback = 0;
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_OnDestroy
               (CameraEffectsToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__CamEffectsUpdate_bool_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__StartSetValue__
                   );
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    cRam_? = '\x01';
  }
  if ((this->fields).hasCallbacks == 0) {
    return;
  }
  pTVar1 = (this->fields).toggleStateHandler;
  if (pTVar1 != (ToggleStateHandler *)0x0) {
    pTVar2 = (pTVar1->fields)._.OnStartSetValue;
    this_00 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
              func_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
    mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
    Func_1_System_Threading_Tasks_VoidTaskResult___ctor
              (this_00,(Object *)0x0,
               MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__StartSetValue__
               ,(MethodInfo *)0x0);
    pTVar2 = (ToggleStateHandlerOnStartSetValue *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pTVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pTVar2 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar1->fields)._.OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
code_?:
      func_?(&(pTVar1->fields)._.OnStartSetValue);
      return;
    }
    pTVar3 = (ToggleStateHandlerOnStartSetValue *)0x0;
    if (pTVar2->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
      pTVar3 = pTVar2;
    }
    if (pTVar3 != (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar1->fields)._.OnStartSetValue = pTVar3;
      pTVar3 = (ToggleStateHandlerOnStartSetValue *)0x0;
      if (pTVar2->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
        pTVar3 = pTVar2;
      }
      if (pTVar3 != (ToggleStateHandlerOnStartSetValue *)0x0) goto code_?;
    }
    func_?();
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

