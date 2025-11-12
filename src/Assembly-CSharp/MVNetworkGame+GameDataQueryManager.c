
/* Void HandleDataBatch(Int32, Int32, QueryType, Boolean, BytePacker) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_HandleDataBatch
               (MVNetworkGame_GameDataQueryManager *this,int32_t instigator,int32_t queryId,
               QueryType__Enum queryType,bool queryDataLeft,BytePacker *bp,MethodInfo *method)

{
  QVar1 = queryType;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  gameDataQuery =
       (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
       FUN_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
  bVar2 = iRam_? != 0;
  (gameDataQuery->fields).bp = bp;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&gameDataQuery->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  bVar2 = cRam_? == '\0';
  (gameDataQuery->fields).instigatorActorNumber = instigator;
  (gameDataQuery->fields)._QueryType_k__BackingField = (uint8_t)queryType;
  if (bVar2) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).gameDataQueries;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,queryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    this_01 = (this->fields).gameDataQueries;
    if (this_01 !=
        (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0) {
      if (iVar7 < 0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,queryId,
                   (Object *)gameDataQuery,CONCAT31((int3)(QVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                   ->klass->rgctx_data[0x22].method);
      }
      else {
        this_02 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,queryId,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                            );
        if (this_02 == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0)
        goto code_?;
        MVNetworkGame+GameDataQueryManager+GameDataQuery::
        MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                  (this_02,gameDataQuery,(MethodInfo *)0x0);
      }
      if (queryDataLeft == 0) {
        MVNetworkGame_GameDataQueryManager_OnGameQueryReady(this,queryId,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeGameQueryData(MVNetworkGame+GameDataQueryManager+GameDataQuery) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_InitializeGameQueryData
               (MVNetworkGame_GameDataQueryManager *this,
               MVNetworkGame_GameDataQueryManager_GameDataQuery *gameDataQuery,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameDataQuery == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0)
  goto code_?;
  uVar1 = (gameDataQuery->fields)._QueryType_k__BackingField;
  if (uVar1 == 1) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar2->fields).ReceivedItemFromQuery ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      return;
    }
    pBVar3 = (gameDataQuery->fields).bp;
    if (pBVar3 == (BytePacker *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              (pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = (gameDataQuery->fields).bp;
    iVar4 = (gameDataQuery->fields).instigatorActorNumber;
    this_02 = (ReceivedItemFromQueryEventArgs *)
              FUN_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_02,pBVar3,iVar4,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pEVar5 = (pMVar2->fields).ReceivedItemFromQuery;
  }
  else {
    if (uVar1 == 2) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pBVar3 = (gameDataQuery->fields).bp;
        this_00 = (pMVar2->fields).worldNetwork;
        if (pBVar3 != (BytePacker *)0x0) {
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                    (pBVar3,0,(MethodInfo *)0x0);
          iVar4 = (gameDataQuery->fields).instigatorActorNumber;
          if (this_00 != (WorldNetwork *)0x0) {
            pBVar3 = (gameDataQuery->fields).bp;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__KoGaMaDataHandler);
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_03 = (UnityAction_2_System_Object_System_ByteEnum_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                      (this_03,(Object *)this_00,
                       MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
              FUN_?();
            }
            id = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                           (pBVar3,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                                    *)this_03,1,(MethodInfo *)0x0);
            this_01 = (MVWorldObjectClientManager *)(this_00->fields)._.worldObjectClientManager;
            if (this_01 != (MVWorldObjectClientManager *)0x0) {
              root = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_01,id,(MethodInfo *)0x0);
              if (root != (MVWorldObjectClient *)0x0) {
                (*(root->klass->vtable).Initialize.methodPtr)
                          (root,(root->klass->vtable).Initialize.method);
              }
              WorldNetwork::WorldNetwork_CreateQueryEvent(this_00,root,iVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (uVar1 == 3) {
      pBVar3 = (gameDataQuery->fields).bp;
      if (pBVar3 != (BytePacker *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                  (pBVar3,0,(MethodInfo *)0x0);
        pBVar3 = (gameDataQuery->fields).bp;
        if (pBVar3 != (BytePacker *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__)
            ;
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar6 = (pBVar3->fields)._buffer;
          if (pLVar6 != (List_1_System_Byte_ *)0x0) {
            uVar7 = FUN_?(pLVar6,
                                  MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                 );
            pEVar8 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
            if (pEVar8 != (Encoding *)0x0) {
              uVar7 = (*(pEVar8->klass->vtable).GetString.methodPtr)
                                (pEVar8,uVar7,(pEVar8->klass->vtable).GetString.method);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar2 != (MVNetworkGame *)0x0) &&
                 (pAVar9 = (pMVar2->fields).ReceivedAccessoryData, pAVar9 != (Action_1_String_ *)0x0
                 )) {
                (*(pAVar9->fields)._._.invoke_impl)
                          ((pAVar9->fields)._._.method_code,uVar7,(pAVar9->fields)._._.method);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (uVar1 != 4) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar2->fields).ReceivedAvatarBodiesFromQuery ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      return;
    }
    pBVar3 = (gameDataQuery->fields).bp;
    if (pBVar3 == (BytePacker *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              (pBVar3,0,(MethodInfo *)0x0);
    pBVar3 = (gameDataQuery->fields).bp;
    iVar4 = (gameDataQuery->fields).instigatorActorNumber;
    this_02 = (ReceivedItemFromQueryEventArgs *)
              FUN_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_02,pBVar3,iVar4,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pEVar5 = (pMVar2->fields).ReceivedAvatarBodiesFromQuery;
  }
  if (pEVar5 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
    (*(pEVar5->fields)._._.invoke_impl)
              ((pEVar5->fields)._._.method_code,this,this_02,(pEVar5->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameDataQueries;
  if (this_00 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)this_00,queryId,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                     );
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar2 == (Object *)0x0) goto code_?;
  cVar3 = *(char *)((longlong)&pOVar2[1].monitor + 4);
  if (cVar3 == '\x01') {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar4->fields).ReceivedItemFromQuery ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      return;
    }
    if (pOVar2[1].klass == (Object__Class *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              ((BytePacker *)pOVar2[1].klass,0,(MethodInfo *)0x0);
    pOVar5 = pOVar2[1].klass;
    iVar6 = *(int32_t *)&pOVar2[1].monitor;
    this_03 = (ReceivedItemFromQueryEventArgs *)
              FUN_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_03,(BytePacker *)pOVar5,iVar6,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pEVar7 = (pMVar4->fields).ReceivedItemFromQuery;
  }
  else {
    if (cVar3 == '\x02') {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame *)0x0) {
        this_01 = (pMVar4->fields).worldNetwork;
        if (pOVar2[1].klass != (Object__Class *)0x0) {
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                    ((BytePacker *)pOVar2[1].klass,0,(MethodInfo *)0x0);
          iVar6 = *(int32_t *)&pOVar2[1].monitor;
          if (this_01 != (WorldNetwork *)0x0) {
            pOVar5 = pOVar2[1].klass;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__KoGaMaDataHandler);
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_04 = (UnityAction_2_System_Object_System_ByteEnum_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                      (this_04,(Object *)this_01,
                       MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
              FUN_?();
            }
            id = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                           ((BytePacker *)pOVar5,
                            (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                             *)this_04,1,(MethodInfo *)0x0);
            this_02 = (MVWorldObjectClientManager *)(this_01->fields)._.worldObjectClientManager;
            if (this_02 != (MVWorldObjectClientManager *)0x0) {
              root = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_02,id,(MethodInfo *)0x0);
              if (root != (MVWorldObjectClient *)0x0) {
                (*(root->klass->vtable).Initialize.methodPtr)
                          (root,(root->klass->vtable).Initialize.method);
              }
              WorldNetwork::WorldNetwork_CreateQueryEvent(this_01,root,iVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (cVar3 == '\x03') {
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                  ((BytePacker *)pOVar2[1].klass,0,(MethodInfo *)0x0);
        pOVar5 = pOVar2[1].klass;
        if (pOVar5 != (Object__Class *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__)
            ;
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pcVar8 = (pOVar5->_0).name;
          if (pcVar8 != (char *)0x0) {
            uVar9 = FUN_?(pcVar8,
                                  MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                 );
            pEVar10 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
            if (pEVar10 != (Encoding *)0x0) {
              uVar9 = (*(pEVar10->klass->vtable).GetString.methodPtr)
                                (pEVar10,uVar9,(pEVar10->klass->vtable).GetString.method);
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar4 != (MVNetworkGame *)0x0) &&
                 (pAVar11 = (pMVar4->fields).ReceivedAccessoryData, pAVar11 != (Action_1_String_ *)0x0
                 )) {
                (*(pAVar11->fields)._._.invoke_impl)
                          ((pAVar11->fields)._._.method_code,uVar9,(pAVar11->fields)._._.method);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (cVar3 != '\x04') {
      return;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar4->fields).ReceivedAvatarBodiesFromQuery ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      return;
    }
    if (pOVar2[1].klass == (Object__Class *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              ((BytePacker *)pOVar2[1].klass,0,(MethodInfo *)0x0);
    pOVar5 = pOVar2[1].klass;
    iVar6 = *(int32_t *)&pOVar2[1].monitor;
    this_03 = (ReceivedItemFromQueryEventArgs *)
              FUN_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_03,(BytePacker *)pOVar5,iVar6,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pEVar7 = (pMVar4->fields).ReceivedAvatarBodiesFromQuery;
  }
  if (pEVar7 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
    (*(pEVar7->fields)._._.invoke_impl)
              ((pEVar7->fields)._._.method_code,this,this_03,(pEVar7->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).gameDataQueries;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,queryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    this_01 = (this->fields).gameDataQueries;
    if (this_01 !=
        (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0) {
      if (iVar1 < 0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,queryId,
                   (Object *)gameDataQuery,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_01,queryId,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        pOVar3 = pOVar2[1].klass;
        if (pOVar3 != (Object__Class *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar4 = ((BytePacker__Fields *)&(pOVar3->_0).name)->_buffer;
          if (pLVar4 != (List_1_System_Byte_ *)0x0) {
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                      ((BytePacker *)pOVar3,(pLVar4->fields)._size,(MethodInfo *)0x0);
            pOVar3 = pOVar2[1].klass;
            if ((gameDataQuery != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
               (pBVar5 = (gameDataQuery->fields).bp, pBVar5 != (BytePacker *)0x0)) {
              MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                        (pBVar5,0,(MethodInfo *)0x0);
              pBVar5 = (gameDataQuery->fields).bp;
              if (pBVar5 != (BytePacker *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar4 = (pBVar5->fields)._buffer;
                if (pLVar4 != (List_1_System_Byte_ *)0x0) {
                  buffer = (Byte__Array *)
                           FUN_?(pLVar4,
                                         MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                        );
                  if ((pOVar3 != (Object__Class *)0x0) && (buffer != (Byte__Array *)0x0)) {
                    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_2
                              ((BytePacker *)pOVar3,buffer,0,(int32_t)buffer->max_length,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).gameDataQueries =
       (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

