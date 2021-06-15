
/* Void GetBriefing(IBriefing) */

void Assembly-CSharp.dll::AllCollectiblesCollectedClient::AllCollectiblesCollectedClient_GetBriefing
               (AllCollectiblesCollectedClient *this,IBriefing *winningConditionBriefingView,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)this,(MethodInfo *)0x0);
  if (winningConditionBriefingView == (IBriefing *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = winningConditionBriefingView->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType == (Il2CppClass *)TypeInfo__IBriefing) {
        ppMVar6 = &(&(winningConditionBriefingView->klass->vtable).AddBriefing)
                   [pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)func_?(winningConditionBriefingView,TypeInfo__IBriefing,0);
code_?:
  (*(code *)*ppMVar6)(winningConditionBriefingView,0,pOVar1,ppMVar6[1]);
  return;
}


/* Void GetDebriefing(IDebriefing) */

void Assembly-CSharp.dll::AllCollectiblesCollectedClient::
     AllCollectiblesCollectedClient_GetDebriefing
               (AllCollectiblesCollectedClient *this,IDebriefing *winningConditionDebriefingView,
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
  this = (AllCollectiblesCollectedClient *)(uint)bVar2;
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
  (*(code *)*ppMVar7)(winningConditionDebriefingView,0,uVar1,this,ppMVar7[1]);
  return;
}


/* AllCollectiblesCollectedClient(WinningCondition, Int32, GameStatCounterManager) */

void Assembly-CSharp.dll::AllCollectiblesCollectedClient::AllCollectiblesCollectedClient__ctor
               (AllCollectiblesCollectedClient *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Collectible,
             WinningConditionPresentStyle__Enum_MultipleWinners,(MethodInfo *)0x0);
  return;
}

