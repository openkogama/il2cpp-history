
/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::TimeLimitClient::TimeLimitClient_GetDebriefing
               (TimeLimitClient *this,IDebriefing *winningConditionDebriefingView,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (IDebriefing *)0x0;
  pIStack_2 = (IDebriefing *)((uint)pIStack_2 & 0xffffff00);
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&pIStack_2,(MethodInfo *)0x0);
  FSMEntity::FSMEntity_set_LockState((FSMEntity *)this,(bool)pIStack_2,(MethodInfo *)0x0);
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
            ((WinningConditionType__Enum *)&pIStack_1,(MethodInfo *)0x0);
  pIVar3 = pIStack_1;
  (*(code *)(this->klass->vtable).get_HighScores.method)
            (this,(this->klass->vtable).Traverse_1.methodPtr);
  (*(code *)(this->klass->vtable).get_IsTeamMode.method)
            (this,(this->klass->vtable).get_HighScores.methodPtr);
  if (winningConditionDebriefingView != (IDebriefing *)0x0) {
    pIStack_2 = pIVar3;
    pIStack_1 = winningConditionDebriefingView;
    func_?(0,TypeInfo__IDebriefing);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TimeLimitClient(WinningCondition, Int32, GameStatCounterManager) */

void Assembly-CSharp.dll::TimeLimitClient::TimeLimitClient__ctor
               (TimeLimitClient *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Time_1,WinningConditionPresentStyle__Enum_MultipleWinners,
             (MethodInfo *)0x0);
  return;
}


/* Boolean get_IsBriefingNode() */

bool Assembly-CSharp.dll::TimeLimitClient::TimeLimitClient_get_IsBriefingNode
               (TimeLimitClient *this,MethodInfo *method)

{
  bVar1 = FSMEntity::FSMEntity_get_LockState((FSMEntity *)this,(MethodInfo *)0x0);
  return bVar1 != 0;
}

