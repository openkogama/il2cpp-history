
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::OculusKillLimit::OculusKillLimit_GameCountersQuery_OnCounterTypeChanged
               (OculusKillLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).get_IsTeamMode.method)
                    (this,(this->klass->vtable).get_HighScores.methodPtr);
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if (cVar1 == '\0') {
      iVar2 = (e->fields).count;
    }
    else {
      this_00 = (this->fields)._.gameCounterManager;
      if (this_00 == (GameStatCounterManager *)0x0) goto code_?;
      this = (OculusKillLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
      iVar2 = GameStatCounterManager::GameStatCounterManager_GetTeamCount
                        (this_00,(GameStatCounterType__Enum)this,(e->fields).team,(MethodInfo *)0x0)
      ;
    }
    if ((this_01->fields)._.limit <= iVar2) {
      this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                func_?(TypeInfo__System__EventArgs);
      Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
      WinningCondition::WinningCondition_SendWinningConditionChangedEvent
                ((WinningCondition *)this_01,(EventArgs *)this_02,e,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* OculusKillLimit(WinningCondition, Int32, GameStatCounterManager, Int32) */

void MVWorldObject.dll::OculusKillLimit::OculusKillLimit__ctor
               (OculusKillLimit *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t killLimit,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,killLimit,1,
             GameStatCounterType__Enum_OculusKill,WinningConditionPresentStyle__Enum_MultipleWinners
             ,(MethodInfo *)0x0);
  return;
}

