
/* Void GameOnReceivedAvatarBodiesFromQuery(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionDataController::
     SpawnRoleAvatarSelectionDataController_GameOnReceivedAvatarBodiesFromQuery
               (SpawnRoleAvatarSelectionDataController *this,Object *sender,
               ReceivedItemFromQueryEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__Add_SpawnRoleAvatarSelectionData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameOnReceivedAvatarBodiesFromQu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DBId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = (Object *)0x0;
  uStack_2 = (Object__Class *)0x0;
  uStack_3 = 0;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_GameOnReceivedAvatarBodiesFromQu,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar4 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar4->fields).game;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0
                );
      pLVar5 = (List_1_SpawnRoleAvatarSelectionData_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>
                             );
      FUN_?(pLVar5,
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__List__
                   );
      (this->fields).avatarSelectionDataList = pLVar5;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).avatarSelectionDataList >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      if (e != (ReceivedItemFromQueryEventArgs *)0x0) {
        while (pBVar11 = (e->fields).KoGaMaData, pBVar11 != (BytePacker *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar12 = (pBVar11->fields)._buffer;
          if (pLVar12 == (List_1_System_Byte_ *)0x0) break;
          pBVar11 = (e->fields).KoGaMaData;
          if (pBVar11 == (BytePacker *)0x0) break;
          if ((pLVar12->fields)._size == (pBVar11->fields)._position) {
            if ((this->fields).onDataRecieved !=
                (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0
               ) {
              pUVar13 = (this->fields).onDataRecieved;
              (*(pUVar13->fields)._._.invoke_impl)
                        ((pUVar13->fields)._._.method_code,(this->fields).avatarSelectionDataList,
                         (pUVar13->fields)._._.method);
            }
            (this->fields).onDataRecieved =
                 (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)
                 0x0;
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)&(this->fields).onDataRecieved >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            return;
          }
          this_02 = (Object__Class *)FUN_?(TypeInfo__KoGaMaPackageClient);
          pOStack_14 = this_02;
          KoGaMaPackageClient::KoGaMaPackageClient__ctor
                    ((KoGaMaPackageClient *)this_02,pBVar11,1,(MethodInfo *)0x0);
          if (this_02 == (Object__Class *)0x0) goto code_?;
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize
                    ((KoGaMaPackageClient *)this_02,(MethodInfo *)0x0);
          pDVar15 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)(this_02->_0).namespaze;
          if (pDVar15 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
            FUN_?();
code_?:
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,
                               (this_02->_0).this_arg.data.__klassIndex,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                              );
          if (pOVar17 == (Object *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          if ((GameObject *)pOVar17[0xc].monitor == (GameObject *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)pOVar17[0xc].monitor,0,(MethodInfo *)0x0);
          pDVar15 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)(this_02->_0).namespaze;
          if ((pDVar15 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) ||
             (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,
                                   (this_02->_0).this_arg.data.__klassIndex,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                  ), pOVar18 == (Object *)0x0)) break;
          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                      (*(code *)pOVar18->klass[1]._0.fields)(pOVar18,pOVar18->klass[1]._0.events);
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar18 = Extensions::Extensions_GetObscuredType
                              (hashtable,StringLiteral_DBId,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          if (pOVar18 == (Object *)0x0) break;
          if ((pOVar18->klass->_0).element_class !=
              (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
            FUN_?(pOVar18);
            goto code_?;
          }
          pOStack_14 = pOVar18[1].klass;
          iStack_19 = *(int32_t *)&pOVar18[1].monitor;
          uStack_20 = *(undefined4 *)((longlong)&pOVar18[1].monitor + 4);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          uVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_InternalDecrypt((ObscuredInt *)&pOStack_14,(MethodInfo *)0x0);
          if (iRam_? != 0) {
            uVar21 = (uint)((ulonglong)&uStack_1 >> 0xc);
            lVar7 = (ulonglong)((uVar21 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar21 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          uStack_3 = (ulonglong)uVar6;
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)&uStack_2 >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pLVar5 = (this->fields).avatarSelectionDataList;
          uStack_1 = pOVar17;
          uStack_2 = this_02;
          if (pLVar5 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) break;
          uStack_1._0_4_ = SUB84(pOVar17,0);
          uStack_1._4_4_ = (undefined4)((ulonglong)pOVar17 >> 0x20);
          uStack_2._0_4_ = SUB84(this_02,0);
          uStack_2._4_4_ = (undefined4)((ulonglong)this_02 >> 0x20);
          uStack_22 = (undefined4)uStack_1;
          uStack_23 = uStack_1._4_4_;
          uStack_24 = (undefined4)uStack_2;
          uStack_25 = uStack_2._4_4_;
          uStack_26 = uStack_3;
          FUN_?(pLVar5,&uStack_22,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__Add_SpawnRoleAvatarSelectionData_
                       );
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionDataController::
     SpawnRoleAvatarSelectionDataController_OnDestroy
               (SpawnRoleAvatarSelectionDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) goto code_?;
    this_00 = (pMVar2->fields).game;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
              (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0);
  }
  if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    return;
  }
  pLVar3 = (this->fields).avatarSelectionDataList;
  uVar4 = 0;
  lVar5 = 0;
  do {
    if ((pLVar3->fields)._size <= (int)uVar4) {
      return;
    }
    pLVar3 = (this->fields).avatarSelectionDataList;
    if (pLVar3 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) break;
    if ((uint)(pLVar3->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pSVar7 = (pLVar3->fields)._items;
    if (pSVar7 == (SpawnRoleAvatarSelectionData__Array *)0x0) break;
    if ((uint)pSVar7->max_length <= uVar4) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar8 = *(longlong *)((longlong)&pSVar7->vector[0].koGaMaPackageClientInventoryItem + lVar5);
    if (lVar8 == 0) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MVWorldObjectClient);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(Dictionary_2_System_Int32_System_Object_ **)(lVar8 + 0x18) ==
        (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
    wo = (MVWorldObjectClient *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
         Dictionary_2_System_Int32_System_Object__get_Item
                   (*(Dictionary_2_System_Int32_System_Object_ **)(lVar8 + 0x18),
                    *(int32_t *)(lVar8 + 0x30),
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
      FUN_?();
    }
    MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(wo,(MethodInfo *)0x0);
    pLVar3 = (this->fields).avatarSelectionDataList;
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x18;
  } while (pLVar3 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0);
code_?:
  FUN_?();
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
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      pMVar2 = (pMVar1->fields).game;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__SpawnRoleAvatarSelectionDataController__GameOnReceivedAvatarBodiesFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppEVar3 = &(pMVar2->fields).ReceivedAvatarBodiesFromQuery;
        a = (pMVar2->fields).ReceivedAvatarBodiesFromQuery;
        do {
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
          pEVar5 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
          if (pDVar4 == (Delegate *)0x0) {
            pEVar6 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
          }
          else {
            pEVar6 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
                      FUN_?(pDVar4,
                                    TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
            if (pEVar6 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
              FUN_?(pDVar4,pEVar5);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          LOCK();
          pEVar8 = *ppEVar3;
          bVar9 = a == pEVar8;
          if (bVar9) {
            *ppEVar3 = pEVar6;
            pEVar8 = a;
          }
          UNLOCK();
          pEVar6 = a;
          if (!bVar9) {
            pEVar6 = pEVar8;
          }
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)ppEVar3 >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar9 = uVar12 == *puVar13;
              if (bVar9) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          bVar9 = pEVar6 != a;
          a = pEVar6;
        } while (bVar9);
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)(this->fields).onDataRecieved,(Delegate *)onDataReady,
                             (MethodInfo *)0x0);
        pUVar14 = 
        TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
        ;
        if (pDVar4 == (Delegate *)0x0) {
          (this->fields).onDataRecieved =
               (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0;
        }
        else {
          pUVar15 = (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *
                    )FUN_?(pDVar4,
                                   TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                                  );
          if (pUVar15 ==
              (UnityAction_1_System_Collections_Generic_List_1_SpawnRoleAvatarSelectionData_ *)0x0)
          {
            FUN_?(pDVar4,pUVar14);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (this->fields).onDataRecieved = pUVar15;
          pUVar14 = 
          TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
          ;
          lVar11 = FUN_?(pDVar4,
                                 TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                                );
          if (lVar11 == 0) {
            FUN_?(pDVar4,pUVar14);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&(this->fields).onDataRecieved >> 0xc);
          lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar13 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           (pMVar16 = (pMVar2->fields).operationRequests,
           pMVar16 != (MVNetworkGame_OperationRequests *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar17 = (pMVar16->fields).peer;
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          pMVar18 = 
          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar17 != (PhotonPeer *)0x0) {
            (*(pPVar17->klass->vtable).SendOperation.methodPtr)
                      (pPVar17,CONCAT71((int7)((ulonglong)pMVar18 >> 8),0x72),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar17->klass->vtable).SendOperation.method);
            return;
          }
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

