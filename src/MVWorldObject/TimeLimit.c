
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::TimeLimit::TimeLimit_GameCountersQuery_OnCounterTypeChanged
               (TimeLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

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
  if ((e->fields).count <= (this->fields)._.limit) {
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


/* HighScores GetHighScores() */

HighScores *
MVWorldObject.dll::TimeLimit::TimeLimit_GetHighScores(TimeLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  switch((this->fields).counterType) {
  case 1:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Kill,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  case 2:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Flag,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  case 3:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Collectible,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pGVar1 = (this->fields)._.gameCounterManager;
    this = (TimeLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,(GameStatCounterType__Enum)this,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  case 6:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_OculusKill,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  case 8:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_TimeAttackFlag,
                          1 < (pHVar2->fields)._count,WinningConditionPresentStyle__Enum_OneWinner,0
                          ,(MethodInfo *)0x0);
      return pHVar3;
    }
  }
  cVar4 = '\0';
  uVar5 = 0x10a3;
  func_?();
  uVar6 = func_?(CONCAT22(uVar5,in_CS));
  pcVar7 = (char *)((ulonglong)uVar6 >> 0x20);
  uRam_? = (uint)uVar6;
  *pcVar7 = *pcVar7 + unaff_BL + cVar4;
  pbVar8 = (byte *)(pcVar7 + 0x3d);
  bVar9 = *pbVar8;
  bVar10 = *pbVar8;
  *pbVar8 = bVar10 + unaff_BL + (uRam_? < 0x3dd610a3);
  pcVar7[-0x33ef5cc3] =
       pcVar7[-0x33ef5cc3] + unaff_BL +
       (CARRY1(bVar9,unaff_BL) || CARRY1(bVar10 + unaff_BL,uRam_? < 0x3dd610a3));
  pcVar11 = (code *)swi(3);
  pHVar3 = (HighScores *)(*pcVar11)();
  return pHVar3;
}


/* TimeLimit(WinningCondition, Int32, GameStatCounterManager) */

void MVWorldObject.dll::TimeLimit::TimeLimit__ctor
               (TimeLimit *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,MethodInfo *method)

{
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)this,parent,id,gameCounterManager,0,1,
             GameStatCounterType__Enum_Time_1,WinningConditionPresentStyle__Enum_MultipleWinners,
             (MethodInfo *)0x0);
  return;
}


/* GameStatCounterType get_CounterType() */

GameStatCounterType__Enum
MVWorldObject.dll::TimeLimit::TimeLimit_get_CounterType(TimeLimit *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)this >> 8),(this->fields).counterType);
}


/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::TimeLimit::TimeLimit_get_HighScores(TimeLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  switch((this->fields).counterType) {
  case 1:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Kill,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  case 2:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Flag,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  case 3:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Collectible,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pGVar1 = (this->fields)._.gameCounterManager;
    this = (TimeLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,(GameStatCounterType__Enum)this,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  case 6:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_OculusKill,1 < (pHVar2->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar3;
    }
    break;
  case 8:
    pGVar1 = (this->fields)._.gameCounterManager;
    if ((pGVar1 != (GameStatCounterManager *)0x0) &&
       (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar1,(MethodInfo *)0x0),
       pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_TimeAttackFlag,
                          1 < (pHVar2->fields)._count,WinningConditionPresentStyle__Enum_OneWinner,0
                          ,(MethodInfo *)0x0);
      return pHVar3;
    }
  }
  cVar4 = '\0';
  uVar5 = 0x10a3;
  func_?();
  uVar6 = func_?(CONCAT22(uVar5,in_CS));
  pcVar7 = (char *)((ulonglong)uVar6 >> 0x20);
  uRam_? = (uint)uVar6;
  *pcVar7 = *pcVar7 + unaff_BL + cVar4;
  pbVar8 = (byte *)(pcVar7 + 0x3d);
  bVar9 = *pbVar8;
  bVar10 = *pbVar8;
  *pbVar8 = bVar10 + unaff_BL + (uRam_? < 0x3dd610a3);
  pcVar7[-0x33ef5cc3] =
       pcVar7[-0x33ef5cc3] + unaff_BL +
       (CARRY1(bVar9,unaff_BL) || CARRY1(bVar10 + unaff_BL,uRam_? < 0x3dd610a3));
  pcVar11 = (code *)swi(3);
  pHVar3 = (HighScores *)(*pcVar11)();
  return pHVar3;
}


/* Void set_CounterType(GameStatCounterType) */

void MVWorldObject.dll::TimeLimit::TimeLimit_set_CounterType
               (TimeLimit *this,GameStatCounterType__Enum value,MethodInfo *method)

{
  (this->fields).counterType = (undefined1)value;
  return;
}

