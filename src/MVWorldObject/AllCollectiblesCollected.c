
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::AllCollectiblesCollected::
     AllCollectiblesCollected_GameCountersQuery_OnCounterTypeChanged
               (AllCollectiblesCollected *this,Object *sender,OnCounterTypeChangedArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).get_IsTeamMode.methodPtr)
                    (this,(this->klass->vtable).get_IsTeamMode.method);
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if (cVar1 == '\0') {
      iVar2 = (this->fields)._.limit;
      iVar3 = (e->fields).count;
      bVar4 = SBORROW4(iVar3,iVar2);
      iVar3 = iVar3 - iVar2;
    }
    else {
      this_00 = (this->fields)._.gameCounterManager;
      if (this_00 == (GameStatCounterManager *)0x0) goto code_?;
      iVar5 = GameStatCounterManager::GameStatCounterManager_GetTeamCount
                        (this_00,(uint)(this->fields)._.gameStatCounterType,(e->fields).team,
                         (MethodInfo *)0x0);
      iVar3 = (this->fields)._.limit;
      bVar4 = SBORROW4(iVar5,iVar3);
      iVar3 = iVar5 - iVar3;
    }
    if (bVar4 == iVar3 < 0) {
      eventArgs = (EventArgs *)FUN_?(TypeInfo__System__EventArgs);
      WinningCondition::WinningCondition_SendWinningConditionChangedEvent
                ((WinningCondition *)this,eventArgs,e,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AllCollectiblesCollected(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::AllCollectiblesCollected::AllCollectiblesCollected__ctor
               (AllCollectiblesCollected *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             CONCAT31((int3)((uint)in_stack_1 >> 8),3),
             CONCAT31((int3)((uint)in_stack_2 >> 8),2),(MethodInfo *)0x0);
  return;
}


/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::AllCollectiblesCollected::AllCollectiblesCollected_get_HighScores
          (AllCollectiblesCollected *this,MethodInfo *method)

{
  this_00 = (this->fields)._.gameCounterManager;
  if (this_00 != (GameStatCounterManager *)0x0) {
    pHVar1 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                       (this_00,(uint)(this->fields)._.gameStatCounterType,0,
                        CONCAT31((int3)((uint)in_R9D >> 8),1),0,(MethodInfo *)0x0);
    return pHVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pHVar1 = (HighScores *)(*pcVar2)();
  return pHVar1;
}

