
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::TargetAssasinated::TargetAssasinated_GameCountersQuery_OnCounterTypeChanged
               (TargetAssasinated *this,Object *sender,OnCounterTypeChangedArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if (((e->fields).actorNumber == (this->fields).assassinatorActorNumber) &&
       ((e->fields).otherID == (this->fields).assassineeActorNumber)) {
      this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                func_?(TypeInfo__System__EventArgs);
      Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
      WinningCondition::WinningCondition_SendWinningConditionChangedEvent
                ((WinningCondition *)this,(EventArgs *)this_00,e,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* TargetAssasinated(WinningCondition, Int32, GameStatCounterManager, Int32, Int32) */

void MVWorldObject.dll::TargetAssasinated::TargetAssasinated__ctor
               (TargetAssasinated *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t assassinatorActorNumber,
               int32_t assassineeActorNumber,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,1,0,
             GameStatCounterType__Enum_Kill,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  (this->fields).assassinatorActorNumber = assassinatorActorNumber;
  (this->fields).assassineeActorNumber = assassineeActorNumber;
  return;
}

