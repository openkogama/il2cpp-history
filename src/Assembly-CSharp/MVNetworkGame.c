
/* Void AddCloneToWorldObjects(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects
               (MVNetworkGame *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  wo_00 = wo;
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 != (WorldNetwork *)0x0) &&
     (pMVar2 = (pWVar1->fields)._.worldObjectClientManager,
     pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0)) {
    method = (MethodInfo *)0x0;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      pLStack_3 = (List_1_MV_WorldObject_ObjectLink_ *)
                   &
                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
      ;
      func_?();
      func_?(&TypeInfo__MVGroup);
      func_?(&TypeInfo__WorldObjectCreatedEventArgs);
      func_?(&StringLiteral_Key_already_in_WorldObjects_dict);
      cRam_? = '\x01';
    }
    wo = (MVWorldObjectClient *)0x0;
    if ((wo_00 != (MVWorldObjectClient *)0x0) &&
       (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (pMVar2->fields)._.worldObjects,
       this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)(wo_00->fields)._.id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
        return;
      }
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(pMVar2->fields)._.worldObjects;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)(wo_00->fields)._.id,(Object *)wo_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                  );
        this_02 = (pMVar2->fields)._.worldObjectMapping;
        if (this_02 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
          method = (MethodInfo *)0x0;
          wo = wo_00;
          MVWorldObjectClientManager+WorldObjectMapping::
          MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                    (this_02,wo_00,(MethodInfo *)0x0);
          method = (MethodInfo *)0x0;
          wo = wo_00;
          key = mscorlib.dll::System::Object::Object_GetType((Object *)wo_00,(MethodInfo *)0x0);
          this_03 = (pMVar2->fields)._.woCreatedEventSubscribers;
          if (this_03 !=
              (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
            method = (MethodInfo *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)key,
                       (Object **)&wo,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
            pMVar5 = wo;
            if (wo == (MVWorldObjectClient *)0x0) {
code_?:
              if ((wo_00->fields)._.groupId == -1) {
                if (((wo_00->klass->_1).typeHierarchyDepth <
                     (TypeInfo__MVGroup->_1).typeHierarchyDepth) ||
                   ((MVGroup__Class *)
                    (wo_00->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1]
                    != TypeInfo__MVGroup)) {
                  func_?();
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                (pMVar2->fields)._.rootGroupId = (wo_00->fields)._.id;
              }
              return;
            }
            this_04 = (TweenRunner_1_FloatTween_ *)func_?();
            if (this_04 != (TweenRunner_1_FloatTween_ *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
              TweenRunner_1_FloatTween___ctor(this_04,(MethodInfo *)0x0);
              (this_04->fields).m_CoroutineContainer = (MonoBehaviour *)wo_00;
              func_?();
              if (pMVar5 != (MVWorldObjectClient *)0x0) {
                pLStack_3 = (pMVar5->fields)._.objectLinkRefs;
                (*(code *)(pMVar5->fields)._.groupId)();
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  uVar7 = func_?(&pLStack_3);
  func_?(uVar7);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AllModesSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_AllModesSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  this_00 = photonEvent;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MV__WorldObject__SpawnRoles__SpawnRolesMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesMetaData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (photonEvent == (EventData *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    unaff_ESI = (MVLocalPlayer *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pMVar1 = (MVLocalPlayer *)0x0;
    if (unaff_ESI != (MVLocalPlayer *)0x0) {
      if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
        pMVar1 = unaff_ESI;
      }
      pSVar2 = TypeInfo__System__String;
      if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
    }
    spawnRolesRuntimeData =
         (SpawnRolesRuntimeData *)
         Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                   ((String *)pMVar1,
                    MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                   );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)spawnRolesRuntimeData,(MethodInfo *)0x0);
    unaff_ESI = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xbf,(MethodInfo *)0x0);
    if ((unaff_ESI == (MVLocalPlayer *)0x0) || (pOVar3 == (Object *)0x0)) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar4 = (int32_t *)func_?();
    MVLocalPlayer::MVLocalPlayer_SetupPlayerWorldObjects
              (unaff_ESI,*piVar4,spawnRolesRuntimeData,(MethodInfo *)0x0);
    pWVar5 = (this->fields).worldNetwork;
    if (pWVar5 == (WorldNetwork *)0x0) goto code_?;
    a = (pWVar5->fields)._.InitializedGameQueryData;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    unaff_ESI = (MVLocalPlayer *)0x0;
    if (this_01 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = (MVLocalPlayer *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    if (unaff_ESI == (MVLocalPlayer *)0x0) {
      _UNK_? = 0;
code_?:
      func_?();
      pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x23,(MethodInfo *)0x0);
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar6 = (int *)func_?();
      pEVar7 = (EventData *)*piVar6;
      photonEvent = pEVar7;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        photonEvent = (EventData *)&StringLiteral_stepTimestamp_is_not_correctly_i;
        func_?();
        cRam_? = '\x01';
      }
      if (pEVar7 != (EventData *)(((int)pEVar7 / 1000) * 1000)) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_stepTimestamp_is_not_correctly_i,(MethodInfo *)0x0);
      }
      this_02 = (LogicObjectManagerClient *)func_?();
      unaff_ESI = (MVLocalPlayer *)0x0;
      if (this_02 == (LogicObjectManagerClient *)0x0) goto code_?;
      LogicObjectManagerClient::LogicObjectManagerClient__ctor
                (this_02,(int32_t)photonEvent,0,(MethodInfo *)0x0);
      (this->fields)._LogicObjectManager_k__BackingField = this_02;
      func_?();
      unaff_ESI = (MVLocalPlayer *)func_?();
      if (unaff_ESI == (MVLocalPlayer *)0x0) goto code_?;
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper__ctor
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,this,0xADDR,
                 (MethodInfo *)0x0);
      (this->fields).logicObjectManagerClientWrapper =
           (MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI;
      func_?();
      pSVar8 = (String *)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_00,0xcf,(MethodInfo *)0x0);
      value = (String *)0x0;
      if (pSVar8 == (String *)0x0) {
code_?:
        unaff_ESI = (MVLocalPlayer *)
                    Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                              (value,
                               MV__WorldObject__SpawnRoles__SpawnRolesMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesMetaData>_System__String_
                              );
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar1 != (MVLocalPlayer *)0x0) {
          (pMVar1->fields).spawnRolesMetaData = (SpawnRolesMetaData *)unaff_ESI;
          func_?();
          return;
        }
        goto code_?;
      }
      if (pSVar8->klass == TypeInfo__System__String) {
        value = pSVar8;
      }
      if (value != (String *)0x0) goto code_?;
      goto code_?;
    }
    iVar9 = func_?();
    if ((iVar9 != 0) && (_UNK_? = iVar9, iVar9 = func_?(), iVar9 != 0))
    goto code_?;
  }
  func_?();
  pSVar2 = extraout_ECX;
code_?:
  func_?(unaff_ESI,pSVar2);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void BuildModeSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_BuildModeSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pPVar1 = (PlayerShopInventoryRepository *)
           TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pPVar1 == (PlayerShopInventoryRepository *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_02 = pPVar1;
  iVar3 = func_?(4,TypeInfo__IEditModeUI,pPVar1);
  if (iVar3 == 0) {
    this_02 = (PlayerShopInventoryRepository *)
              func_?(
                             TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                             );
    if (this_02 == (PlayerShopInventoryRepository *)0x0) goto code_?;
    UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
    PlayerShopInventoryRepository__ctor(this_02,(MethodInfo *)0x0);
    unaff_EDI = pPVar1;
    func_?(5,TypeInfo__IEditModeUI,pPVar1,this_02);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar4 == (IEditModeUI *)0x0) goto code_?;
  iVar3 = func_?(4,TypeInfo__IEditModeUI,pIVar4);
  if (iVar3 == 0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ClientShopRepository,unaff_ESI);
    func_?(&TypeInfo__PlayerInventoryRepository);
    cRam_? = '\x01';
  }
  if (*(int *)(unaff_retaddr + 0x20) == 0) {
    this_00 = (PlayerInventoryRepository *)
              func_?(TypeInfo__PlayerInventoryRepository,unaff_EDI,this_02);
    if (this_00 == (PlayerInventoryRepository *)0x0) goto code_?;
    PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
    *(PlayerInventoryRepository **)(unaff_retaddr + 0x20) = this_00;
    func_?(unaff_retaddr + 0x20,this_00);
  }
  if (*(int *)(unaff_retaddr + 0x1c) == 0) {
    this_01 = (ClientShopRepository *)
              func_?(TypeInfo__ClientShopRepository,unaff_EDI,this_02);
    if (this_01 == (ClientShopRepository *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ClientShopRepository::ClientShopRepository__ctor(this_01,(MethodInfo *)0x0);
    *(ClientShopRepository **)(unaff_retaddr + 0x1c) = this_01;
    func_?(unaff_retaddr + 0x1c,this_01);
  }
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Cleanup
               (MVNetworkGame *this,MethodInfo *method)

{
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pWVar1 = (this->fields).worldNetwork,
     (pWVar1->fields)._.worldObjectClientManager != (MVWorldObjectClientManagerNetwork *)0x0)) {
    MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Cleanup
              ((pWVar1->fields)._.worldObjectClientManager,(MethodInfo *)0x0);
    this_00 = (this->fields)._LogicObjectManager_k__BackingField;
    if (this_00 == (LogicObjectManagerClient *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LogicObjectManagerClient::LogicObjectManagerClient_Clear(this_00,(MethodInfo *)0x0);
  }
  if ((this->fields)._MaterialRepository_k__BackingField != (MVMaterialRepository *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__MVMaterialRepository->static_fields->instance = (MVMaterialRepository *)0x0;
    func_?();
  }
  PricesManager::PricesManager_Reset((MethodInfo *)0x0);
  return;
}


/* Void CreateGame() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreateGame
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&
                    MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
                   );
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    pEVar2 = (pWVar1->fields)._.InitializedGameQueryData;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pWVar1->fields)._.InitializedGameQueryData =
             (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
      }
      else {
        pEVar2 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
        if (pEVar2 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
        goto code_?;
        (pWVar1->fields)._.InitializedGameQueryData = pEVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      pMVar5 = (this->fields).gameDataQuery;
      pWVar1 = (this->fields).worldNetwork;
      if (pMVar5 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
        queryData = MVNetworkGame+GameDataQueryManager+GameDataQuery::
                    MVNetworkGame_GameDataQueryManager_GameDataQuery_GetBytePacker
                              (pMVar5,(MethodInfo *)0x0);
        pMVar5 = (this->fields).gameDataQuery;
        if ((pMVar5 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
           (pWVar1 != (WorldNetwork *)0x0)) {
          WorldNetwork::WorldNetwork_CreateGameWorldFromQueryData
                    (pWVar1,queryData,(pMVar5->fields).instigatorActorNumber,(MethodInfo *)0x0);
          (this->fields).gameDataQuery = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0;
          func_?(&(this->fields).gameDataQuery,0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreatePlayersFromUserList(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreatePlayersFromUserList
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *userList,
               MethodInfo *method)

{
  puVar1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__Common__BuildTarget);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                   );
    func_?(&
                    MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    func_?(&TypeInfo__MVPlayer);
    func_?(&TypeInfo__MV__Common__PlayerGameState);
    func_?(&TypeInfo__SpawnRoleChangeHandlerRemote);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_UserList_is_null);
    cRam_? = '\x01';
  }
  if (userList == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_UserList_is_null,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = puVar1;
    return;
  }
  pLStack_2 = (List_1_MVPlayer_ *)
               func_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  if (pLStack_2 != (List_1_MVPlayer_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLStack_2,
               MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                        ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)userList,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
      Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&stack0xffffff9c,
                 (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                );
      pMVar3 = (MVPlayer *)0x0;
      while (pMVar4 = 
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
            , bVar5 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                      Object,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                  *)&stack0xffffff8c,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                ), bVar5 != 0) {
        if (pMVar4 == (MethodInfo *)0x0) goto code_?;
        if (*(Il2CppClass **)(pMVar4->methodPointer + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar6 = (int *)func_?();
        iVar7 = *piVar6;
        pOVar8 = (Object *)func_?();
        this_01 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (userList,pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (this_01 == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
          this_01 = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
        }
        else if (((this_01->klass->_1).typeHierarchyDepth <
                  (TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                  ->_1).typeHierarchyDepth) ||
                ((Dictionary_2_System_Byte_System_Object___Class *)
                 (this_01->klass->_1).typeHierarchy
                 [(TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                  ->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>))
        goto code_?;
        pMVar9 = (this->fields).playerContainer;
        if ((pMVar9 == (MVPlayerContainer *)0x0) ||
           (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
           pMVar10 == (MVLocalPlayer *)0x0)) goto code_?;
        if (iVar7 != (pMVar10->fields)._._ActorNr_k__BackingField) {
          if ((this_01 == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) ||
             (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 (this_01,0xb,
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                 ), pOVar8 == (Object *)0x0)) goto code_?;
          if ((pOVar8->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          profileID = *piVar11;
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             (this_01,0x59,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pOVar8 == (Object *)0x0) goto code_?;
          if ((pOVar8->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          iVar12 = *piVar11;
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             (this_01,0xa9,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pOVar8 == (Object *)0x0) goto code_?;
          if ((pOVar8->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar11 = (int32_t *)func_?();
          level = *piVar11;
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             (this_01,0x9a,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pOVar8 != (Object *)0x0) {
            pOVar13 = (Object *)0x0;
            if ((String__Class *)pOVar8->klass == TypeInfo__System__String) {
              pOVar13 = pOVar8;
            }
            if (pOVar13 == (Object *)0x0) goto code_?;
          }
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             (this_01,0xd2,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pOVar8 == (Object *)0x0) goto code_?;
          if ((pOVar8->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          func_?();
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             (this_01,0x44,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pOVar8 == (Object *)0x0) goto code_?;
          if ((pOVar8->klass->_0).element_class !=
              (TypeInfo__MV__Common__PlayerGameState->_0).element_class) goto code_?;
          pcVar14 = (char *)func_?();
          this_03 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                    CONCAT31((int3)((uint)this_01 >> 8),*pcVar14 == '\x03');
          bVar5 = 0xa3;
          pJVar15 = (JsonConvert__Class *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              (this_03,0xdf,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          observer = (bool)this_03;
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            pJVar15 = TypeInfo__Newtonsoft__Json__JsonConvert;
            func_?();
          }
          value = (JsonConvert__Class *)0x0;
          if (pJVar15 != (JsonConvert__Class *)0x0) {
            if ((String__Class *)(pJVar15->_0).image == TypeInfo__System__String) {
              value = pJVar15;
            }
            if (value == (JsonConvert__Class *)0x0) goto code_?;
          }
          playerPlanetDataRemote =
               (PlayerPlanetDataRemote *)
               Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                         ((String *)value,
                          MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                         );
          actorNumber = 0xe0;
          pMVar4 = 
          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
          ;
          pSVar16 = (String *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              (this_01,0xe0,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          pSVar17 = (String *)0x0;
          if (pSVar16 != (String *)0x0) {
            if (pSVar16->klass == TypeInfo__System__String) {
              pSVar17 = pSVar16;
            }
            if (pSVar17 == (String *)0x0) goto code_?;
          }
          userProfileData =
               (UserProfileData *)
               Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                         (pSVar17,
                          MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                         );
          puVar1 = &UNK_?;
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             (this_01,0xbc,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pOVar8 == (Object *)0x0) goto code_?;
          if ((pOVar8->klass->_0).element_class !=
              (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
          puVar18 = (undefined1 *)func_?();
          userList = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__MVPlayer;
          buildTarget = CONCAT31((int3)((uint)in_stack_19 >> 8),*puVar18);
          this = (MVNetworkGame *)&UNK_?;
          pMVar3 = (MVPlayer *)func_?();
          if (pMVar3 == (MVPlayer *)0x0) goto code_?;
          MVPlayer::MVPlayer__ctor_1
                    (pMVar3,actorNumber,profileID,level,(String *)pMVar4,buildTarget,
                     userProfileData,bVar5,observer,playerPlanetDataRemote,(MethodInfo *)0x0);
          (pMVar3->fields)._Team_k__BackingField = iVar12;
          pSVar16 = (String *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              (this_01,0xf5,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          pSVar17 = (String *)0x0;
          if (pSVar16 != (String *)0x0) {
            if (pSVar16->klass == TypeInfo__System__String) {
              pSVar17 = pSVar16;
            }
            if (pSVar17 == (String *)0x0) goto code_?;
          }
          this_04 = (MVPlayer *)
                    MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
          ;
          spawnRolesRuntimeData =
               (SpawnRolesRuntimeData *)
               Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                         (pSVar17,
                          MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                         );
          this_02 = (TweenRunner_1_FloatTween_ *)func_?();
          if (this_02 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
          TweenRunner_1_FloatTween___ctor(this_02,(MethodInfo *)0x0);
          pMVar3 = this_04;
          MVPlayer::MVPlayer_SetupSpawnRoleManager
                    (this_04,(ISpawnRoleChangeHandler *)this_02,spawnRolesRuntimeData,
                     (MethodInfo *)0x0);
          in_stack_19 =
               MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)&UNK_?,(Object *)this_04,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
          if ((this_04->fields).playerState != (uint8_t)pSVar17) {
            in_stack_19 = (MethodInfo *)&UNK_?;
            MVPlayer::MVPlayer_set_PlayerState
                      (this_04,(PlayerGameState__Enum)pSVar17,(MethodInfo *)0x0);
          }
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff8c,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,(MethodInfo *)pMVar3);
      pMVar9 = (this->fields).playerContainer;
      if (pMVar9 != (MVPlayerContainer *)0x0) {
        MVPlayerContainer::MVPlayerContainer_Add_1(pMVar9,pLStack_2,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = puVar1;
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void CreatePrivateClasses() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreatePrivateClasses
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame__EventHandling);
    func_?(&TypeInfo__MVNetworkGame__OperationRequests);
    func_?(&TypeInfo__MVNetworkGame__OperationResponseHandling);
    func_?(&TypeInfo__MVNetworkGame__StatusChangedHandling);
    cRam_? = '\x01';
  }
  value = (MVNetworkGame_EventHandling *)func_?(TypeInfo__MVNetworkGame__EventHandling);
  if (value != (MVNetworkGame_EventHandling *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                     );
      cRam_? = '\x01';
    }
    this_00 = (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)
              func_?(TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
    if (this_00 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      MVNetworkGame+EventHandling+DynamicEventCallbackManager::
      MVNetworkGame_EventHandling_DynamicEventCallbackManager__ctor(this_00,(MethodInfo *)0x0);
      (value->fields).dynamicEventCallbackManager = this_00;
      func_?(&value->fields,this_00);
      this_01 = (Queue_1_ExitGames_Client_Photon_EventData_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                               );
      if (this_01 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
        Stack_1_System_Object___ctor
                  ((Stack_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                  );
        method_00 = (MethodInfo *)&(value->fields).cachedEvents;
        (value->fields).cachedEvents = this_01;
        func_?(method_00,this_01);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,method_00);
        (value->fields).networkGame = this;
        func_?(&(value->fields).networkGame,this);
        (this->fields).eventHandling = value;
        func_?(&(this->fields).eventHandling,value);
        this_02 = (SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)
                  func_?(TypeInfo__MVNetworkGame__OperationResponseHandling);
        if (this_02 != (SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0) {
          System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System::
          Single,System::Object]::
          SortedList_2_TKey_TValue_ValueList_System_Single_System_Object___ctor
                    (this_02,(SortedList_2_System_Single_System_Object_ *)this,(MethodInfo *)0x0);
          (this->fields).operationResponseHandling =
               (MVNetworkGame_OperationResponseHandling *)this_02;
          func_?(&(this->fields).operationResponseHandling,this_02);
          this_03 = (MVNetworkGame_StatusChangedHandling *)
                    func_?(TypeInfo__MVNetworkGame__StatusChangedHandling);
          if (this_03 != (MVNetworkGame_StatusChangedHandling *)0x0) {
            MVNetworkGame+StatusChangedHandling::MVNetworkGame_StatusChangedHandling__ctor
                      (this_03,this,(MethodInfo *)0x0);
            (this->fields).statusChangedHandling = this_03;
            func_?(&(this->fields).statusChangedHandling,this_03);
            this_04 = (MVNetworkGame_OperationRequests *)
                      func_?(TypeInfo__MVNetworkGame__OperationRequests);
            if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests__ctor
                        (this_04,this,(MethodInfo *)0x0);
              (this->fields).operationRequests = this_04;
              func_?(&(this->fields).operationRequests,this_04);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DebugReturn(DebugLevel, String) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_DebugReturn
               (MVNetworkGame *this,DebugLevel__Enum level,String *debug,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((level & 0xff) != DebugLevel__Enum_ERROR) {
    if ((level & 0xff) != DebugLevel__Enum_WARNING) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)debug,(MethodInfo *)0x0)
      ;
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)debug,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)debug,(MethodInfo *)0x0);
  return;
}


/* Void GeneratePlanetScreenShot(Action`1[Byte[]]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_GeneratePlanetScreenShot
               (Action_1_Byte_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_GenerateTexture);
    cRam_? = '\x01';
  }
  this = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (this != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this,StringLiteral_GenerateTexture,(MethodInfo *)0x0);
    this_00 = (GenerateTextureData *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this,
                         GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                        );
    if (this_00 != (GenerateTextureData *)0x0) {
      GenerateTextureData::GenerateTextureData_GenerateTextureDataCameraView
                (this_00,callback,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Dictionary`2[System.Byte,System.Object] GetAttachWorldObjectToSeatData(VehicleSeatBase) */

Dictionary_2_System_Byte_System_Object_ *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_GetAttachWorldObjectToSeatData
          (MVNetworkGame *this,VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
    cRam_? = '\x01';
  }
  if (seatBase != (VehicleSeatBase *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)seatBase,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)seatBase,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            uVar3 = CONCAT44((Quaternion *)&stack0xffffffdc,&UNK_?);
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                               ((Quaternion *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
            fVar5 = pQVar4->x;
            fVar6 = pQVar4->y;
            fVar7 = pQVar4->z;
            fVar8 = pQVar4->w;
            puVar9 = &UNK_?;
            this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              position.z = (float)puVar9;
              position.x = (float)(int)uVar3;
              position.y = (float)(int)((ulonglong)uVar3 >> 0x20);
              MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition_1
                        (position,(Dictionary_2_System_Byte_System_Object_ *)this_00,
                         (MethodInfo *)0x0);
              rotation.y = fVar6;
              rotation.x = fVar5;
              rotation.z = fVar7;
              rotation.w = fVar8;
              MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation_1
                        (rotation,(Dictionary_2_System_Byte_System_Object_ *)this_00,
                         (MethodInfo *)0x0);
              pOVar10 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_00,(Object *)0x8d,pOVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              pOVar10 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_00,(Object *)0x8e,pOVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              return (Dictionary_2_System_Byte_System_Object_ *)this_00;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pDVar12 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar11)();
  return pDVar12;
}


