
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::TargetAssasinated::TargetAssasinated_GameCountersQuery_OnCounterTypeChanged
               (TargetAssasinated *this,Object *sender,OnCounterTypeChangedArgs *e,
               MethodInfo *method)

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
  if (((e->fields).actorNumber == (this->fields).assassinatorActorNumber) &&
     ((e->fields).otherID == (this->fields).assassineeActorNumber)) {
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

