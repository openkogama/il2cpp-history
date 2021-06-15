
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::ToggleLogic::ToggleLogic_ExecuteToggleState
               (ToggleLogic *this,bool toggleState,UnityAction_1_System_Boolean_ *toggleCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered(this_00,toggleState,(MethodInfo *)0x0);
    if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
      this._0_1_ = (bool)MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
      UnityAction_1_System_Boolean__Invoke
                (toggleCallback,(bool)this,
                 MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ToggleLogic::ToggleLogic_Update(ToggleLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).toggleStatHandlerBase;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (MVBuildModeAvatarLocal_EditMode *)
            MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MVBuildModeAvatarLocal_EditMode *)0x0) {
    value = MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_get_MovementConstrained
                      (this_01,(MethodInfo *)0x0);
    if (this_00 != (ToggleStatHandlerBase *)0x0) {
      ToggleStatHandlerBase::ToggleStatHandlerBase_set_ToggleState(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

