
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::MuteToggleExecute::MuteToggleExecute_ExecuteToggleState
               (MuteToggleExecute *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MainCameraManager::MainCameraManager_set_Mute(toggleState,(MethodInfo *)0x0);
  if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    (*(toggleCallback->fields)._._.invoke_impl)();
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

