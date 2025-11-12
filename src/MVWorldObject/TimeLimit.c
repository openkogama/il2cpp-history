
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::TimeLimit::TimeLimit_GameCountersQuery_OnCounterTypeChanged
               (TimeLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (OnCounterTypeChangedArgs *)0x0) {
    if ((e->fields).count <= (this->fields)._.limit) {
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


/* HighScores GetHighScores() */

HighScores *
MVWorldObject.dll::TimeLimit::TimeLimit_GetHighScores(TimeLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch((this->fields).counterType) {
  case 1:
    this_00 = (this->fields)._.gameCounterManager;
    if ((this_00 != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (this_00,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
      statType = GameStatCounterType__Enum_Kill;
      presentAsTeamScore = 1 < (pHVar1->fields)._count;
code_?:
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (this_00,statType,presentAsTeamScore,winningConditionPresentStyle,0,
                          (MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  case 2:
    this_00 = (this->fields)._.gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      uVar3 = 0;
      pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         (this_00,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
        statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
        presentAsTeamScore = 1 < (pHVar1->fields)._count;
        goto code_?;
      }
    }
    break;
  case 3:
    this_00 = (this->fields)._.gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      uVar3 = 0;
      pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         (this_00,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
        statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),3);
        presentAsTeamScore = 1 < (pHVar1->fields)._count;
        goto code_?;
      }
    }
    break;
  default:
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._.gameCounterManager;
    bVar4 = (this->fields)._.gameStatCounterType;
    if ((this_00 != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (this_00,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),2);
      statType = (GameStatCounterType__Enum)bVar4;
      presentAsTeamScore = 1 < (pHVar1->fields)._count;
      goto code_?;
    }
    break;
  case 6:
    this_00 = (this->fields)._.gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      uVar3 = 0;
      pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         (this_00,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
        statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),6);
        presentAsTeamScore = 1 < (pHVar1->fields)._count;
        goto code_?;
      }
    }
    break;
  case 8:
    this_00 = (this->fields)._.gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      uVar3 = 0;
      pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         (this_00,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
        statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),8);
        presentAsTeamScore = 1 < (pHVar1->fields)._count;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pHVar2 = (HighScores *)(*pcVar5)();
  return pHVar2;
}


/* TimeLimit(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::TimeLimit::TimeLimit__ctor
               (TimeLimit *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             CONCAT31((int3)((uint)in_stack_1 >> 8),4),
             CONCAT31((int3)((uint)in_stack_2 >> 8),2),(MethodInfo *)0x0);
  return;
}


/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::TimeLimit::TimeLimit_get_HighScores(TimeLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch((this->fields).counterType) {
  case 1:
    this_00 = (this->fields)._.gameCounterManager;
    if ((this_00 != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (this_00,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
      statType = GameStatCounterType__Enum_Kill;
      presentAsTeamScore = 1 < (pHVar1->fields)._count;
code_?:
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (this_00,statType,presentAsTeamScore,winningConditionPresentStyle,0,
                          (MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  case 2:
    this_00 = (this->fields)._.gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      uVar3 = 0;
      pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         (this_00,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
        statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
        presentAsTeamScore = 1 < (pHVar1->fields)._count;
        goto code_?;
      }
    }
    break;
  case 3:
    this_00 = (this->fields)._.gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      uVar3 = 0;
      pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         (this_00,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
        statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),3);
        presentAsTeamScore = 1 < (pHVar1->fields)._count;
        goto code_?;
      }
    }
    break;
  default:
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._.gameCounterManager;
    bVar4 = (this->fields)._.gameStatCounterType;
    if ((this_00 != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (this_00,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),2);
      statType = (GameStatCounterType__Enum)bVar4;
      presentAsTeamScore = 1 < (pHVar1->fields)._count;
      goto code_?;
    }
    break;
  case 6:
    this_00 = (this->fields)._.gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      uVar3 = 0;
      pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         (this_00,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
        statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),6);
        presentAsTeamScore = 1 < (pHVar1->fields)._count;
        goto code_?;
      }
    }
    break;
  case 8:
    this_00 = (this->fields)._.gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      uVar3 = 0;
      pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         (this_00,(MethodInfo *)0x0);
      if (pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        winningConditionPresentStyle = CONCAT31((int3)((uint)in_R9D >> 8),1);
        statType = (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),8);
        presentAsTeamScore = 1 < (pHVar1->fields)._count;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pHVar2 = (HighScores *)(*pcVar5)();
  return pHVar2;
}

