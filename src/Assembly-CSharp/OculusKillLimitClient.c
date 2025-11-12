
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::OculusKillLimitClient::OculusKillLimitClient_GetBriefing
               (OculusKillLimitClient *this,IBriefing *winningConditionBriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBriefing);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (this_00,WorldObjectType__Enum_AdvancedGhost,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      if (0 < (pLVar1->fields)._size) {
        if (winningConditionBriefingView == (IBriefing *)0x0) goto code_?;
        FUN_?(0,TypeInfo__IBriefing,winningConditionBriefingView,3,(this->fields)._._.limit)
        ;
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::OculusKillLimitClient::OculusKillLimitClient_GetDebriefing
               (OculusKillLimitClient *this,IDebriefing *winningConditionDebriefingView,
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

