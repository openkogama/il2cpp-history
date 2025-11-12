
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::FlagReached::FlagReached_GameCountersQuery_OnCounterTypeChanged
               (FlagReached *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = FUN_?(TypeInfo__System__EventArgs);
  bVar2 = iRam_? != 0;
  (this->fields)._.forfilled = 1;
  (this->fields)._.instigatorCounterTypeChangedEvent = e;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.instigatorCounterTypeChangedEvent >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if ((this->fields)._.OnWinningConditionChanged == (EventHandler_1_EventArgs_ *)0x0) {
    return;
  }
  pEVar7 = (this->fields)._.OnWinningConditionChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pEVar7->fields)._._.invoke_impl)
            ((pEVar7->fields)._._.method_code,this,uVar1,(pEVar7->fields)._._.method);
  return;
}


/* FlagReached(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::FlagReached::FlagReached__ctor
               (FlagReached *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             CONCAT31((int3)((uint)in_stack_1 >> 8),2),
             CONCAT31((int3)((uint)in_stack_2 >> 8),1),(MethodInfo *)0x0);
  return;
}

