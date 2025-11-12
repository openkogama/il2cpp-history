
/* Void EndFlagCountDown() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown
               (FlagDebriefingControl *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).RunStartTime = fVar3;
  (this->fields).IsInFlagDebriefing = 0;
  if ((this->fields).OnFlagCountDownEnd == (Action *)0x0) {
    return;
  }
  pAVar4 = (this->fields).OnFlagCountDownEnd;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
  return;
}


/* Void ResetToSpawnPoint() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_ResetToSpawnPoint
               (FlagDebriefingControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      (pMVar3->fields)._.checkpointWOID = -1;
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartFlagCountDown() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_StartFlagCountDown
               (FlagDebriefingControl *this,MethodInfo *method)

{
  if ((this->fields).OnFlagCountDown != (Action *)0x0) {
    pAVar1 = (this->fields).OnFlagCountDown;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    (this->fields).IsInFlagDebriefing = 1;
    return;
  }
  (this->fields).IsInFlagDebriefing = 1;
  return;
}


/* Void StartFlagDebriefing(Int32) */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
               (FlagDebriefingControl *this,int32_t captureTime,MethodInfo *method)

{
  (this->fields).IsInFlagDebriefing = 1;
  if ((this->fields).OnFlagDebriefing != (Action_1_Int32_ *)0x0) {
    pAVar1 = (this->fields).OnFlagDebriefing;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,captureTime,(pAVar1->fields)._._.method);
    return;
  }
  return;
}

