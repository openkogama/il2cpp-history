
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
  method_00 = TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
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
  pDVar2 = (this->fields).gameDataQueries;
  if (pDVar2 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,queryId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                    );
  pDVar2 = (this->fields).gameDataQueries;
  if (bVar3 == 0) {
    if (pDVar2 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0
       ) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,queryId,value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
              );
  }
  else {
    if (pDVar2 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0
       ) goto code_?;
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,queryId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                       );
    if (pOVar4 == (Object *)0x0) goto code_?;
    pOVar5 = pOVar4[1].klass;
    if (pOVar5 == (Object__Class *)0x0) goto code_?;
    value_00 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                         ((BytePacker *)pOVar5,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              ((BytePacker *)pOVar5,value_00,(MethodInfo *)0x0);
    pOVar5 = pOVar4[1].klass;
    if (value[1].klass == (Object__Class *)0x0) goto code_?;
    queryDataLeft = 0xa8;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              ((BytePacker *)value[1].klass,0,(MethodInfo *)0x0);
    if (value[1].klass == (Object__Class *)0x0) goto code_?;
    buffer = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                       ((BytePacker *)value[1].klass,(MethodInfo *)0x0);
    if (pOVar5 == (Object__Class *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_1
              ((BytePacker *)pOVar5,buffer,(MethodInfo *)0x0);
    queryId = 0;
  }
  if (queryDataLeft == 0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields).gameDataQueries;
    if (pDVar2 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0
       ) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    gameDataQuery =
         (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
         Dictionary_2_System_Int32_System_Object__get_Item
                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,queryId,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                   );
    MVNetworkGame_GameDataQueryManager_InitializeGameQueryData(this,gameDataQuery,(MethodInfo *)0x0)
    ;
  }
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
    iVar3 = (gameDataQuery->fields).instigatorActorNumber;
    this_01 = (ReceivedItemFromQueryEventArgs *)
              func_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_01,pBVar2,iVar3,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pEVar4 = (pMVar1->fields).ReceivedItemFromQuery;
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
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray(pBVar2,(MethodInfo *)0x0)
        ;
        pEVar5 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
        if (pEVar5 != (Encoding *)0x0) {
          uVar6 = (*(code *)(pEVar5->klass->vtable).GetString.method)(pEVar5);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pAVar7 = (pMVar1->fields).ReceivedAccessoryData, pAVar7 != (Action_1_String_ *)0x0)) {
            (*(pAVar7->fields)._._.invoke_impl)
                      ((pAVar7->fields)._._.method_code,uVar6,(pAVar7->fields)._._.method);
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
    iVar3 = (gameDataQuery->fields).instigatorActorNumber;
    this_01 = (ReceivedItemFromQueryEventArgs *)
              func_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_01,pBVar2,iVar3,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pEVar4 = (pMVar1->fields).ReceivedAvatarBodiesFromQuery;
    break;
  default:
    goto code_?;
  }
  if (pEVar4 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
    (*(pEVar4->fields)._._.invoke_impl)
              ((pEVar4->fields)._._.method_code,this,this_01,(pEVar4->fields)._._.method);
code_?:
    return;
  }
code_?:
  func_?();
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
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
         Dictionary_2_System_Int32_System_Object__get_Item
                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,queryId,
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
  pDVar1 = (this->fields).gameDataQueries;
  if (pDVar1 != (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,queryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                      );
    pDVar1 = (this->fields).gameDataQueries;
    if (bVar2 == 0) {
      if (pDVar1 != (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)
                    0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,queryId,
                   (Object *)gameDataQuery,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                  );
        return;
      }
    }
    else if (pDVar1 != (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_
                        *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,queryId,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                         );
      if ((pOVar3 != (Object *)0x0) && (pOVar4 = pOVar3[1].klass, pOVar4 != (Object__Class *)0x0)) {
        value = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                          ((BytePacker *)pOVar4,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                  ((BytePacker *)pOVar4,value,(MethodInfo *)0x0);
        pOVar4 = pOVar3[1].klass;
        if ((gameDataQuery != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
           (pBVar5 = (gameDataQuery->fields).bp, pBVar5 != (BytePacker *)0x0)) {
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                    (pBVar5,0,(MethodInfo *)0x0);
          pBVar5 = (gameDataQuery->fields).bp;
          if (pBVar5 != (BytePacker *)0x0) {
            buffer = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                               (pBVar5,(MethodInfo *)0x0);
            if (pOVar4 != (Object__Class *)0x0) {
              MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_1
                        ((BytePacker *)pOVar4,buffer,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).gameDataQueries =
       (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

