
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::ToolToggles::ToggleCameraEffects::
     ToggleCameraEffects_ExecuteToggleState
               (ToggleCameraEffects *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  (this->fields).ignoreCamEffectCallback = 1;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_CameraEffects(this_00,toggleState,(MethodInfo *)0x0);
    if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
      (*(toggleCallback->fields)._._.invoke_impl)((toggleCallback->fields)._._.method_code);
      (this->fields).ignoreCamEffectCallback = 0;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::ToolToggles::ToggleCameraEffects::
     ToggleCameraEffects_Update(ToggleCameraEffects *this,MethodInfo *method)

{
  this_00 = (this->fields).toggleStatHandlerBase;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) && (this_00 != (ToggleStatHandlerBase *)0x0)) {
    ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState
              (this_00,(pMVar1->fields).cameraEffects,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

