
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_GameOnReceivedAvatarBodiesFromQu,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0
                );
      this_02 = (List_1_SpawnRoleAvatarSelectionData_ *)func_?();
      if (this_02 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__List__
                  );
        (this->fields).avatarSelectionDataList = this_02;
        func_?();
        if (e != (ReceivedItemFromQueryEventArgs *)0x0) {
          while( true ) {
            pBVar4 = (e->fields).KoGaMaData;
            if (pBVar4 == (BytePacker *)0x0) break;
            iVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_get_Length
                              (pBVar4,(MethodInfo *)0x0);
            pBVar4 = (e->fields).KoGaMaData;
            if (pBVar4 == (BytePacker *)0x0) break;
            if (iVar5 == (pBVar4->fields)._position) {
              if ((this->fields).onDataRecieved !=
                  (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)
                  0x0) {
                (*(((this->fields).onDataRecieved)->fields)._._.invoke_impl)();
              }
              (this->fields).onDataRecieved =
                   (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)
                   0x0;
              func_?();
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_03 = (KoGaMaPackageClient *)func_?();
            if (this_03 == (KoGaMaPackageClient *)0x0) break;
            KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_03,pBVar4,1,(MethodInfo *)0x0);
            uStack_1 = 0;
            KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_03,(MethodInfo *)0x0);
            pDVar6 = (this_03->fields).worldObjects;
            if (pDVar6 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) break;
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,
                                (this_03->fields).worldObjectRoot,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                               );
            if ((pOVar7 == (Object *)0x0) || (pOVar7[0x11].klass == (Object__Class *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)pOVar7[0x11].klass,0,(MethodInfo *)0x0);
            uStack_1 = 0xffffffff;
            pDVar6 = (this_03->fields).worldObjects;
            if (pDVar6 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) break;
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,
                                (this_03->fields).worldObjectRoot,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                               );
            if (pOVar7 == (Object *)0x0) break;
            hashtable = (Dictionary_2_System_Object_System_Object_ *)func_?();
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pOVar7 = Extensions::Extensions_GetObscuredType
                               (hashtable,StringLiteral_DBId,(MethodInfo *)0x0);
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            if (pOVar7 == (Object *)0x0) break;
            if ((pOVar7->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
              func_?();
              break;
            }
            pOVar8 = (ObscuredInt *)func_?();
            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(*pOVar8,(MethodInfo *)0x0);
            func_?();
            func_?();
            if ((this->fields).avatarSelectionDataList ==
                (List_1_SpawnRoleAvatarSelectionData_ *)0x0) break;
            func_?();
          }
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
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    if ((this_02 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   ,(MethodInfo *)0x0), this_01 == (MVNetworkGame *)0x0)) goto code_?;
    MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
              (this_01,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0);
  }
  if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    return;
  }
  pLVar2 = (this->fields).avatarSelectionDataList;
  index = 0;
  do {
    if ((pLVar2->fields)._size <= index) {
      return;
    }
    pLVar2 = (this->fields).avatarSelectionDataList;
    if (pLVar2 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) break;
    pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                       ((UnitySynchronizationContext_WorkRequest *)&pSStack_4,
                        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar2,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                       );
    this_00 = pUVar3->m_DelagateState;
    if ((KoGaMaPackageClient *)this_00 == (KoGaMaPackageClient *)0x0) break;
    KoGaMaPackageClient::KoGaMaPackageClient_Destroy
              ((KoGaMaPackageClient *)this_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).avatarSelectionDataList;
    index = index + 1;
  } while (pLVar2 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_add_ReceivedAvatarBodiesFromQuery
                  (pMVar1,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,
                   (MethodInfo *)0x0);
        pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)(this->fields).onDataRecieved,(Delegate *)onDataReady,
                            (MethodInfo *)0x0);
        if (pDVar2 == (Delegate *)0x0) {
          (this->fields).onDataRecieved =
               (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0;
        }
        else {
          pUVar3 = (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)
                   func_?();
          if (pUVar3 == (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_
                         *)0x0) goto code_?;
          (this->fields).onDataRecieved = pUVar3;
          iVar4 = func_?();
          if (iVar4 == 0) goto code_?;
        }
        func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar1->fields).operationRequests,
           this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetAvatarBodies
                    (this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if (onDataReady !=
           (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    (*(onDataReady->fields)._._.invoke_impl)
              ((onDataReady->fields)._._.method_code,(this->fields).avatarSelectionDataList,
               (onDataReady->fields)._._.method);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

