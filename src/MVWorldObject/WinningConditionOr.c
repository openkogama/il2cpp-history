
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
             gameStatCounterType,winningConditionPresentStyle,(MethodInfo *)0x0);
  return;
}


/* Void winnerCondition_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionOr::
     WinningConditionOr_winnerCondition_OnWinningConditionChanged
               (WinningConditionOr *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  ppOVar1 = &(this->fields)._._.instigatorCounterTypeChangedEvent;
  *ppOVar1 = (OnCounterTypeChangedArgs *)0x0;
  (this->fields)._._.forfilled = 1;
  func_?(ppOVar1,0);
  pEVar2 = (this->fields)._._.OnWinningConditionChanged;
  if (pEVar2 != (EventHandler_1_EventArgs_ *)0x0) {
    (*(pEVar2->fields)._._.invoke_impl)
              ((pEVar2->fields)._._.method_code,this,e,(pEVar2->fields)._._.method);
  }
  return;
}