/* Void HandleGameSnapshotData(BytePacker, QueryType, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
               (MVNetworkGame *this,BytePacker *bytePacker,QueryType__Enum queryType,bool dataLeft,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    func_?(&MethodInfo__MVNetworkGame__CreateGame__);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_GameSnapshotDataReceived);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).playerContainer;
  if ((this->fields).gameDataQuery == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
    if ((this_00 == (MVPlayerContainer *)0x0) ||
       (pMVar1 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar1 == (MVLocalPlayer *)0x0)) goto code_?;
    iVar2 = (pMVar1->fields)._._ActorNr_k__BackingField;
    pMVar3 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
             func_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    if (pMVar3 == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) goto code_?;
    mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
              ((DefaultBinder_BinderState *)pMVar3,(Int32__Array *)bytePacker,iVar2,(bool)queryType,
               (MethodInfo *)0x0);
    (this->fields).gameDataQuery = pMVar3;
    func_?(&(this->fields).gameDataQuery,pMVar3);
  }
  else {
    pMVar3 = (this->fields).gameDataQuery;
    if ((this_00 == (MVPlayerContainer *)0x0) ||
       (pMVar1 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar1 == (MVLocalPlayer *)0x0)) goto code_?;
    iVar2 = (pMVar1->fields)._._ActorNr_k__BackingField;
    gameDataQuery =
         (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
         func_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    if (gameDataQuery == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0)
    goto code_?;
    mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
              ((DefaultBinder_BinderState *)gameDataQuery,(Int32__Array *)bytePacker,iVar2,
               (bool)queryType,(MethodInfo *)0x0);
    MVNetworkGame+GameDataQueryManager+GameDataQuery::
    MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
              (pMVar3,gameDataQuery,(MethodInfo *)0x0);
  }
  if (dataLeft != 0) {
    return;
  }
  pMVar4 = (this->fields).eventHandling;
  if (pMVar4 != (MVNetworkGame_EventHandling *)0x0) {
    (pMVar4->fields).cacheEvents = 1;
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0)
    ;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__MVNetworkGame__CreateGame__,(MethodInfo *)0x0);
      coroutine = WaitForFrames::WaitForFrames_Frames(3,(UnityAction *)this_01,(MethodInfo *)0x0);
      Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeManagers() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_InitializeManagers
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarRepository);
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    func_?(&TypeInfo__FriendList);
    func_?(&
                    MethodInfo__GameStatCounterManager__OnTeamAdded_System__Object__MV__WorldObject__TeamEventArgs_
                   );
    func_?(&
                    MethodInfo__GameStatCounterManager__OnTeamRemoved_System__Object__MV__WorldObject__TeamEventArgs_
                   );
    func_?(&TypeInfo__GameTierShopRepository);
    func_?(&TypeInfo__MVGameModeChangeNotifier);
    func_?(&TypeInfo__MVLocalObjectController);
    func_?(&TypeInfo__MVMaterialRepository);
    func_?(&TypeInfo__PlayerRepository);
    func_?(&TypeInfo__ShopRepository);
    func_?(&TypeInfo__WinningConditionManagerClient);
    func_?(&TypeInfo__WorldNetwork);
    cRam_? = '\x01';
  }
  pWVar1 = (WorldNetwork *)func_?(TypeInfo__WorldNetwork);
  if (pWVar1 != (WorldNetwork *)0x0) {
    WorldNetwork::WorldNetwork__ctor(pWVar1,(MethodInfo *)0x0);
    (this->fields).worldNetwork = pWVar1;
    func_?(&(this->fields).worldNetwork,pWVar1);
    pWVar1 = (this->fields).worldNetwork;
    if (pWVar1 != (WorldNetwork *)0x0) {
      worldObjectClientManagerNetwork = (pWVar1->fields)._.worldObjectClientManager;
      this_00 = (MVLocalObjectController *)func_?(TypeInfo__MVLocalObjectController);
      if (this_00 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController__ctor
                  (this_00,worldObjectClientManagerNetwork,(MethodInfo *)0x0);
        (this->fields)._PlayerController_k__BackingField = this_00;
        func_?(&(this->fields)._PlayerController_k__BackingField,this_00);
        this_01 = (MVMaterialRepository *)func_?(TypeInfo__MVMaterialRepository);
        if (this_01 != (MVMaterialRepository *)0x0) {
          MVMaterialRepository::MVMaterialRepository__ctor(this_01,(MethodInfo *)0x0);
          (this->fields)._MaterialRepository_k__BackingField = this_01;
          func_?(&(this->fields)._MaterialRepository_k__BackingField,this_01);
          this_02 = (PlayerRepository *)func_?(TypeInfo__PlayerRepository);
          if (this_02 != (PlayerRepository *)0x0) {
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                             );
              func_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                             );
              cRam_? = '\x01';
            }
            ARepository::ARepository__ctor((ARepository *)this_02,(MethodInfo *)0x0);
            pDVar2 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
                     func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                                    );
            if (pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)pDVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                        );
              (this_02->fields).playerInventory = pDVar2;
              func_?(&(this_02->fields).playerInventory,pDVar2);
              (this->fields)._PlayerRepository_k__BackingField = this_02;
              func_?(&(this->fields)._PlayerRepository_k__BackingField,this_02);
              this_03 = (ShopRepository *)func_?(TypeInfo__ShopRepository);
              if (this_03 != (ShopRepository *)0x0) {
                if (cRam_? == '\0') {
                  func_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                                 );
                  func_?(&
                                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                                 );
                  func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
                  func_?(&TypeInfo__System__Collections__Generic__List<int>);
                  cRam_? = '\x01';
                }
                ARepository::ARepository__ctor((ARepository *)this_03,(MethodInfo *)0x0);
                pDVar2 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
                         func_?(
                                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                                        );
                if (pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
                  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                            ((ParameterOverride_1_System_Object_ *)pDVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                            );
                  (this_03->fields).shopInventory = pDVar2;
                  func_?(&(this_03->fields).shopInventory,pDVar2);
                  this_04 = (List_1_System_Int32_ *)
                            func_?(TypeInfo__System__Collections__Generic__List<int>);
                  if (this_04 != (List_1_System_Int32_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
                    LowLevelList_1_System_Object___ctor
                              ((LowLevelList_1_System_Object_ *)this_04,
                               MethodInfo__System__Collections__Generic__List<int>__List__);
                    (this_03->fields).ItemCategoriesInShop = this_04;
                    func_?(&(this_03->fields).ItemCategoriesInShop,this_04);
                    (this->fields)._ShopRepository_k__BackingField = this_03;
                    func_?(&(this->fields)._ShopRepository_k__BackingField,this_03);
                    this_05 = (GameTierShopRepository *)
                              func_?(TypeInfo__GameTierShopRepository);
                    if (this_05 != (GameTierShopRepository *)0x0) {
                      GameTierShopRepository::GameTierShopRepository__ctor
                                (this_05,(MethodInfo *)0x0);
                      (this->fields)._GameTierShopRepository_k__BackingField = this_05;
                      func_?(&(this->fields)._GameTierShopRepository_k__BackingField,
                                      this_05);
                      this_06 = (AvatarRepository *)func_?(TypeInfo__AvatarRepository);
                      if (this_06 != (AvatarRepository *)0x0) {
                        AvatarRepository::AvatarRepository__ctor(this_06,(MethodInfo *)0x0);
                        (this->fields)._AvatarShopRepository_k__BackingField = this_06;
                        func_?(&(this->fields)._AvatarShopRepository_k__BackingField,
                                        this_06);
                        this_07 = (FriendList *)func_?(TypeInfo__FriendList);
                        if (this_07 != (FriendList *)0x0) {
                          FriendList::FriendList__ctor(this_07,(MethodInfo *)0x0);
                          (this->fields)._Friends_k__BackingField = this_07;
                          func_?(&(this->fields)._Friends_k__BackingField,this_07);
                          this_08 = (MVGameModeChangeNotifier *)
                                    func_?(TypeInfo__MVGameModeChangeNotifier);
                          if (this_08 != (MVGameModeChangeNotifier *)0x0) {
                            if (cRam_? == '\0') {
                              func_?(&
                                              MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__
                                             );
                              func_?(&
                                              TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>
                                             );
                              func_?(&TypeInfo__UpdateController);
                              cRam_? = '\x01';
                            }
                            (this_08->fields)._currentState = 1;
                            this_09 = (List_1_IGameStateControllerSubscriber_ *)
                                      func_?(
                                                  TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>
                                                  );
                            if (this_09 != (List_1_IGameStateControllerSubscriber_ *)0x0) {
                              mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::
                              Object]::LowLevelList_1_System_Object___ctor
                                        ((LowLevelList_1_System_Object_ *)this_09,
                                         MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__
                                        );
                              method_00 = (MethodInfo *)&(this_08->fields).UpdateList;
                              (this_08->fields).UpdateList = this_09;
                              func_?(method_00,this_09);
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                        ((Object *)this_08,ExceptionArgument__Enum_obj,method_00);
                              UVar3 = MVGameModeChangeNotifier::
                                      MVGameModeChangeNotifier_GetPresentState
                                                (this_08,(MethodInfo *)0x0);
                              (this_08->fields)._currentState = UVar3;
                              if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0)
                              {
                                func_?();
                              }
                              UpdateController::UpdateController_AddUpdateObject
                                        ((IUpdatecontrollerSubscriberUpdate *)this_08,
                                         UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
                                         (MethodInfo *)0x0);
                              (this->fields)._GameStateController_k__BackingField = this_08;
                              func_?();
                              pMVar4 = (this->fields).teamManager;
                              object = (Object *)&UNK_?;
                              pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                                       func_?(
                                                  TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>
                                                  );
                              if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[System::Object,System::Object]::
                                UnityAction_2_System_Object_System_Object___ctor
                                          (pUVar5,object,
                                           MethodInfo__GameStatCounterManager__OnTeamAdded_System__Object__MV__WorldObject__TeamEventArgs_
                                           ,(MethodInfo *)0x0);
                                if (pMVar4 != (MVTeamManager *)0x0) {
                                  MVTeamManager::MVTeamManager_add_OnTeamAdded
                                            (pMVar4,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
                                                    pUVar5,(MethodInfo *)0x0);
                                  object_00 = (this->fields).gameStatCounterManager;
                                  pMVar4 = (this->fields).teamManager;
                                  pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                                           func_?(
                                                  TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>
                                                  );
                                  if (pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`2[System::Object,System::Object]::
                                    UnityAction_2_System_Object_System_Object___ctor
                                              (pUVar5,(Object *)object_00,
                                               MethodInfo__GameStatCounterManager__OnTeamRemoved_System__Object__MV__WorldObject__TeamEventArgs_
                                               ,(MethodInfo *)0x0);
                                    if (pMVar4 != (MVTeamManager *)0x0) {
                                      MVTeamManager::MVTeamManager_add_OnTeamRemoved
                                                (pMVar4,(
                                                  EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
                                                  pUVar5,(MethodInfo *)0x0);
                                      pWVar6 = (WinningConditionManager *)
                                               func_?(
                                                  TypeInfo__WinningConditionManagerClient);
                                      if (pWVar6 != (WinningConditionManager *)0x0) {
                                        ThemeAttributes::ThemeAttribute`1[System::Single]::
                                        ThemeAttribute_1_System_Single___ctor
                                                  ((ThemeAttribute_1_System_Single_ *)pWVar6,
                                                   (MethodInfo *)0x0);
                                        (this->fields)._WinningConditionManager_k__BackingField =
                                             pWVar6;
                                        func_?(&(this->fields).
                                                         _WinningConditionManager_k__BackingField,
                                                        pWVar6);
                                        pWVar6 = (this->fields).
                                                 _WinningConditionManager_k__BackingField;
                                        if (pWVar6 != (WinningConditionManager *)0x0) {
                                          MVWorldObject.dll::WinningConditionManager::
                                          WinningConditionManager_Initialize
                                                    (pWVar6,(this->fields).gameStatCounterManager,
                                                     (MethodInfo *)0x0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean Join() */

