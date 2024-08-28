
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
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pOVar2 = pOVar1 + 1;
  pOVar2->klass = (Object__Class *)bp;
  func_?(pOVar2,bp);
  bVar3 = cRam_? == '\0';
  pOVar1[1].monitor = (MonitorData *)instigator;
  *(undefined1 *)&pOVar1[2].klass = (undefined1)queryType;
  if (bVar3) {
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
  pDVar4 = (this->fields).gameDataQueries;
  if (pDVar4 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  goto code_?;
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32_System_Single_ *)pDVar4,queryId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                    );
  pDVar4 = (this->fields).gameDataQueries;
  if (bVar5 == 0) {
    if (pDVar4 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0
       ) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,queryId,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
              );
  }
  else {
    if (pDVar4 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0
       ) goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,queryId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    this_00 = pOVar1[1].klass;
    if (this_00 == (Object__Class *)0x0) goto code_?;
    value = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                      ((BytePacker *)this_00,(MethodInfo *)0x0);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              ((BytePacker *)this_00,value,(MethodInfo *)0x0);
    this_01 = pBRam00000008;
    if (pOVar2->klass == (Object__Class *)0x0) goto code_?;
    queryDataLeft = 0x62;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              ((BytePacker *)pOVar2->klass,0,(MethodInfo *)0x0);
    if (pOVar2->klass == (Object__Class *)0x0) goto code_?;
    buffer = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                       ((BytePacker *)pOVar2->klass,(MethodInfo *)0x0);
    if (this_01 == (BytePacker *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_1
              (this_01,buffer,(MethodInfo *)0x0);
  }
  if (queryDataLeft == 0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pDVar4 = (this->fields).gameDataQueries;
    if (pDVar4 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0
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
                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,queryId,
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
  instigatorActorNumber = (Byte__Array *)gameDataQuery;
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
    unaff_EDI = (WorldNetwork *)
                MVNetworkGame+GameDataQueryManager+GameDataQuery::
                MVNetworkGame_GameDataQueryManager_GameDataQuery_GetBytePacker
                          (gameDataQuery,(MethodInfo *)0x0);
    instigatorActorNumber = (Byte__Array *)(gameDataQuery->fields).instigatorActorNumber;
    unaff_EBX = (ReceivedItemFromQueryEventArgs *)
                func_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (unaff_EBX,(BytePacker *)unaff_EDI,(int32_t)instigatorActorNumber,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pEVar2 = (pMVar1->fields).ReceivedItemFromQuery;
    break;
  case 2:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      unaff_EDI = (pMVar1->fields).worldNetwork;
      pBVar3 = (gameDataQuery->fields).bp;
      if ((pBVar3 != (BytePacker *)0x0) &&
         (MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                    (pBVar3,0,(MethodInfo *)0x0), unaff_EDI != (WorldNetwork *)0x0)) {
        WorldNetwork::WorldNetwork_AddGameQueryDataToGameWorld
                  (unaff_EDI,(gameDataQuery->fields).bp,
                   (gameDataQuery->fields).instigatorActorNumber,(MethodInfo *)0x0);
        return;
      }
    }
    goto code_?;
  case 3:
    pBVar3 = (gameDataQuery->fields).bp;
    if (pBVar3 != (BytePacker *)0x0) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                (pBVar3,0,(MethodInfo *)0x0);
      pBVar3 = (gameDataQuery->fields).bp;
      if (pBVar3 != (BytePacker *)0x0) {
        instigatorActorNumber =
             MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                       (pBVar3,(MethodInfo *)0x0);
        pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
        if (pEVar4 != (Encoding *)0x0) {
          this = (MVNetworkGame_GameDataQueryManager *)(pEVar4->klass->vtable).GetString_1.methodPtr
          ;
          instigatorActorNumber =
               (Byte__Array *)(*(code *)(pEVar4->klass->vtable).GetString.method)(pEVar4);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pAVar5 = (pMVar1->fields).ReceivedAccessoryData, pAVar5 != (Action_1_String_ *)0x0)) {
            (*(pAVar5->fields)._._.invoke_impl)
                      ((pAVar5->fields)._._.method_code,instigatorActorNumber,
                       (pAVar5->fields)._._.method);
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
    unaff_EDI = (WorldNetwork *)
                MVNetworkGame+GameDataQueryManager+GameDataQuery::
                MVNetworkGame_GameDataQueryManager_GameDataQuery_GetBytePacker
                          (gameDataQuery,(MethodInfo *)0x0);
    instigatorActorNumber = (Byte__Array *)(gameDataQuery->fields).instigatorActorNumber;
    unaff_EBX = (ReceivedItemFromQueryEventArgs *)
                func_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (unaff_EBX,(BytePacker *)unaff_EDI,(int32_t)instigatorActorNumber,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pEVar2 = (pMVar1->fields).ReceivedAvatarBodiesFromQuery;
    break;
  default:
    goto code_?;
  }
  if (pEVar2 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
    (*(pEVar2->fields)._._.invoke_impl)
              ((pEVar2->fields)._._.method_code,this,unaff_EBX,(pEVar2->fields)._._.method);
code_?:
    return;
  }
code_?:
  bVar6 = 0;
  func_?();
  pbVar7 = (byte *)((int)&unaff_EDI[-0x1177d68].fields._.InitializedGameQueryData + 3);
  bVar8 = *pbVar7;
  bVar9 = *pbVar7 + (byte)extraout_ECX;
  *pbVar7 = bVar9 + bVar6;
  *(char *)(extraout_ECX + 0x18) =
       *(char *)(extraout_ECX + 0x18) + (char)unaff_EBX +
       (CARRY1(bVar8,(byte)extraout_ECX) || CARRY1(bVar9,bVar6));
  in(extraout_DX);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                    ,unaff_EBX);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameDataQueries;
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  {
    gameDataQuery_00 =
         (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
         Dictionary_2_System_Int32_System_Object__get_Item
                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)gameDataQuery,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                   );
    MVNetworkGame_GameDataQueryManager_InitializeGameQueryData
              (this,gameDataQuery_00,(MethodInfo *)0x0);
    return;
  }
  func_?(instigatorActorNumber);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  ((MVNetworkGame_GameDataQueryManager__Fields *)method_00)->gameDataQueries =
       (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

