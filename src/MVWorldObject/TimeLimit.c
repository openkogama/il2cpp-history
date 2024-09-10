
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::TimeLimit::TimeLimit_GameCountersQuery_OnCounterTypeChanged
               (TimeLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if (e == (OnCounterTypeChangedArgs *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((e->fields).count <= (this->fields)._.limit) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__System__EventArgs);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
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
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_Kill,1 < (pHVar1->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  case 2:
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_Flag,1 < (pHVar1->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  case 3:
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_Collectible,
                          1 < (pHVar1->fields)._count,WinningConditionPresentStyle__Enum_OneWinner,0
                          ,(MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                     );
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._.gameCounterManager;
    this = (TimeLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
    if (this_00 != (GameStatCounterManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                       );
        func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
        cRam_? = '\x01';
      }
      pHVar1 = (this_00->fields).activeTeams;
      this_01 = (HashSet_1_System_Int32Enum_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum___ctor_1
                (this_01,(IEnumerable_1_System_Int32Enum_ *)pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                );
      unaff_EDI = (GameStatCounterManager *)0x0;
      if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
        pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                           (this_00,(GameStatCounterType__Enum)this,1 < (this_01->fields)._count,
                            WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
        return pHVar2;
      }
    }
    break;
  case 6:
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_OculusKill,1 < (pHVar1->fields)._count
                          ,WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  case 8:
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_TimeAttackFlag,
                          1 < (pHVar1->fields)._count,WinningConditionPresentStyle__Enum_OneWinner,0
                          ,(MethodInfo *)0x0);
      return pHVar2;
    }
  }
  uVar3 = func_?();
  *(undefined1 *)&unaff_EDI->klass = uVar3;
  uVar4 = (undefined3)((uint)extraout_EDX >> 8);
  bVar5 = (char)extraout_EDX + extraout_CH + (extraout_ST0 < in_ST6);
  pbVar6 = (byte *)CONCAT31(uVar4,bVar5);
  bVar7 = CARRY1(*pbVar6,extraout_CH) || CARRY1(*pbVar6 + extraout_CH,extraout_ST0 < in_ST6);
  *pbVar6 = *pbVar6 + extraout_CH + (extraout_ST0 < in_ST6);
  bVar8 = CARRY1(bVar5,extraout_CH) || CARRY1(bVar5 + extraout_CH,bVar7);
  bVar9 = bVar5 + extraout_CH + bVar7;
  bVar5 = bVar9 + extraout_CH;
  bVar7 = CARRY1(bVar9,extraout_CH) || CARRY1(bVar5,bVar8);
  bVar5 = bVar5 + bVar8;
  pbVar6 = (byte *)(CONCAT31(uVar4,bVar5) + -0x24);
  bVar8 = CARRY1(*pbVar6,extraout_CH) || CARRY1(*pbVar6 + extraout_CH,bVar7);
  *pbVar6 = *pbVar6 + extraout_CH + bVar7;
  out((short)CONCAT31(uVar4,bVar5),uVar3);
  pcVar10 = (char *)(CONCAT31(uVar4,bVar5 + extraout_CH + bVar8) + -0x33ef1124);
  *pcVar10 = *pcVar10 + extraout_CH +
            (CARRY1(bVar5,extraout_CH) || CARRY1(bVar5 + extraout_CH,bVar8));
  pcVar11 = (code *)swi(3);
  pHVar2 = (HighScores *)(*pcVar11)();
  return pHVar2;
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
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_Kill,1 < (pHVar1->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  case 2:
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_Flag,1 < (pHVar1->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  case 3:
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_Collectible,
                          1 < (pHVar1->fields)._count,WinningConditionPresentStyle__Enum_OneWinner,0
                          ,(MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                     );
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._.gameCounterManager;
    this = (TimeLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
    if (this_00 != (GameStatCounterManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                       );
        func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
        cRam_? = '\x01';
      }
      pHVar1 = (this_00->fields).activeTeams;
      this_01 = (HashSet_1_System_Int32Enum_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum___ctor_1
                (this_01,(IEnumerable_1_System_Int32Enum_ *)pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                );
      unaff_EDI = (GameStatCounterManager *)0x0;
      if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
        pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                           (this_00,(GameStatCounterType__Enum)this,1 < (this_01->fields)._count,
                            WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
        return pHVar2;
      }
    }
    break;
  case 6:
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_OculusKill,1 < (pHVar1->fields)._count
                          ,WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar2;
    }
    break;
  case 8:
    unaff_EDI = (this->fields)._.gameCounterManager;
    if ((unaff_EDI != (GameStatCounterManager *)0x0) &&
       (pHVar1 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (unaff_EDI,(MethodInfo *)0x0),
       pHVar1 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (unaff_EDI,GameStatCounterType__Enum_TimeAttackFlag,
                          1 < (pHVar1->fields)._count,WinningConditionPresentStyle__Enum_OneWinner,0
                          ,(MethodInfo *)0x0);
      return pHVar2;
    }
  }
  uVar3 = func_?();
  *(undefined1 *)&unaff_EDI->klass = uVar3;
  uVar4 = (undefined3)((uint)extraout_EDX >> 8);
  bVar5 = (char)extraout_EDX + extraout_CH + (extraout_ST0 < in_ST6);
  pbVar6 = (byte *)CONCAT31(uVar4,bVar5);
  bVar7 = CARRY1(*pbVar6,extraout_CH) || CARRY1(*pbVar6 + extraout_CH,extraout_ST0 < in_ST6);
  *pbVar6 = *pbVar6 + extraout_CH + (extraout_ST0 < in_ST6);
  bVar8 = CARRY1(bVar5,extraout_CH) || CARRY1(bVar5 + extraout_CH,bVar7);
  bVar9 = bVar5 + extraout_CH + bVar7;
  bVar5 = bVar9 + extraout_CH;
  bVar7 = CARRY1(bVar9,extraout_CH) || CARRY1(bVar5,bVar8);
  bVar5 = bVar5 + bVar8;
  pbVar6 = (byte *)(CONCAT31(uVar4,bVar5) + -0x24);
  bVar8 = CARRY1(*pbVar6,extraout_CH) || CARRY1(*pbVar6 + extraout_CH,bVar7);
  *pbVar6 = *pbVar6 + extraout_CH + bVar7;
  out((short)CONCAT31(uVar4,bVar5),uVar3);
  pcVar10 = (char *)(CONCAT31(uVar4,bVar5 + extraout_CH + bVar8) + -0x33ef1124);
  *pcVar10 = *pcVar10 + extraout_CH +
            (CARRY1(bVar5,extraout_CH) || CARRY1(bVar5 + extraout_CH,bVar8));
  pcVar11 = (code *)swi(3);
  pHVar2 = (HighScores *)(*pcVar11)();
  return pHVar2;
}

