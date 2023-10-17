
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::TimeAttackFlagReachedClient::TimeAttackFlagReachedClient_GetBriefing
               (TimeAttackFlagReachedClient *this,IBriefing *winningConditionBriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IBriefing;
    func_?();
    cRam_? = '\x01';
  }
  if (winningConditionBriefingView != (IBriefing *)0x0) {
    ppIStack_1 = (IBriefing__Class **)0x5;
    pIStack_2 = winningConditionBriefingView;
    pIStack_3 = TypeInfo__IBriefing;
    func_?(1);
    return;
  }
  ppIStack_1 = (IBriefing__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::TimeAttackFlagReachedClient::TimeAttackFlagReachedClient_GetDebriefing
               (TimeAttackFlagReachedClient *this,IDebriefing *winningConditionDebriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDebriefing);
    cRam_? = '\x01';
  }
  uVar1 = (*(this->klass->vtable).get_HighScores_1.methodPtr)
                    (this,(this->klass->vtable).get_HighScores_1.method);
  bVar2 = (*(this->klass->vtable).get_IsTeamMode_1.methodPtr)
                    (this,(this->klass->vtable).get_IsTeamMode_1.method);
  this = (TimeAttackFlagReachedClient *)(uint)bVar2;
  if (winningConditionDebriefingView != (IDebriefing *)0x0) {
    func_?(0,TypeInfo__IDebriefing,winningConditionDebriefingView,5,uVar1,this);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* TimeAttackFlagReachedClient(WinningCondition, Int32, GameStatCounterManager) */

void Assembly-CSharp.dll::TimeAttackFlagReachedClient::TimeAttackFlagReachedClient__ctor
               (TimeAttackFlagReachedClient *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_TimeAttackFlag,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

