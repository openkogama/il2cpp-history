
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::OculusKillLimitClient::OculusKillLimitClient_GetBriefing
               (OculusKillLimitClient *this,IBriefing *winningConditionBriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBriefing);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (this_00,WorldObjectType__Enum_AdvancedGhost,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      if (0 < (pLVar1->fields)._size) {
        if (winningConditionBriefingView == (IBriefing *)0x0) goto code_?;
        func_?(0);
      }
      return;
    }
  }
code_?:
  func_?();
  func_?();
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
    func_?(&TypeInfo__IDebriefing);
    cRam_? = '\x01';
  }
  uVar1 = (*(code *)(this->klass->vtable).get_HighScores.method)
                    (this,(this->klass->vtable).Traverse_1.methodPtr);
  bVar2 = (*(code *)(this->klass->vtable).get_IsTeamMode.method)
                    (this,(this->klass->vtable).get_HighScores.methodPtr);
  this = (OculusKillLimitClient *)(uint)bVar2;
  if (winningConditionDebriefingView != (IDebriefing *)0x0) {
    func_?(0,TypeInfo__IDebriefing,winningConditionDebriefingView,3,uVar1,this);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* OculusKillLimitClient(WinningCondition, Int32, GameStatCounterManager, Int32) */

void Assembly-CSharp.dll::OculusKillLimitClient::OculusKillLimitClient__ctor
               (OculusKillLimitClient *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t killLimit,MethodInfo *method)

{
  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,killLimit,1,
             GameStatCounterType__Enum_OculusKill,WinningConditionPresentStyle__Enum_MultipleWinners
             ,(MethodInfo *)0x0);
  return;
}

