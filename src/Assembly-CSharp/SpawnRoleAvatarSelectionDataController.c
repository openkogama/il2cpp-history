
/* Void GameOnReceivedAvatarBodiesFromQuery(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionDataController::
     SpawnRoleAvatarSelectionDataController_GameOnReceivedAvatarBodiesFromQuery
               (SpawnRoleAvatarSelectionDataController *this,Object *sender,
               ReceivedItemFromQueryEventArgs *e,MethodInfo *method)

{
  method_02 = (MethodInfo *)&DAT_?;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_GameOnReceivedAvatarBodiesFromQu,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  method_00 = (MethodInfo *)this;
  method_01 = 
  MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_05,(Object *)this,
             MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,
             MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
            );
  if (this_04 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
              (this_04,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_05,(MethodInfo *)0x0);
    this_06 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_06,
               MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__List__)
    ;
    (this->fields).avatarSelectionDataList = (List_1_SpawnRoleAvatarSelectionData_ *)this_06;
    while ((e != (ReceivedItemFromQueryEventArgs *)0x0 &&
           (pBVar1 = (e->fields).KoGaMaData, pBVar1 != (BytePacker *)0x0))) {
      pOVar2 = (Object *)
               MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                         (pBVar1,method_02);
      this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)(e->fields).KoGaMaData;
      if (this_00 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) break;
      method_02 = (MethodInfo *)&UNK_?;
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (this_00,unaff_EBP);
      pKVar4 = TypeInfo__KoGaMaPackageClient;
      if (pOVar2 == pOVar3) {
        this_03 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  (this->fields).onDataRecieved;
        if (this_03 !=
            (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
          String,System::Object]]::
          Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                    (this_03,(Dictionary_2_System_String_System_Object_ *)
                             (this->fields).avatarSelectionDataList,
                     MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>__Invoke_System__Collections__Generic__List<SpawnRoleAvatarSelectionData>_
                    );
        }
        (this->fields).onDataRecieved =
             (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0;
        *unaff_FS_OFFSET = pBVar1;
        return;
      }
      this = (SpawnRoleAvatarSelectionDataController *)TypeInfo__KoGaMaPackageClient;
      pBVar1 = (e->fields).KoGaMaData;
      this_07 = (KoGaMaPackageClient *)func_?();
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_07,pBVar1,1,(MethodInfo *)0x0);
      if (this_07 == (KoGaMaPackageClient *)0x0) break;
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize
                (this_07,(MethodInfo *)in_stack_5);
      in_stack_5 =
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this_07->fields).worldObjects;
      if (((in_stack_5 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) ||
          (this_08 = (DayNightCycle *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (in_stack_5,(this_07->fields).worldObjectRoot,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                               ), this_08 == (DayNightCycle *)0x0)) ||
         (this_09 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_08,method_00),
         this_09 == (CelestialParam *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)this_09,0,method_01);
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this_07->fields).worldObjects;
      if ((this_01 ==
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) ||
         (pTVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_01,(this_07->fields).worldObjectRoot,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             ), pTVar6 == (TerrainUtility_TerrainMap *)0x0)) break;
      hashtable = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Extensions->_1).cctor_started == 0)) {
        func_?();
      }
      Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_DBId,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
        func_?();
      }
      pOVar7 = (ObscuredInt *)func_?();
      method_00 = (MethodInfo *)pOVar7->hiddenValue;
      method_01 = *(MethodInfo **)&pOVar7->inited;
      pMVar8 = (ManualResetEvent *)
               Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_op_Implicit_1(*pOVar7,(MethodInfo *)0x0);
      this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                (pKVar4->_0).namespaze;
      if (this_02 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) break;
      item.m_DelagateState = (Object *)this_07;
      item.m_DelagateCallback = (SendOrPostCallback *)this_08;
      item.m_WaitHandle = pMVar8;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                (this_02,item,
                 MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__Add_SpawnRoleAvatarSelectionData_
                );
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionDataController::
     SpawnRoleAvatarSelectionDataController_OnDestroy
               (SpawnRoleAvatarSelectionDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,
               MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
              );
    if (this_01 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
              (this_01,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0);
  }
  pLVar2 = (this->fields).avatarSelectionDataList;
  if (pLVar2 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    return;
  }
  index = 0;
  do {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      return;
    }
    pLVar2 = (this->fields).avatarSelectionDataList;
    if (pLVar2 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) break;
    pSVar4 = mscorlib.dll::System::Collections::Generic::List`1[SpawnRoleAvatarSelectionData]::
             List_1_SpawnRoleAvatarSelectionData__get_Item
                       ((SpawnRoleAvatarSelectionData *)&pMStack_5,pLVar2,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                       );
    this_00 = pSVar4->koGaMaPackageClientInventoryItem;
    if ((KoGaMaPackageClient *)this_00 == (KoGaMaPackageClient *)0x0) break;
    KoGaMaPackageClient::KoGaMaPackageClient_Destroy
              ((KoGaMaPackageClient *)this_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).avatarSelectionDataList;
    index = index + 1;
  } while (pLVar2 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void 
   TryGetSpawnRoleAvatarSelectionData(UnityAction`1[System.Collections.Generic.List`1[SpawnRoleAvatarSelectionData]])
    */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionDataController::
     SpawnRoleAvatarSelectionDataController_TryGetSpawnRoleAvatarSelectionData
               (SpawnRoleAvatarSelectionDataController *this,
               UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_
               *onDataReady,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (Dictionary_2_System_String_System_Object_ *)(this->fields).avatarSelectionDataList;
  if (obj == (Dictionary_2_System_String_System_Object_ *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,
               MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
              );
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ReceivedAvatarBodiesFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0
                );
      pUVar1 = (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this->fields).onDataRecieved,(Delegate *)onDataReady,
                          (MethodInfo *)0x0);
      pUVar2 = (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0;
      if (pUVar1 != (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *
                    )0x0) {
        if (pUVar1->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
           ) {
          pUVar2 = pUVar1;
        }
        pUVar3 = 
        TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
        ;
        if (pUVar2 == (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_
                       *)0x0) goto code_?;
      }
      (this->fields).onDataRecieved = pUVar2;
      this_02 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 != (MVJetPack *)0x0) {
        this_03 = MVJetPack::MVJetPack_get_Shield(this_02,(MethodInfo *)0x0);
        if (this_03 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetAvatarBodies
                    ((MVNetworkGame_OperationRequests *)this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if (onDataReady !=
           (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               onDataReady,obj,
               MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>__Invoke_System__Collections__Generic__List<SpawnRoleAvatarSelectionData>_
              );
    return;
  }
  func_?(0);
  pUVar1 = extraout_ECX;
  pUVar3 = extraout_EDX;
code_?:
  func_?(pUVar1,pUVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

