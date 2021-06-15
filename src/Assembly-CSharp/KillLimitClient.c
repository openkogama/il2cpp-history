
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::KillLimitClient::KillLimitClient_GetBriefing
               (KillLimitClient *this,IBriefing *winningConditionBriefingView,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  System.dll::System::Collections::Generic::
  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::Single,System
  ::Object]::
  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)this,(MethodInfo *)0x0);
  if (winningConditionBriefingView != (IBriefing *)0x0) {
    func_?(0,TypeInfo__IBriefing,winningConditionBriefingView,2);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::KillLimitClient::KillLimitClient_GetDebriefing
               (KillLimitClient *this,IDebriefing *winningConditionDebriefingView,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (*(code *)(this->klass->vtable).get_HighScores.method)
                    (this,(this->klass->vtable).Traverse_1.methodPtr);
  bVar2 = (*(code *)(this->klass->vtable).get_IsTeamMode.method)
                    (this,(this->klass->vtable).get_HighScores.methodPtr);
  this = (KillLimitClient *)(uint)bVar2;
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
  (*(code *)*ppMVar7)(winningConditionDebriefingView,2,uVar1,this,ppMVar7[1]);
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

