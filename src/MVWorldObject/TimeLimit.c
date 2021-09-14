
/* Void GameCountersQuery_OnCounterTypeChanged(Object, OnCounterTypeChangedArgs) */

void MVWorldObject.dll::TimeLimit::TimeLimit_GameCountersQuery_OnCounterTypeChanged
               (TimeLimit *this,Object *sender,OnCounterTypeChangedArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e == (OnCounterTypeChangedArgs *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((e->fields).count <= (this->fields)._.limit) {
    this_01 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__System__EventArgs);
    Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              (this->fields)._.OnWinningConditionChanged;
    (this->fields)._.forfilled = 1;
    (this->fields)._.instigatorCounterTypeChangedEvent = e;
    if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)this_01,
                 MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                );
    }
  }
  return;
}


/* HighScores GetHighScores() */

HighScores *
MVWorldObject.dll::TimeLimit::TimeLimit_GetHighScores(TimeLimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch((this->fields).counterType) {
  case 1:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Kill,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 2:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Flag,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 3:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Collectible,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pGVar1 = (this->fields)._.gameCounterManager;
    method = unaff_EDI;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_None,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 6:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_OculusKill,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 8:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_TimeAttackFlag,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
  }
  cVar5 = '\0';
  func_?();
  iVar6 = func_?();
  *(char *)(iVar6 + -0x61) = *(char *)(iVar6 + -0x61) + (char)iVar6 + cVar5;
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)0x0,(WinningCondition *)method,in_stack_7,in_stack_8,
             0,1,GameStatCounterType__Enum_Time_1,WinningConditionPresentStyle__Enum_MultipleWinners
             ,(MethodInfo *)0x0);
  return extraout_EAX;
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
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch((this->fields).counterType) {
  case 1:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Kill,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 2:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Flag,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 3:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_Collectible,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  default:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pGVar1 = (this->fields)._.gameCounterManager;
    method = unaff_EDI;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_None,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_MultipleWinners,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 6:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_OculusKill,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
    break;
  case 8:
    pGVar1 = (this->fields)._.gameCounterManager;
    if (((pGVar1 != (GameStatCounterManager *)0x0) &&
        (pHVar2 = GameStatCounterManager::GameStatCounterManager_get_ActiveTeams
                            (pGVar1,(MethodInfo *)0x0),
        pHVar2 != (HashSet_1_MV_WorldObject_MVTeam_ *)0x0)) &&
       (JVar3 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pHVar2,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MVTeam>__get_Count__
                          ), pGVar1 != (GameStatCounterManager *)0x0)) {
      pHVar4 = GameStatCounterManager::GameStatCounterManager_GetHighScores
                         (pGVar1,GameStatCounterType__Enum_TimeAttackFlag,1 < (int)JVar3,
                          WinningConditionPresentStyle__Enum_OneWinner,0,(MethodInfo *)0x0);
      return pHVar4;
    }
  }
  cVar5 = '\0';
  func_?();
  iVar6 = func_?();
  *(char *)(iVar6 + -0x61) = *(char *)(iVar6 + -0x61) + (char)iVar6 + cVar5;
  WinningCondition::WinningCondition__ctor
            ((WinningCondition *)0x0,(WinningCondition *)method,in_stack_7,in_stack_8,
             0,1,GameStatCounterType__Enum_Time_1,WinningConditionPresentStyle__Enum_MultipleWinners
             ,(MethodInfo *)0x0);
  return extraout_EAX;
}

