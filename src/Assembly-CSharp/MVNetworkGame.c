
/* Void AddCloneToWorldObjects(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects
               (MVNetworkGame *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (pIVar1 != (IList_1_VoxelHit_ *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar2 = pDRam00000008;
      if (in_stack_3 != (MVWorldObjectClient *)0x0) {
        pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)in_stack_3,(MethodInfo *)0x0);
        if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
          bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            (pDVar2,(int32_t)pIVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                            );
          pDVar2 = pDRam00000008;
          if (bVar4 != 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
            return;
          }
          pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)in_stack_3,(MethodInfo *)0x0);
          if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      (pDVar2,(int32_t)pIVar1,(Object *)in_stack_3,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                      );
            if (pMRam00000010 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
              MVWorldObjectClientManager+WorldObjectMapping::
              MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                        (pMRam00000010,in_stack_3,(MethodInfo *)0x0);
              key = (String *)
                    mscorlib.dll::System::Object::Object_GetType
                              ((Object *)in_stack_3,(MethodInfo *)0x0);
              if (pDRam00000018 != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine
                ::Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                          (pDRam00000018,key,(Sprite **)&stack0x00000000,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                          );
                if (pDVar2 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                  this_01 = (WorldObjectCreatedEventArgs *)func_?();
                  WorldObjectCreatedEventArgs::WorldObjectCreatedEventArgs__ctor
                            (this_01,in_stack_3,(MethodInfo *)0x0);
                  if (pDVar2 == (Dictionary_2_System_Int32_System_Object_ *)0x0)
                  goto code_?;
                  System.Core.dll::System::Action`2[Object,UnityEngine::
                  ReflectionProbe+ReflectionProbeEvent]::
                  Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                            ((Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
                             pDVar2,(Object *)0x0,
                             (ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
                             MethodInfo__System__Action<System::Object,_WorldObjectCreatedEventArgs>__Invoke_System__Object__WorldObjectCreatedEventArgs_
                            );
                }
                pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    in_stack_3,(MethodInfo *)0x0);
                if (pOVar5 == (Object *)0xffffffff) {
                  this_02 = (Collection_1_VoxelHit_ *)func_?();
                  if (this_02 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
                  pIRam0000001c =
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AllModesSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_AllModesSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (photonEvent == (EventData *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pSVar1 = (String *)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
    pSVar2 = (String *)0x0;
    if (pSVar1 != (String *)0x0) {
      if (pSVar1->klass == TypeInfo__System__String) {
        pSVar2 = pSVar1;
      }
      pSVar3 = TypeInfo__System__String;
      if (pSVar2 == (String *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pXVar4 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                       (pSVar2,
                        MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                       );
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pXVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    pMVar6 = pMVar5;
    pOVar7 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xbf,(MethodInfo *)0x0);
    if ((pMVar5 == (MVLocalPlayer *)0x0) || (pOVar7 == (Object *)0x0)) goto code_?;
    if ((pOVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar8 = (int32_t *)func_?();
      iVar9 = *piVar8;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      (pMVar5->fields).defaultBodyWoId = iVar9;
      pSVar10 = (pMVar5->fields).spawnRoleDataMediator;
      this_00 = (SpawnRoleChangeHandlerLocal *)func_?();
      SpawnRoleChangeHandlerLocal::SpawnRoleChangeHandlerLocal__ctor
                (this_00,pSVar10,(MethodInfo *)0x0);
      MVPlayer::MVPlayer_SetupSpawnRoleManager
                ((MVPlayer *)pMVar6,(ISpawnRoleChangeHandler *)this_00,(SpawnRolesRuntimeData *)0x0
                 ,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar10 == (SpawnRoleDataMediator *)0x0) goto code_?;
      this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pSVar10,(MethodInfo *)0x0);
      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar11,(Object *)pMVar6,
                 MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
                );
      if (this_01 == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                (this_01,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)pUVar11,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      pSVar12 = this_01[0xb].klass;
      if (pSVar12 == (SpawnRoleVariable_1_UnityEngine_Vector3___Class *)0x0) goto code_?;
      pDVar13 = *(Delegate **)&(pSVar12->_0).byval_arg.attrs;
      pUVar11 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar11,(Object *)this_01,
                 MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
                 ,
                 MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
                );
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar13,(Delegate *)pUVar11,(MethodInfo *)0x0);
      pDVar13 = (Delegate *)0x0;
      if (pDVar14 == (Delegate *)0x0) {
code_?:
        *(Delegate **)&(pSVar12->_0).byval_arg.attrs = pDVar13;
        pOVar7 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0x23,(MethodInfo *)0x0);
        if (pOVar7 != (Object *)0x0) {
          if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar8 = (int32_t *)func_?();
          MVNetworkGame_SetupLogicManager((MVNetworkGame *)photonEvent,*piVar8,(MethodInfo *)0x0);
          pSVar1 = (String *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xcf,(MethodInfo *)0x0);
          pSVar2 = (String *)0x0;
          if (pSVar1 != (String *)0x0) {
            if (pSVar1->klass == TypeInfo__System__String) {
              pSVar2 = pSVar1;
            }
            if (pSVar2 == (String *)0x0) goto code_?;
          }
          pXVar4 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                             (pSVar2,
                              MV__WorldObject__SpawnRoles__SpawnRolesMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesMetaData>_System__String_
                             );
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar6 != (MVLocalPlayer *)0x0) {
            (pMVar6->fields).spawnRolesMetaData = (SpawnRolesMetaData *)pXVar4;
            return;
          }
        }
        goto code_?;
      }
      if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDVar14->klass ==
          TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
        pDVar13 = pDVar14;
      }
      if (pDVar13 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  pSVar1 = (String *)func_?();
  pSVar3 = extraout_ECX;
code_?:
  func_?(pSVar1,pSVar3);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Cleanup
               (MVNetworkGame *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pWVar1,(MethodInfo *)0x0);
    if (pIVar2 != (IList_1_VoxelHit_ *)0x0) {
      pWVar1 = (this->fields).worldNetwork;
      if (pWVar1 != (WorldNetwork *)0x0) {
        this_01 = (MVWorldObjectClientManagerNetwork *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pWVar1,(MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManagerNetwork *)0x0) {
          MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Cleanup
                    (this_01,(MethodInfo *)0x0);
          this_00 = (this->fields)._LogicObjectManager_k__BackingField;
          if (this_00 != (LogicObjectManagerClient *)0x0) {
            LogicObjectManagerClient::LogicObjectManagerClient_Clear(this_00,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  if ((this->fields)._MaterialRepository_k__BackingField != (MVMaterialRepository *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVMaterialRepository->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVMaterialRepository->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__MVMaterialRepository->static_fields->instance = (MVMaterialRepository *)0x0;
  }
  PricesManager::PricesManager_Reset((MethodInfo *)0x0);
  return;
}


/* Void CreateGame() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreateGame
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    pEVar2 = (pWVar1->fields)._.InitializedGameQueryData;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
               ,
               MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
              );
    pEVar3 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pEVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pEVar2 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    if (pEVar3 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      if (pEVar3->klass == TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
        pEVar2 = pEVar3;
      }
      pEVar4 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      if (pEVar2 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
    }
    (pWVar1->fields)._.InitializedGameQueryData = pEVar2;
    pMVar5 = (this->fields).gameDataQuery;
    pWVar1 = (this->fields).worldNetwork;
    if ((pMVar5 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
       (this_00 = (pMVar5->fields).bp, this_00 != (BytePacker *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                (this_00,0,(MethodInfo *)0x0);
      pMVar6 = (this->fields).gameDataQuery;
      if ((pMVar6 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
         (pWVar1 != (WorldNetwork *)0x0)) {
        WorldNetwork::WorldNetwork_CreateGameWorldFromQueryData
                  (pWVar1,(pMVar5->fields).bp,(pMVar6->fields).instigatorActorNumber,
                   (MethodInfo *)0x0);
        (this->fields).gameDataQuery = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0;
        return;
      }
    }
  }
  func_?(0);
  pEVar3 = extraout_ECX;
  pEVar4 = extraout_EDX;
code_?:
  func_?(pEVar3,pEVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar2 = (undefined4 *)&stack0xffffff80;
  func_?();
  if (userList == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_UserList_is_null,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = puVar1;
    return;
  }
  pMVar3 = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  pMVar4 = pMVar3;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)pMVar3,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  pMVar5 = (MethodInfo *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                     ((Dictionary_2_WinningConditionType_System_Object_ *)userList,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                     );
  if (pMVar5 != (MethodInfo *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffff8c,
               (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
               pMVar5,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
              );
    while (cVar6 = func_?(), cVar6 != '\0') {
      piVar7 = (int *)func_?();
      if (piVar7 == (int *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar7 + 0x20) != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar7 = (int *)func_?();
      pSVar8 = (String *)*piVar7;
      key = (Type *)func_?();
      method_00 = userList;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
      Dictionary_2_System_Type_Pool__get_Item
                ((Dictionary_2_System_Type_Pool_ *)userList,key,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                );
      this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
      pMVar9 = (this->fields).playerContainer;
      if ((pMVar9 == (MVPlayerContainer *)0x0) ||
         (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar9,pMVar5),
         this_01 == (MVLocalPlayer *)0x0)) goto code_?;
      pMVar5 = (MethodInfo *)&UNK_?;
      pMVar3 = pMVar4;
      pSVar10 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,
                          (MethodInfo *)method_00);
      pMVar4 = pMVar3;
      if (pSVar8 != pSVar10) {
        if (this_00 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0xb,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0x59,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0xa9,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0x9a,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        func_?();
        actorNumber = 0xd2;
        puVar2 = (undefined4 *)&UNK_?;
        value = this_00;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0xd2,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        func_?();
        pSVar8 = (String *)0xdf;
        profileID = &UNK_?;
        level = this_00;
        pMVar4 = 
        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0xdf,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar3 = 
        MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
        ;
        pSVar10 = (String *)func_?();
        Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar10,pMVar3);
        isReady = 0x7e;
        playerPlanetDataRemote = this_00;
        pMVar3 = 
        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0xe0,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        pMVar5 = 
        MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
        ;
        pSVar10 = (String *)func_?();
        userProfileData =
             (UserProfileData *)
             Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar10,pMVar5);
        puVar1 = &UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0xbc,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        puVar11 = (undefined1 *)func_?();
        userList = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__MVPlayer;
        buildTarget = CONCAT31((int3)((uint)pMVar4 >> 8),*puVar11);
        this = (MVNetworkGame *)&UNK_?;
        this_02 = (MVPlayer *)func_?();
        MVPlayer::MVPlayer__ctor_1
                  (this_02,actorNumber,(int32_t)profileID,(int32_t)level,pSVar8,buildTarget,
                   userProfileData,isReady,(PlayerPlanetDataRemote *)playerPlanetDataRemote,
                   (MethodInfo *)0x0);
        if (this_02 == (MVPlayer *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
        ObjectPool_1_System_Object__set_countAll
                  ((ObjectPool_1_System_Object_ *)this_02,(int32_t)value,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__get_Item
                  (this_00,0xf5,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                  );
        pMVar4 = 
        MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
        ;
        pSVar8 = (String *)func_?();
        spawnRolesRuntimeData =
             Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43(pSVar8,pMVar4);
        this_03 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
        WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
        WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_03,(MethodInfo *)0x0);
        pMVar5 = (MethodInfo *)0x0;
        MVPlayer::MVPlayer_SetupSpawnRoleManager
                  (this_02,(ISpawnRoleChangeHandler *)this_03,
                   (SpawnRolesRuntimeData *)spawnRolesRuntimeData,(MethodInfo *)0x0);
        if (pMVar3 == (MethodInfo *)0x0) goto code_?;
        pMVar4 = pMVar3;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pMVar3,(UIPushOption__Enum)this_02,
                   MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
      }
    }
    *puVar2 = 0x155;
    func_?();
    pMVar9 = (this->fields).playerContainer;
    if (pMVar9 != (MVPlayerContainer *)0x0) {
      MVPlayerContainer::MVPlayerContainer_Add_1
                (pMVar9,(List_1_MVPlayer_ *)pMVar3,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = puVar1;
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void CreatePrivateClasses() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreatePrivateClasses
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (ScaleAnimationBase *)func_?(TypeInfo__MVNetworkGame__EventHandling);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01._._._.m_CachedPtr =
       (Behaviour__Fields)
       func_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                      );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01._._._.m_CachedPtr,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
            );
  (this_00->fields)._._ = this_01._._._.m_CachedPtr;
  this_02 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (this_02 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::Common::MVOperationCodes]::
    HashSet_1_MV_Common_MVOperationCodes__Add
              ((HashSet_1_MV_Common_MVOperationCodes_ *)this_02,
               MVOperationCodes__Enum_SetGamePassTierToSeenOperation,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    (this_00->fields).state = (int32_t)this_02;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_retaddr);
    (pSVar1->fields)._._._._.m_CachedPtr = this_00;
    method_00 = TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>;
    this_03 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package___ctor
              (this_03,
               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
              );
    (pSVar1->fields).originalScale.x = (float)this_03;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
    (pSVar1->fields).originalScale.y = (float)this;
    (this->fields).eventHandling = (MVNetworkGame_EventHandling *)pSVar1;
    this_04 = (TextCommand_Command *)
              func_?(TypeInfo__MVNetworkGame__OperationResponseHandling);
    TextCommand+Command::TextCommand_Command__ctor(this_04,(String__Array *)this,(MethodInfo *)0x0);
    (this->fields).operationResponseHandling = (MVNetworkGame_OperationResponseHandling *)this_04;
    this_05 = (MVNetworkGame_StatusChangedHandling *)
              func_?(TypeInfo__MVNetworkGame__StatusChangedHandling);
    MVNetworkGame+StatusChangedHandling::MVNetworkGame_StatusChangedHandling__ctor
              (this_05,this,(MethodInfo *)0x0);
    (this->fields).statusChangedHandling = this_05;
    pSVar1 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    (pSVar1->fields).originalScale.y = (float)TypeInfo__System__String->static_fields->Empty;
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,in_stack_2);
    (pSVar1->fields).state = (int32_t)this;
    peer = (this->fields)._Peer_k__BackingField;
    (pSVar1->fields).originalScale.x = (float)peer;
    this_06 = (OperationResponsePendingManager *)func_?();
    OperationResponsePendingManager::OperationResponsePendingManager__ctor
              (this_06,peer,(MethodInfo *)0x0);
    (pSVar1->fields)._._._._.m_CachedPtr = this_06;
    (this->fields).operationRequests = (MVNetworkGame_OperationRequests *)pSVar1;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DebugReturn(DebugLevel, String) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_DebugReturn
               (MVNetworkGame *this,DebugLevel__Enum level,String *debug,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((level & 0xff) != DebugLevel__Enum_ERROR) {
    if ((level & 0xff) != DebugLevel__Enum_WARNING) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)debug,(MethodInfo *)0x0)
      ;
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)debug,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this,StringLiteral_GenerateTexture,(MethodInfo *)0x0);
  if (this != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (this,
                         GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                        );
    if (this_00 != (Worker *)0x0) {
      GenerateTextureData::GenerateTextureData_GenerateTextureDataCameraView
                ((GenerateTextureData *)this_00,callback,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (seatBase != (VehicleSeatBase *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)seatBase,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  (&VStack_3,pTVar2,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)seatBase,(MethodInfo *)0x0);
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
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)seatBase,
                       (MethodInfo *)0x0);
            pDVar6 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
            uVar7 = CONCAT44(pDVar6,&UNK_?);
            pMVar8 = 
            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            ;
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            position.z = (float)pMVar8;
            position.x = (float)(int)uVar7;
            position.y = (float)(int)((ulonglong)uVar7 >> 0x20);
            MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
                      (position,pDVar6,(MethodInfo *)0x0);
            rotation.y = VStack_3.x;
            rotation.x = fVar5;
            rotation.z = VStack_3.y;
            rotation.w = VStack_3.z;
            MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
                      (rotation,pDVar6,(MethodInfo *)0x0);
            pOVar9 = (Object *)func_?();
            if (pDVar6 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__Add
                        (pDVar6,0x8d,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              pOVar9 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__Add
                        (pDVar6,0x8e,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        );
              return pDVar6;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  pDVar6 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar10)();
  return pDVar6;
}


/* Void HandleGameSnapshotData(BytePacker, QueryType, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
               (MVNetworkGame *this,BytePacker *bytePacker,QueryType__Enum queryType,bool dataLeft,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameDataQuery;
  this_01 = (this->fields).playerContainer;
  if (this_00 == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
    if (this_01 == (MVPlayerContainer *)0x0) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    pMVar1 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar1,(MethodInfo *)0x0);
    pSVar3 = (ScaleAnimationBase *)
             func_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,method_00);
    (pSVar3->fields)._._._._.m_CachedPtr = bytePacker;
    (pSVar3->fields).state = (int32_t)pSVar2;
    *(undefined1 *)&(pSVar3->fields).originalScale.x = (undefined1)queryType;
    (this->fields).gameDataQuery = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)pSVar3;
  }
  else {
    if (this_01 == (MVPlayerContainer *)0x0) goto code_?;
    pMVar1 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar1,(MethodInfo *)0x0);
    pSVar3 = (ScaleAnimationBase *)
             func_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,in_stack_4);
    (pSVar3->fields)._._._._.m_CachedPtr = bytePacker;
    (pSVar3->fields).state = (int32_t)pSVar2;
    *(undefined1 *)&(pSVar3->fields).originalScale.x = (undefined1)queryType;
    if (this_00 == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) goto code_?;
    MVNetworkGame+GameDataQueryManager+GameDataQuery::
    MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
              (this_00,(MVNetworkGame_GameDataQueryManager_GameDataQuery *)pSVar3,(MethodInfo *)0x0)
    ;
  }
  if (dataLeft == 0) {
    pMVar5 = (this->fields).eventHandling;
    if (pMVar5 == (MVNetworkGame_EventHandling *)0x0) {
code_?:
      func_?(0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (pMVar5->fields).cacheEvents = 1;
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0)
    ;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__MVNetworkGame__CreateGame__,(MethodInfo *)0x0);
    coroutine = WaitForFrames::WaitForFrames_Frames(3,(UnityAction *)this_02,(MethodInfo *)0x0);
    Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
  }
  return;
}


/* Void InitializeManagers() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_InitializeManagers
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WorldNetwork *)func_?(TypeInfo__WorldNetwork);
  WorldNetwork::WorldNetwork__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).worldNetwork = this_00;
  if (this_00 != (WorldNetwork *)0x0) {
    worldObjectClientManagerNetwork =
         (MVWorldObjectClientManagerNetwork *)
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    this_01 = (MVLocalObjectController *)func_?(TypeInfo__MVLocalObjectController);
    MVLocalObjectController::MVLocalObjectController__ctor
              (this_01,worldObjectClientManagerNetwork,(MethodInfo *)0x0);
    (this->fields)._PlayerController_k__BackingField = this_01;
    this_02 = (MVMaterialRepository *)func_?(TypeInfo__MVMaterialRepository);
    MVMaterialRepository::MVMaterialRepository__ctor(this_02,(MethodInfo *)0x0);
    (this->fields)._MaterialRepository_k__BackingField = this_02;
    this_03 = (PlayerRepository *)func_?(TypeInfo__PlayerRepository);
    PlayerRepository::PlayerRepository__ctor(this_03,(MethodInfo *)0x0);
    (this->fields)._PlayerRepository_k__BackingField = this_03;
    this_04 = (ShopRepository *)func_?(TypeInfo__ShopRepository);
    ShopRepository::ShopRepository__ctor(this_04,(MethodInfo *)0x0);
    (this->fields)._ShopRepository_k__BackingField = this_04;
    this_05 = (GameTierShopRepository *)func_?(TypeInfo__GameTierShopRepository);
    GameTierShopRepository::GameTierShopRepository__ctor(this_05,(MethodInfo *)0x0);
    (this->fields)._GameTierShopRepository_k__BackingField = this_05;
    this_06 = (AvatarRepository *)func_?();
    AvatarRepository::AvatarRepository__ctor(this_06,(MethodInfo *)0x0);
    (this->fields)._AvatarShopRepository_k__BackingField = this_06;
    this_07 = (FriendList *)func_?();
    FriendList::FriendList__ctor(this_07,(MethodInfo *)0x0);
    (this->fields)._Friends_k__BackingField = this_07;
    this_08 = (MVGameModeChangeNotifier *)func_?();
    MVGameModeChangeNotifier::MVGameModeChangeNotifier__ctor(this_08,(MethodInfo *)0x0);
    pMVar1 = (this->fields).teamManager;
    (this->fields)._GameStateController_k__BackingField = this_08;
    pGVar2 = (this->fields).gameStatCounterManager;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)pGVar2,
               MethodInfo__GameStatCounterManager__OnTeamAdded_System__Object__MV__WorldObject__TeamEventArgs_
               ,
               MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__EventHandler_System__Object__void__
              );
    if (pMVar1 != (MVTeamManager *)0x0) {
      MVTeamManager::MVTeamManager_add_OnTeamAdded
                (pMVar1,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields).teamManager;
      pGVar2 = (this->fields).gameStatCounterManager;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)pGVar2,
                 MethodInfo__GameStatCounterManager__OnTeamRemoved_System__Object__MV__WorldObject__TeamEventArgs_
                 ,
                 MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__EventHandler_System__Object__void__
                );
      if (pMVar1 != (MVTeamManager *)0x0) {
        MVTeamManager::MVTeamManager_add_OnTeamRemoved
                  (pMVar1,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar3,(MethodInfo *)0x0);
        this_09 = (WinningConditionManager *)
                  func_?(TypeInfo__WinningConditionManagerClient);
        AdvancedGhostBodyRotateWeaponPackage::AdvancedGhostBodyRotateWeaponPackage__ctor
                  ((AdvancedGhostBodyRotateWeaponPackage *)this_09,(MethodInfo *)0x0);
        (this->fields)._WinningConditionManager_k__BackingField = this_09;
        if (this_09 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Initialize
                    (this_09,(this->fields).gameStatCounterManager,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean Join() */

