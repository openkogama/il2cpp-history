
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::CaptureTheFlag::CaptureTheFlag_GameCountersQuery_OnCounterTypeChanged
               (CaptureTheFlag *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if (e == (OnCounterTypeChangedArgs *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((e->fields).count == (this->fields)._.limit) {
    this_00 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__System__EventArgs);
    if (this_00 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._.forfilled = 1;
    (this->fields)._.instigatorCounterTypeChangedEvent = e;
    func_?(&(this->fields)._.instigatorCounterTypeChangedEvent,e);
    if ((this->fields)._.OnWinningConditionChanged != (EventHandler_1_EventArgs_ *)0x0) {
      pEVar2 = (this->fields)._.OnWinningConditionChanged;
      (*(pEVar2->fields)._._.invoke_impl)
                ((pEVar2->fields)._._.method_code,this,this_00,(pEVar2->fields)._._.method);
    }
  }
  return;
}


/* CaptureTheFlag(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::CaptureTheFlag::CaptureTheFlag__ctor
               (CaptureTheFlag *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,1,1,
             GameStatCounterType__Enum_FlagCaptured,WinningConditionPresentStyle__Enum_OneWinner,
             (MethodInfo *)0x0);
  return;
}

