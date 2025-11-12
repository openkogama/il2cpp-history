
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::MuteToggleExecute::MuteToggleExecute_ExecuteToggleState
               (MuteToggleExecute *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  MainCameraManager::MainCameraManager_set_Mute(toggleState,(MethodInfo *)0x0);
  if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(toggleCallback->fields)._._.invoke_impl)
              ((toggleCallback->fields)._._.method_code,toggleState,
               (toggleCallback->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

