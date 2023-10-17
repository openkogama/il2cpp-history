
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::KillLimit::KillLimit_GameCountersQuery_OnCounterTypeChanged
               (KillLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  pKVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  cVar2 = (*(this->klass->vtable).get_IsTeamMode_1.methodPtr)
                    (this,(this->klass->vtable).get_IsTeamMode_1.method);
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if (cVar2 == '\0') {
      iVar3 = (e->fields).count;
    }
    else {
      this_00 = (this->fields)._.gameCounterManager;
      if (this_00 == (GameStatCounterManager *)0x0) goto code_?;
      this = (KillLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
      iVar3 = GameStatCounterManager::GameStatCounterManager_GetTeamCount
                        (this_00,(GameStatCounterType__Enum)this,(e->fields).team,(MethodInfo *)0x0)
      ;
    }
    if ((pKVar1->fields)._.limit <= iVar3) {
      this_01 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__System__EventArgs);
      if (this_01 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
      (pKVar1->fields)._.forfilled = 1;
      (pKVar1->fields)._.instigatorCounterTypeChangedEvent = e;
      func_?(&(pKVar1->fields)._.instigatorCounterTypeChangedEvent,e);
      if ((pKVar1->fields)._.OnWinningConditionChanged != (EventHandler_1_EventArgs_ *)0x0) {
        pEVar4 = (pKVar1->fields)._.OnWinningConditionChanged;
        (*(pEVar4->fields)._._.invoke_impl)
                  ((pEVar4->fields)._._.method_code,pKVar1,this_01,(pEVar4->fields)._._.method);
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* KillLimit(WinningCondition, Int32, GameStatCounterManager, Int32) */

void MVWorldObject.dll::KillLimit::KillLimit__ctor
               (KillLimit *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t killLimit,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,killLimit,1,
             GameStatCounterType__Enum_Kill,WinningConditionPresentStyle__Enum_MultipleWinners,
             (MethodInfo *)0x0);
  return;
}

