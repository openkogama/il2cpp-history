
/* Void OnShutdownSessionClicked() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::PlayerList::Admin::
     AdminGameMgmtController::AdminGameMgmtController_OnShutdownSessionClicked
               (AdminGameMgmtController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,(char)method);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdminOperation
              (this_00,4,1,-1,::StringLiteral__,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

