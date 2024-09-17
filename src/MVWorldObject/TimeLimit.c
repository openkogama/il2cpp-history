
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
  pTVar1 = this;
  switch((this->fields).counterType) {
  case 1:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_Kill,1 < (pHVar3->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 2:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_Flag,1 < (pHVar3->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 3:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_Collectible,1 < (pHVar3->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                     );
      cRam_? = '\x01';
    }
    unaff_EBX = (this->fields)._.gameCounterManager;
    this = (TimeLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
    pTVar1 = (TimeLimit *)0x0;
    if (unaff_EBX != (GameStatCounterManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                       );
        func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
        cRam_? = '\x01';
      }
      pTVar1 = (TimeLimit *)(unaff_EBX->fields).activeTeams;
      this_00 = (HashSet_1_System_Int32Enum_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum___ctor_1
                (this_00,(IEnumerable_1_System_Int32Enum_ *)pTVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                );
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                           (unaff_EBX,(GameStatCounterType__Enum)this,1 < (this_00->fields)._count,
                            WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
        return pHVar4;
      }
    }
    break;
  case 6:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_OculusKill,1 < (pHVar3->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 8:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_TimeAttackFlag,
                          1 < (pHVar3->fields)._count,WinningConditionPresentStyle__Enum_OneWinner,0
                          ,(MethodInfo *)0x0);
      return pHVar4;
    }
  }
  uVar5 = func_?();
  iVar6 = (int)((ulonglong)uVar5 >> 0x20);
  uVar7 = (undefined2)((ulonglong)uVar5 >> 0x20);
  out(uVar7,(char)uVar5);
  pbVar8 = (byte *)(iVar6 + -10);
  bVar9 = *pbVar8;
  bVar10 = (byte)((uint)unaff_EBX >> 8);
  *pbVar8 = *pbVar8 + bVar10;
  out(uVar7,(char)uVar5);
  pcVar11 = (char *)(iVar6 + 0x7a10eef6);
  *pcVar11 = *pcVar11 + bVar10 + CARRY1(bVar9,bVar10);
  lVar12 = (longlong)(int)uVar5 * (longlong)(int)pTVar1;
  bVar13 = (int)lVar12 != lVar12;
  pbVar8 = (byte *)((int)((ulonglong)lVar12 >> 0x20) + -9);
  bVar9 = *pbVar8;
  bVar14 = *pbVar8;
  *pbVar8 = bVar14 + bVar10 + bVar13;
  out((short)((ulonglong)lVar12 >> 0x20),(char)lVar12);
  pcVar11 = (char *)CONCAT31((int3)((ulonglong)lVar12 >> 0x28),
                             (char)((ulonglong)lVar12 >> 0x20) + bVar10 +
                             (CARRY1(bVar9,bVar10) || CARRY1(bVar14 + bVar10,bVar13)));
  sVar15 = (short)(char)lVar12 * (short)(char)((ulonglong)lVar12 >> 0x28);
  bVar13 = (char)sVar15 != sVar15;
  pbVar8 = (byte *)(pcVar11 + -9);
  bVar9 = *pbVar8;
  bVar14 = *pbVar8;
  *pbVar8 = bVar14 + bVar10 + bVar13;
  out((short)pcVar11,(char)sVar15);
  *pcVar11 = *pcVar11 + bVar10 + (CARRY1(bVar9,bVar10) || CARRY1(bVar14 + bVar10,bVar13));
  pcVar16 = (code *)swi(3);
  pHVar4 = (HighScores *)(*pcVar16)();
  return pHVar4;
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
  pTVar1 = this;
  switch((this->fields).counterType) {
  case 1:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_Kill,1 < (pHVar3->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 2:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_Flag,1 < (pHVar3->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 3:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_Collectible,1 < (pHVar3->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                     );
      cRam_? = '\x01';
    }
    unaff_EBX = (this->fields)._.gameCounterManager;
    this = (TimeLimit *)CONCAT31(this._1_3_,(this->fields)._.gameStatCounterType);
    pTVar1 = (TimeLimit *)0x0;
    if (unaff_EBX != (GameStatCounterManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                       );
        func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
        cRam_? = '\x01';
      }
      pTVar1 = (TimeLimit *)(unaff_EBX->fields).activeTeams;
      this_00 = (HashSet_1_System_Int32Enum_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum___ctor_1
                (this_00,(IEnumerable_1_System_Int32Enum_ *)pTVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                );
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                           (unaff_EBX,(GameStatCounterType__Enum)this,1 < (this_00->fields)._count,
                            WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
        return pHVar4;
      }
    }
    break;
  case 6:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_OculusKill,1 < (pHVar3->fields)._count,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 8:
    pGVar2 = (this->fields)._.gameCounterManager;
    if ((pGVar2 != (GameStatCounterManager *)0x0) &&
       (pHVar3 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                           (pGVar2,(MethodInfo *)0x0),
       pHVar3 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar2,GameStatCounterType__Enum_TimeAttackFlag,
                          1 < (pHVar3->fields)._count,WinningConditionPresentStyle__Enum_OneWinner,0
                          ,(MethodInfo *)0x0);
      return pHVar4;
    }
  }
  uVar5 = func_?();
  iVar6 = (int)((ulonglong)uVar5 >> 0x20);
  uVar7 = (undefined2)((ulonglong)uVar5 >> 0x20);
  out(uVar7,(char)uVar5);
  pbVar8 = (byte *)(iVar6 + -10);
  bVar9 = *pbVar8;
  bVar10 = (byte)((uint)unaff_EBX >> 8);
  *pbVar8 = *pbVar8 + bVar10;
  out(uVar7,(char)uVar5);
  pcVar11 = (char *)(iVar6 + 0x7a10eef6);
  *pcVar11 = *pcVar11 + bVar10 + CARRY1(bVar9,bVar10);
  lVar12 = (longlong)(int)uVar5 * (longlong)(int)pTVar1;
  bVar13 = (int)lVar12 != lVar12;
  pbVar8 = (byte *)((int)((ulonglong)lVar12 >> 0x20) + -9);
  bVar9 = *pbVar8;
  bVar14 = *pbVar8;
  *pbVar8 = bVar14 + bVar10 + bVar13;
  out((short)((ulonglong)lVar12 >> 0x20),(char)lVar12);
  pcVar11 = (char *)CONCAT31((int3)((ulonglong)lVar12 >> 0x28),
                             (char)((ulonglong)lVar12 >> 0x20) + bVar10 +
                             (CARRY1(bVar9,bVar10) || CARRY1(bVar14 + bVar10,bVar13)));
  sVar15 = (short)(char)lVar12 * (short)(char)((ulonglong)lVar12 >> 0x28);
  bVar13 = (char)sVar15 != sVar15;
  pbVar8 = (byte *)(pcVar11 + -9);
  bVar9 = *pbVar8;
  bVar14 = *pbVar8;
  *pbVar8 = bVar14 + bVar10 + bVar13;
  out((short)pcVar11,(char)sVar15);
  *pcVar11 = *pcVar11 + bVar10 + (CARRY1(bVar9,bVar10) || CARRY1(bVar14 + bVar10,bVar13));
  pcVar16 = (code *)swi(3);
  pHVar4 = (HighScores *)(*pcVar16)();
  return pHVar4;
}

