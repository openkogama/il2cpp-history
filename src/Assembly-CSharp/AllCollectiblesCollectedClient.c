
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::AllCollectiblesCollectedClient::AllCollectiblesCollectedClient_GetBriefing
               (AllCollectiblesCollectedClient *this,IBriefing *winningConditionBriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBriefing);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (winningConditionBriefingView != (IBriefing *)0x0) {
    FUN_?(0,TypeInfo__IBriefing,winningConditionBriefingView,0,(this->fields)._._.limit);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::AllCollectiblesCollectedClient::
     AllCollectiblesCollectedClient_GetDebriefing
               (AllCollectiblesCollectedClient *this,IDebriefing *winningConditionDebriefingView,
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

