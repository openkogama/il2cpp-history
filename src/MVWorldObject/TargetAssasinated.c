
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::TargetAssasinated::TargetAssasinated_GameCountersQuery_OnCounterTypeChanged
               (TargetAssasinated *this,Object *sender,OnCounterTypeChangedArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if (((e->fields).actorNumber == (this->fields).assassinatorActorNumber) &&
       ((e->fields).otherID == (this->fields).assassineeActorNumber)) {
      eventArgs = (EventArgs *)FUN_?(TypeInfo__System__EventArgs);
      WinningCondition::WinningCondition_SendWinningConditionChangedEvent
                ((WinningCondition *)this,eventArgs,e,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
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
             CONCAT31((int3)((uint)in_stack_1 >> 8),1),
             CONCAT31((int3)((uint)in_stack_2 >> 8),1),(MethodInfo *)0x0);
  (this->fields).assassinatorActorNumber = assassinatorActorNumber;
  (this->fields).assassineeActorNumber = assassineeActorNumber;
  return;
}

