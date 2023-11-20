
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::KillLimitClient::KillLimitClient_GetBriefing
               (KillLimitClient *this,IBriefing *winningConditionBriefingView,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IBriefing;
    func_?();
    cRam_? = '\x01';
  }
  if (winningConditionBriefingView != (IBriefing *)0x0) {
    ppIStack_1 = (IBriefing__Class **)(this->fields)._._.limit;
    puStack_2 = (undefined *)0x2;
    pIStack_3 = winningConditionBriefingView;
    func_?(0,TypeInfo__IBriefing);
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

void Assembly-CSharp.dll::KillLimitClient::KillLimitClient_GetDebriefing
               (KillLimitClient *this,IDebriefing *winningConditionDebriefingView,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IDebriefing);
    cRam_? = '\x01';
  }
  uVar1 = (*(code *)(this->klass->vtable).get_HighScores.method)
                    (this,(this->klass->vtable).Traverse_1.methodPtr);
  bVar2 = (*(code *)(this->klass->vtable).get_IsTeamMode.method)
                    (this,(this->klass->vtable).get_HighScores.methodPtr);
  this = (KillLimitClient *)(uint)bVar2;
  if (winningConditionDebriefingView != (IDebriefing *)0x0) {
    func_?(0,TypeInfo__IDebriefing,winningConditionDebriefingView,2,uVar1,this);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* KillLimitClient(WinningCondition, Int32, GameStatCounterManager, Int32) */

void Assembly-CSharp.dll::KillLimitClient::KillLimitClient__ctor
               (KillLimitClient *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t killLimit,MethodInfo *method)

{
  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,killLimit,1,
             GameStatCounterType__Enum_Kill,WinningConditionPresentStyle__Enum_MultipleWinners,
             (MethodInfo *)0x0);
  return;
}

