
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::AllCollectiblesCollected::
     AllCollectiblesCollected_GameCountersQuery_OnCounterTypeChanged
               (AllCollectiblesCollected *this,Object *sender,OnCounterTypeChangedArgs *e,
               MethodInfo *method)

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
    this = (AllCollectiblesCollected *)CONCAT31(this._1_3_,uVar4);
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


/* AllCollectiblesCollected(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::AllCollectiblesCollected::AllCollectiblesCollected__ctor
               (AllCollectiblesCollected *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Collectible,
             WinningConditionPresentStyle__Enum_MultipleWinners,(MethodInfo *)0x0);
  return;
}


/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::AllCollectiblesCollected::AllCollectiblesCollected_get_HighScores
          (AllCollectiblesCollected *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._.gameCounterManager;
  uVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]
          ::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)this,
                     (MethodInfo *)0x0);
  this = (AllCollectiblesCollected *)CONCAT31(this._1_3_,uVar2);
  if (pGVar1 != (GameStatCounterManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar3 = (pGVar1->fields).statTypeCounters;
    if (pDVar3 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[GameStatCounterType,System::
              Object]::Dictionary_2_GameStatCounterType_System_Object__ContainsKey
                        ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar3,
                         (GameStatCounterType__Enum)this,
                         MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                        );
      if (bVar4 == 0) {
        pHVar5 = (HighScores *)func_?();
        HighScores::HighScores__ctor
                  (pHVar5,(GameStatCounterType__Enum)this,
                   (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0,0,
                   WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar5;
      }
      pDVar3 = (pGVar1->fields).statTypeCounters;
      if (pDVar3 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        this_00 = (TeamsCounter *)
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[GameStatCounterType,System::Object]::
                  Dictionary_2_GameStatCounterType_System_Object__get_Item
                            ((Dictionary_2_GameStatCounterType_System_Object_ *)pDVar3,
                             (GameStatCounterType__Enum)this,
                             MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                            );
        if (this_00 != (TeamsCounter *)0x0) {
          pHVar5 = TeamsCounter::TeamsCounter_GetHighScores
                             (this_00,(GameStatCounterType__Enum)this,0,
                              WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
          return pHVar5;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pHVar5 = (HighScores *)(*pcVar6)();
  return pHVar5;
}

