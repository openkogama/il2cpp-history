
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::FlagReachedClient::FlagReachedClient_GetBriefing
               (FlagReachedClient *this,IBriefing *winningConditionBriefingView,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBriefing);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (winningConditionBriefingView == (IBriefing *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = winningConditionBriefingView->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType == (Il2CppClass *)TypeInfo__IBriefing) {
        pVVar5 = &(pIVar3->vtable).AddBriefing + (pIVar3->interfaceOffsets[uVar2].offset + 1);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(winningConditionBriefingView);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(winningConditionBriefingView,1,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::FlagReachedClient::FlagReachedClient_GetDebriefing
               (FlagReachedClient *this,IDebriefing *winningConditionDebriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IDebriefing);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).get_HighScores.methodPtr)
            (this,(this->klass->vtable).get_HighScores.method);
  (*(this->klass->vtable).get_IsTeamMode.methodPtr)
            (this,(this->klass->vtable).get_IsTeamMode.method);
  if (winningConditionDebriefingView != (IDebriefing *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

