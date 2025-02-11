
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
  bVar3 = 0;
  uVar4 = func_?();
  uVar5 = (undefined4)uVar4;
  *(char *)&unaff_EDI->klass = (char)uVar4;
  out((short)((ulonglong)uVar4 >> 0x20),uVar5);
  bVar6 = (byte)((ulonglong)uVar4 >> 0x20);
  bVar7 = bVar6 + extraout_CH;
  bVar8 = CARRY1(bVar6,extraout_CH) || CARRY1(bVar7,bVar3);
  uVar9 = (undefined3)((ulonglong)uVar4 >> 0x28);
  bVar7 = bVar7 + bVar3;
  pbVar10 = (byte *)CONCAT31(uVar9,bVar7);
  out((short)pbVar10,uVar5);
  bVar11 = *pbVar10;
  bVar12 = *pbVar10 + extraout_CH;
  bVar13 = CARRY1(*pbVar10,extraout_CH) || CARRY1(bVar12,bVar8);
  *pbVar10 = bVar12 + bVar8;
  bVar6 = *pbVar10;
  bVar14 = *pbVar10;
  bVar3 = *pbVar10;
  out((short)pbVar10,uVar5);
  bVar15 = bVar7 + extraout_CH;
  bVar16 = CARRY1(bVar7,extraout_CH) || CARRY1(bVar15,bVar13);
  bVar17 = bVar15 + bVar13;
  out((short)CONCAT31(uVar9,bVar17),uVar5);
  bVar18 = bVar17 + extraout_CH;
  bVar19 = CARRY1(bVar17,extraout_CH) || CARRY1(bVar18,bVar16);
  bVar20 = bVar18 + bVar16;
  uVar21 = (undefined2)CONCAT31(uVar9,bVar20);
  out(uVar21,uVar5);
  pbVar10 = (byte *)(CONCAT31(uVar9,bVar20) + -100);
  bVar22 = CARRY1(*pbVar10,extraout_CH) || CARRY1(*pbVar10 + extraout_CH,bVar19);
  *pbVar10 = *pbVar10 + extraout_CH + bVar19;
  out(uVar21,uVar5);
  iVar23 = CONCAT31(uVar9,bVar20 + extraout_CH + bVar22);
  out((short)iVar23,uVar5);
  pcVar24 = (char *)(iVar23 + -0x33ef1064);
  *pcVar24 = *pcVar24 + extraout_CH +
            (CARRY1(bVar20,extraout_CH) || CARRY1(bVar20 + extraout_CH,bVar22));
  pcVar25 = (code *)swi(3);
  pHVar2 = (HighScores *)
           (*pcVar25)((uint)(in_NT & 1) * 0x4000 |
                     (uint)(SCARRY1(bVar17,extraout_CH) != SCARRY1(bVar18,bVar16)) * 0x800 |
                     (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                     (uint)((char)bVar20 < '\0') * 0x80 | (uint)(bVar20 == 0) * 0x40 |
                     (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar20) & 1U) == 0) * 4 |
                     (uint)bVar19 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                     (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000,
                     (uint)(in_NT & 1) * 0x4000 |
                     (uint)(SCARRY1(bVar7,extraout_CH) != SCARRY1(bVar15,bVar13)) * 0x800 |
                     (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                     (uint)((char)bVar17 < '\0') * 0x80 | (uint)(bVar17 == 0) * 0x40 |
                     (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar17) & 1U) == 0) * 4 |
                     (uint)bVar16 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                     (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000,
                     (uint)(in_NT & 1) * 0x4000 |
                     (uint)(SCARRY1(bVar11,extraout_CH) != SCARRY1(bVar12,bVar8)) * 0x800 |
                     (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                     (uint)((char)bVar6 < '\0') * 0x80 | (uint)(bVar14 == 0) * 0x40 |
                     (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar3) & 1U) == 0) * 4 |
                     (uint)bVar13 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                     (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
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
  bVar3 = 0;
  uVar4 = func_?();
  uVar5 = (undefined4)uVar4;
  *(char *)&unaff_EDI->klass = (char)uVar4;
  out((short)((ulonglong)uVar4 >> 0x20),uVar5);
  bVar6 = (byte)((ulonglong)uVar4 >> 0x20);
  bVar7 = bVar6 + extraout_CH;
  bVar8 = CARRY1(bVar6,extraout_CH) || CARRY1(bVar7,bVar3);
  uVar9 = (undefined3)((ulonglong)uVar4 >> 0x28);
  bVar7 = bVar7 + bVar3;
  pbVar10 = (byte *)CONCAT31(uVar9,bVar7);
  out((short)pbVar10,uVar5);
  bVar11 = *pbVar10;
  bVar12 = *pbVar10 + extraout_CH;
  bVar13 = CARRY1(*pbVar10,extraout_CH) || CARRY1(bVar12,bVar8);
  *pbVar10 = bVar12 + bVar8;
  bVar6 = *pbVar10;
  bVar14 = *pbVar10;
  bVar3 = *pbVar10;
  out((short)pbVar10,uVar5);
  bVar15 = bVar7 + extraout_CH;
  bVar16 = CARRY1(bVar7,extraout_CH) || CARRY1(bVar15,bVar13);
  bVar17 = bVar15 + bVar13;
  out((short)CONCAT31(uVar9,bVar17),uVar5);
  bVar18 = bVar17 + extraout_CH;
  bVar19 = CARRY1(bVar17,extraout_CH) || CARRY1(bVar18,bVar16);
  bVar20 = bVar18 + bVar16;
  uVar21 = (undefined2)CONCAT31(uVar9,bVar20);
  out(uVar21,uVar5);
  pbVar10 = (byte *)(CONCAT31(uVar9,bVar20) + -100);
  bVar22 = CARRY1(*pbVar10,extraout_CH) || CARRY1(*pbVar10 + extraout_CH,bVar19);
  *pbVar10 = *pbVar10 + extraout_CH + bVar19;
  out(uVar21,uVar5);
  iVar23 = CONCAT31(uVar9,bVar20 + extraout_CH + bVar22);
  out((short)iVar23,uVar5);
  pcVar24 = (char *)(iVar23 + -0x33ef1064);
  *pcVar24 = *pcVar24 + extraout_CH +
            (CARRY1(bVar20,extraout_CH) || CARRY1(bVar20 + extraout_CH,bVar22));
  pcVar25 = (code *)swi(3);
  pHVar2 = (HighScores *)
           (*pcVar25)((uint)(in_NT & 1) * 0x4000 |
                     (uint)(SCARRY1(bVar17,extraout_CH) != SCARRY1(bVar18,bVar16)) * 0x800 |
                     (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                     (uint)((char)bVar20 < '\0') * 0x80 | (uint)(bVar20 == 0) * 0x40 |
                     (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar20) & 1U) == 0) * 4 |
                     (uint)bVar19 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                     (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000,
                     (uint)(in_NT & 1) * 0x4000 |
                     (uint)(SCARRY1(bVar7,extraout_CH) != SCARRY1(bVar15,bVar13)) * 0x800 |
                     (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                     (uint)((char)bVar17 < '\0') * 0x80 | (uint)(bVar17 == 0) * 0x40 |
                     (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar17) & 1U) == 0) * 4 |
                     (uint)bVar16 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                     (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000,
                     (uint)(in_NT & 1) * 0x4000 |
                     (uint)(SCARRY1(bVar11,extraout_CH) != SCARRY1(bVar12,bVar8)) * 0x800 |
                     (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                     (uint)((char)bVar6 < '\0') * 0x80 | (uint)(bVar14 == 0) * 0x40 |
                     (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar3) & 1U) == 0) * 4 |
                     (uint)bVar13 | (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                     (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
  return pHVar2;
}

