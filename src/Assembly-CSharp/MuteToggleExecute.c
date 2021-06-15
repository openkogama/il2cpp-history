
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::MuteToggleExecute::MuteToggleExecute_ExecuteToggleState
               (MuteToggleExecute *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager::MainCameraManager_set_Mute(toggleState,(MethodInfo *)0x0);
  if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke
              (toggleCallback,toggleState,
               MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

