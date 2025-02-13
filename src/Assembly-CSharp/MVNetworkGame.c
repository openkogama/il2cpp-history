
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
       (pDVar4 = (pMVar2->fields)._.worldObjects,
       pDVar4 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar4,(wo_00->fields)._.id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                        );
      if (bVar5 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
        return;
      }
      pDVar4 = (pMVar2->fields)._.worldObjects;
      if (pDVar4 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,(wo_00->fields)._.id,
                   (Object *)wo_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                  );
        this_00 = (pMVar2->fields)._.worldObjectMapping;
        if (this_00 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
          method = (MethodInfo *)0x0;
          wo = wo_00;
          MVWorldObjectClientManager+WorldObjectMapping::
          MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                    (this_00,wo_00,(MethodInfo *)0x0);
          method = (MethodInfo *)0x0;
          wo = wo_00;
          key = mscorlib.dll::System::Object::Object_GetType((Object *)wo_00,(MethodInfo *)0x0);
          this_01 = (pMVar2->fields)._.woCreatedEventSubscribers;
          if (this_01 !=
              (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
            method = (MethodInfo *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,
                       (Object **)&wo,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
            pMVar6 = wo;
            if (wo != (MVWorldObjectClient *)0x0) {
              this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectListAttributeDescription`1[System::Object]::
              UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
              (this_02->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)wo_00;
              func_?();
              if (pMVar6 == (MVWorldObjectClient *)0x0) goto code_?;
              pLStack_3 = (pMVar6->fields)._.objectLinkRefs;
              (*(code *)(pMVar6->fields)._.groupId)();
            }
            if ((wo_00->fields)._.groupId == -1) {
              if (((wo_00->klass->_1).naturalAligment < (TypeInfo__MVGroup->_1).naturalAligment) ||
                 ((MVGroup__Class *)
                  (wo_00->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] !=
                  TypeInfo__MVGroup)) {
                func_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (pMVar2->fields)._.rootGroupId = (wo_00->fields)._.id;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  uVar8 = func_?(&pLStack_3);
  func_?(uVar8);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AllModesSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_AllModesSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
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
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   ((String *)pMVar1,
                    MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                   );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
    if (iRam_? == 0) goto code_?;
    a = *(Delegate **)(iRam_? + 0x14);
    this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)0x0,
               MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = (MVLocalPlayer *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_00,(MethodInfo *)0x0);
    if (unaff_ESI == (MVLocalPlayer *)0x0) {
code_?:
      func_?();
      pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x23,(MethodInfo *)0x0);
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar5 = (int *)func_?();
      iVar6 = *piVar5;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (iVar6 != (iVar6 / 1000) * 1000) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_stepTimestamp_is_not_correctly_i,(MethodInfo *)0x0);
      }
      this_01 = (LogicObjectManager *)func_?();
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager__ctor
                (this_01,iVar6,0,(MethodInfo *)0x0);
      _UNK_? = this_01;
      func_?();
      unaff_ESI = (MVLocalPlayer *)func_?();
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper__ctor
                ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI,
                 (MVNetworkGame *)&UNK_?,0,(MethodInfo *)0x0);
      _UNK_? = unaff_ESI;
      func_?();
      pSVar7 = (String *)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0xcf,(MethodInfo *)0x0);
      value = (String *)0x0;
      if (pSVar7 == (String *)0x0) {
code_?:
        unaff_ESI = (MVLocalPlayer *)
                    Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                    JsonConvert_DeserializeObject_2
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
      if (pSVar7->klass == TypeInfo__System__String) {
        value = pSVar7;
      }
      if (value != (String *)0x0) goto code_?;
      goto code_?;
    }
    iVar6 = func_?();
    if (iVar6 != 0) {
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pSVar2 = extraout_ECX;
code_?:
  func_?(unaff_ESI,pSVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar1 != (IEditModeUI *)0x0) {
    pIVar2 = pIVar1;
    iVar3 = func_?(4,TypeInfo__IEditModeUI,pIVar1);
    if (iVar3 == 0) {
      this_02 = (PlayerShopInventoryRepository *)
                func_?(
                               TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                               );
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository__ctor(this_02,(MethodInfo *)0x0);
      func_?(5,TypeInfo__IEditModeUI,pIVar1,this_02);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar1 != (IEditModeUI *)0x0) {
      iVar3 = func_?(4,TypeInfo__IEditModeUI,pIVar1);
      if (iVar3 != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__ClientShopRepository,unaff_EDI);
          func_?(&TypeInfo__PlayerInventoryRepository);
          cRam_? = '\x01';
        }
        if (*(int *)(unaff_retaddr + 0x20) == 0) {
          this_00 = (PlayerInventoryRepository *)
                    func_?(TypeInfo__PlayerInventoryRepository,pIVar2,unaff_ESI);
          PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
          *(PlayerInventoryRepository **)(unaff_retaddr + 0x20) = this_00;
          func_?(unaff_retaddr + 0x20,this_00);
        }
        if (*(int *)(unaff_retaddr + 0x1c) == 0) {
          this_01 = (ClientShopRepository *)
                    func_?(TypeInfo__ClientShopRepository,pIVar2,unaff_ESI);
          ClientShopRepository::ClientShopRepository__ctor(this_01,(MethodInfo *)0x0);
          *(ClientShopRepository **)(unaff_retaddr + 0x1c) = this_01;
          func_?(unaff_retaddr + 0x1c,this_01);
        }
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Cleanup
               (MVNetworkGame *this,MethodInfo *method)

{
  if (((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
     (pWVar1 = (this->fields).worldNetwork,
     (pWVar1->fields)._.worldObjectClientManager == (MVWorldObjectClientManagerNetwork *)0x0)) {
code_?:
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
  MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Cleanup
            ((pWVar1->fields)._.worldObjectClientManager,(MethodInfo *)0x0);
  pLVar2 = (this->fields)._LogicObjectManager_k__BackingField;
  if (pLVar2 != (LogicObjectManagerClient *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pLVar2->fields)._.logicWorldObjects;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
                );
      goto code_?;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if (pWVar1 == (WorldNetwork *)0x0) {
code_?:
    func_?();
  }
  else {
    a = (pWVar1->fields)._.InitializedGameQueryData;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (pWVar1->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
code_?:
      func_?();
      pMVar3 = (this->fields).gameDataQuery;
      pWVar1 = (this->fields).worldNetwork;
      if (pMVar3 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
        queryData = MVNetworkGame+GameDataQueryManager+GameDataQuery::
                    MVNetworkGame_GameDataQueryManager_GameDataQuery_GetBytePacker
                              (pMVar3,(MethodInfo *)0x0);
        pMVar3 = (this->fields).gameDataQuery;
        if ((pMVar3 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
           (pWVar1 != (WorldNetwork *)0x0)) {
          WorldNetwork::WorldNetwork_CreateGameWorldFromQueryData
                    (pWVar1,queryData,(pMVar3->fields).instigatorActorNumber,(MethodInfo *)0x0);
          (this->fields).gameDataQuery = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0;
          func_?(&(this->fields).gameDataQuery,0);
          return;
        }
      }
      goto code_?;
    }
    pvVar4 = (void *)func_?();
    if (pvVar4 == (void *)0x0) goto code_?;
    (pDVar2->fields).method = pvVar4;
    iVar5 = func_?();
    if (iVar5 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVLocalPlayer CreateLocalPlayer(Int32, Int32, UserProfileData) */

MVLocalPlayer *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreateLocalPlayer
          (MVNetworkGame *this,int32_t actorNr,int32_t planetOwnershipTypeID,
          UserProfileData *userProfileData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    func_?(&TypeInfo__MVLocalPlayerRegistered);
    func_?(&TypeInfo__MVLocalPlayerTourist);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 != MVGameMode__Enum_Edit) {
      MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar2 != MVGameMode__Enum_CharacterEditor) {
        MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar2 != MVGameMode__Enum_Play) goto code_?;
        iVar3 = func_?(0);
        if (iVar3 != 0) {
          iVar4 = *(int32_t *)(iVar3 + 0xc);
          iVar3 = func_?(0);
          if (iVar3 != 0) {
            pSVar5 = *(String **)(iVar3 + 0x18);
            pMVar6 = (MVLocalPlayerTourist *)func_?(TypeInfo__MVLocalPlayerRegistered);
            MVLocalPlayerTourist::MVLocalPlayerTourist__ctor
                      (pMVar6,actorNr,iVar4,pSVar5,planetOwnershipTypeID,userProfileData,
                       (MethodInfo *)0x0);
            return (MVLocalPlayer *)pMVar6;
          }
        }
        goto code_?;
      }
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar7 != (GameSessionData *)0x0) {
      iVar4 = (pGVar7->fields).profileID;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar7 != (GameSessionData *)0x0) {
        pSVar5 = (pGVar7->fields).language;
        this_00 = (MVLocalPlayerBuilder *)func_?(TypeInfo__MVLocalPlayerBuilder);
        MVLocalPlayerBuilder::MVLocalPlayerBuilder__ctor
                  (this_00,actorNr,iVar4,pSVar5,planetOwnershipTypeID,userProfileData,
                   (MethodInfo *)0x0);
        return (MVLocalPlayer *)this_00;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar7 != (GameSessionData *)0x0) {
      iVar4 = (pGVar7->fields).profileID;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar7 != (GameSessionData *)0x0) {
        pSVar5 = (pGVar7->fields).language;
        pMVar6 = (MVLocalPlayerTourist *)func_?(TypeInfo__MVLocalPlayerTourist);
        MVLocalPlayerTourist::MVLocalPlayerTourist__ctor
                  (pMVar6,actorNr,iVar4,pSVar5,planetOwnershipTypeID,userProfileData,
                   (MethodInfo *)0x0);
        return (MVLocalPlayer *)pMVar6;
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar8 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar8);
  method_00 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_Unknown_game_mode);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar5,method_00);
  func_?(&
                  MethodInfo__MVNetworkGame__CreateLocalPlayer_int__int__MV__WorldObject__MetaData__UserProfileData_
                 );
  func_?();
  pcVar9 = (code *)swi(3);
  pMVar10 = (MVLocalPlayer *)(*pcVar9)();
  return pMVar10;
}


/* Void CreatePlayersFromUserList(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreatePlayersFromUserList
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *userList,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_UserList_is_null,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  playerList = (List_1_MVPlayer_ *)
               func_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)playerList,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)userList,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                      );
  if (this_01 !=
      (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&stack0xffffff9c,
               (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
              );
    method_00 = (MVPlayer *)0x0;
    uStack_1 = 1;
    while (pMVar4 = 
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
          , bVar5 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                              ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                *)&stack0xffffff8c,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), bVar5 != 0) {
      if (pMVar4 == (MethodInfo *)0x0) goto code_?;
      if (*(Il2CppClass **)(pMVar4->methodPointer + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar6 = (int *)func_?();
      iVar7 = *piVar6;
      method_00 = (MVPlayer *)(this->fields).playerContainer;
      if ((method_00 == (MVPlayer *)0x0) ||
         (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                             ((MVPlayerContainer *)method_00,(MethodInfo *)0x0),
         pMVar8 == (MVLocalPlayer *)0x0)) goto code_?;
      if (iVar7 != (pMVar8->fields)._._ActorNr_k__BackingField) {
        pOVar9 = (Object *)func_?();
        TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)userList,
                           pOVar9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar10.m_Index == 0) goto code_?;
        this_02 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
        if (this_02 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (this_02,0xb,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        if (pOVar9 == (Object *)0x0) goto code_?;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?();
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (this_02,0x59,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        if (pOVar9 == (Object *)0x0) goto code_?;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?();
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (this_02,0xa9,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        if (pOVar9 == (Object *)0x0) goto code_?;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?();
        pSStack_11 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (this_02,0x9a,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               );
        if (pSStack_11 != (String *)0x0) {
          pSVar12 = (String *)0x0;
          if (pSStack_11->klass == TypeInfo__System__String) {
            pSVar12 = pSStack_11;
          }
          pSStack_11 = pSVar12;
          if (pSVar12 == (String *)0x0) goto code_?;
        }
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (this_02,0xd2,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        if (pOVar9 == (Object *)0x0) goto code_?;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        func_?();
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (this_02,0x44,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        if (pOVar9 == (Object *)0x0) goto code_?;
        if ((pOVar9->klass->_0).element_class !=
            (TypeInfo__MV__Common__PlayerGameState->_0).element_class) goto code_?;
        puVar13 = (uint8_t *)func_?();
        uVar14 = *puVar13;
        PStack_15 = CONCAT31(PStack_15._1_3_,uVar14);
        pSVar12 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (this_02,0xdf,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar16 = (String *)0x0;
        if (pSVar12 != (String *)0x0) {
          if (pSVar12->klass == TypeInfo__System__String) {
            pSVar16 = pSVar12;
          }
          if (pSVar16 == (String *)0x0) goto code_?;
        }
        Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                  (pSVar16,
                   MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                  );
        iVar17 = 0xe0;
        this_05 = this_02;
        pMVar4 = 
        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
        ;
        pSVar16 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (this_02,0xe0,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pSVar12 = (String *)0x0;
        if (pSVar16 != (String *)0x0) {
          if (pSVar16->klass == TypeInfo__System__String) {
            pSVar12 = pSVar16;
          }
          if (pSVar12 == (String *)0x0) goto code_?;
        }
        Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                  (pSVar12,
                   MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                  );
        userProfileData = (UserProfileData *)0xbc;
        level = &UNK_?;
        pMVar18 = 
        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
        ;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (this_02,0xbc,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        bVar5 = (bool)pMVar18;
        if (pOVar9 == (Object *)0x0) goto code_?;
        if ((pOVar9->klass->_0).element_class !=
            (TypeInfo__MV__Common__BuildTarget->_0).element_class) goto code_?;
        puVar19 = (undefined1 *)func_?();
        buildTarget = CONCAT31((int3)((uint)this_02 >> 8),*puVar19);
        this_03 = (MVPlayer *)func_?();
        MVPlayer::MVPlayer__ctor_1
                  (this_03,(int32_t)pMVar4,0xADDR,(int32_t)level,pSStack_11,buildTarget,
                   userProfileData,bVar5,uVar14 == 3,(PlayerPlanetDataRemote *)&UNK_?,
                   (MethodInfo *)0x0);
        if (this_03 == (MVPlayer *)0x0) goto code_?;
        (this_03->fields)._Team_k__BackingField = iVar17;
        pSVar16 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (this_05,0xf5,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pSVar12 = (String *)0x0;
        if (pSVar16 != (String *)0x0) {
          if (pSVar16->klass == TypeInfo__System__String) {
            pSVar12 = pSVar16;
          }
          if (pSVar12 == (String *)0x0) goto code_?;
        }
        spawnRolesRuntimeData =
             (SpawnRolesRuntimeData *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (pSVar12,
                        MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                       );
        this_04 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_04,(MethodInfo *)0x0);
        MVPlayer::MVPlayer_SetupSpawnRoleManager
                  (this_03,(ISpawnRoleChangeHandler *)this_04,spawnRolesRuntimeData,
                   (MethodInfo *)0x0);
        if (playerList == (List_1_MVPlayer_ *)0x0) goto code_?;
        method_00 = this_03;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)playerList,(Object *)this_03,
                   MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
        if ((this_03->fields).playerState != uVar14) {
          MVPlayer::MVPlayer_set_PlayerState(this_03,PStack_15,(MethodInfo *)0x0);
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff8c,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)method_00);
    uStack_1 = 0xffffffff;
    this_00 = (this->fields).playerContainer;
    if (this_00 != (MVPlayerContainer *)0x0) {
      MVPlayerContainer::MVPlayerContainer_Add_1(this_00,playerList,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
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
  this_00 = (MVNetworkGame_EventHandling *)func_?(TypeInfo__MVNetworkGame__EventHandling);
  MVNetworkGame+EventHandling::MVNetworkGame_EventHandling__ctor(this_00,this,(MethodInfo *)0x0);
  (this->fields).eventHandling = this_00;
  func_?(&(this->fields).eventHandling,this_00);
  this_01 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__MVNetworkGame__OperationResponseHandling);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)this,(MethodInfo *)0x0);
  (this->fields).operationResponseHandling = (MVNetworkGame_OperationResponseHandling *)this_01;
  func_?(&(this->fields).operationResponseHandling,this_01);
  this_02 = (MVNetworkGame_StatusChangedHandling *)
            func_?(TypeInfo__MVNetworkGame__StatusChangedHandling);
  MVNetworkGame+StatusChangedHandling::MVNetworkGame_StatusChangedHandling__ctor
            (this_02,this,(MethodInfo *)0x0);
  (this->fields).statusChangedHandling = this_02;
  ppMStack1 = &(this->fields).statusChangedHandling;
  pMStack2 = this_02;
  func_?();
  pMStack3 = TypeInfo__MVNetworkGame__OperationRequests;
  this_03 = (MVNetworkGame_OperationRequests *)func_?();
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests__ctor
            (this_03,this,(MethodInfo *)0x0);
  (this->fields).operationRequests = this_03;
  func_?();
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)debug,(MethodInfo *)0x0)
      ;
      return;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)debug,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this,StringLiteral_GenerateTexture,(MethodInfo *)0x0);
  if (this != (GameObject *)0x0) {
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
                  (&VStack_3,pTVar2,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)seatBase,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          VStack_3.z = (float)&UNK_?;
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                               ((Quaternion *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
            fVar5 = pQVar4->x;
            VStack_3.x = pQVar4->y;
            VStack_3.y = pQVar4->z;
            VStack_3.z = pQVar4->w;
            pDVar6 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
            uVar7 = CONCAT44(pDVar6,&UNK_?);
            this = (MVNetworkGame *)
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            ;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object___ctor
                      (pDVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            fVar8 = (float)uVar7;
            fVar9 = (float)(int)((ulonglong)uVar7 >> 0x20);
            position = (Vector3)CONCAT84(uVar10,fVar8);
            MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
                      (position,pDVar6,(MethodInfo *)0x0);
            rotation.y = VStack_3.x;
            rotation.x = fVar5;
            rotation.z = VStack_3.y;
            rotation.w = VStack_3.z;
            MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
                      (rotation,pDVar6,(MethodInfo *)0x0);
            pOVar11 = (Object *)func_?();
            if (pDVar6 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__Add
                        (pDVar6,0x8d,pOVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              pOVar11 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__Add
                        (pDVar6,0x8e,pOVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              return pDVar6;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pDVar6 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar12)();
  return pDVar6;
}


/* IWinningCondition GetWinningCondition() */

IWinningCondition *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_GetWinningCondition
          (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
      return (IWinningCondition *)0x0;
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetForfilledWinningConditions(this_00,(MethodInfo *)0x0);
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_01->fields)._size < 2) {
        pMVar1 = (MVNetworkGame *)(this_01->fields)._size;
        message = StringLiteral_No_winning_condition_found_even_;
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (message = StringLiteral_Only_1_winning_condition_current, pMVar1 != (MVNetworkGame *)0x1
           )) {
          this = pMVar1;
          unmatchedValue = (Object *)func_?(TypeInfo__System__Int32,&this);
          <PrivateImplementationDetails>::
          _PrivateImplementationDetails__ThrowSwitchExpressionException
                    (unmatchedValue,(MethodInfo *)0x0);
          message = (String *)0x0;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return (IWinningCondition *)0x0;
      }
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_01,0,
                         MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                        );
      return (IWinningCondition *)RVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IWinningCondition *)(*pcVar3)();
  return pIVar4;
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
  if ((this->fields).gameDataQuery == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
    pMVar1 = (this->fields).playerContainer;
    if (pMVar1 == (MVPlayerContainer *)0x0) goto code_?;
    pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    iVar3 = (pMVar2->fields)._._ActorNr_k__BackingField;
    pMVar4 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
             func_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
              ((DefaultBinder_BinderState *)pMVar4,(Int32__Array *)bytePacker,iVar3,(bool)queryType,
               (MethodInfo *)0x0);
    (this->fields).gameDataQuery = pMVar4;
    func_?(&(this->fields).gameDataQuery,pMVar4);
  }
  else {
    pMVar4 = (this->fields).gameDataQuery;
    pMVar1 = (this->fields).playerContainer;
    if (pMVar1 == (MVPlayerContainer *)0x0) goto code_?;
    pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    iVar3 = (pMVar2->fields)._._ActorNr_k__BackingField;
    gameDataQuery =
         (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
         func_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    mscorlib.dll::System::DefaultBinder+BinderState::DefaultBinder_BinderState__ctor
              ((DefaultBinder_BinderState *)gameDataQuery,(Int32__Array *)bytePacker,iVar3,
               (bool)queryType,(MethodInfo *)0x0);
    MVNetworkGame+GameDataQueryManager+GameDataQuery::
    MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
              (pMVar4,gameDataQuery,(MethodInfo *)0x0);
  }
  if (dataLeft == 0) {
    pMVar5 = (this->fields).eventHandling;
    if (pMVar5 == (MVNetworkGame_EventHandling *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pMVar5->fields).cacheEvents = 1;
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0)
    ;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__MVNetworkGame__CreateGame__,(MethodInfo *)0x0);
    coroutine = WaitForFrames::WaitForFrames_Frames(3,(UnityAction *)this_00,(MethodInfo *)0x0);
    Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
  }
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
  WorldNetwork::WorldNetwork__ctor(pWVar1,(MethodInfo *)0x0);
  (this->fields).worldNetwork = pWVar1;
  func_?(&(this->fields).worldNetwork,pWVar1);
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    worldObjectClientManagerNetwork = (pWVar1->fields)._.worldObjectClientManager;
    this_00 = (MVLocalObjectController *)func_?(TypeInfo__MVLocalObjectController);
    MVLocalObjectController::MVLocalObjectController__ctor
              (this_00,worldObjectClientManagerNetwork,(MethodInfo *)0x0);
    (this->fields)._PlayerController_k__BackingField = this_00;
    func_?(&(this->fields)._PlayerController_k__BackingField,this_00);
    this_01 = (MVMaterialRepository *)func_?(TypeInfo__MVMaterialRepository);
    MVMaterialRepository::MVMaterialRepository__ctor(this_01,(MethodInfo *)0x0);
    (this->fields)._MaterialRepository_k__BackingField = this_01;
    func_?(&(this->fields)._MaterialRepository_k__BackingField,this_01);
    this_02 = (PlayerRepository *)func_?(TypeInfo__PlayerRepository);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    ARepository::ARepository__ctor((ARepository *)this_02,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
              );
    (this_02->fields).playerInventory = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)pDVar2;
    func_?();
    (this->fields)._PlayerRepository_k__BackingField = this_02;
    func_?(&(this->fields)._PlayerRepository_k__BackingField,this_02);
    this_03 = (ShopRepository *)func_?(TypeInfo__ShopRepository);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    ARepository::ARepository__ctor((ARepository *)this_03,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
              );
    (this_03->fields).shopInventory = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)pDVar2;
    func_?();
    this_04 = (List_1_System_Int32_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this_03->fields).ItemCategoriesInShop = this_04;
    func_?();
    (this->fields)._ShopRepository_k__BackingField = this_03;
    func_?(&(this->fields)._ShopRepository_k__BackingField);
    this_05 = (GameTierShopRepository *)func_?(TypeInfo__GameTierShopRepository);
    GameTierShopRepository::GameTierShopRepository__ctor(this_05,(MethodInfo *)0x0);
    (this->fields)._GameTierShopRepository_k__BackingField = this_05;
    func_?();
    this_06 = (AvatarRepository *)func_?();
    AvatarRepository::AvatarRepository__ctor(this_06,(MethodInfo *)0x0);
    (this->fields)._AvatarShopRepository_k__BackingField = this_06;
    func_?();
    this_07 = (FriendList *)func_?();
    FriendList::FriendList__ctor(this_07,(MethodInfo *)0x0);
    (this->fields)._Friends_k__BackingField = this_07;
    func_?();
    this_08 = (MVGameModeChangeNotifier *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    (this_08->fields)._currentState = 1;
    this_09 = (List_1_IGameStateControllerSubscriber_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_09,
               MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__
              );
    (this_08->fields).UpdateList = this_09;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_08,ExceptionArgument__Enum_obj,
               (MethodInfo *)&(this_08->fields).UpdateList);
    UVar3 = MVGameModeChangeNotifier::MVGameModeChangeNotifier_GetPresentState
                      (this_08,(MethodInfo *)0x0);
    (this_08->fields)._currentState = UVar3;
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this_08,
               UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
    (this->fields)._GameStateController_k__BackingField = this_08;
    func_?();
    pMVar4 = (this->fields).teamManager;
    pGVar5 = (this->fields).gameStatCounterManager;
    pUVar6 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar6,(Object *)pGVar5,
               MethodInfo__GameStatCounterManager__OnTeamAdded_System__Object__MV__WorldObject__TeamEventArgs_
               ,(MethodInfo *)0x0);
    if (pMVar4 != (MVTeamManager *)0x0) {
      MVTeamManager::MVTeamManager_add_OnTeamAdded
                (pMVar4,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar6,(MethodInfo *)0x0);
      pMVar4 = (this->fields).teamManager;
      pGVar5 = (this->fields).gameStatCounterManager;
      pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar6,(Object *)pGVar5,
                 MethodInfo__GameStatCounterManager__OnTeamRemoved_System__Object__MV__WorldObject__TeamEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar4 != (MVTeamManager *)0x0) {
        MVTeamManager::MVTeamManager_add_OnTeamRemoved
                  (pMVar4,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar6,(MethodInfo *)0x0);
        pWVar7 = (WinningConditionManager *)func_?(TypeInfo__WinningConditionManagerClient)
        ;
        ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pWVar7,
                   (MethodInfo *)0x0);
        (this->fields)._WinningConditionManager_k__BackingField = pWVar7;
        func_?(&(this->fields)._WinningConditionManager_k__BackingField,pWVar7);
        pWVar7 = (this->fields)._WinningConditionManager_k__BackingField;
        if (pWVar7 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Initialize
                    (pWVar7,(this->fields).gameStatCounterManager,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    pPVar2 = (this->fields)._Peer_k__BackingField;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if ((pGVar1 != (GameSessionData *)0x0) && (pPVar2 != (PhotonPeer *)0x0)) {
      bVar3 = (*(code *)(pPVar2->klass->vtable).Connect.method)
                        (pPVar2,(pGVar1->fields).serverIP,StringLiteral_MVGameServer,
                         (pPVar2->klass->vtable).Connect_1.methodPtr);
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
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)object,MethodInfo__MVNetworkGame__OperationRequests__Syncronize__,
             (MethodInfo *)0x0);
  if (this_00 == (LevelLoader *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (MVar1 == MVGameMode__Enum_Edit) {
    LevelLoader::LevelLoader_LoadScenes_1
              (this_00,ScenesForMode__Enum_EditMode,(Action *)this_01,(MethodInfo *)0x0);
    return;
  }
  if (MVar1 != MVGameMode__Enum_Play) {
    if (MVar1 == MVGameMode__Enum_CharacterEditor) {
      LevelLoader::LevelLoader_LoadScenes_1
                (this_00,ScenesForMode__Enum_AvatarEditMode,(Action *)this_01,(MethodInfo *)0x0);
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
                    MethodInfo__MVNetworkGame____c__DisplayClass258_0___OnAddItemToInventory_b__0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVNetworkGame____c__DisplayClass258_0);
    func_?(&StringLiteral_Failed_to_add_to_inventory__This);
    cRam_? = '\x01';
  }
  this_02 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__MVNetworkGame____c__DisplayClass258_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_02,(MethodInfo *)0x0);
  if (this_02 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_02->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)returnValues;
    func_?(&this_02->fields,returnValues);
    if (returnCode == -1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_add_to_inventory__This,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
      if (pIVar1 != (IEditModeUI *)0x0) {
        this_06 = (MultiColumnController *)func_?(4,TypeInfo__IEditModeUI,pIVar1);
        if (this_06 != (MultiColumnController *)0x0) {
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::MultiColumnController::
          MultiColumnController_OnColumnSortingChanged(this_06,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pDVar2 = (Dictionary_2_System_Byte_System_Object_ *)
               (this_02->fields)._._defaultValue_k__BackingField;
      if (pDVar2 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (pDVar2,0x16,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar3);
        if (pOVar3 != (Object *)0x0) {
          if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar5 = (int32_t *)func_?(pOVar3);
          pDVar2 = (Dictionary_2_System_Byte_System_Object_ *)
                   (this_02->fields)._._defaultValue_k__BackingField;
          id = *piVar5;
          this_03 = (InventoryItem *)func_?(TypeInfo__InventoryItem);
          InventoryItem::InventoryItem__ctor_1(this_03,pDVar2,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
          if (pIVar1 != (IEditModeUI *)0x0) {
            this_04 = (PlayerShopInventoryRepository *)
                      func_?(4,TypeInfo__IEditModeUI,pIVar1);
            if (this_04 != (PlayerShopInventoryRepository *)0x0) {
              UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_AddItemToInventory(this_04,this_03,(MethodInfo *)0x0);
              if (this_03 != (InventoryItem *)0x0) {
                this_00 = (this->fields).itemBusinessLogic;
                if (this_00 != (MVItemBusinessLogic *)0x0) {
                  MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                            (this_00,(this_03->fields).itemID,(this_03->fields).resellable,
                             (this_03->fields).itemCategoryID,(this_03->fields).itemTypeID,
                             (this_03->fields).name,(MethodInfo *)0x0);
                  this_05 = (UnityAction_1_System_Object_ *)
                            func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            (this_05,(Object *)this_02,
                             MethodInfo__MVNetworkGame____c__DisplayClass258_0___OnAddItemToInventory_b__0_MVWorldObjectClient_
                             ,(MethodInfo *)0x0);
                  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
                     (this_01 = (MVWorldObjectClientManager *)
                                (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
                     this_01 != (MVWorldObjectClientManager *)0x0)) {
                    pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (this_01,id,(MethodInfo *)0x0);
                    if (pMVar6 != (MVWorldObject *)0x0) {
                      pMVar7 = pMVar6->klass;
                      uVar8._0_2_ = pMVar7[1]._1.field_count;
                      uVar8._2_2_ = pMVar7[1]._1.event_count;
                      (**(code **)&pMVar7[1]._1.method_count)(pMVar6,this_05,uVar8);
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
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_01 = (Link *)func_?(TypeInfo__MV__WorldObject__Link);
  MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(this_01,(MethodInfo *)0x0);
  if (this_01 != (Link *)0x0) {
    (this_01->fields).inputWOID = toID;
    (this_01->fields).outputWOID = fromID;
    (this_01->fields).id = linkID;
    this_00 = (this->fields).worldNetwork;
    if (this_00 != (WorldNetwork *)0x0) {
      WorldNetwork::WorldNetwork_AddLink_1(this_00,this_01,(MethodInfo *)0x0);
      pLVar1 = (this->fields)._LogicObjectManager_k__BackingField;
      worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pLVar1 != (LogicObjectManagerClient *)0x0) {
        IStack_2.m_value = (int32_t)&UNK_?;
        IStack_2.m_value =
             MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                       ((this_01->fields).inputWOID,(IWorldObjectManager *)worldObjectManager,
                        (MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
        IStack_2.m_value = (int32_t)&UNK_?;
        pSVar3 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_reset_count_,pSVar3,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(this_01,(MethodInfo *)0x0);
  if (this_01 != (ObjectLink *)0x0) {
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
    cRam_? = '\x01';
  }
  if ((this->fields).OnAddWorldObjectToInventoryCallbackDev != (UnityAction_1_System_String_ *)0x0)
  {
    if (returnCode == 0) {
      str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&itemID,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_3
                (StringLiteral_Successfully_added_model_to_your,str1,(MethodInfo *)0x0);
    }
    pUVar1 = (this->fields).OnAddWorldObjectToInventoryCallbackDev;
    if (pUVar1 == (UnityAction_1_System_String_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pUVar1->fields)._._.invoke_impl)();
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
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)outData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_7,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
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
                Object,UnityEngine::UIElements::TextureId]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?();
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_OriginalId);
    cRam_? = '\x01';
  }
  if (eventData == (EventData *)0x0) {
code_?:
    func_?();
  }
  else {
    unaff_ESI = (MVWorldObject *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x48,(MethodInfo *)0x0);
    unaff_EBX = (MVNetworkGame *)TypeInfo__System__Int32;
    if (unaff_ESI == (MVWorldObject *)0x0) goto code_?;
    iVar1 = func_?(unaff_ESI,TypeInfo__System__Int32);
    pIVar2 = TypeInfo__System__Int32;
    if (iVar1 == 0) goto code_?;
    iVar1 = func_?(unaff_ESI,TypeInfo__System__Int32);
    unaff_EBX = (MVNetworkGame *)pIVar2;
    if (iVar1 == 0) goto code_?;
    if (*(int *)(iVar1 + 0xc) != 0) {
      iStack_3 = *(int32_t *)(iVar1 + 0x10);
      unaff_EBX = this;
      if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
         (this_00 = (MVWorldObjectClientManager *)
                    (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         this_00 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_00,iStack_3,(MethodInfo *)0x0);
        bVar4 = true;
        if (unaff_ESI != (MVWorldObject *)0x0) {
          pDStack_5 = (Dictionary_2_System_Object_System_Object_ *)
                      (*(code *)(unaff_ESI->klass->vtable).get_RunTimeData.method)
                                (unaff_ESI,(unaff_ESI->klass->vtable).set_RunTimeData.methodPtr);
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          bVar6 = Extensions::Extensions_ContainsObscuredKey
                            (pDStack_5,StringLiteral_OriginalId,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            pDStack_5 = (Dictionary_2_System_Object_System_Object_ *)
                        (*(code *)(unaff_ESI->klass->vtable).get_RunTimeData.method)
                                  (unaff_ESI,(unaff_ESI->klass->vtable).set_RunTimeData.methodPtr);
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            }
            pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_op_Implicit((ObscuredInt *)auStack_8,iStack_3,(MethodInfo *)0x0)
            ;
            auStack_8._0_4_ = pOVar7->currentCryptoKey;
            auStack_8._4_4_ = pOVar7->hiddenValue;
            fStack_9 = (float)pOVar7->fakeValue;
            fStack_10 = *(float *)&pOVar7->inited;
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Extensions);
            }
            value.hiddenValue = auStack_8._4_4_;
            value.currentCryptoKey = auStack_8._0_4_;
            value.fakeValue = (int32_t)fStack_9;
            value._12_4_ = fStack_10;
            Extensions::Extensions_SetObscuredType_2
                      (pDStack_5,StringLiteral_OriginalId,value,
                       void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                      );
          }
          else {
            bVar4 = false;
          }
          pMVar11 = MVNetworkGame_OnCloneWorldObjectTree(this,eventData,(MethodInfo *)0x0);
          pVVar12 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                             ((Vector3 *)(auStack_8 + 4),(eventData->fields).Parameters,
                              (MethodInfo *)0x0);
          unaff_EBX = (MVNetworkGame *)0x0;
          if (pMVar11 != (MVWorldObjectClient *)0x0) {
            uVar13._0_4_ = pVVar12->x;
            uVar13._4_4_ = pVVar12->y;
            (*(code *)(pMVar11->klass->vtable).set_Position.method)
                      (pMVar11,uVar13,pVVar12->z,(pMVar11->klass->vtable).get_Rotation.methodPtr);
            MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                      ((Quaternion *)auStack_8,(eventData->fields).Parameters,(MethodInfo *)0x0);
            (*(code *)(pMVar11->klass->vtable).set_Rotation.method)();
            if (bVar4) {
              hashtable = (Dictionary_2_System_Object_System_Object_ *)
                          (*(code *)(unaff_ESI->klass->vtable).get_RunTimeData.method)
                                    (unaff_ESI,(unaff_ESI->klass->vtable).set_RunTimeData.methodPtr)
              ;
              if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Extensions);
              }
              Extensions::Extensions_RemoveObscuredKey
                        (hashtable,StringLiteral_OriginalId,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,unaff_EBX);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      str1 = mscorlib.dll::System::Boolean::Boolean_ToString
                       ((Boolean *)&stack0xfffffff8,(MethodInfo *)0x0);
      unaff_EBX = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_CloneToRootGroup_,str1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
          pMVar4 = WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                             (this_00,(int32_t)eventData,*piVar3,0,*(int32_t *)(iVar2 + 0x10),
                              *(int32_t *)(iVar2 + 0x14),(int32_t)eventData,(int32_t)eventData,
                              (MethodInfo *)0x0);
          return pMVar4;
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
  pcVar5 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar5)();
  return pMVar4;
}


/* MVWorldObjectClient OnCloneWorldObjectTreePosition(EventData) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
          (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  pMVar1 = MVNetworkGame_OnCloneWorldObjectTree(this,eventData,(MethodInfo *)0x0);
  if (eventData != (EventData *)0x0) {
    uStack_2 = uStack_2 & 0xffffffff00000000;
    pVVar3 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                       ((Vector3 *)((int)register0x00000010 + -0x10),(eventData->fields).Parameters,
                        (MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      uStack_2._0_4_ = pVVar3->x;
      uStack_2._4_4_ = pVVar3->y;
      VStack_4.y = pVVar3->z;
      VStack_4.z = (float)(pMVar1->klass->vtable).get_Rotation.methodPtr;
      (*(code *)(pMVar1->klass->vtable).set_Position.method)(pMVar1);
      pQVar5 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                         ((Quaternion *)&stack0xffffffec,(eventData->fields).Parameters,
                          (MethodInfo *)0x0);
      VStack_4.y = pQVar5->x;
      VStack_4.z = pQVar5->y;
      uStack_2._4_4_ = (float)pMVar1;
      uStack_2._0_4_ = (float)&UNK_?;
      (*(code *)(pMVar1->klass->vtable).set_Rotation.method)();
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
      func_?(pOVar1);
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x16,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar3 = (int32_t *)func_?(pOVar1);
        if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
           (this_00 = (MVWorldObjectClientManager *)
                      (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
           this_00 != (MVWorldObjectClientManager *)0x0)) {
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_00,*piVar3,(MethodInfo *)0x0);
          if (pMVar4 != (MVWorldObject *)0x0) {
            if (((TypeInfo__MVCollectible->_1).naturalAligment <=
                 (pMVar4->klass->_1).naturalAligment) &&
               ((MVCollectible__Class *)
                (pMVar4->klass->_1).typeHierarchy[(TypeInfo__MVCollectible->_1).naturalAligment - 1]
                == TypeInfo__MVCollectible)) {
              (*(code *)pMVar4->klass[2]._1.static_fields_size)();
              return;
            }
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Attempt_to_call_WO_that_is_not_c,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  this_00 = (MVNetworkGame *)(this->fields).eventHandling;
  if (this_00 != (MVNetworkGame *)0x0) {
    uStack_1 = 0xffffffff;
    puStack_2 = &DAT_?;
    uStack_3 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &uStack_3;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    if (*(bool *)&(this_00->fields).ReceivedItemFromQuery == 0) {
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (eventData != (EventData *)0x0) {
        this = this_00;
        if (MVar4 != MVJoinState__Enum_Playing) {
          this._1_3_ = (undefined3)((uint)this_00 >> 8);
          this = (MVNetworkGame *)CONCAT31(this._1_3_,(eventData->fields).Code);
          if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
                    ((MVEventCodes__Enum)this,(MethodInfo *)0x0);
        }
        this = (MVNetworkGame *)CONCAT31(this._1_3_,(eventData->fields).Code);
        uStack_1 = 0;
        MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
                  ((MVNetworkGame_EventHandling *)this_00,(MVEventCodes__Enum)this,eventData,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    else {
      this_01 = (this_00->fields).ReceivedAvatarBodiesFromQuery;
      if (this_01 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)this_01,(Object *)eventData,
                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                  );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this = (MVNetworkGame *)(this->fields)._Friends_k__BackingField;
  if (this != (MVNetworkGame *)0x0) {
    pAVar1 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)*unaff_FS_OFFSET;
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
    DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
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
        pAVar6 = (this->fields).ReceivedPlanetOwnershipData;
        if (pAVar6 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
          bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pAVar6,friendID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            );
          if (bVar7 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Tried_updating_friend_that_doesn,(MethodInfo *)0x0);
code_?:
            if ((FriendList_OnFriendListUpdatedDelegate *)(this->fields).GameEventManager !=
                (FriendList_OnFriendListUpdatedDelegate *)0x0) {
              (*(((FriendList_OnFriendListUpdatedDelegate *)(this->fields).GameEventManager)->fields
                )._._.invoke_impl)();
            }
            *unaff_FS_OFFSET = pAVar1;
            return;
          }
          if (status == FriendStatus__Enum_Deleted) {
            pAVar6 = (this->fields).ReceivedPlanetOwnershipData;
            if (pAVar6 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pAVar6,friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                        );
              goto code_?;
            }
          }
          else {
            if ((FriendList_OnFriendRequestUpdated *)(this->fields).ReceivedItemFromQuery !=
                (FriendList_OnFriendRequestUpdated *)0x0) {
              pAVar1 = (this->fields).ReceivedPlanetOwnershipData;
              if (pAVar1 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)pAVar1,friendID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                        );
              status = *(FriendStatus__Enum *)(friendID + 0x14);
              (**(code **)(friendID + 0xc))();
            }
            pAVar1 = (this->fields).ReceivedPlanetOwnershipData;
            if ((pAVar1 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) &&
               (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pAVar1,friendID,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                    ), pOVar8 != (Object *)0x0)) {
              pOVar8[2].klass = (Object__Class *)status;
              this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                        (this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              func_?();
              pAVar6 = (this->fields).ReceivedPlanetOwnershipData;
              if (pAVar6 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
                key = (Object *)&UNK_?;
                pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pAVar6,friendID,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                    );
                if (pAVar6 != (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
                  pAVar1 = pAVar6;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)pAVar6,key,pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  NotificationController::NotificationController_OnNotificationReceived
                            (NotificationType__Enum_FriendRequestAccepted,
                             (Dictionary_2_System_Object_System_Object_ *)pAVar6,(MethodInfo *)0x0)
                  ;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        FriendList::FriendList_RemoveFromPendingByProfileID
                  ((FriendList *)this,profileID,(MethodInfo *)0x0);
        if (status == FriendStatus__Enum_Deleted) goto code_?;
        if ((UnityAction_1_System_Int32_ *)(this->fields).ReceivedAccessoryData !=
            (UnityAction_1_System_Int32_ *)0x0) {
          pUVar9 = (UnityAction_1_System_Int32_ *)(this->fields).ReceivedAccessoryData;
          friendID = (int32_t)&UNK_?;
          this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)FriendList::FriendList_GetOnlineFriends((FriendList *)this,(MethodInfo *)0x0)
          ;
          if (this_01 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                    );
          status = (FriendStatus__Enum)(pUVar9->fields)._._.method_code;
          profileID = (int32_t)&UNK_?;
          (*(pUVar9->fields)._._.invoke_impl)();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar3 != (MVGameControllerBase *)0x0) &&
            (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
           ((this_00 = (pMVar4->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
            (this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                    (this_00,(MethodInfo *)0x0),
            this_02 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0)))) {
          this = (MVNetworkGame *)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
          ;
          pDVar10 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)&stack0xffffffd8,this_02,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                             );
          DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar10->_dictionary;
          DStack_2._index = pDVar10->_index;
          DStack_2._version = pDVar10->_version;
          DStack_2._currentValue = pDVar10->_currentValue;
          do {
            bVar7 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_2,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                              );
            pOVar8 = DStack_2._currentValue;
            if (bVar7 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&DStack_2,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,(MethodInfo *)pAVar1);
              goto code_?;
            }
            if (DStack_2._currentValue == (Object *)0x0) goto code_?;
          } while ((MonitorData *)profileID != DStack_2._currentValue[5].monitor);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,(MethodInfo *)pAVar1);
          if (pOVar8 != (Object *)0x0) {
            pSVar11 = TM::TM__(StringLiteral_Accepted_friend_request_from__0_,(MethodInfo *)0x0);
            pMVar12 = pOVar8[7].monitor;
            if (pMVar12 == (MonitorData *)0x0) goto code_?;
            pSVar11 = mscorlib.dll::System::String::String_Format
                               (pSVar11,*(Object **)(pMVar12 + 0xc),(MethodInfo *)0x0);
            if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            friendID = 0;
            this = (MVNetworkGame *)0x3;
            NotificationController::NotificationController_PushNotification
                      (pSVar11,(Sprite *)0x0,3,(MethodInfo *)0x0);
          }
code_?:
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar4 != (MVNetworkGame *)0x0) &&
             (pMVar5 = MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
             pMVar5 != (MVLocalPlayer *)0x0)) {
            FriendList::FriendList_AddFriend
                      ((FriendList *)this,friendID,(pMVar5->fields)._._ProfileID_k__BackingField,
                       profileID,status,(MethodInfo *)0x0);
            pAVar1 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)friendID;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  if (pWVar1 == (WorldNetwork *)0x0) {
    func_?();
  }
  else {
    pEVar2 = (pWVar1->fields)._.InitializedGameQueryData;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pWVar1->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
code_?:
      func_?();
      object = pWVar1[9].fields._.worldObjectClientManager;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)object,
                 MethodInfo__MVNetworkGame__EventHandling__UncacheEventsFromJoin__,(MethodInfo *)0x0
                );
      coroutine = WaitForFrames::WaitForFrames_Frames(1,(UnityAction *)this_01,(MethodInfo *)0x0);
      Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
      return;
    }
    pEVar2 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
    if (pEVar2 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      (pWVar1->fields)._.InitializedGameQueryData = pEVar2;
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
    }
  }
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
      if ((MVNetworkGame_GameDataQueryManager *)pOVar1[5].monitor !=
          (MVNetworkGame_GameDataQueryManager *)0x0) {
        MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                  ((MVNetworkGame_GameDataQueryManager *)pOVar1[5].monitor,*piVar3,(MethodInfo *)0x0
                  );
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
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,
                        (Dictionary_2_System_UInt32_System_Object_ *)builtInItemBusinessData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pDVar6->_dictionary;
    piVar7 = (int *)(pDVar6->_current).key;
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffb8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pDStack_10 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)uVar8;
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      if ((this_01 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) ||
         (piVar7 == (int *)0x0)) break;
      pIVar11 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*piVar7 + 0x20) != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar12 = (undefined4 *)func_?(piVar7);
      (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)*puVar12;
      if ((pDStack_10 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
         ((((pDStack_10->klass->_1).naturalAligment <
            (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDStack_10->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
          (pDStack_10 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))))
      goto code_?;
      builtInItemBusinessData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x70,builtInItemBusinessData._0_3_)
      ;
      pOVar13 = (Object *)func_?(TypeInfo__System__Byte,(int)&builtInItemBusinessData + 3);
      if (pDStack_10 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
      TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDStack_10,pOVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar15 = CONCAT44(TypeInfo__System__Int32,TVar14.m_Index);
      if (TVar14.m_Index == 0) break;
      if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      puVar12 = (undefined4 *)func_?(TVar14.m_Index);
      this_01[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)*puVar12;
      uStack_16 = 0xf;
      pOVar13 = (Object *)func_?(TypeInfo__System__Byte,&uStack_16);
      TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDStack_10,pOVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar15 = CONCAT44(TypeInfo__System__Int32,TVar14.m_Index);
      if (TVar14.m_Index == 0) break;
      if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      puVar12 = (undefined4 *)func_?(TVar14.m_Index);
      this_01[1].monitor = (MonitorData *)*puVar12;
      uStack_17 = 10;
      pOVar13 = (Object *)func_?(TypeInfo__System__Byte,&uStack_17);
      TVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDStack_10,pOVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar15 = CONCAT44(TypeInfo__System__String,TVar18.m_Index);
      TVar14.m_Index = 0;
      if (TVar18.m_Index == 0) {
        this_01[2].monitor = (MonitorData *)0x0;
      }
      else {
        if (*(String__Class **)TVar18.m_Index == TypeInfo__System__String) {
          TVar14 = TVar18;
        }
        if ((MonitorData *)TVar14.m_Index == (MonitorData *)0x0) goto code_?;
        this_01[2].monitor = (MonitorData *)TVar14.m_Index;
        uVar15 = CONCAT44(TypeInfo__System__String,TVar18.m_Index);
        TVar14.m_Index = (int32_t)(MonitorData *)0x0;
        if (*(String__Class **)TVar18.m_Index == TypeInfo__System__String) {
          TVar14 = TVar18;
        }
        if ((MonitorData *)TVar14.m_Index == (MonitorData *)0x0) goto code_?;
      }
      func_?(&this_01[2].monitor,TVar14.m_Index);
      uStack_19 = 100;
      pOVar13 = (Object *)func_?(TypeInfo__System__Byte,&uStack_19);
      TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDStack_10,pOVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar15 = CONCAT44(TypeInfo__System__Boolean,TVar14.m_Index);
      if (TVar14.m_Index == 0) break;
      if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
      puVar5 = (undefined1 *)func_?(TVar14.m_Index);
      *(undefined1 *)((int)&this_01[3].monitor + 1) = *puVar5;
      this_00 = (this->fields).itemBusinessLogic;
      if (this_00 == (MVItemBusinessLogic *)0x0) break;
      MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                (this_00,(int32_t)(this_01->fields)._._defaultValue_k__BackingField,
                 *(bool *)((int)&this_01[3].monitor + 1),(int32_t)this_01[1].klass,
                 (int32_t)this_01[1].monitor,(String *)this_01[2].monitor,(MethodInfo *)0x0);
    }
  }
  uVar15 = func_?();
code_?:
  func_?(uVar15);
  pDStack_10 = extraout_EDX;
code_?:
  func_?(pDStack_10,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
  piVar7 = extraout_ECX;
  pIVar11 = extraout_EDX_00;
code_?:
  func_?(piVar7,pIVar11);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
     (pDVar1 = (eventData->fields).Parameters,
     pDVar1 == (Dictionary_2_System_Byte_System_Object_ *)0x0)) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__ContainsKey
                      (pDVar1,0xf5,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
      unaff_EBX = (Byte__Array__Class *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      pBVar5 = TypeInfo__System__Byte;
      if (unaff_EDI == (Object *)0x0) {
        buffer = (Byte__Array *)0x0;
      }
      else {
        buffer = (Byte__Array *)func_?(unaff_EDI,TypeInfo__System__Byte);
        if (buffer == (Byte__Array *)0x0) goto code_?;
      }
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EBX,buffer,(MethodInfo *)0x0);
      this = (MVNetworkGame *)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x85,(MethodInfo *)0x0);
      if (this != (MVNetworkGame *)0x0) {
        if ((this->klass->_0).element_class != (TypeInfo__MV__Common__QueryType->_0).element_class)
        goto code_?;
        func_?();
        eventData._0_1_ = 0;
        unaff_EDI = (Object *)0xffffffff;
        pDVar1 = (this_01->fields).Parameters;
        if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                            (pDVar1,99,
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
          pDVar1 = (this_01->fields).Parameters;
          if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                              (pDVar1,100,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                              );
            if (bVar2 != 0) {
              this = (MVNetworkGame *)
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (this_01,100,(MethodInfo *)0x0);
              if (this == (MVNetworkGame *)0x0) goto code_?;
              if ((this->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
              goto code_?;
              pbVar6 = (bool *)func_?();
              eventData._0_1_ = *pbVar6;
            }
            this_00 = (this->fields).gameDataQueryManager;
            if (this_00 != (MVNetworkGame_GameDataQueryManager *)0x0) {
              MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager_HandleDataBatch
                        (this_00,(int32_t)unaff_EBX,(int32_t)unaff_EDI,QueryType__Enum_GameWorld,
                         (bool)eventData,(BytePacker *)unaff_EBX,(MethodInfo *)0x0);
              return;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_OnDBQueryResponse__outData_is_nu,(MethodInfo *)0x0);
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
              );
  }
  else {
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
              );
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)outData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
      StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)&stack0xffffffc4,
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                );
      method_01 = (MethodInfo *)0x0;
      uStack_1 = 1;
      while( true ) {
        pMVar5 = 
        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
        ;
        bVar6 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,UnityEngine::UIElements::TextureId]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                            *)&stack0xffffffb4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar6 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_01);
          uStack_1 = 0xffffffff;
          this_01 = (ItemCategories *)func_?();
          ItemCategories::ItemCategories__ctor
                    (this_01,(Dictionary_2_System_String_System_Int32_ *)pDVar4,(MethodInfo *)0x0);
          (this->fields)._ItemCategories_k__BackingField = this_01;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pMVar5 == (MethodInfo *)0x0) break;
        if (*(Il2CppClass **)(pMVar5->methodPointer + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        func_?();
        key = (Object *)func_?();
        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        method_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
        ;
        if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) break;
        if (pMVar5 == (MethodInfo *)0x0) break;
        if (*(Il2CppClass **)(pMVar5->methodPointer + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar8 = (int32_t *)func_?();
        key_00.m_Index = 0;
        if (TVar7.m_Index != 0) {
          if (*(String__Class **)TVar7.m_Index == TypeInfo__System__String) {
            key_00 = TVar7;
          }
          if ((Object *)key_00.m_Index == (Object *)0x0) goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
        Dictionary_2_System_Object_System_Int32__Add
                  ((Dictionary_2_System_Object_System_Int32_ *)pDVar4,(Object *)key_00.m_Index,
                   *piVar8,method_00);
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  DStack_6._dictionary = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentKey = (Object *)0x0;
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_OnDBQueryResponse__outData_is_nu,(MethodInfo *)0x0);
  }
  else {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)outData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      DStack_6._dictionary =
           (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentKey = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,UnityEngine::UIElements::TextureId]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        pOVar10 = DStack_6._currentKey;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pPVar11 = (this->fields)._PlayerRepository_k__BackingField;
        if ((pPVar11 == (PlayerRepository *)0x0) ||
           (pDStack_12 = (pPVar11->fields)._.PlanetOwnershipTypes,
           DStack_6._currentKey == (Object *)0x0)) break;
        if (((DStack_6._currentKey)->klass->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        puVar13 = (undefined4 *)func_?();
        uStack_14 = *puVar13;
        key = (Object *)func_?();
        TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (pDStack_12 == (Dictionary_2_System_Int32_System_String_ *)0x0) break;
        pMStack_16 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
        ;
        pOStack_17 = (Object *)TVar15;
        if (TVar15.m_Index != 0) {
          pOStack_17 = (Object *)0x0;
          if (*(String__Class **)TVar15.m_Index == TypeInfo__System__String) {
            pOStack_17 = (Object *)TVar15;
          }
          if (pOStack_17 == (Object *)0x0) goto code_?;
        }
        if (pOVar10 == (Object *)0x0) break;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar18 = (int32_t *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDStack_12,*piVar18,pOStack_17,
                   pMStack_16);
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository__ctor(pPVar9,(MethodInfo *)0x0);
      func_?(5,TypeInfo__IEditModeUI,pIVar7,pPVar9);
    }
    if ((outData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                            ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                              *)outData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       this_01 !=
       (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffc4,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
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
                Object,UnityEngine::UIElements::TextureId]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                            *)&OStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                            pOVar15,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((TVar16.m_Index != 0) &&
           ((*(byte *)(*(int *)TVar16.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment ||
            (*(Dictionary_2_System_Object_System_Object___Class **)
              (*(int *)(*(int *)TVar16.m_Index + 100) + -4 +
              (uint)(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment * 4) !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
        goto code_?;
        this_02 = (InventoryItem *)func_?();
        InventoryItem::InventoryItem__ctor_2
                  (this_02,itemID,(Dictionary_2_System_Object_System_Object_ *)TVar16.m_Index,
                   (MethodInfo *)0x0);
        if (this_02 == (InventoryItem *)0x0) break;
        if ((this_02->fields).isDeleted == 0) {
          uStack_17 = 0x16;
          pOVar15 = (Object *)func_?(TypeInfo__System__Byte,&uStack_17);
          if (TVar16.m_Index == 0) break;
          TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (TVar16.m_Index,pOVar15,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar18 = CONCAT44(TypeInfo__System__Int32,TVar16.m_Index);
          if (TVar16.m_Index == 0) break;
          if (*(Il2CppClass **)(*(int *)TVar16.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar14 = (int32_t *)func_?(TVar16.m_Index);
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
  uVar18 = func_?();
code_?:
  func_?(uVar18);
code_?:
  func_?();
  pMVar11 = extraout_ECX;
  pIVar13 = extraout_EDX;
code_?:
  func_?(pMVar11,pIVar13);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnJoinResponse(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnJoinResponse
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdConfigSettings);
    func_?(&TypeInfo__UnityEngine__Application);
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
    func_?(&TypeInfo__MVLocalPlayerTourist);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    func_?(&TypeInfo__SessionLocatorPing);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_Deprecated_platformer_mode);
    cRam_? = '\x01';
  }
  if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
  pIVar1 = (IAdManager__Class *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
           Dictionary_2_System_Byte_System_Object__get_Item
                     (returnValues,0xd3,
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                     );
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pIVar2 = (IAdManager__Class *)0x0;
  if (pIVar1 == (IAdManager__Class *)0x0) {
code_?:
    pOVar3 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                        ((String *)pIVar2,
                         MV__WorldObject__AntiCheat__AntiCheatData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::AntiCheat::AntiCheatData>_System__String_
                        );
    unaff_ESI = pIVar1;
    if (((pOVar3 == (Object *)0x0) || (pOVar3[1].klass == (Object__Class *)0x0)) ||
       (this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)((pOVar3[1].klass)->_0).name,
       this_00 ==
       (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
       0x0)) goto code_?;
    banList = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                        (this_00,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::ApplicationDesc>__ToArray__
                        );
    if ((TypeInfo__HackingToolDetector->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HackingToolDetector);
    }
    HackingToolDetector::HackingToolDetector_Initialize
              ((ApplicationDesc__Array *)banList,(MethodInfo *)0x0);
    pIVar1 = (IAdManager__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0xb6,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if ((pIVar1 != (IAdManager__Class *)0x0) &&
       ((pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)(pIVar1->_0).image,
        pDVar5 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (pDVar4->_1).naturalAligment <
          (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment ||
        ((Dictionary_2_System_Object_System_Object___Class *)
         (pDVar4->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
    goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PricesManager);
      cRam_? = '\x01';
    }
    TypeInfo__PricesManager->static_fields->prices =
         (Dictionary_2_System_Object_System_Object_ *)pIVar1;
    func_?(TypeInfo__PricesManager->static_fields,pIVar1);
    unaff_ESI = (IAdManager__Class *)func_?(TypeInfo__MVGameCoinManager);
    MVGameCoinManager::MVGameCoinManager__ctor((MVGameCoinManager *)unaff_ESI,(MethodInfo *)0x0);
    (this->fields)._GameCoinManager_k__BackingField = (MVGameCoinManager *)unaff_ESI;
    func_?(&(this->fields)._GameCoinManager_k__BackingField,unaff_ESI);
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xb5,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    pIVar1 = unaff_ESI;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar7 = (int32_t *)func_?(pOVar3);
    (this->fields)._MarketPlaceLevel_k__BackingField = *piVar7;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xb8,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar7 = (int32_t *)func_?(pOVar3);
    (this->fields)._PublishLevel_k__BackingField = *piVar7;
    pIVar1 = (IAdManager__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0xb1,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__Security__SecurityHelper);
    }
    pIVar2 = (IAdManager__Class *)0x0;
    if (pIVar1 != (IAdManager__Class *)0x0) {
      if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar1->_0).image ==
          (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
        pIVar2 = pIVar1;
      }
      pSVar8 = TypeInfo__System__String;
      if (pIVar2 == (IAdManager__Class *)0x0) goto code_?;
    }
    unaff_ESI = (IAdManager__Class *)
                MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Decrypt
                          ((String *)pIVar2,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pOVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
              ObscuredString_op_Implicit((String *)unaff_ESI,(MethodInfo *)0x0);
    (this->fields)._XpKey_k__BackingField = pOVar9;
    func_?(&(this->fields)._XpKey_k__BackingField,pOVar9);
    bVar10 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0);
    if (bVar10 == 0) {
      this_01 = (SessionLocatorPing *)func_?(TypeInfo__SessionLocatorPing);
      SessionLocatorPing::SessionLocatorPing__ctor(this_01,(MethodInfo *)0x0);
    }
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xaa,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__MV__Common__MVGameType,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    pIVar1 = unaff_ESI;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__MV__Common__MVGameType->_0).element_class)
    goto code_?;
    piVar11 = (int *)func_?(pOVar3);
    iVar12 = *piVar11;
    (this->fields)._GameType_k__BackingField = iVar12;
    if (iVar12 == 2) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Deprecated_platformer_mode,(MethodInfo *)0x0);
      (this->fields)._GameType_k__BackingField = 1;
    }
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x10,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Byte,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
    goto code_?;
    puVar13 = (uint8_t *)func_?(pOVar3);
    (this->fields)._Region_k__BackingField = *puVar13;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xfe,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar7 = (int32_t *)func_?(pOVar3);
    iVar14 = *piVar7;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xe,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar7 = (int32_t *)func_?(pOVar3);
    iVar15 = *piVar7;
    MVNetworkGame_InitializeManagers(this,(MethodInfo *)0x0);
    pIVar1 = (IAdManager__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0xe0,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pIVar2 = (IAdManager__Class *)0x0;
    if (pIVar1 != (IAdManager__Class *)0x0) {
      if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar1->_0).image ==
          (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
        pIVar2 = pIVar1;
      }
      pSVar8 = TypeInfo__System__String;
      if (pIVar2 == (IAdManager__Class *)0x0) goto code_?;
    }
    userProfileData =
         (UserProfileData *)
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   ((String *)pIVar2,
                    MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                   );
    pIVar2 = (IAdManager__Class *)
             MVNetworkGame_CreateLocalPlayer(this,iVar14,iVar15,userProfileData,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeRepository);
      cRam_? = '\x01';
    }
    unaff_ESI = (IAdManager__Class *)
                TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xd4,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Boolean,pOVar3);
    if ((unaff_ESI == (IAdManager__Class *)0x0) || (pOVar3 == (Object *)0x0))
    goto code_?;
    pIVar1 = unaff_ESI;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    puVar16 = (undefined1 *)func_?(pOVar3);
    *(undefined1 *)&(unaff_ESI->_0).byval_arg.attrs = *puVar16;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x59,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,pOVar3);
    unaff_ESI = pIVar2;
    if ((pIVar2 == (IAdManager__Class *)0x0) || (pOVar3 == (Object *)0x0)) goto code_?;
    pIVar1 = pIVar2;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
    goto code_?;
    puVar17 = (undefined4 *)func_?(pOVar3);
    (pIVar2->_0).properties = (PropertyInfo *)*puVar17;
    pMVar18 = (this->fields).playerContainer;
    if (pMVar18 == (MVPlayerContainer *)0x0) {
code_?:
      pIVar2 = (IAdManager__Class *)func_?();
      pSVar8 = extraout_ECX;
      pIVar1 = unaff_ESI;
code_?:
      uVar6 = func_?(pIVar2,pSVar8);
code_?:
      func_?(uVar6);
      pDVar19 = extraout_ECX_00;
      pSVar8 = extraout_EDX;
code_?:
      func_?(pDVar19,pSVar8);
      pSVar8 = extraout_ECX_01;
      goto code_?;
    }
    MVPlayerContainer::MVPlayerContainer_Add(pMVar18,(MVPlayer *)pIVar2,(MethodInfo *)0x0);
    pMVar18 = (this->fields).playerContainer;
    if (pMVar18 == (MVPlayerContainer *)0x0) goto code_?;
    (pMVar18->fields).localPlayerActorNumber = (int32_t)(pIVar2->_0).generic_class;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xa8,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__MV__Common__ClientSettingFlags,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class !=
        (TypeInfo__MV__Common__ClientSettingFlags->_0).element_class) goto code_?;
    piVar11 = (int *)func_?(pOVar3);
    pIVar1 = (IAdManager__Class *)*piVar11;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVClientSettings);
      cRam_? = '\x01';
    }
    TypeInfo__MVClientSettings->static_fields->flags = (int32_t)pIVar1;
    TypeInfo__MVClientSettings->static_fields->flagsSet = 1;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xd7,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    unaff_ESI = pIVar1;
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar11 = (int *)func_?(pOVar3);
    pIVar1 = (IAdManager__Class *)*piVar11;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVClientSettings);
      cRam_? = '\x01';
    }
    TypeInfo__MVClientSettings->static_fields->
    _PostGameInterstitialIntervalInSeconds_k__BackingField = (int32_t)pIVar1;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xe9,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    unaff_ESI = pIVar1;
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar11 = (int *)func_?(pOVar3);
    pIVar1 = (IAdManager__Class *)*piVar11;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVClientSettings);
      cRam_? = '\x01';
    }
    TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField = (int32_t)pIVar1;
    pDVar19 = (Dictionary_2_System_Byte_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xe1,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pDVar20 = (Dictionary_2_System_Byte_System_Object_ *)0x0;
    if (pDVar19 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      if (pDVar19->klass ==
          (Dictionary_2_System_Byte_System_Object___Class *)TypeInfo__System__String) {
        pDVar20 = pDVar19;
      }
      pSVar8 = TypeInfo__System__String;
      if (pDVar20 != (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      goto code_?;
    }
code_?:
    (this->fields)._AdConsentEndpointURL_k__BackingField = (String *)pDVar20;
    func_?(&(this->fields)._AdConsentEndpointURL_k__BackingField,pDVar20);
    pDVar19 = (Dictionary_2_System_Byte_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xe2,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pDVar20 = (Dictionary_2_System_Byte_System_Object_ *)0x0;
    if (pDVar19 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      if (pDVar19->klass ==
          (Dictionary_2_System_Byte_System_Object___Class *)TypeInfo__System__String) {
        pDVar20 = pDVar19;
      }
      pSVar8 = TypeInfo__System__String;
      if (pDVar20 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    }
    (this->fields)._KogamaMainpageURL_k__BackingField = (String *)pDVar20;
    func_?(&(this->fields)._KogamaMainpageURL_k__BackingField,pDVar20);
    pDVar19 = (Dictionary_2_System_Byte_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xe4,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pIVar2 = (IAdManager__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0xe5,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    pIVar1 = (IAdManager__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0xe6,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    this_02 = (CreySettings *)func_?(TypeInfo__CreySettings);
    unaff_ESI = pIVar1;
    if (pIVar1 == (IAdManager__Class *)0x0) goto code_?;
    pDVar5 = (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__Boolean;
    if ((((Dictionary_2_System_Object_System_Object___Class *)(pIVar1->_0).image)->_0).element_class
        != (TypeInfo__System__Boolean->_0).element_class) goto code_?;
    pbVar21 = (bool *)func_?(pIVar1);
    pIVar1 = (IAdManager__Class *)0x0;
    bVar10 = *pbVar21;
    if (pIVar2 != (IAdManager__Class *)0x0) {
      if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar2->_0).image ==
          (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
        pIVar1 = pIVar2;
      }
      pSVar8 = TypeInfo__System__String;
      if (pIVar1 != (IAdManager__Class *)0x0) goto code_?;
      goto code_?;
    }
code_?:
    unaff_ESI = pIVar1;
    if (pDVar19 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pSVar8 = (String__Class *)TypeInfo__System__Int32;
    if ((pDVar19->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar7 = (int32_t *)func_?(pDVar19);
    CreySettings::CreySettings__ctor(this_02,*piVar7,(String *)pIVar1,bVar10,(MethodInfo *)0x0);
    (this->fields)._CreySettings_k__BackingField = this_02;
    func_?(&(this->fields)._CreySettings_k__BackingField,this_02);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__get_Item
              (returnValues,0xf3,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
              );
    pIVar2 = (IAdManager__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0xf1,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    pIVar1 = (IAdManager__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0xf2,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    pDVar19 = returnValues;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xf0,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    this_03 = (CustomTouristPromotionSettings *)
              func_?(TypeInfo__CustomTouristPromotionSettings);
    uVar6 = CONCAT44(TypeInfo__System__Boolean,pOVar3);
    unaff_ESI = pIVar1;
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pbVar21 = (bool *)func_?(pOVar3);
    bVar10 = *pbVar21;
    pIVar22 = pIVar1;
    if (pIVar1 != (IAdManager__Class *)0x0) {
      pIVar22 = (IAdManager__Class *)0x0;
      if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar1->_0).image ==
          (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
        pIVar22 = pIVar1;
      }
      pSVar8 = TypeInfo__System__String;
      if (pIVar22 == (IAdManager__Class *)0x0) goto code_?;
    }
    pIVar1 = (IAdManager__Class *)0x0;
    if (pIVar2 == (IAdManager__Class *)0x0) {
code_?:
      unaff_ESI = pIVar1;
      if (pDVar19 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pSVar8 = (String__Class *)TypeInfo__System__Int32;
      if ((pDVar19->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar7 = (int32_t *)func_?(pDVar19);
        CustomTouristPromotionSettings::CustomTouristPromotionSettings__ctor
                  (this_03,*piVar7,(String *)pIVar1,(String *)pIVar22,bVar10,(MethodInfo *)0x0);
        (this->fields)._CustomTouristPromotionSettings_k__BackingField = this_03;
        func_?(&(this->fields)._CustomTouristPromotionSettings_k__BackingField,this_03);
        pDVar19 = (Dictionary_2_System_Byte_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xe7,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pIVar1 = (IAdManager__Class *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (returnValues,0xe8,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        this_04 = (ElitePromotionSettings *)func_?(TypeInfo__ElitePromotionSettings);
        unaff_ESI = pIVar1;
        if (pIVar1 == (IAdManager__Class *)0x0) goto code_?;
        pDVar5 = (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__Int32;
        if ((((Dictionary_2_System_Object_System_Object___Class *)(pIVar1->_0).image)->_0).
            element_class != (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar7 = (int32_t *)func_?(pIVar1);
        unaff_ESI = (IAdManager__Class *)*piVar7;
        if (pDVar19 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        pSVar8 = (String__Class *)TypeInfo__System__Boolean;
        pIVar1 = unaff_ESI;
        if ((pDVar19->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pbVar21 = (bool *)func_?(pDVar19);
        System.dll::System::Net::Sockets::LingerOption::LingerOption__ctor
                  ((LingerOption *)this_04,*pbVar21,(int32_t)unaff_ESI,(MethodInfo *)0x0);
        (this->fields)._EliteSettings_k__BackingField = this_04;
        func_?(&(this->fields)._EliteSettings_k__BackingField,this_04);
        pLVar23 = (this->fields).embeddedSiteConfigData.sites;
        iVar14 = (this->fields).embeddedSiteConfigData.siteEnum;
        uVar24._0_1_ = (this->fields).embeddedSiteConfigData.showTouristPromotion;
        uVar24._1_1_ = (this->fields).embeddedSiteConfigData.allowsOpenInNewTab;
        uVar24._2_1_ = (this->fields).embeddedSiteConfigData.allowsRedirectToWebpage;
        uVar24._3_1_ = (this->fields).embeddedSiteConfigData.allowsModals;
        uVar25._0_1_ = (this->fields).embeddedSiteConfigData.integratedSdk;
        uVar25._1_1_ = (this->fields).embeddedSiteConfigData.allowsFallbackAds;
        uVar25._2_1_ = (this->fields).embeddedSiteConfigData.showPlayButtonAd;
        uVar25._3_1_ = (this->fields).embeddedSiteConfigData.hideGoldShop;
        uVar26._0_1_ = (this->fields).embeddedSiteConfigData.allowInHouseAds;
        uVar26._1_1_ = (this->fields).embeddedSiteConfigData.removeFullscreenButton;
        uVar26._2_1_ = (this->fields).embeddedSiteConfigData.hideSignUp;
        uVar26._3_1_ = (this->fields).embeddedSiteConfigData.noPlayButtonVideoIcon;
        pDVar19 = (Dictionary_2_System_Byte_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xed,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pIVar1 = (IAdManager__Class *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (returnValues,0xeb,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xee,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        this_05 = (AdConfigSettings *)func_?(TypeInfo__AdConfigSettings);
        uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
        unaff_ESI = pIVar1;
        if (pOVar3 == (Object *)0x0) goto code_?;
        if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar7 = (int32_t *)func_?(pOVar3);
          iVar15 = *piVar7;
          if (pIVar1 == (IAdManager__Class *)0x0) goto code_?;
          pSVar8 = (String__Class *)TypeInfo__System__Int32;
          if ((((Dictionary_2_System_Object_System_Object___Class *)(pIVar1->_0).image)->_0).
              element_class != (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar7 = (int32_t *)func_?(pIVar1);
          unaff_ESI = (IAdManager__Class *)*piVar7;
          if (pDVar19 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
          pSVar8 = (String__Class *)TypeInfo__System__Boolean;
          pIVar1 = unaff_ESI;
          if ((pDVar19->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar21 = (bool *)func_?(pDVar19);
          embeddedSiteConfigData.siteEnum = iVar14;
          embeddedSiteConfigData.sites = pLVar23;
          embeddedSiteConfigData.showTouristPromotion = (char)uVar24;
          embeddedSiteConfigData.allowsOpenInNewTab = (char)((uint)uVar24 >> 8);
          embeddedSiteConfigData.allowsRedirectToWebpage = (char)((uint)uVar24 >> 0x10);
          embeddedSiteConfigData.allowsModals = (char)((uint)uVar24 >> 0x18);
          embeddedSiteConfigData.integratedSdk = (char)uVar25;
          embeddedSiteConfigData.allowsFallbackAds = (char)((uint)uVar25 >> 8);
          embeddedSiteConfigData.showPlayButtonAd = (char)((uint)uVar25 >> 0x10);
          embeddedSiteConfigData.hideGoldShop = (char)((uint)uVar25 >> 0x18);
          embeddedSiteConfigData.allowInHouseAds = (char)uVar26;
          embeddedSiteConfigData.removeFullscreenButton = (char)((uint)uVar26 >> 8);
          embeddedSiteConfigData.hideSignUp = (char)((uint)uVar26 >> 0x10);
          embeddedSiteConfigData.noPlayButtonVideoIcon = (char)((uint)uVar26 >> 0x18);
          AdConfigSettings::AdConfigSettings__ctor
                    (this_05,embeddedSiteConfigData,*pbVar21,(int32_t)unaff_ESI,iVar15,
                     (MethodInfo *)0x0);
          pIVar27 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
          pIVar1 = TypeInfo__Assets__Scripts__AdIntegration__IAdManager;
          if (pIVar27 == (IAdManager *)0x0) goto code_?;
          uVar28 = 0;
          uVar29._0_1_ = (pIVar27->klass->_1).rank;
          uVar29._1_1_ = (pIVar27->klass->_1).minimumAlignment;
          if (uVar29 != 0) {
            do {
              if (pIVar27->klass->interfaceOffsets[uVar28].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar30 = &(&(pIVar27->klass->vtable).InitializeAdConfigSettings)
                            [pIVar27->klass->interfaceOffsets[uVar28].offset].method;
                goto code_?;
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 < uVar29);
          }
          ppMVar30 = (MethodInfo **)
                     func_?(pIVar27,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,9)
          ;
code_?:
          (*(code *)*ppMVar30)(pIVar27,this_05,ppMVar30[1]);
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x52,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          uVar6 = CONCAT44(TypeInfo__System__Boolean,pOVar3);
          unaff_ESI = pIVar1;
          if (pOVar3 == (Object *)0x0) goto code_?;
          if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar21 = (bool *)func_?(pOVar3);
          (this->fields).isPublished = *pbVar21;
          MVGameControllerBase::MVGameControllerBase_set_JoinState
                    (MVJoinState__Enum_LoadGUI,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Action);
            func_?(&MethodInfo__MVNetworkGame__OperationRequests__Syncronize__);
            cRam_? = '\x01';
          }
          this_06 = MVGameControllerBase::MVGameControllerBase_get_LevelLoader((MethodInfo *)0x0);
          MVar31 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          bVar10 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0)
          ;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          unaff_ESI = (IAdManager__Class *)(this->fields).operationRequests;
          this_07 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_07,(Object *)unaff_ESI,
                     MethodInfo__MVNetworkGame__OperationRequests__Syncronize__,(MethodInfo *)0x0);
          if (this_06 == (LevelLoader *)0x0) goto code_?;
          if (MVar31 == MVGameMode__Enum_Edit) {
            mode = ScenesForMode__Enum_EditMode;
code_?:
            LevelLoader::LevelLoader_LoadScenes_1(this_06,mode,(Action *)this_07,(MethodInfo *)0x0);
          }
          else {
            if (MVar31 == MVGameMode__Enum_Play) {
              if (bVar10 == 0) {
                mode = ScenesForMode__Enum_PlayMode;
              }
              else {
                mode = ScenesForMode__Enum_PlayModeTourist;
              }
              goto code_?;
            }
            if (MVar31 == MVGameMode__Enum_CharacterEditor) {
              mode = ScenesForMode__Enum_AvatarEditMode;
              goto code_?;
            }
          }
          method_00 = (MethodInfo *)0xae;
          pIVar2 = (IAdManager__Class *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (returnValues,0xae,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          pIVar1 = (IAdManager__Class *)TypeInfo__MVLocalPlayerTourist;
          pSVar8 = TypeInfo__System__String;
          if ((*(byte *)(_UNK_? + 0xb8) <
               (TypeInfo__MVLocalPlayerTourist->_1).naturalAligment) ||
             (*(MVLocalPlayerTourist__Class **)
               (*(int *)(_UNK_? + 100) + -4 +
               (uint)(TypeInfo__MVLocalPlayerTourist->_1).naturalAligment * 4) !=
              TypeInfo__MVLocalPlayerTourist)) {
            pIVar22 = (IAdManager__Class *)0x0;
            if (pIVar2 != (IAdManager__Class *)0x0) {
              if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar2->_0).image ==
                  (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
                pIVar22 = pIVar2;
              }
              if (pIVar22 == (IAdManager__Class *)0x0) goto code_?;
            }
code_?:
            if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Application);
            }
            bVar10 = System.dll::System::Collections::Generic::
                    SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::Metadata::
                    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                    __Il2CppFullySharedGenericType]::
                    SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                              ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                *)0x0,method_00);
            if (bVar10 == 0) {
              pIVar2 = (IAdManager__Class *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                       ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                 (returnValues,0x68,
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                 );
              unaff_ESI = (IAdManager__Class *)0x0;
              if (pIVar2 != (IAdManager__Class *)0x0) {
                if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar2->_0).image ==
                    (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
                  unaff_ESI = pIVar2;
                }
joined_?:
                pSVar8 = TypeInfo__System__String;
                pIVar1 = unaff_ESI;
                if (unaff_ESI == (IAdManager__Class *)0x0) goto code_?;
              }
            }
            else {
              pIVar2 = (IAdManager__Class *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                       ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                 (returnValues,0xba,
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                 );
              unaff_ESI = (IAdManager__Class *)0x0;
              if (pIVar2 != (IAdManager__Class *)0x0) {
                if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar2->_0).image ==
                    (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
                  unaff_ESI = pIVar2;
                }
                goto joined_?;
              }
            }
            if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__Common__Urls);
            }
            MVCommon.dll::MV::Common::Urls::Urls_Init
                      ((String *)pIVar22,(String *)unaff_ESI,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVGameControllerBase);
              cRam_? = '\x01';
            }
            pGVar32 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar32 != (GameSessionData *)0x0) {
              TM::TM_LoadLanguage((pGVar32->fields).language,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
          pIVar22 = (IAdManager__Class *)0x0;
          if (pIVar2 == (IAdManager__Class *)0x0) {
code_?:
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            Assets::Scripts::ProfileSettings::ProfileSettingsManager::
            ProfileSettingsManager_InitTourist((MethodInfo *)0x0);
            goto code_?;
          }
          if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar2->_0).image ==
              (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
            pIVar22 = pIVar2;
          }
          if (pIVar22 != (IAdManager__Class *)0x0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar2->_0).image ==
        (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
      pIVar1 = pIVar2;
    }
    pSVar8 = TypeInfo__System__String;
    if (pIVar1 != (IAdManager__Class *)0x0) goto code_?;
  }
  else {
    if ((Dictionary_2_System_Object_System_Object___Class *)(pIVar1->_0).image ==
        (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__String) {
      pIVar2 = pIVar1;
    }
    pSVar8 = TypeInfo__System__String;
    if (pIVar2 != (IAdManager__Class *)0x0) goto code_?;
code_?:
    func_?(pIVar1,pSVar8);
    pDVar5 = extraout_EDX_00;
code_?:
    pSVar8 = (String__Class *)func_?(pIVar1,pDVar5);
    pIVar2 = extraout_ECX_02;
  }
  pSVar8 = (String__Class *)func_?(pIVar2,pSVar8);
code_?:
  func_?(pIVar1,pSVar8);
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0x16,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?(pOVar1);
      id = *piVar3;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (returnValues,0x3f,
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
  if (pMVar1 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_No_winning_condition_found_even_,(MethodInfo *)0x0);
        return;
      }
      if (1 < (this_01->fields)._size) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Only_1_winning_condition_current,(MethodInfo *)0x0);
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                (this_01,0,
                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_);
    }
    pAVar1 = (this->fields).OnWinningConditionFulfilled;
    if (pAVar1 == (Action_1_IWinningCondition_ *)0x0) {
      return;
    }
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
    args = (Object__Array *)
           func_?(System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    pSVar2 = StringLiteral_refreshCredentials;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__BrowserComm);
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&TypeInfo__BrowserComm__ToJavaScript);
      func_?(&StringLiteral_Would_have_sent_function__);
      func_?(&StringLiteral___to_JSBridge_with_args__);
      cRam_? = '\x01';
    }
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm);
    }
    str2 = StringLiteral___to_JSBridge_with_args__;
    str0 = StringLiteral_Would_have_sent_function__;
    if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
      if (args == (Object__Array *)0x0) {
        str3 = (String *)0x0;
      }
      else {
        str3 = (String *)
               (**(code **)&args->klass[1]._0.this_arg.attrs)(args,args->klass[1]._0.element_class);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_5
                         (str0,pSVar2,str2,str3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__BrowserComm__ToJavaScript);
      cRam_? = '\x01';
    }
    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (TypeInfo__BrowserComm__ToJavaScript->static_fields->prefix,pSVar2,
                        (MethodInfo *)0x0);
    JSBridge::JSBridge_ExternalCall(pSVar2,args,(MethodInfo *)0x0);
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
    pLVar1 = WorldNetwork::WorldNetwork_RemoveLink(this_00,linkID,(MethodInfo *)0x0);
    if (pLVar1 != (Link *)0x0) {
      pLVar2 = (this->fields)._LogicObjectManager_k__BackingField;
      worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pLVar2 == (LogicObjectManagerClient *)0x0) goto code_?;
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                ((pLVar1->fields).inputWOID,(IWorldObjectManager *)worldObjectManager,
                 (MethodInfo *)0x0);
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                ((pLVar1->fields).outputWOID,(IWorldObjectManager *)worldObjectManager,
                 (MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_reset_count_,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnRemoveObjectLinkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
               (MVNetworkGame *this,int32_t linkID,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pOVar2 = (pWVar1->fields).objectLinks;
    if (pOVar2 != (ObjectLinks *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar3 = (pOVar2->fields).objectLinks;
      if (pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,linkID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                          );
        if (bVar4 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
          return;
        }
        pOVar2 = (pWVar1->fields).objectLinks;
        if (((pOVar2 != (ObjectLinks *)0x0) &&
            (link = ObjectLinks::ObjectLinks_GetObjectLink(pOVar2,linkID,(MethodInfo *)0x0),
            link != (ObjectLink *)0x0)) &&
           (pMVar5 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager,
           pMVar5 != (MVWorldObjectClientManager *)0x0)) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (pMVar5,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
          pMVar5 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager;
          if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
            this = (MVNetworkGame *)&UNK_?;
            this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar5,(link->fields).objectWOID,(MethodInfo *)0x0);
            pOVar2 = (pWVar1->fields).objectLinks;
            if (pOVar2 != (ObjectLinks *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                func_?();
                func_?();
                func_?();
                this = (MVNetworkGame *)&StringLiteral_Attempt_to_remove_ObjectLink__bu;
                func_?();
                cRam_? = '\x01';
              }
              pDVar3 = (pOVar2->fields).objectLinks;
              if (pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
                bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                  ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,
                                   (link->fields).id,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                                  );
                if (bVar4 == 0) {
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)StringLiteral_Attempt_to_remove_ObjectLink__bu,
                             (MethodInfo *)0x0);
                  return;
                }
                pDVar3 = (pOVar2->fields).objectLinks;
                if (((pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) &&
                    (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__Remove
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(link->fields).id
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                               ), this != (MVNetworkGame *)0x0)) &&
                   (MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                    MVWorldObject_RemoveObjectLink((MVWorldObject *)this,link,(MethodInfo *)0x0),
                   this_00 != (MVWorldObject *)0x0)) {
                  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                            (this_00,link,(MethodInfo *)0x0);
                  MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0)
                  ;
                  if (MVar6 != MVGameMode__Enum_Edit) {
                    return;
                  }
                  pDVar7 = (pOVar2->fields).objectLinkObjects;
                  if ((pDVar7 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) &&
                     (this_01 = (Component *)
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Object]::
                                Dictionary_2_System_Int32_System_Object__get_Item
                                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                                           (link->fields).id,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                                          ), this_01 != (Component *)0x0)) {
                    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_01,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                              ((Object_1 *)obj,(MethodInfo *)0x0);
                    pDVar7 = (pOVar2->fields).objectLinkObjects;
                    if (pDVar7 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__Remove
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                                 (link->fields).id,
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
  }
  uVar8 = func_?(&stack0xffffffe0);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Friendslist_is_null,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)friendsList,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                      );
  if (this_01 !=
      (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
             StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffffc4,
                        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                       );
    pOVar5 = pDVar4->_currentValue;
    uStack_1 = 1;
    while( true ) {
      bVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
              Object,UnityEngine::UIElements::TextureId]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                        ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                          *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar6 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
      TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)friendsList
                         ,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((TVar9.m_Index != 0) &&
         ((*(byte *)(*(int *)TVar9.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment ||
          (*(Dictionary_2_System_Object_System_Object___Class **)
            (*(int *)(*(int *)TVar9.m_Index + 100) + -4 +
            (uint)(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment * 4) !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
      goto code_?;
      in_stack_7 = (MethodInfo *)&UNK_?;
      pOVar5 = (Object *)func_?();
      if (TVar9.m_Index == 0) break;
      TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (TVar9.m_Index,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar10.m_Index == 0) break;
      if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar8 = (int32_t *)func_?();
      profileID = *piVar8;
      pOVar5 = (Object *)func_?();
      TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (TVar9.m_Index,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar10.m_Index == 0) break;
      if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar8 = (int32_t *)func_?();
      friendProfileID = *piVar8;
      pOVar5 = (Object *)func_?();
      TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (TVar9.m_Index,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar9.m_Index == 0) break;
      if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) !=
          (TypeInfo__MV__Common__FriendStatus->_0).element_class) goto code_?;
      pFVar11 = (FriendStatus__Enum *)func_?();
      this_00 = (this->fields)._Friends_k__BackingField;
      if (this_00 == (FriendList *)0x0) break;
      pOVar5 = (Object *)0x0;
      FriendList::FriendList_AddFriend
                (this_00,friendID,profileID,friendProfileID,*pFVar11,(MethodInfo *)0x0);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  this = (MVNetworkGame *)(this->fields)._MaterialRepository_k__BackingField;
  if (this != (MVNetworkGame *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
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
      func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
      func_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
      func_?(&TypeInfo__MVMaterial);
      func_?(&TypeInfo__System__Single);
      func_?(&TypeInfo__System__String);
      cRam_? = '\x01';
    }
    pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0;
    description = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0;
    pDVar2 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0;
    pDVar3 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0;
    pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((((pMVar5 != (MVNetworkGame *)0x0) &&
          (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
         (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar6 != (MVLocalPlayer *)0x0)) &&
        ((this_01 = (pMVar6->fields)._._SubscriptionRules_k__BackingField,
         this_01 != (SubscriptionRulesWrapper *)0x0 &&
         (MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
          SubscriptionRulesWrapper_HasBenefit
                    (this_01,SubscriptionBenefit__Enum_FreeBuildingMaterials,(MethodInfo *)0x0),
         materialList != (Dictionary_2_System_Object_System_Object_ *)0x0)))) &&
       (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                            ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                              *)materialList,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       this_03 !=
       (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
      pMVar7 = 
      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
      ;
      pDVar8 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffff94,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)this_03,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      value = (Object *)&stack0xffffffa4;
      pOVar9 = pDVar8->_currentValue;
      while( true ) {
        cVar10 = (char)((uint)pMVar7 >> 0x18);
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,UnityEngine::UIElements::TextureId]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                            *)&stack0xffffffa4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar11 == 0) break;
        if (pOVar9 == (Object *)0x0) goto code_?;
        if ((pOVar9->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
        goto code_?;
        func_?();
        pOVar12 = (Object *)func_?();
        TVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            materialList,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((TVar13.m_Index != 0) &&
           ((*(byte *)(*(int *)TVar13.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment ||
            (*(Dictionary_2_System_Object_System_Object___Class **)
              (*(int *)(*(int *)TVar13.m_Index + 100) + -4 +
              (uint)(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment * 4) !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
        {
code_?:
          func_?();
code_?:
          func_?();
          func_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pOVar12 = (Object *)func_?();
        if (TVar13.m_Index == 0) goto code_?;
        TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar13.m_Index,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar15.m_Index != 0) {
          TVar16.m_Index = 0;
          if (*(String__Class **)TVar15.m_Index == TypeInfo__System__String) {
            TVar16 = TVar15;
          }
          if (TVar16.m_Index != 0) goto code_?;
code_?:
          func_?();
          goto code_?;
        }
code_?:
        pOVar12 = (Object *)func_?();
        TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar13.m_Index,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar15.m_Index != 0) {
          TVar16.m_Index = 0;
          if (*(String__Class **)TVar15.m_Index == TypeInfo__System__String) {
            TVar16 = TVar15;
          }
          if (TVar16.m_Index == 0) goto code_?;
        }
        uStack_17 = (undefined *)CONCAT13(0x35,(undefined3)uStack_17);
        pOVar12 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)TVar13.m_Index,
                   pOVar12,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pBVar18 = TypeInfo__System__Byte;
        uStack_17._0_3_ = CONCAT12(0x36,(undefined2)uStack_17);
        materialList = (Dictionary_2_System_Object_System_Object_ *)((int)&uStack_17 + 2);
        this = (MVNetworkGame *)TypeInfo__System__Byte;
        pOVar12 = (Object *)func_?();
        TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar13.m_Index,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar15.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pMVar19 = (MaterialSound__Enum *)func_?();
        materialSound = *pMVar19;
        uStack_17._0_2_ = CONCAT11(0x37,(undefined1)uStack_17);
        pOVar12 = (Object *)func_?();
        TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar13.m_Index,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar15.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        pAVar20 = (AvatarModifierPackageType__Enum *)func_?();
        modifierPackageType = *pAVar20;
        uStack_17 = (undefined *)CONCAT31(uStack_17._1_3_,0x39);
        pOVar12 = (Object *)func_?();
        TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar13.m_Index,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar15.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        func_?();
        pDVar21 = pDVar1;
        if (cVar10 == '\0') {
          pOVar12 = (Object *)func_?();
          TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (TVar13.m_Index,pOVar12,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (TVar15.m_Index == 0) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
              (TypeInfo__System__Boolean->_0).element_class) goto code_?;
          func_?();
          pDVar21 = pDVar1;
        }
        pOVar12 = (Object *)func_?();
        TVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar13.m_Index,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar13.m_Index == 0) goto code_?;
        iVar22 = func_?();
        if (iVar22 == 0) {
code_?:
          func_?();
          goto code_?;
        }
        if (*(int *)(iVar22 + 0xc) == 0) {
          func_?();
code_?:
          func_?();
code_?:
          func_?();
code_?:
          func_?();
code_?:
          func_?();
          goto code_?;
        }
        if (*(uint *)(iVar22 + 0xc) < 2) goto code_?;
        if (*(uint *)(iVar22 + 0xc) < 3) goto code_?;
        pSVar23 = *(String **)(iVar22 + 0x18);
        if (*(uint *)(iVar22 + 0xc) < 4) goto code_?;
        bearingY = *(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     **)(iVar22 + 0x1c);
        if (*(uint *)(iVar22 + 0xc) < 5) goto code_?;
        this_06 = (GlyphMetrics *)&stack0xffffff78;
        unlockPriceGold = &UNK_?;
        UnityEngine.TextCoreFontEngineModule.dll::UnityEngine::TextCore::GlyphMetrics::
        GlyphMetrics__ctor(this_06,*(float *)(iVar22 + 0x10),*(float *)(iVar22 + 0x14),
                           (float)pSVar23,(float)bearingY,*(float *)(iVar22 + 0x20),
                           (MethodInfo *)0x0);
        bVar11 = (bool)this_06;
        pcVar24 = (pBVar18->_0).namespaze;
        if (pcVar24 == (char *)0x0) goto code_?;
        materialId = *(int32_t *)(pcVar24 + 0xc);
        pDVar25 = description;
        pDVar1 = pDVar4;
        description = bearingY;
        this_04 = (MVMaterial *)func_?();
        pDVar4 = pDVar3;
        pDVar3 = pDVar2;
        pDVar2 = pDVar25;
        physicalProperties.bouncyness = (float)pDVar3;
        physicalProperties.friction = (float)pDVar2;
        physicalProperties.softness = (float)pDVar4;
        physicalProperties.staticFriction = (float)pDVar1;
        physicalProperties.toughness = (float)pDVar21;
        MVMaterial::MVMaterial__ctor_3
                  (this_04,materialId,pSVar23,(String *)description,physicalProperties,materialSound
                   ,modifierPackageType,(int32_t)unlockPriceGold,bVar11,
                   (MaterialButtonTextureGenerator *)0x0,(MethodInfo *)0x0);
        pMVar7 = MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_04,(Object *)this_04,
                   MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,(ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,(MethodInfo *)0xffffffff);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (this->fields).ReceivedItemFromQuery;
      if (this_02 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        if ((int)(this_02->fields)._._.invoke_impl < 0x16) {
          RVar26 = (RegexCharClass_SingleRange)(this->fields).ReceivedAvatarBodiesFromQuery;
        }
        else {
          value = (Object *)&UNK_?;
          RVar26 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_02,0x15,
                              MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                             );
        }
        if (RVar26 != (RegexCharClass_SingleRange)0x0) {
          if ((*(float *)((int)RVar26 + 0x2c) == _UNK_?) &&
             (*(char *)((int)RVar26 + 0xc) != '\0')) {
            MVMaterialRepository::MVMaterialRepository_GenerateMaterialButtonTextures
                      ((MVMaterialRepository *)this,(MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials((MethodInfo *)0x0);
            *unaff_FS_OFFSET = value;
            return;
          }
          func_?();
          this_05 = (Exception *)func_?();
          pMVar7 = (MethodInfo *)0x0;
          pSVar23 = (String *)func_?();
          mscorlib.dll::System::Exception::Exception__ctor_1(this_05,pSVar23,pMVar7);
          func_?();
          func_?();
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_OnRequestWoUniquePrototypeFailed,(MethodInfo *)0x0);
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0x16,
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
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
           OnSayChatIndicatorVisibilityChange;
  if (pAVar1 != (Action_2_Int32_Boolean_ *)0x0) {
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
        if (pMVar1 == (MVPlayerContainer *)0x0) goto code_?;
        pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                           (pMVar1,actorNr,(MethodInfo *)0x0);
        iVar5 = actorNr;
        if (pMVar4 == (MVPlayer *)0x0) goto code_?;
        if (team_00 != (pMVar4->fields)._Team_k__BackingField) {
          pMVar1 = (this->fields).playerContainer;
          pGVar6 = (this->fields).gameStatCounterManager;
          if (pMVar1 == (MVPlayerContainer *)0x0) goto code_?;
          pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             (pMVar1,actorNr,(MethodInfo *)0x0);
          if ((pMVar4 == (MVPlayer *)0x0) || (pGVar6 == (GameStatCounterManager *)0x0))
          goto code_?;
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
          if (pMVar1 != (MVPlayerContainer *)0x0) {
            pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar7 != (MVLocalPlayer *)0x0) {
              if ((pMVar7->fields)._._ActorNr_k__BackingField == actorNr) {
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar8 == (MVNetworkGame *)0x0) goto code_?;
                bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
                if (bVar2 != 0) {
                  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar8 == (MVNetworkGame *)0x0) goto code_?;
                  MVNetworkGame_ResetPlayer(pMVar8,(MethodInfo *)0x0);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_10._index = 0;
    DStack_10._version = 0;
    DStack_10._currentValue = (Object *)0x0;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pMVar2->fields)._.worldObjects;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0) &&
       (method_00 = (MethodInfo *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                              (this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                              ), method_00 != (MethodInfo *)0x0)) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_12,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar11->_dictionary;
      DStack_10._index = pDVar11->_index;
      DStack_10._version = pDVar11->_version;
      DStack_10._currentValue = pDVar11->_currentValue;
      DStack_12._version = 0;
      uStack_3 = 1;
      DStack_12._currentValue = (Object *)&DStack_10;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_10,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar13 == 0) {
          uStack_3 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  this_03 = (ShopItem *)TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (this_03 != (ShopItem *)0x0) {
    pPStack_1 = (PlayerShopInventoryRepository__Class *)0x4;
    iVar2 = func_?();
    if (iVar2 == 0) {
      pPStack_1 = 
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository;
      this_01 = (PlayerShopInventoryRepository *)func_?();
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository__ctor(this_01,(MethodInfo *)0x0);
      pIStack_3 = TypeInfo__IEditModeUI;
      DStack_4._currentValue = (Object *)0x5;
      DStack_4._version = (int32_t)&UNK_?;
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) {
      pPStack_1 = (PlayerShopInventoryRepository__Class *)0x4;
      this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)func_?();
      if (this_02 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pPStack_1 = (PlayerShopInventoryRepository__Class *)*unaff_FS_OFFSET;
        *unaff_FS_OFFSET = &pPStack_1;
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
        }
        DStack_5._dictionary = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0;
        DStack_5._index = 0;
        DStack_5._version = 0;
        DStack_5._currentKey = (Object *)0x0;
        if (this_02 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              (this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          if (this_00 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            method_00 = (MethodInfo *)&UNK_?;
            pDVar6 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                     ::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               (&DStack_4,
                                (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                 *)this_00,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                               );
            DStack_5._dictionary =
                 (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pDVar6->_dictionary
            ;
            DStack_5._index = pDVar6->_index;
            DStack_5._version = pDVar6->_version;
            DStack_5._currentKey = pDVar6->_currentValue;
            DStack_4._version = 0;
            DStack_4._currentValue = (Object *)&DStack_5;
            while( true ) {
              bVar7 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                (&DStack_5,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                );
              pOVar8 = DStack_5._currentKey;
              if (bVar7 == 0) break;
              pSVar9 = (ShopItem *)func_?(TypeInfo__ShopItem);
              this_03 = (ShopItem *)pOVar8;
              if ((ShopItem *)pOVar8 == (ShopItem *)0x0) goto code_?;
              pIVar10 = TypeInfo__System__Int32;
              if ((((IEditModeUI__Class *)pOVar8->klass)->_0).element_class !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              method_00 = (MethodInfo *)&UNK_?;
              this_03 = pSVar9;
              piVar11 = (int32_t *)func_?(pOVar8);
              ShopItem::ShopItem__ctor
                        (this_03,*piVar11,(Dictionary_2_System_Object_System_Object_ *)this_02,
                         (MethodInfo *)0x0);
              if (*(ClientShopRepository **)(unaff_retaddr + 0x1c) == (ClientShopRepository *)0x0)
              goto code_?;
              ClientShopRepository::ClientShopRepository_AddItem
                        (*(ClientShopRepository **)(unaff_retaddr + 0x1c),this_03,(MethodInfo *)0x0)
              ;
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_5,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,method_00);
            if ((char)outData != '\0') {
              if (*(ClientShopRepository **)(unaff_retaddr + 0x1c) == (ClientShopRepository *)0x0)
              goto code_?;
              ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                        (*(ClientShopRepository **)(unaff_retaddr + 0x1c),(MethodInfo *)0x0);
            }
            *unaff_FS_OFFSET = pPStack_1;
            return;
          }
        }
code_?:
        pIVar10 = (Int32__Class *)func_?();
code_?:
        func_?(this_03,pIVar10);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
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
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          pPVar6 = (pMVar7->fields).peer;
          if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          if (pPVar6 != (PhotonPeer *)0x0) {
            (*(code *)(pPVar6->klass->vtable).SendOperation.method)();
            return;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
        pVVar9 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                           ((Vector3 *)(auStack_4 + 4),(photonEvent->fields).Parameters,
                            (MethodInfo *)0x0);
        uStack_10._0_4_ = pVVar9->x;
        uStack_10._4_4_ = pVVar9->y;
        fStack_11 = pVVar9->z;
        pQVar12 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
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
          (*(code *)(unaff_EDI->klass->vtable).set_Position.method)
                    (unaff_EDI,uStack_10,fStack_11,(unaff_EDI->klass->vtable).get_Rotation.methodPtr)
          ;
          (*(code *)(unaff_EDI->klass->vtable).set_Rotation.method)
                    (unaff_EDI,auStack_4._0_4_,auStack_4._4_4_,pOStack_5,fStack_13,
                     (unaff_EDI->klass->vtable).get_Scale.methodPtr);
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0x16,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?(pOVar1);
      id = *piVar3;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (returnValues,0x14,
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
      if (((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVTriggerBox->_1).naturalAligment) ||
         ((MVTriggerBox__Class *)
          (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVTriggerBox->_1).naturalAligment - 1] !=
          TypeInfo__MVTriggerBox)) goto code_?;
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
            if (((TypeInfo__MVTriggerBox->_1).naturalAligment <=
                 (this_01->klass->_1).naturalAligment) &&
               ((MVTriggerBox__Class *)
                (this_01->klass->_1).typeHierarchy[(TypeInfo__MVTriggerBox->_1).naturalAligment - 1]
                == TypeInfo__MVTriggerBox)) {
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return;
      }
      if (((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVTriggerBox->_1).naturalAligment) ||
         ((MVTriggerBox__Class *)
          (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVTriggerBox->_1).naturalAligment - 1] !=
          TypeInfo__MVTriggerBox)) goto code_?;
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
            if (((TypeInfo__MVTriggerBox->_1).naturalAligment <=
                 (this_01->klass->_1).naturalAligment) &&
               ((MVTriggerBox__Class *)
                (this_01->klass->_1).typeHierarchy[(TypeInfo__MVTriggerBox->_1).naturalAligment - 1]
                == TypeInfo__MVTriggerBox)) {
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    pDVar3 = (pMVar2->fields).runtimePrototypes;
    if (pDVar3 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                        );
      if (bVar4 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_remove_runtime_prototy,(MethodInfo *)0x0);
        return;
      }
      pDVar3 = (pMVar2->fields).runtimePrototypes;
      if ((pDVar3 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) &&
         (this_00 = (RuntimePrototypeCubeModel *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,worldInventoryID,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                              ), this_00 != (RuntimePrototypeCubeModel *)0x0)) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy(this_00,(MethodInfo *)0x0);
        pDVar3 = (pMVar2->fields).runtimePrototypes;
        if (pDVar3 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,worldInventoryID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                    );
          pMVar5 = (pMVar2->fields).OnWorldInventoryChange;
          if (pMVar5 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
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
     (pMVar2 = (pWVar1->fields)._.worldObjectClientManager,
     pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pMVar2->fields)._.worldObjects;
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,worldObjectID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                        );
      if (bVar3 == 0) {
        return;
      }
      pMVar2 = (pWVar1->fields)._.worldObjectClientManager;
      if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
        MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                  (pMVar2,worldObjectID,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)p,(MethodInfo *)0x0);
  pVVar4 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                     ((Vector3 *)&stack0xffffffe8,(photonEvent->fields).Parameters,(MethodInfo *)0x0
                     );
  fVar5 = pVVar4->y;
  fVar6 = pVVar4->z;
  if (p == (NetworkTransformPackage *)0x0) {
code_?:
    func_?();
  }
  else {
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
  pDVar3 = (pMVar2->fields).pendingRuntimePrototypes;
  if (pDVar3 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                    (pDVar3,woId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                    );
  if (bVar4 == 0) {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
       (this_01 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar5,woId,(MethodInfo *)0x0), this_01 == (MVCubeModelBase *)0x0))
    goto code_?;
    if (((this_01->klass->_1).naturalAligment < (TypeInfo__MVCubeModelInstance->_1).naturalAligment)
       || ((MVCubeModelInstance__Class *)
           (this_01->klass->_1).typeHierarchy
           [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
           TypeInfo__MVCubeModelInstance)) {
code_?:
      func_?();
      goto code_?;
    }
    key = MVCubeModelBase::MVCubeModelBase_get_Pid(this_01,(MethodInfo *)0x0);
    pDVar6 = (pMVar2->fields).runtimePrototypes;
    if ((pDVar6 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) ||
       (pRVar7 = (RuntimePrototypeCubeModel *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            ), pRVar7 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
    bVar4 = (bool)*(undefined4 *)&(pRVar7->fields).PendingScaleUpdate;
    pRVar7 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                        (pRVar7,0,(MethodInfo *)0x0);
    if (pRVar7 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar7->fields).prototypeId = 0;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
              (pRVar7,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
    pDVar6 = (pMVar2->fields).runtimePrototypes;
    if (pDVar6 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,0,(Object *)pRVar7,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
              );
    this_00 = (this_01->fields).prototypeCubeModel;
    if (this_00 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance(this_00,0,(MethodInfo *)0x0)
    ;
    MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel(this_01,pRVar7,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar7,this_01,(MethodInfo *)0x0);
    pDVar8 = (this_01->fields)._._.data;
    pOVar9 = (Object *)func_?();
    if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (pDVar8,(Object *)StringLiteral_protoTypeID,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  else {
    pDVar3 = (pMVar2->fields).pendingRuntimePrototypes;
    if (pDVar3 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    PVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                       (pDVar3,woId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                       );
    pRVar7 = PVar10.pendingRuntimePrototype;
    if (pRVar7 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar7->fields).prototypeId = worldInventoryId;
    pDVar6 = (pMVar2->fields).runtimePrototypes;
    if (pDVar6 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar6,worldInventoryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                      );
    bVar4 = (bool)pDVar6;
    if (bVar11 == 0) {
      pDVar6 = (pMVar2->fields).runtimePrototypes;
      if (pDVar6 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,worldInventoryId,
                 (Object *)pRVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                );
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                (pRVar7,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar5,woId,(MethodInfo *)0x0), pMVar12 == (MVWorldObject *)0x0))
      goto code_?;
      if (((pMVar12->klass->_1).naturalAligment <
           (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
         ((MVCubeModelInstance__Class *)
          (pMVar12->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] != TypeInfo__MVCubeModelInstance
         )) {
        func_?();
        goto code_?;
      }
      pDVar8 = (pMVar12->fields).data;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Pending_runtime_prototype_alread,(MethodInfo *)0x0);
    }
    pDVar3 = (pMVar2->fields).pendingRuntimePrototypes;
    if (pDVar3 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,PendingPrototypeData]::
    Dictionary_2_System_Int32_PendingPrototypeData__Remove
              (pDVar3,woId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
              );
  }
  if (bVar4 == 0) {
    return;
  }
  pMVar13 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__get_Value
            ((Nullable_1_Single_ *)&stack0xffffffec,MethodInfo__System__Nullable<float>__get_Value__
            );
  if (pMVar13 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_02 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    pOVar9 = (Object *)func_?();
    if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_02,0x2f,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar9 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_02,0x22,pOVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar14 = (pMVar13->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pPVar14 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar14->klass->vtable).SendOperation.method)(pPVar14,8);
        return;
      }
    }
  }
code_?:
  uVar15 = func_?(&stack0xffffffdc);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    pOVar2 = extraout_EDX;
  }
  else {
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x16,(MethodInfo *)0x0);
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar4 = (int32_t *)func_?(pOVar2);
    id = *piVar4;
    if (((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
       (pMVar5 = (MVWorldObjectClientManager *)
                 (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar5 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar5,id,(MethodInfo *)0x0);
    if (pMVar6 == (MVWorldObject *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
      return;
    }
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xfe,(MethodInfo *)0x0);
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar4 = (int32_t *)func_?(pOVar2);
    this_00 = (this->fields).playerContainer;
    if (((this_00 == (MVPlayerContainer *)0x0) ||
        (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar4,(MethodInfo *)0x0),
        (this->fields).worldNetwork == (WorldNetwork *)0x0)) ||
       (pMVar5 = (MVWorldObjectClientManager *)
                 (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar5 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar5,id,(MethodInfo *)0x0);
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x53,(MethodInfo *)0x0);
    if (pMVar6 == (MVWorldObject *)0x0) goto code_?;
    if ((pOVar2 == (Object *)0x0) ||
       ((photonEvent = (EventData *)
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment <= (pOVar2->klass->_1).naturalAligment &&
        ((Dictionary_2_System_Object_System_Object___Class *)
         (pOVar2->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      (*pMVar6->klass[1].vtable.get_HasOutputConnector.methodPtr)
                (pMVar6,pMVar7,pOVar2,pMVar6->klass[1].vtable.get_HasOutputConnector.method);
      return;
    }
  }
  uVar3 = func_?(pOVar2,photonEvent);
code_?:
  func_?(uVar3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
        , (userList->klass->_1).naturalAligment <
          (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment ||
        ((Dictionary_2_System_Object_System_Object___Class *)
         (userList->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment - 1] !=
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
      if (pOVar2 == (Object *)0x0) {
code_?:
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
      data = (Byte__Array *)func_?();
      if (data != (Byte__Array *)0x0) goto code_?;
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
  pMVar1 = this;
  pWVar2 = (this->fields).worldNetwork;
  if ((pWVar2 != (WorldNetwork *)0x0) &&
     (this_00 = (pWVar2->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManagerNetwork *)0x0)) {
    MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_ResetLocalWorldObject
              (this_00,(MethodInfo *)0x0);
    pMVar3 = (this->fields)._GameCoinManager_k__BackingField;
    if (pMVar3 != (MVGameCoinManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        cRam_? = '\x01';
      }
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit
                          ((ObscuredFloat *)&stack0xffffffe8,fVar4,(MethodInfo *)0x0);
      AVar6 = pOVar5->hiddenValue;
      pBVar7 = pOVar5->hiddenValueOld;
      fVar4 = pOVar5->fakeValue;
      bVar8 = pOVar5->inited;
      uVar9 = *(undefined3 *)&pOVar5->field_0x11;
      (pMVar3->fields).startTime.currentCryptoKey = pOVar5->currentCryptoKey;
      (pMVar3->fields).startTime.hiddenValue = AVar6;
      (pMVar3->fields).startTime.hiddenValueOld = pBVar7;
      (pMVar3->fields).startTime.fakeValue = fVar4;
      (pMVar3->fields).startTime.inited = bVar8;
      *(undefined3 *)&(pMVar3->fields).startTime.field_0x11 = uVar9;
      func_?(&(pMVar3->fields).startTime.hiddenValueOld,0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0,(MethodInfo *)0x0);
      pMVar11 = (pMVar3->fields).OnGameCoinAmountChange;
      AVar6 = (ACTkByte4)pOVar10->currentCryptoKey;
      pBVar7 = (Byte__Array *)pOVar10->hiddenValue;
      fVar4 = (float)pOVar10->fakeValue;
      uVar12._0_1_ = pOVar10->inited;
      uVar12._1_3_ = *(undefined3 *)&pOVar10->field_0xd;
      uVar13._0_4_ = pOVar10->fakeValue;
      uVar13._4_1_ = pOVar10->inited;
      uVar13._5_3_ = *(undefined3 *)&pOVar10->field_0xd;
      (pMVar3->fields).gameCoins.currentCryptoKey = (int32_t)AVar6;
      (pMVar3->fields).gameCoins.hiddenValue = (int32_t)pBVar7;
      (pMVar3->fields).gameCoins.fakeValue = (int32_t)fVar4;
      (pMVar3->fields).gameCoins.inited = (bool)uVar12;
      *(undefined3 *)&(pMVar3->fields).gameCoins.field_0xd = uVar12._1_3_;
      if (pMVar11 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
        pMVar11 = (pMVar3->fields).OnGameCoinAmountChange;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          fVar4 = (float)uVar13;
          uVar12 = SUB84(uVar13,4);
        }
        value.hiddenValue = (int32_t)pBVar7;
        value.currentCryptoKey._0_1_ = AVar6.b1;
        value.currentCryptoKey._1_1_ = AVar6.b2;
        value.currentCryptoKey._2_1_ = AVar6.b3;
        value.currentCryptoKey._3_1_ = AVar6.b4;
        value.fakeValue = (int32_t)fVar4;
        value.inited = (bool)uVar12;
        value._13_3_ = SUB43(uVar12,1);
        iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
        (*(pMVar11->fields)._._.invoke_impl)
                  ((pMVar11->fields)._._.method_code,iVar14,(pMVar11->fields)._._.method);
      }
      if ((pMVar3->fields).OnActivationChange != (MVGameCoinManager_OnActivationChangeDelegate *)0x0
         ) {
        uVar13 = *(undefined8 *)&(pMVar3->fields).isActive;
        pMVar15 = (pMVar3->fields).OnActivationChange;
        uVar16 = (pMVar3->fields).isActive.fakeValue;
        uVar17 = (pMVar3->fields).isActive.fakeValueChanged;
        uVar18 = (pMVar3->fields).isActive.inited;
        uVar19 = (pMVar3->fields).isActive.field_0xb;
        value_00._11_1_ = uVar19;
        value_00.inited = uVar18;
        value_00.fakeValueChanged = uVar17;
        value_00.fakeValue = uVar16;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        }
        value_00._0_8_ = uVar13;
        bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                 ObscuredBool_op_Implicit_1(value_00,(MethodInfo *)0x0);
        this = (MVNetworkGame *)(uint)bVar8;
        (*(pMVar15->fields)._._.invoke_impl)
                  ((pMVar15->fields)._._.method_code,this,(pMVar15->fields)._._.method);
      }
      pMVar20 = (pMVar1->fields).playerContainer;
      if (pMVar20 != (MVPlayerContainer *)0x0) {
        pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar20,(MethodInfo *)0x0);
        if (pMVar21 != (MVLocalPlayer *)0x0) {
          mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
          BindingRestrictions+TestBuilder+AndNode]::
          Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                    ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *
                     )pMVar21,(MethodInfo *)0x0);
          pMVar20 = (pMVar1->fields).playerContainer;
          this_01 = (pMVar1->fields).gameStatCounterManager;
          if (pMVar20 != (MVPlayerContainer *)0x0) {
            pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar20,(MethodInfo *)0x0)
            ;
            if ((pMVar21 != (MVLocalPlayer *)0x0) && (this_01 != (GameStatCounterManager *)0x0)) {
              MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
                        (this_01,(pMVar21->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
      (*(code *)(pPVar2->klass->vtable).Service.method)
                (pPVar2,(pPVar2->klass->vtable).SendOutgoingCommands.methodPtr);
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_stepTimestamp_is_not_correctly_i,(MethodInfo *)0x0);
  }
  this_00 = (LogicObjectManager *)func_?(TypeInfo__LogicObjectManagerClient);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager__ctor
            (this_00,stepTimestamp,0,(MethodInfo *)0x0);
  (this->fields)._LogicObjectManager_k__BackingField = (LogicObjectManagerClient *)this_00;
  func_?(&(this->fields)._LogicObjectManager_k__BackingField,this_00);
  this_01 = (MVNetworkGame_LogicObjectManagerClientWrapper *)
            func_?(TypeInfo__MVNetworkGame__LogicObjectManagerClientWrapper);
  MVNetworkGame+LogicObjectManagerClientWrapper::MVNetworkGame_LogicObjectManagerClientWrapper__ctor
            (this_01,this,stepTimestamp,(MethodInfo *)0x0);
  (this->fields).logicObjectManagerClientWrapper = this_01;
  func_?(&(this->fields).logicObjectManagerClientWrapper,this_01);
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
      func_?(&
                      TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                     );
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_ByteEnum_ *)
              (pMVar2->fields).eventsHandledByDynamicEventCallbackManager;
    if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
      pMVar3 = (MethodInfo *)&UNK_?;
      bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        (this_00,eventCode,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                        );
      if (bVar4 == 0) {
code_?:
        func_?();
        this_01 = (Exception *)func_?();
        pMVar3 = (MethodInfo *)0x0;
        message = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,pMVar3);
        func_?();
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pDVar6 = (pMVar2->fields).eventCallbacks;
      if (pDVar6 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                          ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar6,eventCode,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                          );
        if (bVar4 == 0) {
          pDVar6 = (pMVar2->fields).eventCallbacks;
          pOVar7 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar7,ExceptionArgument__Enum_obj,pMVar3);
          if (pDVar6 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,eventCode,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                    );
        }
        pDVar6 = (pMVar2->fields).eventCallbacks;
        if ((pDVar6 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                        *)0x0) &&
           (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,eventCode,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                               ), pOVar7 != (Object *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar7[1].klass;
          while ((pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0),
                 pDVar8 == (Delegate *)0x0 || (iVar9 = func_?(), iVar9 != 0))) {
            pOVar10 = (Object__Class *)func_?();
            bVar11 = pOVar10 == a;
            a = pOVar10;
            if (bVar11) {
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
  uVar12 = func_?(&stack0xfffffff0);
  func_?(uVar12);
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
  if ((this->fields).worldNetwork != (WorldNetwork *)0x0) {
    pMVar1 = (((this->fields).worldNetwork)->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManagerNetwork *)0x0) {
      pEVar2 = (pMVar1->fields)._.OnTransferWosResponse;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_TransferWosResponseHandler,(MethodInfo *)0x0);
      if (e != (OnTransferWosResponseEventArgs *)0x0) {
        if ((e->fields).success == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
  uVar10 = func_?(&stack0xffffffd4);
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
      (*(code *)(pPVar5->klass->vtable).Service.method)(pPVar5);
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevServiceCallTime = fVar4;
    }
    this_00 = (this->fields).logicObjectManagerClientWrapper;
    if (this_00 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Update(this_00,(MethodInfo *)0x0);
    }
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar6 == MVJoinState__Enum_Playing) {
      this_01 = (this->fields).runtimeVariableNetworkManager;
      if (this_01 == (RuntimeVariableNetworkManager *)0x0) goto code_?;
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData
                (this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).transformNetworkManager;
      if (this_02 == (TransformNetworkManager *)0x0) goto code_?;
      TransformNetworkManager::TransformNetworkManager_Update(this_02,this,(MethodInfo *)0x0);
      this_03 = (this->fields).worldNetwork;
      if (this_03 == (WorldNetwork *)0x0) goto code_?;
      WorldNetwork::WorldNetwork_Update(this_03,this,(MethodInfo *)0x0);
      this_04 = (this->fields)._GameCoinManager_k__BackingField;
      if (this_04 == (MVGameCoinManager *)0x0) goto code_?;
      MVGameCoinManager::MVGameCoinManager_Update(this_04,this,(MethodInfo *)0x0);
    }
    this_05 = (this->fields)._NetworkGameStateListener_k__BackingField;
    if (this_05 == (MVNetworkGameStateListener *)0x0) {
code_?:
      func_?();
      func_?();
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    MVNetworkGameStateListener::MVNetworkGameStateListener_Update(this_05,this,(MethodInfo *)0x0);
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
      (*(code *)(pPVar2->klass->vtable).Service.method)
                (pPVar2,(pPVar2->klass->vtable).SendOutgoingCommands.methodPtr);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      (this->fields).prevServiceCallTime = fVar1;
    }
    this_00 = (this->fields).logicObjectManagerClientWrapper;
    if (this_00 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Update(this_00,(MethodInfo *)0x0);
    }
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar3 == MVJoinState__Enum_Playing) {
      this_01 = (this->fields).runtimeVariableNetworkManager;
      if (this_01 == (RuntimeVariableNetworkManager *)0x0) goto code_?;
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData
                (this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).transformNetworkManager;
      if (this_02 == (TransformNetworkManager *)0x0) goto code_?;
      TransformNetworkManager::TransformNetworkManager_Update(this_02,this,(MethodInfo *)0x0);
      this_03 = (this->fields).worldNetwork;
      if (this_03 == (WorldNetwork *)0x0) goto code_?;
      WorldNetwork::WorldNetwork_Update(this_03,this,(MethodInfo *)0x0);
      this_04 = (this->fields)._GameCoinManager_k__BackingField;
      if (this_04 == (MVGameCoinManager *)0x0) goto code_?;
      MVGameCoinManager::MVGameCoinManager_Update(this_04,this,(MethodInfo *)0x0);
    }
    this_05 = (this->fields)._NetworkGameStateListener_k__BackingField;
    if (this_05 == (MVNetworkGameStateListener *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    MVNetworkGameStateListener::MVNetworkGameStateListener_Update(this_05,this,(MethodInfo *)0x0);
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
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 == (WorldNetwork *)0x0) {
code_?:
    func_?();
    pMVar2 = extraout_EDX;
  }
  else {
    pEVar3 = (pWVar1->fields)._.InitializedGameQueryData;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pWVar1->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    }
    else {
      pEVar3 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
      if (pEVar3 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
      (pWVar1->fields)._.InitializedGameQueryData = pEVar3;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    unaff_ESI = (MVGroup *)e;
    if (e == (InitializedGameQueryDataEventArgs *)0x0) goto code_?;
    pMVar6 = (e->fields).RootWO;
    if (pMVar6 == (MVWorldObjectClient *)0x0) {
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_RootGroup_is_not_found_,(MethodInfo *)0x0);
code_?:
      if (TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit !=
          (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit;
        (*(pMVar7->fields)._._.invoke_impl)((pMVar7->fields)._._.method_code);
      }
      return;
    }
    pMVar8 = pMVar6->klass;
    if (((pMVar8->_1).naturalAligment < (TypeInfo__MVGroup->_1).naturalAligment) ||
       ((MVGroup__Class *)(pMVar8->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] !=
        TypeInfo__MVGroup)) goto code_?;
    if (pWVar1[6].fields._.worldInventory == (MVWorldInventory *)0x0) goto code_?;
    unaff_ESI = (MVGroup *)(e->fields).RootWO;
    this_00 = (MVWorldObjectClientManager *)
              ((pWVar1[6].fields._.worldInventory)->fields).runtimePrototypes;
    if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
    if (unaff_ESI == (MVGroup *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_set_RootGroup
                (this_00,(MVGroup *)0x0,(MethodInfo *)0x0);
      goto code_?;
    }
    pMVar2 = TypeInfo__MVGroup;
    if (((TypeInfo__MVGroup->_1).naturalAligment <= (unaff_ESI->klass->_1).naturalAligment) &&
       ((MVGroup__Class *)
        (unaff_ESI->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] ==
        TypeInfo__MVGroup)) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_set_RootGroup
                (this_00,unaff_ESI,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?(unaff_ESI,pMVar2);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_00 = (GameEventManager *)func_?(TypeInfo__GameEventManager);
  GameEventManager::GameEventManager__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).GameEventManager = this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Dictionary__
            );
  if (this_01 !=
      (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__Add
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,0,2.0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__Add
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,1,2.0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__Add
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,2,-5.5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__Add
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,3,-3.0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__Add
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,4,2.5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    (this->fields).timeZoneMap = (Dictionary_2_MV_Common_Region_System_Single_ *)this_01;
    func_?();
    value = (MVItemBusinessLogic *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_02 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
              );
    (value->fields).items = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)this_02;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)&value->fields);
    (this->fields).itemBusinessLogic = value;
    func_?();
    this_03 = (MVNetworkGame_GameDataQueryManager *)func_?();
    MVNetworkGame+GameDataQueryManager::MVNetworkGame_GameDataQueryManager__ctor
              (this_03,(MethodInfo *)0x0);
    (this->fields).gameDataQueryManager = this_03;
    func_?();
    this_04 = (TransformNetworkManager *)func_?();
    TransformNetworkManager::TransformNetworkManager__ctor(this_04,(MethodInfo *)0x0);
    (this->fields).transformNetworkManager = this_04;
    func_?();
    this_05 = (MVTeamManager *)func_?();
    MVTeamManager::MVTeamManager__ctor(this_05,(MethodInfo *)0x0);
    (this->fields).teamManager = this_05;
    func_?();
    this_06 = (GameStatCounterManager *)func_?();
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager__ctor
              (this_06,(MethodInfo *)0x0);
    (this->fields).gameStatCounterManager = this_06;
    func_?();
    this_07 = (LevelRewardsManager *)func_?();
    LevelRewardsManager::LevelRewardsManager__ctor(this_07,(MethodInfo *)0x0);
    (this->fields).levelRewardsManager = this_07;
    func_?();
    (this->fields).lastFrameServerTimeUpdate = -1;
    (this->fields).lastFrameLocalTimeUpdate = -1;
    this_08 = (MVPlayerContainer *)func_?();
    MVPlayerContainer::MVPlayerContainer__ctor(this_08,(MethodInfo *)0x0);
    (this->fields).playerContainer = this_08;
    func_?();
    this_09 = (RuntimeVariableNetworkManager *)func_?();
    RuntimeVariableNetworkManager::RuntimeVariableNetworkManager__ctor(this_09,(MethodInfo *)0x0);
    (this->fields).runtimeVariableNetworkManager = this_09;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,
               (MethodInfo *)&(this->fields).runtimeVariableNetworkManager);
    (this->fields).photonLoggingConfig.defaultDebugLevel = 0;
    (this->fields).photonLoggingConfig.untilConnectedDebugLevel = 0;
    (this->fields).embeddedSiteConfigData.sites = (List_1_System_String_ *)&UNK_?;
    (this->fields).embeddedSiteConfigData.siteEnum = (int32_t)this_01;
    (this->fields).embeddedSiteConfigData.showTouristPromotion = 2;
    (this->fields).embeddedSiteConfigData.allowsOpenInNewTab = 0;
    (this->fields).embeddedSiteConfigData.allowsRedirectToWebpage = 0;
    (this->fields).embeddedSiteConfigData.allowsModals = 0;
    (this->fields).embeddedSiteConfigData.integratedSdk = 0;
    (this->fields).embeddedSiteConfigData.allowsFallbackAds = 0;
    (this->fields).embeddedSiteConfigData.showPlayButtonAd = 0xb0;
    (this->fields).embeddedSiteConfigData.hideGoldShop = 0xc0;
    *(undefined **)&(this->fields).embeddedSiteConfigData.allowInHouseAds = &UNK_?;
    func_?();
    MVGameControllerBase::MVGameControllerBase_set_JoinState
              (MVJoinState__Enum_Joining,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
        (GameSessionData *)0x0) {
      pPVar1 = (PhotonPeer *)func_?(TypeInfo__ExitGames__Client__Photon__PhotonPeer);
      Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::PhotonPeer__ctor_1
                (pPVar1,(IPhotonPeerListener *)this,ConnectionProtocol__Enum_Udp,(MethodInfo *)0x0);
      (this->fields)._Peer_k__BackingField = pPVar1;
      func_?(&(this->fields)._Peer_k__BackingField,pPVar1);
      pPVar1 = (this->fields)._Peer_k__BackingField;
      if (pPVar1 != (PhotonPeer *)0x0) {
        (pPVar1->fields).DisconnectTimeout = 20000;
        pPVar1 = (this->fields)._Peer_k__BackingField;
        if (pPVar1 != (PhotonPeer *)0x0) {
          (pPVar1->fields).SentCountAllowance = 8;
          pPVar1 = (this->fields)._Peer_k__BackingField;
          if (pPVar1 != (PhotonPeer *)0x0) {
            bVar2 = cRam_? == '\0';
            (pPVar1->fields).DebugOut = 0;
            if (bVar2) {
              func_?(&TypeInfo__MVNetworkGame__EventHandling);
              func_?(&TypeInfo__MVNetworkGame__OperationRequests);
              func_?(&TypeInfo__MVNetworkGame__OperationResponseHandling);
              func_?(&TypeInfo__MVNetworkGame__StatusChangedHandling);
              cRam_? = '\x01';
            }
            this_10 = (MVNetworkGame_EventHandling *)
                      func_?(TypeInfo__MVNetworkGame__EventHandling);
            MVNetworkGame+EventHandling::MVNetworkGame_EventHandling__ctor
                      (this_10,this,(MethodInfo *)0x0);
            (this->fields).eventHandling = this_10;
            func_?(&(this->fields).eventHandling,this_10);
            this_11 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)func_?(TypeInfo__MVNetworkGame__OperationResponseHandling);
            System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
            IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (this_11,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                *)this,(MethodInfo *)0x0);
            (this->fields).operationResponseHandling =
                 (MVNetworkGame_OperationResponseHandling *)this_11;
            func_?(&(this->fields).operationResponseHandling,this_11);
            this_12 = (MVNetworkGame_StatusChangedHandling *)
                      func_?(TypeInfo__MVNetworkGame__StatusChangedHandling);
            MVNetworkGame+StatusChangedHandling::MVNetworkGame_StatusChangedHandling__ctor
                      (this_12,this,(MethodInfo *)0x0);
            (this->fields).statusChangedHandling = this_12;
            func_?();
            this_13 = (MVNetworkGame_OperationRequests *)func_?();
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests__ctor
                      (this_13,this,(MethodInfo *)0x0);
            (this->fields).operationRequests = this_13;
            func_?();
            pMVar3 = (MVNetworkGameStateListener *)func_?();
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor
                      ((UxmlObjectListAttributeDescription_1_System_Object_ *)pMVar3,
                       (MethodInfo *)0x0);
            (this->fields)._NetworkGameStateListener_k__BackingField = pMVar3;
            func_?();
            pMVar3 = (this->fields)._NetworkGameStateListener_k__BackingField;
            this_14 = (UnityAction_2_System_Object_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_14,(Object *)this,
                       MethodInfo__MVNetworkGame__networkGameStateListener_OnGameStateChanged_System__Object__GameStateChangeEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGameStateListener *)0x0) {
              MVNetworkGameStateListener::MVNetworkGameStateListener_add_OnGameStateChanged
                        (pMVar3,(EventHandler_1_GameStateChangeEventArgs_ *)this_14,
                         (MethodInfo *)0x0);
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
             func_?(&(this->fields).ReceivedItemFromQuery,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_ReceivedPlanetOwnershipData(Action`1[MV.WorldObject.OwnershipData.PlanetOwnershipsData])
    */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedPlanetOwnershipData
               (MVNetworkGame *this,
               Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *value,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>)
    ;
    cRam_? = '\x01';
  }
  a = (this->fields).ReceivedPlanetOwnershipData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
             func_?(&(this->fields).ReceivedPlanetOwnershipData,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
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
  if (((TypeInfo__MVLocalPlayer->_1).naturalAligment <= (pMVar3->klass->_1).naturalAligment) &&
     ((pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVLocalPlayer->_1).naturalAligment - 1] ==
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
             func_?(&(this->fields).ReceivedItemFromQuery,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void 
   remove_ReceivedPlanetOwnershipData(Action`1[MV.WorldObject.OwnershipData.PlanetOwnershipsData])
    */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedPlanetOwnershipData
               (MVNetworkGame *this,
               Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *value,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>)
    ;
    cRam_? = '\x01';
  }
  source = (this->fields).ReceivedPlanetOwnershipData;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
             func_?(&(this->fields).ReceivedPlanetOwnershipData,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
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