bool Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Join(MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_MVGameServer);
    func_?(&StringLiteral_MVGameControllerBase_GameSession);
    cRam_? = '\x01';
  }
  (this->fields).connState = 2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    message = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_MVGameControllerBase_GameSession,(pGVar1->fields).serverIP,
                         (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    pPVar2 = (this->fields)._Peer_k__BackingField;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if ((pGVar1 != (GameSessionData *)0x0) && (pPVar2 != (PhotonPeer *)0x0)) {
      bVar3 = (*(pPVar2->klass->vtable).Connect.methodPtr)
                        (pPVar2,(pGVar1->fields).serverIP,StringLiteral_MVGameServer,
                         (pPVar2->klass->vtable).Connect.method);
      return bVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void LoadModeGui() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_LoadModeGui
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVNetworkGame__OperationRequests__Syncronize__);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LevelLoader((MethodInfo *)0x0);
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  object = (this->fields).operationRequests;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)object,MethodInfo__MVNetworkGame__OperationRequests__Syncronize__,
               (MethodInfo *)0x0);
    if (this_00 != (LevelLoader *)0x0) {
      if (MVar1 == MVGameMode__Enum_Edit) {
        LevelLoader::LevelLoader_LoadScenes_1
                  (this_00,ScenesForMode__Enum_EditMode,(Action *)this_01,(MethodInfo *)0x0);
        return;
      }
      if (MVar1 != MVGameMode__Enum_Play) {
        if (MVar1 == MVGameMode__Enum_CharacterEditor) {
          LevelLoader::LevelLoader_LoadScenes_1
                    (this_00,ScenesForMode__Enum_AvatarEditMode,(Action *)this_01,(MethodInfo *)0x0)
          ;
        }
        return;
      }
      if (bVar2 == 0) {
        LevelLoader::LevelLoader_LoadScenes_1
                  (this_00,ScenesForMode__Enum_PlayMode,(Action *)this_01,(MethodInfo *)0x0);
        return;
      }
      LevelLoader::LevelLoader_LoadScenes_1
                (this_00,ScenesForMode__Enum_PlayModeTourist,(Action *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAddItemToInventory(Dictionary`2[System.Byte,System.Object], Int16) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddItemToInventory
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               int16_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    MethodInfo__MVNetworkGame____c__DisplayClass253_0___OnAddItemToInventory_b__0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVNetworkGame____c__DisplayClass253_0);
    func_?(&StringLiteral_Failed_to_add_to_inventory__This);
    cRam_? = '\x01';
  }
  this_03 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__MVNetworkGame____c__DisplayClass253_0);
  if (this_03 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_03,(MethodInfo *)0x0);
    (this_03->fields).m_CoroutineContainer = (MonoBehaviour *)returnValues;
    func_?(&this_03->fields,returnValues);
    if (returnCode == -1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_add_to_inventory__This,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar1 != (IEditModeUI *)0x0) {
        pPVar2 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar1);
        if (pPVar2 != (PlayerShopInventoryRepository *)0x0) {
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_FailedToAddItem(pPVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      this_00 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                (this_03->fields).m_CoroutineContainer;
      if (this_00 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           (this_00,0x16,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar3);
        if (pOVar3 != (Object *)0x0) {
          if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar5 = (int32_t *)func_?(pOVar3);
          data = (Dictionary_2_System_Byte_System_Object_ *)(this_03->fields).m_CoroutineContainer;
          id = *piVar5;
          this_04 = (InventoryItem *)func_?(TypeInfo__InventoryItem);
          if (this_04 != (InventoryItem *)0x0) {
            InventoryItem::InventoryItem__ctor_1(this_04,data,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVGameControllerBase);
              cRam_? = '\x01';
            }
            pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
            if (pIVar1 != (IEditModeUI *)0x0) {
              pPVar2 = (PlayerShopInventoryRepository *)
                       func_?(4,TypeInfo__IEditModeUI,pIVar1);
              if (pPVar2 != (PlayerShopInventoryRepository *)0x0) {
                UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                PlayerShopInventoryRepository_AddItemToInventory(pPVar2,this_04,(MethodInfo *)0x0);
                this_01 = (this->fields).itemBusinessLogic;
                if (this_01 != (MVItemBusinessLogic *)0x0) {
                  MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                            (this_01,(this_04->fields).itemID,(this_04->fields).resellable,
                             (this_04->fields).itemCategoryID,(this_04->fields).itemTypeID,
                             (this_04->fields).name,(MethodInfo *)0x0);
                  this_05 = (UnityAction_1_System_Object_ *)
                            func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
                  if (this_05 != (UnityAction_1_System_Object_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                    UnityAction_1_System_Object___ctor
                              (this_05,(Object *)this_03,
                               MethodInfo__MVNetworkGame____c__DisplayClass253_0___OnAddItemToInventory_b__0_MVWorldObjectClient_
                               ,(MethodInfo *)0x0);
                    if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
                       (this_02 = (MVWorldObjectClientManager *)
                                  (((this->fields).worldNetwork)->fields)._.worldObjectClientManager
                       , this_02 != (MVWorldObjectClientManager *)0x0)) {
                      pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                         (this_02,id,(MethodInfo *)0x0);
                      if (pMVar6 != (MVWorldObject *)0x0) {
                        (*(code *)pMVar6->klass[1]._1.thread_static_fields_offset)
                                  (pMVar6,this_05,pMVar6->klass[1]._1.flags);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnAddLinkEvent(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddLinkEvent
               (MVNetworkGame *this,int32_t fromID,int32_t toID,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__WorldObject__Link);
    func_?(&StringLiteral_reset_count_);
    cRam_? = '\x01';
  }
  this_02 = (Link *)func_?(TypeInfo__MV__WorldObject__Link);
  if (this_02 != (Link *)0x0) {
    MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(this_02,(MethodInfo *)0x0);
    (this_02->fields).inputWOID = toID;
    (this_02->fields).outputWOID = fromID;
    (this_02->fields).id = linkID;
    this_00 = (this->fields).worldNetwork;
    if (this_00 != (WorldNetwork *)0x0) {
      WorldNetwork::WorldNetwork_AddLink_1(this_00,this_02,(MethodInfo *)0x0);
      this_01 = (this->fields)._LogicObjectManager_k__BackingField;
      worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (LogicObjectManagerClient *)0x0) {
        LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                  (this_01,this_02,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_reset_count_,pSVar1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnAddObjectLinkEvent(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
               (MVNetworkGame *this,int32_t fromID,int32_t toID,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__ObjectLink);
    cRam_? = '\x01';
  }
  this_01 = (ObjectLink *)func_?(TypeInfo__MV__WorldObject__ObjectLink);
  if (this_01 != (ObjectLink *)0x0) {
    MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(this_01,(MethodInfo *)0x0);
    (this_01->fields).objectWOID = toID;
    (this_01->fields).id = linkID;
    (this_01->fields).objectConnectorWOID = fromID;
    this_00 = (this->fields).worldNetwork;
    if (this_00 != (WorldNetwork *)0x0) {
      WorldNetwork::WorldNetwork_AddObjectLink_1(this_00,this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnAddWorldObjectToInventoryResponseDev(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
               (MVNetworkGame *this,int32_t returnCode,int32_t worldObjectID,int32_t itemID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Successfully_added_model_to_your);
    func_?(&StringLiteral_Item_not_added_to_inventory);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Item_not_added_to_inventory;
  if (returnCode == 0) {
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&itemID,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Successfully_added_model_to_your,pSVar1,(MethodInfo *)0x0);
  }
  if ((this->fields).OnAddWorldObjectToInventoryCallbackDev != (UnityAction_1_System_String_ *)0x0)
  {
    pUVar2 = (this->fields).OnAddWorldObjectToInventoryCallbackDev;
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,pSVar1,(pUVar2->fields)._._.method);
  }
  return;
}


/* Void OnAvatarShopInventoryResultSetResponse(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarRepositoryItem);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (outData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                        ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)outData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_7,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      method_00 = (MethodInfo *)pDVar6->_version;
      pOVar8 = pDVar6->_currentValue;
      DStack_7._version = 0;
      uStack_1 = 1;
      DStack_7._currentValue = (Object *)&stack0xffffffc4;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pOVar8 == (Object *)0x0) break;
        pIVar10 = TypeInfo__System__Int32;
        if ((pOVar8->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?();
        iStack_12 = *piVar11;
        this_02 = (AvatarRepositoryItem *)func_?();
        if (this_02 == (AvatarRepositoryItem *)0x0) break;
        AvatarRepositoryItem::AvatarRepositoryItem__ctor
                  (this_02,outData,iStack_12,(MethodInfo *)0x0);
        this_00 = (this->fields)._AvatarShopRepository_k__BackingField;
        if (this_00 == (AvatarRepository *)0x0) break;
        AvatarRepository::AvatarRepository_AddItem(this_00,this_02,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pOVar8 = extraout_ECX;
  pIVar10 = extraout_EDX;
code_?:
  func_?(pOVar8,pIVar10);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnCloneTempWorldObjectWithOriginalReferenceEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::
     MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  eventData_00 = eventData;
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_OriginalId);
    cRam_? = '\x01';
  }
  if (eventData == (EventData *)0x0) {
code_?:
    func_?();
  }
  else {
    unaff_ESI = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x48,(MethodInfo *)0x0);
    eventData = (EventData *)TypeInfo__System__Int32;
    if (unaff_ESI == (Object *)0x0) goto code_?;
    iVar1 = func_?(unaff_ESI,TypeInfo__System__Int32);
    if (iVar1 == 0) goto code_?;
    eventData = (EventData *)TypeInfo__System__Int32;
    iVar1 = func_?(unaff_ESI,TypeInfo__System__Int32);
    if (iVar1 == 0) goto code_?;
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar2 = *(int32_t *)(iVar1 + 0x10);
      if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
         (this_00 = (MVWorldObjectClientManager *)
                    (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         this_00 != (MVWorldObjectClientManager *)0x0)) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,iVar2,(MethodInfo *)0x0);
        unaff_ESI = (Object *)0x0;
        if (pMVar3 != (MVWorldObject *)0x0) {
          pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                   (*(pMVar3->klass->vtable).get_RunTimeData.methodPtr)
                             (pMVar3,(pMVar3->klass->vtable).get_RunTimeData.method);
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          bVar5 = Extensions::Extensions_ContainsObscuredKey
                            (pDVar4,StringLiteral_OriginalId,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                     (*(pMVar3->klass->vtable).get_RunTimeData.methodPtr)
                               (pMVar3,(pMVar3->klass->vtable).get_RunTimeData.method);
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            }
            pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_op_Implicit
                               ((ObscuredInt *)&stack0xffffffe8,iVar2,(MethodInfo *)0x0);
            iVar2 = pOVar6->currentCryptoKey;
            puVar7 = (undefined *)pOVar6->hiddenValue;
            pEVar8 = (Extensions__Class *)pOVar6->fakeValue;
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              puVar7 = &UNK_?;
              pEVar8 = TypeInfo__Extensions;
              func_?();
            }
            value.hiddenValue = (int32_t)puVar7;
            value.currentCryptoKey = iVar2;
            value.fakeValue = (int32_t)pEVar8;
            value.inited = pOVar6->inited;
            value._13_3_ = *(undefined3 *)&pOVar6->field_0xd;
            Extensions::Extensions_SetObscuredType_3
                      (pDVar4,StringLiteral_OriginalId,value,
                       void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                      );
            MVNetworkGame_OnCloneWorldObjectTreePosition(this,eventData_00,(MethodInfo *)0x0);
            pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                     (*(pMVar3->klass->vtable).get_RunTimeData.methodPtr)();
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            Extensions::Extensions_RemoveObscuredKey
                      (pDVar4,StringLiteral_OriginalId,(MethodInfo *)0x0);
            return;
          }
          MVNetworkGame_OnCloneWorldObjectTreePosition(this,eventData_00,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,eventData);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVWorldObjectClient OnCloneWorldObjectTree(EventData) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree
          (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  this_01 = eventData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_CloneToRootGroup_);
    cRam_? = '\x01';
  }
  if (eventData == (EventData *)0x0) {
code_?:
    func_?();
code_?:
    pOVar1 = (Object *)func_?();
  }
  else {
    unaff_EBX = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x48,(MethodInfo *)0x0);
    eventData = (EventData *)TypeInfo__System__Int32;
    if (unaff_EBX == (String *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = func_?(unaff_EBX,TypeInfo__System__Int32);
      if (iVar2 == 0) goto code_?;
    }
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (this_01,0x14,(MethodInfo *)0x0);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_01,0x3a,(MethodInfo *)0x0);
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      func_?();
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_01,0x5c,(MethodInfo *)0x0);
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?();
      eventData = (EventData *)*piVar3;
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_01,0x65,(MethodInfo *)0x0);
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      func_?();
      str1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       ((Boolean *)&stack0xfffffff8,(IFormatProvider *)0x0,in_stack_4);
      unaff_EBX = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_CloneToRootGroup_,str1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_EBX,(MethodInfo *)0x0);
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_01,0x80,(MethodInfo *)0x0);
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?();
      this_00 = (this->fields).worldNetwork;
      if (iVar2 == 0) goto code_?;
      if ((*(int *)(iVar2 + 0xc) != 0) && (1 < *(uint *)(iVar2 + 0xc))) {
        if (this_00 != (WorldNetwork *)0x0) {
          pMVar5 = WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                             (this_00,(int32_t)eventData,*piVar3,0,*(int32_t *)(iVar2 + 0x10),
                              *(int32_t *)(iVar2 + 0x14),(int32_t)eventData,(int32_t)eventData,
                              (MethodInfo *)0x0);
          return pMVar5;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?(pOVar1);
code_?:
  func_?(unaff_EBX,eventData);
  pcVar6 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar5;
}


/* MVWorldObjectClient OnCloneWorldObjectTreePosition(EventData) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
          (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  pMVar1 = MVNetworkGame_OnCloneWorldObjectTree(this,eventData,(MethodInfo *)0x0);
  if (eventData != (EventData *)0x0) {
    uStack_2 = uStack_2 & 0xffffffff00000000;
    pVVar3 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition_1
                       ((Vector3 *)((int)register0x00000010 + -0x10),(eventData->fields).Parameters,
                        (MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      uStack_2._0_4_ = pVVar3->x;
      uStack_2._4_4_ = pVVar3->y;
      VStack_4.y = pVVar3->z;
      VStack_4.z = (float)(pMVar1->klass->vtable).set_Position.method;
      (*(pMVar1->klass->vtable).set_Position.methodPtr)(pMVar1);
      pQVar5 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation_1
                         ((Quaternion *)&stack0xffffffec,(eventData->fields).Parameters,
                          (MethodInfo *)0x0);
      VStack_4.y = pQVar5->x;
      VStack_4.z = pQVar5->y;
      uStack_2._4_4_ = (float)pMVar1;
      uStack_2._0_4_ = (float)&UNK_?;
      (*(pMVar1->klass->vtable).set_Rotation.methodPtr)();
      return pMVar1;
    }
  }
  VStack_4.z = (float)&UNK_?;
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar1;
}


/* Void OnCollectiblePickedUp(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVCollectible);
    func_?(&StringLiteral_Attempt_to_call_WO_that_is_not_c);
    cRam_? = '\x01';
  }
  if (photonEvent != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xfe,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar3 = (undefined4 *)func_?(pOVar1);
      uVar4 = *puVar3;
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x16,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar5 = (int32_t *)func_?(pOVar1);
        if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
           (this_00 = (MVWorldObjectClientManager *)
                      (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
           this_00 != (MVWorldObjectClientManager *)0x0)) {
          pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_00,*piVar5,(MethodInfo *)0x0);
          if (pMVar6 == (MVWorldObject *)0x0) {
            return;
          }
          if (((pMVar6->klass->_1).typeHierarchyDepth <
               (TypeInfo__MVCollectible->_1).typeHierarchyDepth) ||
             ((MVCollectible__Class *)
              (pMVar6->klass->_1).typeHierarchy
              [(TypeInfo__MVCollectible->_1).typeHierarchyDepth - 1] != TypeInfo__MVCollectible)) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Attempt_to_call_WO_that_is_not_c,(MethodInfo *)0x0);
            return;
          }
          if (((TypeInfo__MVCollectible->_1).typeHierarchyDepth <=
               (pMVar6->klass->_1).typeHierarchyDepth) &&
             ((MVCollectible__Class *)
              (pMVar6->klass->_1).typeHierarchy
              [(TypeInfo__MVCollectible->_1).typeHierarchyDepth - 1] == TypeInfo__MVCollectible)) {
            pMVar7 = (MVWorldObject *)0x0;
            if ((MVCollectible__Class *)
                (pMVar6->klass->_1).typeHierarchy
                [(TypeInfo__MVCollectible->_1).typeHierarchyDepth - 1] == TypeInfo__MVCollectible) {
              pMVar7 = pMVar6;
            }
            (*(code *)pMVar7->klass[2]._1.genericContainerHandle)
                      (pMVar7,uVar4,pMVar7->klass[2]._1.instance_size);
            return;
          }
        }
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  this_01 = (MVNetworkGame *)(this->fields).eventHandling;
  if (this_01 != (MVNetworkGame *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__JoinUIUpdater);
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                     );
      cRam_? = '\x01';
    }
    if (*(bool *)&(this_01->fields).ReceivedAvatarBodiesFromQuery == 0) {
      MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (eventData != (EventData *)0x0) {
        this = this_01;
        if (MVar1 != MVJoinState__Enum_Playing) {
          this._1_3_ = (undefined3)((uint)this_01 >> 8);
          this = (MVNetworkGame *)CONCAT31(this._1_3_,(eventData->fields).Code);
          if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
                    ((MVEventCodes__Enum)this,(MethodInfo *)0x0);
        }
        this = (MVNetworkGame *)CONCAT31(this._1_3_,(eventData->fields).Code);
        MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
                  ((MVNetworkGame_EventHandling *)this_01,(MVEventCodes__Enum)this,(EventData *)0x0,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = this_01;
        return;
      }
    }
    else {
      this_00 = (this_01->fields).ReceivedAccessoryData;
      if (this_00 != (Action_1_String_ *)0x0) {
        puVar2 = &UNK_?;
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)this_00,(Object *)eventData,
                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                  );
        *unaff_FS_OFFSET = puVar2;
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnFriendRequestEvent(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
               (MVNetworkGame *this,int32_t friendID,int32_t profileID,int32_t friendProfileID,
               MethodInfo *method)

{
  this_00 = (this->fields)._Friends_k__BackingField;
  if (this_00 != (FriendList *)0x0) {
    FriendList::FriendList_AddFriend
              (this_00,friendID,profileID,friendProfileID,FriendStatus__Enum_Pending,
               (MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnFriendUpdateEvent(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
               (MVNetworkGame *this,int32_t friendID,int32_t profileID,FriendStatus__Enum status,
               MethodInfo *method)

{
  this_04 = (this->fields)._Friends_k__BackingField;
  if (this_04 != (FriendList *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                     );
      func_?(&TypeInfo__NotificationController);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                     );
      func_?(&StringLiteral_Tried_updating_friend_that_doesn);
      func_?(&StringLiteral_Accepted_friend_request_from__0_);
      cRam_? = '\x01';
    }
    DStack_2._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
    DStack_2._index = 0;
    DStack_2._version = 0;
    DStack_2._currentValue = (Object *)0x0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
       pMVar5 != (MVLocalPlayer *)0x0)) {
      if (profileID == (pMVar5->fields)._._ProfileID_k__BackingField) {
        this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (this_04->fields).friends;
        if (this_01 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (this_01,(Object *)friendID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            );
          if (bVar6 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_Tried_updating_friend_that_doesn,(MethodInfo *)0x0);
code_?:
            if ((this_04->fields).OnFriendListUpdated !=
                (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              (*(((this_04->fields).OnFriendListUpdated)->fields)._._.invoke_impl)();
            }
            *unaff_FS_OFFSET = pDVar1;
            return;
          }
          if (status == FriendStatus__Enum_Deleted) {
            pDVar7 = (this_04->fields).friends;
            if (pDVar7 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                        );
              goto code_?;
            }
          }
          else {
            if ((this_04->fields).OnFriendRequestAccepted !=
                (FriendList_OnFriendRequestUpdated *)0x0) {
              pDVar7 = (this_04->fields).friends;
              if (pDVar7 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                        );
              status = *(FriendStatus__Enum *)(friendID + 0x14);
              (**(code **)(friendID + 0xc))();
            }
            pDVar7 = (this_04->fields).friends;
            if ((pDVar7 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
               (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,friendID
                                     ,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                    ), pOVar8 != (Object *)0x0)) {
              pOVar8[2].klass = (Object__Class *)status;
              pDStack_9 = (Dictionary_2_System_Object_System_Object_ *)func_?();
              if (pDStack_9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                          ((ParameterOverride_1_System_Object_ *)pDStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                pDStack_10 = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                             func_?();
                pDVar7 = (this_04->fields).friends;
                if (pDVar7 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
                  pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,
                                       friendID,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                      );
                  data = pDStack_9;
                  pDVar1 = pDStack_9;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDStack_9,(Object *)pDStack_10,pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  NotificationController::NotificationController_OnNotificationReceived
                            (NotificationType__Enum_FriendRequestAccepted,data,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        FriendList::FriendList_RemoveFromPendingByProfileID(this_04,profileID,(MethodInfo *)0x0);
        if (status == FriendStatus__Enum_Deleted) goto code_?;
        if ((this_04->fields).OnPendingCountChanged != (UnityAction_1_System_Int32_ *)0x0) {
          pUVar11 = (this_04->fields).OnPendingCountChanged;
          this_02 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)FriendList::FriendList_GetOnlineFriends(this_04,(MethodInfo *)0x0);
          if (this_02 ==
              (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
          ::Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                    );
          status = (FriendStatus__Enum)(pUVar11->fields)._._.method_code;
          profileID = (int32_t)&UNK_?;
          (*(pUVar11->fields)._._.invoke_impl)();
        }
        pDStack_10 = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar3 != (MVGameControllerBase *)0x0) &&
            (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
           ((this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
            (this_03 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                    (this_00,(MethodInfo *)0x0),
            this_03 !=
            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
             *)0x0)))) {
          method_00 = (MethodInfo *)&stack0xffffffd8;
          pDVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)method_00,this_03,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                             );
          DStack_2._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar12->_dictionary;
          DStack_2._index = pDVar12->_index;
          DStack_2._version = pDVar12->_version;
          DStack_2._currentValue = pDVar12->_currentValue;
          pIStack_13 = (InvokerMethod)0x0;
          pDStack_9 = (Dictionary_2_System_Object_System_Object_ *)&DStack_2;
          do {
            pDStack_10 = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                         &UNK_?;
            bVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_2,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                              );
            pOVar8 = DStack_2._currentValue;
            if (bVar6 == 0) {
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&DStack_2,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,method_00);
              goto code_?;
            }
            if ((Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                DStack_2._currentValue ==
                (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0)
            goto code_?;
          } while ((Il2CppClass *)profileID !=
                   (Il2CppClass *)
                   ((Dictionary_2_TKey_TValue_Entry_System_Object_System_Object_ *)
                   ((int)DStack_2._currentValue + 0x10))[1].value);
          pDStack_10 = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                       DStack_2._currentValue;
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,method_00);
          if ((Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)pOVar8 !=
              (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0) {
            pSVar14 = TM::TM__(StringLiteral_Accepted_friend_request_from__0_,(MethodInfo *)0x0);
            pIVar15 = (Il2CppClass *)
                     ((Dictionary_2_TKey_TValue_Entry_System_Object_System_Object_ *)
                     ((int)pOVar8 + 0x10))[2].value;
            if (pIVar15 == (Il2CppClass *)0x0) goto code_?;
            pSVar14 = mscorlib.dll::System::String::String_Format
                               (pSVar14,(Object *)pIVar15->namespaze,(MethodInfo *)0x0);
            if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            status = FriendStatus__Enum_Rejected;
            NotificationController::NotificationController_PushNotification
                      (pSVar14,(Sprite *)0x0,3,(MethodInfo *)0x0);
          }
code_?:
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (pMVar5 = MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
             pMVar5 != (MVLocalPlayer *)0x0)) {
            this_04 = (FriendList *)0x0;
            FriendList::FriendList_AddFriend
                      ((FriendList *)0x0,status,(pMVar5->fields)._._ProfileID_k__BackingField,0,
                       status,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnGameCreated(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGameCreated
               (MVNetworkGame *this,Object *sender,
               InitializedGameQueryDataEventArgs *initializedGameQueryDataEventArgs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&MethodInfo__MVNetworkGame__EventHandling__UncacheEventsFromJoin__);
    func_?(&
                    MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    pEVar2 = (pWVar1->fields)._.InitializedGameQueryData;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pWVar1->fields)._.InitializedGameQueryData =
             (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
      }
      else {
        pEVar2 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
        if (pEVar2 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
        goto code_?;
        (pWVar1->fields)._.InitializedGameQueryData = pEVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      object = (this->fields).eventHandling;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)object,
                   MethodInfo__MVNetworkGame__EventHandling__UncacheEventsFromJoin__,
                   (MethodInfo *)0x0);
        coroutine = WaitForFrames::WaitForFrames_Frames(1,(UnityAction *)this_01,(MethodInfo *)0x0);
        Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGameQueryReady(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGameQueryReady
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (eventData != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,99,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar3 = (int32_t *)func_?();
      if (pOVar1[4].klass != (Object__Class *)0x0) {
        MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                  ((MVNetworkGame_GameDataQueryManager *)pOVar1[4].klass,*piVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGetActiveAvatarResponse(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
               (MVNetworkGame *this,int32_t woid,MethodInfo *method)

{
  if ((this->fields).OnActiveAvatar != (Action_1_Int32_ *)0x0) {
    pAVar1 = (this->fields).OnActiveAvatar;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,woid,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void OnGetBuiltInItemBusinessData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
               (MVNetworkGame *this,
               Dictionary_2_System_Object_System_Object_ *builtInItemBusinessData,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVItem);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (builtInItemBusinessData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa0,builtInItemBusinessData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pDVar6->_dictionary;
    pOVar7 = (pDVar6->_current).key;
    uVar8 = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         &stack0xffffffb8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffb8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pDStack_10 = (Dictionary_2_System_Object_System_Object_ *)uVar8;
      this_01 = (TweenRunner_1_FloatTween_ *)func_?();
      if ((this_01 == (TweenRunner_1_FloatTween_ *)0x0) ||
         (UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
          TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0), pOVar7 == (Object *)0x0))
      break;
      pIVar11 = TypeInfo__System__Int32;
      if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar12 = (undefined4 *)func_?(pOVar7);
      (this_01->fields).m_CoroutineContainer = (MonoBehaviour *)*puVar12;
      if ((pDStack_10 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         ((((pDStack_10->klass->_1).typeHierarchyDepth <
            (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .typeHierarchyDepth ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDStack_10->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
          (pDStack_10 == (Dictionary_2_System_Object_System_Object_ *)0x0)))) goto code_?;
      builtInItemBusinessData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x70,builtInItemBusinessData._0_3_)
      ;
      pOVar13 = (Object *)func_?(TypeInfo__System__Byte,(int)&builtInItemBusinessData + 3);
      if (pDStack_10 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDStack_10,pOVar13,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar14 = CONCAT44(TypeInfo__System__Int32,pOVar13);
      if (pOVar13 == (Object *)0x0) break;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar12 = (undefined4 *)func_?(pOVar13);
      (this_01->fields).m_Tween = (IEnumerator *)*puVar12;
      uStack_15 = 0xf;
      pOVar13 = (Object *)func_?(TypeInfo__System__Byte,&uStack_15);
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDStack_10,pOVar13,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar14 = CONCAT44(TypeInfo__System__Int32,pOVar13);
      if (pOVar13 == (Object *)0x0) break;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar12 = (undefined4 *)func_?(pOVar13);
      this_01[1].klass = (TweenRunner_1_FloatTween___Class *)*puVar12;
      uStack_16 = 10;
      pOVar13 = (Object *)func_?(TypeInfo__System__Byte,&uStack_16);
      pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDStack_10,pOVar13,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar14 = CONCAT44(TypeInfo__System__String,pOVar17);
      pOVar13 = (Object *)0x0;
      if (pOVar17 == (Object *)0x0) {
        this_01[1].fields.m_Tween = (IEnumerator *)0x0;
      }
      else {
        if ((String__Class *)pOVar17->klass == TypeInfo__System__String) {
          pOVar13 = pOVar17;
        }
        if (pOVar13 == (Object *)0x0) goto code_?;
        this_01[1].fields.m_Tween = (IEnumerator *)pOVar13;
        uVar14 = CONCAT44(TypeInfo__System__String,pOVar17);
        pOVar13 = (Object *)0x0;
        if ((String__Class *)pOVar17->klass == TypeInfo__System__String) {
          pOVar13 = pOVar17;
        }
        if (pOVar13 == (Object *)0x0) goto code_?;
      }
      func_?(&this_01[1].fields.m_Tween,pOVar13);
      uStack_18 = 100;
      pOVar13 = (Object *)func_?(TypeInfo__System__Byte,&uStack_18);
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDStack_10,pOVar13,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar14 = CONCAT44(TypeInfo__System__Boolean,pOVar13);
      if (pOVar13 == (Object *)0x0) break;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      puVar5 = (undefined1 *)func_?(pOVar13);
      *(undefined1 *)((int)&this_01[2].fields.m_CoroutineContainer + 1) = *puVar5;
      this_00 = (this->fields).itemBusinessLogic;
      if (this_00 == (MVItemBusinessLogic *)0x0) break;
      MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                (this_00,(int32_t)(this_01->fields).m_CoroutineContainer,
                 *(bool *)((int)&this_01[2].fields.m_CoroutineContainer + 1),
                 (int32_t)(this_01->fields).m_Tween,(int32_t)this_01[1].klass,
                 (String *)this_01[1].fields.m_Tween,(MethodInfo *)0x0);
    }
  }
  uVar14 = func_?();
code_?:
  func_?(uVar14);
  pDStack_10 = extraout_EDX;
code_?:
  func_?(pDStack_10,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
  pOVar7 = extraout_ECX;
  pIVar11 = extraout_EDX_00;
code_?:
  func_?(pOVar7,pIVar11);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnGetGameBatch(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetGameBatch
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  this_01 = eventData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__QueryType);
    func_?(&StringLiteral__eventData_Contains__byte_MVPara);
    cRam_? = '\x01';
  }
  if ((eventData == (EventData *)0x0) ||
     (pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (eventData->fields).Parameters,
     pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)0xf5,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral__eventData_Contains__byte_MVPara,(MethodInfo *)0x0);
      return;
    }
    pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0xfe,(MethodInfo *)0x0);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar4 = (undefined4 *)func_?(pOVar3);
      unaff_EDI = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (eventData,(uint8_t)*puVar4,(MethodInfo *)0x0);
      this_02 = (Byte__Array__Class *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      pBVar5 = TypeInfo__System__Byte;
      if (this_02 != (Byte__Array__Class *)0x0) {
        if (unaff_EDI == (Object *)0x0) {
          buffer = (Byte__Array *)0x0;
        }
        else {
          buffer = (Byte__Array *)func_?(unaff_EDI,TypeInfo__System__Byte);
          if (buffer == (Byte__Array *)0x0) goto code_?;
        }
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  ((BytePacker *)this_02,buffer,(MethodInfo *)0x0);
        this = (MVNetworkGame *)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (eventData,0x85,(MethodInfo *)0x0);
        unaff_EBX = this_02;
        if (this != (MVNetworkGame *)0x0) {
          if ((this->klass->_0).element_class != (TypeInfo__MV__Common__QueryType->_0).element_class
             ) goto code_?;
          func_?();
          eventData._0_1_ = 0;
          unaff_EDI = (Object *)0xffffffff;
          pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                   (this_01->fields).Parameters;
          if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
            bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (pDVar1,(Object *)0x63,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                              );
            if (bVar2 != 0) {
              pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (this_01,99,(MethodInfo *)0x0);
              if (pOVar3 == (Object *)0x0) goto code_?;
              if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              puVar4 = (undefined4 *)func_?(pOVar3);
              unaff_EDI = (Object *)*puVar4;
            }
            pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                     (this_01->fields).Parameters;
            if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
              bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                (pDVar1,(Object *)0x64,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                                );
              if (bVar2 != 0) {
                this = (MVNetworkGame *)
                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (this_01,100,(MethodInfo *)0x0);
                if (this == (MVNetworkGame *)0x0) goto code_?;
                if ((this->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class
                   ) goto code_?;
                pbVar6 = (bool *)func_?();
                eventData._0_1_ = *pbVar6;
              }
              this_00 = (this->fields).gameDataQueryManager;
              if (this_00 != (MVNetworkGame_GameDataQueryManager *)0x0) {
                MVNetworkGame+GameDataQueryManager::
                MVNetworkGame_GameDataQueryManager_HandleDataBatch
                          (this_00,(int32_t)this_02,(int32_t)unaff_EDI,QueryType__Enum_GameWorld,
                           (bool)eventData,(BytePacker *)this_02,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  pBVar5 = unaff_EBX;
code_?:
  func_?(unaff_EDI,pBVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnGetItemCategories(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetItemCategories
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__ItemCategories);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_OnDBQueryResponse__outData_is_nu);
    cRam_? = '\x01';
  }
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_OnDBQueryResponse__outData_is_nu,(MethodInfo *)0x0);
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>)
  ;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
              );
    if (outData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                          ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)outData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System
        ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)&stack0xffffffc4,
                   (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                  );
        method_01 = (MethodInfo *)0x0;
        uStack_1 = 1;
        while( true ) {
          pMVar4 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
          ;
          bVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&stack0xffffffb4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          if (bVar5 == 0) break;
          if (pMVar4 == (MethodInfo *)0x0) goto code_?;
          if (*(Il2CppClass **)(pMVar4->methodPointer + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          func_?();
          pOVar6 = (Object *)func_?();
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (outData,pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          method_00 = 
          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
          ;
          if (pMVar4 == (MethodInfo *)0x0) goto code_?;
          if (*(Il2CppClass **)(pMVar4->methodPointer + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) {
code_?:
            func_?();
            goto code_?;
          }
          puVar7 = (undefined4 *)func_?();
          key = (Object *)0x0;
          if (pOVar6 != (Object *)0x0) {
            if ((String__Class *)pOVar6->klass == TypeInfo__System__String) {
              key = pOVar6;
            }
            if (key == (Object *)0x0) {
              func_?();
              goto code_?;
            }
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add(this_00,key,(Object *)*puVar7,method_00);
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffb4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,method_01);
        uStack_1 = 0xffffffff;
        this_02 = (ItemCategories *)func_?();
        if (this_02 != (ItemCategories *)0x0) {
          ItemCategories::ItemCategories__ctor
                    (this_02,(Dictionary_2_System_String_System_Int32_ *)this_00,(MethodInfo *)0x0);
          (this->fields)._ItemCategories_k__BackingField = this_02;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGetPlanetOwnershipTypes(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_OnDBQueryResponse__outData_is_nu);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentKey = (Object *)0x0;
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_OnDBQueryResponse__outData_is_nu,(MethodInfo *)0x0);
  }
  else {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                        ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)outData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentKey = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        pOVar10 = DStack_6._currentKey;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pPVar11 = (this->fields)._PlayerRepository_k__BackingField;
        if ((pPVar11 == (PlayerRepository *)0x0) ||
           (pDStack_12 = (Dictionary_2_System_Object_System_Object_ *)
                         (pPVar11->fields)._.PlanetOwnershipTypes,
           DStack_6._currentKey == (Object *)0x0)) break;
        if (((DStack_6._currentKey)->klass->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        puVar13 = (undefined4 *)func_?();
        uStack_14 = *puVar13;
        pOVar15 = (Object *)func_?();
        pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (outData,pOVar15,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDStack_12 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        pMStack_16 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
        ;
        pOStack_17 = pOVar15;
        if (pOVar15 != (Object *)0x0) {
          pOStack_17 = (Object *)0x0;
          if ((String__Class *)pOVar15->klass == TypeInfo__System__String) {
            pOStack_17 = pOVar15;
          }
          if (pOStack_17 == (Object *)0x0) goto code_?;
        }
        if (pOVar10 == (Object *)0x0) break;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar13 = (undefined4 *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDStack_12,(Object *)*puVar13,pOStack_17,pMStack_16);
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnInventoryResultSetResponse(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  OStack_6.klass = (Object__Class *)0x0;
  OStack_6.monitor = (MonitorData *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar7 != (IEditModeUI *)0x0) {
    iVar8 = func_?(4,TypeInfo__IEditModeUI,pIVar7);
    if (iVar8 == 0) {
      pPVar9 = (PlayerShopInventoryRepository *)
               func_?(
                              TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                              );
      if (pPVar9 == (PlayerShopInventoryRepository *)0x0) goto code_?;
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository__ctor(pPVar9,(MethodInfo *)0x0);
      func_?(5,TypeInfo__IEditModeUI,pIVar7,pPVar9);
    }
    if ((outData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                            ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)outData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       this_01 !=
       (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
        *)0x0)) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffffc4,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      OStack_6.klass = (Object__Class *)pDVar10->_dictionary;
      method_00 = (MethodInfo *)0x0;
      uStack_1 = 1;
      do {
        OStack_6.monitor = (MonitorData *)&UNK_?;
        pMVar11 = 
        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
        ;
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                            *)&OStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (&OStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pMVar11 == (MethodInfo *)0x0) break;
        pIVar13 = TypeInfo__System__Int32;
        if (*(Il2CppClass **)(pMVar11->methodPointer + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar14 = (int32_t *)func_?();
        itemID = *piVar14;
        pOVar15 = (Object *)func_?();
        itemData = (Dictionary_2_System_Object_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (outData,pOVar15,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
        if ((itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
           (((itemData->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth ||
            ((Dictionary_2_System_Object_System_Object___Class *)
             (itemData->klass->_1).typeHierarchy
             [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).typeHierarchyDepth - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
        goto code_?;
        this_02 = (InventoryItem *)func_?();
        if (this_02 == (InventoryItem *)0x0) break;
        InventoryItem::InventoryItem__ctor_2(this_02,itemID,itemData,(MethodInfo *)0x0);
        if ((this_02->fields).isDeleted == 0) {
          uStack_16 = 0x16;
          pOVar15 = (Object *)func_?(TypeInfo__System__Byte,&uStack_16);
          if (itemData == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (itemData,pOVar15,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar17 = CONCAT44(TypeInfo__System__Int32,pOVar15);
          if (pOVar15 == (Object *)0x0) break;
          if ((pOVar15->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar14 = (int32_t *)func_?(pOVar15);
          (this_02->fields).slotPosition = *piVar14;
          iVar8 = func_?(0);
          if ((iVar8 == 0) ||
             (pPVar9 = (PlayerShopInventoryRepository *)
                       func_?(4,TypeInfo__IEditModeUI,iVar8),
             pPVar9 == (PlayerShopInventoryRepository *)0x0)) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_AddItemToInventory(pPVar9,this_02,(MethodInfo *)0x0);
        }
        this_00 = (this->fields).itemBusinessLogic;
        if (this_00 == (MVItemBusinessLogic *)0x0) break;
        MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                  (this_00,itemID,(this_02->fields).resellable,(this_02->fields).itemCategoryID,
                   (this_02->fields).itemTypeID,(this_02->fields).name,(MethodInfo *)0x0);
      } while( true );
    }
  }
code_?:
  uVar17 = func_?();
code_?:
  func_?(uVar17);
code_?:
  func_?();
  pMVar11 = extraout_ECX;
  pIVar13 = extraout_EDX;
code_?:
  func_?(pMVar11,pIVar13);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnJoinResponse(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnJoinResponse
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdConfigSettings);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__Common__ClientSettingFlags);
    func_?(&TypeInfo__CreySettings);
    func_?(&TypeInfo__CustomTouristPromotionSettings);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__ElitePromotionSettings);
    func_?(&TypeInfo__HackingToolDetector);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MV__WorldObject__AntiCheat__AntiCheatData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::AntiCheat::AntiCheatData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::ApplicationDesc>__ToArray__
                   );
    func_?(&TypeInfo__MVGameCoinManager);
    func_?(&TypeInfo__MV__Common__MVGameType);
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    func_?(&TypeInfo__MVLocalPlayerRegistered);
    func_?(&TypeInfo__MVLocalPlayerTourist);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    func_?(&TypeInfo__SessionLocatorPing);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_Deprecated_platformer_mode);
    cRam_? = '\x01';
  }
  if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
code_?:
    func_?();
    this = (MVNetworkGame *)unaff_EDI;
code_?:
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_07 = (Exception *)func_?(uVar1);
    func_?(this_07);
    pMVar2 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Unknown_game_mode);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_07,pSVar3,pMVar2);
    uVar1 = func_?(&
                             MethodInfo__MVNetworkGame__OnJoinResponse_System__Collections__Generic__Dictionary<unsigned_char,_System::Object>_
                            );
    pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)func_?(this_07,uVar1);
    pSVar5 = extraout_ECX;
code_?:
    uVar6 = func_?(pDVar4,pSVar5);
code_?:
    func_?(uVar6);
    pDVar7 = extraout_ECX_00;
    pSVar5 = extraout_EDX;
code_?:
    func_?(pDVar7,pSVar5);
    pIVar8 = extraout_EDX_00;
code_?:
    pSVar5 = (String__Class *)func_?(unaff_EBX,pIVar8);
    pDVar4 = extraout_ECX_01;
code_?:
    uVar6 = func_?(pDVar4,pSVar5);
code_?:
    func_?((int)((ulonglong)uVar6 >> 0x20),(int)uVar6);
    pSVar5 = extraout_ECX_02;
code_?:
    func_?(unaff_EBX,pSVar5);
    unaff_EDI = extraout_EDX_01;
    pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)this;
  }
  else {
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xd3,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    if (unaff_EDI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if ((String__Class *)(unaff_EDI->_0).image == TypeInfo__System__String) {
        pDVar4 = unaff_EDI;
      }
      pSVar5 = TypeInfo__System__String;
      pDVar9 = unaff_EDI;
      if (pDVar4 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    }
    pOVar10 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                        ((String *)pDVar4,
                         MV__WorldObject__AntiCheat__AntiCheatData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::AntiCheat::AntiCheatData>_System__String_
                        );
    if (((pOVar10 == (Object *)0x0) || (pOVar10[1].klass == (Object__Class *)0x0)) ||
       (this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  ((pOVar10[1].klass)->_0).name,
       this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0))
    goto code_?;
    banList = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                        (this_00,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::ApplicationDesc>__ToArray__
                        );
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    HackingToolDetector::HackingToolDetector_Initialize
              ((ApplicationDesc__Array *)banList,(MethodInfo *)0x0);
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xb6,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PricesManager);
        cRam_? = '\x01';
      }
      TypeInfo__PricesManager->static_fields->prices =
           (Dictionary_2_System_Object_System_Object_ *)unaff_EDI;
      func_?(TypeInfo__PricesManager->static_fields,unaff_EDI);
      unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                  func_?(TypeInfo__MVGameCoinManager);
      if (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      MVGameCoinManager::MVGameCoinManager__ctor((MVGameCoinManager *)unaff_EBX,(MethodInfo *)0x0);
      (this->fields)._GameCoinManager_k__BackingField = (MVGameCoinManager *)unaff_EBX;
      func_?(&(this->fields)._GameCoinManager_k__BackingField,unaff_EBX);
      pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xb5,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar10);
      unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
      if (pOVar10 == (Object *)0x0) goto code_?;
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar11 = (int32_t *)func_?(pOVar10);
      (this->fields)._MarketPlaceLevel_k__BackingField = *piVar11;
      pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xb8,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar10);
      if (pOVar10 == (Object *)0x0) goto code_?;
      if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar11 = (int32_t *)func_?(pOVar10);
      (this->fields)._PublishLevel_k__BackingField = *piVar11;
      unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xb1,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
      if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__MV__WorldObject__Security__SecurityHelper);
      }
      pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                    MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::
                    SecurityHelper_Decrypt((String *)pDVar4,(MethodInfo *)0x0);
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        }
        pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString
                  ::ObscuredString_op_Implicit((String *)unaff_EBX,(MethodInfo *)0x0);
        (this->fields)._XpKey_k__BackingField = pOVar12;
        func_?(&(this->fields)._XpKey_k__BackingField,pOVar12);
        bVar13 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData
                          ((MethodInfo *)0x0);
        if (bVar13 == 0) {
          this_01 = (SessionLocatorPing *)func_?(TypeInfo__SessionLocatorPing);
          if (this_01 == (SessionLocatorPing *)0x0) goto code_?;
          SessionLocatorPing::SessionLocatorPing__ctor(this_01,(MethodInfo *)0x0);
        }
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xaa,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__MV__Common__MVGameType,pOVar10);
        if (pOVar10 == (Object *)0x0) goto code_?;
        if ((pOVar10->klass->_0).element_class !=
            (TypeInfo__MV__Common__MVGameType->_0).element_class) goto code_?;
        piVar14 = (int *)func_?(pOVar10);
        iVar15 = *piVar14;
        (this->fields)._GameType_k__BackingField = iVar15;
        if (iVar15 == 2) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Deprecated_platformer_mode,(MethodInfo *)0x0);
          (this->fields)._GameType_k__BackingField = 1;
        }
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x10,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__System__Byte,pOVar10);
        if (pOVar10 == (Object *)0x0) goto code_?;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
        goto code_?;
        puVar16 = (uint8_t *)func_?(pOVar10);
        (this->fields)._Region_k__BackingField = *puVar16;
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xfe,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar10);
        if (pOVar10 == (Object *)0x0) goto code_?;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?(pOVar10);
        iVar17 = *piVar11;
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar10);
        if (pOVar10 == (Object *)0x0) goto code_?;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?(pOVar10);
        iVar18 = *piVar11;
        MVNetworkGame_InitializeManagers(this,(MethodInfo *)0x0);
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe0,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (unaff_EBX != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(unaff_EBX->_0).image == TypeInfo__System__String) {
            pDVar4 = unaff_EBX;
          }
          pSVar5 = TypeInfo__System__String;
          if (pDVar4 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        userProfileData =
             (UserProfileData *)
             Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                       ((String *)pDVar4,
                        MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                       );
        bVar13 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
        if (bVar13 == 0) {
          MVar19 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if ((MVar19 == MVGameMode__Enum_Edit) ||
             (MVar19 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
             MVar19 == MVGameMode__Enum_CharacterEditor)) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVGameControllerBase);
              cRam_? = '\x01';
            }
            pGVar20 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar20 != (GameSessionData *)0x0) {
              iVar21 = (pGVar20->fields).profileID;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MVGameControllerBase);
                cRam_? = '\x01';
              }
              pGVar20 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if (pGVar20 != (GameSessionData *)0x0) {
                pSVar3 = (pGVar20->fields).language;
                unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                            func_?(TypeInfo__MVLocalPlayerBuilder);
                if (unaff_EBX != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  MVLocalPlayerBuilder::MVLocalPlayerBuilder__ctor
                            ((MVLocalPlayerBuilder *)unaff_EBX,iVar17,iVar21,pSVar3,iVar18,
                             userProfileData,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            goto code_?;
          }
          MVar19 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar19 == MVGameMode__Enum_Play) {
            iVar15 = func_?(0);
            if (iVar15 != 0) {
              iVar21 = *(int32_t *)(iVar15 + 0xc);
              iVar15 = func_?(0);
              if (iVar15 != 0) {
                pSVar3 = *(String **)(iVar15 + 0x18);
                unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                            func_?(TypeInfo__MVLocalPlayerRegistered);
                if (unaff_EBX != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  MVLocalPlayerTourist::MVLocalPlayerTourist__ctor
                            ((MVLocalPlayerTourist *)unaff_EBX,iVar17,iVar21,pSVar3,iVar18,
                             userProfileData,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
            goto code_?;
          }
          goto code_?;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pGVar20 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar20 == (GameSessionData *)0x0) goto code_?;
        iVar21 = (pGVar20->fields).profileID;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pGVar20 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar20 == (GameSessionData *)0x0) goto code_?;
        pSVar3 = (pGVar20->fields).language;
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                    func_?(TypeInfo__MVLocalPlayerTourist);
        if (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
        MVLocalPlayerTourist::MVLocalPlayerTourist__ctor
                  ((MVLocalPlayerTourist *)unaff_EBX,iVar17,iVar21,pSVar3,iVar18,userProfileData,
                   (MethodInfo *)0x0);
code_?:
        if (cRam_? == '\0') {
          func_?(&TypeInfo__ThemeRepository);
          cRam_? = '\x01';
        }
        pTVar22 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xd4,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__System__Boolean,pOVar10);
        if ((pTVar22 == (ThemeRepository *)0x0) || (pOVar10 == (Object *)0x0)) goto code_?;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pbVar23 = (bool *)func_?(pOVar10);
        (pTVar22->fields)._ThemesEnabled_k__BackingField = *pbVar23;
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x59,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,pOVar10);
        if ((unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
           (pOVar10 == (Object *)0x0)) goto code_?;
        if ((pOVar10->klass->_0).element_class !=
            (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) goto code_?;
        puVar24 = (undefined4 *)func_?(pOVar10);
        (unaff_EBX->_0).properties = (PropertyInfo *)*puVar24;
        pMVar25 = (this->fields).playerContainer;
        if (pMVar25 == (MVPlayerContainer *)0x0) goto code_?;
        MVPlayerContainer::MVPlayerContainer_Add(pMVar25,(MVPlayer *)unaff_EBX,(MethodInfo *)0x0);
        pMVar25 = (this->fields).playerContainer;
        if (pMVar25 == (MVPlayerContainer *)0x0) goto code_?;
        (pMVar25->fields).localPlayerActorNumber = (int32_t)(unaff_EBX->_0).generic_class;
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xa8,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__MV__Common__ClientSettingFlags,pOVar10);
        if (pOVar10 == (Object *)0x0) goto code_?;
        if ((pOVar10->klass->_0).element_class !=
            (TypeInfo__MV__Common__ClientSettingFlags->_0).element_class) goto code_?;
        piVar11 = (int32_t *)func_?(pOVar10);
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar11;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVClientSettings);
          cRam_? = '\x01';
        }
        TypeInfo__MVClientSettings->static_fields->flags = (int32_t)unaff_EBX;
        TypeInfo__MVClientSettings->static_fields->flagsSet = 1;
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xd7,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar10);
        if (pOVar10 == (Object *)0x0) goto code_?;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?(pOVar10);
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar11;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVClientSettings);
          cRam_? = '\x01';
        }
        TypeInfo__MVClientSettings->static_fields->
        _PostGameInterstitialIntervalInSeconds_k__BackingField = (int32_t)unaff_EBX;
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe9,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar10);
        if (pOVar10 == (Object *)0x0) goto code_?;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?(pOVar10);
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar11;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVClientSettings);
          cRam_? = '\x01';
        }
        TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField = (int32_t)unaff_EBX
        ;
        pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe1,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pDVar26 = (Dictionary_2_System_Byte_System_Object_ *)0x0;
        if (pDVar7 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          if (pDVar7->klass ==
              (Dictionary_2_System_Byte_System_Object___Class *)TypeInfo__System__String) {
            pDVar26 = pDVar7;
          }
          pSVar5 = TypeInfo__System__String;
          if (pDVar26 != (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
          goto code_?;
        }
code_?:
        (this->fields)._AdConsentEndpointURL_k__BackingField = (String *)pDVar26;
        func_?(&(this->fields)._AdConsentEndpointURL_k__BackingField,pDVar26);
        pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe2,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pDVar26 = (Dictionary_2_System_Byte_System_Object_ *)0x0;
        if (pDVar7 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          if (pDVar7->klass ==
              (Dictionary_2_System_Byte_System_Object___Class *)TypeInfo__System__String) {
            pDVar26 = pDVar7;
          }
          pSVar5 = TypeInfo__System__String;
          if (pDVar26 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        }
        (this->fields)._KogamaMainpageURL_k__BackingField = (String *)pDVar26;
        func_?(&(this->fields)._KogamaMainpageURL_k__BackingField,pDVar26);
        pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe4,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe5,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe6,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
        this_02 = (CreySettings *)func_?(TypeInfo__CreySettings);
        if ((this_02 == (CreySettings *)0x0) ||
           (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0))
        goto code_?;
        pIVar8 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule !=
            (TypeInfo__System__Boolean->_0).element_class) goto code_?;
        pbVar23 = (bool *)func_?(unaff_EBX);
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        bVar13 = *pbVar23;
        if (pDVar4 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          if ((String__Class *)(pDVar4->_0).image == TypeInfo__System__String) {
            unaff_EBX = pDVar4;
          }
          pSVar5 = TypeInfo__System__String;
          if (unaff_EBX != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          goto code_?;
        }
code_?:
        if (pDVar7 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        pSVar5 = (String__Class *)TypeInfo__System__Int32;
        if ((pDVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar11 = (int32_t *)func_?(pDVar7);
        CreySettings::CreySettings__ctor
                  (this_02,*piVar11,(String *)unaff_EBX,bVar13,(MethodInfo *)0x0);
        (this->fields)._CreySettings_k__BackingField = this_02;
        func_?(&(this->fields)._CreySettings_k__BackingField,this_02);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__get_Item
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xf3,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xf1,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pSStack_27 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xf2,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               );
        pDVar7 = returnValues;
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xf0,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
        this_03 = (CustomTouristPromotionSettings *)
                  func_?(TypeInfo__CustomTouristPromotionSettings);
        if ((this_03 == (CustomTouristPromotionSettings *)0x0) ||
           (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0))
        goto code_?;
        pIVar8 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule !=
            (TypeInfo__System__Boolean->_0).element_class) goto code_?;
        pbVar23 = (bool *)func_?(unaff_EBX);
        uVar6 = CONCAT44(pSStack_27,TypeInfo__System__String);
        bVar13 = *pbVar23;
        if (pSStack_27 == (String *)0x0) {
code_?:
          unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pDVar4 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
            if (pDVar7 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
            pSVar5 = (String__Class *)TypeInfo__System__Int32;
            if ((pDVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar11 = (int32_t *)func_?(pDVar7);
            CustomTouristPromotionSettings::CustomTouristPromotionSettings__ctor
                      (this_03,*piVar11,(String *)unaff_EBX,pSStack_27,bVar13,(MethodInfo *)0x0);
            (this->fields)._CustomTouristPromotionSettings_k__BackingField = this_03;
            func_?(&(this->fields)._CustomTouristPromotionSettings_k__BackingField,this_03)
            ;
            pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe7,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                );
            unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xe8,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                  );
            this_04 = (ElitePromotionSettings *)func_?(TypeInfo__ElitePromotionSettings);
            if ((this_04 == (ElitePromotionSettings *)0x0) ||
               (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0))
            goto code_?;
            pIVar8 = TypeInfo__System__Int32;
            if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar11 = (int32_t *)func_?(unaff_EBX);
              unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar11;
              if (pDVar7 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
              pSVar5 = (String__Class *)TypeInfo__System__Boolean;
              if ((pDVar7->klass->_0).element_class !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar23 = (bool *)func_?(pDVar7);
              System.dll::System::Net::Sockets::LingerOption::LingerOption__ctor
                        ((LingerOption *)this_04,*pbVar23,(int32_t)unaff_EBX,(MethodInfo *)0x0);
              (this->fields)._EliteSettings_k__BackingField = this_04;
              func_?(&(this->fields)._EliteSettings_k__BackingField,this_04);
              pLVar28 = (this->fields).embeddedSiteConfigData.sites;
              iVar17 = (this->fields).embeddedSiteConfigData.siteEnum;
              uVar1._0_1_ = (this->fields).embeddedSiteConfigData.showTouristPromotion;
              uVar1._1_1_ = (this->fields).embeddedSiteConfigData.allowsOpenInNewTab;
              uVar1._2_1_ = (this->fields).embeddedSiteConfigData.allowsRedirectToWebpage;
              uVar1._3_1_ = (this->fields).embeddedSiteConfigData.allowsModals;
              uVar29._0_1_ = (this->fields).embeddedSiteConfigData.integratedSdk;
              uVar29._1_1_ = (this->fields).embeddedSiteConfigData.allowsFallbackAds;
              uVar29._2_1_ = (this->fields).embeddedSiteConfigData.showPlayButtonAd;
              uVar29._3_1_ = (this->fields).embeddedSiteConfigData.hideGoldShop;
              pDVar26 = (Dictionary_2_System_Byte_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xed,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                  );
              pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xeb,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                  );
              unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,
                                     0xee,
                                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                    );
              puVar30 = &UNK_?;
              this_05 = (AdConfigSettings *)func_?(TypeInfo__AdConfigSettings);
              if ((this_05 == (AdConfigSettings *)0x0) ||
                 (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0))
              goto code_?;
              pIVar8 = TypeInfo__System__Int32;
              if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              piVar11 = (int32_t *)func_?(unaff_EBX);
              iVar18 = *piVar11;
              if (pDVar7 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
              pSVar5 = (String__Class *)TypeInfo__System__Int32;
              if ((pDVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                piVar11 = (int32_t *)func_?(pDVar7);
                unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar11;
                if (pDVar26 == (Dictionary_2_System_Byte_System_Object_ *)0x0)
                goto code_?;
                pDVar7 = pDVar26;
                pSVar5 = (String__Class *)TypeInfo__System__Boolean;
                if ((pDVar26->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar23 = (bool *)func_?(pDVar26);
                embeddedSiteConfigData.siteEnum = iVar17;
                embeddedSiteConfigData.sites = pLVar28;
                embeddedSiteConfigData.showTouristPromotion = (char)uVar1;
                embeddedSiteConfigData.allowsOpenInNewTab = (char)((uint)uVar1 >> 8);
                embeddedSiteConfigData.allowsRedirectToWebpage = (char)((uint)uVar1 >> 0x10);
                embeddedSiteConfigData.allowsModals = (char)((uint)uVar1 >> 0x18);
                embeddedSiteConfigData.integratedSdk = (char)uVar29;
                embeddedSiteConfigData.allowsFallbackAds = (char)((uint)uVar29 >> 8);
                embeddedSiteConfigData.showPlayButtonAd = (char)((uint)uVar29 >> 0x10);
                embeddedSiteConfigData.hideGoldShop = (char)((uint)uVar29 >> 0x18);
                embeddedSiteConfigData._16_4_ = puVar30;
                AdConfigSettings::AdConfigSettings__ctor
                          (this_05,embeddedSiteConfigData,*pbVar23,(int32_t)unaff_EBX,iVar18,
                           (MethodInfo *)0x0);
                pIVar31 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                    ((MethodInfo *)0x0);
                pIVar32 = TypeInfo__Assets__Scripts__AdIntegration__IAdManager;
                if (pIVar31 == (IAdManager *)0x0) goto code_?;
                uVar33 = 0;
                uVar34 = (pIVar31->klass->_1).interface_offsets_count;
                if (uVar34 != 0) {
                  do {
                    if (pIVar31->klass->interfaceOffsets[uVar33].interfaceType ==
                        (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                      pVVar35 = &(pIVar31->klass->vtable).InitializeAdConfigSettings +
                                pIVar31->klass->interfaceOffsets[uVar33].offset;
                      goto code_?;
                    }
                    uVar33 = uVar33 + 1;
                  } while (uVar33 < uVar34);
                }
                pVVar35 = (VirtualInvokeData *)
                          func_?(pIVar31,
                                          TypeInfo__Assets__Scripts__AdIntegration__IAdManager,9);
code_?:
                (*pVVar35->methodPtr)(pIVar31,this_05,pVVar35->method);
                pMVar2 = (MethodInfo *)0x52;
                pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,
                                     0x52,
                                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                    );
                uVar6 = CONCAT44(TypeInfo__System__Boolean,pOVar10);
                unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)pIVar32;
                if (pOVar10 == (Object *)0x0) goto code_?;
                if ((pOVar10->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar23 = (bool *)func_?(pOVar10);
                (this->fields).isPublished = *pbVar23;
                MVGameControllerBase::MVGameControllerBase_set_JoinState
                          (MVJoinState__Enum_LoadGUI,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__System__Action);
                  func_?(&MethodInfo__MVNetworkGame__OperationRequests__Syncronize__);
                  cRam_? = '\x01';
                }
                this_06 = MVGameControllerBase::MVGameControllerBase_get_LevelLoader
                                    ((MethodInfo *)0x0);
                unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                            MVGameControllerBase::MVGameControllerBase_get_GameMode
                                      ((MethodInfo *)0x0);
                bVar13 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                  ((MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__MVGameControllerBase);
                  cRam_? = '\x01';
                }
                object = (this->fields).operationRequests;
                unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                            func_?(TypeInfo__System__Action);
                if ((unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
                   (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              ((NavMesh_OnNavMeshPreUpdate *)unaff_EDI,(Object *)object,
                               MethodInfo__MVNetworkGame__OperationRequests__Syncronize__,
                               (MethodInfo *)0x0), this_06 == (LevelLoader *)0x0))
                goto code_?;
                if (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  mode = ScenesForMode__Enum_EditMode;
code_?:
                  LevelLoader::LevelLoader_LoadScenes_1
                            (this_06,mode,(Action *)unaff_EDI,(MethodInfo *)0x0);
                }
                else {
                  if (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x1) {
                    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                    if (bVar13 == 0) {
                      mode = ScenesForMode__Enum_PlayMode;
                    }
                    else {
                      mode = ScenesForMode__Enum_PlayModeTourist;
                    }
                    goto code_?;
                  }
                  unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                              ((int)&unaff_EBX[-1].vtable.OnDeserialization_1.method + 2);
                  if (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    mode = ScenesForMode__Enum_AvatarEditMode;
                    goto code_?;
                  }
                }
                pDVar9 = (Dictionary_2_System_Object_System_Object___Class *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,
                                     0xae,
                                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                    );
                pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,
                                     0x68,
                                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                    );
                this = (MVNetworkGame *)0x0;
                if (pDVar4 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if ((String__Class *)(pDVar4->_0).image == TypeInfo__System__String) {
                    this = (MVNetworkGame *)pDVar4;
                  }
                  pSVar5 = TypeInfo__System__String;
                  if ((Dictionary_2_System_Object_System_Object___Class *)this ==
                      (Dictionary_2_System_Object_System_Object___Class *)0x0)
                  goto code_?;
                }
                bVar13 = System.dll::System::Collections::Generic::
                        SortedList`2[TKey,TValue]+ValueList[System::Single,System::Object]::
                        SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__System_Collections_ICollection_get_IsSynchronized
                                  ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_
                                    *)0x0,pMVar2);
                unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                pDVar4 = pDVar9;
                pSVar5 = TypeInfo__System__String;
                if (pDVar9 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                  if ((String__Class *)(pDVar9->_0).image == TypeInfo__System__String) {
                    unaff_EBX = pDVar9;
                  }
                  if (unaff_EBX == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                  goto code_?;
                }
                if (bVar13 != 0) {
                  pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,
                                       0xba,
                                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                      );
                  this = (MVNetworkGame *)0x0;
                  if (pDVar4 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
                    if ((String__Class *)(pDVar4->_0).image == TypeInfo__System__String) {
                      this = (MVNetworkGame *)pDVar4;
                    }
                    pSVar5 = TypeInfo__System__String;
                    if ((Dictionary_2_System_Object_System_Object___Class *)this ==
                        (Dictionary_2_System_Object_System_Object___Class *)0x0)
                    goto code_?;
                  }
code_?:
                  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__MV__Common__Urls);
                  }
                  MVCommon.dll::MV::Common::Urls::Urls_Init
                            ((String *)unaff_EBX,(String *)this,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__MVGameControllerBase);
                    cRam_? = '\x01';
                  }
                  pGVar20 = TypeInfo__MVGameControllerBase->static_fields->
                           _GameSessionData_k__BackingField;
                  unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
                  if (pGVar20 != (GameSessionData *)0x0) {
                    TM::TM_LoadLanguage((pGVar20->fields).language,(MethodInfo *)0x0);
                    return;
                  }
                  goto code_?;
                }
                unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                if (pDVar9 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
                goto code_?;
                if ((String__Class *)(pDVar9->_0).image == TypeInfo__System__String) {
                  unaff_EBX = pDVar9;
                }
                if (unaff_EBX != (Dictionary_2_System_Object_System_Object___Class *)0x0)
                goto code_?;
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          if ((String__Class *)(pDVar4->_0).image == TypeInfo__System__String) {
            unaff_EBX = pDVar4;
          }
          pSVar5 = TypeInfo__System__String;
          if (unaff_EBX != (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          goto code_?;
        }
        pSVar3 = (String *)0x0;
        if (pSStack_27->klass == TypeInfo__System__String) {
          pSVar3 = pSStack_27;
        }
        pSStack_27 = pSVar3;
        if (pSVar3 != (String *)0x0) goto code_?;
        goto code_?;
      }
      if ((String__Class *)(unaff_EBX->_0).image == TypeInfo__System__String) {
        pDVar4 = unaff_EBX;
      }
      pSVar5 = TypeInfo__System__String;
      if (pDVar4 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      goto code_?;
    }
    pIVar36 = (unaff_EDI->_0).image;
    pDVar9 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= *(byte *)&pIVar36[4].nameNoExt) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         ((pIVar36[2].typeCount - 4) +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  func_?(unaff_EDI,pDVar9);
  pSVar5 = extraout_ECX_03;
code_?:
  func_?(pDVar9,pSVar5);
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Void OnLevelChanged(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnLevelChanged
               (MVNetworkGame *this,int32_t actorNr,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_MVNetworkGame_OnLevelChanged);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
  this_00 = (this->fields).playerContainer;
  if (this_00 != (MVPlayerContainer *)0x0) {
    this_01 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                        (this_00,actorNr,(MethodInfo *)0x0);
    if (this_01 != (MVPlayer *)0x0) {
      MVPlayer::MVPlayer_set_Level(this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnLockHierarchyEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 == (WorldNetwork *)0x0) {
code_?:
    func_?();
    pIVar2 = extraout_ECX;
  }
  else {
    this_00 = (pWVar1->fields)._.worldObjectClientManager;
    if (eventData == (EventData *)0x0) goto code_?;
    unaff_ESI = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x16,(MethodInfo *)0x0);
    pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x14,(MethodInfo *)0x0);
    if ((this_00 == (MVWorldObjectClientManagerNetwork *)0x0) || (pOVar3 == (Object *)0x0))
    goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar4 = (int32_t *)func_?();
    actorNr = *piVar4;
    if (unaff_ESI == (Object *)0x0) goto code_?;
    pIVar2 = TypeInfo__System__Int32;
    if ((unaff_ESI->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar4 = (int32_t *)func_?(unaff_ESI);
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                (this_00,*piVar4,actorNr,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(unaff_ESI,pIVar2);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnLockHierarchyResponse(Dictionary`2[System.Byte,System.Object], Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               int32_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x16,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?(pOVar1);
      id = *piVar3;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x3f,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Boolean,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pbVar4 = (bool *)func_?(pOVar1);
        pWVar5 = (this->fields).worldNetwork;
        if ((pWVar5 != (WorldNetwork *)0x0) &&
           (this_00 = (pWVar5->fields)._.worldObjectClientManager,
           this_00 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_LockHierarchyResponse
                    (this_00,id,*pbVar4,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnNotificationEventReceived(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
               (MVNetworkGame *this,NotificationType__Enum type,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification !=
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,type,data,(pMVar1->fields)._._.method);
  }
  return;
}


/* Void OnOperationResponse(OperationResponse) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnOperationResponse
               (MVNetworkGame *this,OperationResponse *operationResponse,MethodInfo *method)

{
  this_00 = (this->fields).operationResponseHandling;
  if (this_00 != (MVNetworkGame_OperationResponseHandling *)0x0) {
    MVNetworkGame+OperationResponseHandling::
    MVNetworkGame_OperationResponseHandling_HandleOperationResponse
              (this_00,operationResponse,(MethodInfo *)0x0);
    if ((operationResponse != (OperationResponse *)0x0) &&
       (this_01 = (this->fields).operationRequests,
       this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TryRemovePendingOperation
                (this_01,(uint)(operationResponse->fields).OperationCode,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPickupItemStateChangeEvent(PickupItemState, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
               (MVNetworkGame *this,PickupItemState__Enum state,int32_t worldObjectID,
               int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IPickupStateHandler);
    func_?(&StringLiteral_OnPickupItemStateChangeEvent_fai);
    func_?(&StringLiteral_PickUpItemStateChangeEvent_faile);
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)
               (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,worldObjectID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&worldObjectID,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_OnPickupItemStateChangeEvent_fai,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
        instigatorActorNr = (int32_t)&UNK_?;
        func_?();
      }
      method = (MethodInfo *)0x0;
      worldObjectID = (int32_t)&UNK_?;
      instigatorActorNr = (int32_t)pSVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
    if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
       (pMVar1 = (MVWorldObjectClientManager *)
                 (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,worldObjectID,(MethodInfo *)0x0);
      iVar4 = func_?(pMVar2);
      if (iVar4 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_PickUpItemStateChangeEvent_faile,(MethodInfo *)0x0);
        return;
      }
      if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
         (pMVar1 = (MVWorldObjectClientManager *)
                   (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar1 != (MVWorldObjectClientManager *)0x0)) {
        this = (MVNetworkGame *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,worldObjectID,(MethodInfo *)0x0);
        if (this != (MVNetworkGame *)0x0) {
          iVar4 = func_?(this);
          if (iVar4 != 0) {
            iVar4 = func_?(this);
            if (iVar4 != 0) {
              func_?(0,TypeInfo__IPickupStateHandler);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?(this);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPostWinnerReportEvent() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                   );
    func_?(&StringLiteral_Only_1_winning_condition_current);
    func_?(&StringLiteral_Round_was_reset_without_winning_);
    func_?(&StringLiteral_No_winning_condition_found_even_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._WinningConditionManager_k__BackingField;
  if (this_00 != (WinningConditionManager *)0x0) {
    if ((this_00->fields)._WinningConditionFound_k__BackingField == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
    }
    else {
      if ((this_00 == (WinningConditionManager *)0x0) ||
         (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    MVWorldObject.dll::WinningConditionManager::
                    WinningConditionManager_GetForfilledWinningConditions(this_00,(MethodInfo *)0x0)
         , this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
      goto code_?;
      if ((this_01->fields)._size == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_No_winning_condition_found_even_,(MethodInfo *)0x0);
        return;
      }
      if (1 < (this_01->fields)._size) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Only_1_winning_condition_current,(MethodInfo *)0x0);
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                (this_01,0,
                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_);
    }
    if ((this->fields).OnWinningConditionFulfilled == (Action_1_IWinningCondition_ *)0x0) {
      return;
    }
    pAVar1 = (this->fields).OnWinningConditionFulfilled;
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPurchaseProductResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
               (MVNetworkGame *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_refreshCredentials);
    cRam_? = '\x01';
  }
  if ((this->fields).PurchaseProductResponseHandler !=
      (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
    pAVar1 = (this->fields).PurchaseProductResponseHandler;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,returnCode,purchaseResponseData,
               (pAVar1->fields)._._.method);
    pMVar2 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
    iVar3 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                    field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar3 + 0xba) & 1) == 0) {
      iVar3 = func_?(iVar3);
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_?(iVar3);
    }
    iVar3 = *(int *)(pMVar2->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar3 + 0xba) & 1) == 0) {
      iVar3 = func_?(iVar3);
    }
    args = (Object__Array *)**(undefined4 **)(iVar3 + 0x5c);
    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
              (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnRemoveItemFromInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
               (MVNetworkGame *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    puStack_1 = (undefined *)0x4;
    iVar2 = func_?();
    if ((iVar2 != 0) && (pPRam00000020 != (PlayerInventoryRepository *)0x0)) {
      PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem_1
                (pPRam00000020,in_stack_3,(MethodInfo *)0x0);
      if (iRam_? != 0) {
        (**(code **)(iRam_? + 0xc))();
      }
      return;
    }
  }
  uVar4 = func_?(&puStack_1);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnRemoveLinkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
               (MVNetworkGame *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_reset_count_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    link = WorldNetwork::WorldNetwork_RemoveLink(this_00,linkID,(MethodInfo *)0x0);
    if (link != (Link *)0x0) {
      this_01 = (this->fields)._LogicObjectManager_k__BackingField;
      worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (LogicObjectManagerClient *)0x0) goto code_?;
      LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                (this_01,link,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_reset_count_,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnRemoveObjectLinkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
               (MVNetworkGame *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Remove_objectLink_,(MethodInfo *)0x0);
  if ((this->fields).worldNetwork != (WorldNetwork *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pOVar1 = pORam0000001c;
    if (pORam0000001c != (ObjectLinks *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (pOVar1->fields).objectLinks;
      if (pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar2,in_stack_4,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                          );
        if (bVar3 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
          return;
        }
        if ((((pORam0000001c != (ObjectLinks *)0x0) &&
             (link = ObjectLinks::ObjectLinks_GetObjectLink
                               (pORam0000001c,(int32_t)in_stack_4,(MethodInfo *)0x0),
             link != (ObjectLink *)0x0)) && (pMRam00000008 != (MVWorldObjectClientManager *)0x0)) &&
           (MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMRam00000008,(link->fields).objectConnectorWOID,(MethodInfo *)0x0),
           pMRam00000008 != (MVWorldObjectClientManager *)0x0)) {
          method = (MethodInfo *)&UNK_?;
          this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMRam00000008,(link->fields).objectWOID,(MethodInfo *)0x0);
          pOVar1 = pORam0000001c;
          if (pORam0000001c != (ObjectLinks *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              method = (MethodInfo *)&StringLiteral_Attempt_to_remove_ObjectLink__bu;
              func_?();
              cRam_? = '\x01';
            }
            pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                     (pOVar1->fields).objectLinks;
            if (pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                (pDVar2,(Object *)(link->fields).id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                                );
              if (bVar3 == 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Attempt_to_remove_ObjectLink__bu,
                           (MethodInfo *)0x0);
                return;
              }
              this_00 = (pOVar1->fields).objectLinks;
              if (((this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) &&
                  (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__Remove
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                             ), method != (MethodInfo *)0x0)) &&
                 (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                            ((MVWorldObject *)method,link,(MethodInfo *)0x0),
                 this_01 != (MVWorldObject *)0x0)) {
                MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                          (this_01,link,(MethodInfo *)0x0);
                MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                if (MVar5 != MVGameMode__Enum_Edit) {
                  return;
                }
                pDVar6 = (pOVar1->fields).objectLinkObjects;
                if ((pDVar6 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) &&
                   (this_02 = (Component *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,
                                         (link->fields).id,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                                        ), this_02 != (Component *)0x0)) {
                  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_02,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)obj,(MethodInfo *)0x0);
                  pDVar6 = (pOVar1->fields).objectLinkObjects;
                  if (pDVar6 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Remove
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,(link->fields).id,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Remove_int_
                              );
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar7 = func_?(&stack0xffffffe8);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnRequestFriendsResponse(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *friendsList,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__MV__Common__FriendStatus);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&StringLiteral_Friendslist_is_null);
    cRam_? = '\x01';
  }
  if (friendsList == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Friendslist_is_null,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                      ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)friendsList,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                      );
  if (this_01 !=
      (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
       *)0x0) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
             Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&stack0xffffffc4,
                        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                       );
    pOVar5 = pDVar4->_currentValue;
    uStack_1 = 1;
    while( true ) {
      bVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Object,System
              ::Object]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                          *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar6 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffb4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,in_stack_7);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pOVar5 == (Object *)0x0) break;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar8 = (int32_t *)func_?();
      friendID = *piVar8;
      pOVar5 = (Object *)func_?();
      this_02 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (friendsList,pOVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        this_02 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else if (((this_02->klass->_1).typeHierarchyDepth <
                (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth) ||
              ((Dictionary_2_System_Object_System_Object___Class *)
               (this_02->klass->_1).typeHierarchy
               [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth - 1] !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      in_stack_7 = (MethodInfo *)&UNK_?;
      pOVar5 = (Object *)func_?();
      if ((this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_02,pOVar5,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar5 == (Object *)0x0)) break;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar8 = (int32_t *)func_?();
      profileID = *piVar8;
      pOVar5 = (Object *)func_?();
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_02,pOVar5,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar5 == (Object *)0x0) break;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar8 = (int32_t *)func_?();
      friendProfileID = *piVar8;
      pOVar5 = (Object *)func_?();
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_02,pOVar5,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar5 == (Object *)0x0) break;
      if ((pOVar5->klass->_0).element_class !=
          (TypeInfo__MV__Common__FriendStatus->_0).element_class) goto code_?;
      pFVar9 = (FriendStatus__Enum *)func_?();
      this_00 = (this->fields)._Friends_k__BackingField;
      if (this_00 == (FriendList *)0x0) break;
      pOVar5 = (Object *)0x0;
      FriendList::FriendList_AddFriend
                (this_00,friendID,profileID,friendProfileID,*pFVar9,(MethodInfo *)0x0);
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnRequestFriendshipResponse(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
               (MVNetworkGame *this,int32_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Undefined_fail_during_friend_req);
    func_?(&StringLiteral_That_user_has_blocked_you);
    func_?(&StringLiteral_You_already_have_a_pending_reque);
    func_?(&StringLiteral_You_have_blocked_that_user);
    func_?(&StringLiteral_User_has_sent_you_request__Accep);
    func_?(&StringLiteral_User_does_not_exist);
    func_?(&StringLiteral_You_are_already_friends_with_tha);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  a = ::StringLiteral__;
  switch(returnCode) {
  case -7:
    a = StringLiteral_That_user_has_blocked_you;
    break;
  case -6:
    a = StringLiteral_User_has_sent_you_request__Accep;
    break;
  case -5:
    a = StringLiteral_You_have_blocked_that_user;
    break;
  case -4:
    a = StringLiteral_You_are_already_friends_with_tha;
    break;
  case -3:
    a = StringLiteral_You_already_have_a_pending_reque;
    break;
  case -2:
    a = StringLiteral_User_does_not_exist;
    break;
  case -1:
    a = StringLiteral_Undefined_fail_during_friend_req;
  }
  bVar1 = mscorlib.dll::System::String::String_op_Inequality(a,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,a,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnRequestMaterialsResponse(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *materialList,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff78;
  puVar5 = &stack0xffffff78;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar7 != (PrefabPool *)0x0) {
    original = (pPVar7->fields).materialButtonTextureGenerator;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMStack_8 = (MaterialButtonTextureGenerator *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                           );
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((((pMVar9 != (MVNetworkGame *)0x0) &&
          (this_00 = (pMVar9->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
         (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar10 != (MVLocalPlayer *)0x0)) &&
        ((this_01 = (pMVar10->fields)._._SubscriptionRules_k__BackingField,
         this_01 != (SubscriptionRulesWrapper *)0x0 &&
         (bStack_11 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                      SubscriptionRulesWrapper_HasBenefit
                                (this_01,SubscriptionBenefit__Enum_FreeBuildingMaterials,
                                 (MethodInfo *)0x0),
         unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)materialList,
         materialList != (Dictionary_2_System_Object_System_Object_ *)0x0)))) &&
       (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                            ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)materialList,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       this_02 !=
       (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
        *)0x0)) {
      pDVar12 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffff98,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      pOVar13 = pDVar12->_currentValue;
      uStack_1 = 1;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                     Object,System::Object]::
                     Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                 *)&stack0xffffff88,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                               ), bVar14 != 0) {
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)materialList;
        if (pOVar13 == (Object *)0x0) goto code_?;
        pBVar15 = TypeInfo__System__Byte;
        if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
        goto code_?;
        puVar5 = (undefined1 *)func_?(pOVar13);
        uStack_16 = *puVar5;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_16);
        pDVar18 = (Dictionary_2_System_Object_System_Object___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (materialList,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pDVar18 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        }
        else {
          pDVar19 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if ((*(byte *)&(pDVar18->_0).image[4].nameNoExt <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth) ||
             (unaff_EDI = pDVar18,
             *(Dictionary_2_System_Object_System_Object___Class **)
              (((pDVar18->_0).image[2].typeCount - 4) +
              (uint)(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).typeHierarchyDepth * 4) !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        uStack_20 = 0x33;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_20);
        if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
        pSVar21 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar22 = CONCAT44(TypeInfo__System__String,pSVar21);
        pSStack_23 = pSVar21;
        if (pSVar21 != (String *)0x0) {
          pSStack_23 = (String *)0x0;
          if (pSVar21->klass == TypeInfo__System__String) {
            pSStack_23 = pSVar21;
          }
          if (pSStack_23 == (String *)0x0) goto code_?;
        }
        uStack_24 = 0x34;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_24);
        pSVar21 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar22 = CONCAT44(TypeInfo__System__String,pSVar21);
        pSStack_25 = pSVar21;
        if (pSVar21 != (String *)0x0) {
          pSStack_25 = (String *)0x0;
          if (pSVar21->klass == TypeInfo__System__String) {
            pSStack_25 = pSVar21;
          }
          if (pSStack_25 == (String *)0x0) goto code_?;
        }
        uStack_26 = 0x35;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_26);
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar22 = CONCAT44(TypeInfo__System__String,pOVar17);
        if (pOVar17 != (Object *)0x0) {
          pOVar27 = (Object *)0x0;
          if ((String__Class *)pOVar17->klass == TypeInfo__System__String) {
            pOVar27 = pOVar17;
          }
          if (pOVar27 == (Object *)0x0) goto code_?;
        }
        uStack_28 = 0x36;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_28);
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar22 = CONCAT44(TypeInfo__System__Int32,pOVar17);
        if (pOVar17 == (Object *)0x0) goto code_?;
        if ((pOVar17->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pMVar29 = (MaterialSound__Enum *)func_?(pOVar17);
        MStack_30 = *pMVar29;
        uStack_31 = 0x37;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_31);
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar22 = CONCAT44(TypeInfo__System__Int32,pOVar17);
        if (pOVar17 == (Object *)0x0) goto code_?;
        if ((pOVar17->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        pAVar32 = (AvatarModifierPackageType__Enum *)func_?(pOVar17);
        AStack_33 = *pAVar32;
        uStack_34 = 0x39;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_34);
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar22 = CONCAT44(TypeInfo__System__Int32,pOVar17);
        if (pOVar17 == (Object *)0x0) goto code_?;
        if ((pOVar17->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar35 = (int32_t *)func_?(pOVar17);
        iStack_36 = *piVar35;
        uStack_37 = 0x3a;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_37);
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar17,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar22 = CONCAT44(TypeInfo__System__Boolean,pOVar17);
        if (pOVar17 == (Object *)0x0) goto code_?;
        if ((pOVar17->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pcVar38 = (char *)func_?(pOVar17);
        cStack_39 = *pcVar38;
        uStack_40 = 0x6f;
        pOVar17 = (Object *)func_?(TypeInfo__System__Byte,&uStack_40);
        pMStack_41 = (MVMaterialRepository *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,pOVar17,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        pSStack_42 = TypeInfo__System__Single;
        if (pMStack_41 == (MVMaterialRepository *)0x0) {
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        }
        else {
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                      func_?(pMStack_41,TypeInfo__System__Single);
          if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
        }
        pMStack_41 = (this->fields)._MaterialRepository_k__BackingField;
        if (pMStack_41 == (MVMaterialRepository *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_
                         );
          func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
          func_?(&TypeInfo__MVMaterial);
          cRam_? = '\x01';
        }
        if ((pMStack_41->fields).materials == (List_1_MVMaterial_ *)0x0) goto code_?;
        pSStack_42 = (Single__Array__Class *)(pMStack_41->fields).materials;
        pMStack_41 = (MVMaterialRepository *)(pSStack_42->_0).namespaze;
        if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
        if ((unaff_EDI->_0).namespaze == (char *)0x0) goto code_?;
        in_stack_6 = *(MethodInfo ***)&(unaff_EDI->_0).byval_arg.data;
        if ((unaff_EDI->_0).namespaze < (char *)0x2) goto code_?;
        if ((unaff_EDI->_0).namespaze < (char *)0x3) goto code_?;
        if ((unaff_EDI->_0).namespaze < (char *)0x4) goto code_?;
        if ((unaff_EDI->_0).namespaze < (char *)0x5) goto code_?;
        PStack_43.toughness = 0.0;
        PStack_43.friction = 0.0;
        PStack_43.bouncyness = 0.0;
        PStack_43.softness = 0.0;
        PStack_43.staticFriction = 0.0;
        MVWorldObject.dll::MV::WorldObject::PhysicalProperties::PhysicalProperties__ctor
                  (&PStack_43,(float)in_stack_6,*(float *)&(unaff_EDI->_0).byval_arg.attrs,
                   (float)(unaff_EDI->_0).this_arg.data,*(float *)&(unaff_EDI->_0).this_arg.attrs,
                   (float)(unaff_EDI->_0).element_class,(MethodInfo *)0x0);
        _bStack_38 = CONCAT31(uStack_44,cStack_39 != '\0' || bStack_11 != 0);
        this_03 = (MVMaterial *)func_?();
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (this_03 == (MVMaterial *)0x0) goto code_?;
        physicalProperties.bouncyness = PStack_43.bouncyness;
        physicalProperties.friction = PStack_43.friction;
        physicalProperties.softness = PStack_43.softness;
        physicalProperties.staticFriction = PStack_43.staticFriction;
        physicalProperties.toughness = PStack_43.toughness;
        MVMaterial::MVMaterial__ctor_1
                  (this_03,(int32_t)pMStack_41,pSStack_23,pSStack_25,physicalProperties,MStack_30,
                   AStack_33,iStack_36,(bool)_bStack_38,pMStack_8,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pSStack_42,(Object *)this_03,
                   MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff88,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      uStack_1 = 0xffffffff;
      unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pMStack_8 != (MaterialButtonTextureGenerator *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pMStack_8,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        pMVar45 = (this->fields)._MaterialRepository_k__BackingField;
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
        if (pMVar45 != (MVMaterialRepository *)0x0) {
          if (cRam_? == '\0') {
            func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                           );
            cRam_? = '\x01';
          }
          pLVar46 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pMVar45->fields).materials;
          if (pLVar46 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            if ((pLVar46->fields)._size < 0x16) {
              RVar47 = (RegexCharClass_SingleRange)(pMVar45->fields).noMaterial;
            }
            else {
              RVar47 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 (pLVar46,0x15,
                                  MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                                 );
            }
            if (RVar47 != (RegexCharClass_SingleRange)0x0) {
              PStack_43.friction = *(float *)((int)RVar47 + 0x1c);
              PStack_43.bouncyness = *(float *)((int)RVar47 + 0x20);
              PStack_43.softness = *(float *)((int)RVar47 + 0x24);
              PStack_43.staticFriction = *(float *)((int)RVar47 + 0x28);
              PStack_43.toughness = *(float *)((int)RVar47 + 0x2c);
              if (PStack_43.toughness == _UNK_?) {
                pMVar45 = (this->fields)._MaterialRepository_k__BackingField;
                if (pMVar45 == (MVMaterialRepository *)0x0) goto code_?;
                if (cRam_? == '\0') {
                  func_?(&
                                  MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__
                                 );
                  func_?(&
                                  MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                                 );
                  cRam_? = '\x01';
                }
                pLVar46 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (pMVar45->fields).materials;
                if (pLVar46 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              0x0) goto code_?;
                if ((pLVar46->fields)._size < 0x16) {
                  RVar47 = (RegexCharClass_SingleRange)(pMVar45->fields).noMaterial;
                }
                else {
                  RVar47 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar46,0x15,
                                      MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                                     );
                }
                if (RVar47 == (RegexCharClass_SingleRange)0x0) goto code_?;
                if (*(char *)((int)RVar47 + 0xc) != '\0') {
                  MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials
                            ((MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
              }
              uVar48 = func_?(&TypeInfo__System__Exception);
              this_04 = (Exception *)func_?(uVar48);
              func_?(this_04);
              method_00 = (MethodInfo *)0x0;
              pSVar21 = (String *)func_?(&StringLiteral_Default_material_is_invalid);
              mscorlib.dll::System::Exception::Exception__ctor_1(this_04,pSVar21,method_00);
              func_?(&
                              MethodInfo__MVNetworkGame__OnRequestMaterialsResponse_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                             );
              uVar22 = func_?();
code_?:
              func_?(uVar22);
code_?:
              func_?();
code_?:
              func_?();
code_?:
              func_?();
code_?:
              func_?();
code_?:
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(pMStack_41,pSStack_42);
  pDVar18 = extraout_EDX;
  pDVar19 = unaff_EDI;
code_?:
  func_?(pDVar18,pDVar19);
  pOVar13 = extraout_ECX;
  pBVar15 = extraout_EDX_00;
code_?:
  uVar48 = func_?(pOVar13,pBVar15);
  func_?(uVar48);
  pcVar49 = (code *)swi(3);
  (*pcVar49)();
  return;
}


/* Void OnRequestWoUniquePrototypeFailed(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_OnRequestWoUniquePrototypeFailed);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_OnRequestWoUniquePrototypeFailed,(MethodInfo *)0x0);
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x16,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar3 = (int32_t *)func_?();
      pWVar4 = (this->fields).worldNetwork;
      if ((pWVar4 != (WorldNetwork *)0x0) &&
         (this_00 = (pWVar4->fields)._.worldInventory, this_00 != (MVWorldInventory *)0x0)) {
        MVWorldInventory::MVWorldInventory_UnpendRuntimePrototype(this_00,*piVar3,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnResetLogicChunkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (worldObjectID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void OnSetSayChatBubbleVisible(Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
               (MVNetworkGame *this,int32_t actorNr,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange !=
      (Action_2_Int32_Boolean_ *)0x0) {
    pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
             OnSayChatIndicatorVisibilityChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,actorNr,_visible,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void OnSetTeamEvent(Int32, MVTeam) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnSetTeamEvent
               (MVNetworkGame *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral__Players_ContainsKey_actorNr___);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).playerContainer;
  if (pMVar1 != (MVPlayerContainer *)0x0) {
    bVar2 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar1,actorNr,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&actorNr,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral__Players_ContainsKey_actorNr___,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
        team = (MVTeam__Enum)&UNK_?;
        func_?();
      }
      method = (MethodInfo *)0x0;
      actorNr = (int32_t)&UNK_?;
      team = (MVTeam__Enum)pSVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
    }
    this_00 = (MethodInfo *)(this->fields).playerContainer;
    if (this_00 != (MethodInfo *)0x0) {
      team = (MVTeam__Enum)&UNK_?;
      method = this_00;
      bVar2 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        ((MVPlayerContainer *)this_00,actorNr,(MethodInfo *)0x0);
      team_00 = team;
      if (bVar2 != 0) {
        pMVar1 = (this->fields).playerContainer;
        if ((pMVar1 == (MVPlayerContainer *)0x0) ||
           (pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                               (pMVar1,actorNr,(MethodInfo *)0x0), iVar5 = actorNr,
           pMVar4 == (MVPlayer *)0x0)) goto code_?;
        if (team_00 != (pMVar4->fields)._Team_k__BackingField) {
          pMVar1 = (this->fields).playerContainer;
          pGVar6 = (this->fields).gameStatCounterManager;
          if (((pMVar1 == (MVPlayerContainer *)0x0) ||
              (pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                  (pMVar1,actorNr,(MethodInfo *)0x0), pMVar4 == (MVPlayer *)0x0)) ||
             (pGVar6 == (GameStatCounterManager *)0x0)) goto code_?;
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_RemoveTeamScoreOnActorLeave
                    (pGVar6,iVar5,(pMVar4->fields)._Team_k__BackingField,(MethodInfo *)0x0);
        }
      }
      iVar5 = actorNr;
      pMVar1 = (this->fields).playerContainer;
      if (pMVar1 != (MVPlayerContainer *)0x0) {
        method = (MethodInfo *)actorNr;
        actorNr = (int32_t)&UNK_?;
        team = (MVTeam__Enum)pMVar1;
        MVPlayerContainer::MVPlayerContainer_UpdateTeam(pMVar1,iVar5,team_00,(MethodInfo *)0x0);
        pGVar6 = (this->fields).gameStatCounterManager;
        if (pGVar6 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
                    (pGVar6,actorNr,(MethodInfo *)0x0);
          pMVar1 = (this->fields).playerContainer;
          if ((pMVar1 != (MVPlayerContainer *)0x0) &&
             (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar1,(MethodInfo *)0x0), pMVar7 != (MVLocalPlayer *)0x0)) {
            if ((pMVar7->fields)._._ActorNr_k__BackingField != actorNr) {
              return;
            }
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar8 != (MVNetworkGame *)0x0) {
              bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
              if (bVar2 == 0) {
                return;
              }
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar8 != (MVNetworkGame *)0x0) &&
                  (pWVar9 = (pMVar8->fields).worldNetwork, pWVar9 != (WorldNetwork *)0x0)) &&
                 (this_01 = (pWVar9->fields)._.worldObjectClientManager,
                 this_01 != (MVWorldObjectClientManagerNetwork *)0x0)) {
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_ResetLocalWorldObject(this_01,(MethodInfo *)0x0);
                this_02 = (pMVar8->fields)._GameCoinManager_k__BackingField;
                if (this_02 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset(this_02,pMVar8,(MethodInfo *)0x0);
                  pMVar1 = (pMVar8->fields).playerContainer;
                  if ((pMVar1 != (MVPlayerContainer *)0x0) &&
                     (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                         (pMVar1,(MethodInfo *)0x0), pMVar7 != (MVLocalPlayer *)0x0)
                     ) {
                    mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::
                    Object]::Stack_1_T_Enumerator_System_Object__Dispose
                              ((Stack_1_T_Enumerator_System_Object_ *)pMVar7,(MethodInfo *)0x0);
                    pMVar1 = (pMVar8->fields).playerContainer;
                    pGVar6 = (pMVar8->fields).gameStatCounterManager;
                    if ((pMVar1 != (MVPlayerContainer *)0x0) &&
                       ((pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                            (pMVar1,(MethodInfo *)0x0),
                        pMVar7 != (MVLocalPlayer *)0x0 && (pGVar6 != (GameStatCounterManager *)0x0))
                       )) {
                      MVWorldObject.dll::GameStatCounterManager::
                      GameStatCounterManager_RemoveStatsFromActor
                                (pGVar6,(pMVar7->fields)._._ActorNr_k__BackingField,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnSetWorldObjectsToPurchasedEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
               (MVNetworkGame *this,int32_t purchaseProfileId,int32_t itemId,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 != (WorldNetwork *)0x0) &&
     (pMVar2 = (pWVar1->fields)._.worldObjectClientManager,
     pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0)) {
    uStack_3 = 0xffffffff;
    puStack_4 = &DAT_?;
    uStack_5 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &uStack_5;
    puStack_6 = &stack0xffffffb8;
    puVar7 = &stack0xffffffb8;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                     );
      cRam_? = '\x01';
      puVar7 = puStack_6;
    }
    puStack_6 = puVar7;
    iVar8 = 0;
    iStack_9 = 0;
    DStack_10._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
    DStack_10._index = 0;
    DStack_10._version = 0;
    DStack_10._currentValue = (Object *)0x0;
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(pMVar2->fields)._.worldObjects;
    if ((this_00 !=
         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
       && (method_00 = (MethodInfo *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                       RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                       Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                                 ), method_00 != (MethodInfo *)0x0)) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_12,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      DStack_10._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar11->_dictionary;
      DStack_10._index = pDVar11->_index;
      DStack_10._version = pDVar11->_version;
      DStack_10._currentValue = pDVar11->_currentValue;
      DStack_12._version = 0;
      uStack_3 = 1;
      DStack_12._currentValue = (Object *)&DStack_10;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_10,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar13 == 0) {
          uStack_3 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_10,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_5;
          return;
        }
        if (DStack_10._currentValue == (Object *)0x0) break;
        if ((DStack_10._currentValue[5].klass == (Object__Class *)purchaseProfileId) &&
           (DStack_10._currentValue[2].klass == (Object__Class *)itemId)) {
          func_?();
          iVar8 = iVar8 + 1;
          iStack_9 = iVar8;
        }
      }
    }
  }
  uVar14 = func_?(&stack0xffffffa8);
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnShopInventoryResultSetResponse(Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,bool isDone,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (ShopItem *)TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pSVar1 != (ShopItem *)0x0) {
    pIStack_2 = (IEditModeUI__Class *)0x4;
    iVar3 = func_?();
    if (iVar3 == 0) {
      pIStack_2 = (IEditModeUI__Class *)
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
      ;
      this_01 = (PlayerShopInventoryRepository *)func_?();
      if (this_01 == (PlayerShopInventoryRepository *)0x0) goto code_?;
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository__ctor(this_01,(MethodInfo *)0x0);
      pIStack_2 = TypeInfo__IEditModeUI;
      puStack_4 = (undefined *)0x5;
      unaff_EDI = pSVar1;
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) {
      pIStack_2 = (IEditModeUI__Class *)0x4;
      this_02 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)func_?();
      if (this_02 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        pIStack_2 = (IEditModeUI__Class *)*unaff_FS_OFFSET;
        *unaff_FS_OFFSET = &pIStack_2;
        puStack_4 = &stack0xffffffb4;
        puVar5 = &stack0xffffffb4;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                         );
          func_?(&TypeInfo__System__Int32);
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
          func_?(&TypeInfo__ShopItem);
          cRam_? = '\x01';
          puVar5 = puStack_4;
        }
        puStack_4 = puVar5;
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
        DStack_6._index = 0;
        DStack_6._version = 0;
        DStack_6._currentKey = (Object *)0x0;
        if (this_02 !=
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) {
          this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                              (this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          if (this_00 !=
              (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)0x0) {
            method_00 = (MethodInfo *)&UNK_?;
            pDVar7 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                     Regex+CachedCodeEntryKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                               (&DStack_8,
                                (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                 *)this_00,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                               );
            DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary
            ;
            DStack_6._index = pDVar7->_index;
            DStack_6._version = pDVar7->_version;
            DStack_6._currentKey = pDVar7->_currentValue;
            DStack_8._version = 0;
            DStack_8._currentValue = (Object *)&DStack_6;
            while( true ) {
              bVar9 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                      Object,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                (&DStack_6,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                );
              pOVar10 = DStack_6._currentKey;
              if (bVar9 == 0) break;
              pSStack_11 = (ShopItem *)func_?(TypeInfo__ShopItem);
              unaff_EDI = (ShopItem *)pOVar10;
              if ((pSStack_11 == (ShopItem *)0x0) || ((ShopItem *)pOVar10 == (ShopItem *)0x0))
              goto code_?;
              pIVar12 = TypeInfo__System__Int32;
              if ((((IEditModeUI__Class *)pOVar10->klass)->_0).element_class !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              method_00 = (MethodInfo *)&UNK_?;
              piVar13 = (int32_t *)func_?(pOVar10);
              unaff_EDI = pSStack_11;
              ShopItem::ShopItem__ctor
                        (pSStack_11,*piVar13,(Dictionary_2_System_Object_System_Object_ *)this_02,
                         (MethodInfo *)0x0);
              if (*(ClientShopRepository **)(unaff_retaddr + 0x1c) == (ClientShopRepository *)0x0)
              goto code_?;
              ClientShopRepository::ClientShopRepository_AddItem
                        (*(ClientShopRepository **)(unaff_retaddr + 0x1c),unaff_EDI,
                         (MethodInfo *)0x0);
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,method_00);
            if ((char)outData != '\0') {
              if (*(ClientShopRepository **)(unaff_retaddr + 0x1c) == (ClientShopRepository *)0x0)
              goto code_?;
              ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                        (*(ClientShopRepository **)(unaff_retaddr + 0x1c),(MethodInfo *)0x0);
            }
            *unaff_FS_OFFSET = pIStack_2;
            return;
          }
        }
code_?:
        func_?();
        pIVar12 = extraout_ECX;
code_?:
        func_?(unaff_EDI,pIVar12);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnStatusChanged(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnStatusChanged
               (MVNetworkGame *this,StatusCode__Enum statusCode,MethodInfo *method)

{
  pMVar1 = (this->fields).statusChangedHandling;
  if (pMVar1 == (MVNetworkGame_StatusChangedHandling *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DebugLogHandler);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    func_?(&MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__
                   );
    func_?(&TypeInfo__MVNetworkGame_StatusChangedHandling____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Expecting_that_this_disconnect_i);
    func_?(&StringLiteral_Unhandled_PeerStatusCallback__re);
    func_?(&StringLiteral_Disconnected_because__);
    func_?(&StringLiteral_PeerStatusCallback___);
    cRam_? = '\x01';
  }
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_PeerStatusCallback___,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  this_00 = (pMVar1->fields).reconnectWithAlternatePortHandler;
  if (this_00 == (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) goto code_?;
  bVar3 = MVNetworkGame+ReconnectWithAlternatePortHandler::
          MVNetworkGame_ReconnectWithAlternatePortHandler_IsHandling
                    (this_00,statusCode,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((pMVar1->fields).registeredFatalStatusCodeInStatHat == 0) {
    if (statusCode != StatusCode__Enum_Connect) {
      if (statusCode == StatusCode__Enum_Disconnect) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField != 0)
        goto code_?;
      }
      (pMVar1->fields).registeredFatalStatusCodeInStatHat = 1;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)statusCode,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_StatusCode_,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
      pSStack_4 = TypeInfo__ExitGames__Client__Photon__StatusCode;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pSStack_4,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Client_disconnected_,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
code_?:
    if (0x16 < statusCode - StatusCode__Enum_SecurityExceptionOnConnect) goto code_?;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&UNK_?)[statusCode]) {
  case 0:
    pSStack_4 = TypeInfo__ExitGames__Client__Photon__StatusCode;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pSStack_4,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Disconnected_because__,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    pMVar5 = (pMVar1->fields).networkGame;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      if ((pMVar5->fields).connState == 1) {
        return;
      }
      (pMVar5->fields).connState = 0;
      if ((TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      this_02 = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0;
      if (this_02 == (UnityAction *)0x0) {
        if ((TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        object = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9;
        this_02 = (UnityAction *)func_?();
        if (this_02 == (UnityAction *)0x0) break;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  ((NavMesh_OnNavMeshPreUpdate *)this_02,(Object *)object,
                   MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__,
                   (MethodInfo *)0x0);
        TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0 = this_02;
        func_?();
      }
      coroutine = WaitForFrames::WaitForFrames_Frames(5,this_02,(MethodInfo *)0x0);
      Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
      return;
    }
    break;
  case 1:
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = 1;
    pMVar5 = (pMVar1->fields).networkGame;
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (pPVar6 = (pMVar5->fields)._Peer_k__BackingField, pPVar6 != (PhotonPeer *)0x0)) {
      (pPVar6->fields).DebugOut = (pMVar5->fields).photonLoggingConfig.defaultDebugLevel;
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pMVar5 = (pMVar7->fields).networkGame;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          (pMVar5->fields).connState = 3;
          this_01 = (ParameterOverride_1_System_Object_ *)func_?();
          if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            pPVar6 = (pMVar7->fields).peer;
            if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?();
            }
            if (pPVar6 != (PhotonPeer *)0x0) {
              (*(pPVar6->klass->vtable).SendOperation.methodPtr)();
              return;
            }
          }
        }
      }
    }
    break;
  case 2:
    pMVar5 = (pMVar1->fields).networkGame;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      if ((pMVar5->fields).connState == 0) {
        return;
      }
      (pMVar5->fields).connState = 1;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Expecting_that_this_disconnect_i,(MethodInfo *)0x0);
      return;
    }
    break;
  case 3:
code_?:
    pSStack_4 = TypeInfo__ExitGames__Client__Photon__StatusCode;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pSStack_4,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Unhandled_PeerStatusCallback__re,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnTransferOwnershipEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (photonEvent == (EventData *)0x0) {
code_?:
    func_?();
    pBVar1 = extraout_ECX;
  }
  else {
    unaff_EDI = (MVWorldObject *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x54,(MethodInfo *)0x0);
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x16,(MethodInfo *)0x0);
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    auStack_4._4_4_ = &UNK_?;
    pOStack_5 = pOVar2;
    piVar6 = (int32_t *)func_?();
    id = *piVar6;
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x14,(MethodInfo *)0x0);
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar6 = (int32_t *)func_?(pOVar2);
    pWVar7 = (this->fields).worldNetwork;
    if (((pWVar7 == (WorldNetwork *)0x0) ||
        (this_00 = (pWVar7->fields)._.worldObjectClientManager,
        this_00 == (MVWorldObjectClientManagerNetwork *)0x0)) ||
       (MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_TransferOwnershipProxy
                  (this_00,id,*piVar6,(MethodInfo *)0x0), unaff_EDI == (MVWorldObject *)0x0))
    goto code_?;
    pBVar1 = TypeInfo__System__Boolean;
    if ((unaff_EDI->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pcVar8 = (char *)func_?(unaff_EDI);
      if (*pcVar8 == '\0') {
        return;
      }
      if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
         (this_01 = (MVWorldObjectClientManager *)
                    (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         this_01 != (MVWorldObjectClientManager *)0x0)) {
        unaff_EDI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_01,id,(MethodInfo *)0x0);
        if (unaff_EDI == (MVWorldObject *)0x0) {
          return;
        }
        pVVar9 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition_1
                           ((Vector3 *)(auStack_4 + 4),(photonEvent->fields).Parameters,
                            (MethodInfo *)0x0);
        uStack_10._0_4_ = pVVar9->x;
        uStack_10._4_4_ = pVVar9->y;
        fStack_11 = pVVar9->z;
        pQVar12 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation_1
                           ((Quaternion *)auStack_4,(photonEvent->fields).Parameters,
                            (MethodInfo *)0x0);
        auStack_4._0_4_ = pQVar12->x;
        auStack_4._4_4_ = pQVar12->y;
        pOStack_5 = (Object *)pQVar12->z;
        fStack_13 = pQVar12->w;
        this_02 = (this->fields).transformNetworkManager;
        if (this_02 != (TransformNetworkManager *)0x0) {
          TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                    (this_02,id,(MethodInfo *)0x0);
          (*(unaff_EDI->klass->vtable).set_Position.methodPtr)
                    (unaff_EDI,uStack_10,fStack_11,(unaff_EDI->klass->vtable).set_Position.method);
          (*(unaff_EDI->klass->vtable).set_Rotation.methodPtr)
                    (unaff_EDI,auStack_4._0_4_,auStack_4._4_4_,pOStack_5,fStack_13,
                     (unaff_EDI->klass->vtable).set_Rotation.method);
          return;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?(unaff_EDI,pBVar1);
code_?:
  func_?(uVar3);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnTransferOwnershipResponse(Dictionary`2[System.Byte,System.Object], Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               int32_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x16,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?(pOVar1);
      id = *piVar3;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x14,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar3 = (int32_t *)func_?(pOVar1);
        pWVar4 = (this->fields).worldNetwork;
        if (returnCode == 0) {
          if ((pWVar4 != (WorldNetwork *)0x0) &&
             (pMVar5 = (pWVar4->fields)._.worldObjectClientManager,
             pMVar5 != (MVWorldObjectClientManagerNetwork *)0x0)) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
                      (pMVar5,id,*piVar3,1,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((pWVar4 != (WorldNetwork *)0x0) &&
                (pMVar5 = (pWVar4->fields)._.worldObjectClientManager,
                pMVar5 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
                    (pMVar5,id,*piVar3,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnTransferWorldObjectsToGroup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (eventData == (EventData *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x16,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar3 = (int32_t *)func_?(pOVar1);
    groupId = *piVar3;
    eventData = (EventData *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x48,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Int32;
    worldObjectsToGroup = (Int32__Array *)0x0;
    if (eventData == (EventData *)0x0) {
code_?:
      pWVar4 = (this->fields).worldNetwork;
      if ((pWVar4 != (WorldNetwork *)0x0) &&
         (this_00 = (pWVar4->fields)._.worldObjectClientManager,
         this_00 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                  (this_00,groupId,worldObjectsToGroup,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    worldObjectsToGroup = (Int32__Array *)func_?(eventData,TypeInfo__System__Int32);
    if (worldObjectsToGroup != (Int32__Array *)0x0) goto code_?;
  }
  uVar2 = func_?(eventData,unaff_EDI);
code_?:
  func_?(uVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnTriggerBoxEnterEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
               (MVNetworkGame *this,int32_t actorNr,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVTriggerBox);
    func_?(&StringLiteral__does_not_exist);
    func_?(&StringLiteral_OnTriggerBoxStayBegin_received__);
    func_?(&StringLiteral_OnTriggerBoxEnterEvent_received_);
    func_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)
               (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,worldObjectID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&worldObjectID,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_OnTriggerBoxEnterEvent_received_,pSVar3,
                          StringLiteral__does_not_exist,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
    if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
       (pMVar1 = (MVWorldObjectClientManager *)
                 (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,worldObjectID,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObject *)0x0) {
code_?:
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&worldObjectID,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_OnTriggerBoxStayBegin_received__,pSVar3,
                            StringLiteral__is_not_a_triggerbox_or_a_toggle,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
      if (((pMVar2->klass->_1).typeHierarchyDepth < (TypeInfo__MVTriggerBox->_1).typeHierarchyDepth)
         || ((MVTriggerBox__Class *)
             (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVTriggerBox->_1).typeHierarchyDepth - 1]
             != TypeInfo__MVTriggerBox)) goto code_?;
      if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
         (pMVar1 = (MVWorldObjectClientManager *)
                   (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar1 != (MVWorldObjectClientManager *)0x0)) {
        this_01 = (MVTriggerBox *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar1,worldObjectID,(MethodInfo *)0x0);
        this_00 = (this->fields).playerContainer;
        if (this_00 != (MVPlayerContainer *)0x0) {
          method = (MethodInfo *)0x0;
          worldObjectID = (int32_t)this_00;
          player = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,0,(MethodInfo *)0x0);
          if (this_01 != (MVTriggerBox *)0x0) {
            if (((TypeInfo__MVTriggerBox->_1).typeHierarchyDepth <=
                 (this_01->klass->_1).typeHierarchyDepth) &&
               ((MVTriggerBox__Class *)
                (this_01->klass->_1).typeHierarchy
                [(TypeInfo__MVTriggerBox->_1).typeHierarchyDepth - 1] == TypeInfo__MVTriggerBox)) {
              MVTriggerBox::MVTriggerBox_OnExit(this_01,player,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnTriggerBoxExitEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
               (MVNetworkGame *this,int32_t actorNr,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVTriggerBox);
    func_?(&StringLiteral__does_not_exist);
    func_?(&StringLiteral_OnTriggerBoxStayBegin_received__);
    func_?(&StringLiteral_OnTriggerBoxExitEvent_received__);
    func_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)
               (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,worldObjectID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&worldObjectID,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_OnTriggerBoxExitEvent_received__,pSVar3,
                          StringLiteral__does_not_exist,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
    if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
       (pMVar1 = (MVWorldObjectClientManager *)
                 (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,worldObjectID,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObject *)0x0) {
code_?:
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&worldObjectID,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_OnTriggerBoxStayBegin_received__,pSVar3,
                            StringLiteral__is_not_a_triggerbox_or_a_toggle,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
      if (((pMVar2->klass->_1).typeHierarchyDepth < (TypeInfo__MVTriggerBox->_1).typeHierarchyDepth)
         || ((MVTriggerBox__Class *)
             (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVTriggerBox->_1).typeHierarchyDepth - 1]
             != TypeInfo__MVTriggerBox)) goto code_?;
      if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
         (pMVar1 = (MVWorldObjectClientManager *)
                   (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar1 != (MVWorldObjectClientManager *)0x0)) {
        this_01 = (MVTriggerBox *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar1,worldObjectID,(MethodInfo *)0x0);
        this_00 = (this->fields).playerContainer;
        if (this_00 != (MVPlayerContainer *)0x0) {
          method = (MethodInfo *)0x0;
          worldObjectID = (int32_t)this_00;
          player = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,0,(MethodInfo *)0x0);
          if (this_01 != (MVTriggerBox *)0x0) {
            if (((TypeInfo__MVTriggerBox->_1).typeHierarchyDepth <=
                 (this_01->klass->_1).typeHierarchyDepth) &&
               ((MVTriggerBox__Class *)
                (this_01->klass->_1).typeHierarchy
                [(TypeInfo__MVTriggerBox->_1).typeHierarchyDepth - 1] == TypeInfo__MVTriggerBox)) {
              MVTriggerBox::MVTriggerBox_OnExit(this_01,player,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnTriggerBoxStayBegin(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
               (MVNetworkGame *this,int32_t worldObjectID,int32_t instigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ITriggerBoxEventsHandler);
    func_?(&StringLiteral__does_not_exist);
    func_?(&StringLiteral_OnTriggerBoxStayBegin_received__);
    func_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (this_00 = (MVWorldObjectClientManager *)
                (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,worldObjectID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) {
      str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&worldObjectID,(MethodInfo *)0x0);
      pSVar2 = StringLiteral__does_not_exist;
    }
    else {
      iVar3 = func_?(pMVar1);
      if (iVar3 != 0) {
        func_?(0,TypeInfo__ITriggerBoxEventsHandler,iVar3);
        return;
      }
      str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&worldObjectID,(MethodInfo *)0x0);
      pSVar2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_OnTriggerBoxStayBegin_received__,str1,pSVar2,(MethodInfo *)0x0
                       );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    method = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnTriggerBoxStayEnd(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ITriggerBoxEventsHandler);
    func_?(&StringLiteral__does_not_exist);
    func_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
    func_?(&StringLiteral_OnTriggerBoxStayEnd_received__bu);
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (this_00 = (MVWorldObjectClientManager *)
                (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,worldObjectID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) {
      str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&worldObjectID,(MethodInfo *)0x0);
      pSVar2 = StringLiteral__does_not_exist;
    }
    else {
      iVar3 = func_?(pMVar1);
      if (iVar3 != 0) {
        func_?(1,TypeInfo__ITriggerBoxEventsHandler);
        return;
      }
      str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&worldObjectID,(MethodInfo *)0x0);
      pSVar2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_OnTriggerBoxStayEnd_received__bu,str1,pSVar2,(MethodInfo *)0x0
                       );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUnregisterPrototypeEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
               (MVNetworkGame *this,int32_t worldInventoryID,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 != (WorldNetwork *)0x0) &&
     (pMVar2 = (pWVar1->fields)._.worldInventory, pMVar2 != (MVWorldInventory *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                     );
      func_?(&StringLiteral_Failed_to_remove_runtime_prototy);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (pMVar2->fields).runtimePrototypes;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                        );
      if (bVar3 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Failed_to_remove_runtime_prototy,(MethodInfo *)0x0);
        return;
      }
      pDVar4 = (pMVar2->fields).runtimePrototypes;
      if ((pDVar4 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) &&
         (this_01 = (RuntimePrototypeCubeModel *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,
                               worldInventoryID,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                              ), this_01 != (RuntimePrototypeCubeModel *)0x0)) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy(this_01,(MethodInfo *)0x0);
        pDVar4 = (pMVar2->fields).runtimePrototypes;
        if (pDVar4 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,worldInventoryID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                    );
          if ((pMVar2->fields).OnWorldInventoryChange !=
              (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            pMVar5 = (pMVar2->fields).OnWorldInventoryChange;
            pvStack6 = (pMVar5->fields)._._.method;
            pvStack7 = (pMVar5->fields)._._.method_code;
            pMStack8 = pMVar2;
            (*(pMVar5->fields)._._.invoke_impl)();
          }
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnUnregisterWorldObjectEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 != (WorldNetwork *)0x0) &&
     (this_00 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                      (this_00,worldObjectID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    this_01 = (pWVar1->fields)._.worldObjectClientManager;
    if (this_01 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                (this_01,worldObjectID,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUnregisterWorldObjectResponse(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    bVar1 = WorldNetwork::WorldNetwork_OnUnregisterWorldObject
                      (this_00,worldObjectID,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_OnUnregisterWorldObjectResponse_,(MethodInfo *)0x0);
    }
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUpdateLineOfFire(Int32, Vector3, Vector3) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
               (MVNetworkGame *this,int32_t worldObjectID,Vector3 camOrigin,Vector3 camDir,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Pickup_owner_not_found);
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (this_00 = (MVWorldObjectClientManager *)
                (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,worldObjectID,(MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObject *)0x0) &&
       (this_01 = pMVar1[1].fields.inputLinkRefs, this_01 != (List_1_MV_WorldObject_Link_ *)0x0)) {
      this_02 = (MVPickupOwner *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          ((GameObject *)this_01,
                           MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
        return;
      }
      if (this_02 != (MVPickupOwner *)0x0) {
        MVPickupOwner::MVPickupOwner_SetLineOfFire(this_02,camOrigin,camDir,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUpdateWorldObjectEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NetworkTransformPackage);
    func_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  if ((photonEvent == (EventData *)0x0) ||
     (pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x16,(MethodInfo *)0x0), pOVar2 == (Object *)0x0))
  goto code_?;
  if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
  goto code_?;
  piVar3 = (int32_t *)func_?();
  woID = *piVar3;
  p = (NetworkTransformPackage *)func_?();
  if (p == (NetworkTransformPackage *)0x0) {
code_?:
    func_?();
  }
  else {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)p,(MethodInfo *)0x0);
    pVVar4 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition_1
                       ((Vector3 *)&stack0xffffffe8,(photonEvent->fields).Parameters,
                        (MethodInfo *)0x0);
    fVar5 = pVVar4->y;
    fVar6 = pVVar4->z;
    (p->fields).position.x = pVVar4->x;
    (p->fields).position.y = fVar5;
    (p->fields).position.z = fVar6;
    unaff_EBX = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9d,(MethodInfo *)0x0);
    if ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__QuaternionCompression);
    }
    pBStack_7 = TypeInfo__System__Byte;
    if (unaff_EBX == (Object *)0x0) {
      eulerAnglesByteRange = (Byte__Array *)0x0;
    }
    else {
      eulerAnglesByteRange = (Byte__Array *)func_?(unaff_EBX,TypeInfo__System__Byte);
      if (eulerAnglesByteRange == (Byte__Array *)0x0) goto code_?;
    }
    unaff_EBX = pOVar2;
    pQVar8 = MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
             QuaternionCompression_ToQuaternion
                       ((Quaternion *)&stack0xffffffe4,eulerAnglesByteRange,(MethodInfo *)0x0);
    fVar6 = pQVar8->y;
    fVar5 = pQVar8->z;
    fVar9 = pQVar8->w;
    (p->fields).rotation.x = pQVar8->x;
    (p->fields).rotation.y = fVar6;
    (p->fields).rotation.z = fVar5;
    (p->fields).rotation.w = fVar9;
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x23,(MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar3 = (int32_t *)func_?();
      (p->fields).timestamp = *piVar3;
      pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x24,(MethodInfo *)0x0);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
        goto code_?;
        puVar10 = (uint8_t *)func_?();
        (p->fields).packageType = *puVar10;
        this_00 = (this->fields).transformNetworkManager;
        if (this_00 != (TransformNetworkManager *)0x0) {
          TransformNetworkManager::TransformNetworkManager_AddTransformPackage
                    (this_00,woID,p,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX,pBStack_7);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnWoUniquePrototypeEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
               (MVNetworkGame *this,int32_t woId,int32_t worldInventoryId,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 == (WorldNetwork *)0x0) ||
     (pMVar2 = (pWVar1->fields)._.worldInventory, pMVar2 == (MVWorldInventory *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&MethodInfo__System__Nullable<float>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<float>__get_Value__);
    func_?(&StringLiteral_Pending_runtime_prototype_alread);
    func_?(&StringLiteral_protoTypeID);
    cRam_? = '\x01';
  }
  pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (pMVar2->fields).pendingRuntimePrototypes;
  if (pDVar3 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (pDVar3,(Object *)woId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                    );
  if (bVar4 == 0) {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar6 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar5,woId,(MethodInfo *)0x0), pMVar6 == (MVCubeModelBase *)0x0))
    goto code_?;
    if (((pMVar6->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
       ((MVCubeModelInstance__Class *)
        (pMVar6->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVCubeModelInstance)) {
code_?:
      func_?();
      goto code_?;
    }
    key = MVCubeModelBase::MVCubeModelBase_get_Pid(pMVar6,(MethodInfo *)0x0);
    this_00 = (pMVar2->fields).runtimePrototypes;
    if ((this_00 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) ||
       (pMVar6 = (MVCubeModelBase *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            ), pMVar6 == (MVCubeModelBase *)0x0)) goto code_?;
    bVar4 = (bool)(pMVar6->fields)._._.objectLinkRefs;
    pRVar7 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                        ((RuntimePrototypeCubeModel *)pMVar6,0,(MethodInfo *)0x0);
    if (pRVar7 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar7->fields).prototypeId = 0;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
              (pRVar7,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(pMVar2->fields).runtimePrototypes;
    if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar8,(Object *)0x0,(Object *)pRVar7,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
              );
    this_01 = (pMVar6->fields).prototypeCubeModel;
    if (this_01 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance(this_01,0,(MethodInfo *)0x0)
    ;
    MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel(pMVar6,pRVar7,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar7,pMVar6,(MethodInfo *)0x0);
    pDVar8 = (pMVar6->fields)._._.data;
    pOVar9 = (Object *)func_?();
    if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (pDVar8,(Object *)StringLiteral_protoTypeID,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  else {
    pDVar10 = (pMVar2->fields).pendingRuntimePrototypes;
    if (pDVar10 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    GVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Int32Enum,GamePassesHighScoreList+HighScoreListData]::
             Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                       ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                        pDVar10,woId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                       );
    pRVar7 = (RuntimePrototypeCubeModel *)GVar11.topRank;
    if (pRVar7 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar7->fields).prototypeId = worldInventoryId;
    pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (pMVar2->fields).runtimePrototypes;
    if (pDVar3 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar3,(Object *)worldInventoryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                      );
    bVar4 = (bool)pDVar3;
    if (bVar12 == 0) {
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(pMVar2->fields).runtimePrototypes;
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar8,(Object *)worldInventoryId,(Object *)pRVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                );
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                (pRVar7,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar5,woId,(MethodInfo *)0x0), pMVar13 == (MVWorldObject *)0x0))
      goto code_?;
      if (((pMVar13->klass->_1).typeHierarchyDepth <
           (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
         ((MVCubeModelInstance__Class *)
          (pMVar13->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        func_?();
        goto code_?;
      }
      pDVar8 = (pMVar13->fields).data;
      pOVar9 = (Object *)func_?();
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (pDVar8,(Object *)StringLiteral_protoTypeID,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Pending_runtime_prototype_alread,(MethodInfo *)0x0);
    }
    pDVar10 = (pMVar2->fields).pendingRuntimePrototypes;
    if (pDVar10 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,PendingPrototypeData]::
    Dictionary_2_System_Int32_PendingPrototypeData__Remove
              (pDVar10,woId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
              );
  }
  if (bVar4 == 0) {
    return;
  }
  pMVar14 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__get_Value
            ((Nullable_1_Single_ *)&stack0xffffffec,MethodInfo__System__Nullable<float>__get_Value__
            );
  if (pMVar14 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      pOVar9 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar8,(Object *)0x2f,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar9 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar8,(Object *)0x22,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar15 = (pMVar14->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pPVar15 != (PhotonPeer *)0x0) {
        (*(pPVar15->klass->vtable).SendOperation.methodPtr)(pPVar15,8);
        return;
      }
    }
  }
code_?:
  uVar16 = func_?(&stack0xffffffdc);
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnWorldObjectRPCEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Attempt_to_update_world_object__);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  if (photonEvent == (EventData *)0x0) {
code_?:
    func_?();
    pDVar2 = extraout_EDX;
  }
  else {
    pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x16,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar5 = (int32_t *)func_?(pOVar3);
    id = *piVar5;
    if (((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
       (pMVar6 = (MVWorldObjectClientManager *)
                 (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar6 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar6,id,(MethodInfo *)0x0);
    if (pMVar7 == (MVWorldObject *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
      return;
    }
    pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xfe,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar5 = (int32_t *)func_?(pOVar3);
    this_00 = (this->fields).playerContainer;
    if (((this_00 == (MVPlayerContainer *)0x0) ||
        (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar5,(MethodInfo *)0x0),
        (this->fields).worldNetwork == (WorldNetwork *)0x0)) ||
       (pMVar6 = (MVWorldObjectClientManager *)
                 (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar6 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar6,id,(MethodInfo *)0x0);
    photonEvent = (EventData *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x53,(MethodInfo *)0x0);
    if (pMVar7 == (MVWorldObject *)0x0) goto code_?;
    if (photonEvent == (EventData *)0x0) {
      photonEvent = (EventData *)0x0;
code_?:
      (*(code *)pMVar7->klass[1].vtable.get_RunTimeData.method)
                (pMVar7,pMVar8,photonEvent,pMVar7->klass[1].vtable.set_RunTimeData.methodPtr);
      return;
    }
    pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (((Object__Class *)photonEvent->klass)->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Object__Class *)photonEvent->klass)->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  uVar4 = func_?(photonEvent,pDVar2);
code_?:
  func_?(uVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void PlayModeSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_PlayModeSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (photonEvent == (EventData *)0x0) {
code_?:
    func_?();
    this = (MVNetworkGame *)unaff_EDI;
code_?:
    func_?();
  }
  else {
    userList = (Dictionary_2_System_Object_System_Object_ *)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xd,(MethodInfo *)0x0);
    if ((userList != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       ((pDVar1 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (userList->klass->_1).typeHierarchyDepth <
          (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth ||
        ((Dictionary_2_System_Object_System_Object___Class *)
         (userList->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
    goto code_?;
    MVNetworkGame_CreatePlayersFromUserList(this,userList,(MethodInfo *)0x0);
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar3 = (undefined4 *)func_?();
      pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,(uint8_t)*puVar3,(MethodInfo *)0x0);
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar3 = (undefined4 *)func_?();
      pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x42,(MethodInfo *)*puVar3);
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      func_?();
      startTime = 0;
      gameStateType = 0x9e;
      pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x9e,(MethodInfo *)0x0);
      data = (Byte__Array *)0x0;
      if ((pOVar2 == (Object *)0x0) ||
         (data = (Byte__Array *)func_?(), data != (Byte__Array *)0x0)) {
        this_00 = (this->fields).gameStatCounterManager;
        if (this_00 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStats
                    (this_00,data,(MethodInfo *)0x0);
          this_01 = (this->fields)._NetworkGameStateListener_k__BackingField;
          unaff_EDI = in_stack_4;
          if (this_01 != (MVNetworkGameStateListener *)0x0) {
            MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
                      (this_01,gameStateType,startTime,0,1,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  userList = extraout_EDX;
  pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)this;
code_?:
  func_?(userList,pDVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetPlayer() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_ResetPlayer
               (MVNetworkGame *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 != (WorldNetwork *)0x0) &&
     (this_00 = (pWVar1->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManagerNetwork *)0x0)) {
    MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_ResetLocalWorldObject
              (this_00,(MethodInfo *)0x0);
    this_01 = (this->fields)._GameCoinManager_k__BackingField;
    if (this_01 != (MVGameCoinManager *)0x0) {
      MVGameCoinManager::MVGameCoinManager_Reset(this_01,this,(MethodInfo *)0x0);
      pMVar2 = (this->fields).playerContainer;
      if (pMVar2 != (MVPlayerContainer *)0x0) {
        pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
        if (pMVar3 != (MVLocalPlayer *)0x0) {
          mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Object]::
          Stack_1_T_Enumerator_System_Object__Dispose
                    ((Stack_1_T_Enumerator_System_Object_ *)pMVar3,(MethodInfo *)0x0);
          pMVar2 = (this->fields).playerContainer;
          this_02 = (this->fields).gameStatCounterManager;
          if (pMVar2 != (MVPlayerContainer *)0x0) {
            pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
            if ((pMVar3 != (MVLocalPlayer *)0x0) && (this_02 != (GameStatCounterManager *)0x0)) {
              MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
                        (this_02,(pMVar3->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Service() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Service
               (MVNetworkGame *this,MethodInfo *method)

{
  if ((this->fields)._Peer_k__BackingField != (PhotonPeer *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? <= fVar1 - (this->fields).prevServiceCallTime) {
      pPVar2 = (this->fields)._Peer_k__BackingField;
      if (pPVar2 == (PhotonPeer *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(pPVar2->klass->vtable).Service.methodPtr)(pPVar2,(pPVar2->klass->vtable).Service.method);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevServiceCallTime = fVar1;
    }
  }
  return;
}


/* Void SetupLogicManager(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_SetupLogicManager
               (MVNetworkGame *this,int32_t stepTimestamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVNetworkGame__LogicObjectManagerClientWrapper);
    func_?(&TypeInfo__LogicObjectManagerClient);
    func_?(&StringLiteral_stepTimestamp_is_not_correctly_i);
    cRam_? = '\x01';
  }
  if (stepTimestamp != (stepTimestamp / 1000) * 1000) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_stepTimestamp_is_not_correctly_i,(MethodInfo *)0x0);
  }
  this_00 = (LogicObjectManagerClient *)func_?(TypeInfo__LogicObjectManagerClient);
  if (this_00 != (LogicObjectManagerClient *)0x0) {
    LogicObjectManagerClient::LogicObjectManagerClient__ctor
              (this_00,stepTimestamp,0,(MethodInfo *)0x0);
    (this->fields)._LogicObjectManager_k__BackingField = this_00;
    func_?(&(this->fields)._LogicObjectManager_k__BackingField,this_00);
    this_01 = (MVNetworkGame_LogicObjectManagerClientWrapper *)
              func_?(TypeInfo__MVNetworkGame__LogicObjectManagerClientWrapper);
    if (this_01 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper__ctor
                (this_01,this,stepTimestamp,(MethodInfo *)0x0);
      (this->fields).logicObjectManagerClientWrapper = this_01;
      func_?(&(this->fields).logicObjectManagerClientWrapper,this_01);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_SubscribeToEvent
               (MVNetworkGame *this,MVEventCodes__Enum eventCode,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  pMVar1 = (this->fields).eventHandling;
  if ((pMVar1 != (MVNetworkGame_EventHandling *)0x0) &&
     (pMVar2 = (pMVar1->fields).dynamicEventCallbackManager,
     pMVar2 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                     );
      cRam_? = '\x01';
    }
    pMVar3 = (MethodInfo *)(pMVar2->fields).eventsHandledByDynamicEventCallbackManager;
    if (pMVar3 != (MethodInfo *)0x0) {
      bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        ((HashSet_1_System_ByteEnum_ *)pMVar3,eventCode,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                        );
      if (bVar4 == 0) {
code_?:
        func_?();
        this_03 = (Exception *)func_?();
        func_?();
        pMVar3 = (MethodInfo *)0x0;
        message = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(this_03,message,pMVar3);
        func_?();
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                (pMVar2->fields).eventCallbacks;
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,(Object *)eventCode,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                          );
        if (bVar4 == 0) {
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(pMVar2->fields).eventCallbacks;
          pOVar6 = (Object *)func_?();
          if ((pOVar6 == (Object *)0x0) ||
             (mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar6,ExceptionArgument__Enum_obj,pMVar3),
             this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,(Object *)eventCode,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                    );
        }
        this_02 = (pMVar2->fields).eventCallbacks;
        if ((this_02 !=
             (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
              *)0x0) &&
           (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,eventCode,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                               ), pOVar6 != (Object *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar6[1].klass;
          while ((pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0),
                 pDVar7 == (Delegate *)0x0 || (iVar8 = func_?(), iVar8 != 0))) {
            pOVar9 = (Object__Class *)func_?();
            bVar10 = pOVar9 == a;
            a = pOVar9;
            if (bVar10) {
              return;
            }
          }
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar11 = func_?(&stack0xffffffec);
  func_?(uVar11);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TransferBodyResponseHandler(Object, OnTransferWosResponseEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_TransferBodyResponseHandler
               (MVNetworkGame *this,Object *sender,OnTransferWosResponseEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    func_?(&
                    MethodInfo__MVNetworkGame__TransferBodyResponseHandler_System__Object__OnTransferWosResponseEventArgs_
                   );
    func_?(&StringLiteral_Body_transfer_failed_);
    func_?(&StringLiteral_TransferWosResponseHandler);
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pMVar1 = (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManagerNetwork *)0x0)) {
    pEVar2 = (pMVar1->fields)._.OnTransferWosResponse;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVNetworkGame__TransferBodyResponseHandler_System__Object__OnTransferWosResponseEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields)._.OnTransferWosResponse =
             (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
      }
      else {
        pEVar2 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)func_?();
        if (pEVar2 == (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) goto code_?;
        (pMVar1->fields)._.OnTransferWosResponse = pEVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_TransferWosResponseHandler,(MethodInfo *)0x0);
      if (e != (OnTransferWosResponseEventArgs *)0x0) {
        if ((e->fields).success == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Body_transfer_failed_,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnSubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_UnSubscribeToEvent
               (MVNetworkGame *this,MVEventCodes__Enum eventCode,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  pMVar1 = (this->fields).eventHandling;
  if ((pMVar1 != (MVNetworkGame_EventHandling *)0x0) &&
     (pMVar2 = (pMVar1->fields).dynamicEventCallbackManager,
     pMVar2 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pDVar3 = (pMVar2->fields).eventCallbacks;
    if ((pDVar3 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                    *)0x0) &&
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           ), pOVar4 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      source = pOVar4[1].klass;
      do {
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
        if ((pDVar5 != (Delegate *)0x0) && (iVar6 = func_?(), iVar6 == 0)) {
          func_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pOVar8 = (Object__Class *)func_?();
        bVar9 = pOVar8 != source;
        source = pOVar8;
      } while (bVar9);
      if (pOVar4[1].klass == (Object__Class *)0x0) {
        pDVar3 = (pMVar2->fields).eventCallbacks;
        if (pDVar3 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,eventCode,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                  );
      }
      return;
    }
  }
code_?:
  uVar10 = func_?(&stack0xffffffe0);
  func_?(uVar10);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Update
               (MVNetworkGame *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  uStack_3 = 0;
  if ((this->fields)._Peer_k__BackingField != (PhotonPeer *)0x0) {
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? <= fVar4 - (this->fields).prevServiceCallTime) {
      pPVar5 = (this->fields)._Peer_k__BackingField;
      if (pPVar5 == (PhotonPeer *)0x0) goto code_?;
      (*(pPVar5->klass->vtable).Service.methodPtr)(pPVar5);
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevServiceCallTime = fVar4;
    }
    if ((this->fields).logicObjectManagerClientWrapper !=
        (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Update
                ((this->fields).logicObjectManagerClientWrapper,(MethodInfo *)0x0);
    }
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar6 == MVJoinState__Enum_Playing) {
      this_00 = (this->fields).runtimeVariableNetworkManager;
      if (this_00 == (RuntimeVariableNetworkManager *)0x0) goto code_?;
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData
                (this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).transformNetworkManager;
      if (this_01 == (TransformNetworkManager *)0x0) goto code_?;
      TransformNetworkManager::TransformNetworkManager_Update(this_01,this,(MethodInfo *)0x0);
      this_02 = (this->fields).worldNetwork;
      if (this_02 == (WorldNetwork *)0x0) goto code_?;
      WorldNetwork::WorldNetwork_Update(this_02,this,(MethodInfo *)0x0);
      this_03 = (this->fields)._GameCoinManager_k__BackingField;
      if (this_03 == (MVGameCoinManager *)0x0) goto code_?;
      MVGameCoinManager::MVGameCoinManager_Update(this_03,this,(MethodInfo *)0x0);
    }
    this_04 = (this->fields)._NetworkGameStateListener_k__BackingField;
    if (this_04 == (MVNetworkGameStateListener *)0x0) {
code_?:
      func_?();
      func_?();
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    MVNetworkGameStateListener::MVNetworkGameStateListener_Update(this_04,this,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = uStack_2;
  return;
}


/* Void UpdateGame() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_UpdateGame
               (MVNetworkGame *this,MethodInfo *method)

{
  if ((this->fields)._Peer_k__BackingField != (PhotonPeer *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if (_UNK_? <= fVar1 - (this->fields).prevServiceCallTime) {
      pPVar2 = (this->fields)._Peer_k__BackingField;
      if (pPVar2 == (PhotonPeer *)0x0) goto code_?;
      (*(pPVar2->klass->vtable).Service.methodPtr)(pPVar2,(pPVar2->klass->vtable).Service.method);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevServiceCallTime = fVar1;
    }
    if ((this->fields).logicObjectManagerClientWrapper !=
        (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Update
                ((this->fields).logicObjectManagerClientWrapper,(MethodInfo *)0x0);
    }
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar3 == MVJoinState__Enum_Playing) {
      this_00 = (this->fields).runtimeVariableNetworkManager;
      if (this_00 == (RuntimeVariableNetworkManager *)0x0) goto code_?;
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData
                (this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).transformNetworkManager;
      if (this_01 == (TransformNetworkManager *)0x0) goto code_?;
      TransformNetworkManager::TransformNetworkManager_Update(this_01,this,(MethodInfo *)0x0);
      this_02 = (this->fields).worldNetwork;
      if (this_02 == (WorldNetwork *)0x0) goto code_?;
      WorldNetwork::WorldNetwork_Update(this_02,this,(MethodInfo *)0x0);
      this_03 = (this->fields)._GameCoinManager_k__BackingField;
      if (this_03 == (MVGameCoinManager *)0x0) goto code_?;
      MVGameCoinManager::MVGameCoinManager_Update(this_03,this,(MethodInfo *)0x0);
    }
    this_04 = (this->fields)._NetworkGameStateListener_k__BackingField;
    if (this_04 == (MVNetworkGameStateListener *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    MVNetworkGameStateListener::MVNetworkGameStateListener_Update(this_04,this,(MethodInfo *)0x0);
  }
  return;
}


/* Void WOCM_InitializedGameQueryDataHandler(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_WOCM_InitializedGameQueryDataHandler
               (MVNetworkGame *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__MVGroup);
    func_?(&
                    MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&StringLiteral_RootGroup_is_not_found_);
    cRam_? = '\x01';
  }
  value = (MVGroup *)(this->fields).worldNetwork;
  if (value == (MVGroup *)0x0) {
code_?:
    func_?();
    pMVar1 = extraout_EDX;
  }
  else {
    pDVar2 = *(Delegate **)&(value->fields)._._.inputState;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (this_01 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      *(undefined4 *)&(value->fields)._._.inputState = 0;
    }
    else {
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
      *(int *)&(value->fields)._._.inputState = iVar3;
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    func_?();
    value = (MVGroup *)e;
    if (e == (InitializedGameQueryDataEventArgs *)0x0) goto code_?;
    pMVar4 = (e->fields).RootWO;
    if (pMVar4 == (MVWorldObjectClient *)0x0) {
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_RootGroup_is_not_found_,(MethodInfo *)0x0);
code_?:
      if (TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit !=
          (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit;
        (*(pMVar5->fields)._._.invoke_impl)((pMVar5->fields)._._.method_code);
      }
      return;
    }
    pMVar6 = pMVar4->klass;
    if (((pMVar6->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth) ||
       ((MVGroup__Class *)(pMVar6->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1]
        != TypeInfo__MVGroup)) goto code_?;
    if ((this->fields).worldNetwork == (WorldNetwork *)0x0) goto code_?;
    value = (MVGroup *)(e->fields).RootWO;
    this_00 = (MVWorldObjectClientManager *)
              (((this->fields).worldNetwork)->fields)._.worldObjectClientManager;
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    if (value == (MVGroup *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_set_RootGroup
                (this_00,(MVGroup *)0x0,(MethodInfo *)0x0);
      goto code_?;
    }
    pMVar1 = TypeInfo__MVGroup;
    if (((TypeInfo__MVGroup->_1).typeHierarchyDepth <= (value->klass->_1).typeHierarchyDepth) &&
       ((MVGroup__Class *)
        (value->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] ==
        TypeInfo__MVGroup)) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_set_RootGroup
                (this_00,value,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?(value,pMVar1);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVNetworkGame(PhotonLoggingConfig, EmbeddedSiteConfigData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame__ctor
               (MVNetworkGame *this,PhotonLoggingConfig photonLoggingConfig,
               EmbeddedSiteConfigData embeddedSiteConfigData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>);
    func_?(&TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
    func_?(&TypeInfo__MVNetworkGame__GameDataQueryManager);
    func_?(&TypeInfo__GameEventManager);
    func_?(&TypeInfo__GameStatCounterManager);
    func_?(&TypeInfo__LevelRewardsManager);
    func_?(&TypeInfo__MVItemBusinessLogic);
    func_?(&TypeInfo__MVNetworkGameStateListener);
    func_?(&
                    MethodInfo__MVNetworkGame__networkGameStateListener_OnGameStateChanged_System__Object__GameStateChangeEventArgs_
                   );
    func_?(&TypeInfo__MVPlayerContainer);
    func_?(&TypeInfo__MVTeamManager);
    func_?(&TypeInfo__ExitGames__Client__Photon__PhotonPeer);
    func_?(&TypeInfo__RuntimeVariableNetworkManager);
    func_?(&TypeInfo__TransformNetworkManager);
    cRam_? = '\x01';
  }
  value = (MVItemBusinessLogic *)func_?(TypeInfo__MVItemBusinessLogic);
  if (value != (MVItemBusinessLogic *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                             );
    if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                );
      pMVar1 = (MethodInfo *)&value->fields;
      (value->fields).items = this_00;
      func_?(pMVar1,this_00);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
      (this->fields).itemBusinessLogic = value;
      func_?(&(this->fields).itemBusinessLogic,value);
      this_01 = (MVNetworkGame_GameDataQueryManager *)
                func_?(TypeInfo__MVNetworkGame__GameDataQueryManager);
      if (this_01 != (MVNetworkGame_GameDataQueryManager *)0x0) {
        MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager__ctor
                  (this_01,(MethodInfo *)0x0);
        (this->fields).gameDataQueryManager = this_01;
        func_?(&(this->fields).gameDataQueryManager,this_01);
        this_02 = (TransformNetworkManager *)func_?(TypeInfo__TransformNetworkManager);
        if (this_02 != (TransformNetworkManager *)0x0) {
          TransformNetworkManager::TransformNetworkManager__ctor(this_02,(MethodInfo *)0x0);
          (this->fields).transformNetworkManager = this_02;
          func_?(&(this->fields).transformNetworkManager,this_02);
          this_03 = (GameEventManager *)func_?(TypeInfo__GameEventManager);
          if (this_03 != (GameEventManager *)0x0) {
            GameEventManager::GameEventManager__ctor(this_03,(MethodInfo *)0x0);
            (this->fields).GameEventManager = this_03;
            func_?(&(this->fields).GameEventManager,this_03);
            this_04 = (Dictionary_2_MV_Common_Region_System_Single_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>
                                     );
            if (this_04 != (Dictionary_2_MV_Common_Region_System_Single_ *)0x0) {
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)this_04,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Dictionary__
                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__Add
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_04,0,2.0,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__Add
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_04,1,2.0,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__Add
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_04,2,-5.5,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__Add
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_04,3,-3.0,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__Add
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_04,4,2.5,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
                        );
              (this->fields).timeZoneMap = this_04;
              func_?();
              (this->fields).lastFrameServerTimeUpdate = -1;
              (this->fields).lastFrameLocalTimeUpdate = -1;
              this_05 = (MVTeamManager *)func_?();
              if (this_05 != (MVTeamManager *)0x0) {
                MVTeamManager::MVTeamManager__ctor(this_05,(MethodInfo *)0x0);
                (this->fields).teamManager = this_05;
                func_?(&(this->fields).teamManager,this_05);
                this_06 = (GameStatCounterManager *)
                          func_?(TypeInfo__GameStatCounterManager);
                if (this_06 != (GameStatCounterManager *)0x0) {
                  MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager__ctor
                            (this_06,(MethodInfo *)0x0);
                  (this->fields).gameStatCounterManager = this_06;
                  func_?(&(this->fields).gameStatCounterManager,this_06);
                  this_07 = (LevelRewardsManager *)func_?(TypeInfo__LevelRewardsManager);
                  if (this_07 != (LevelRewardsManager *)0x0) {
                    LevelRewardsManager::LevelRewardsManager__ctor(this_07,(MethodInfo *)0x0);
                    (this->fields).levelRewardsManager = this_07;
                    func_?(&(this->fields).levelRewardsManager,this_07);
                    this_08 = (MVPlayerContainer *)func_?(TypeInfo__MVPlayerContainer);
                    if (this_08 != (MVPlayerContainer *)0x0) {
                      MVPlayerContainer::MVPlayerContainer__ctor(this_08,(MethodInfo *)0x0);
                      (this->fields).playerContainer = this_08;
                      func_?(&(this->fields).playerContainer,this_08);
                      this_09 = (RuntimeVariableNetworkManager *)
                                func_?(TypeInfo__RuntimeVariableNetworkManager);
                      if (this_09 != (RuntimeVariableNetworkManager *)0x0) {
                        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager__ctor
                                  (this_09,(MethodInfo *)0x0);
                        pMVar1 = (MethodInfo *)&(this->fields).runtimeVariableNetworkManager;
                        (this->fields).runtimeVariableNetworkManager = this_09;
                        func_?(pMVar1,this_09);
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                  ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
                        photonLoggingConfig = SUB42(this_04,0);
                        (this->fields).photonLoggingConfig = photonLoggingConfig;
                        (this->fields).embeddedSiteConfigData.sites = (List_1_System_String_ *)0x2;
                        (this->fields).embeddedSiteConfigData.siteEnum = -0x3f500000;
                        *(undefined **)&(this->fields).embeddedSiteConfigData.showTouristPromotion =
                             &UNK_?;
                        *(Dictionary_2_MV_Common_Region_System_Single_ **)
                         &(this->fields).embeddedSiteConfigData.integratedSdk = this_04;
                        (this->fields).embeddedSiteConfigData.allowInHouseAds = 3;
                        (this->fields).embeddedSiteConfigData.removeFullscreenButton = 0;
                        *(undefined2 *)&(this->fields).embeddedSiteConfigData.field_0x12 = 0;
                        func_?(&(this->fields).embeddedSiteConfigData,0);
                        MVGameControllerBase::MVGameControllerBase_set_JoinState
                                  (MVJoinState__Enum_Joining,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__MVGameControllerBase);
                          cRam_? = '\x01';
                        }
                        if (TypeInfo__MVGameControllerBase->static_fields->
                            _GameSessionData_k__BackingField != (GameSessionData *)0x0) {
                          pPVar2 = (PhotonPeer *)
                                   func_?(TypeInfo__ExitGames__Client__Photon__PhotonPeer);
                          if (pPVar2 != (PhotonPeer *)0x0) {
                            Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
                            PhotonPeer__ctor_1(pPVar2,(IPhotonPeerListener *)this,
                                               ConnectionProtocol__Enum_Udp,(MethodInfo *)0x0);
                            (this->fields)._Peer_k__BackingField = pPVar2;
                            func_?(&(this->fields)._Peer_k__BackingField,pPVar2);
                            pPVar2 = (this->fields)._Peer_k__BackingField;
                            if (pPVar2 != (PhotonPeer *)0x0) {
                              (pPVar2->fields).DisconnectTimeout = 20000;
                              pPVar2 = (this->fields)._Peer_k__BackingField;
                              if (pPVar2 != (PhotonPeer *)0x0) {
                                (pPVar2->fields).SentCountAllowance = 8;
                                pPVar2 = (this->fields)._Peer_k__BackingField;
                                if (pPVar2 != (PhotonPeer *)0x0) {
                                  (pPVar2->fields).DebugOut = (uint8_t)((uint)this_04 >> 8);
                                  MVNetworkGame_CreatePrivateClasses(this,(MethodInfo *)0x0);
                                  pMVar3 = (MVNetworkGameStateListener *)
                                           func_?(TypeInfo__MVNetworkGameStateListener);
                                  if (pMVar3 != (MVNetworkGameStateListener *)0x0) {
                                    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                    TweenRunner`1[FloatTween]::TweenRunner_1_FloatTween___ctor
                                              ((TweenRunner_1_FloatTween_ *)pMVar3,(MethodInfo *)0x0
                                              );
                                    (this->fields)._NetworkGameStateListener_k__BackingField =
                                         pMVar3;
                                    func_?(&(this->fields).
                                                     _NetworkGameStateListener_k__BackingField,
                                                    pMVar3);
                                    pMVar3 = (this->fields).
                                             _NetworkGameStateListener_k__BackingField;
                                    this_10 = (UnityAction_2_System_Object_System_Object_ *)
                                              func_?(
                                                  TypeInfo__System__EventHandler<GameStateChangeEventArgs>
                                                  );
                                    if (this_10 != (UnityAction_2_System_Object_System_Object_ *)0x0
                                       ) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`2[System::Object,System::Object]::
                                      UnityAction_2_System_Object_System_Object___ctor
                                                (this_10,(Object *)this,
                                                 MethodInfo__MVNetworkGame__networkGameStateListener_OnGameStateChanged_System__Object__GameStateChangeEventArgs_
                                                 ,(MethodInfo *)0x0);
                                      if (pMVar3 != (MVNetworkGameStateListener *)0x0) {
                                        MVNetworkGameStateListener::
                                        MVNetworkGameStateListener_add_OnGameStateChanged
                                                  (pMVar3,(EventHandler_1_GameStateChangeEventArgs_
                                                           *)this_10,(MethodInfo *)0x0);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void add_ReceivedAccessoryData(Action`1[String]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedAccessoryData
               (MVNetworkGame *this,Action_1_String_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    cRam_? = '\x01';
  }
  a = (this->fields).ReceivedAccessoryData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<System::String>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<System::String>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_String_ *)func_?(&(this->fields).ReceivedAccessoryData,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_ReceivedAvatarBodiesFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedAvatarBodiesFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).ReceivedAvatarBodiesFromQuery;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
             func_?(&(this->fields).ReceivedAvatarBodiesFromQuery,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_ReceivedItemFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).ReceivedItemFromQuery;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
             func_?(&this->fields,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_ScreenshotUploaded(EventHandler`1[ScreenshotUploadedEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
               (MVNetworkGame *this,EventHandler_1_ScreenshotUploadedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).ScreenshotUploaded;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ScreenshotUploadedEventArgs_ *)
             func_?(&(this->fields).ScreenshotUploaded,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Boolean get_IsPlaying() */

bool Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_IsPlaying
               (MVNetworkGame *this,MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
  return bVar1;
}


/* MVLocalPlayer get_LocalPlayer() */

MVLocalPlayer *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_LocalPlayer
          (MVNetworkGame *this,MethodInfo *method)

{
  this_00 = (this->fields).playerContainer;
  if (this_00 == (MVPlayerContainer *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVLocalPlayer *)(*pcVar2)();
    return pMVar3;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar3 = (MVLocalPlayer *)
           MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                     (this_00,(this_00->fields).localPlayerActorNumber,(MethodInfo *)0x0);
  if (pMVar3 == (MVLocalPlayer *)0x0) {
    return (MVLocalPlayer *)0x0;
  }
  if (((TypeInfo__MVLocalPlayer->_1).typeHierarchyDepth <= (pMVar3->klass->_1).typeHierarchyDepth)
     && ((pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVLocalPlayer->_1).typeHierarchyDepth - 1] ==
         (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
    return pMVar3;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVLocalPlayer *)(*pcVar2)();
  return pMVar3;
}


/* Int32 get_LocalTimeInMilliSeconds() */

int32_t Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_LocalTimeInMilliSeconds
                  (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ExitGames__Client__Photon__SupportClass);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).lastFrameLocalTimeUpdate;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (iVar1 != iVar2) {
    if ((TypeInfo__ExitGames__Client__Photon__SupportClass->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitGames__Client__Photon__SupportClass);
    }
    iVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::SupportClass::SupportClass_GetTickCount
                      ((MethodInfo *)0x0);
    (this->fields).localTimeInMilliseconds = iVar2;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    (this->fields).lastFrameLocalTimeUpdate = iVar2;
  }
  return (this->fields).localTimeInMilliseconds;
}


/* Int32 get_ServerTimeInMilliSeconds() */

int32_t Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                  (MVNetworkGame *this,MethodInfo *method)

{
  iVar1 = (this->fields).lastFrameServerTimeUpdate;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (iVar1 != iVar2) {
    this_00 = (this->fields)._Peer_k__BackingField;
    if (this_00 == (PhotonPeer *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      iVar2 = (*pcVar3)();
      return iVar2;
    }
    iVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
            PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    (this->fields).serverTimeInMilliseconds = iVar2;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    (this->fields).lastFrameServerTimeUpdate = iVar2;
  }
  return (this->fields).serverTimeInMilliseconds;
}


/* Int32 get_StepTimeStamp() */

int32_t Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_StepTimeStamp
                  (MVNetworkGame *this,MethodInfo *method)

{
  pMVar1 = (this->fields).logicObjectManagerClientWrapper;
  if ((pMVar1 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) &&
     (pMVar2 = (pMVar1->fields).updateEvaluatorStep, pMVar2 != (MVNetworkGame_UpdateEvaluator *)0x0)
     ) {
    return (pMVar2->fields).stepTimestamp;
  }
  puStack_3 = &stack0xfffffffc;
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Single get_TimeZone() */

float Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_TimeZone
                (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).timeZoneMap;
  this = (MVNetworkGame *)CONCAT31(this._1_3_,(this->fields)._Region_k__BackingField);
  if (this_00 != (Dictionary_2_MV_Common_Region_System_Single_ *)0x0) {
    fVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__get_Item
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)this_00,(ByteEnum__Enum)this,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__get_Item_MV__Common__Region_
                      );
    return fVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* MVWorldObjectClientManager get_WorldObjectClientManager() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
          (MVNetworkGame *this,MethodInfo *method)

{
  if ((this->fields).worldNetwork != (WorldNetwork *)0x0) {
    return (MVWorldObjectClientManager *)
           (((this->fields).worldNetwork)->fields)._.worldObjectClientManager;
  }
  return (MVWorldObjectClientManager *)0x0;
}


/* Void networkGameStateListener_OnGameStateChanged(Object, GameStateChangeEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_networkGameStateListener_OnGameStateChanged
               (MVNetworkGame *this,Object *sender,GameStateChangeEventArgs *e,MethodInfo *method)

{
  pMVar1 = (this->fields)._NetworkGameStateListener_k__BackingField;
  if (pMVar1 == (MVNetworkGameStateListener *)0x0) goto code_?;
  iVar2 = (pMVar1->fields).currentGameState;
  if (iVar2 == 1) {
    this_00 = (this->fields).logicObjectManagerClientWrapper;
    if (this_00 == (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) goto code_?;
    MVNetworkGame+LogicObjectManagerClientWrapper::
    MVNetworkGame_LogicObjectManagerClientWrapper_Reset(this_00,(MethodInfo *)0x0);
    pWVar3 = (this->fields).worldNetwork;
    if ((pWVar3 == (WorldNetwork *)0x0) ||
       (this_01 = (pWVar3->fields)._.worldObjectClientManager,
       this_01 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
    MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_ResetWorld
              (this_01,(MethodInfo *)0x0);
    this_02 = (this->fields)._WinningConditionManager_k__BackingField;
    if (this_02 == (WinningConditionManager *)0x0) goto code_?;
    MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
              (this_02,(MethodInfo *)0x0);
  }
  else if (iVar2 == 2) {
    this_03 = (this->fields).playerContainer;
    if ((this_03 == (MVPlayerContainer *)0x0) ||
       (this_05 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_03,(MethodInfo *)0x0),
       this_05 == (MVLocalPlayer *)0x0)) goto code_?;
    MVLocalPlayer::MVLocalPlayer_RoundEnded(this_05,(MethodInfo *)0x0);
  }
  pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar4 != (GameEventManager *)0x0) &&
      (pMVar1 = (this->fields)._NetworkGameStateListener_k__BackingField,
      pMVar1 != (MVNetworkGameStateListener *)0x0)) &&
     (this_04 = (pGVar4->fields).GameState, this_04 != (GameEventManager_GameStateManager *)0x0)) {
    GameEventManager+GameStateManager::GameEventManager_GameStateManager_NotifyGameStateType
              (this_04,(pMVar1->fields).currentGameState,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void remove_ReceivedAccessoryData(Action`1[String]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedAccessoryData
               (MVNetworkGame *this,Action_1_String_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    cRam_? = '\x01';
  }
  source = (this->fields).ReceivedAccessoryData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<System::String>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<System::String>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_String_ *)func_?(&(this->fields).ReceivedAccessoryData,iVar3,source)
    ;
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_ReceivedAvatarBodiesFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).ReceivedAvatarBodiesFromQuery;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
             func_?(&(this->fields).ReceivedAvatarBodiesFromQuery,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_ReceivedItemFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).ReceivedItemFromQuery;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
             func_?(&this->fields,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_ScreenshotUploaded(EventHandler`1[ScreenshotUploadedEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
               (MVNetworkGame *this,EventHandler_1_ScreenshotUploadedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).ScreenshotUploaded;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ScreenshotUploadedEventArgs_ *)
             func_?(&(this->fields).ScreenshotUploaded,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void set_GameStateController(MVGameModeChangeNotifier) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_GameStateController
               (MVNetworkGame *this,MVGameModeChangeNotifier *value,MethodInfo *method)

{
  (this->fields)._GameStateController_k__BackingField = value;
  func_?(&(this->fields)._GameStateController_k__BackingField,value);
  return;
}


/* Void set_PlayerRepository(PlayerRepository) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_PlayerRepository
               (MVNetworkGame *this,PlayerRepository *value,MethodInfo *method)

{
  (this->fields)._PlayerRepository_k__BackingField = value;
  func_?(&(this->fields)._PlayerRepository_k__BackingField,value);
  return;
}


/* Void set_Region(Region) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_Region
               (MVNetworkGame *this,Region__Enum value,MethodInfo *method)

{
  (this->fields)._Region_k__BackingField = (undefined1)value;
  return;
}

