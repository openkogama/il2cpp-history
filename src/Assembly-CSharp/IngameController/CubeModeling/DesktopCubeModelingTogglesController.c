
/* Void Awake() */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_Awake
               (DesktopCubeModelingTogglesController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&
                    MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__CamEffectsUpdate_bool_
                   );
    func_?(&
                    MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__OnGameCameraEffectsChange_bool_
                   );
    func_?(&
                    MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__StartSetValue__
                   );
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggleCameraEffects;
  if ((pTVar1 == (ToggleCameraEffects *)0x0) ||
     (pTVar2 = (pTVar1->fields).toggleStatHandlerBase, pTVar2 == (ToggleStatHandlerBase *)0x0)) {
    func_?();
    func_?();
  }
  else {
    pTVar3 = (pTVar2->fields).OnStartSetValue;
    this_00 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
              func_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
    mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
    Func_1_System_Threading_Tasks_VoidTaskResult___ctor
              (this_00,(Object *)this,
               MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__StartSetValue__
               ,(MethodInfo *)0x0);
    pTVar3 = (ToggleStateHandlerOnStartSetValue *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pTVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pTVar3 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar2->fields).OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
code_?:
      func_?(&(pTVar2->fields).OnStartSetValue);
      return;
    }
    pTVar4 = (ToggleStateHandlerOnStartSetValue *)0x0;
    if (pTVar3->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
      pTVar4 = pTVar3;
    }
    if (pTVar4 != (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar2->fields).OnStartSetValue = pTVar4;
      pTVar4 = (ToggleStateHandlerOnStartSetValue *)0x0;
      if (pTVar3->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
        pTVar4 = pTVar3;
      }
      if (pTVar4 != (ToggleStateHandlerOnStartSetValue *)0x0) goto code_?;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CamEffectsUpdate(Boolean) */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_CamEffectsUpdate
               (DesktopCubeModelingTogglesController *this,bool obj,MethodInfo *method)

{
  pTVar1 = (this->fields).toggleCameraEffects;
  if (pTVar1 != (ToggleCameraEffects *)0x0) {
    if ((pTVar1->fields).ignoreCamEffectCallback == 0) {
      this_00 = (pTVar1->fields).toggleStatHandlerBase;
      if (this_00 == (ToggleStatHandlerBase *)0x0) goto code_?;
      ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState(this_00,obj,(MethodInfo *)0x0);
    }
    pTVar1 = (this->fields).toggleCameraEffects;
    if (pTVar1 != (ToggleCameraEffects *)0x0) {
      (pTVar1->fields).ignoreCamEffectCallback = 0;
      pTVar1 = (this->fields).toggleCameraEffects;
      if (pTVar1 != (ToggleCameraEffects *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar2,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return;
          }
          pTVar1 = (this->fields).toggleCameraEffects;
          if (pTVar1 != (ToggleCameraEffects *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar1,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              if (pcRam_? == (code *)0x0) {
                pcRam_? = (code *)func_?();
              }
              (*pcRam_?)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(CubeModelingStateMachine) */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_Initialize
               (DesktopCubeModelingTogglesController *this,
               CubeModelingStateMachine *cubeModelingStateMachine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__MainCameraManager->static_fields->gameHasCameraEffects == 0) {
    this_00 = (this->fields).toggleCameraEffects;
    if (this_00 != (ToggleCameraEffects *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        (*pcRam_?)();
        return;
      }
    }
    uVar2 = func_?(&puStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_OnDestroy
               (DesktopCubeModelingTogglesController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&
                    MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__CamEffectsUpdate_bool_
                   );
    func_?(&
                    MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__OnGameCameraEffectsChange_bool_
                   );
    func_?(&
                    MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__StartSetValue__
                   );
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).toggleCameraEffects;
  if ((pTVar1 == (ToggleCameraEffects *)0x0) ||
     (pTVar2 = (pTVar1->fields).toggleStatHandlerBase, pTVar2 == (ToggleStatHandlerBase *)0x0)) {
    func_?();
    func_?();
  }
  else {
    pTVar3 = (pTVar2->fields).OnStartSetValue;
    this_00 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
              func_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
    mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
    Func_1_System_Threading_Tasks_VoidTaskResult___ctor
              (this_00,(Object *)this,
               MethodInfo__IngameController__CubeModeling__DesktopCubeModelingTogglesController__StartSetValue__
               ,(MethodInfo *)0x0);
    pTVar3 = (ToggleStateHandlerOnStartSetValue *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pTVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pTVar3 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar2->fields).OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
code_?:
      func_?(&(pTVar2->fields).OnStartSetValue);
      return;
    }
    pTVar4 = (ToggleStateHandlerOnStartSetValue *)0x0;
    if (pTVar3->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
      pTVar4 = pTVar3;
    }
    if (pTVar4 != (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar2->fields).OnStartSetValue = pTVar4;
      pTVar4 = (ToggleStateHandlerOnStartSetValue *)0x0;
      if (pTVar3->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
        pTVar4 = pTVar3;
      }
      if (pTVar4 != (ToggleStateHandlerOnStartSetValue *)0x0) goto code_?;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGameCameraEffectsChange(Boolean) */

void Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_OnGameCameraEffectsChange
               (DesktopCubeModelingTogglesController *this,bool obj,MethodInfo *method)

{
  this_00 = (this->fields).toggleCameraEffects;
  if (this_00 != (ToggleCameraEffects *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean StartSetValue() */

bool Assembly-CSharp.dll::IngameController::CubeModeling::DesktopCubeModelingTogglesController::
     DesktopCubeModelingTogglesController_StartSetValue
               (DesktopCubeModelingTogglesController *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    return (pMVar1->fields).cameraEffects;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

