
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::OculusKillLimit::OculusKillLimit_GameCountersQuery_OnCounterTypeChanged
               (OculusKillLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

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


/* OculusKillLimit(WinningCondition, Int32, GameStatCounterManager, Int32) */

void MVWorldObject.dll::OculusKillLimit::OculusKillLimit__ctor
               (OculusKillLimit *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t killLimit,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,killLimit,1,
             CONCAT31((int3)((uint)in_stack_1 >> 8),6),
             CONCAT31((int3)((uint)in_stack_2 >> 8),2),(MethodInfo *)0x0);
  return;
}

