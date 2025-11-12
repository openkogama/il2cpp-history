
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::CaptureTheFlag::CaptureTheFlag_GameCountersQuery_OnCounterTypeChanged
               (CaptureTheFlag *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if ((e->fields).count == (this->fields)._.limit) {
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


/* CaptureTheFlag(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::CaptureTheFlag::CaptureTheFlag__ctor
               (CaptureTheFlag *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,1,1,
             CONCAT31((int3)((uint)in_stack_1 >> 8),5),
             CONCAT31((int3)((uint)in_stack_2 >> 8),1),(MethodInfo *)0x0);
  return;
}

