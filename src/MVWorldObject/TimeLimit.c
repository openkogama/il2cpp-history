
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
    ppOVar2 = &(this->fields)._.instigatorCounterTypeChangedEvent;
    (this->fields)._.forfilled = 1;
    *ppOVar2 = e;
    func_?(ppOVar2,e);
    pEVar3 = (this->fields)._.OnWinningConditionChanged;
    if (pEVar3 != (EventHandler_1_EventArgs_ *)0x0) {
      (*(pEVar3->fields)._._.invoke_impl)
                ((pEVar3->fields)._._.method_code,this,this_00,(pEVar3->fields)._._.method);
    }
  }
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* HighScores GetHighScores() */

HighScores *
MVWorldObject.dll::TimeLimit::TimeLimit_GetHighScores(TimeLimit *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  switch((this->fields).counterType) {
  case 1:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,GameStatCounterType__Enum_Kill,
                             1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
    break;
  case 2:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,GameStatCounterType__Enum_Flag,
                             1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
    break;
  case 3:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,GameStatCounterType__Enum_Collectible
                             ,1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pTVar4 = &this->fields;
    unaff_EDI = (this->fields)._.gameCounterManager;
    this = (TimeLimit *)CONCAT31((int3)((uint)unaff_EBX >> 8),(pTVar4->_).gameStatCounterType);
    bVar1 = (int)unaff_EDI < 0;
    if (unaff_EDI != (GameStatCounterManager *)0x0) {
      if (cRam_? != '\0') goto code_?;
      goto code_?;
    }
    break;
  case 6:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,GameStatCounterType__Enum_OculusKill,
                             1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
    break;
  case 8:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,
                             GameStatCounterType__Enum_TimeAttackFlag,1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
  }
  do {
    bVar5 = 0;
    sVar6 = func_?();
    if (bVar1) {
      uVar7 = (undefined1)sVar6;
      out((short)extraout_EDX,uVar7);
      ppHVar8 = (HashSet_1_MV_WorldObject_MVTeam_ **)
                &this_01[-0x44fb08].fields._.gameStatCounterType;
      bVar9 = (byte)((uint)extraout_EDX >> 8);
      bVar10 = *(char *)ppHVar8 + bVar9;
      bVar1 = CARRY1(*(byte *)ppHVar8,bVar9) || CARRY1(bVar10,bVar5);
      *(byte *)ppHVar8 = bVar10 + bVar5;
      pbVar11 = (byte *)(int)sVar6;
      out((short)extraout_EDX,uVar7);
      pbVar12 = (byte *)(extraout_EDX + -0x55ef1167);
      bVar13 = CARRY1(*pbVar12,extraout_CH) || CARRY1(*pbVar12 + extraout_CH,bVar1);
      *pbVar12 = *pbVar12 + extraout_CH + bVar1;
      sVar14 = sVar6 >> 0xf;
      out(sVar14,uVar7);
      bVar5 = *pbVar11;
      bVar10 = *pbVar11 + (char)(sVar6 >> 7);
      *pbVar11 = bVar10 + bVar13;
      out(sVar14,uVar7);
      pcVar15 = (char *)(((int)pbVar11 >> 0x1f) + 0x6d10ee99);
      *pcVar15 = *pcVar15 + extraout_CH + (CARRY1(bVar5,(byte)(sVar6 >> 7)) || CARRY1(bVar10,bVar13));
      out(sVar14,uVar7);
      pcVar16 = (code *)swi(3);
      pHVar3 = (HighScores *)(*pcVar16)();
      return pHVar3;
    }
code_?:
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
    cRam_? = '\x01';
code_?:
    this_01 = (TimeLimit *)(unaff_EDI->fields).activeTeams;
    this_00 = (HashSet_1_System_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum___ctor_1
              (this_00,(IEnumerable_1_System_Int32Enum_ *)this_01,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
              );
    bVar1 = (int)this_00 < 0;
  } while (this_00 == (HashSet_1_System_Int32Enum_ *)0x0);
  pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                      (unaff_EDI,(GameStatCounterType__Enum)this,1 < (this_00->fields)._count,
                       WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* HighScores get_HighScores() */

HighScores *
MVWorldObject.dll::TimeLimit::TimeLimit_get_HighScores(TimeLimit *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  switch((this->fields).counterType) {
  case 1:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,GameStatCounterType__Enum_Kill,
                             1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
    break;
  case 2:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,GameStatCounterType__Enum_Flag,
                             1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
    break;
  case 3:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,GameStatCounterType__Enum_Collectible
                             ,1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pTVar4 = &this->fields;
    unaff_EDI = (this->fields)._.gameCounterManager;
    this = (TimeLimit *)CONCAT31((int3)((uint)unaff_EBX >> 8),(pTVar4->_).gameStatCounterType);
    bVar1 = (int)unaff_EDI < 0;
    if (unaff_EDI != (GameStatCounterManager *)0x0) {
      if (cRam_? != '\0') goto code_?;
      goto code_?;
    }
    break;
  case 6:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,GameStatCounterType__Enum_OculusKill,
                             1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
    break;
  case 8:
    this_01 = (TimeLimit *)(this->fields)._.gameCounterManager;
    bVar1 = (int)this_01 < 0;
    if (this_01 != (TimeLimit *)0x0) {
      pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                         ((GameStatCounterManager *)this_01,(MethodInfo *)0x0);
      bVar1 = (int)pHVar2 < 0;
      if (pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0) {
        pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                            ((GameStatCounterManager *)this_01,
                             GameStatCounterType__Enum_TimeAttackFlag,1 < (pHVar2->fields)._count,
                             WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
        return pHVar3;
      }
    }
  }
  do {
    bVar5 = 0;
    sVar6 = func_?();
    if (bVar1) {
      uVar7 = (undefined1)sVar6;
      out((short)extraout_EDX,uVar7);
      ppHVar8 = (HashSet_1_MV_WorldObject_MVTeam_ **)
                &this_01[-0x44fb08].fields._.gameStatCounterType;
      bVar9 = (byte)((uint)extraout_EDX >> 8);
      bVar10 = *(char *)ppHVar8 + bVar9;
      bVar1 = CARRY1(*(byte *)ppHVar8,bVar9) || CARRY1(bVar10,bVar5);
      *(byte *)ppHVar8 = bVar10 + bVar5;
      pbVar11 = (byte *)(int)sVar6;
      out((short)extraout_EDX,uVar7);
      pbVar12 = (byte *)(extraout_EDX + -0x55ef1167);
      bVar13 = CARRY1(*pbVar12,extraout_CH) || CARRY1(*pbVar12 + extraout_CH,bVar1);
      *pbVar12 = *pbVar12 + extraout_CH + bVar1;
      sVar14 = sVar6 >> 0xf;
      out(sVar14,uVar7);
      bVar5 = *pbVar11;
      bVar10 = *pbVar11 + (char)(sVar6 >> 7);
      *pbVar11 = bVar10 + bVar13;
      out(sVar14,uVar7);
      pcVar15 = (char *)(((int)pbVar11 >> 0x1f) + 0x6d10ee99);
      *pcVar15 = *pcVar15 + extraout_CH + (CARRY1(bVar5,(byte)(sVar6 >> 7)) || CARRY1(bVar10,bVar13));
      out(sVar14,uVar7);
      pcVar16 = (code *)swi(3);
      pHVar3 = (HighScores *)(*pcVar16)();
      return pHVar3;
    }
code_?:
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>);
    cRam_? = '\x01';
code_?:
    this_01 = (TimeLimit *)(unaff_EDI->fields).activeTeams;
    this_00 = (HashSet_1_System_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum___ctor_1
              (this_00,(IEnumerable_1_System_Int32Enum_ *)this_01,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__HashSet_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
              );
    bVar1 = (int)this_00 < 0;
  } while (this_00 == (HashSet_1_System_Int32Enum_ *)0x0);
  pHVar3 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                      (unaff_EDI,(GameStatCounterType__Enum)this,1 < (this_00->fields)._count,
                       WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
  return pHVar3;
}

