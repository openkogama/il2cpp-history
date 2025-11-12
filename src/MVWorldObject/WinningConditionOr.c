
/* WinningConditionOr(WinningCondition, Int32, GameStatCounterManager, Boolean, GameStatCounterType,
   WinningConditionPresentStyle) */

void MVWorldObject.dll::WinningConditionOr::WinningConditionOr__ctor
               (WinningConditionOr *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,bool isBriefingNode,
               GameStatCounterType__Enum gameStatCounterType,
               WinningConditionPresentStyle__Enum winningConditionPresentStyle,MethodInfo *method)

{
  WinningConditionGroup::WinningConditionGroup__ctor
            ((WinningConditionGroup *)this,parent,id,gameCounterManager,1,isBriefingNode,
             CONCAT31((int3)((uint)in_stack_1 >> 8),(undefined1)gameStatCounterType),
             CONCAT31((int3)((uint)in_stack_2 >> 8),
                      (undefined1)winningConditionPresentStyle),(MethodInfo *)0x0);
  return;
}


/* Void winnerCondition_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionOr::
     WinningConditionOr_winnerCondition_OnWinningConditionChanged
               (WinningConditionOr *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._._.forfilled = 1;
  (this->fields)._._.instigatorCounterTypeChangedEvent = (OnCounterTypeChangedArgs *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.instigatorCounterTypeChangedEvent >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if ((this->fields)._._.OnWinningConditionChanged == (EventHandler_1_EventArgs_ *)0x0) {
    return;
  }
  pEVar6 = (this->fields)._._.OnWinningConditionChanged;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pEVar6->fields)._._.invoke_impl)
            ((pEVar6->fields)._._.method_code,this,e,(pEVar6->fields)._._.method);
  return;
}