bool Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Join(MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).connState = 2;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    pSVar2 = (pGVar1->fields).serverIP;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_MVGameControllerBase_GameSession,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    pPVar3 = (this->fields)._Peer_k__BackingField;
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if ((pGVar1 != (GameSessionData *)0x0) && (pPVar3 != (PhotonPeer *)0x0)) {
      pPVar4 = pPVar3->klass;
      pIStack5 = (pPVar4->vtable).Connect_1.methodPtr;
      pSStack6 = StringLiteral_MVGameServer;
      bVar7 = (*(code *)(pPVar4->vtable).Connect.method)();
      return bVar7;
    }
  }
  pIStack5 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Void LoadModeGui() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_LoadModeGui
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LevelLoader((MethodInfo *)0x0);
  gameMode = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  tourist = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  object = (this->fields).operationRequests;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)object,MethodInfo__MVNetworkGame__OperationRequests__Syncronize__,
             (MethodInfo *)0x0);
  if (this_00 != (LevelLoader *)0x0) {
    LevelLoader::LevelLoader_LoadScenes
              (this_00,gameMode,tourist,(Action *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnAddItemToInventory(Dictionary`2[System.Byte,System.Object], Int16) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddItemToInventory
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               int16_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVNetworkGame___OnAddItemToInventory_c__AnonStorey0;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  if (this_02 != (ScaleAnimationBase *)0x0) {
    (this_02->fields)._._._._.m_CachedPtr = returnValues;
    if (returnCode == -1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_add_to_inventory__This,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar1 != (IEditModeUI *)0x0) {
        iVar2 = func_?();
        if ((iVar2 != 0) &&
           (*(JumpState_OnWallJumpDelegate **)(iVar2 + 0x18) != (JumpState_OnWallJumpDelegate *)0x0)
           ) {
          JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                    (*(JumpState_OnWallJumpDelegate **)(iVar2 + 0x18),(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (returnValues,0x16,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?();
        data = (this_02->fields)._._._._.m_CachedPtr;
        this_03 = (InventoryItem *)func_?(TypeInfo__InventoryItem);
        InventoryItem::InventoryItem__ctor_1(this_03,data,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        pIVar4 = TypeInfo__IEditModeUI;
        if (pIVar1 != (IEditModeUI *)0x0) {
          this_04 = (PlayerInventoryRepository *)func_?();
          if (this_04 != (PlayerInventoryRepository *)0x0) {
            PlayerInventoryRepository::PlayerInventoryRepository_AddItem
                      (this_04,this_03,(MethodInfo *)0x0);
            if (this_03 != (InventoryItem *)0x0) {
              this_00 = (MVItemBusinessLogic *)(pIVar4->_0).this_arg.data.typeHandle;
              if (this_00 != (MVItemBusinessLogic *)0x0) {
                MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                          (this_00,(this_03->fields).itemID,(this_03->fields).resellable,
                           (this_03->fields).itemCategoryID,(this_03->fields).itemTypeID,
                           (this_03->fields).name,(MethodInfo *)0x0);
                id = TypeInfo__MVWorldObjectClient__CallBackDelegate;
                this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_05,(Object *)this_02,
                           MethodInfo__MVNetworkGame___OnAddItemToInventory_c__AnonStorey0____m__0_MVWorldObjectClient_
                           ,(MethodInfo *)0x0);
                this_01 = *(Collection_1_VoxelHit_ **)&(pIVar4->_1).interfaces_count;
                if (this_01 != (Collection_1_VoxelHit_ *)0x0) {
                  this_06 = (MVWorldObjectClientManager *)
                            mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
                  if (this_06 != (MVWorldObjectClientManager *)0x0) {
                    pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                       (this_06,(int32_t)id,(MethodInfo *)0x0);
                    if (pMVar5 != (MVWorldObject *)0x0) {
                      (*(code *)pMVar5->klass[1]._1.native_size)();
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
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnAddLinkEvent(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddLinkEvent
               (MVNetworkGame *this,int32_t fromID,int32_t toID,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = (Link_1 *)func_?(TypeInfo__MV__WorldObject__Link);
  MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor_1(this_02,(MethodInfo *)0x0);
  if (this_02 != (Link_1 *)0x0) {
    (this_02->fields).inputWOID = toID;
    (this_02->fields).outputWOID = fromID;
    (this_02->fields).id = linkID;
    this_00 = (this->fields).worldNetwork;
    if (this_00 != (WorldNetwork *)0x0) {
      WorldNetwork::WorldNetwork_AddLink_1(this_00,this_02,(MethodInfo *)0x0);
      this_01 = (this->fields)._LogicObjectManager_k__BackingField;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (LogicObjectManagerClient *)0x0) {
        LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                  (this_01,this_02,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        message = mscorlib.dll::System::String::String_Concat
                            ((Object *)StringLiteral_reset_count_,arg1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnAddObjectLinkEvent(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
               (MVNetworkGame *this,int32_t fromID,int32_t toID,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  obj = (Dictionary_2_System_String_System_Object_ *)StringLiteral_Item_not_added_to_inventory;
  if (returnCode == 0) {
    returnCode = itemID;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&returnCode);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    obj = (Dictionary_2_System_String_System_Object_ *)
          mscorlib.dll::System::String::String_Concat
                    ((Object *)StringLiteral_Successfully_added_model_to_your,arg1,(MethodInfo *)0x0
                    );
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).OnAddWorldObjectToInventoryCallbackDev;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,obj,
               MethodInfo__UnityEngine__Events__UnityAction<System::String>__Invoke_System__String_)
    ;
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
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  puStack_11 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((outData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (puStack_11 = (undefined4 *)&stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                         ((Dictionary_2_WinningConditionType_System_Object_ *)outData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
    pDVar12 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_13,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                       );
    pDStack_7 = (pDVar12->host_enumerator).dictionary;
    iStack_8 = (pDVar12->host_enumerator).next;
    iStack_9 = (pDVar12->host_enumerator).stamp;
    iStack_10 = (pDVar12->host_enumerator).current.key;
    pOStack_6 = (pDVar12->host_enumerator).current.value;
    uStack_1 = 0;
    while( true ) {
      cVar14 = func_?();
      if (cVar14 == '\0') {
        *puStack_11 = 0x51;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      piVar15 = (int *)func_?();
      if (piVar15 == (int *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar15 + 0x20) != (TypeInfo__System__Int32->_0).element_class) break;
      piVar16 = (int32_t *)func_?(piVar15);
      key = *piVar16;
      this_02 = (AvatarRepositoryItem *)func_?(TypeInfo__AvatarRepositoryItem);
      AvatarRepositoryItem::AvatarRepositoryItem__ctor(this_02,outData,key,(MethodInfo *)0x0);
      this_00 = (this->fields)._AvatarShopRepository_k__BackingField;
      if (this_00 == (AvatarRepository *)0x0) goto code_?;
      AvatarRepository::AvatarRepository_AddItem(this_00,this_02,(MethodInfo *)0x0);
    }
    func_?(piVar15,TypeInfo__System__Int32);
  }
code_?:
  func_?(0);
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnCloneTempWorldObjectWithOriginalReferenceEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::
     MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (eventData == (EventData *)0x0) {
code_?:
    func_?(0);
  }
  else {
    unaff_ESI = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x48,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Int32;
    if (unaff_ESI == (Object *)0x0) goto code_?;
    iVar1 = func_?(unaff_ESI,TypeInfo__System__Int32);
    if (iVar1 == 0) goto code_?;
    if (*(int *)(iVar1 + 0xc) != 0) {
      id = *(Int32__Array__Class **)(iVar1 + 0x10);
      this_00 = (this->fields).worldNetwork;
      unaff_EBX = id;
      if (this_00 != (WorldNetwork *)0x0) {
        this_01 = (MVWorldObjectClientManager *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_01,(int32_t)id,(MethodInfo *)0x0);
          unaff_EBX = (Int32__Array__Class *)CONCAT31((int3)((uint)id >> 8),1);
          unaff_ESI = (Object *)0x0;
          if (pMVar2 != (MVWorldObject *)0x0) {
            pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                     (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                               (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
            if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Extensions->_1).cctor_started == 0)) {
              func_?(TypeInfo__Extensions);
            }
            bVar4 = Extensions::Extensions_ContainsObscuredKey
                              (pDVar3,StringLiteral_OriginalId,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                       (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                                 (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started ==
                  0)) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              }
              pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_op_Implicit
                                 ((ObscuredInt *)&stack0xffffffe8,(int32_t)id,(MethodInfo *)0x0);
              iVar6 = pOVar5->currentCryptoKey;
              iVar7 = pOVar5->hiddenValue;
              iVar8 = pOVar5->fakeValue;
              if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Extensions->_1).cctor_started == 0)) {
                func_?(TypeInfo__Extensions);
              }
              value.hiddenValue = iVar7;
              value.currentCryptoKey = iVar6;
              value.fakeValue = iVar8;
              value.inited = pOVar5->inited;
              value._13_3_ = *(undefined3 *)&pOVar5->field_0xd;
              Extensions::Extensions_SetObscuredType_2
                        (pDVar3,StringLiteral_OriginalId,value,
                         void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                        );
            }
            else {
              unaff_EBX = (Int32__Array__Class *)0x0;
            }
            MVNetworkGame_OnCloneWorldObjectTreePosition(this,eventData,(MethodInfo *)0x0);
            if ((char)unaff_EBX != '\0') {
              pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                       (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)();
              if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Extensions->_1).cctor_started == 0)) {
                func_?();
              }
              Extensions::Extensions_RemoveObscuredKey
                        (pDVar3,StringLiteral_OriginalId,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
      goto code_?;
    }
  }
  uVar9 = func_?(0,0);
  func_?(uVar9);
code_?:
  func_?(unaff_ESI,unaff_EBX);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWorldObjectClient OnCloneWorldObjectTree(EventData) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree
          (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = eventData;
  if (eventData == (EventData *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    uVar2 = func_?(uVar1);
  }
  else {
    unaff_EBX = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x48,(MethodInfo *)0x0);
    if (unaff_EBX == (String *)0x0) {
      iVar3 = 0;
    }
    else {
      pIVar4 = TypeInfo__System__Int32;
      iVar3 = func_?(unaff_EBX,TypeInfo__System__Int32,TypeInfo__System__Int32);
      if (iVar3 == 0) goto code_?;
    }
    pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (this_01,0x14,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar5);
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      func_?(pOVar5);
      pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_01,0x3a,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar5);
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      func_?(pOVar5);
      pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_01,0x5c,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar5);
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar6 = (int32_t *)func_?(pOVar5);
      cloneObjectLinkId = *piVar6;
      pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_01,0x65,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__System__Boolean,pOVar5);
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      puVar7 = (undefined1 *)func_?(pOVar5);
      eventData = (EventData *)CONCAT13(*puVar7,eventData._0_3_);
      pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&eventData + 3);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      unaff_EBX = mscorlib.dll::System::String::String_Concat
                            ((Object *)StringLiteral_CloneToRootGroup_,pOVar5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_EBX,(MethodInfo *)0x0);
      pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (this_01,0x80,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar5);
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar6 = (int32_t *)func_?(pOVar5);
      this_00 = (this->fields).worldNetwork;
      if (iVar3 == 0) goto code_?;
      if (*(uint *)(iVar3 + 0xc) == 0) goto code_?;
      if (1 < *(uint *)(iVar3 + 0xc)) {
        if (this_00 != (WorldNetwork *)0x0) {
          pMVar8 = WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                             (this_00,0,*piVar6,(bool)cloneObjectLinkId,*(int32_t *)(iVar3 + 0x10),
                              *(int32_t *)(iVar3 + 0x14),0,cloneObjectLinkId,(MethodInfo *)0x0);
          return pMVar8;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  pIVar4 = (Int32__Array__Class *)&UNK_?;
  func_?(uVar2);
code_?:
  func_?(unaff_EBX,pIVar4);
  pcVar9 = (code *)swi(3);
  pMVar8 = (MVWorldObjectClient *)(*pcVar9)();
  return pMVar8;
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
  VStack_4.z = 0.0;
  VStack_4.y = (float)&UNK_?;
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
    func_?(_UNK_?);
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
        id = *piVar5;
        this_00 = (this->fields).worldNetwork;
        if ((this_00 != (WorldNetwork *)0x0) &&
           (this_01 = (MVWorldObjectClientManager *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0),
           this_01 != (MVWorldObjectClientManager *)0x0)) {
          pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_01,id,(MethodInfo *)0x0);
          pMVar7 = TypeInfo__MVCollectible;
          if (pMVar6 == (MVWorldObject *)0x0) {
            return;
          }
          bVar8 = (TypeInfo__MVCollectible->_1).naturalAligment;
          if (((pMVar6->klass->_1).naturalAligment < bVar8) ||
             ((MVCollectible__Class *)(pMVar6->klass->_1).typeHierarchy[bVar8 - 1] !=
              TypeInfo__MVCollectible)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          pMVar10 = (MVWorldObject *)0x0;
          if (bVar9) {
            pMVar10 = pMVar6;
          }
          if (pMVar10 == (MVWorldObject *)0x0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Attempt_to_call_WO_that_is_not_c,(MethodInfo *)0x0);
            return;
          }
          iVar11 = func_?();
          if (iVar11 != 0) {
            piVar12 = (int *)func_?(pMVar6,pMVar7);
            (**(code **)(*piVar12 + 0x370))(piVar12,uVar4,*(undefined4 *)(*piVar12 + 0x374));
            return;
          }
        }
      }
    }
  }
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  this_01 = (MVNetworkGame *)(this->fields).eventHandling;
  if (this_01 == (MVNetworkGame *)0x0) {
    uStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_1 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffd4;
  puVar6 = &stack0xffffffd4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  func_?();
  if (*(bool *)&(this_01->fields).ReceivedAvatarBodiesFromQuery == 0) {
    puStack_5 = &stack0xffffffd4;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (puStack_5 = &stack0xffffffd4, (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      puStack_5 = &stack0xffffffd4;
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar7 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    this = this_01;
    unaff_ESI = eventData;
    if (MVar7 != MVJoinState__Enum_Playing) {
      if (eventData == (EventData *)0x0) goto code_?;
      this._1_3_ = (undefined3)((uint)this_01 >> 8);
      this = (MVNetworkGame *)CONCAT31(this._1_3_,(eventData->fields).Code);
      if ((((uint)(TypeInfo__JoinUIUpdater->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__JoinUIUpdater->_1).cctor_started == 0)) {
        func_?();
      }
      JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI((MVEventCodes__Enum)this,(MethodInfo *)0x0);
    }
    if (eventData != (EventData *)0x0) {
      this = (MVNetworkGame *)CONCAT31(this._1_3_,(eventData->fields).Code);
      uStack_1 = 0;
      MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
                ((MVNetworkGame_EventHandling *)this_01,(MVEventCodes__Enum)this,eventData,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
  }
  else {
    this_00 = (this_01->fields).ReceivedAccessoryData;
    puStack_5 = &stack0xffffffd4;
    if (this_00 != (Action_1_String_ *)0x0) {
      puStack_5 = &stack0xffffffd4;
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
                 (SmoothPhysicsMovement_Package *)eventData,
                 MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                );
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
  }
code_?:
  func_?(0);
  apEStack_8[0] = unaff_ESI->klass;
  func_?(apEStack_8,&UNK_?);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnFriendUpdateEvent(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
               (MVNetworkGame *this,int32_t friendID,int32_t profileID,FriendStatus__Enum status,
               MethodInfo *method)

{
  this_00 = (MethodInfo *)(this->fields)._Friends_k__BackingField;
  if (this_00 == (MethodInfo *)0x0) {
    uStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_1 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (pMVar6 = MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
     pMVar6 != (MVLocalPlayer *)0x0)) {
    pOVar7 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar6,(MethodInfo *)0x0);
    if ((Object *)profileID == pOVar7) {
      if ((Dictionary_2_System_Int32_Friend_ *)this_00->parameters !=
          (Dictionary_2_System_Int32_Friend_ *)0x0) {
        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00->parameters,friendID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                          );
        if (bVar8 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Tried_updating_friend_that_doesn,(MethodInfo *)0x0);
code_?:
          this_03 = (AvatarMotor_OnActiveBounceDelegate *)
                    ((FriendList__Fields *)&this_00->invoker_method)->OnFriendListUpdated;
          if (this_03 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
            AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                      (this_03,(MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        if (status == FriendStatus__Enum_Deleted) {
          if ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)this_00->parameters !=
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                      ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)this_00->parameters,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                      );
            goto code_?;
          }
        }
        else {
          this_02 = (MVWorldInventory_OnWorldInventoryChangeDelegate *)this_00->name;
          if (this_02 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            if (((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)this_00->parameters ==
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) ||
               (pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                     *)this_00->parameters,friendID,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                   ),
               this_02 == (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0))
            goto code_?;
            MVWorldInventory+OnWorldInventoryChangeDelegate::
            MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke
                      (this_02,(MVWorldInventory *)pTVar9,(MethodInfo *)0x0);
          }
          if (((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)this_00->parameters !=
               (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)0x0) &&
             (pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                   *)this_00->parameters,friendID,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                 ), pTVar9 != (TerrainUtility_TerrainMap *)0x0)) {
            (pTVar9->fields).m_patchSize.z = (float)status;
            data = (Dictionary_2_System_Object_System_Object_ *)func_?();
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pSVar10 = (String *)func_?();
            if (((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)this_00->parameters !=
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) &&
               (value = (CrossPlatformInputManager_VirtualButton *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                    *)this_00->parameters,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ), data != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)data,pSVar10,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
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
    else {
      pMVar11 = this_00;
      FriendList::FriendList_RemoveFromPendingByProfileID
                ((FriendList *)this_00,profileID,(MethodInfo *)0x0);
      if (status == FriendStatus__Enum_Deleted) goto code_?;
      this_01 = (Action_1_UIPushOption_ *)this_00->return_type;
      if (this_01 != (Action_1_UIPushOption_ *)0x0) {
        this_04 = FriendList::FriendList_GetOnlineFriends((FriendList *)this_00,(MethodInfo *)0x0);
        if ((this_04 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) ||
           (pOVar7 = System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                     KeyValuePair`2[System::Object,System::Object],System::Object]::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                 *)this_04,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                               ), this_01 == (Action_1_UIPushOption_ *)0x0)) goto code_?;
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_01,(UIPushOption__Enum)pOVar7,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_05 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((this_05 != (MVAvatar *)0x0) &&
          (this_06 = MVAvatar::MVAvatar_get_Shield(this_05,(MethodInfo *)0x0),
          this_06 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
         (this_07 = MVPlayerContainer::MVPlayerContainer_get_Values
                              ((MVPlayerContainer *)this_06,pMVar11),
         this_07 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                    *)&stack0xffffffb4,
                   (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                   this_07,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                  );
        uStack_1 = 0;
        do {
          cVar12 = func_?();
          if (cVar12 == '\0') {
            this_08 = (GamePointGainEffect *)0x0;
            break;
          }
          this_08 = (GamePointGainEffect *)func_?();
          if (this_08 == (GamePointGainEffect *)0x0) goto code_?;
          pOVar7 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_08,
                              (MethodInfo *)0x0);
        } while ((Object *)profileID != pOVar7);
        uStack_1 = 0xffffffff;
        pMVar11 = 
        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
        ;
        func_?();
        if (this_08 != (GamePointGainEffect *)0x0) {
          pSVar10 = TM::TM__(StringLiteral_Accepted_friend_request_from__0_,(MethodInfo *)0x0);
          iVar13 = GamePointGainEffect::GamePointGainEffect_get_ID(this_08,(MethodInfo *)0x0);
          if (iVar13 == 0) goto code_?;
          pOVar7 = *(Object **)(iVar13 + 0xc);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar10 = mscorlib.dll::System::String::String_Format(pSVar10,pOVar7,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar11 = (MethodInfo *)0x3;
          NotificationController::NotificationController_PushNotification
                    (pSVar10,(Sprite *)0x0,3,(MethodInfo *)0x0);
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (pMVar6 = MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
           pMVar6 != (MVLocalPlayer *)0x0)) {
          pOVar7 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                   TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar6,pMVar11);
          FriendList::FriendList_AddFriend
                    ((FriendList *)this_00,friendID,(int32_t)pOVar7,profileID,status,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGameCreated(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGameCreated
               (MVNetworkGame *this,Object *sender,
               InitializedGameQueryDataEventArgs *initializedGameQueryDataEventArgs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    pEVar2 = (pWVar1->fields)._.InitializedGameQueryData;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
               ,
               MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
              );
    pEVar4 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pEVar2 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    if (pEVar4 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      if (pEVar4->klass == TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
        pEVar2 = pEVar4;
      }
      if (pEVar2 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
    }
    (pWVar1->fields)._.InitializedGameQueryData = pEVar2;
    object = (this->fields).eventHandling;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)object,
               MethodInfo__MVNetworkGame__EventHandling__UncacheEventsFromJoin__,(MethodInfo *)0x0);
    coroutine = WaitForFrames::WaitForFrames_Frames(1,(UnityAction *)pUVar3,(MethodInfo *)0x0);
    Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (eventData != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,99,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar2 = (int32_t *)func_?(pOVar1);
      key = *piVar2;
      this_00 = *(MVNetworkGame_GameDataQueryManager **)(unaff_ESI + 0x20);
      if (this_00 != (MVNetworkGame_GameDataQueryManager *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this_00->fields).gameDataQueries;
        if (this_01 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          gameDataQuery =
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,key,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                         );
          MVNetworkGame+GameDataQueryManager::
          MVNetworkGame_GameDataQueryManager_InitializeGameQueryData
                    (this_00,(MVNetworkGame_GameDataQueryManager_GameDataQuery *)gameDataQuery,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnGetActiveAvatarResponse(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
               (MVNetworkGame *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnActiveAvatar;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,woid,MethodInfo__System__Action<int>__Invoke_int_);
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  if (builtInItemBusinessData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb0,
                        (Dictionary_2_WinningConditionType_System_Object_ *)builtInItemBusinessData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_8 = 0xc4;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      item = (MVItem *)func_?();
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)item,(MethodInfo *)0x0);
      pPVar11 = (Pool *)func_?();
      if ((item == (MVItem *)0x0) || (pPVar11 == (Pool *)0x0)) goto code_?;
      pSVar12 = (String__Class *)TypeInfo__System__Int32;
      if ((pPVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar13 = (int32_t *)func_?(pPVar11);
      (item->fields).itemID = *piVar13;
      pDVar14 = (Dictionary_2_System_Type_Pool_ *)
               func_?(&KStack_7,
                               MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                              );
      if (pDVar14 == (Dictionary_2_System_Type_Pool_ *)0x0) {
        this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
      }
      else {
        bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar14->klass->_1).naturalAligment < bVar15) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar14->klass->_1).typeHierarchy[bVar15 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar16) {
          this_01 = pDVar14;
        }
        if (this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      }
      builtInItemBusinessData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x70,builtInItemBusinessData._0_3_)
      ;
      pTVar17 = (Type *)func_?(TypeInfo__System__Byte,(int)&builtInItemBusinessData + 3);
      if ((this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
         (pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_01,pTVar17,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pPVar11 == (Pool *)0x0)) goto code_?;
      pIVar18 = TypeInfo__System__Int32;
      if ((pPVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) break;
      piVar13 = (int32_t *)func_?(pPVar11);
      (item->fields).itemCategoryID = *piVar13;
      uStack_19 = 0xf;
      pTVar17 = (Type *)func_?(TypeInfo__System__Byte,&uStack_19);
      pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,pTVar17,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar11 == (Pool *)0x0) goto code_?;
      pIVar18 = TypeInfo__System__Int32;
      if ((pPVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) break;
      piVar13 = (int32_t *)func_?(pPVar11);
      (item->fields).itemTypeID = *piVar13;
      uStack_20 = 10;
      pTVar17 = (Type *)func_?(TypeInfo__System__Byte,&uStack_20);
      pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,pTVar17,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pPVar21 = (Pool *)0x0;
      if (pPVar11 != (Pool *)0x0) {
        if ((String__Class *)pPVar11->klass == TypeInfo__System__String) {
          pPVar21 = pPVar11;
        }
        pSVar12 = TypeInfo__System__String;
        if (pPVar21 == (Pool *)0x0) goto code_?;
      }
      (item->fields).name = (String *)pPVar21;
      uStack_22 = 100;
      pTVar17 = (Type *)func_?(TypeInfo__System__Byte,&uStack_22);
      pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,pTVar17,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar11 == (Pool *)0x0) goto code_?;
      pIVar18 = (Int32__Class *)TypeInfo__System__Boolean;
      if ((pPVar11->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class) break;
      pbVar23 = (bool *)func_?(pPVar11);
      (item->fields).resellable = *pbVar23;
      this_00 = (this->fields).itemBusinessLogic;
      if (this_00 == (MVItemBusinessLogic *)0x0) goto code_?;
      MVItemBusinessLogic::MVItemBusinessLogic_AddItem(this_00,item,(MethodInfo *)0x0);
    }
    func_?(pPVar11,pIVar18);
  }
code_?:
  func_?(0);
  pPVar11 = extraout_ECX;
  pSVar12 = extraout_EDX;
code_?:
  func_?(pPVar11,pSVar12);
  pDVar14 = extraout_EDX_00;
code_?:
  func_?(pDVar14,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnGetGameBatch(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetGameBatch
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((eventData == (EventData *)0x0) ||
     (pDVar1 = (eventData->fields).Parameters,
     pDVar1 == (Dictionary_2_System_Byte_System_Object_ *)0x0)) {
code_?:
    pOVar2 = (Object *)func_?();
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__ContainsKey
                      (pDVar1,0xf5,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                      );
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral__eventData_Contains__byte_MVPara,(MethodInfo *)0x0);
      return;
    }
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0xfe,(MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar4 = (undefined4 *)func_?();
      unaff_EDI = (MVNetworkGame_GameDataQueryManager *)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (eventData,(uint8_t)*puVar4,(MethodInfo *)0x0);
      this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      unaff_EBX = TypeInfo__System__Byte;
      if (unaff_EDI == (MVNetworkGame_GameDataQueryManager *)0x0) {
        buffer = (Byte__Array *)0x0;
        pOVar5 = pOVar2;
      }
      else {
        buffer = (Byte__Array *)func_?(unaff_EDI,TypeInfo__System__Byte);
        pOVar5 = pOVar2;
        if (buffer == (Byte__Array *)0x0) goto code_?;
      }
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (this_02,buffer,(MethodInfo *)0x0);
      pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (eventData,0x85,(MethodInfo *)0x0);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__MV__Common__QueryType->_0).element_class
           ) goto code_?;
        puVar6 = (undefined1 *)func_?();
        unaff_EBX = (Byte__Array__Class *)0xffffffff;
        method_00 = (MethodInfo *)CONCAT13(*puVar6,(int3)pOVar5);
        pDVar1 = (eventData->fields).Parameters;
        if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                            (pDVar1,99,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                            );
          if (bVar3 != 0) {
            pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (eventData,99,(MethodInfo *)0x0);
            if (pOVar2 == (Object *)0x0) goto code_?;
            if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            puVar4 = (undefined4 *)func_?(pOVar2);
            unaff_EBX = (Byte__Array__Class *)*puVar4;
          }
          pDVar1 = (eventData->fields).Parameters;
          if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                              (pDVar1,100,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                              );
            if (bVar3 != 0) {
              pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (eventData,100,(MethodInfo *)0x0);
              if (pOVar2 == (Object *)0x0) goto code_?;
              if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class
                 ) goto code_?;
              func_?();
            }
            unaff_EDI = (this->fields).gameDataQueryManager;
            if (unaff_EDI != (MVNetworkGame_GameDataQueryManager *)0x0) {
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              eventData = (EventData *)
                          func_?(
                                         TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery
                                         );
              pvVar7 = (void *)0x0;
              pSVar8 = (ScaleAnimationBase *)eventData;
              ScaleAnimationBase::ScaleAnimationBase_Play
                        ((ScaleAnimationBase *)eventData,0.0,method_00);
              bVar9 = cRam_? == '\0';
              (((ScaleAnimationBase *)eventData)->fields)._._._._.m_CachedPtr = pvVar7;
              (((ScaleAnimationBase *)eventData)->fields).state = (int32_t)pSVar8;
              *(char *)&(((ScaleAnimationBase *)eventData)->fields).originalScale.x =
                   (char)((uint)method_00 >> 0x18);
              if (bVar9) {
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (unaff_EDI->fields).gameDataQueries;
              if (this_00 !=
                  (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0
                 ) {
                bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                   (int32_t)unaff_EBX,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                                  );
                this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)(unaff_EDI->fields).gameDataQueries;
                if (bVar3 == 0) {
                  if (this_01 !=
                      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Add
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                               (int32_t)unaff_EBX,(Object *)eventData,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                              );
code_?:
                    if (eventData._3_1_ == '\0') {
                      MVNetworkGame+GameDataQueryManager::
                      MVNetworkGame_GameDataQueryManager_OnGameQueryReady
                                (unaff_EDI,(int32_t)unaff_EBX,(MethodInfo *)0x0);
                    }
                    return;
                  }
                }
                else if (this_01 !=
                         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) {
                  this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                            ::
                            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                      (this_01,(int32_t)unaff_EBX,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                                      );
                  if (this_03 != (TerrainUtility_TerrainMap *)0x0) {
                    MVNetworkGame+GameDataQueryManager+GameDataQuery::
                    MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                              ((MVNetworkGame_GameDataQueryManager_GameDataQuery *)this_03,
                               (MVNetworkGame_GameDataQueryManager_GameDataQuery *)eventData,
                               (MethodInfo *)0x0);
                    eventData = (EventData *)unaff_EBX;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(pOVar2);
code_?:
  func_?(unaff_EDI,unaff_EBX);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_OnDBQueryResponse__outData_is_nu,(MethodInfo *)0x0);
  }
  itemCategories =
       (Dictionary_2_System_String_System_Int32_ *)
       func_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)itemCategories,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  if ((outData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          ((Dictionary_2_WinningConditionType_System_Object_ *)outData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                          ),
     this_00 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffb0,
               (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
               this_00,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      cVar4 = func_?();
      if (cVar4 == '\0') {
        uStack_1 = 0xffffffff;
        func_?();
        this_01 = (ItemCategories *)func_?();
        ItemCategories::ItemCategories__ctor(this_01,itemCategories,(MethodInfo *)0x0);
        (this->fields)._ItemCategories_k__BackingField = this_01;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      piVar5 = (int *)func_?();
      if (piVar5 == (int *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar5 + 0x20) != (TypeInfo__System__Int32->_0).element_class) break;
      func_?();
      key = (Type *)func_?();
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)outData,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (itemCategories == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      if (*(Il2CppClass **)(*piVar5 + 0x20) != (TypeInfo__System__Int32->_0).element_class) break;
      piVar7 = (int32_t *)func_?();
      key_00 = (Pool *)0x0;
      if (pPVar6 != (Pool *)0x0) {
        if ((String__Class *)pPVar6->klass == TypeInfo__System__String) {
          key_00 = pPVar6;
        }
        if (key_00 == (Pool *)0x0) {
          func_?();
          break;
        }
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)itemCategories,(Object *)key_00,*piVar7
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
    }
    func_?();
  }
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
  DStack_1.fields.generation = -1;
  DStack_1.fields.serialization_info = (SerializationInfo *)&DAT_?;
  DStack_1.fields.hcp = (IEqualityComparer_1_WinningConditionType_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &DStack_1.fields.hcp;
  DStack_1.fields.threshold = (int32_t)&stack0xffffffa8;
  puVar2 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar2 = (undefined1 *)DStack_1.fields.threshold;
  }
  DStack_1.fields.threshold = (int32_t)puVar2;
  DStack_1.fields.keySlots = (WinningConditionType__Enum__Array *)0x0;
  DStack_1.klass = (Dictionary_2_WinningConditionType_System_Object___Class *)0x0;
  DStack_1.monitor = (MonitorData *)0x0;
  DStack_1.fields.table = (Int32__Array *)0x0;
  DStack_1.fields.linkSlots = (Link__Array *)0x0;
  func_?();
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    DStack_1.fields.touchedSlots = (int32_t)&stack0xffffffa8;
    DStack_1.fields.threshold = (int32_t)&stack0xffffffa8;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (DStack_1.fields.touchedSlots = (int32_t)&stack0xffffffa8,
       DStack_1.fields.threshold = (int32_t)&stack0xffffffa8,
       (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      DStack_1.fields.touchedSlots = (int32_t)&stack0xffffffa8;
      DStack_1.fields.threshold = (int32_t)&stack0xffffffa8;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_OnDBQueryResponse__outData_is_nu,(MethodInfo *)0x0);
  }
  else {
    DStack_1.fields.touchedSlots = (int32_t)&stack0xffffffa8;
    DStack_1.fields.threshold = (int32_t)&stack0xffffffa8;
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                        ((Dictionary_2_WinningConditionType_System_Object_ *)outData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_00 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0
       ) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_4,
                          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                           *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      DStack_1.klass =
           (Dictionary_2_WinningConditionType_System_Object___Class *)
           (pDVar3->host_enumerator).dictionary;
      DStack_1.monitor = (MonitorData *)(pDVar3->host_enumerator).next;
      DStack_1.fields.table = (Int32__Array *)(pDVar3->host_enumerator).stamp;
      DStack_1.fields.linkSlots = (Link__Array *)(pDVar3->host_enumerator).current.key;
      DStack_1.fields.keySlots =
           (WinningConditionType__Enum__Array *)(pDVar3->host_enumerator).current.value;
      DStack_1.fields.generation = 0;
      while( true ) {
        DStack_4.host_enumerator.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
        ;
        DStack_4.host_enumerator.dictionary = &DStack_1;
        cVar5 = func_?();
        if (cVar5 == '\0') {
          *(undefined4 *)DStack_1.fields.touchedSlots = 0x74;
          DStack_1.fields.generation = -1;
          DStack_4.host_enumerator.next =
               (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
          ;
          DStack_4.host_enumerator.dictionary = &DStack_1;
          func_?();
          *unaff_FS_OFFSET = DStack_1.fields.hcp;
          return;
        }
        DStack_4.host_enumerator.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
        ;
        DStack_4.host_enumerator.dictionary = &DStack_1;
        piVar6 = (int *)func_?();
        pPVar7 = (this->fields)._PlayerRepository_k__BackingField;
        if ((pPVar7 == (PlayerRepository *)0x0) ||
           (pDVar8 = (pPVar7->fields)._.PlanetOwnershipTypes,
           DStack_1.fields.emptySlot = (int32_t)pDVar8, piVar6 == (int *)0x0)) break;
        if (*(Il2CppClass **)(*piVar6 + 0x20) != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar9 = (int32_t *)func_?();
        DStack_1.fields.count = *piVar9;
        key = (Type *)func_?();
        pPVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)outData,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar8 == (Dictionary_2_System_Int32_System_String_ *)0x0) break;
        value = (Pool *)0x0;
        if (pPVar10 != (Pool *)0x0) {
          if ((String__Class *)pPVar10->klass == TypeInfo__System__String) {
            value = pPVar10;
          }
          if (value == (Pool *)0x0) goto code_?;
        }
        if (*(Il2CppClass **)(*piVar6 + 0x20) != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar9 = (int32_t *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)DStack_1.fields.emptySlot,*piVar9,
                   (Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                  );
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  DStack_4.host_enumerator.next = 0;
  DStack_4.host_enumerator.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  puStack_11 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_11 = (undefined4 *)&stack0xffffff9c, puStack_4 = &stack0xffffff9c,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_11 = (undefined4 *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar12 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar12 != (IEditModeUI *)0x0) {
    iVar13 = func_?(6,TypeInfo__IEditModeUI);
    if (iVar13 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                  MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      pDStack_14 = unaff_EDI;
      pDStack_15 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      PlayerInventoryRepository::PlayerInventoryRepository__ctor
                ((PlayerInventoryRepository *)pDStack_15,(MethodInfo *)0x0);
      if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pDStack_16 = unaff_EDI->klass;
      uVar17 = 0;
      uStack_18 = 0;
      uVar19._0_1_ = (pDStack_16->_1).rank;
      uVar19._1_1_ = (pDStack_16->_1).minimumAlignment;
      if (uVar19 != 0) {
        do {
          unaff_EDI = pDStack_14;
          if (pDStack_16->interfaceOffsets[uVar17].interfaceType ==
              (Il2CppClass *)TypeInfo__IEditModeUI) {
            ppMVar20 = &(&(pDStack_16->vtable).System_Collections_ICollection_get_IsSynchronized)
                        [pDStack_16->interfaceOffsets[uVar17].offset].method;
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      ppMVar20 = (MethodInfo **)func_?(unaff_EDI,TypeInfo__IEditModeUI);
code_?:
      (*(code *)*ppMVar20)(unaff_EDI,pDStack_15);
    }
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)outData;
    if ((outData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)outData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       this_01 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) {
      pDVar21 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                          (&DStack_22,
                           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                            *)this_01,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                          );
      pDStack_7 = (pDVar21->host_enumerator).dictionary;
      iStack_8 = (pDVar21->host_enumerator).next;
      iStack_9 = (pDVar21->host_enumerator).stamp;
      iStack_10 = (pDVar21->host_enumerator).current.key;
      pOStack_6 = (pDVar21->host_enumerator).current.value;
      uStack_1 = 0;
      while( true ) {
        DStack_22.host_enumerator.current.value =
             (Object *)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
        ;
        DStack_22.host_enumerator.current.key = (int32_t)&pDStack_7;
        DStack_22.host_enumerator.stamp = (int32_t)&UNK_?;
        cVar23 = func_?();
        if (cVar23 == '\0') {
          *puStack_11 = 0xcc;
          uStack_1 = 0xffffffff;
          DStack_22.host_enumerator.current.value =
               (Object *)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
          ;
          DStack_22.host_enumerator.current.key = (int32_t)&pDStack_7;
          DStack_22.host_enumerator.stamp = (int32_t)&UNK_?;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        DStack_22.host_enumerator.current.value =
             (Object *)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
        ;
        DStack_22.host_enumerator.current.key = (int32_t)&pDStack_7;
        DStack_22.host_enumerator.stamp = (int32_t)&UNK_?;
        piVar24 = (int *)func_?();
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)outData;
        if (piVar24 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar24 + 0x20) != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar25 = (undefined4 *)func_?();
        pDStack_15 = (Dictionary_2_System_Object_System_Object_ *)*puVar25;
        pDStack_14 = pDStack_15;
        pTVar26 = (Type *)func_?(TypeInfo__System__Int32);
        pDVar27 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            ((Dictionary_2_System_Type_Pool_ *)outData,pTVar26,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pDVar27 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar28 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar27->klass->_1).naturalAligment < bVar28) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar27->klass->_1).typeHierarchy[bVar28 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar29 = false;
          }
          else {
            bVar29 = true;
          }
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar29) {
            unaff_EDI = pDVar27;
          }
          unaff_ESI = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        DStack_22.host_enumerator.dictionary =
             (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__InventoryItem;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
        InventoryItem::InventoryItem__ctor_2
                  ((InventoryItem *)unaff_ESI,(int32_t)pDStack_14,unaff_EDI,(MethodInfo *)0x0);
        if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
        if (*(char *)&(unaff_ESI->_0).parent == '\0') {
          uStack_30 = 0x16;
          pTVar26 = (Type *)func_?(TypeInfo__System__Byte);
          if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
          Dictionary_2_System_Type_Pool__get_Item
                    ((Dictionary_2_System_Type_Pool_ *)unaff_EDI,pTVar26,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
          DStack_22.host_enumerator.dictionary =
               (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__System__Int32;
          puVar25 = (undefined4 *)func_?();
          (unaff_ESI->_0).klass = (Il2CppClass *)*puVar25;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pIVar12 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
          if (pIVar12 == (IEditModeUI *)0x0) break;
          method_00 = (MethodInfo *)&UNK_?;
          this_02 = (PlayerInventoryRepository *)func_?(6,TypeInfo__IEditModeUI);
          if (this_02 == (PlayerInventoryRepository *)0x0) break;
          PlayerInventoryRepository::PlayerInventoryRepository_AddItem
                    (this_02,(InventoryItem *)unaff_ESI,method_00);
        }
        this_00 = (this->fields).itemBusinessLogic;
        resellable = *(bool *)&(unaff_ESI->_0).this_arg.data;
        pDStack_16 = (Dictionary_2_System_Object_System_Object___Class *)
                     CONCAT31(pDStack_16._1_3_,resellable);
        if (this_00 == (MVItemBusinessLogic *)0x0) break;
        MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                  (this_00,(int32_t)pDStack_14,resellable,(int32_t)(unaff_ESI->_0).namespaze,
                   (unaff_ESI->_0).byval_arg.data.__klassIndex,
                   (String *)(unaff_ESI->_0).typeMetadataHandle,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
code_?:
  DStack_22.host_enumerator.dictionary =
       (Dictionary_2_WinningConditionType_System_Object_ *)unaff_ESI;
  piVar24 = (int *)func_?();
code_?:
  func_?(piVar24);
  DStack_22.host_enumerator.current.value = (Object *)0x0;
  DStack_22.host_enumerator.current.key = 0;
  DStack_22.host_enumerator.next = (int32_t)&UNK_?;
  DStack_22.host_enumerator.stamp = (int32_t)unaff_EDI;
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void OnJoinResponse(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnJoinResponse
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
  pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__get_Item
                      (returnValues,0xd3,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                      );
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
code_?:
    pXVar3 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                        ((String *)pDVar2,
                         MV__WorldObject__AntiCheat__AntiCheatData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::AntiCheat::AntiCheatData>_System__String_
                        );
    if (((pXVar3 == (XPLevelLimits *)0x0) ||
        (iVar4 = (pXVar3->fields)._PrevXP_k__BackingField, iVar4 == 0)) ||
       (this_00 = *(List_1_VoxelHit_ **)(iVar4 + 8), this_00 == (List_1_VoxelHit_ *)0x0)) {
code_?:
      func_?(0);
code_?:
      this = (MVNetworkGame *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1
                ((IsolatedStorageException *)this,StringLiteral_Unknown_game_mode,(MethodInfo *)0x0)
      ;
      pMVar5 = (MVNetworkGame *)
                func_?(this,0,
                                MethodInfo__MVNetworkGame__OnJoinResponse_System__Collections__Generic__Dictionary<unsigned_char,_System::Object>_
                               );
      pSVar6 = extraout_ECX;
code_?:
      uVar7 = func_?(pMVar5,pSVar6);
      pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)this;
code_?:
      func_?(uVar7);
      pIVar8 = extraout_EDX;
      this = (MVNetworkGame *)pDVar1;
code_?:
      func_?(unaff_EBX,pIVar8);
      pSVar9 = extraout_ECX_00;
      pSVar6 = extraout_EDX_00;
code_?:
      func_?(pSVar9,pSVar6);
      pSVar6 = extraout_ECX_01;
    }
    else {
      banList = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                List_1_VoxelHit__ToArray
                          (this_00,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::ApplicationDesc>__ToArray__
                          );
      if ((((uint)(TypeInfo__HackingToolDetector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__HackingToolDetector->_1).cctor_started == 0)) {
        func_?(TypeInfo__HackingToolDetector);
      }
      HackingToolDetector::HackingToolDetector_Initialize
                ((ApplicationDesc__Array *)banList,(MethodInfo *)0x0);
      pDVar10 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xb6,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      prices = pDVar10;
      if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar10->klass->_1).naturalAligment < bVar11) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar10->klass->_1).typeHierarchy[bVar11 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        prices = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar12) {
          prices = pDVar10;
        }
        pDVar1 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (prices == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      PricesManager::PricesManager_Init(prices,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)
                func_?(TypeInfo__MVGameCoinManager);
      MVGameCoinManager::MVGameCoinManager__ctor((MVGameCoinManager *)pDVar1,(MethodInfo *)0x0);
      (this->fields)._GameCoinManager_k__BackingField = (MVGameCoinManager *)pDVar1;
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xb5,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar13);
      unaff_EBX = this;
      if (pOVar13 == (Object *)0x0) goto code_?;
      unaff_EBX = this;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar14 = (int32_t *)func_?(pOVar13);
      (this->fields)._MarketPlaceLevel_k__BackingField = *piVar14;
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xb8,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar13);
      if (pOVar13 == (Object *)0x0) goto code_?;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar14 = (int32_t *)func_?(pOVar13);
      (this->fields)._PublishLevel_k__BackingField = *piVar14;
      pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xb1,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((((uint)(TypeInfo__MV__WorldObject__Security__SecurityHelper->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__Security__SecurityHelper);
      }
      pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(pDVar1->_0).image == TypeInfo__System__String) {
          pDVar2 = pDVar1;
        }
        pSVar6 = TypeInfo__System__String;
        if (pDVar2 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)
                MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Decrypt
                          ((String *)pDVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      pOVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
                ObscuredString_op_Implicit((String *)pDVar1,(MethodInfo *)0x0);
      (this->fields)._XpKey_k__BackingField = pOVar15;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      bVar16 = MVGameControllerBase::MVGameControllerBase_get_UsingDevSessionData((MethodInfo *)0x0)
      ;
      if (bVar16 == 0) {
        this_01 = (SessionLocatorPing *)func_?(TypeInfo__SessionLocatorPing);
        SessionLocatorPing::SessionLocatorPing__ctor(this_01,(MethodInfo *)0x0);
      }
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xaa,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar7 = CONCAT44(TypeInfo__MV__Common__MVGameType,pOVar13);
      if (pOVar13 == (Object *)0x0) goto code_?;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__MV__Common__MVGameType->_0).element_class
         ) goto code_?;
      piVar17 = (int *)func_?(pOVar13);
      iVar4 = *piVar17;
      (this->fields)._GameType_k__BackingField = iVar4;
      if (iVar4 == 2) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Deprecated_platformer_mode,(MethodInfo *)0x0);
        (this->fields)._GameType_k__BackingField = 1;
      }
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x10,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar7 = CONCAT44(TypeInfo__System__Byte,pOVar13);
      if (pOVar13 == (Object *)0x0) goto code_?;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
      goto code_?;
      puVar18 = (uint8_t *)func_?(pOVar13);
      (this->fields)._Region_k__BackingField = *puVar18;
      MVNetworkGame_InitializeManagers(this,(MethodInfo *)0x0);
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xfe,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar13);
      if (pOVar13 == (Object *)0x0) goto code_?;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar14 = (int32_t *)func_?(pOVar13);
      iVar19 = *piVar14;
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xe,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar13);
      if (pOVar13 == (Object *)0x0) goto code_?;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar14 = (int32_t *)func_?(pOVar13);
      planetOwnershipTypeID = *piVar14;
      pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xe0,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(pDVar1->_0).image == TypeInfo__System__String) {
          pDVar2 = pDVar1;
        }
        pSVar6 = TypeInfo__System__String;
        if (pDVar2 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      userProfileData =
           (UserProfileData *)
           Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                     ((String *)pDVar2,
                      MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                     );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      bVar16 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (bVar16 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        MVar20 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar20 == MVGameMode__Enum_Edit) {
code_?:
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                              ((MethodInfo *)0x0);
          if (pGVar21 != (GameSessionData *)0x0) {
            profileID = (pGVar21->fields).profileID;
            pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                ((MethodInfo *)0x0);
            if (pGVar21 != (GameSessionData *)0x0) {
              pSVar22 = (pGVar21->fields).language;
              unaff_EBX = (MVNetworkGame *)func_?(TypeInfo__MVLocalPlayerBuilder);
              (unaff_EBX->fields).serverTimeInMilliseconds = 0;
              (unaff_EBX->fields).localTimeInMilliseconds = 0;
              (unaff_EBX->fields).teamManager = (MVTeamManager *)0x0;
              MVLocalPlayer::MVLocalPlayer__ctor
                        ((MVLocalPlayer *)unaff_EBX,iVar19,profileID,pSVar22,planetOwnershipTypeID,
                         userProfileData,(MethodInfo *)0x0);
              (unaff_EBX->fields).serverTimeInMilliseconds = 5;
              (unaff_EBX->fields).localTimeInMilliseconds = -1;
              (unaff_EBX->fields).teamManager = (MVTeamManager *)0xffffffff;
              goto code_?;
            }
          }
          goto code_?;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        MVar20 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar20 == MVGameMode__Enum_CharacterEditor) goto code_?;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        MVar20 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar20 == MVGameMode__Enum_Play) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                              ((MethodInfo *)0x0);
          unaff_EBX = this;
          if (pGVar21 != (GameSessionData *)0x0) {
            iStack_23 = (pGVar21->fields).profileID;
            pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                ((MethodInfo *)0x0);
            unaff_EBX = this;
            pMVar24 = TypeInfo__MVLocalPlayerRegistered;
            if (pGVar21 != (GameSessionData *)0x0) goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if (pGVar21 == (GameSessionData *)0x0) goto code_?;
      iStack_23 = (pGVar21->fields).profileID;
      pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      pMVar24 = (MVLocalPlayerRegistered__Class *)TypeInfo__MVLocalPlayerTourist;
      if (pGVar21 == (GameSessionData *)0x0) goto code_?;
code_?:
      pSVar22 = (pGVar21->fields).language;
      unaff_EBX = (MVNetworkGame *)func_?(pMVar24);
      MVLocalPlayer::MVLocalPlayer__ctor
                ((MVLocalPlayer *)unaff_EBX,iVar19,iStack_23,pSVar22,planetOwnershipTypeID,
                 userProfileData,(MethodInfo *)0x0);
code_?:
      pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)
                ThemeRepository::ThemeRepository_get_Instance((MethodInfo *)0x0);
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xd4,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar7 = CONCAT44(TypeInfo__System__Boolean,pOVar13);
      if ((pDVar1 == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
         (pOVar13 == (Object *)0x0)) goto code_?;
      if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pbVar25 = (bool *)func_?(pOVar13);
      GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                ((GamePassesTextBubble *)pDVar1,*pbVar25,(MethodInfo *)0x0);
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x59,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar7 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,pOVar13);
      if ((unaff_EBX == (MVNetworkGame *)0x0) || (pOVar13 == (Object *)0x0)) goto code_?;
      if ((pOVar13->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) goto code_?;
      piVar14 = (int32_t *)func_?(pOVar13);
      UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
      ObjectPool_1_System_Object__set_countAll
                ((ObjectPool_1_System_Object_ *)unaff_EBX,*piVar14,(MethodInfo *)0x0);
      pMVar26 = (this->fields).playerContainer;
      if (pMVar26 == (MVPlayerContainer *)0x0) goto code_?;
      MVPlayerContainer::MVPlayerContainer_Add(pMVar26,(MVPlayer *)unaff_EBX,(MethodInfo *)0x0);
      pMVar26 = (this->fields).playerContainer;
      value = (BitArray *)
              ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
              NamedThemeAttribute_1_UnityEngine_Color__get_Name
                        ((NamedThemeAttribute_1_UnityEngine_Color_ *)unaff_EBX,(MethodInfo *)0x0);
      if (pMVar26 == (MVPlayerContainer *)0x0) goto code_?;
      MaterialDescription::MaterialDescription_set_SpecialProperties
                ((MaterialDescription *)pMVar26,value,(MethodInfo *)0x0);
      unaff_EBX = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xa8,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
      if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVClientSettings);
      }
      if (unaff_EBX == (MVNetworkGame *)0x0) goto code_?;
      pSVar6 = (String__Class *)TypeInfo__MV__Common__ClientSettingFlags;
      if ((Il2CppClass *)((Il2CppClass_0 *)&unaff_EBX->klass)->image->codeGenModule ==
          (TypeInfo__MV__Common__ClientSettingFlags->_0).element_class) {
        pCVar27 = (ClientSettingFlags__Enum *)func_?(unaff_EBX);
        MVClientSettings::MVClientSettings_set_ClientSettingFlags(*pCVar27,(MethodInfo *)0x0);
        pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xd7,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar13);
        if (pOVar13 == (Object *)0x0) goto code_?;
        pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)this;
        if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar14 = (int32_t *)func_?(pOVar13);
        MVClientSettings::MVClientSettings_set_PostGameInterstitialIntervalInSeconds
                  (*piVar14,(MethodInfo *)0x0);
        pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xe9,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar13);
        if (pOVar13 == (Object *)0x0) goto code_?;
        if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar14 = (int32_t *)func_?(pOVar13);
        MVClientSettings::MVClientSettings_set_ReviveFlags(*piVar14,(MethodInfo *)0x0);
        pSVar9 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xe1,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pSVar22 = (String *)0x0;
        if (pSVar9 != (String *)0x0) {
          if (pSVar9->klass == TypeInfo__System__String) {
            pSVar22 = pSVar9;
          }
          pSVar6 = TypeInfo__System__String;
          if (pSVar22 != (String *)0x0) goto code_?;
          goto code_?;
        }
code_?:
        (this->fields)._AdConsentEndpointURL_k__BackingField = pSVar22;
        pSVar9 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xe2,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pSVar22 = (String *)0x0;
        if (pSVar9 != (String *)0x0) {
          if (pSVar9->klass == TypeInfo__System__String) {
            pSVar22 = pSVar9;
          }
          pSVar6 = TypeInfo__System__String;
          if (pSVar22 == (String *)0x0) goto code_?;
        }
        (this->fields)._KogamaMainpageURL_k__BackingField = pSVar22;
        pSVar9 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xe4,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        pMVar5 = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xe5,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        unaff_EBX = (MVNetworkGame *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xe6,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
        this_02 = (CreySettings *)func_?(TypeInfo__CreySettings);
        if (unaff_EBX == (MVNetworkGame *)0x0) goto code_?;
        pIVar8 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((Il2CppClass *)((Il2CppClass_0 *)&unaff_EBX->klass)->image->codeGenModule !=
            (TypeInfo__System__Boolean->_0).element_class) goto code_?;
        pbVar25 = (bool *)func_?(unaff_EBX);
        unaff_EBX = (MVNetworkGame *)0x0;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          if ((String__Class *)((Il2CppClass_0 *)&pMVar5->klass)->image == TypeInfo__System__String
             ) {
            unaff_EBX = pMVar5;
          }
          pSVar6 = TypeInfo__System__String;
          if (unaff_EBX != (MVNetworkGame *)0x0) goto code_?;
          goto code_?;
        }
code_?:
        if (pSVar9 == (String *)0x0) goto code_?;
        pSVar6 = (String__Class *)TypeInfo__System__Int32;
        if ((pSVar9->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar14 = (int32_t *)func_?(pSVar9);
          CreySettings::CreySettings__ctor
                    (this_02,*piVar14,(String *)unaff_EBX,*pbVar25,(MethodInfo *)0x0);
          (this->fields)._CreySettings_k__BackingField = this_02;
          pSVar9 = (String *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xf3,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          pMVar5 = (MVNetworkGame *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xf1,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          unaff_EBX = (MVNetworkGame *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                (returnValues,0xf2,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                );
          pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xf0,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          this_03 = (CustomTouristPromotionSettings *)func_?();
          uVar7 = CONCAT44(TypeInfo__System__Boolean,pOVar13);
          if (pOVar13 == (Object *)0x0) goto code_?;
          if ((pOVar13->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar25 = (bool *)func_?(pOVar13);
          pMStack_28 = unaff_EBX;
          if (unaff_EBX != (MVNetworkGame *)0x0) {
            pMStack_28 = (MVNetworkGame *)0x0;
            if ((String__Class *)((Il2CppClass_0 *)&unaff_EBX->klass)->image ==
                TypeInfo__System__String) {
              pMStack_28 = unaff_EBX;
            }
            pSVar6 = TypeInfo__System__String;
            if (pMStack_28 == (MVNetworkGame *)0x0) goto code_?;
          }
          unaff_EBX = (MVNetworkGame *)0x0;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            if ((String__Class *)((Il2CppClass_0 *)&pMVar5->klass)->image ==
                TypeInfo__System__String) {
              unaff_EBX = pMVar5;
            }
            pSVar6 = TypeInfo__System__String;
            if (unaff_EBX == (MVNetworkGame *)0x0) goto code_?;
          }
          if (pSVar9 == (String *)0x0) goto code_?;
          pSVar6 = (String__Class *)TypeInfo__System__Int32;
          if ((pSVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar14 = (int32_t *)func_?(pSVar9);
          CustomTouristPromotionSettings::CustomTouristPromotionSettings__ctor
                    (this_03,*piVar14,(String *)unaff_EBX,(String *)pMStack_28,*pbVar25,
                     (MethodInfo *)0x0);
          (this->fields)._CustomTouristPromotionSettings_k__BackingField = this_03;
          pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xe7,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          unaff_EBX = (MVNetworkGame *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                (returnValues,0xe8,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                );
          this_04 = (ElitePromotionSettings *)func_?(TypeInfo__ElitePromotionSettings);
          if (unaff_EBX == (MVNetworkGame *)0x0) goto code_?;
          pIVar8 = TypeInfo__System__Int32;
          if ((Il2CppClass *)((Il2CppClass_0 *)&unaff_EBX->klass)->image->codeGenModule ==
              (TypeInfo__System__Int32->_0).element_class) {
            unaff_EBX = (MVNetworkGame *)func_?(unaff_EBX);
            uVar7 = CONCAT44(TypeInfo__System__Boolean,pOVar13);
            if (pOVar13 == (Object *)0x0) goto code_?;
            if ((pOVar13->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class)
            {
              pbVar25 = (bool *)func_?(pOVar13);
              ElitePromotionSettings::ElitePromotionSettings__ctor
                        (this_04,*pbVar25,(int32_t)((Il2CppClass_0 *)&unaff_EBX->klass)->image,
                         (MethodInfo *)0x0);
              pLVar29 = (this->fields).embeddedSiteConfigData.sites;
              iVar19 = (this->fields).embeddedSiteConfigData.siteEnum;
              uVar30 = (this->fields).embeddedSiteConfigData.showTouristPromotion;
              uVar31 = (this->fields).embeddedSiteConfigData.allowsOpenInNewTab;
              uVar32 = (this->fields).embeddedSiteConfigData.allowsRedirectToWebpage;
              uVar33 = (this->fields).embeddedSiteConfigData.allowsModals;
              embeddedSiteConfigData.allowsModals = uVar33;
              embeddedSiteConfigData.allowsRedirectToWebpage = uVar32;
              embeddedSiteConfigData.allowsOpenInNewTab = uVar31;
              embeddedSiteConfigData.showTouristPromotion = uVar30;
              uVar34 = (this->fields).embeddedSiteConfigData.integratedSdk;
              uVar35 = (this->fields).embeddedSiteConfigData.allowsFallbackAds;
              uVar36 = (this->fields).embeddedSiteConfigData.showPlayButtonAd;
              uVar37 = (this->fields).embeddedSiteConfigData.field_0xf;
              embeddedSiteConfigData._15_1_ = uVar37;
              embeddedSiteConfigData.showPlayButtonAd = uVar36;
              embeddedSiteConfigData.allowsFallbackAds = uVar35;
              embeddedSiteConfigData.integratedSdk = uVar34;
              (this->fields)._EliteSettings_k__BackingField = this_04;
              pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                        ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                  (returnValues,0xed,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                  );
              unaff_EBX = (MVNetworkGame *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Byte,System::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                    (returnValues,0xeb,
                                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                    );
              pOVar38 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                        ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                  (returnValues,0xee,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                  );
              this_05 = (AdConfigSettings *)func_?(TypeInfo__AdConfigSettings);
              uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar38);
              if (pOVar38 != (Object *)0x0) {
                if ((pOVar38->klass->_0).element_class !=
                    (TypeInfo__System__Int32->_0).element_class) goto code_?;
                piVar14 = (int32_t *)func_?(pOVar38);
                if (unaff_EBX != (MVNetworkGame *)0x0) {
                  pIVar8 = TypeInfo__System__Int32;
                  if ((Il2CppClass *)((Il2CppClass_0 *)&unaff_EBX->klass)->image->codeGenModule !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  unaff_EBX = (MVNetworkGame *)func_?(unaff_EBX);
                  uVar7 = CONCAT44(TypeInfo__System__Boolean,pOVar13);
                  if (pOVar13 != (Object *)0x0) {
                    if ((pOVar13->klass->_0).element_class !=
                        (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                    pbVar25 = (bool *)func_?(pOVar13);
                    embeddedSiteConfigData.siteEnum = iVar19;
                    embeddedSiteConfigData.sites = pLVar29;
                    AdConfigSettings::AdConfigSettings__ctor
                              (this_05,embeddedSiteConfigData,*pbVar25,
                               (int32_t)((Il2CppClass_0 *)&unaff_EBX->klass)->image,*piVar14,
                               (MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVGameControllerBase);
                    }
                    pIVar39 = MVGameControllerBase::MVGameControllerBase_get_AdManager
                                        ((MethodInfo *)0x0);
                    pIVar40 = TypeInfo__Assets__Scripts__AdIntegration__IAdManager;
                    if (pIVar39 != (IAdManager *)0x0) {
                      pIVar41 = pIVar39->klass;
                      uVar42 = 0;
                      uVar43._0_1_ = (pIVar41->_1).rank;
                      uVar43._1_1_ = (pIVar41->_1).minimumAlignment;
                      if (uVar43 != 0) {
                        do {
                          returnValues = (Dictionary_2_System_Byte_System_Object_ *)&UNK_?;
                          if (pIVar41->interfaceOffsets[uVar42].interfaceType ==
                              (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                            ppMVar44 = &(&(pIVar41->vtable).InitializeAdConfigSettings)
                                        [pIVar41->interfaceOffsets[uVar42].offset].method;
                            goto code_?;
                          }
                          uVar42 = uVar42 + 1;
                        } while (uVar42 < uVar43);
                      }
                      ppMVar44 = (MethodInfo **)
                                 func_?(pIVar39,
                                                 TypeInfo__Assets__Scripts__AdIntegration__IAdManager
                                                 ,9);
code_?:
                      (*(code *)*ppMVar44)(pIVar39,this_05,ppMVar44[1]);
                      method_00 = returnValues;
                      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Byte,System::Object]::
                                Dictionary_2_System_Byte_System_Object__get_Item
                                          (returnValues,0x52,
                                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                          );
                      uVar7 = CONCAT44(TypeInfo__System__Boolean,pOVar13);
                      unaff_EBX = (MVNetworkGame *)pIVar40;
                      if (pOVar13 != (Object *)0x0) {
                        if ((pOVar13->klass->_0).element_class !=
                            (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                        pbVar25 = (bool *)func_?(pOVar13);
                        (this->fields).isPublished = *pbVar25;
                        MVGameControllerBase::MVGameControllerBase_set_JoinState
                                  (MVJoinState__Enum_LoadGUI,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          func_?(_UNK_?);
                          cRam_? = '\x01';
                        }
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?(TypeInfo__MVGameControllerBase);
                        }
                        this_06 = MVGameControllerBase::MVGameControllerBase_get_LevelLoader
                                            ((MethodInfo *)0x0);
                        MVar20 = MVGameControllerBase::MVGameControllerBase_get_GameMode
                                           ((MethodInfo *)0x0);
                        bVar16 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                                           ((MethodInfo *)0x0);
                        this = (MVNetworkGame *)(this->fields).operationRequests;
                        this_07 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?(TypeInfo__System__Action);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (this_07,(Object *)this,
                                   MethodInfo__MVNetworkGame__OperationRequests__Syncronize__,
                                   (MethodInfo *)0x0);
                        unaff_EBX = (MVNetworkGame *)0x0;
                        if (this_06 != (LevelLoader *)0x0) {
                          LevelLoader::LevelLoader_LoadScenes
                                    (this_06,MVar20,bVar16,(Action *)this_07,(MethodInfo *)0x0);
                          pMVar5 = (MVNetworkGame *)
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Byte,System::Object]::
                                    Dictionary_2_System_Byte_System_Object__get_Item
                                              (returnValues,0xae,
                                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                              );
                          unaff_EBX = (MVNetworkGame *)0x0;
                          if (pMVar5 != (MVNetworkGame *)0x0) {
                            if ((String__Class *)((Il2CppClass_0 *)&pMVar5->klass)->image ==
                                TypeInfo__System__String) {
                              unaff_EBX = pMVar5;
                            }
                            pSVar6 = TypeInfo__System__String;
                            if (unaff_EBX == (MVNetworkGame *)0x0) goto code_?;
                          }
                          pMVar5 = (MVNetworkGame *)
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Byte,System::Object]::
                                    Dictionary_2_System_Byte_System_Object__get_Item
                                              (returnValues,0x68,
                                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                              );
                          streamingAssetsUrl = (MVNetworkGame *)0x0;
                          if (pMVar5 != (MVNetworkGame *)0x0) {
                            if ((String__Class *)((Il2CppClass_0 *)&pMVar5->klass)->image ==
                                TypeInfo__System__String) {
                              streamingAssetsUrl = pMVar5;
                            }
                            this = (MVNetworkGame *)0x0;
                            pSVar6 = TypeInfo__System__String;
                            if (streamingAssetsUrl == (MVNetworkGame *)0x0) goto code_?;
                          }
                          bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32,UnityEngine::Experimental::TerrainAPI::
                                   TerrainUtility+TerrainMap]::
                                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                                             ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                               *)0x0,(MethodInfo *)method_00);
                          if (bVar16 != 0) {
                            pMVar5 = (MVNetworkGame *)
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Byte,System::Object]::
                                      Dictionary_2_System_Byte_System_Object__get_Item
                                                (returnValues,0xba,
                                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                                );
                            streamingAssetsUrl = (MVNetworkGame *)0x0;
                            if (pMVar5 != (MVNetworkGame *)0x0) {
                              if ((String__Class *)((Il2CppClass_0 *)&pMVar5->klass)->image ==
                                  TypeInfo__System__String) {
                                streamingAssetsUrl = pMVar5;
                              }
                              this = (MVNetworkGame *)0x0;
                              pSVar6 = TypeInfo__System__String;
                              if (streamingAssetsUrl == (MVNetworkGame *)0x0) goto code_?;
                            }
                          }
                          if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
                            func_?(TypeInfo__MV__Common__Urls);
                          }
                          MVCommon.dll::MV::Common::Urls::Urls_Init
                                    ((String *)unaff_EBX,(String *)streamingAssetsUrl,
                                     (MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                            func_?(TypeInfo__MVGameControllerBase);
                          }
                          pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                              ((MethodInfo *)0x0);
                          if (pGVar21 != (GameSessionData *)0x0) {
                            TM::TM_LoadLanguage((pGVar21->fields).language,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
code_?:
    func_?(unaff_EBX,pSVar6);
    pSVar6 = extraout_ECX_02;
    pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)this;
  }
  else {
    if ((String__Class *)(pDVar1->_0).image == TypeInfo__System__String) {
      pDVar2 = pDVar1;
    }
    pSVar6 = TypeInfo__System__String;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
  }
code_?:
  func_?(pDVar1,pSVar6);
  pDVar10 = extraout_EDX_01;
code_?:
  func_?(pDVar10,pDVar1);
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
  return;
}


/* Void OnLevelChanged(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnLevelChanged
               (MVNetworkGame *this,int32_t actorNr,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnLockHierarchyEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 == (WorldNetwork *)0x0) {
code_?:
    func_?(0);
    pIVar1 = extraout_EDX;
  }
  else {
    this_01 = (MVWorldObjectClientManagerNetwork *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (eventData == (EventData *)0x0) goto code_?;
    unaff_ESI = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x16,(MethodInfo *)0x0);
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x14,(MethodInfo *)0x0);
    if ((this_01 == (MVWorldObjectClientManagerNetwork *)0x0) || (pOVar2 == (Object *)0x0))
    goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar3 = (int32_t *)func_?();
    if (unaff_ESI == (Object *)0x0) goto code_?;
    pIVar1 = TypeInfo__System__Int32;
    if ((unaff_ESI->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar4 = (int32_t *)func_?(unaff_ESI);
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_LockHierarchyProxy
                (this_01,*piVar4,*piVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(unaff_ESI,pIVar1);
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
    func_?(_UNK_?);
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
        lockObject = *pbVar4;
        this_00 = (this->fields).worldNetwork;
        if (this_00 != (WorldNetwork *)0x0) {
          this_01 = (MVWorldObjectClientManagerNetwork *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_LockHierarchyResponse
                      (this_01,id,lockObject,returnCode == 0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnNotificationEventReceived(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
               (MVNetworkGame *this,NotificationType__Enum type,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification ==
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
  if (pMVar1 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (Action_2_Int32_Object_ *)(pMVar1->fields)._.prev;
  if (this_00 != (Action_2_Int32_Object_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (this_00,type,(Object *)data,(MethodInfo *)0x0);
  }
  this_01 = (pMVar1->fields)._._.method;
  pOVar3 = (pMVar1->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01,pOVar3,unaff_EBP);
  }
  cVar4 = func_?(this_01);
  if (cVar4 == '\0') {
    if ((char)this_01->iflags == '\x02') {
      (*(code *)this_01)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pMVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar3);
    if (cVar4 != '\0') {
      return;
    }
    if (pOVar3 == (Object *)0x0) {
      (*(code *)this_01)(type,data);
      return;
    }
    method_00 = this_01;
    cVar4 = func_?();
    pOVar3 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar5 = func_?(pOVar3);
    if (cVar4 == '\0') {
      if (cVar5 != '\0') {
        puVar6 = &UNK_?;
        pOVar3 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                            unaff_retaddr);
        func_?(this_01->flags,pOVar3,puVar6,type);
        return;
      }
      func_?(this_01->flags,type,type,data);
      return;
    }
    if (cVar5 != '\0') {
      func_?();
      return;
    }
    func_?(this_01,type,type,data);
    return;
  }
  (*(code *)this_01)(pOVar3,type,data);
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
    if (((operationResponse != (OperationResponse *)0x0) &&
        (pMVar1 = (this->fields).operationRequests, pMVar1 != (MVNetworkGame_OperationRequests *)0x0
        )) && (this_01 = (pMVar1->fields).operationResponsePendingManager,
              this_01 != (OperationResponsePendingManager *)0x0)) {
      OperationResponsePendingManager::OperationResponsePendingManager_TryRemovePendingOperation
                (this_01,(uint)(operationResponse->fields).OperationCode,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPickupItemStateChangeEvent(PickupItemState, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
               (MVNetworkGame *this,PickupItemState__Enum state,int32_t worldObjectID,
               int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pWVar2 = (this->fields).worldNetwork;
  if (pWVar2 != (WorldNetwork *)0x0) {
    pMVar3 = (MVWorldObjectClientManager *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
    id = worldObjectID;
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar3,worldObjectID,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObject *)0x0) {
        this = (MVNetworkGame *)&this;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          this = (MVNetworkGame *)TypeInfo__System__String;
          func_?();
        }
        this = (MVNetworkGame *)0x0;
        message = mscorlib.dll::System::String::String_Concat
                            ((Object *)StringLiteral_OnPickupItemStateChangeEvent_fai,arg1,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          instigatorActorNr = (int32_t)TypeInfo__UnityEngine__Debug;
          worldObjectID = (int32_t)&UNK_?;
          func_?();
        }
        instigatorActorNr = 0;
        state = (PickupItemState__Enum)&UNK_?;
        worldObjectID = (int32_t)message;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
      pWVar2 = (pMVar1->fields).worldNetwork;
      unaff_EDI = (IPickupStateHandler__Class *)id;
      if (pWVar2 != (WorldNetwork *)0x0) {
        this = (MVNetworkGame *)0x0;
        this_00 = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame *)0x0) {
          worldObjectID = 0;
          state = id;
          this = this_00;
          state = (PickupItemState__Enum)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            ((MVWorldObjectClientManager *)this_00,id,(MethodInfo *)0x0);
          worldObjectID = (int32_t)TypeInfo__IPickupStateHandler;
          this = (MVNetworkGame *)&UNK_?;
          iVar5 = func_?();
          if (iVar5 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_PickUpItemStateChangeEvent_faile,(MethodInfo *)0x0);
            return;
          }
          pWVar2 = (pMVar1->fields).worldNetwork;
          if (pWVar2 != (WorldNetwork *)0x0) {
            pMVar3 = (MVWorldObjectClientManager *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
            if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
              pMVar1 = (MVNetworkGame *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar3,id,(MethodInfo *)0x0);
              unaff_EDI = TypeInfo__IPickupStateHandler;
              if (pMVar1 != (MVNetworkGame *)0x0) {
                iVar5 = func_?(pMVar1,TypeInfo__IPickupStateHandler);
                if (iVar5 != 0) {
                  func_?(0,TypeInfo__IPickupStateHandler,iVar5,state);
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?(pMVar1,unaff_EDI);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPostWinnerReportEvent() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (Dictionary_2_System_String_System_Object_ *)0x0;
  this_00 = (UIStack *)(this->fields)._WinningConditionManager_k__BackingField;
  if (this_00 != (UIStack *)0x0) {
    bVar1 = UIStack::UIStack_get_StackReady(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
    }
    else {
      this_01 = (this->fields)._WinningConditionManager_k__BackingField;
      if ((this_01 == (WinningConditionManager *)0x0) ||
         (this_03 = MVWorldObject.dll::WinningConditionManager::
                    WinningConditionManager_GetForfilledWinningConditions(this_01,(MethodInfo *)0x0)
         , this_03 == (List_1_IWinningCondition_ *)0x0)) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                          MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__
                         );
      if (pOVar2 == (Object *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_No_winning_condition_found_even_,(MethodInfo *)0x0);
        return;
      }
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                          MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__
                         );
      if (1 < (int)pOVar2) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Only_1_winning_condition_current,(MethodInfo *)0x0);
        return;
      }
      obj = (Dictionary_2_System_String_System_Object_ *)
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,0,
                       MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_
                      );
    }
    this_02 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).OnWinningConditionFulfilled;
    if (this_02 ==
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      return;
    }
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_02,obj,MethodInfo__System__Action<IWinningCondition>__Invoke_IWinningCondition_)
    ;
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPurchaseProductResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
               (MVNetworkGame *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_2_Int32_Object_ *)(this->fields).PurchaseProductResponseHandler;
  if (this_00 != (Action_2_Int32_Object_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (this_00,returnCode,(Object *)purchaseResponseData,
               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
              );
    args = (Object__Array *)func_?(TypeInfo__System__Object,0);
    if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
      func_?();
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
  iVar1 = itemID;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar2 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar2 != (IEditModeUI *)0x0) {
    iVar3 = func_?(6,TypeInfo__IEditModeUI,pIVar2);
    if (iVar3 != 0) {
      method = (MethodInfo *)0x0;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            **)(itemID + 8) !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        itemID = (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                       **)(itemID + 8),1,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                    );
        iVar3 = 0;
        if ((TerrainUtility_TerrainMap *)itemID != (TerrainUtility_TerrainMap *)0x0) {
          do {
            pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)itemID,
                                MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__
                               );
            if ((int)pOVar4 <= iVar3) {
              this_00 = *(JumpState_OnWallJumpDelegate **)(iVar1 + 0x10);
              if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
                JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                          (this_00,(MethodInfo *)0x0);
              }
              return;
            }
            pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)itemID,iVar3
                                ,
                                MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                               );
            if (pIVar5 == (IEventSystemHandler *)0x0) break;
            if (pIVar5[1].klass == (IEventSystemHandler__Class *)method) {
              itemID = *(undefined4 *)(iVar1 + 8);
              if ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)itemID ==
                  (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) break;
              method = (MethodInfo *)0x1;
              this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                    *)itemID,1,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                  );
              if (this_01 == (TerrainUtility_TerrainMap *)0x0) break;
              mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
              List_1_MVPlayer__RemoveAt
                        ((List_1_MVPlayer_ *)this_01,iVar3,
                         MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_
                        );
            }
            iVar3 = iVar3 + 1;
          } while( true );
        }
      }
      func_?(0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnRemoveLinkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
               (MVNetworkGame *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    link = WorldNetwork::WorldNetwork_RemoveLink(this_00,linkID,(MethodInfo *)0x0);
    if (link != (Link_1 *)0x0) {
      this_01 = (this->fields)._LogicObjectManager_k__BackingField;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (LogicObjectManagerClient *)0x0) goto code_?;
      LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                (this_01,link,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
      arg1 = (Object *)func_?(TypeInfo__System__Int32);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_reset_count_,arg1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnRemoveObjectLinkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
               (MVNetworkGame *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Remove_objectLink_,(MethodInfo *)0x0);
  if ((this->fields).worldNetwork != (WorldNetwork *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pORam0000001c != (ObjectLinks *)0x0) {
      bVar1 = ObjectLinks::ObjectLinks_Contains(pORam0000001c,in_stack_2,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
        return;
      }
      if (pORam0000001c != (ObjectLinks *)0x0) {
        link = ObjectLinks::ObjectLinks_GetObjectLink
                         (pORam0000001c,in_stack_2,(MethodInfo *)0x0);
        if ((link != (ObjectLink *)0x0) && (pMRam00000008 != (MVWorldObjectClientManager *)0x0)) {
          objectConnectorWo =
               (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMRam00000008,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
          if (pMRam00000008 != (MVWorldObjectClientManager *)0x0) {
            objectWo = (MVWorldObjectClient *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMRam00000008,(link->fields).objectWOID,(MethodInfo *)0x0);
            if (pORam0000001c != (ObjectLinks *)0x0) {
              ObjectLinks::ObjectLinks_RemoveObjectLink
                        (pORam0000001c,link,objectConnectorWo,objectWo,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRequestFriendsResponse(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *friendsList,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  DStack_3.fields.generation = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&DStack_3.fields.generation;
  DStack_3.fields.serialization_info = (SerializationInfo *)&stack0xffffffa0;
  pSVar4 = (SerializationInfo *)&stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pSVar4 = DStack_3.fields.serialization_info;
  }
  DStack_3.fields.serialization_info = pSVar4;
  DStack_3.fields.keySlots = (WinningConditionType__Enum__Array *)0x0;
  DStack_3.klass = (Dictionary_2_WinningConditionType_System_Object___Class *)0x0;
  DStack_3.monitor = (MonitorData *)0x0;
  DStack_3.fields.table = (Int32__Array *)0x0;
  DStack_3.fields.linkSlots = (Link__Array *)0x0;
  func_?();
  if (friendsList == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    DStack_3.fields.touchedSlots = (int32_t)&stack0xffffffa0;
    DStack_3.fields.serialization_info = (SerializationInfo *)&stack0xffffffa0;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       (DStack_3.fields.touchedSlots = (int32_t)&stack0xffffffa0,
       DStack_3.fields.serialization_info = (SerializationInfo *)&stack0xffffffa0,
       (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      DStack_3.fields.touchedSlots = (int32_t)&stack0xffffffa0;
      DStack_3.fields.serialization_info = (SerializationInfo *)&stack0xffffffa0;
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Friendslist_is_null,(MethodInfo *)0x0);
  }
  else {
    DStack_3.fields.touchedSlots = (int32_t)&stack0xffffffa0;
    DStack_3.fields.serialization_info = (SerializationInfo *)&stack0xffffffa0;
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                        ((Dictionary_2_WinningConditionType_System_Object_ *)friendsList,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_01 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0
       ) {
code_?:
      func_?(0);
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pDVar6 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_7,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                       );
    DStack_3.klass =
         (Dictionary_2_WinningConditionType_System_Object___Class *)
         (pDVar6->host_enumerator).dictionary;
    DStack_3.monitor = (MonitorData *)(pDVar6->host_enumerator).next;
    DStack_3.fields.table = (Int32__Array *)(pDVar6->host_enumerator).stamp;
    DStack_3.fields.linkSlots = (Link__Array *)(pDVar6->host_enumerator).current.key;
    DStack_3.fields.keySlots =
         (WinningConditionType__Enum__Array *)(pDVar6->host_enumerator).current.value;
    uStack_1 = 0;
    while( true ) {
      DStack_7.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
      ;
      DStack_7.host_enumerator.dictionary = &DStack_3;
      cVar8 = func_?();
      if (cVar8 == '\0') break;
      DStack_7.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
      ;
      DStack_7.host_enumerator.dictionary = &DStack_3;
      pPVar9 = (Pool *)func_?();
      if (pPVar9 == (Pool *)0x0) goto code_?;
      pIVar10 = TypeInfo__System__Int32;
      if ((pPVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
code_?:
        func_?(pPVar9,pIVar10);
        goto code_?;
      }
      piVar11 = (int32_t *)func_?(pPVar9);
      DStack_3.fields.emptySlot = *piVar11;
      DStack_3.fields.threshold = DStack_3.fields.emptySlot;
      pTVar12 = (Type *)func_?(TypeInfo__System__Int32,&DStack_3.fields.threshold);
      pDVar13 = (Dictionary_2_System_Type_Pool_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)friendsList,pTVar12,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pDVar13 == (Dictionary_2_System_Type_Pool_ *)0x0) {
        this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
      }
      else {
        bVar14 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar13->klass->_1).naturalAligment < bVar14) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar13->klass->_1).typeHierarchy[bVar14 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        this_02 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar15) {
          this_02 = pDVar13;
        }
        if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      }
      DStack_3.fields.hcp._3_1_ = 0;
      pTVar12 = (Type *)func_?();
      if ((this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
         (pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_02,pTVar12,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pPVar9 == (Pool *)0x0)) goto code_?;
      pIVar10 = TypeInfo__System__Int32;
      if ((pPVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar11 = (int32_t *)func_?(pPVar9);
      DStack_3.fields.count = *piVar11;
      DStack_3.fields.hcp._2_1_ = 0x1a;
      pTVar12 = (Type *)func_?(TypeInfo__System__Byte,
                                       (undefined1 *)((int)&DStack_3.fields.hcp + 2));
      pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_02,pTVar12,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar9 == (Pool *)0x0) goto code_?;
      pIVar10 = TypeInfo__System__Int32;
      if ((pPVar9->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar11 = (int32_t *)func_?(pPVar9);
      friendProfileID = *piVar11;
      DStack_3.fields.hcp._1_1_ = 0x1c;
      pTVar12 = (Type *)func_?(TypeInfo__System__Byte,
                                       (undefined1 *)((int)&DStack_3.fields.hcp + 1));
      pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_02,pTVar12,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar9 == (Pool *)0x0) goto code_?;
      pIVar10 = (Int32__Class *)TypeInfo__MV__Common__FriendStatus;
      if ((pPVar9->klass->_0).element_class !=
          (TypeInfo__MV__Common__FriendStatus->_0).element_class) goto code_?;
      pFVar16 = (FriendStatus__Enum *)func_?(pPVar9);
      this_00 = (this->fields)._Friends_k__BackingField;
      if (this_00 == (FriendList *)0x0) goto code_?;
      FriendList::FriendList_AddFriend
                (this_00,DStack_3.fields.emptySlot,DStack_3.fields.count,friendProfileID,*pFVar16,
                 (MethodInfo *)0x0);
    }
    *(undefined4 *)DStack_3.fields.touchedSlots = 0xa0;
    uStack_1 = 0xffffffff;
    DStack_7.host_enumerator.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
    ;
    DStack_7.host_enumerator.dictionary = &DStack_3;
    func_?();
  }
  *unaff_FS_OFFSET = DStack_3.fields.generation;
  return;
}


/* Void OnRequestFriendshipResponse(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
               (MVNetworkGame *this,int32_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  a = TypeInfo__System__String->static_fields->Empty;
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
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Inequality
                    (a,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pXVar4 = (XpBoostParticlePreviewer *)
             PrefabPool::PrefabPool_get_MaterialButtonTextureGenerator(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar4,
                        MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                       );
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)materialList;
    if (materialList != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          ((Dictionary_2_WinningConditionType_System_Object_ *)materialList,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                    *)&stack0xffffff90,
                   (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                   this_01,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                  );
        uStack_1 = 0;
        while (cVar5 = func_?(), cVar5 != '\0') {
          pPVar6 = (Pool *)func_?();
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)materialList;
          if (pPVar6 == (Pool *)0x0) goto code_?;
          if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
          goto code_?;
          func_?();
          pTVar7 = (Type *)func_?(TypeInfo__System__Byte);
          pDVar8 = (Dictionary_2_System_Type_Pool_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              ((Dictionary_2_System_Type_Pool_ *)materialList,pTVar7,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          unaff_EDI = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (pDVar8 == (Dictionary_2_System_Type_Pool_ *)0x0) {
            this_03 = (Dictionary_2_System_Type_Pool_ *)0x0;
          }
          else {
            bVar9 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (pDVar8->klass->_1).typeHierarchy[bVar9 - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            this_03 = (Dictionary_2_System_Type_Pool_ *)0x0;
            if (bVar10) {
              this_03 = pDVar8;
            }
            if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
          }
          pTVar7 = (Type *)func_?();
          if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
          pDStack_11 = (Dictionary_2_System_Object_System_Object___Class *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (this_03,pTVar7,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
          if (pDStack_11 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if ((String__Class *)(pDStack_11->_0).image == TypeInfo__System__String) {
              unaff_EDI = pDStack_11;
            }
            pDStack_11 = unaff_EDI;
            if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
            goto code_?;
          }
          pTVar7 = (Type *)func_?();
          pDStack_12 = (Dictionary_2_System_Object_System_Object___Class *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (this_03,pTVar7,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
          if (pDStack_12 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if ((String__Class *)(pDStack_12->_0).image == TypeInfo__System__String) {
              unaff_EDI = pDStack_12;
            }
            pDStack_12 = unaff_EDI;
            if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
            goto code_?;
          }
          pTVar7 = (Type *)func_?();
          pDStack_13 = (Dictionary_2_System_Object_System_Object___Class *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (this_03,pTVar7,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
          if (pDStack_13 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if ((String__Class *)(pDStack_13->_0).image == TypeInfo__System__String) {
              unaff_EDI = pDStack_13;
            }
            pDStack_13 = unaff_EDI;
            if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0)
            goto code_?;
          }
          pTVar7 = (Type *)func_?();
          pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,pTVar7,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pPVar6 == (Pool *)0x0) goto code_?;
          if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pMVar14 = (MaterialSound__Enum *)func_?();
          materialSound = *pMVar14;
          pTVar7 = (Type *)func_?(TypeInfo__System__Byte);
          pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,pTVar7,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pPVar6 == (Pool *)0x0) goto code_?;
          if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          pAVar15 = (AvatarModifierPackageType__Enum *)func_?();
          modifierPackageType = *pAVar15;
          pTVar7 = (Type *)func_?(TypeInfo__System__Byte);
          pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,pTVar7,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pPVar6 == (Pool *)0x0) goto code_?;
          if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar16 = (int32_t *)func_?();
          priceGold = *piVar16;
          method_00 = (MethodInfo *)func_?(TypeInfo__System__Byte);
          pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_03,(Type *)method_00,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pPVar6 == (Pool *)0x0) goto code_?;
          if ((pPVar6->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pbVar17 = (bool *)func_?();
          isUnlocked = *pbVar17;
          pTVar7 = (Type *)func_?(TypeInfo__System__Byte);
          this_02 = (IsolatedStorageException *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              (this_03,pTVar7,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__Single;
          physicalProperties = (Single__Array *)0x0;
          if ((this_02 != (IsolatedStorageException *)0x0) &&
             (in_stack_18 = TypeInfo__System__Single,
             physicalProperties = (Single__Array *)func_?(this_02),
             physicalProperties == (Single__Array *)0x0)) goto code_?;
          pMVar19 = (this->fields)._MaterialRepository_k__BackingField;
          if (pMVar19 == (MVMaterialRepository *)0x0) goto code_?;
          MVMaterialRepository::MVMaterialRepository_AddMaterial
                    (pMVar19,(String *)pDStack_11,(String *)pDStack_12,(String *)pDStack_13,
                     materialSound,modifierPackageType,priceGold,isUnlocked,physicalProperties,
                     (MaterialButtonTextureGenerator *)pXVar4,(MethodInfo *)in_stack_18);
        }
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        uStack_1 = 0xffffffff;
        func_?();
        if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pXVar4,method_00);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          pMVar19 = (this->fields)._MaterialRepository_k__BackingField;
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
          if (pMVar19 != (MVMaterialRepository *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pLVar20 = (pMVar19->fields).materials;
            if (pLVar20 != (List_1_MVMaterial_ *)0x0) {
              pOVar21 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pLVar20,
                                   MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__
                                  );
              if ((int)pOVar21 < 0x16) {
                pMVar22 = (pMVar19->fields).noMaterial;
              }
              else {
                pLVar20 = (pMVar19->fields).materials;
                if (pLVar20 == (List_1_MVMaterial_ *)0x0) goto code_?;
                pMVar22 = (MVMaterial *)
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar20,
                                     0x15,
                                     MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                                    );
              }
              if (pMVar22 != (MVMaterial *)0x0) {
                if ((pMVar22->fields)._PhysicalProperties_k__BackingField.toughness == _UNK_?
                   ) {
                  pMVar19 = (this->fields)._MaterialRepository_k__BackingField;
                  if ((pMVar19 == (MVMaterialRepository *)0x0) ||
                     (pMVar22 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                          (pMVar19,0x15,(MethodInfo *)0x0),
                     pMVar22 == (MVMaterial *)0x0)) goto code_?;
                  if ((pMVar22->fields).isUnlocked != 0) {
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials
                              ((MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                }
                this_02 = (IsolatedStorageException *)func_?();
                mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
                IsolatedStorageException__ctor_1
                          (this_02,StringLiteral_Default_material_is_invalid,(MethodInfo *)0x0);
                func_?();
code_?:
                pPVar6 = (Pool *)func_?(this_02,unaff_EDI);
code_?:
                func_?(pPVar6);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  func_?(unaff_EDI,0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnRequestWoUniquePrototypeFailed(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_OnRequestWoUniquePrototypeFailed,(MethodInfo *)0x0);
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0x16,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar2 = (int32_t *)func_?();
      woId = *piVar2;
      if (_UNK_? != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
        this_00 = (MVWorldInventory *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (_UNK_?,(MethodInfo *)0x0);
        if (this_00 != (MVWorldInventory *)0x0) {
          MVWorldInventory::MVWorldInventory_UnpendRuntimePrototype(this_00,woId,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnResetLogicChunkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
            OnSayChatIndicatorVisibilityChange;
  if (this_00 != (Action_2_Int32_Boolean_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Boolean]::Action_2_Int32_Boolean__Invoke
              (this_00,actorNr,visible,MethodInfo__System__Action<int,_bool>__Invoke_int__bool_);
  }
  return;
}


/* Void OnSetTeamEvent(Int32, MVTeam) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnSetTeamEvent
               (MVNetworkGame *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  actorNr_00 = actorNr;
  pMVar1 = this;
  pMVar2 = (this->fields).playerContainer;
  if (pMVar2 != (MVPlayerContainer *)0x0) {
    bVar3 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar2,actorNr,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      this = (MVNetworkGame *)actorNr_00;
      arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral__Players_ContainsKey_actorNr___,arg1,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
    }
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 != (MVPlayerContainer *)0x0) {
      bVar3 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar2,actorNr_00,(MethodInfo *)0x0);
      team_00 = team;
      if (bVar3 != 0) {
        pMVar2 = (pMVar1->fields).playerContainer;
        if (pMVar2 == (MVPlayerContainer *)0x0) goto code_?;
        this = (MVNetworkGame *)0x0;
        pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                           (pMVar2,actorNr_00,(MethodInfo *)0x0);
        if (pMVar5 == (MVPlayer *)0x0) goto code_?;
        method = (MethodInfo *)0x0;
        actorNr = (int32_t)&UNK_?;
        team = (MVTeam__Enum)pMVar5;
        pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)pMVar5,(MethodInfo *)0x0);
        if ((IKogamaSetting *)team_00 != pIVar6) {
          this_00 = (MethodInfo *)(pMVar1->fields).playerContainer;
          pGVar7 = (pMVar1->fields).gameStatCounterManager;
          if (this_00 == (MethodInfo *)0x0) goto code_?;
          team = (MVTeam__Enum)&UNK_?;
          method = this_00;
          pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                             ((MVPlayerContainer *)this_00,actorNr_00,(MethodInfo *)0x0);
          if ((pMVar5 == (MVPlayer *)0x0) ||
             (pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 ((KogamaSettingNumericBase_1_System_Single_ *)pMVar5,
                                  (MethodInfo *)0x0), pGVar7 == (GameStatCounterManager *)0x0))
          goto code_?;
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_RemoveTeamScoreOnActorLeave
                    (pGVar7,actorNr_00,(MVTeam__Enum)pIVar6,(MethodInfo *)0x0);
          team_00 = team;
        }
      }
      pMVar2 = (pMVar1->fields).playerContainer;
      if (pMVar2 != (MVPlayerContainer *)0x0) {
        MVPlayerContainer::MVPlayerContainer_UpdateTeam(pMVar2,actorNr_00,team_00,(MethodInfo *)0x0)
        ;
        this_01 = (MVNetworkGame *)(pMVar1->fields).gameStatCounterManager;
        if (this_01 != (MVNetworkGame *)0x0) {
          team = MVTeam__Enum_Blue;
          this = this_01;
          actorNr = actorNr_00;
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
                    ((GameStatCounterManager *)this_01,actorNr_00,(MethodInfo *)0x0);
          pMVar2 = (pMVar1->fields).playerContainer;
          if (pMVar2 != (MVPlayerContainer *)0x0) {
            method = (MethodInfo *)&UNK_?;
            pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
            if (pMVar8 != (MVLocalPlayer *)0x0) {
              pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar8,
                                  (MethodInfo *)0x0);
              if (pSVar4 != (String *)actorNr_00) {
                return;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar1 != (MVNetworkGame *)0x0) {
                if (cRam_? == '\0') {
                  func_?(_UNK_?);
                  cRam_? = '\x01';
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
                if (bVar3 == 0) {
                  return;
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar1 != (MVNetworkGame *)0x0) &&
                    (this_02 = (pMVar1->fields).worldNetwork, this_02 != (WorldNetwork *)0x0)) &&
                   (this_04 = (MVWorldObjectClientManagerNetwork *)
                              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                              ::Collection_1_VoxelHit__get_Items
                                        ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0),
                   this_04 != (MVWorldObjectClientManagerNetwork *)0x0)) {
                  MVWorldObjectClientManagerNetwork::
                  MVWorldObjectClientManagerNetwork_ResetLocalWorldObject(this_04,(MethodInfo *)0x0)
                  ;
                  this_03 = (pMVar1->fields)._GameCoinManager_k__BackingField;
                  if (this_03 != (MVGameCoinManager *)0x0) {
                    MVGameCoinManager::MVGameCoinManager_Reset(this_03,pMVar1,(MethodInfo *)0x0);
                    pMVar2 = (pMVar1->fields).playerContainer;
                    if ((pMVar2 != (MVPlayerContainer *)0x0) &&
                       (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                           (pMVar2,(MethodInfo *)0x0),
                       pMVar8 != (MVLocalPlayer *)0x0)) {
                      MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)pMVar8,(MethodInfo *)0x0);
                      pMVar2 = (pMVar1->fields).playerContainer;
                      pGVar7 = (pMVar1->fields).gameStatCounterManager;
                      if ((pMVar2 != (MVPlayerContainer *)0x0) &&
                         ((pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                              (pMVar2,(MethodInfo *)0x0),
                          pMVar8 != (MVLocalPlayer *)0x0 &&
                          (pSVar4 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                                    NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                              ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar8,
                                               (MethodInfo *)0x0),
                          pGVar7 != (GameStatCounterManager *)0x0)))) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveStatsFromActor
                                  (pGVar7,(int32_t)pSVar4,(MethodInfo *)0x0);
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
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSetWorldObjectsToPurchasedEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
               (MVNetworkGame *this,int32_t purchaseProfileId,int32_t itemId,MethodInfo *method)

{
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (pIVar1 != (IList_1_VoxelHit_ *)0x0) {
      uVar2 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0xfffffff8;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOStack_3 = (Object *)0x0;
      pDStack_4 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
      iStack_5 = 0;
      iStack_6 = 0;
      iStack_7 = 0;
      func_?();
      iVar8 = 0;
      puStack_9 = (undefined *)0x0;
      puStack_10 = (undefined4 *)&stack0xffffffb4;
      if ((*(Dictionary_2_WinningConditionType_System_Object_ **)(itemId + 8) !=
           (Dictionary_2_WinningConditionType_System_Object_ *)0x0) &&
         (puStack_10 = (undefined4 *)&stack0xffffffb4,
         this_01 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[WinningConditionType,System::Object]::
                   Dictionary_2_WinningConditionType_System_Object__get_Values
                             (*(Dictionary_2_WinningConditionType_System_Object_ **)(itemId + 8),
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                             ),
         this_01 !=
         (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
        pDVar11 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                           (&DStack_12,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                           );
        pDStack_4 = (pDVar11->host_enumerator).dictionary;
        iStack_5 = (pDVar11->host_enumerator).next;
        iStack_6 = (pDVar11->host_enumerator).stamp;
        iStack_7 = (pDVar11->host_enumerator).current.key;
        pOStack_3 = (pDVar11->host_enumerator).current.value;
        while( true ) {
          DStack_12.host_enumerator.dictionary =
               (Dictionary_2_WinningConditionType_System_Object_ *)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
          ;
          cVar13 = func_?();
          if (cVar13 == '\0') {
            *puStack_10 = 0x61;
            DStack_12.host_enumerator.dictionary =
                 (Dictionary_2_WinningConditionType_System_Object_ *)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
            ;
            func_?();
            *unaff_FS_OFFSET = uVar2;
            return;
          }
          DStack_12.host_enumerator.dictionary =
               (Dictionary_2_WinningConditionType_System_Object_ *)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
          ;
          this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
          if (this_02 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) break;
          pSVar14 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0)
          ;
          if ((pSVar14 == (String *)0x0) &&
             (pOVar15 = System.dll::System::Collections::Generic::
                       SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                       ::Single,System::Object]::
                       SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                 ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                   *)this_02,(MethodInfo *)0x0), pOVar15 == in_stack_16)) {
            DStack_12.host_enumerator.dictionary = this_02;
            func_?();
            iVar8 = iVar8 + 1;
            puStack_9 = (undefined *)iVar8;
          }
        }
      }
      func_?(0);
      DStack_12.host_enumerator.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)0x0
      ;
      func_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnShopInventoryResultSetResponse(Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,bool isDone,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  puStack_11 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_11 = (undefined4 *)&stack0xffffffa0, puStack_4 = &stack0xffffffa0,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_11 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar12 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar12 != (IEditModeUI *)0x0) {
    iVar13 = func_?(4,TypeInfo__IEditModeUI);
    if (iVar13 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar12 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      pIStack_14 = pIVar12;
      pCStack_15 = (ClientShopRepository *)func_?();
      ClientShopRepository::ClientShopRepository__ctor(pCStack_15,(MethodInfo *)0x0);
      pIVar16 = TypeInfo__IEditModeUI;
      if (pIVar12 == (IEditModeUI *)0x0) goto code_?;
      pIStack_17 = pIVar12->klass;
      uVar18 = 0;
      uStack_19 = 0;
      uVar20._0_1_ = (pIStack_17->_1).rank;
      uVar20._1_1_ = (pIStack_17->_1).minimumAlignment;
      if (uVar20 != 0) {
        do {
          pIVar12 = pIStack_14;
          if (pIStack_17->interfaceOffsets[uVar18].interfaceType ==
              (Il2CppClass *)TypeInfo__IEditModeUI) {
            ppMVar21 = &(&(pIStack_17->vtable).set_ClientShopRepository)
                       [pIStack_17->interfaceOffsets[uVar18].offset].method;
            goto code_?;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar20);
      }
      ppMVar21 = (MethodInfo **)func_?(pIVar12,TypeInfo__IEditModeUI);
code_?:
      (*(code *)*ppMVar21)(pIVar12,pCStack_15);
      unaff_ESI = pIVar16;
    }
    if ((outData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (this_00 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)outData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       this_00 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) {
      pDVar22 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                          (&DStack_23,
                           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                            *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                          );
      pDStack_7 = (pDVar22->host_enumerator).dictionary;
      iStack_8 = (pDVar22->host_enumerator).next;
      iStack_9 = (pDVar22->host_enumerator).stamp;
      iStack_10 = (pDVar22->host_enumerator).current.key;
      pOStack_6 = (pDVar22->host_enumerator).current.value;
      uStack_1 = 0;
      while( true ) {
        DStack_23.host_enumerator.dictionary =
             (Dictionary_2_WinningConditionType_System_Object_ *)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
        ;
        cVar24 = func_?();
        if (cVar24 == '\0') break;
        DStack_23.host_enumerator.dictionary =
             (Dictionary_2_WinningConditionType_System_Object_ *)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
        ;
        piVar25 = (int *)func_?();
        if (piVar25 == (int *)0x0) goto code_?;
        if (*(Il2CppClass **)(*piVar25 + 0x20) != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar26 = (int32_t *)func_?();
        key = *piVar26;
        unaff_ESI = (IEditModeUI__Class *)func_?();
        ShopItem::ShopItem__ctor((ShopItem *)unaff_ESI,key,outData,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pIVar12 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if ((pIVar12 == (IEditModeUI *)0x0) ||
           (pCVar27 = (ClientShopRepository *)func_?(4,TypeInfo__IEditModeUI),
           pCVar27 == (ClientShopRepository *)0x0)) goto code_?;
        ClientShopRepository::ClientShopRepository_AddItem
                  (pCVar27,(ShopItem *)unaff_ESI,(MethodInfo *)0x0);
      }
      unaff_ESI = (IEditModeUI__Class *)0x0;
      *puStack_11 = 0x73;
      uStack_1 = 0xffffffff;
      DStack_23.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
      ;
      func_?();
      if (isDone != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pIVar12 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if ((pIVar12 == (IEditModeUI *)0x0) ||
           (pCVar27 = (ClientShopRepository *)func_?(4,TypeInfo__IEditModeUI),
           pCVar27 == (ClientShopRepository *)0x0)) goto code_?;
        ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                  (pCVar27,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  piVar25 = (int *)func_?();
code_?:
  func_?(piVar25);
  func_?(unaff_ESI,0,0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnStatusChanged(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnStatusChanged
               (MVNetworkGame *this,StatusCode__Enum statusCode,MethodInfo *method)

{
  pMVar1 = (this->fields).statusChangedHandling;
  if (pMVar1 == (MVNetworkGame_StatusChangedHandling *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar3 = (int *)func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&statusCode);
  pMVar4 = (MVNetworkGame_StatusChangedHandling *)0x0;
  if (piVar3 == (int *)0x0) goto code_?;
  unaff_EDI = (String *)(**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
  pSVar5 = (StatusCode__Enum *)func_?(piVar3);
  statusCode = *pSVar5;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_PeerStatusCallback___,unaff_EDI,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar6,(MethodInfo *)0x0);
  this_00 = (pMVar1->fields).reconnectWithAlternatePortHandler;
  pMVar4 = pMVar1;
  if (this_00 == (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) goto code_?;
  bVar7 = MVNetworkGame+ReconnectWithAlternatePortHandler::
          MVNetworkGame_ReconnectWithAlternatePortHandler_IsHandling
                    (this_00,statusCode,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    return;
  }
  SVar8 = statusCode;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((pMVar1->fields).registeredFatalStatusCodeInStatHat == 0) &&
     (SVar8 != StatusCode__Enum_Connect)) {
    if (SVar8 == StatusCode__Enum_Disconnect) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      bVar7 = MVGameControllerBase::MVGameControllerBase_get_DisconnectIsOk((MethodInfo *)0x0);
      if (bVar7 != 0) goto code_?;
    }
    (pMVar1->fields).registeredFatalStatusCodeInStatHat = 1;
    piVar3 = (int *)func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&stack0xfffffff8
                                   );
    unaff_EDI = (String *)0x0;
    if (piVar3 == (int *)0x0) goto code_?;
    unaff_BX = in_stack_9;
    pSVar6 = (String *)(**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
    func_?(piVar3);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_StatusCode_,pSVar6,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar6,1,(MethodInfo *)0x0);
    pOVar10 = (Object *)func_?(TypeInfo__ExitGames__Client__Photon__StatusCode);
    unaff_EDI = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Client_disconnected_,pOVar10,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)unaff_EDI,(MethodInfo *)0x0);
  }
code_?:
  switch(statusCode) {
  case StatusCode__Enum_SecurityExceptionOnConnect:
  case StatusCode__Enum_ExceptionOnConnect:
  case StatusCode__Enum_Exception:
  case StatusCode__Enum_SendError:
code_?:
    pOVar10 = (Object *)
              func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&stack0xfffffff4);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    unaff_EDI = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Disconnected_because__,pOVar10,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)unaff_EDI,(MethodInfo *)0x0);
    pMVar11 = (pMVar1->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pIVar12 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pMVar11,(MethodInfo *)0x0);
      if (pIVar12 == (IKogamaSetting *)0x1) {
        return;
      }
      pMVar11 = (pMVar1->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
        ObjectPool_1_System_Object__set_countAll
                  ((ObjectPool_1_System_Object_ *)pMVar11,0,(MethodInfo *)0x0);
        if (TypeInfo__MVNetworkGame__StatusChangedHandling->static_fields->__f__am_cache0 ==
            (UnityAction *)0x0) {
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)0x0,
                     MethodInfo__MVNetworkGame__StatusChangedHandling___OnStatusChanged_m__0__,
                     (MethodInfo *)0x0);
          TypeInfo__MVNetworkGame__StatusChangedHandling->static_fields->__f__am_cache0 =
               (UnityAction *)this_02;
        }
        coroutine = WaitForFrames::WaitForFrames_Frames
                              (5,TypeInfo__MVNetworkGame__StatusChangedHandling->static_fields->
                                 __f__am_cache0,(MethodInfo *)0x0);
        Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case StatusCode__Enum_Connect:
    if ((((uint)(TypeInfo__DebugLogHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DebugLogHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__DebugLogHandler);
    }
    DebugLogHandler::DebugLogHandler_1_set_DidConnectToGameServer(1,(MethodInfo *)0x0);
    pMVar11 = (pMVar1->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pSVar13 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                          ((AvatarUIHandlerRemote *)pMVar11,(MethodInfo *)0x0);
      pMVar11 = (pMVar1->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) && (pSVar13 != (ShieldBar *)0x0)) {
        *(uint8_t *)&pSVar13[1].fields.shieldPivot =
             (pMVar11->fields).photonLoggingConfig.defaultDebugLevel;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
    break;
  case StatusCode__Enum_Disconnect:
    pMVar11 = (pMVar1->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pIVar12 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pMVar11,(MethodInfo *)0x0);
      if (pIVar12 == (IKogamaSetting *)0x0) {
        return;
      }
      pMVar11 = (pMVar1->fields).networkGame;
      if (pMVar11 != (MVNetworkGame *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
        ObjectPool_1_System_Object__set_countAll
                  ((ObjectPool_1_System_Object_ *)pMVar11,1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Expecting_that_this_disconnect_i,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  default:
    switch(statusCode) {
    case StatusCode__Enum_ExceptionOnReceive:
    case StatusCode__Enum_TimeoutDisconnect:
    case StatusCode__Enum_DisconnectByServerTimeout:
    case StatusCode__Enum_DisconnectByServerUserLimit:
    case StatusCode__Enum_DisconnectByServerLogic:
    case StatusCode__Enum_DisconnectByServerReasonUnknown:
      goto code_?;
    default:
      pOVar10 = (Object *)
                func_?(TypeInfo__ExitGames__Client__Photon__StatusCode,&stack0xfffffff4);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Unhandled_PeerStatusCallback__re,pOVar10,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  uVar14 = func_?(0);
  pcVar15 = (char *)((ulonglong)uVar14 >> 0x20);
  in_AF = 9 < ((byte)uVar14 & 0xf) | in_AF;
  uVar16 = CONCAT31((int3)((ulonglong)uVar14 >> 8),(byte)uVar14 + in_AF * -6) & 0xffffff0f;
  cVar17 = (char)uVar16;
  cVar18 = (char)((ulonglong)uVar14 >> 8) - in_AF;
  pcVar19 = (char *)CONCAT22((short)(uVar16 >> 0x10),CONCAT11(cVar18,cVar17));
  pMVar4->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar4->klass | (uint)unaff_EDI);
  bVar20 = (byte)((ushort)unaff_BX >> 8);
  *(byte *)&unaff_EDI->klass = *(char *)&unaff_EDI->klass + bVar20;
  pMVar4->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar4->klass | (uint)unaff_EDI);
  *(char *)&pMVar4->klass = *(char *)&pMVar4->klass + (char)unaff_BX;
  *(byte *)&pMVar4->klass = *(byte *)&pMVar4->klass | bVar20;
  *(char *)(extraout_ECX + 0x3f103e08) = *(char *)(extraout_ECX + 0x3f103e08) + bVar20;
  pMVar4->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar4->klass | (uint)unaff_EDI);
  *pcVar15 = *pcVar15 + cVar18;
  pMVar4->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar4->klass | (uint)unaff_EDI);
  *pcVar15 = *pcVar15 + cVar18;
  pMVar4->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar4->klass | (uint)unaff_EDI);
  *pcVar15 = *pcVar15 + cVar18;
  pMVar4->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar4->klass | (uint)unaff_EDI);
  *(byte *)&unaff_EDI->klass = *(char *)&unaff_EDI->klass + bVar20;
  pMVar4->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar4->klass | (uint)unaff_EDI);
  *(byte *)&unaff_EDI->klass = *(char *)&unaff_EDI->klass + bVar20;
  pMVar4->klass =
       (MVNetworkGame_StatusChangedHandling__Class *)((uint)pMVar4->klass | (uint)unaff_EDI);
  *pcVar19 = *pcVar19 + cVar17;
  *pcVar19 = *pcVar19 + cVar17;
  *pcVar19 = *pcVar19 + cVar17;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTransferOwnershipEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (photonEvent != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x54,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Boolean,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pcVar3 = (char *)func_?(pOVar1);
      cVar4 = *pcVar3;
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x16,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar5 = (int32_t *)func_?(pOVar1);
        id = *piVar5;
        iStack_6 = id;
        pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0x14,(MethodInfo *)0x0);
        uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          puVar7 = (undefined4 *)func_?(pOVar1);
          uStack_8 = CONCAT44(*puVar7,(undefined4)uStack_8);
          pWVar9 = (this->fields).worldNetwork;
          if ((pWVar9 != (WorldNetwork *)0x0) &&
             (this_01 = (MVWorldObjectClientManagerNetwork *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                        Collection_1_VoxelHit__get_Items
                                  ((Collection_1_VoxelHit_ *)pWVar9,(MethodInfo *)0x0),
             this_01 != (MVWorldObjectClientManagerNetwork *)0x0)) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_TransferOwnershipProxy
                      (this_01,id,uStack_8._4_4_,(MethodInfo *)0x0);
            if (cVar4 == '\0') {
              return;
            }
            pWVar9 = (this->fields).worldNetwork;
            if ((pWVar9 != (WorldNetwork *)0x0) &&
               (this_02 = (MVWorldObjectClientManager *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                          Collection_1_VoxelHit__get_Items
                                    ((Collection_1_VoxelHit_ *)pWVar9,(MethodInfo *)0x0),
               this_02 != (MVWorldObjectClientManager *)0x0)) {
              pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (this_02,id,(MethodInfo *)0x0);
              if (pMVar10 == (MVWorldObject *)0x0) {
                return;
              }
              pVVar11 = MVWorldObject.dll::MV::WorldObject::TransformHelper::
                        TransformHelper_GetPosition
                                  ((Vector3 *)(auStack_12 + 4),(photonEvent->fields).Parameters,
                                   (MethodInfo *)0x0);
              uStack_8._0_4_ = pVVar11->x;
              uStack_8._4_4_ = (int32_t)pVVar11->y;
              fVar13 = pVVar11->z;
              pQVar14 = MVWorldObject.dll::MV::WorldObject::TransformHelper::
                        TransformHelper_GetRotation
                                  ((Quaternion *)auStack_12,(photonEvent->fields).Parameters,
                                   (MethodInfo *)0x0);
              auStack_12._0_4_ = pQVar14->x;
              auStack_12._4_4_ = pQVar14->y;
              fStack_15 = pQVar14->z;
              fStack_16 = pQVar14->w;
              this_00 = (this->fields).transformNetworkManager;
              if (this_00 != (TransformNetworkManager *)0x0) {
                TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                          (this_00,iStack_6,(MethodInfo *)0x0);
                (*(code *)(pMVar10->klass->vtable).set_Position.method)
                          (pMVar10,uStack_8,fVar13,(pMVar10->klass->vtable).get_Rotation.methodPtr);
                (*(code *)(pMVar10->klass->vtable).set_Rotation.method)
                          (pMVar10,auStack_12._0_4_,auStack_12._4_4_,fStack_15,fStack_16,
                           (pMVar10->klass->vtable).get_Scale.methodPtr);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnTransferOwnershipResponse(Dictionary`2[System.Byte,System.Object], Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               int32_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        ownerActorNr = *piVar3;
        this_00 = (this->fields).worldNetwork;
        if (returnCode == 0) {
          if (this_00 != (WorldNetwork *)0x0) {
            pMVar4 = (MVWorldObjectClientManagerNetwork *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
            if (pMVar4 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
                        (pMVar4,id,ownerActorNr,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if (this_00 != (WorldNetwork *)0x0) {
          pMVar4 = (MVWorldObjectClientManagerNetwork *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
          if (pMVar4 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
                      (pMVar4,id,ownerActorNr,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  uVar2 = func_?(0);
code_?:
  func_?(uVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnTransferWorldObjectsToGroup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (eventData == (EventData *)0x0) {
code_?:
    func_?();
  }
  else {
    pIVar1 = (Int32__Array__Class *)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x16,(MethodInfo *)0x0);
    if (pIVar1 == (Int32__Array__Class *)0x0) goto code_?;
    if ((Il2CppClass *)((pIVar1->_0).image)->codeGenModule !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    pOVar2 = (Object *)&UNK_?;
    piVar3 = (int32_t *)func_?(pIVar1);
    groupId = *piVar3;
    unaff_EDI = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x48,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Int32;
    if (unaff_EDI == (Object *)0x0) {
      worldObjectsToGroup = (Int32__Array *)0x0;
code_?:
      unaff_EBX = pIVar1;
      unaff_EDI = pOVar2;
      this_00 = (this->fields).worldNetwork;
      if (this_00 != (WorldNetwork *)0x0) {
        this_01 = (MVWorldObjectClientManagerNetwork *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManagerNetwork *)0x0) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
                    (this_01,groupId,worldObjectsToGroup,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    worldObjectsToGroup = (Int32__Array *)func_?(unaff_EDI,TypeInfo__System__Int32);
    if (worldObjectsToGroup != (Int32__Array *)0x0) goto code_?;
  }
  pIVar1 = (Int32__Array__Class *)func_?(unaff_EDI,unaff_EBX);
code_?:
  func_?(pIVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnTriggerBoxEnterEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
               (MVNetworkGame *this,int32_t actorNr,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pWVar2 = (this->fields).worldNetwork;
  if (pWVar2 != (WorldNetwork *)0x0) {
    pMVar3 = (MVWorldObjectClientManager *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
    id = worldObjectID;
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar3,worldObjectID,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObject *)0x0) {
        this = (MVNetworkGame *)&this;
        pMVar5 = (MethodInfo *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        worldObjectID = (int32_t)StringLiteral_OnTriggerBoxEnterEvent_received_;
        method = pMVar5;
        arg2 = (Action_1_String_ *)StringLiteral__does_not_exist;
code_?:
        actorNr = (int32_t)&UNK_?;
        message = mscorlib.dll::System::String::String_Concat_1
                            ((Object *)worldObjectID,(Object *)method,(Object *)arg2,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
      pWVar2 = (pMVar1->fields).worldNetwork;
      if (pWVar2 != (WorldNetwork *)0x0) {
        this = (MVNetworkGame *)0x0;
        this_01 = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame *)0x0) {
          worldObjectID = 0;
          actorNr = id;
          this = this_01;
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             ((MVWorldObjectClientManager *)this_01,id,(MethodInfo *)0x0);
          if (pMVar4 != (MVWorldObject *)0x0) {
            bVar6 = (TypeInfo__MVTriggerBox->_1).naturalAligment;
            if (((pMVar4->klass->_1).naturalAligment < bVar6) ||
               ((MVTriggerBox__Class *)(pMVar4->klass->_1).typeHierarchy[bVar6 - 1] !=
                TypeInfo__MVTriggerBox)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            pMVar8 = (MVWorldObject *)0x0;
            if (bVar7) {
              pMVar8 = pMVar4;
            }
            if (pMVar8 != (MVWorldObject *)0x0) {
              pWVar2 = (pMVar1->fields).worldNetwork;
              if (pWVar2 != (WorldNetwork *)0x0) {
                method = (MethodInfo *)&UNK_?;
                pMVar3 = (MVWorldObjectClientManager *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
                if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar3,id,(MethodInfo *)0x0);
                  this_02 = (MVTriggerBox *)func_?();
                  this_00 = (pMVar1->fields).playerContainer;
                  if (this_00 != (MVPlayerContainer *)0x0) {
                    player = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (this_00,actorNr,(MethodInfo *)0x0);
                    if (this_02 != (MVTriggerBox *)0x0) {
                      MVTriggerBox::MVTriggerBox_OnEnter(this_02,player,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
              goto code_?;
            }
          }
          this = (MVNetworkGame *)id;
          method = (MethodInfo *)&UNK_?;
          pMVar5 = (MethodInfo *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          worldObjectID = (int32_t)StringLiteral_OnTriggerBoxStayBegin_received__;
          method = pMVar5;
          arg2 = (Action_1_String_ *)StringLiteral__is_not_a_triggerbox_or_a_toggle;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnTriggerBoxExitEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
               (MVNetworkGame *this,int32_t actorNr,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pWVar2 = (this->fields).worldNetwork;
  if (pWVar2 != (WorldNetwork *)0x0) {
    pMVar3 = (MVWorldObjectClientManager *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
    id = worldObjectID;
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar3,worldObjectID,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObject *)0x0) {
        this = (MVNetworkGame *)&this;
        pMVar5 = (MethodInfo *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        worldObjectID = (int32_t)StringLiteral_OnTriggerBoxExitEvent_received__;
        method = pMVar5;
        arg2 = (Action_1_String_ *)StringLiteral__does_not_exist;
code_?:
        actorNr = (int32_t)&UNK_?;
        message = mscorlib.dll::System::String::String_Concat_1
                            ((Object *)worldObjectID,(Object *)method,(Object *)arg2,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return;
      }
      pWVar2 = (pMVar1->fields).worldNetwork;
      if (pWVar2 != (WorldNetwork *)0x0) {
        this = (MVNetworkGame *)0x0;
        this_01 = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame *)0x0) {
          worldObjectID = 0;
          actorNr = id;
          this = this_01;
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             ((MVWorldObjectClientManager *)this_01,id,(MethodInfo *)0x0);
          if (pMVar4 != (MVWorldObject *)0x0) {
            bVar6 = (TypeInfo__MVTriggerBox->_1).naturalAligment;
            if (((pMVar4->klass->_1).naturalAligment < bVar6) ||
               ((MVTriggerBox__Class *)(pMVar4->klass->_1).typeHierarchy[bVar6 - 1] !=
                TypeInfo__MVTriggerBox)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            pMVar8 = (MVWorldObject *)0x0;
            if (bVar7) {
              pMVar8 = pMVar4;
            }
            if (pMVar8 != (MVWorldObject *)0x0) {
              pWVar2 = (pMVar1->fields).worldNetwork;
              if (pWVar2 != (WorldNetwork *)0x0) {
                method = (MethodInfo *)&UNK_?;
                pMVar3 = (MVWorldObjectClientManager *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pWVar2,(MethodInfo *)0x0);
                if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar3,id,(MethodInfo *)0x0);
                  this_02 = (MVTriggerBox *)func_?();
                  this_00 = (pMVar1->fields).playerContainer;
                  if (this_00 != (MVPlayerContainer *)0x0) {
                    player = MVPlayerContainer::MVPlayerContainer_get_Item
                                       (this_00,actorNr,(MethodInfo *)0x0);
                    if (this_02 != (MVTriggerBox *)0x0) {
                      MVTriggerBox::MVTriggerBox_OnExit(this_02,player,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
              goto code_?;
            }
          }
          this = (MVNetworkGame *)id;
          method = (MethodInfo *)&UNK_?;
          pMVar5 = (MethodInfo *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          worldObjectID = (int32_t)StringLiteral_OnTriggerBoxStayBegin_received__;
          method = pMVar5;
          arg2 = (Action_1_String_ *)StringLiteral__is_not_a_triggerbox_or_a_toggle;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnTriggerBoxStayBegin(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
               (MVNetworkGame *this,int32_t worldObjectID,int32_t instigatorId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    this_01 = (MVWorldObjectClientManager *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this = (MVNetworkGame *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,worldObjectID,(MethodInfo *)0x0);
      if (this == (MVNetworkGame *)0x0) {
        worldObjectID = (int32_t)&this;
        this = (MVNetworkGame *)TypeInfo__System__Int32;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          worldObjectID = (int32_t)TypeInfo__System__String;
          this = (MVNetworkGame *)&UNK_?;
          func_?();
        }
        this = (MVNetworkGame *)StringLiteral__does_not_exist;
      }
      else {
        worldObjectID = (int32_t)TypeInfo__ITriggerBoxEventsHandler;
        this = (MVNetworkGame *)func_?();
        if (this != (MVNetworkGame *)0x0) {
          worldObjectID = instigatorId;
          func_?(0);
          return;
        }
        worldObjectID = (int32_t)&this;
        this = (MVNetworkGame *)TypeInfo__System__Int32;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          worldObjectID = (int32_t)TypeInfo__System__String;
          this = (MVNetworkGame *)&UNK_?;
          func_?();
        }
        this = (MVNetworkGame *)StringLiteral__is_not_a_triggerbox_or_a_toggle;
      }
      worldObjectID = 0;
      message = mscorlib.dll::System::String::String_Concat_1
                          ((Object *)StringLiteral_OnTriggerBoxStayBegin_received__,arg1,
                           (Object *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      method = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnTriggerBoxStayEnd(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    this_01 = (MVWorldObjectClientManager *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this = (MVNetworkGame *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,worldObjectID,(MethodInfo *)0x0);
      if (this == (MVNetworkGame *)0x0) {
        worldObjectID = (int32_t)&this;
        this = (MVNetworkGame *)TypeInfo__System__Int32;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          worldObjectID = (int32_t)TypeInfo__System__String;
          this = (MVNetworkGame *)&UNK_?;
          func_?();
        }
        this = (MVNetworkGame *)StringLiteral__does_not_exist;
      }
      else {
        worldObjectID = (int32_t)TypeInfo__ITriggerBoxEventsHandler;
        worldObjectID = func_?();
        if (worldObjectID != 0) {
          this = (MVNetworkGame *)TypeInfo__ITriggerBoxEventsHandler;
          func_?();
          return;
        }
        worldObjectID = (int32_t)&this;
        this = (MVNetworkGame *)TypeInfo__System__Int32;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          worldObjectID = (int32_t)TypeInfo__System__String;
          this = (MVNetworkGame *)&UNK_?;
          func_?();
        }
        this = (MVNetworkGame *)StringLiteral__is_not_a_triggerbox_or_a_toggle;
      }
      worldObjectID = 0;
      message = mscorlib.dll::System::String::String_Concat_1
                          ((Object *)StringLiteral_OnTriggerBoxStayEnd_received__bu,arg1,
                           (Object *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnUnregisterPrototypeEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
               (MVNetworkGame *this,int32_t worldInventoryID,MethodInfo *method)

{
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        (MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pDRam00000008 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)pDRam00000008,
                           in_stack_3,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Failed_to_remove_runtime_prototy,(MethodInfo *)0x0);
          return;
        }
        if (pDRam00000008 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          this_01 = (RuntimePrototypeCubeModel *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDRam00000008,in_stack_3,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                              );
          if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy(this_01,(MethodInfo *)0x0);
            if (pDRam00000008 !=
                (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                        (pDRam00000008,in_stack_3,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                        );
              if (pMRam00000014 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
                MVWorldInventory+OnWorldInventoryChangeDelegate::
                MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke
                          (pMRam00000014,(MVWorldInventory *)0x0,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUnregisterWorldObjectEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 == (WorldNetwork *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                      (this_00,worldObjectID,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    this_01 = (pWVar1->fields)._.worldObjectClientManager;
    if (this_01 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                (this_01,worldObjectID,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUnregisterWorldObjectResponse(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    bVar1 = WorldNetwork::WorldNetwork_OnUnregisterWorldObject
                      (this_00,worldObjectID,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_OnUnregisterWorldObjectResponse_,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUpdateLineOfFire(Int32, Vector3, Vector3) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
               (MVNetworkGame *this,int32_t worldObjectID,Vector3 camOrigin,Vector3 camDir,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    this_01 = (MVWorldObjectClientManager *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = (DayNightCycle *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,worldObjectID,(MethodInfo *)0x0);
      if (this_02 != (DayNightCycle *)0x0) {
        this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0);
        pMVar1 = MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__;
        if (this_03 != (CelestialParam *)0x0) {
          this_04 = (MVPickupOwner *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                              ((GameObject *)this_03,
                               MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                              );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            camDir.x = (float)TypeInfo__UnityEngine__Object;
            camOrigin.z = (float)&UNK_?;
            func_?();
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)this_04,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
            return;
          }
          if (this_04 != (MVPickupOwner *)0x0) {
            lookOrigin.y = (float)pMVar1;
            lookOrigin.x = (float)this_03;
            lookOrigin.z = camOrigin.z;
            lookDirection.y = camDir.y;
            lookDirection.x = camDir.x;
            lookDirection.z = camDir.z;
            MVPickupOwner::MVPickupOwner_SetLineOfFire
                      (this_04,lookOrigin,lookDirection,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUpdateWorldObjectEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
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
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)p,(MethodInfo *)0x0);
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
    if ((((uint)(TypeInfo__MV__WorldObject__QuaternionCompression->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__QuaternionCompression->_1).cctor_started == 0)) {
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
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        (MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      method = (MethodInfo *)0x0;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      key = method;
      iVar2 = worldInventoryId;
      if (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)(worldInventoryId + 0xc) !=
          (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                          (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)
                            (worldInventoryId + 0xc),(int32_t)method,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                          );
        if (bVar3 == 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
            pPVar5 = (PrefabPool *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar4,(int32_t)key,(MethodInfo *)0x0);
            if (pPVar5 != (PrefabPool *)0x0) {
              bVar6 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
              if (((((MVWorldObject__Class *)pPVar5->klass)->_1).naturalAligment < bVar6) ||
                 ((MVCubeModelInstance__Class *)
                  (((MVWorldObject__Class *)pPVar5->klass)->_1).typeHierarchy[bVar6 - 1] !=
                  TypeInfo__MVCubeModelInstance)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              this_05 = (PrefabPool *)0x0;
              if (bVar7) {
                this_05 = pPVar5;
              }
              if (this_05 == (PrefabPool *)0x0) {
                func_?();
              }
              else {
                key_00 = MVCubeModelBase::MVCubeModelBase_get_Pid
                                   ((MVCubeModelBase *)this_05,(MethodInfo *)0x0);
                if (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      **)(iVar2 + 8) !=
                    (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
                  method = 
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                  ;
                  worldInventoryId = key_00;
                  this_01 = (RuntimePrototypeCubeModel *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                            ::
                            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                      (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                         **)(iVar2 + 8),key_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                      );
                  if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
                    method = (MethodInfo *)&UNK_?;
                    this_02 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                                        (this_01,0,(MethodInfo *)0x0);
                    if (this_02 != (RuntimePrototypeCubeModel *)0x0) {
                      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                                (this_02,(int32_t)this_01,(MethodInfo *)0x0);
                      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                                (this_02,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
                      if (*(Dictionary_2_System_Int32_System_Object_ **)(iVar2 + 8) !=
                          (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Add
                                  (*(Dictionary_2_System_Int32_System_Object_ **)(iVar2 + 8),
                                   (int32_t)this_01,(Object *)this_02,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                                  );
                        this_03 = (RuntimePrototypeCubeModel *)
                                  ThemeWorldObject::ThemeWorldObject_get_Visualization
                                            ((ThemeWorldObject *)this_05,(MethodInfo *)0x0);
                        if (this_03 != (RuntimePrototypeCubeModel *)0x0) {
                          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                                    (this_03,(int32_t)method,(MethodInfo *)0x0);
                          MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                                    ((MVCubeModelBase *)this_05,this_02,(MethodInfo *)0x0);
                          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                                    (this_02,(MVCubeModelBase *)this_05,(MethodInfo *)0x0);
                          this_04 = (Dictionary_2_System_String_Theme_ *)
                                    PrefabPool::PrefabPool_get_MVBatteryPrefab
                                              (this_05,(MethodInfo *)0x0);
                          worldInventoryId = (int32_t)this_01;
                          pTVar8 = (Theme *)func_?();
                          if (this_04 != (Dictionary_2_System_String_Theme_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            String,Theme]::Dictionary_2_System_String_Theme__set_Item
                                      (this_04,StringLiteral_protoTypeID,pTVar8,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
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
        else if (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)(iVar2 + 0xc) !=
                 (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
          PVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,PendingPrototypeData]::
                   Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                             (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)(iVar2 + 0xc),
                              (int32_t)key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                             );
          if (PVar9.pendingRuntimePrototype != (RuntimePrototypeCubeModel *)0x0) {
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                      (PVar9.pendingRuntimePrototype,in_stack_10,(MethodInfo *)0x0);
            if (*(Dictionary_2_System_Int32_System_Object_ **)(iVar2 + 8) !=
                (Dictionary_2_System_Int32_System_Object_ *)0x0) {
              method = 
              MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
              ;
              worldInventoryId = in_stack_10;
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                                (*(Dictionary_2_System_Int32_System_Object_ **)(iVar2 + 8),
                                 in_stack_10,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                                );
              if (bVar3 == 0) {
                method = *(MethodInfo **)(iVar2 + 8);
                if (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)(iVar2 + 0xc) ==
                    (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
                method = (MethodInfo *)&UNK_?;
                PVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,PendingPrototypeData]::
                         Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                                   (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)
                                     (iVar2 + 0xc),(int32_t)key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                                   );
                if (method == (MethodInfo *)0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Add
                          ((Dictionary_2_System_Int32_System_Object_ *)method,in_stack_10,
                           (Object *)PVar9.pendingRuntimePrototype,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                          );
                if (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)(iVar2 + 0xc) ==
                    (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
                PVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,PendingPrototypeData]::
                         Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                                   (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)
                                     (iVar2 + 0xc),(int32_t)key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                                   );
                if (PVar9.pendingRuntimePrototype == (RuntimePrototypeCubeModel *)0x0)
                goto code_?;
                RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                          (PVar9.pendingRuntimePrototype,PrototypeState__Enum_Registered,
                           (MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
                pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar4,(int32_t)key,(MethodInfo *)0x0);
                pPVar5 = (PrefabPool *)func_?(pMVar11,TypeInfo__MVCubeModelInstance);
                if (pPVar5 == (PrefabPool *)0x0) goto code_?;
                method = (MethodInfo *)
                         PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar5,(MethodInfo *)0x0);
                worldInventoryId = in_stack_10;
                pTVar8 = (Theme *)func_?(TypeInfo__System__Int32,&worldInventoryId);
                if (method == (MethodInfo *)0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                Dictionary_2_System_String_Theme__set_Item
                          ((Dictionary_2_System_String_Theme_ *)method,StringLiteral_protoTypeID,
                           pTVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
              }
              else {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Pending_runtime_prototype_allrea,
                           (MethodInfo *)0x0);
              }
              if (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)(iVar2 + 0xc) !=
                  (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__Remove
                          (*(Dictionary_2_System_Int32_PendingPrototypeData_ **)(iVar2 + 0xc),
                           (int32_t)key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                          );
                return;
              }
            }
          }
        }
      }
code_?:
      func_?(0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnWorldObjectRPCEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return;
  }
  if (photonEvent != (EventData *)0x0) {
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x16,(MethodInfo *)0x0);
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar4 = (int32_t *)func_?(pOVar2);
      id = *piVar4;
      pWVar5 = (this->fields).worldNetwork;
      if ((pWVar5 != (WorldNetwork *)0x0) &&
         (pMVar6 = (MVWorldObjectClientManager *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)pWVar5,(MethodInfo *)0x0),
         pMVar6 != (MVWorldObjectClientManager *)0x0)) {
        pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar6,id,(MethodInfo *)0x0);
        if (pMVar7 == (MVWorldObject *)0x0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
          return;
        }
        pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0xfe,(MethodInfo *)0x0);
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar4 = (int32_t *)func_?(pOVar2);
          this_00 = (this->fields).playerContainer;
          if (this_00 != (MVPlayerContainer *)0x0) {
            MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar4,(MethodInfo *)0x0);
            pWVar5 = (this->fields).worldNetwork;
            if ((pWVar5 != (WorldNetwork *)0x0) &&
               (pMVar6 = (MVWorldObjectClientManager *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pWVar5,(MethodInfo *)0x0),
               pMVar6 != (MVWorldObjectClientManager *)0x0)) {
              pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar6,id,(MethodInfo *)0x0);
              pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                 (photonEvent,0x53,(MethodInfo *)0x0);
              if (pMVar7 != (MVWorldObject *)0x0) {
                uVar8 = func_?(pOVar2,
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                       );
                (*pMVar7->klass[1].vtable.get_WorldRotation.methodPtr)
                          (pMVar7,pOVar2,uVar8,pMVar7->klass[1].vtable.get_WorldRotation.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar3 = func_?(0);
code_?:
  func_?(uVar3);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void PlayModeSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_PlayModeSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xd,(MethodInfo *)0x0);
    userList = pDVar1;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      userList = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar3) {
        userList = pDVar1;
      }
      pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (userList == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    }
    MVNetworkGame_CreatePlayersFromUserList(this,userList,(MethodInfo *)0x0);
    pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      puVar6 = (undefined4 *)func_?();
      pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,(uint8_t)*puVar6,(MethodInfo *)0x0);
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar6 = (undefined4 *)func_?();
      pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x42,(MethodInfo *)*puVar6);
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      func_?();
      startTime = 0;
      gameStateType = 0x9e;
      pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x9e,(MethodInfo *)0x0);
      data = (Byte__Array *)0x0;
      if (pOVar5 == (Object *)0x0) {
code_?:
        this_00 = (this->fields).gameStatCounterManager;
        if (this_00 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStats
                    (this_00,data,(MethodInfo *)0x0);
          this_01 = (this->fields)._NetworkGameStateListener_k__BackingField;
          unaff_EDI = in_stack_7;
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
  pDVar1 = extraout_EDX;
  pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)this;
code_?:
  func_?(pDVar1,pDVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetPlayer() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_ResetPlayer
               (MVNetworkGame *this,MethodInfo *method)

{
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    this_03 = (MVWorldObjectClientManagerNetwork *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_ResetLocalWorldObject
                (this_03,(MethodInfo *)0x0);
      this_01 = (this->fields)._GameCoinManager_k__BackingField;
      if (this_01 != (MVGameCoinManager *)0x0) {
        MVGameCoinManager::MVGameCoinManager_Reset(this_01,this,(MethodInfo *)0x0);
        pMVar1 = (this->fields).playerContainer;
        if (pMVar1 != (MVPlayerContainer *)0x0) {
          pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)pMVar2,(MethodInfo *)0x0);
            pMVar1 = (this->fields).playerContainer;
            this_02 = (this->fields).gameStatCounterManager;
            if (pMVar1 != (MVPlayerContainer *)0x0) {
              pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar1,(MethodInfo *)0x0);
              if (pMVar2 != (MVLocalPlayer *)0x0) {
                actorNumber = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                              NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                        ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar2,
                                         (MethodInfo *)0x0);
                if (this_02 != (GameStatCounterManager *)0x0) {
                  MVWorldObject.dll::GameStatCounterManager::
                  GameStatCounterManager_RemoveStatsFromActor
                            (this_02,(int32_t)actorNumber,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
        func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (stepTimestamp != (stepTimestamp / 1000) * 1000) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_stepTimestamp_is_not_correctly_i,(MethodInfo *)0x0);
  }
  this_00 = (LogicObjectManagerClient *)func_?(TypeInfo__LogicObjectManagerClient);
  LogicObjectManagerClient::LogicObjectManagerClient__ctor
            (this_00,stepTimestamp,0,(MethodInfo *)0x0);
  (this->fields)._LogicObjectManager_k__BackingField = this_00;
  this_01 = (ScaleAnimationBase *)
            func_?(TypeInfo__MVNetworkGame__LogicObjectManagerClientWrapper);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkGame_UpdateEvaluator *)
           func_?(TypeInfo__MVNetworkGame__UpdateEvaluator);
  MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator__ctor(pMVar1,100,(MethodInfo *)0x0);
  (this_01->fields).originalScale.x = (float)pMVar1;
  method_01 = TypeInfo__MVNetworkGame__UpdateEvaluator;
  pMVar1 = (MVNetworkGame_UpdateEvaluator *)func_?();
  MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator__ctor(pMVar1,10,(MethodInfo *)0x0);
  (this_01->fields).originalScale.y = (float)pMVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_01);
  (this_01->fields).state = (int32_t)this;
  pMVar1 = (MVNetworkGame_UpdateEvaluator *)(this_01->fields).originalScale.x;
  if (pMVar1 != (MVNetworkGame_UpdateEvaluator *)0x0) {
    MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
              (pMVar1,stepTimestamp,(MethodInfo *)0x0);
    this_02 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = 
    TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
    ;
    this_03._._._.m_CachedPtr = (Behaviour__Fields)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03._._._.m_CachedPtr,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
              );
    (this_02->fields)._._ = this_03._._._.m_CachedPtr;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
    (this_01->fields)._._._._.m_CachedPtr = this_02;
    (this->fields).logicObjectManagerClientWrapper =
         (MVNetworkGame_LogicObjectManagerClientWrapper *)this_01;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_SubscribeToEvent
               (MVNetworkGame *this,MVEventCodes__Enum eventCode,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  pMVar1 = (this->fields).eventHandling;
  if ((pMVar1 == (MVNetworkGame_EventHandling *)0x0) ||
     (pMVar2 = (pMVar1->fields).dynamicEventCallbackManager,
     pMVar2 == (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0)) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
            (pMVar2->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,eventCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                      );
    if (bVar4 == 0) goto code_?;
    pDVar5 = (pMVar2->fields).eventCallbacks;
    if (pDVar5 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                   *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              MVEventCodes,System::Object]::
              Dictionary_2_MV_Common_MVEventCodes_System_Object__ContainsKey
                        ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar5,eventCode,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                        );
      if (bVar4 == 0) {
        pDVar5 = (pMVar2->fields).eventCallbacks;
        this_01 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
        if (pDVar5 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVEventCodes,System::
        Object]::Dictionary_2_MV_Common_MVEventCodes_System_Object__Add
                  ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar5,eventCode,
                   (Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                  );
      }
      pDVar5 = (pMVar2->fields).eventCallbacks;
      if (pDVar5 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) {
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 MVEventCodes,System::Object]::
                 Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                           ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar5,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           );
        if (pOVar6 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar6[1].klass;
          do {
            pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
            if (pDVar7 != (Delegate *)0x0) {
              pDVar8 = (Delegate *)0x0;
              if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar7->klass ==
                  TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
                pDVar8 = pDVar7;
              }
              if (pDVar8 == (Delegate *)0x0) goto code_?;
            }
            pOVar9 = (Object__Class *)func_?(pOVar6 + 1);
            bVar10 = pOVar9 == a;
            a = pOVar9;
            if (bVar10) {
              return;
            }
          } while( true );
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?();
code_?:
  this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_02,StringLiteral_Event_not_handled_by_dynamic_eve,(MethodInfo *)0x0);
  func_?(this_02);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TransferBodyResponseHandler(Object, OnTransferWosResponseEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_TransferBodyResponseHandler
               (MVNetworkGame *this,Object *sender,OnTransferWosResponseEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldNetwork;
  if (this_00 != (WorldNetwork *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (pIVar1 != (IList_1_VoxelHit_ *)0x0) {
      pDVar2 = (Delegate *)pIVar1[8].monitor;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVNetworkGame__TransferBodyResponseHandler_System__Object__OnTransferWosResponseEventArgs_
                 ,
                 MethodInfo__System__EventHandler<OnTransferWosResponseEventArgs>__EventHandler_System__Object__void__
                );
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDVar3 != (Delegate *)0x0) {
        if ((EventHandler_1_OnTransferWosResponseEventArgs___Class *)pDVar3->klass ==
            TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>) {
          pDVar2 = pDVar3;
        }
        pEVar4 = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
        if (pDVar2 == (Delegate *)0x0) goto code_?;
      }
      pIVar1[8].monitor = (MonitorData *)pDVar2;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_TransferWosResponseHandler,(MethodInfo *)0x0);
      if (e != (OnTransferWosResponseEventArgs *)0x0) {
        if ((e->fields).success == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Body_transfer_failed_,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?(0);
  pDVar3 = extraout_ECX;
  pEVar4 = extraout_EDX;
code_?:
  func_?(pDVar3,pEVar4);
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
  if (pMVar1 != (MVNetworkGame_EventHandling *)0x0) {
    pMVar2 = (pMVar1->fields).dynamicEventCallbackManager;
    if (pMVar2 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar3 = (pMVar2->fields).eventCallbacks;
      if (pDVar3 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 MVEventCodes,System::Object]::
                 Dictionary_2_MV_Common_MVEventCodes_System_Object__get_Item
                           ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar3,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           );
        if (pOVar4 != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          source = pOVar4[1].klass;
          do {
            pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
            pDVar6 = (Delegate *)0x0;
            if (pDVar5 != (Delegate *)0x0) {
              if ((Action_1_ExitGames_Client_Photon_EventData___Class *)pDVar5->klass ==
                  TypeInfo__System__Action<ExitGames::Client::Photon::EventData>) {
                pDVar6 = pDVar5;
              }
              pAVar7 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
              if (pDVar6 == (Delegate *)0x0) goto code_?;
            }
            pOVar8 = (Object__Class *)func_?(pOVar4 + 1,pDVar6,source);
            bVar9 = pOVar8 != source;
            source = pOVar8;
          } while (bVar9);
          if (pOVar4[1].klass == (Object__Class *)0x0) {
            pDVar3 = (pMVar2->fields).eventCallbacks;
            if (pDVar3 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                           *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVEventCodes,System
            ::Object]::Dictionary_2_MV_Common_MVEventCodes_System_Object__Remove
                      ((Dictionary_2_MV_Common_MVEventCodes_System_Object_ *)pDVar3,eventCode,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                      );
          }
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pDVar5 = extraout_ECX;
  pAVar7 = extraout_EDX;
code_?:
  func_?(pDVar5,pAVar7);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Update
               (MVNetworkGame *this,MethodInfo *method)

{
  method_01 = (MethodInfo *)&DAT_?;
  pMVar1 = (MVNetworkGame *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._Peer_k__BackingField != (PhotonPeer *)0x0) {
    method_00 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                          ((MethodInfo *)0x0);
    if (_UNK_? <= (float)method_00 - (this->fields).prevServiceCallTime) {
      pPVar2 = (this->fields)._Peer_k__BackingField;
      if (pPVar2 == (PhotonPeer *)0x0) goto code_?;
      (*(code *)(pPVar2->klass->vtable).Service.method)(pPVar2);
      method_00 = (MethodInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                            ((MethodInfo *)0x0);
      (this->fields).prevServiceCallTime = (float)method_00;
    }
    this_00 = (this->fields).logicObjectManagerClientWrapper;
    if (this_00 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_Update(this_00,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar3 == MVJoinState__Enum_Playing) {
      this_01 = (this->fields).runtimeVariableNetworkManager;
      if (this_01 == (RuntimeVariableNetworkManager *)0x0) goto code_?;
      RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData
                (this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).transformNetworkManager;
      if (this_02 == (TransformNetworkManager *)0x0) goto code_?;
      TransformNetworkManager::TransformNetworkManager_Update(this_02,this,unaff_EBX);
      this_03 = (this->fields).worldNetwork;
      if (this_03 == (WorldNetwork *)0x0) goto code_?;
      WorldNetwork::WorldNetwork_Update(this_03,this,method_00);
      this_04 = (this->fields)._GameCoinManager_k__BackingField;
      if (this_04 == (MVGameCoinManager *)0x0) goto code_?;
      method_00 = (MethodInfo *)&UNK_?;
      pMVar1 = this;
      MVGameCoinManager::MVGameCoinManager_Update(this_04,this,method_01);
    }
    this_05 = (this->fields)._NetworkGameStateListener_k__BackingField;
    if (this_05 == (MVNetworkGameStateListener *)0x0) {
code_?:
      func_?();
      func_?(method_00,0,MethodInfo__MVNetworkGame__Update__);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    MVNetworkGameStateListener::MVNetworkGameStateListener_Update(this_05,this,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = pMVar1;
  return;
}


/* Void UpdateGame() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_UpdateGame
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
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
      func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 == (WorldNetwork *)0x0) {
code_?:
    func_?(0);
    pMVar2 = extraout_EDX;
  }
  else {
    pEVar3 = (pWVar1->fields)._.InitializedGameQueryData;
    pMVar4 = unaff_ESI;
    unaff_ESI = (MVGroup__Class *)
                func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )unaff_ESI,(Object *)this,
               MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
               ,
               MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
              );
    pEVar5 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar3,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
    pEVar3 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    if (pEVar5 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      if (pEVar5->klass == TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
        pEVar3 = pEVar5;
      }
      pEVar6 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      if (pEVar3 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
    }
    (pWVar1->fields)._.InitializedGameQueryData = pEVar3;
    if (e == (InitializedGameQueryDataEventArgs *)0x0) goto code_?;
    pMVar2 = (MVGroup *)(e->fields).RootWO;
    if (pMVar2 == (MVGroup *)0x0) {
code_?:
      unaff_ESI = pMVar4;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
        unaff_ESI = pMVar4;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_RootGroup_is_not_found_,(MethodInfo *)0x0);
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      if (TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit ==
          (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = (SoundLoader_UpdateSoundCallback *)
                TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit;
      if (this_00 != (SoundLoader_UpdateSoundCallback *)0x0) {
        SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                  (this_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar7) ||
       ((MVGroup__Class *)(pMVar2->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVGroup)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pMVar9 = (MVGroup *)0x0;
    if (bVar8) {
      pMVar9 = pMVar2;
    }
    if (pMVar9 == (MVGroup *)0x0) goto code_?;
    pWVar1 = (this->fields).worldNetwork;
    if (pWVar1 == (WorldNetwork *)0x0) {
      this_01 = (MVWorldObjectClientManager *)0x0;
    }
    else {
      this_01 = (MVWorldObjectClientManager *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pWVar1,(MethodInfo *)0x0)
      ;
      pMVar2 = (MVGroup *)(e->fields).RootWO;
    }
    unaff_ESI = TypeInfo__MVGroup;
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    if (pMVar2 == (MVGroup *)0x0) {
      unaff_ESI = (MVGroup__Class *)0x0;
      MVWorldObjectClientManager::MVWorldObjectClientManager_set_RootGroup
                (this_01,(MVGroup *)0x0,(MethodInfo *)0x0);
      goto code_?;
    }
    bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar7) ||
       ((MVGroup__Class *)(pMVar2->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVGroup)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pMVar9 = (MVGroup *)0x0;
    if (bVar8) {
      pMVar9 = pMVar2;
    }
    if (pMVar9 != (MVGroup *)0x0) {
      unaff_ESI = (MVGroup__Class *)0x0;
      MVWorldObjectClientManager::MVWorldObjectClientManager_set_RootGroup
                (this_01,pMVar9,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?(pMVar2,unaff_ESI);
  pEVar5 = extraout_ECX;
  pEVar6 = extraout_EDX_00;
code_?:
  func_?(pEVar5,pEVar6);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVNetworkGame(PhotonLoggingConfig, EmbeddedSiteConfigData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame__ctor
               (MVNetworkGame *this,PhotonLoggingConfig photonLoggingConfig,
               EmbeddedSiteConfigData embeddedSiteConfigData,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (MVItemBusinessLogic *)func_?(TypeInfo__MVItemBusinessLogic);
  MVItemBusinessLogic::MVItemBusinessLogic__ctor(this_01,(MethodInfo *)0x0);
  (this->fields).itemBusinessLogic = this_01;
  this_02 = (ScaleAnimationBase *)func_?(TypeInfo__MVNetworkGame__GameDataQueryManager);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>
  ;
  this_03 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Dictionary__
            );
  (this_02->fields)._._._._.m_CachedPtr = this_03;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  (this->fields).gameDataQueryManager = (MVNetworkGame_GameDataQueryManager *)this_02;
  this_04 = (TransformNetworkManager *)func_?(TypeInfo__TransformNetworkManager);
  TransformNetworkManager::TransformNetworkManager__ctor(this_04,(MethodInfo *)0x0);
  (this->fields).transformNetworkManager = this_04;
  this_05 = (GameEventManager *)func_?(TypeInfo__GameEventManager);
  GameEventManager::GameEventManager__ctor(this_05,(MethodInfo *)0x0);
  (this->fields).GameEventManager = this_05;
  this_06 = (Dictionary_2_MV_Common_Region_System_Single_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_06,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Dictionary__
            );
  if (this_06 != (Dictionary_2_MV_Common_Region_System_Single_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::Region,System::Single]::
    Dictionary_2_MV_Common_Region_System_Single__Add
              (this_06,Region__Enum_dev,2.0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::Region,System::Single]::
    Dictionary_2_MV_Common_Region_System_Single__Add
              (this_06,Region__Enum_test,2.0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::Region,System::Single]::
    Dictionary_2_MV_Common_Region_System_Single__Add
              (this_06,Region__Enum_friends,-5.5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::Region,System::Single]::
    Dictionary_2_MV_Common_Region_System_Single__Add
              (this_06,Region__Enum_brazil,-3.0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::Region,System::Single]::
    Dictionary_2_MV_Common_Region_System_Single__Add
              (this_06,Region__Enum_www,2.5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
              );
    (this->fields).timeZoneMap = this_06;
    (this->fields).lastFrameServerTimeUpdate = -1;
    (this->fields).lastFrameLocalTimeUpdate = -1;
    this_07 = (MVTeamManager *)func_?();
    MVTeamManager::MVTeamManager__ctor(this_07,(MethodInfo *)0x0);
    (this->fields).teamManager = this_07;
    this_08 = (GameStatCounterManager *)func_?();
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager__ctor
              (this_08,(MethodInfo *)0x0);
    (this->fields).gameStatCounterManager = this_08;
    this_09 = (LevelRewardsManager *)func_?();
    LevelRewardsManager::LevelRewardsManager__ctor(this_09,(MethodInfo *)0x0);
    (this->fields).levelRewardsManager = this_09;
    this_10 = (MVPlayerContainer *)func_?();
    MVPlayerContainer::MVPlayerContainer__ctor(this_10,(MethodInfo *)0x0);
    (this->fields).playerContainer = this_10;
    this_11 = (RuntimeVariableNetworkManager *)func_?();
    RuntimeVariableNetworkManager::RuntimeVariableNetworkManager__ctor(this_11,(MethodInfo *)0x0);
    (this->fields).runtimeVariableNetworkManager = this_11;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_retaddr);
    (this->fields).photonLoggingConfig = photonLoggingConfig;
    (this->fields).embeddedSiteConfigData.sites = (List_1_System_String_ *)&UNK_?;
    (this->fields).embeddedSiteConfigData.siteEnum = (int32_t)this_06;
    (this->fields).embeddedSiteConfigData.showTouristPromotion = 0;
    (this->fields).embeddedSiteConfigData.allowsOpenInNewTab = 0;
    (this->fields).embeddedSiteConfigData.allowsRedirectToWebpage = 0;
    (this->fields).embeddedSiteConfigData.allowsModals = 0;
    (this->fields).embeddedSiteConfigData.integratedSdk = 0;
    (this->fields).embeddedSiteConfigData.allowsFallbackAds = 0;
    (this->fields).embeddedSiteConfigData.showPlayButtonAd = 0;
    (this->fields).embeddedSiteConfigData.field_0xf = 0x40;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVGameControllerBase::MVGameControllerBase_set_JoinState
              (MVJoinState__Enum_Joining,(MethodInfo *)0x0);
    this_12 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (this_12 != (GameSessionData *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)this_12,(MethodInfo *)0x0);
      this = (MVNetworkGame *)CONCAT31(this._1_3_,bVar1);
      pPVar2 = (PhotonPeer *)func_?();
      Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::PhotonPeer__ctor_1
                (pPVar2,(IPhotonPeerListener *)this_00,(ConnectionProtocol__Enum)this,
                 (MethodInfo *)0x0);
      (this_00->fields)._Peer_k__BackingField = pPVar2;
      if (pPVar2 != (PhotonPeer *)0x0) {
        (pPVar2->fields).DisconnectTimeout = 20000;
        pPVar2 = (this_00->fields)._Peer_k__BackingField;
        if (pPVar2 != (PhotonPeer *)0x0) {
          (pPVar2->fields).SentCountAllowance = 8;
          pPVar2 = (this_00->fields)._Peer_k__BackingField;
          if (pPVar2 != (PhotonPeer *)0x0) {
            (pPVar2->fields).DebugOut = 0xce;
            MVNetworkGame_CreatePrivateClasses(this_00,(MethodInfo *)0x0);
            this_13 = (MVNetworkGameStateListener *)func_?();
            WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
            WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                      ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this_13,
                       (MethodInfo *)0x0);
            (this_00->fields)._NetworkGameStateListener_k__BackingField = this_13;
            this_14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_14,(Object *)this_00,
                       MethodInfo__MVNetworkGame__networkGameStateListener_OnGameStateChanged_System__Object__GameStateChangeEventArgs_
                       ,
                       MethodInfo__System__EventHandler<GameStateChangeEventArgs>__EventHandler_System__Object__void__
                      );
            if (this_13 != (MVNetworkGameStateListener *)0x0) {
              MVNetworkGameStateListener::MVNetworkGameStateListener_add_OnGameStateChanged
                        (this_13,(EventHandler_1_GameStateChangeEventArgs_ *)this_14,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void add_ReceivedAccessoryData(Action`1[String]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedAccessoryData
               (MVNetworkGame *this,Action_1_String_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).ReceivedAccessoryData;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_String___Class *)pDVar2->klass == TypeInfo__System__Action<System::String>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<System::String>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_String_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_ReceivedAvatarBodiesFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedAvatarBodiesFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ReceivedAvatarBodiesFromQuery;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_ReceivedItemFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).ReceivedItemFromQuery;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
             func_?(&this->fields,pDVar2,a);
    bVar5 = pEVar4 == a;
    a = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_ScreenshotUploaded(EventHandler`1[ScreenshotUploadedEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
               (MVNetworkGame *this,EventHandler_1_ScreenshotUploadedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ScreenshotUploaded;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ScreenshotUploadedEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ScreenshotUploadedEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Boolean get_IsPlaying() */

bool Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_IsPlaying
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
    func_?(0);
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVLocalPlayer *)(*pcVar1)();
    return pMVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar2 = (MVLocalPlayer *)
           MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                     (this_00,(this_00->fields).localPlayerActorNumber,(MethodInfo *)0x0);
  if (pMVar2 == (MVLocalPlayer *)0x0) {
    return (MVLocalPlayer *)0x0;
  }
  bVar3 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
  if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
     ((pMVar2->klass->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pMVar5 = (MVLocalPlayer *)0x0;
  if (bVar4) {
    pMVar5 = pMVar2;
  }
  if (pMVar5 != (MVLocalPlayer *)0x0) {
    return pMVar5;
  }
  func_?(pMVar2);
  pcVar1 = (code *)swi(3);
  pMVar2 = (MVLocalPlayer *)(*pcVar1)();
  return pMVar2;
}


/* Int32 get_LocalTimeInMilliSeconds() */

int32_t Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_LocalTimeInMilliSeconds
                  (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).lastFrameLocalTimeUpdate;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (iVar1 != iVar2) {
    if ((((uint)(TypeInfo__ExitGames__Client__Photon__SupportClass->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__ExitGames__Client__Photon__SupportClass->_1).cctor_started == 0)) {
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
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Single get_TimeZone() */

float Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_TimeZone
                (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).timeZoneMap;
  this = (MVNetworkGame *)CONCAT31(this._1_3_,(this->fields)._Region_k__BackingField);
  if (this_00 != (Dictionary_2_MV_Common_Region_System_Single_ *)0x0) {
    fVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::Region,System::
            Single]::Dictionary_2_MV_Common_Region_System_Single__get_Item
                      (this_00,(Region__Enum)this,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__get_Item_MV__Common__Region_
                      );
    return fVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* MVWorldObjectClientManager get_WorldObjectClientManager() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
          (MVNetworkGame *this,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    return (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager;
  }
  return (MVWorldObjectClientManager *)0x0;
}


/* Void networkGameStateListener_OnGameStateChanged(Object, GameStateChangeEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_networkGameStateListener_OnGameStateChanged
               (MVNetworkGame *this,Object *sender,GameStateChangeEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._NetworkGameStateListener_k__BackingField;
  if (pMVar1 == (MVNetworkGameStateListener *)0x0) goto code_?;
  pOVar2 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)pMVar1,(MethodInfo *)0x0);
  if (pOVar2 == (Object *)0x2) {
    this_00 = (this->fields).playerContainer;
    if ((this_00 == (MVPlayerContainer *)0x0) ||
       (this_08 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       this_08 == (MVLocalPlayer *)0x0)) goto code_?;
    MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)this_08,(MethodInfo *)0x0);
  }
  else if (pOVar2 == (Object *)0x1) {
    this_01 = (this->fields).logicObjectManagerClientWrapper;
    if (this_01 == (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)(this_01->fields).updateEvaluatorStep;
    if (this_02 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) goto code_?;
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_02,(MethodInfo *)0x0);
    MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
              ((MVNetworkGame_UpdateEvaluator *)this_02,(int32_t)(pOVar2 + 0x7d),(MethodInfo *)0x0);
    MVNetworkGame+LogicObjectManagerClientWrapper::
    MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames(this_01,(MethodInfo *)0x0);
    pMVar3 = (this_01->fields).logicEventQueue;
    if (pMVar3 == (MVNetworkGame_LogicEventQueue *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_03 = (pMVar3->fields).logicEvents;
    if (this_03 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
    goto code_?;
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_03,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_logic_event_queue_not_cleared_on,(MethodInfo *)0x0);
    }
    pMVar4 = (this_01->fields).networkGame;
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (this_04 = (Notification *)(pMVar4->fields)._LogicObjectManager_k__BackingField,
       this_04 == (Notification *)0x0)) goto code_?;
    Notification::Notification_Initialize
              (this_04,(Dictionary_2_System_Object_System_Object_ *)0x0,unaff_EBX);
    pMVar5 = (this_01->fields).updateEvaluatorStep;
    if (pMVar5 == (MVNetworkGame_UpdateEvaluator *)0x0) goto code_?;
    MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
              (pMVar5,0,(MethodInfo *)0x0);
    pMVar5 = (this_01->fields).fastFordwardUpdateEvaluator;
    if (pMVar5 == (MVNetworkGame_UpdateEvaluator *)0x0) goto code_?;
    MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_set_StepTimestamp
              (pMVar5,0,(MethodInfo *)0x0);
    this_05 = (this->fields).worldNetwork;
    if ((this_05 == (WorldNetwork *)0x0) ||
       (this_09 = (MVWorldObjectClientManagerNetwork *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)this_05,(MethodInfo *)0x0),
       this_09 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
    MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_ResetWorld
              (this_09,(MethodInfo *)0x0);
    this_06 = (this->fields)._WinningConditionManager_k__BackingField;
    if (this_06 == (WinningConditionManager *)0x0) goto code_?;
    MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
              (this_06,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar6 != (GameEventManager *)0x0) {
    this_07 = (pGVar6->fields).GameState;
    pMVar1 = (this->fields)._NetworkGameStateListener_k__BackingField;
    if ((pMVar1 != (MVNetworkGameStateListener *)0x0) &&
       (pOVar2 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pMVar1,(MethodInfo *)0x0),
       this_07 != (GameEventManager_GameStateManager *)0x0)) {
      GameEventManager+GameStateManager::GameEventManager_GameStateManager_NotifyGameStateType
                (this_07,(MVGameStateType__Enum)pOVar2,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void remove_ReceivedAccessoryData(Action`1[String]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedAccessoryData
               (MVNetworkGame *this,Action_1_String_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).ReceivedAccessoryData;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_String___Class *)pDVar2->klass == TypeInfo__System__Action<System::String>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<System::String>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_String_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_ReceivedAvatarBodiesFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ReceivedAvatarBodiesFromQuery;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
             func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_ReceivedItemFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).ReceivedItemFromQuery;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler_1_ReceivedItemFromQueryEventArgs___Class *)pDVar1->klass ==
          TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
             func_?(&this->fields,pDVar2,source);
    bVar5 = pEVar4 == source;
    source = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_ScreenshotUploaded(EventHandler`1[ScreenshotUploadedEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
               (MVNetworkGame *this,EventHandler_1_ScreenshotUploadedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ScreenshotUploaded;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ScreenshotUploadedEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ScreenshotUploadedEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_AvatarShopRepository(AvatarRepository) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_AvatarShopRepository
               (MVNetworkGame *this,AvatarRepository *value,MethodInfo *method)

{
  (this->fields)._AvatarShopRepository_k__BackingField = value;
  return;
}


/* Void set_CustomTouristPromotionSettings(CustomTouristPromotionSettings) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_CustomTouristPromotionSettings
               (MVNetworkGame *this,CustomTouristPromotionSettings *value,MethodInfo *method)

{
  (this->fields)._CustomTouristPromotionSettings_k__BackingField = value;
  return;
}


/* Void set_EliteSettings(ElitePromotionSettings) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_EliteSettings
               (MVNetworkGame *this,ElitePromotionSettings *value,MethodInfo *method)

{
  (this->fields)._EliteSettings_k__BackingField = value;
  return;
}


/* Void set_GameCoinManager(MVGameCoinManager) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_GameCoinManager
               (MVNetworkGame *this,MVGameCoinManager *value,MethodInfo *method)

{
  (this->fields)._GameCoinManager_k__BackingField = value;
  return;
}


/* Void set_GameStateController(MVGameModeChangeNotifier) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_GameStateController
               (MVNetworkGame *this,MVGameModeChangeNotifier *value,MethodInfo *method)

{
  (this->fields)._GameStateController_k__BackingField = value;
  return;
}


/* Void set_KogamaMainpageURL(String) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_KogamaMainpageURL
               (MVNetworkGame *this,String *value,MethodInfo *method)

{
  (this->fields)._KogamaMainpageURL_k__BackingField = value;
  return;
}


/* Void set_Peer(PhotonPeer) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_Peer
               (MVNetworkGame *this,PhotonPeer *value,MethodInfo *method)

{
  (this->fields)._Peer_k__BackingField = value;
  return;
}


/* Void set_PlayerController(MVLocalObjectController) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_PlayerController
               (MVNetworkGame *this,MVLocalObjectController *value,MethodInfo *method)

{
  (this->fields)._PlayerController_k__BackingField = value;
  return;
}


/* Void set_PlayerRepository(PlayerRepository) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_PlayerRepository
               (MVNetworkGame *this,PlayerRepository *value,MethodInfo *method)

{
  (this->fields)._PlayerRepository_k__BackingField = value;
  return;
}


/* Void set_Region(Region) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_Region
               (MVNetworkGame *this,Region__Enum value,MethodInfo *method)

{
  (this->fields)._Region_k__BackingField = (undefined1)value;
  return;
}


/* Void set_ShopRepository(ShopRepository) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_ShopRepository
               (MVNetworkGame *this,ShopRepository *value,MethodInfo *method)

{
  (this->fields)._ShopRepository_k__BackingField = value;
  return;
}


/* Void set_WinningConditionManager(WinningConditionManager) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_set_WinningConditionManager
               (MVNetworkGame *this,WinningConditionManager *value,MethodInfo *method)

{
  (this->fields)._WinningConditionManager_k__BackingField = value;
  return;
}

