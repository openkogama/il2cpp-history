
/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::TimeLimitClient::TimeLimitClient_GetDebriefing
               (TimeLimitClient *this,IDebriefing *winningConditionDebriefingView,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IDebriefing);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aWStackX_10[0] = WinningConditionType__Enum_Collectible;
  auStackX_8[0] = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)auStackX_8,(MethodInfo *)0x0);
  (this->fields)._.counterType = auStackX_8[0];
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
            (aWStackX_10,(MethodInfo *)0x0);
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


/* Boolean get_IsBriefingNode() */

bool Assembly-CSharp.dll::TimeLimitClient::TimeLimitClient_get_IsBriefingNode
               (TimeLimitClient *this,MethodInfo *method)

{
  return (this->fields)._.counterType != 0;
}

