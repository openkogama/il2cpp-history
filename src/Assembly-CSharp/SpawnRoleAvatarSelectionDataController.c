
/* Void GameOnReceivedAvatarBodiesFromQuery(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionDataController::
     SpawnRoleAvatarSelectionDataController_GameOnReceivedAvatarBodiesFromQuery
               (SpawnRoleAvatarSelectionDataController *this,Object *sender,
               ReceivedItemFromQueryEventArgs *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__KoGaMaPackageClient);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__Add_SpawnRoleAvatarSelectionData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&
                    MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&StringLiteral_GameOnReceivedAvatarBodiesFromQu);
    func_?(&StringLiteral_DBId);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_GameOnReceivedAvatarBodiesFromQu,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
              (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0);
    this_02 = (List_1_SpawnRoleAvatarSelectionData_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__List__)
    ;
    (this->fields).avatarSelectionDataList = this_02;
    func_?();
    while( true ) {
      if ((e == (ReceivedItemFromQueryEventArgs *)0x0) ||
         (pBVar4 = (e->fields).KoGaMaData, pBVar4 == (BytePacker *)0x0)) goto code_?;
      iVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                        (pBVar4,(MethodInfo *)0x0);
      pBVar4 = (e->fields).KoGaMaData;
      if (pBVar4 == (BytePacker *)0x0) goto code_?;
      if (iVar5 == (pBVar4->fields)._position) {
        pUVar6 = (this->fields).onDataRecieved;
        if (pUVar6 != (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_
                       *)0x0) {
          (*(pUVar6->fields)._._.invoke_impl)();
        }
        (this->fields).onDataRecieved =
             (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_03 = (KoGaMaPackageClient *)func_?();
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_03,pBVar4,1,(MethodInfo *)0x0);
      uStack_1 = 0;
      if (this_03 == (KoGaMaPackageClient *)0x0) goto code_?;
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_03,(MethodInfo *)0x0);
      pDVar7 = (this_03->fields).worldObjects;
      if (pDVar7 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                          (this_03->fields).worldObjectRoot,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if ((pOVar8 == (Object *)0x0) || (pOVar8[0x11].klass == (Object__Class *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pOVar8[0x11].klass,0,(MethodInfo *)0x0);
      uStack_1 = 0xffffffff;
      pDVar7 = (this_03->fields).worldObjects;
      if (pDVar7 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                          (this_03->fields).worldObjectRoot,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar8 == (Object *)0x0) goto code_?;
      hashtable = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar8 = Extensions::Extensions_GetObscuredType
                         (hashtable,StringLiteral_DBId,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pOVar8 == (Object *)0x0) goto code_?;
      if ((pOVar8->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) break;
      pOVar9 = (ObscuredInt *)func_?();
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
      ObscuredInt_op_Implicit_1(*pOVar9,(MethodInfo *)0x0);
      func_?();
      func_?();
      if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0)
      goto code_?;
      func_?();
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionDataController::
     SpawnRoleAvatarSelectionDataController_OnDestroy
               (SpawnRoleAvatarSelectionDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_02 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
              (this_01,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0);
  }
  this_03 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            (this->fields).avatarSelectionDataList;
  if (this_03 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    return;
  }
  index = 0;
  do {
    if ((this_03->fields)._size <= index) {
      return;
    }
    if (this_03 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&pSStack_3,this_03,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                       );
    this_00 = pVVar2->path;
    if ((KoGaMaPackageClient *)this_00 == (KoGaMaPackageClient *)0x0) break;
    KoGaMaPackageClient::KoGaMaPackageClient_Destroy
              ((KoGaMaPackageClient *)this_00,(MethodInfo *)0x0);
    this_03 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
              (this->fields).avatarSelectionDataList;
    index = index + 1;
  } while (this_03 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&
                    MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).avatarSelectionDataList;
  if (pLVar1 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_01 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ReceivedAvatarBodiesFromQuery
                (pMVar2,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0)
      ;
      ppUVar3 = &(this->fields).onDataRecieved;
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)*ppUVar3,(Delegate *)onDataReady,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        *ppUVar3 = (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)
                   0x0;
      }
      else {
        pUVar5 = (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)
                 func_?();
        if (pUVar5 == (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_
                       *)0x0) goto code_?;
        *ppUVar3 = pUVar5;
        iVar6 = func_?();
        if (iVar6 == 0) goto code_?;
      }
      func_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar2->fields).operationRequests,
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetAvatarBodies
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (onDataReady !=
           (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    (*(onDataReady->fields)._._.invoke_impl)
              ((onDataReady->fields)._._.method_code,pLVar1,(onDataReady->fields)._._.method);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

