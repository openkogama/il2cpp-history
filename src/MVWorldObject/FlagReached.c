
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::FlagReached::FlagReached_GameCountersQuery_OnCounterTypeChanged
               (FlagReached *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__System__EventArgs);
  Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  WinningCondition::WinningCondition_SendWinningConditionChangedEvent
            ((WinningCondition *)this,(EventArgs *)this_00,e,(MethodInfo *)0x0);
  return;
}


/* FlagReached(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::FlagReached::FlagReached__ctor
               (FlagReached *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Flag,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

