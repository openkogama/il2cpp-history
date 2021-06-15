
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::FlagReachedClient::FlagReachedClient_GetBriefing
               (FlagReachedClient *this,IBriefing *winningConditionBriefingView,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winningConditionBriefingView != (IBriefing *)0x0) {
    func_?(1,TypeInfo__IBriefing,winningConditionBriefingView,1);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::FlagReachedClient::FlagReachedClient_GetDebriefing
               (FlagReachedClient *this,IDebriefing *winningConditionDebriefingView,
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
  this = (FlagReachedClient *)(uint)bVar2;
  if (winningConditionDebriefingView == (IDebriefing *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = winningConditionDebriefingView->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType == (Il2CppClass *)TypeInfo__IDebriefing) {
        ppMVar7 = &(&winningConditionDebriefingView->klass->vtable)
                   [pIVar4->interfaceOffsets[uVar5].offset].SetupDebriefing.method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)func_?(winningConditionDebriefingView,TypeInfo__IDebriefing,0);
code_?:
  (*(code *)*ppMVar7)(winningConditionDebriefingView,1,uVar1,this,ppMVar7[1]);
  return;
}


/* FlagReachedClient(WinningCondition, Int32, GameStatCounterManager) */

void Assembly-CSharp.dll::FlagReachedClient::FlagReachedClient__ctor
               (FlagReachedClient *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Flag,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

