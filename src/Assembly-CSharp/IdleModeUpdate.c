
/* Void Update() */

void Assembly-CSharp.dll::IdleModeUpdate::IdleModeUpdate_Update
               (IdleModeUpdate *this,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (0 < iVar1) {
    AwayMonitor::AwayMonitor_UpdateIdleAction((MethodInfo *)0x0);
  }
  return;
}

