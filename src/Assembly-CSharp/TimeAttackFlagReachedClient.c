
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::TimeAttackFlagReachedClient::TimeAttackFlagReachedClient_GetBriefing
               (TimeAttackFlagReachedClient *this,IBriefing *winningConditionBriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winningConditionBriefingView != (IBriefing *)0x0) {
    pIVar1 = winningConditionBriefingView->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType == (Il2CppClass *)TypeInfo__IBriefing) {
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(winningConditionBriefingView->klass->vtable).AddBriefing_1)[iVar4].method)
                    (winningConditionBriefingView,5,
                     (&winningConditionBriefingView->klass[1]._0.image)[iVar4 * 2]);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)func_?(winningConditionBriefingView,TypeInfo__IBriefing,1);
    (*(code *)*puVar5)(winningConditionBriefingView,5,puVar5[1]);
    return;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::TimeAttackFlagReachedClient::TimeAttackFlagReachedClient_GetDebriefing
               (TimeAttackFlagReachedClient *this,IDebriefing *winningConditionDebriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (*(code *)(this->klass->vtable).get_HighScores.method)
                    (this,(this->klass->vtable).Traverse_1.methodPtr);
  bVar2 = (*(code *)(this->klass->vtable).get_IsTeamMode.method)
                    (this,(this->klass->vtable).get_HighScores.methodPtr);
  this = (TimeAttackFlagReachedClient *)(uint)bVar2;
  if (winningConditionDebriefingView != (IDebriefing *)0x0) {
    func_?(0,TypeInfo__IDebriefing,winningConditionDebriefingView,5,uVar1,this);
    return;
  }
  func_?(0);
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

