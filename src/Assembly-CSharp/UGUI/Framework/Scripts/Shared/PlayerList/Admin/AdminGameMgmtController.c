
/* Void OnShutdownSessionClicked() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::PlayerList::Admin::
     AdminGameMgmtController::AdminGameMgmtController_OnShutdownSessionClicked
               (AdminGameMgmtController *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ShutdownSession
              (this_00,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

