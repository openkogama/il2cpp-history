
/* Void HandleDataBatch(Int32, Int32, QueryType, Boolean, BytePacker) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_HandleDataBatch
               (MVNetworkGame_GameDataQueryManager *this,int32_t instigator,int32_t queryId,
               QueryType__Enum queryType,bool queryDataLeft,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)bp;
    func_?(value + 1,bp);
    bVar1 = cRam_? == '\0';
    value[1].monitor = (MonitorData *)instigator;
    *(undefined1 *)&value[2].klass = (undefined1)queryType;
    if (bVar1) {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).gameDataQueries;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)queryId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                        );
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gameDataQueries;
      if (bVar2 == 0) {
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)queryId,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                  );
      }
      else {
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,queryId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                           );
        if (pOVar3 == (Object *)0x0) goto code_?;
        pOVar4 = pOVar3[1].klass;
        if (pOVar4 == (Object__Class *)0x0) goto code_?;
        value_00 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                             ((BytePacker *)pOVar4,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                  ((BytePacker *)pOVar4,value_00,(MethodInfo *)0x0);
        pOVar4 = pOVar3[1].klass;
        if (value[1].klass == (Object__Class *)0x0) goto code_?;
        queryDataLeft = 0;
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                  ((BytePacker *)value[1].klass,0,(MethodInfo *)0x0);
        if (value[1].klass == (Object__Class *)0x0) goto code_?;
        buffer = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                           ((BytePacker *)value[1].klass,(MethodInfo *)0x0);
        if (pOVar4 == (Object__Class *)0x0) goto code_?;
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_1
                  ((BytePacker *)pOVar4,buffer,(MethodInfo *)0x0);
        queryId = (int32_t)&UNK_?;
      }
      if (queryDataLeft == 0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        this_02 = (this->fields).gameDataQueries;
        if (this_02 ==
            (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
        goto code_?;
        gameDataQuery =
             (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,queryId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                       );
        MVNetworkGame_GameDataQueryManager_InitializeGameQueryData
                  (this,gameDataQuery,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeGameQueryData(MVNetworkGame+GameDataQueryManager+GameDataQuery) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_InitializeGameQueryData
               (MVNetworkGame_GameDataQueryManager *this,
               MVNetworkGame_GameDataQueryManager_GameDataQuery *gameDataQuery,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ReceivedItemFromQueryEventArgs);
    cRam_? = '\x01';
  }
  if (gameDataQuery == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0)
  goto code_?;
  switch((gameDataQuery->fields)._QueryType_k__BackingField) {
  case 1:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar1->fields).ReceivedItemFromQuery ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      return;
    }
    pBVar2 = MVNetworkGame+GameDataQueryManager+GameDataQuery::
              MVNetworkGame_GameDataQueryManager_GameDataQuery_GetBytePacker
                        (gameDataQuery,(MethodInfo *)0x0);
    unaff_EBX = (gameDataQuery->fields).instigatorActorNumber;
    this_01 = (ReceivedItemFromQueryEventArgs *)
              func_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    if (this_01 == (ReceivedItemFromQueryEventArgs *)0x0) goto code_?;
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_01,pBVar2,unaff_EBX,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pEVar3 = (pMVar1->fields).ReceivedItemFromQuery;
    break;
  case 2:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_00 = (pMVar1->fields).worldNetwork;
      pBVar2 = (gameDataQuery->fields).bp;
      if ((pBVar2 != (BytePacker *)0x0) &&
         (MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                    (pBVar2,0,(MethodInfo *)0x0), this_00 != (WorldNetwork *)0x0)) {
        WorldNetwork::WorldNetwork_AddGameQueryDataToGameWorld
                  (this_00,(gameDataQuery->fields).bp,(gameDataQuery->fields).instigatorActorNumber,
                   (MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  case 3:
    pBVar2 = (gameDataQuery->fields).bp;
    if (pBVar2 != (BytePacker *)0x0) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                (pBVar2,0,(MethodInfo *)0x0);
      pBVar2 = (gameDataQuery->fields).bp;
      if (pBVar2 != (BytePacker *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                  (pBVar2,(MethodInfo *)0x0);
        pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
        if (pEVar4 != (Encoding *)0x0) {
          uVar5 = (*(pEVar4->klass->vtable).GetString.methodPtr)(pEVar4);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pAVar6 = (pMVar1->fields).ReceivedAccessoryData, pAVar6 != (Action_1_String_ *)0x0))
          {
            (*(pAVar6->fields)._._.invoke_impl)
                      ((pAVar6->fields)._._.method_code,uVar5,(pAVar6->fields)._._.method);
            return;
          }
        }
      }
    }
    goto code_?;
  case 4:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar1->fields).ReceivedAvatarBodiesFromQuery ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      return;
    }
    pBVar2 = MVNetworkGame+GameDataQueryManager+GameDataQuery::
              MVNetworkGame_GameDataQueryManager_GameDataQuery_GetBytePacker
                        (gameDataQuery,(MethodInfo *)0x0);
    unaff_EBX = (gameDataQuery->fields).instigatorActorNumber;
    this_01 = (ReceivedItemFromQueryEventArgs *)
              func_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    if (this_01 == (ReceivedItemFromQueryEventArgs *)0x0) goto code_?;
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_01,pBVar2,unaff_EBX,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pEVar3 = (pMVar1->fields).ReceivedAvatarBodiesFromQuery;
    break;
  default:
    goto code_?;
  }
  if (pEVar3 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
    (*(pEVar3->fields)._._.invoke_impl)
              ((pEVar3->fields)._._.method_code,this,this_01,(pEVar3->fields)._._.method);
code_?:
    return;
  }
code_?:
  bVar7 = 0;
  sVar8 = func_?();
  pbVar9 = (byte *)(extraout_EDX + -0x17efaf68);
  bVar10 = *pbVar9;
  bVar11 = *pbVar9 + (byte)unaff_EBX;
  *pbVar9 = bVar11 + bVar7;
  pcVar12 = (char *)(extraout_ECX + 0x50 + unaff_EBX * 4);
  *pcVar12 = *pcVar12 + (char)((ushort)sVar8 >> 8) +
            (CARRY1(bVar10,(byte)unaff_EBX) || CARRY1(bVar11,bVar7));
  pcVar13 = (code *)swi(3);
  (*pcVar13)((int)sVar8);
  return;
}


/* Void OnGameQueryReady(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_OnGameQueryReady
               (MVNetworkGame_GameDataQueryManager *this,int32_t queryId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameDataQueries;
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  {
    gameDataQuery =
         (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
         ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                   ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,queryId,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                   );
    MVNetworkGame_GameDataQueryManager_InitializeGameQueryData(this,gameDataQuery,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnGetGameBatch(Int32, MVNetworkGame+GameDataQueryManager+GameDataQuery) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_OnGetGameBatch
               (MVNetworkGame_GameDataQueryManager *this,int32_t queryId,
               MVNetworkGame_GameDataQueryManager_GameDataQuery *gameDataQuery,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).gameDataQueries
  ;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)queryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                      );
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gameDataQueries;
    if (bVar1 == 0) {
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)queryId,(Object *)gameDataQuery,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                  );
        return;
      }
    }
    else if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,queryId,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                         );
      if ((pOVar2 != (Object *)0x0) && (pOVar3 = pOVar2[1].klass, pOVar3 != (Object__Class *)0x0)) {
        value = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                          ((BytePacker *)pOVar3,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                  ((BytePacker *)pOVar3,value,(MethodInfo *)0x0);
        pOVar3 = pOVar2[1].klass;
        if ((gameDataQuery != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
           (pBVar4 = (gameDataQuery->fields).bp, pBVar4 != (BytePacker *)0x0)) {
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                    (pBVar4,0,(MethodInfo *)0x0);
          pBVar4 = (gameDataQuery->fields).bp;
          if (pBVar4 != (BytePacker *)0x0) {
            buffer = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                               (pBVar4,(MethodInfo *)0x0);
            if (pOVar3 != (Object__Class *)0x0) {
              MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_1
                        ((BytePacker *)pOVar3,buffer,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVNetworkGame+GameDataQueryManager() */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager__ctor
               (MVNetworkGame_GameDataQueryManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).gameDataQueries = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

