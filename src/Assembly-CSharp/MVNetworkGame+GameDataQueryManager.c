
/* Void HandleDataBatch(Int32, Int32, QueryType, Boolean, BytePacker) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_HandleDataBatch
               (MVNetworkGame_GameDataQueryManager *this,int32_t instigator,int32_t queryId,
               QueryType__Enum queryType,bool queryDataLeft,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  bVar1 = cRam_? == '\0';
  (this_02->fields)._._._._.m_CachedPtr = bp;
  (this_02->fields).state = instigator;
  *(undefined1 *)&(this_02->fields).originalScale.x = (undefined1)queryType;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameDataQueries;
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,queryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                      );
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).gameDataQueries;
    if (bVar2 == 0) {
      if (this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,queryId,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                  );
code_?:
        if (queryDataLeft == 0) {
          MVNetworkGame_GameDataQueryManager_OnGameQueryReady(this,queryId,(MethodInfo *)0x0);
        }
        return;
      }
    }
    else if (this_01 !=
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0) {
      this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (this_01,queryId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                          );
      if (this_03 != (TerrainUtility_TerrainMap *)0x0) {
        MVNetworkGame+GameDataQueryManager+GameDataQuery::
        MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                  ((MVNetworkGame_GameDataQueryManager_GameDataQuery *)this_03,
                   (MVNetworkGame_GameDataQueryManager_GameDataQuery *)this_02,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeGameQueryData(MVNetworkGame+GameDataQueryManager+GameDataQuery) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_InitializeGameQueryData
               (MVNetworkGame_GameDataQueryManager *this,
               MVNetworkGame_GameDataQueryManager_GameDataQuery *gameDataQuery,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (Dictionary_2_System_String_System_Object_ *)gameDataQuery;
  if (gameDataQuery == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0)
  goto code_?;
  switch((gameDataQuery->fields)._QueryType_k__BackingField) {
  case 1:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
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
    obj = (Dictionary_2_System_String_System_Object_ *)(gameDataQuery->fields).instigatorActorNumber
    ;
    unaff_EBX = (ReceivedItemFromQueryEventArgs *)
                func_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (unaff_EBX,(BytePacker *)unaff_EDI,(int32_t)obj,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    this_02 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              (pMVar1->fields).ReceivedItemFromQuery;
    break;
  case 2:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      unaff_EDI = (pMVar1->fields).worldNetwork;
      pBVar2 = (gameDataQuery->fields).bp;
      if ((pBVar2 != (BytePacker *)0x0) &&
         (MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                    (pBVar2,0,(MethodInfo *)0x0), unaff_EDI != (WorldNetwork *)0x0)) {
        WorldNetwork::WorldNetwork_AddGameQueryDataToGameWorld
                  (unaff_EDI,(gameDataQuery->fields).bp,
                   (gameDataQuery->fields).instigatorActorNumber,(MethodInfo *)0x0);
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
        obj = (Dictionary_2_System_String_System_Object_ *)
              MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                        (pBVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
          func_?();
        }
        pEVar3 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
        if (pEVar3 != (Encoding *)0x0) {
          obj = (Dictionary_2_System_String_System_Object_ *)
                (*(code *)(pEVar3->klass->vtable).GetString_1.method)
                          (pEVar3,obj,(pEVar3->klass->vtable).get_HeaderName.methodPtr);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                         *)(pMVar1->fields).ReceivedAccessoryData,
             this_00 !=
             (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0))
          {
            mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
            String,System::Object]]::
            Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                      (this_00,obj,
                       MethodInfo__System__Action<System::String>__Invoke_System__String_);
            return;
          }
        }
      }
    }
    goto code_?;
  case 4:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
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
    obj = (Dictionary_2_System_String_System_Object_ *)(gameDataQuery->fields).instigatorActorNumber
    ;
    unaff_EBX = (ReceivedItemFromQueryEventArgs *)
                func_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (unaff_EBX,(BytePacker *)unaff_EDI,(int32_t)obj,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    this_02 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              (pMVar1->fields).ReceivedAvatarBodiesFromQuery;
    break;
  default:
    goto code_?;
  }
  if (this_02 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_02,(Object *)this,(InitializedGameQueryDataEventArgs *)unaff_EBX,
               MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__Invoke_System__Object__ReceivedItemFromQueryEventArgs_
              );
code_?:
    return;
  }
code_?:
  bVar4 = 0;
  uVar5 = func_?(0);
  bVar6 = (byte)uVar5 + 0xaa;
  bVar7 = bVar6 + bVar4;
  uVar8 = CONCAT31((int3)((uint6)uVar5 >> 8),bVar7);
  *(byte *)&unaff_EDI->klass = bVar7;
  *(char *)&obj->klass =
       *(char *)&obj->klass + extraout_CH +
       (CARRY1((byte)unaff_EBX,bVar7) ||
       CARRY1((byte)unaff_EBX + bVar7,0x55 < (byte)uVar5 || CARRY1(bVar6,bVar4)));
  *(undefined4 *)((int)&unaff_EDI->klass + 1) = uVar8;
  *(undefined4 *)((int)&unaff_EDI->monitor + 1) = uVar8;
  in((short)((uint6)uVar5 >> 0x20));
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (obj->fields).table;
  if (this_01 != (Int32__Array *)0x0) {
    gameDataQuery_00 =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
         Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                   ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)this_01,(int32_t)gameDataQuery,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                   );
    MVNetworkGame_GameDataQueryManager_InitializeGameQueryData
              ((MVNetworkGame_GameDataQueryManager *)obj,
               (MVNetworkGame_GameDataQueryManager_GameDataQuery *)gameDataQuery_00,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnGameQueryReady(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager_OnGameQueryReady
               (MVNetworkGame_GameDataQueryManager *this,int32_t queryId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).gameDataQueries;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    gameDataQuery =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
         Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                   (this_00,queryId,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                   );
    MVNetworkGame_GameDataQueryManager_InitializeGameQueryData
              (this,(MVNetworkGame_GameDataQueryManager_GameDataQuery *)gameDataQuery,
               (MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameDataQueries;
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,queryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                      );
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).gameDataQueries;
    if (bVar1 == 0) {
      if (this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,queryId,
                   (Object *)gameDataQuery,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                  );
        return;
      }
    }
    else if (this_01 !=
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0) {
      this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (this_01,queryId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                          );
      if (this_02 != (TerrainUtility_TerrainMap *)0x0) {
        MVNetworkGame+GameDataQueryManager+GameDataQuery::
        MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                  ((MVNetworkGame_GameDataQueryManager_GameDataQuery *)this_02,gameDataQuery,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVNetworkGame+GameDataQueryManager() */

void Assembly-CSharp.dll::MVNetworkGame+GameDataQueryManager::
     MVNetworkGame_GameDataQueryManager__ctor
               (MVNetworkGame_GameDataQueryManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Dictionary__
            );
  (this->fields).gameDataQueries = this_00;
  return;
}

