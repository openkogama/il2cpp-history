
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::KillLimit::KillLimit_GameCountersQuery_OnCounterTypeChanged
               (KillLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_IsTeamMode.method)
                    (this,(this->klass->vtable).get_HighScores.methodPtr);
  if (cVar1 == '\0') {
    if (e == (OnCounterTypeChangedArgs *)0x0) goto code_?;
    iVar2 = (e->fields).count;
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this,(MethodInfo *)0x0);
  }
  else {
    this_00 = (this->fields)._.gameCounterManager;
    uVar4 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Byte]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)this,
                       (MethodInfo *)0x0);
    this = (KillLimit *)CONCAT31(this._1_3_,uVar4);
    if ((e == (OnCounterTypeChangedArgs *)0x0) || (this_00 == (GameStatCounterManager *)0x0)) {
code_?:
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = GameStatCounterManager::GameStatCounterManager_GetTeamCount
                      (this_00,(GameStatCounterType__Enum)this,(e->fields).team,(MethodInfo *)0x0);
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)this_01,(MethodInfo *)0x0);
  }
  if ((int)pOVar3 <= iVar2) {
    this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__System__EventArgs);
    Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
    WinningCondition::WinningCondition_SendWinningConditionChangedEvent
              ((WinningCondition *)this_01,(EventArgs *)this_02,e,(MethodInfo *)0x0);
  }
  return;
}


/* KillLimit(WinningCondition, Int32, GameStatCounterManager, Int32) */

void MVWorldObject.dll::KillLimit::KillLimit__ctor
               (KillLimit *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t killLimit,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,killLimit,1,
             GameStatCounterType__Enum_Kill,WinningConditionPresentStyle__Enum_MultipleWinners,
             (MethodInfo *)0x0);
  return;
}

