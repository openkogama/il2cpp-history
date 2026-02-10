
/* Void AddCloneToWorldObjects(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects
               (MVNetworkGame *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 == (WorldNetwork *)0x0) ||
     (pMVar2 = (pWVar1->fields)._.worldObjectClientManager,
     pMVar2 == (MVWorldObjectClientManagerNetwork *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,wo,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectCreatedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Key_already_in_WorldObjects_dict);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_8 = (Object *)0x0;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar2->fields)._.worldObjects,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar4) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
      return;
    }
    this_01 = (pMVar2->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,(wo->fields)._.id,(Object *)wo,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                 ->klass->rgctx_data[0x22].method);
      this_02 = (pMVar2->fields)._.worldObjectMapping;
      if (this_02 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
        MVWorldObjectClientManager+WorldObjectMapping::
        MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                  (this_02,wo,(MethodInfo *)0x0);
        pOVar5 = (Object *)FUN_?(&(wo->klass->_0).byval_arg);
        this_03 = (pMVar2->fields)._.woCreatedEventSubscribers;
        if (this_03 !=
            (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar5,&pOStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                    );
          pOVar5 = pOStackX_8;
          if (pOStackX_8 != (Object *)0x0) {
            lVar6 = FUN_?(TypeInfo__WorldObjectCreatedEventArgs);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__EventArgs);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar7 = iRam_? != 0;
            *(MVWorldObjectClient **)(lVar6 + 0x10) = wo;
            if (bVar7) {
              uVar8 = (uint)(lVar6 + 0x10U >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
            if (pOVar5 == (Object *)0x0) goto code_?;
            (*(code *)pOVar5[1].monitor)(pOVar5[4].klass,pMVar2,lVar6,pOVar5[2].monitor);
          }
          if ((wo->fields)._.groupId != -1) {
            return;
          }
          bVar12 = (TypeInfo__MVGroup->_1).naturalAligment;
          if ((bVar12 <= (wo->klass->_1).naturalAligment) &&
             ((MVGroup__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] ==
              TypeInfo__MVGroup)) {
            (pMVar2->fields)._.rootGroupId = (wo->fields)._.id;
            return;
          }
          FUN_?(wo);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AllModesSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_AllModesSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__SpawnRoles__SpawnRolesMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesMetaData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (photonEvent != (EventData *)0x0) {
    pMVar1 = (MethodInfo *)0x0;
    pSVar2 = (String *)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    value_00 = (String *)0x0;
    value = value_00;
    if (pSVar2 != (String *)0x0) {
      if (pSVar2->klass == pSRam0000000182dc2f60) {
        value = pSVar2;
      }
      if (value == (String *)0x0) {
        FUN_?(pSVar2);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    spawnRolesRuntimeData =
         (SpawnRolesRuntimeData *)
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   (value,
                    MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                   );
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar4 = (MVPlayer *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)spawnRolesRuntimeData,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar4,pMVar1);
    pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xc1,(MethodInfo *)0x0);
    if ((this_00 != (MVLocalPlayer *)0x0) && (pOVar5 != (Object *)0x0)) {
      if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      MVLocalPlayer::MVLocalPlayer_SetupPlayerWorldObjects
                (this_00,*(int32_t *)&pOVar5[1].klass,spawnRolesRuntimeData,(MethodInfo *)0x0);
      pWVar6 = (this->fields).worldNetwork;
      if (pWVar6 != (WorldNetwork *)0x0) {
        pEVar7 = (pWVar6->fields)._.InitializedGameQueryData;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pEVar7,(Delegate *)this_01,(MethodInfo *)0x0);
        pEVar9 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        if (pDVar8 == (Delegate *)0x0) {
          (pWVar6->fields)._.InitializedGameQueryData =
               (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
        }
        else {
          pEVar7 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                   FUN_?(pDVar8,
                                 TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
          if (pEVar7 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
            FUN_?(pDVar8,pEVar9);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (pWVar6->fields)._.InitializedGameQueryData = pEVar7;
          pEVar9 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          lVar10 = FUN_?(pDVar8,
                                 TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
          if (lVar10 == 0) {
            FUN_?(pDVar8,pEVar9);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&(pWVar6->fields)._.InitializedGameQueryData >> 0xc);
          lVar10 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar10 + 0xADDR);
            puVar13 = (ulonglong *)(lVar10 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        pOVar5 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0x24,(MethodInfo *)0x0);
        if (pOVar5 != (Object *)0x0) {
          if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar5);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          MVNetworkGame_SetupLogicManager(this,*(int32_t *)&pOVar5[1].klass,(MethodInfo *)0x0);
          pMVar1 = (MethodInfo *)0x0;
          pSVar2 = (String *)
                   Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (photonEvent,0xd1,(MethodInfo *)0x0);
          if (pSVar2 != (String *)0x0) {
            if (pSVar2->klass == pSRam0000000182dc2f60) {
              value_00 = pSVar2;
            }
            if (value_00 == (String *)0x0) {
              FUN_?(pSVar2);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pMVar4 = (MVPlayer *)
                    MV__WorldObject__SpawnRoles__SpawnRolesMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesMetaData>_System__String_
          ;
          pOVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             (value_00,
                              MV__WorldObject__SpawnRoles__SpawnRolesMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesMetaData>_System__String_
                             );
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar4,pMVar1);
          if (extraout_RAX != 0) {
            bVar14 = iRam_? != 0;
            *(Object **)(extraout_RAX + 0x90) = pOVar5;
            if (bVar14) {
              uVar11 = (uint)(extraout_RAX + 0x90U >> 0xc);
              lVar10 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
              do {
                uVar12 = *(ulonglong *)(lVar10 + 0xADDR);
                puVar13 = (ulonglong *)(lVar10 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void BuildModeSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_BuildModeSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    lVar1 = FUN_?();
    if (lVar1 == 0) {
      this_00 = (PlayerShopInventoryRepository *)
                FUN_?(
                             TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                             );
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
         (IEditModeUI *)0x0) && (lVar1 = FUN_?(), lVar1 != 0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ClientShopRepository);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__PlayerInventoryRepository);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(longlong *)(lVar1 + 0x48) == 0) {
        this_01 = (PlayerInventoryRepository *)FUN_?(TypeInfo__PlayerInventoryRepository);
        PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_01,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        *(PlayerInventoryRepository **)(lVar1 + 0x48) = this_01;
        if (bVar2) {
          uVar3 = (uint)(lVar1 + 0x48U >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
      }
      if (*(longlong *)(lVar1 + 0x40) == 0) {
        this_02 = (ClientShopRepository *)FUN_?(TypeInfo__ClientShopRepository);
        ClientShopRepository::ClientShopRepository__ctor(this_02,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        *(ClientShopRepository **)(lVar1 + 0x40) = this_02;
        if (bVar2) {
          uVar3 = (uint)(lVar1 + 0x40U >> 0xc);
          lVar1 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar1 + 0xADDR);
            puVar6 = (ulonglong *)(lVar1 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
        FUN_?(&TypeInfo__MVMaterialRepository);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      TypeInfo__MVMaterialRepository->static_fields->instance = (MVMaterialRepository *)0x0;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)TypeInfo__MVMaterialRepository->static_fields >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PricesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__PricesManager->static_fields->prices =
         (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__PricesManager->static_fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    return;
  }
  MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Cleanup
            ((pWVar1->fields)._.worldObjectClientManager,(MethodInfo *)0x0);
  pLVar7 = (this->fields)._LogicObjectManager_k__BackingField;
  if (pLVar7 != (LogicObjectManagerClient *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(pLVar7->fields)._.logicWorldObjects;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
                );
      goto code_?;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CreateGame() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreateGame
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    pEVar2 = (pWVar1->fields)._.InitializedGameQueryData;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pEVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    pEVar4 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    if (pDVar3 == (Delegate *)0x0) {
      (pWVar1->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    }
    else {
      pEVar2 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
               FUN_?(pDVar3,
                             TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      if (pEVar2 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        FUN_?(pDVar3,pEVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pWVar1->fields)._.InitializedGameQueryData = pEVar2;
      pEVar4 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      lVar6 = FUN_?();
      if (lVar6 == 0) {
        FUN_?(pDVar3,pEVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pWVar1->fields)._.InitializedGameQueryData >> 0xc);
      lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar9 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pMVar11 = (this->fields).gameDataQuery;
    pWVar1 = (this->fields).worldNetwork;
    if ((pMVar11 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
       (this_00 = (pMVar11->fields).bp, this_00 != (BytePacker *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                (this_00,0,(MethodInfo *)0x0);
      pMVar12 = (this->fields).gameDataQuery;
      if ((pMVar12 != (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) &&
         (pWVar1 != (WorldNetwork *)0x0)) {
        WorldNetwork::WorldNetwork_CreateGameWorldFromQueryData
                  (pWVar1,(pMVar11->fields).bp,(pMVar12->fields).instigatorActorNumber,
                   (MethodInfo *)0x0);
        bVar10 = iRam_? != 0;
        (this->fields).gameDataQuery = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0;
        if (bVar10) {
          uVar7 = (uint)((ulonglong)&(this->fields).gameDataQuery >> 0xc);
          lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar9 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVLocalPlayer CreateLocalPlayer(Int32, Int32, List`1[System.Int32], UserProfileData) */

MVLocalPlayer *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreateLocalPlayer
          (MVNetworkGame *this,int32_t actorNr,int32_t planetOwnershipTypeID,
          List_1_System_Int32_ *planetPermissionIDs,UserProfileData *userProfileData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalPlayerRegistered);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalPlayerTourist);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).profileID < 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 != (GameSessionData *)0x0) {
        iVar2 = (pGVar1->fields).profileID;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar1 != (GameSessionData *)0x0) {
          pSVar3 = (pGVar1->fields).language;
          pMVar4 = TypeInfo__MVLocalPlayerTourist;
code_?:
          pMVar5 = (MVLocalPlayer *)FUN_?(pMVar4);
          MVLocalPlayer::MVLocalPlayer__ctor
                    (pMVar5,actorNr,iVar2,pSVar3,planetOwnershipTypeID,planetPermissionIDs,
                     userProfileData,(MethodInfo *)0x0);
          return pMVar5;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 != (GameSessionData *)0x0) {
        if ((pGVar1->fields).gameMode != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar1 == (GameSessionData *)0x0) goto code_?;
          if (((pGVar1->fields).gameMode != 4) &&
             (MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
             MVar6 != MVGameMode__Enum_CharacterEditor)) {
            MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
            if ((MVar6 != MVGameMode__Enum_Play) &&
               (MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
               MVar6 != MVGameMode__Enum_SpacePlay)) {
              uVar7 = func_?(&TypeInfo__System__Exception);
              this_00 = (Exception *)func_?(uVar7);
              pSVar3 = (String *)func_?(&StringLiteral_Unknown_game_mode);
              mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
              uVar7 = func_?(&
                                          MethodInfo__MVNetworkGame__CreateLocalPlayer_int__int__System__Collections__Generic__List<int>__MV__WorldObject__MetaData__UserProfileData_
                                         );
              FUN_?(this_00,uVar7);
              pcVar8 = (code *)swi(3);
              pMVar5 = (MVLocalPlayer *)(*pcVar8)();
              return pMVar5;
            }
            lVar9 = FUN_?();
            if (lVar9 != 0) {
              iVar2 = *(int32_t *)(lVar9 + 0x18);
              lVar9 = FUN_?();
              if (lVar9 != 0) {
                pSVar3 = *(String **)(lVar9 + 0x28);
                pMVar4 = (MVLocalPlayerTourist__Class *)TypeInfo__MVLocalPlayerRegistered;
                goto code_?;
              }
            }
            goto code_?;
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar1 != (GameSessionData *)0x0) {
          iVar2 = (pGVar1->fields).profileID;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar1 != (GameSessionData *)0x0) {
            pSVar3 = (pGVar1->fields).language;
            pMVar5 = (MVLocalPlayer *)FUN_?(TypeInfo__MVLocalPlayerBuilder);
            MVLocalPlayer::MVLocalPlayer__ctor
                      (pMVar5,actorNr,iVar2,pSVar3,planetOwnershipTypeID,planetPermissionIDs,
                       userProfileData,(MethodInfo *)0x0);
            *(undefined4 *)&pMVar5[1].klass = 5;
            *(undefined8 *)((longlong)&pMVar5[1].klass + 4) = 0xffffffffffffffff;
            return pMVar5;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  pMVar5 = (MVLocalPlayer *)(*pcVar8)();
  return pMVar5;
}


/* Void CreatePlayersFromUserList(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreatePlayersFromUserList
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *userList,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__BuildTarget);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPlayer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerGameState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleChangeHandlerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UserList_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (userList == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_UserList_is_null,(MethodInfo *)0x0);
    return;
  }
  pMVar1 = (MVPlayerContainer *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  pMStack_2 = pMVar1;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar1,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  pMStack_3 = pMVar1;
  pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            TypeConverterRegistry+ConverterKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                      ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)userList,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                      );
  if (pDVar4 ==
      (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
       *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pDStack_6 = (pDVar4->fields)._dictionary;
  ppDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)0x0;
  uStack_8 = 0;
  if (iRam_? != 0) {
    uVar9 = (uint)((ulonglong)&pDStack_10 >> 0xc);
    puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar12 = *puVar11;
      LOCK();
      uVar13 = *puVar11;
      if (uVar12 == uVar13) {
        *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar12 != uVar13);
  }
  if (pDStack_6 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_10 = pDStack_6;
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_14 = (pDStack_6->fields)._version;
  uStack_8 = 0;
  uStack_15 = 0;
  plStack_16 = (longlong *)0x0;
  pDStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_7 = &pDStack_6;
code_?:
  if (pDStack_6 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    if (iStack_14 == (pDStack_6->fields)._version) {
      do {
        if (pDStack_6 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_6->fields)._count <= uStack_15) {
          _uStack_60 = CONCAT44(iStack_14,(pDStack_6->fields)._count + 1);
          plStack_16 = (longlong *)0x0;
          pMVar1 = (this->fields).playerContainer;
          if (pMVar1 != (MVPlayerContainer *)0x0) {
            MVPlayerContainer::MVPlayerContainer_Add_1
                      (pMVar1,(List_1_MVPlayer_ *)pMStack_2,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        spawnRolesRuntimeData = (pDStack_6->fields)._entries;
        lVar17 = (longlong)(int)uStack_15;
        uVar9 = uStack_15 + 1;
        if (spawnRolesRuntimeData ==
            (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
             *)0x0) goto code_?;
        if (*(uint *)&spawnRolesRuntimeData->max_length <= uStack_15) {
          uStack_15 = uVar9;
          FUN_?();
          goto code_?;
        }
        uStack_15 = uVar9;
      } while (((_union_86 *)&spawnRolesRuntimeData->vector[0].hashCode)[lVar17 * 3].__klassIndex <
               0);
      plStack_16 = *(longlong **)((longlong)&spawnRolesRuntimeData->vector[0].key + lVar17 * 0x18);
      func_?();
      if (plStack_16 != (longlong *)0x0) {
        if (*(Il2CppClass **)(*plStack_16 + 0x40) ==
            *(Il2CppClass **)(pDRam0000000182dc2f18->vector + 1)) {
          uVar9 = *(uint *)(plStack_16 + 2);
          unaff_RDI = (MVPlayer *)(ulonglong)uVar9;
          pMVar1 = (this->fields).playerContainer;
          if (pMVar1 != (MVPlayerContainer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVLocalPlayer);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            spawnRolesRuntimeData =
                 (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                  *)MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              (pMVar1,(pMVar1->fields).localPlayerActorNumber,(MethodInfo *)0x0);
            if (spawnRolesRuntimeData ==
                (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                 *)0x0) {
code_?:
              FUN_?();
              goto code_?;
            }
            pIVar18 = ((Il2CppClass_0 *)&spawnRolesRuntimeData->klass)->image;
            bVar19 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
            if ((bVar19 <= *(byte *)&pIVar18[4].assembly) &&
               (*(MVLocalPlayer__Class **)
                 ((longlong)pIVar18[2].codeGenModule + (ulonglong)bVar19 * 8 + -8) ==
                TypeInfo__MVLocalPlayer)) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
code_?:
  if (uVar9 == *(uint *)((longlong)&spawnRolesRuntimeData->vector[1].value + 4))
  goto code_?;
  auStackX_20[0] = uVar9;
  key = (Object *)FUN_?(pDRam0000000182dc2f18,auStackX_20);
  spawnRolesRuntimeData =
       (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
        *)
       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
  ;
  pMVar1 = (MVPlayerContainer *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (userList,key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pMVar1 == (MVPlayerContainer *)0x0) {
code_?:
    FUN_?();
code_?:
    pSVar20 = (String *)FUN_?();
code_?:
    FUN_?(pSVar20);
code_?:
    plVar21 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar21,spawnRolesRuntimeData);
code_?:
    pSVar22 = (String *)FUN_?();
code_?:
    FUN_?(pSVar22);
code_?:
    plVar21 = (longlong *)FUN_?(unaff_RDI);
code_?:
    FUN_?(plVar21,spawnRolesRuntimeData);
code_?:
    plVar21 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar21,spawnRolesRuntimeData);
code_?:
    pSVar20 = (String *)FUN_?();
code_?:
    plVar21 = (longlong *)FUN_?(pSVar20);
code_?:
    FUN_?(plVar21,spawnRolesRuntimeData);
code_?:
    plVar21 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar21,spawnRolesRuntimeData);
code_?:
    plVar21 = (longlong *)FUN_?();
code_?:
    FUN_?(plVar21,spawnRolesRuntimeData);
  }
  else {
    spawnRolesRuntimeData =
         (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
          *)pMVar1->klass;
    bVar19 = (TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>->_1).
            naturalAligment;
    if ((*(byte *)&spawnRolesRuntimeData->vector[8].key.DestinationType < bVar19) ||
       (*(Dictionary_2_System_Byte_System_Object___Class **)
         ((longlong)spawnRolesRuntimeData->vector[5].key.SourceType + (ulonglong)bVar19 * 8 + -8) !=
        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>))
    goto code_?;
    plVar21 = (longlong *)FUN_?(pMVar1,0xb);
    spawnRolesRuntimeData = pDRam0000000182dc2f18;
    if (plVar21 != (longlong *)0x0) {
      if (*(Il2CppClass **)(*plVar21 + 0x40) == *(Il2CppClass **)(pDRam0000000182dc2f18->vector + 1)
         ) {
        profileID = *(uint *)(plVar21 + 2);
        plVar21 = (longlong *)FUN_?(pMVar1,CONCAT71((int7)((ulonglong)*plVar21 >> 8),0x5c));
        spawnRolesRuntimeData = pDRam0000000182dc2f18;
        if (plVar21 != (longlong *)0x0) {
          if (*(Il2CppClass **)(*plVar21 + 0x40) ==
              *(Il2CppClass **)(pDRam0000000182dc2f18->vector + 1)) {
            lVar17 = plVar21[2];
            plVar21 = (longlong *)
                      FUN_?(pMVar1,CONCAT71((int7)((ulonglong)*plVar21 >> 8),0xac));
            spawnRolesRuntimeData = pDRam0000000182dc2f18;
            if (plVar21 != (longlong *)0x0) {
              if (*(Il2CppClass **)(*plVar21 + 0x40) ==
                  *(Il2CppClass **)(pDRam0000000182dc2f18->vector + 1)) {
                lVar23 = plVar21[2];
                pSVar20 = (String *)
                          FUN_?(pMVar1,CONCAT71((int7)((ulonglong)*plVar21 >> 8),0x9d));
                pSVar24 = (String *)0x0;
                if (pSVar20 == (String *)0x0) {
code_?:
                  plVar21 = (longlong *)FUN_?(pMVar1,0xd4);
                  spawnRolesRuntimeData = pDRam0000000182dc2ef8;
                  if (plVar21 != (longlong *)0x0) {
                    if (*(Il2CppClass **)(*plVar21 + 0x40) ==
                        *(Il2CppClass **)(pDRam0000000182dc2ef8->vector + 1)) {
                      isReady = *(bool *)(plVar21 + 2);
                      plVar21 = (longlong *)
                                FUN_?(pMVar1,CONCAT71((int7)((ulonglong)*plVar21 >> 8),0x47)
                                             );
                      spawnRolesRuntimeData =
                           (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                            *)TypeInfo__MV__Common__PlayerGameState;
                      if (plVar21 != (longlong *)0x0) {
                        if (*(Il2CppClass **)(*plVar21 + 0x40) ==
                            (TypeInfo__MV__Common__PlayerGameState->_0).element_class) {
                          bVar19 = *(byte *)(plVar21 + 2);
                          auStackX_20[0] = CONCAT31(auStackX_20[0]._1_3_,bVar19 == 3);
                          unaff_RDI = (MVPlayer *)
                                      FUN_?(pMVar1,CONCAT71((int7)((ulonglong)*plVar21 >> 8)
                                                                    ,0xe1));
                          if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0
                             ) {
                            FUN_?();
                          }
                          value = (MVPlayer *)0x0;
                          if (unaff_RDI == (MVPlayer *)0x0) {
code_?:
                            playerPlanetDataRemote =
                                 (PlayerPlanetDataRemote *)
                                 Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                 JsonConvert_DeserializeObject_2
                                           ((String *)value,
                                            MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                                           );
                            pSVar22 = (String *)FUN_?(pMVar1,0xe2);
                            pSVar20 = (String *)0x0;
                            if (pSVar22 == (String *)0x0) {
code_?:
                              userProfileData =
                                   (UserProfileData *)
                                   Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                   JsonConvert_DeserializeObject_2
                                             (pSVar20,
                                              MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                             );
                              plVar21 = (longlong *)FUN_?(pMVar1,0xbe);
                              spawnRolesRuntimeData =
                                   (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                    *)TypeInfo__MV__Common__BuildTarget;
                              if (plVar21 != (longlong *)0x0) {
                                if (*(Il2CppClass **)(*plVar21 + 0x40) ==
                                    (TypeInfo__MV__Common__BuildTarget->_0).element_class) {
                                  lVar25 = plVar21[2];
                                  unaff_RDI = (MVPlayer *)FUN_?(TypeInfo__MVPlayer);
                                  in_stack_26 =
                                       CONCAT31((int3)(in_stack_26 >> 8),(char)lVar25);
                                  spawnRolesRuntimeData =
                                       (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                        *)(ulonglong)profileID;
                                  MVPlayer::MVPlayer__ctor_1
                                            (unaff_RDI,uVar9,profileID,(int32_t)lVar23,pSVar24,
                                             in_stack_26,userProfileData,isReady,
                                             (bool)auStackX_20[0],playerPlanetDataRemote,
                                             (MethodInfo *)0x0);
                                  if (unaff_RDI != (MVPlayer *)0x0) {
                                    (unaff_RDI->fields)._Team_k__BackingField = (int32_t)lVar17;
                                    pSVar20 = (String *)FUN_?(pMVar1,0xf5);
                                    pSVar24 = (String *)0x0;
                                    if (pSVar20 == (String *)0x0) {
code_?:
                                      spawnRolesRuntimeData =
                                           (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                            *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                              JsonConvert_DeserializeObject_2
                                                        (pSVar24,
                                                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                                                  );
                                      spawnRoleChangeHandler =
                                           (ISpawnRoleChangeHandler *)
                                           FUN_?(TypeInfo__SpawnRoleChangeHandlerRemote);
                                      MVPlayer::MVPlayer_SetupSpawnRoleManager
                                                (unaff_RDI,spawnRoleChangeHandler,
                                                 (SpawnRolesRuntimeData *)spawnRolesRuntimeData,
                                                 (MethodInfo *)0x0);
                                      pMVar1 = pMStack_2;
                                      if (pMStack_2 != (MVPlayerContainer *)0x0) {
                                        FUN_?(pMStack_2,unaff_RDI);
                                        if ((unaff_RDI->fields).playerState != bVar19) {
                                          MVPlayer::MVPlayer_set_PlayerState
                                                    (unaff_RDI,(uint)bVar19,(MethodInfo *)0x0);
                                        }
                                        goto code_?;
                                      }
                                      goto code_?;
                                    }
                                    if (pSVar20->klass == pSRam0000000182dc2f60) {
                                      pSVar24 = pSVar20;
                                    }
                                    if (pSVar24 != (String *)0x0) goto code_?;
                                    goto code_?;
                                  }
                                  goto code_?;
                                }
                                goto code_?;
                              }
                              goto code_?;
                            }
                            if (pSVar22->klass == pSRam0000000182dc2f60) {
                              pSVar20 = pSVar22;
                            }
                            if (pSVar20 != (String *)0x0) goto code_?;
                            goto code_?;
                          }
                          if ((String__Class *)unaff_RDI->klass == pSRam0000000182dc2f60) {
                            value = unaff_RDI;
                          }
                          if (value != (MVPlayer *)0x0) goto code_?;
                          goto code_?;
                        }
                        goto code_?;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
                if (pSVar20->klass == pSRam0000000182dc2f60) {
                  pSVar24 = pSVar20;
                }
                if (pSVar24 != (String *)0x0) goto code_?;
                goto code_?;
              }
              goto code_?;
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
  FUN_?();
code_?:
  FUN_?(pMVar1);
code_?:
  FUN_?(spawnRolesRuntimeData);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar9 = uStack_15;
code_?:
  uStack_15 = uVar9;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
  goto code_?;
}


/* Void CreatePrivateClasses() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_CreatePrivateClasses
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkGame__EventHandling);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OperationRequests);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__OperationResponseHandling);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__StatusChangedHandling);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (MVNetworkGame_EventHandling *)FUN_?(TypeInfo__MVNetworkGame__EventHandling);
  MVNetworkGame+EventHandling::MVNetworkGame_EventHandling__ctor(this_00,this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).eventHandling = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).eventHandling >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar6 = (MVNetworkGame_OperationResponseHandling *)
           FUN_?(TypeInfo__MVNetworkGame__OperationResponseHandling);
  iVar7 = iRam_?;
  (pMVar6->fields).networkGame = this;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pMVar6->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).operationResponseHandling = pMVar6;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).operationResponseHandling >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar8 = (MVNetworkGame_StatusChangedHandling *)
           FUN_?(TypeInfo__MVNetworkGame__StatusChangedHandling);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (pMVar8->fields).networkGame = this;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(pMVar8->fields).networkGame >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar9 = (MVNetworkGame_ReconnectWithAlternatePortHandler *)
           FUN_?(TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler);
  iVar7 = iRam_?;
  (pMVar9->fields).networkGame = this;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(pMVar9->fields).networkGame >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (pMVar8->fields).reconnectWithAlternatePortHandler = pMVar9;
  iVar10 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pMVar8->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).statusChangedHandling = pMVar8;
  if (iVar10 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).statusChangedHandling >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (MVNetworkGame_OperationRequests *)
            FUN_?(TypeInfo__MVNetworkGame__OperationRequests);
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests__ctor
            (this_01,this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).operationRequests = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).operationRequests >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void DebugReturn(DebugLevel, String) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_DebugReturn
               (MVNetworkGame *this,DebugLevel__Enum level,String *debug,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((level & 0xff) == DebugLevel__Enum_ERROR) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar1 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar1,0,debug);
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((level & 0xff) == DebugLevel__Enum_WARNING) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar1 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar1,2,debug);
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar1 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar1 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar1,3,debug);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GeneratePlanetScreenShot(Action`1[Byte[]]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_GeneratePlanetScreenShot
               (Action_1_Byte_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GenerateTexture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  pSVar2 = StringLiteral_GenerateTexture;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar1,pSVar2,(MethodInfo *)0x0);
  if ((pGVar1 == (GameObject *)0x0) ||
     (this = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar1,
                        GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                       ), this == (Component *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Texture_is_being_generated);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GenerateTextureData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar2 = StringLiteral_Texture_is_being_generated;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar2);
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar5 = FUN_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(Component **)(lVar5 + 0x28) = this;
  if (iRam_? != 0) {
    uVar6 = (uint)(lVar5 + 0x28U >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  iVar11 = iRam_?;
  *(Action_1_Byte_ **)(lVar5 + 0x20) = callback;
  if (iVar11 != 0) {
    uVar6 = (uint)(lVar5 + 0x20U >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if (lVar5 == 0) {
    uVar12 = func_?(&TypeInfo__System__NullReferenceException,0,0,0,unaff_RSI);
    this_00 = (NullReferenceException *)func_?(uVar12);
    pSVar2 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar2,(MethodInfo *)0x0);
    uVar12 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_00,uVar12);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar13 == 0) {
    uVar12 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar12);
    pSVar2 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar2,(MethodInfo *)0x0);
    uVar12 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_01,uVar12);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (Component *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar14 = (this->fields)._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar14,lVar5);
  return;
}


/* Dictionary`2[System.Byte,System.Object] GetAttachWorldObjectToSeatData(VehicleSeatBase) */

Dictionary_2_System_Byte_System_Object_ *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_GetAttachWorldObjectToSeatData
          (MVNetworkGame *this,VehicleSeatBase *seatBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((seatBase != (VehicleSeatBase *)0x0) &&
      (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)seatBase,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
     && (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pDVar5 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar4)();
      return pDVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      pDVar5 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar4)();
      return pDVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)seatBase,(MethodInfo *)0x0);
    if ((pGVar1 != (GameObject *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_7.x = 0.0;
      QStack_7.y = 0.0;
      QStack_7.z = 0.0;
      QStack_7.w = 0.0;
      pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pDVar5 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar4)();
        return pDVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        pDVar5 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar4)();
        return pDVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&QStack_7);
      iVar8 = (seatBase->fields).seatID;
      pDVar5 = (Dictionary_2_System_Byte_System_Object_ *)
               FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                            );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (pDVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      VStack_9.z = 0.0;
      VStack_9.x = 0.0;
      VStack_9.y = 0.0;
      MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetPosition
                (&VStack_9,pDVar5,(MethodInfo *)0x0);
      MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_SetRotation
                (&QStack_7,pDVar5,(MethodInfo *)0x0);
      auStackX_10[0] = (uint8_t)iVar8;
      pOVar10 = (Object *)FUN_?(uRam_?,auStackX_10);
      if (pDVar5 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        behavior = CONCAT31((int3)((uint)in_R9D >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (pDVar5,0x90,pOVar10,behavior,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        auStackX_10[0] = (seatBase->fields).SeatType;
        pOVar10 = (Object *)FUN_?(uRam_?,auStackX_10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (pDVar5,0x91,pOVar10,CONCAT31((int3)(behavior >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return pDVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_System_Byte_System_Object_ *)(*pcVar4)();
  return pDVar5;
}


/* IWinningCondition GetWinningCondition() */

IWinningCondition *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_GetWinningCondition
          (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Only_1_winning_condition_current);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Round_was_reset_without_winning_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_winning_condition_found_even_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._WinningConditionManager_k__BackingField;
  if (this_00 != (WinningConditionManager *)0x0) {
    if ((this_00->fields)._WinningConditionFound_k__BackingField == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
      return (IWinningCondition *)0x0;
    }
    pLVar1 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetForfilledWinningConditions(this_00,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_IWinningCondition_ *)0x0) {
      if ((pLVar1->fields)._size < 2) {
        iVar2 = (pLVar1->fields)._size;
        message = StringLiteral_No_winning_condition_found_even_;
        if ((iVar2 != 0) && (message = StringLiteral_Only_1_winning_condition_current, iVar2 != 1))
        {
          uVar3 = func_?(&TypeInfo__System__NotImplementedException);
          this_01 = (NotImplementedException *)func_?(uVar3);
          mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
                    (this_01,(MethodInfo *)0x0);
          uVar3 = func_?(&MethodInfo__MVNetworkGame__GetWinningCondition__);
          FUN_?(this_01,uVar3);
          pcVar4 = (code *)swi(3);
          pIVar5 = (IWinningCondition *)(*pcVar4)();
          return pIVar5;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return (IWinningCondition *)0x0;
      }
      if ((pLVar1->fields)._size == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pIVar5 = (IWinningCondition *)(*pcVar4)();
        return pIVar5;
      }
      pIVar6 = (pLVar1->fields)._items;
      if (pIVar6 != (IWinningCondition__Array *)0x0) {
        if ((int)pIVar6->max_length == 0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          pIVar5 = (IWinningCondition *)(*pcVar4)();
          return pIVar5;
        }
        return pIVar6->vector[0];
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pIVar5 = (IWinningCondition *)(*pcVar4)();
  return pIVar5;
}


/* Void HandleGameSnapshotData(BytePacker, QueryType, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
               (MVNetworkGame *this,BytePacker *bytePacker,QueryType__Enum queryType,bool dataLeft,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVNetworkGame__CreateGame__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameSnapshotDataReceived);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).playerContainer;
  if ((this->fields).gameDataQuery == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0) {
    if ((this_00 == (MVPlayerContainer *)0x0) ||
       (pMVar1 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar1 == (MVLocalPlayer *)0x0)) goto code_?;
    iVar2 = (pMVar1->fields)._._ActorNr_k__BackingField;
    pMVar3 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
             FUN_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    (pMVar3->fields).bp = bytePacker;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pMVar3->fields >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    iVar9 = iRam_?;
    (pMVar3->fields).instigatorActorNumber = iVar2;
    (pMVar3->fields)._QueryType_k__BackingField = (uint8_t)queryType;
    (this->fields).gameDataQuery = pMVar3;
    if (iVar9 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).gameDataQuery >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  else {
    pMVar3 = (this->fields).gameDataQuery;
    if ((this_00 == (MVPlayerContainer *)0x0) ||
       (pMVar1 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar1 == (MVLocalPlayer *)0x0)) goto code_?;
    iVar2 = (pMVar1->fields)._._ActorNr_k__BackingField;
    gameDataQuery =
         (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
         FUN_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
    bVar8 = iRam_? != 0;
    (gameDataQuery->fields).bp = bytePacker;
    if (bVar8) {
      uVar4 = (uint)((ulonglong)&gameDataQuery->fields >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    (gameDataQuery->fields).instigatorActorNumber = iVar2;
    (gameDataQuery->fields)._QueryType_k__BackingField = (uint8_t)queryType;
    MVNetworkGame+GameDataQueryManager+GameDataQuery::
    MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
              (pMVar3,gameDataQuery,(MethodInfo *)0x0);
  }
  if (dataLeft != 0) {
    return;
  }
  pMVar10 = (this->fields).eventHandling;
  if (pMVar10 != (MVNetworkGame_EventHandling *)0x0) {
    (pMVar10->fields).cacheEvents = 1;
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_GameSnapshotDataReceived,1,(MethodInfo *)0x0)
    ;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__MVNetworkGame__CreateGame__,(MethodInfo *)0x0);
    routine = WaitForFrames::WaitForFrames_WithCallback(3,(UnityAction *)this_02,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (this_01 != (MonoBehaviour *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                (this_01,routine,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeManagers() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_InitializeManagers
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FriendList);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameStatCounterManager__OnTeamAdded_System__Object__MV__WorldObject__TeamEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameStatCounterManager__OnTeamRemoved_System__Object__MV__WorldObject__TeamEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameTierShopRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameModeChangeNotifier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalObjectController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMaterialRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShopRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionManagerClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldNetwork);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WorldNetwork *)FUN_?(TypeInfo__WorldNetwork);
  WorldNetwork::WorldNetwork__ctor(pWVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).worldNetwork = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).worldNetwork >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 == (WorldNetwork *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  worldObjectClientManagerNetwork = (pWVar1->fields)._.worldObjectClientManager;
  this_00 = (MVLocalObjectController *)FUN_?(TypeInfo__MVLocalObjectController);
  MVLocalObjectController::MVLocalObjectController__ctor
            (this_00,worldObjectClientManagerNetwork,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._PlayerController_k__BackingField = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._PlayerController_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_01 = (MVMaterialRepository *)FUN_?(TypeInfo__MVMaterialRepository);
  MVMaterialRepository::MVMaterialRepository__ctor(this_01,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._MaterialRepository_k__BackingField = this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._MaterialRepository_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_02 = (PlayerRepository *)FUN_?(TypeInfo__PlayerRepository);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ARepository::ARepository__ctor((ARepository *)this_02,(MethodInfo *)0x0);
  pDVar8 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
            );
  iVar9 = iRam_?;
  (this_02->fields).playerInventory = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)pDVar8;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this_02->fields).playerInventory >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar2);
  }
  (this->fields)._PlayerRepository_k__BackingField = this_02;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._PlayerRepository_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_03 = (ShopRepository *)FUN_?(TypeInfo__ShopRepository);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ARepository::ARepository__ctor((ARepository *)this_03,(MethodInfo *)0x0);
  pDVar8 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this_03->fields).shopInventory = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)pDVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this_03->fields).shopInventory >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar10 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  FUN_?(pLVar10,MethodInfo__System__Collections__Generic__List<int>__List__);
  iVar9 = iRam_?;
  (this_03->fields).ItemCategoriesInShop = pLVar10;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this_03->fields).ItemCategoriesInShop >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar2);
  }
  (this->fields)._ShopRepository_k__BackingField = this_03;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._ShopRepository_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar11 = (GameTierShopRepository *)FUN_?(TypeInfo__GameTierShopRepository);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_04 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_04,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Dictionary__
            );
  iVar9 = iRam_?;
  (pGVar11->fields).tierShopData =
       (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
        *)this_04;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&pGVar11->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar2);
  }
  (this->fields)._GameTierShopRepository_k__BackingField = pGVar11;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._GameTierShopRepository_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pAVar12 = (AvatarRepository *)FUN_?(TypeInfo__AvatarRepository);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar8 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Dictionary__
            );
  iVar9 = iRam_?;
  (pAVar12->fields).avatars = (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)pDVar8;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&pAVar12->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar2);
  }
  (this->fields)._AvatarShopRepository_k__BackingField = pAVar12;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._AvatarShopRepository_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_05 = (FriendList *)FUN_?(TypeInfo__FriendList);
  FriendList::FriendList__ctor(this_05,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._Friends_k__BackingField = this_05;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._Friends_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_06 = (MVGameModeChangeNotifier *)FUN_?(TypeInfo__MVGameModeChangeNotifier);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_06->fields)._currentState = 1;
  this_07 = (List_1_IGameStateControllerSubscriber_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_07,
             MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__)
  ;
  bVar2 = iRam_? != 0;
  (this_06->fields).UpdateList = this_07;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this_06->fields).UpdateList >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  UVar13 = MVGameModeChangeNotifier::MVGameModeChangeNotifier_GetPresentState
                     (this_06,(MethodInfo *)0x0);
  (this_06->fields)._currentState = UVar13;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this_06,UpdatePriority__Enum_UPDATEBUCKET_STANDARD
             ,1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._GameStateController_k__BackingField = this_06;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._GameStateController_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pMVar14 = (this->fields).teamManager;
  pGVar15 = (this->fields).gameStatCounterManager;
  pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar16,(Object *)pGVar15,
             MethodInfo__GameStatCounterManager__OnTeamAdded_System__Object__MV__WorldObject__TeamEventArgs_
             ,(MethodInfo *)0x0);
  if (pMVar14 == (MVTeamManager *)0x0) goto code_?;
  MVTeamManager::MVTeamManager_add_OnTeamAdded
            (pMVar14,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar16,(MethodInfo *)0x0);
  pMVar14 = (this->fields).teamManager;
  pGVar15 = (this->fields).gameStatCounterManager;
  pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar16,(Object *)pGVar15,
             MethodInfo__GameStatCounterManager__OnTeamRemoved_System__Object__MV__WorldObject__TeamEventArgs_
             ,(MethodInfo *)0x0);
  if (pMVar14 == (MVTeamManager *)0x0) goto code_?;
  MVTeamManager::MVTeamManager_add_OnTeamRemoved
            (pMVar14,(EventHandler_1_MV_WorldObject_TeamEventArgs_ *)pUVar16,(MethodInfo *)0x0);
  pWVar17 = (WinningConditionManager *)FUN_?(TypeInfo__WinningConditionManagerClient);
  bVar2 = iRam_? != 0;
  (this->fields)._WinningConditionManager_k__BackingField = pWVar17;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._WinningConditionManager_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pWVar17 = (this->fields)._WinningConditionManager_k__BackingField;
  if (pWVar17 == (WinningConditionManager *)0x0) goto code_?;
  pGVar15 = (this->fields).gameStatCounterManager;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>,pGVar15,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  WinningConditionOr_MethodInfo__WinningConditionManager__CreateInstance<WinningConditionOr>_WinningCondition__System__Object____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionPresentStyle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (pWVar17->fields).gameCounterManager = pGVar15;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(pWVar17->fields).gameCounterManager >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,3);
  lVar4 = lRam_?;
  lVar18 = 0;
  uVar5 = unaff_RBP >> 8;
  lVar19 = uVar5 << 8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (lVar19 = lVar18, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    lVar19 = FUN_?(lRam_?);
    FUN_?(lVar19 + 0x10,&stack0x00000008,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar3 = (uint)(lVar19 + 0x10U >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar20 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar20 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar20 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  if (args == (Object__Array *)0x0) goto code_?;
  if ((lVar19 != 0) && (lVar4 = FUN_?(lVar19,(args->klass->_0).element_class), lVar4 == 0)
     ) {
    uVar21 = FUN_?();
    FUN_?(uVar21,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?(args,0,lVar19);
  pGVar22 = TypeInfo__GameStatCounterType;
  lVar4 = uVar5 << 8;
  iVar9._0_2_ = (TypeInfo__GameStatCounterType->_0).byval_arg.attrs;
  iVar9._2_1_ = (TypeInfo__GameStatCounterType->_0).byval_arg.type;
  iVar9._3_1_ = (TypeInfo__GameStatCounterType->_0).byval_arg.field_0xb;
  if (iVar9 < 0) {
    if (((TypeInfo__GameStatCounterType->_0).generic_class == (Il2CppGenericClass *)0x0) ||
       (lVar4 = lVar18, ((TypeInfo__GameStatCounterType->_1).field_0x6d & 8) == 0)) {
      lVar4 = FUN_?(TypeInfo__GameStatCounterType);
      FUN_?(lVar4 + 0x10,&stack0x00000008,(longlong)(int)(pGVar22->_1).instance_size + -0x10
                   );
      if (iRam_? != 0) {
        uVar3 = (uint)(lVar4 + 0x10U >> 0xc);
        lVar19 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar20 = *(ulonglong *)(lVar19 + 0xADDR);
          puVar6 = (ulonglong *)(lVar19 + 0xADDR);
          LOCK();
          bVar2 = uVar20 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar20 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      goto code_?;
    }
  }
  else {
code_?:
    if ((lVar4 != 0) &&
       (lVar19 = FUN_?(lVar4,(args->klass->_0).element_class), lVar19 == 0)) {
      uVar21 = FUN_?();
      FUN_?(uVar21,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?(args,1,lVar4);
  pWVar23 = TypeInfo__WinningConditionPresentStyle;
  lVar4 = uVar5 << 8;
  iVar24._0_2_ = (TypeInfo__WinningConditionPresentStyle->_0).byval_arg.attrs;
  iVar24._2_1_ = (TypeInfo__WinningConditionPresentStyle->_0).byval_arg.type;
  iVar24._3_1_ = (TypeInfo__WinningConditionPresentStyle->_0).byval_arg.field_0xb;
  if (iVar24 < 0) {
    if (((TypeInfo__WinningConditionPresentStyle->_0).generic_class == (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__WinningConditionPresentStyle->_1).field_0x6d & 8) == 0)) {
      lVar4 = FUN_?(TypeInfo__WinningConditionPresentStyle);
      FUN_?(lVar4 + 0x10,&stack0x00000008,
                    (longlong)(int)(pWVar23->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)(lVar4 + 0x10U >> 0xc);
        lVar19 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar19 + 0xADDR);
          puVar6 = (ulonglong *)(lVar19 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      goto code_?;
    }
  }
  else {
code_?:
    lVar18 = lVar4;
    if ((lVar4 != 0) &&
       (lVar4 = FUN_?(lVar4,(args->klass->_0).element_class), lVar4 == 0)) {
      uVar21 = FUN_?();
      FUN_?(uVar21,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?(args,2,lVar18);
  pWVar25 = (WinningConditionOr *)
            MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateInstance
                      (pWVar17,(WinningCondition *)0x0,args,
                       WinningConditionOr_MethodInfo__WinningConditionManager__CreateInstance<WinningConditionOr>_WinningCondition__System__Object____
                      );
  bVar2 = iRam_? != 0;
  (pWVar17->fields).winnerConditionsRoot = pWVar25;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pWVar17->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pWVar25 = (pWVar17->fields).winnerConditionsRoot;
  pUVar16 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar16,(Object *)pWVar17,
             MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
             ,(MethodInfo *)0x0);
  if (pWVar25 != (WinningConditionOr *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppEVar26 = &(pWVar25->fields)._._.OnWinningConditionChanged;
    a = (pWVar25->fields)._._.OnWinningConditionChanged;
    do {
      pDVar27 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)pUVar16,(MethodInfo *)0x0);
      pEVar28 = TypeInfo__System__EventHandler<System::EventArgs>;
      if (pDVar27 == (Delegate *)0x0) {
        pEVar29 = (EventHandler_1_EventArgs_ *)0x0;
      }
      else {
        pEVar29 = (EventHandler_1_EventArgs_ *)
                  FUN_?(pDVar27,TypeInfo__System__EventHandler<System::EventArgs>);
        if (pEVar29 == (EventHandler_1_EventArgs_ *)0x0) {
          FUN_?(pDVar27,pEVar28);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      pEVar30 = *ppEVar26;
      bVar2 = a == pEVar30;
      if (bVar2) {
        *ppEVar26 = pEVar29;
        pEVar30 = a;
      }
      UNLOCK();
      pEVar29 = a;
      if (!bVar2) {
        pEVar29 = pEVar30;
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)ppEVar26 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar20 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar20 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar20 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      bVar2 = pEVar29 != a;
      a = pEVar29;
    } while (bVar2);
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean Join() */

bool Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Join(MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVGameServer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVGameControllerBase_GameSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).connState = 2;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    message = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_MVGameControllerBase_GameSession,(pGVar2->fields).serverIP,
                         (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    pPVar3 = (this->fields)._Peer_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if ((pGVar2 != (GameSessionData *)0x0) && (pPVar3 != (PhotonPeer *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar4 = (*(pPVar3->klass->vtable).Connect.methodPtr)
                        (pPVar3,(pGVar2->fields).serverIP,StringLiteral_MVGameServer,
                         (pPVar3->klass->vtable).Connect.method);
      return bVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void LoadModeGui() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_LoadModeGui
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVNetworkGame__OperationRequests__Syncronize__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pMVar1->fields).levelLoader;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar3 == (GameSessionData *)0x0) goto code_?;
  iVar4 = (pGVar3->fields).gameMode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar3 == (GameSessionData *)0x0) goto code_?;
  iVar5 = (pGVar3->fields).profileID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (this->fields).operationRequests;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)object,MethodInfo__MVNetworkGame__OperationRequests__Syncronize__,
             (MethodInfo *)0x0);
  if (this_00 == (LevelLoader *)0x0) goto code_?;
  if (iVar4 == 0) {
code_?:
    mode = ScenesForMode__Enum_EditMode;
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        mode = ScenesForMode__Enum_AvatarEditMode;
        goto code_?;
      }
      if (iVar4 != 3) {
        if (iVar4 != 4) {
          return;
        }
        goto code_?;
      }
    }
    mode = ScenesForMode__Enum_PlayMode;
    if (iVar5 < 1) {
      mode = ScenesForMode__Enum_PlayModeTourist;
    }
  }
code_?:
  LevelLoader::LevelLoader_LoadScenes_1(this_00,mode,(Action *)this_01,(MethodInfo *)0x0);
  return;
}


/* Void OnAddItemToInventory(Dictionary`2[System.Byte,System.Object], Int16) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddItemToInventory
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               int16_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame____c__DisplayClass258_0___OnAddItemToInventory_b__0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame____c__DisplayClass258_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_add_to_inventory__This);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVNetworkGame____c__DisplayClass258_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)returnValues;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    if (returnCode == -1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_add_to_inventory__This,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
           (IEditModeUI *)0x0) && (lVar6 = FUN_?(), lVar6 != 0)) {
        lVar6 = *(longlong *)(lVar6 + 0x18);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        }
        return;
      }
    }
    else if ((object[1].klass != (Object__Class *)0x0) &&
            (plVar7 = (longlong *)FUN_?(object[1].klass,0x17), plVar7 != (longlong *)0x0)) {
      if (*(longlong *)(*plVar7 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar7,lRam_?);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = plVar7[2];
      data = object[1].klass;
      this_02 = (InventoryItem *)FUN_?(TypeInfo__InventoryItem);
      InventoryItem::InventoryItem__ctor_1
                (this_02,(Dictionary_2_System_Byte_System_Object_ *)data,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
            (IEditModeUI *)0x0) && (lVar9 = FUN_?(), lVar9 != 0)) &&
         (*(PlayerInventoryRepository **)(lVar9 + 0x48) != (PlayerInventoryRepository *)0x0)) {
        PlayerInventoryRepository::PlayerInventoryRepository_AddItem
                  (*(PlayerInventoryRepository **)(lVar9 + 0x48),this_02,(MethodInfo *)0x0);
        lVar10 = *(longlong *)(lVar9 + 0x20);
        if (lVar10 != 0) {
          (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
        }
        lVar9 = *(longlong *)(lVar9 + 0x30);
        if (this_02 != (InventoryItem *)0x0) {
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),(this_02->fields).itemCategoryID,
                       (this_02->fields).slotPosition,1,*(undefined8 *)(lVar9 + 0x28));
          }
          this_00 = (this->fields).itemBusinessLogic;
          if (this_00 != (MVItemBusinessLogic *)0x0) {
            MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                      (this_00,(this_02->fields).itemID,(this_02->fields).resellable,
                       (this_02->fields).itemCategoryID,(this_02->fields).itemTypeID,
                       (this_02->fields).name,(MethodInfo *)0x0);
            this_03 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_03,object,
                       MethodInfo__MVNetworkGame____c__DisplayClass258_0___OnAddItemToInventory_b__0_MVWorldObjectClient_
                       ,(MethodInfo *)0x0);
            if ((((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
                (this_01 = (MVWorldObjectClientManager *)
                           (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
                this_01 != (MVWorldObjectClientManager *)0x0)) &&
               (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (this_01,(int32_t)lVar6,(MethodInfo *)0x0),
               pMVar11 != (MVWorldObjectClient *)0x0)) {
              (*(pMVar11->klass->vtable).TraverseRecursiveTail.methodPtr)
                        (pMVar11,this_03,(pMVar11->klass->vtable).TraverseRecursiveTail.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnAddLinkEvent(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddLinkEvent
               (MVNetworkGame *this,int32_t fromID,int32_t toID,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Link);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_reset_count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  link = (Link *)FUN_?(TypeInfo__MV__WorldObject__Link);
  (link->fields).outputWOID = fromID;
  (link->fields).inputWOID = toID;
  (link->fields).id = linkID;
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 == (WorldNetwork *)0x0) ||
     (pMVar2 = (pWVar1->fields)._.worldObjectClientManager,
     pMVar2 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = (pMVar2->fields)._.worldObjects;
  apOStack_4[0] = (Object *)0x0;
  if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,fromID,apOStack_4,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  pMVar2 = (pWVar1->fields)._.worldObjectClientManager;
  iVar6 = (link->fields).inputWOID;
  if (pMVar2 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar3 = (pMVar2->fields)._.worldObjects;
  RStack_7._pointer._value = (void *)0x0;
  if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pMVar8 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,iVar6,(Object **)&RStack_7,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  pLVar9 = (pWVar1->fields).links;
  if (pLVar9 == (Links *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Add_int__LinkObjectScript_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pLVar9->fields).links;
  if (this_00 == (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) goto code_?;
  uVar10 = CONCAT71((int7)((ulonglong)pMVar8 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,(Object *)link,
             (InsertionBehavior__Enum)uVar10,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
             ->klass->rgctx_data[0x22].method);
  if (apOStack_4[0] == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar11 = apOStack_4[0];
  if (apOStack_4[0][2].klass == (Object__Class *)0x0) goto code_?;
  FUN_?(apOStack_4[0][2].klass,link);
  (link->fields).outputWOID = *(int32_t *)&pOVar11[1].klass;
  if (pOVar11[9].klass != (Object__Class *)0x0) {
    pOVar12 = pOVar11[9].klass;
    uVar13._0_2_ = (pOVar12->_0).byval_arg.attrs;
    uVar13._2_1_ = (pOVar12->_0).byval_arg.type;
    uVar13._3_5_ = *(undefined5 *)&(pOVar12->_0).byval_arg.field_0xb;
    (*(code *)(pOVar12->_0).namespaze)((pOVar12->_0).element_class,pOVar11[2].klass,uVar13);
  }
  if (RStack_7._pointer._value == (void *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  BVar14._value = RStack_7._pointer._value;
  if (*(longlong *)((longlong)RStack_7._pointer._value + 0x28) == 0) goto code_?;
  FUN_?(*(longlong *)((longlong)RStack_7._pointer._value + 0x28),link);
  (link->fields).inputWOID = *(int32_t *)((longlong)BVar14._value + 0x10);
  if (*(longlong *)((longlong)BVar14._value + 0x88) != 0) {
    lVar15 = *(longlong *)((longlong)BVar14._value + 0x88);
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)((longlong)BVar14._value + 0x28),
               *(undefined8 *)(lVar15 + 0x28));
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar16 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar16 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar16->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar17 == (PrefabPool *)0x0) goto code_?;
    pLVar18 = (pPVar17->fields).linkObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar18 = (LinkObjectScript *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pLVar18,
                         LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                        );
    if (pLVar18 == (LinkObjectScript *)0x0) goto code_?;
    (pLVar18->fields)._.isObjectLink = 0;
    (pLVar18->fields)._.linkID = (link->fields).id;
    LinkObjectScript::LinkObjectScript_UpdateLinkVisual(pLVar18,link,(MethodInfo *)0x0);
    this_01 = (pLVar9->fields).linkObjects;
    if (this_01 == (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_01,(link->fields).id,
               (Object *)pLVar18,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),2)
               ,MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Add_int__LinkObjectScript_
                ->klass->rgctx_data[0x22].method);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar16 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar16 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar16->fields).gameMode == 4) goto code_?;
  }
  pLVar19 = (this->fields)._LogicObjectManager_k__BackingField;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pLVar19 != (LogicObjectManagerClient *)0x0) {
    iVar6 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                       ((link->fields).inputWOID,(IWorldObjectManager *)worldObjectManager,
                        (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_7._pointer._value = (void *)0x0;
    RStack_7._length = 0;
    RStack_7._12_4_ = 0;
    pSVar20 = mscorlib.dll::System::Number::Number_FormatInt32
                        (iVar6,&RStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar20 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_reset_count_,pSVar20,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar21 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar21 != (ILogger_1 *)0x0) {
      pSStack_22 = pSVar20;
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar21,3);
      return;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAddObjectLinkEvent(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
               (MVNetworkGame *this,int32_t fromID,int32_t toID,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__ObjectLink);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  link = (ObjectLink *)FUN_?(TypeInfo__MV__WorldObject__ObjectLink);
  (link->fields).isSet = 1;
  (link->fields).objectConnectorWOID = fromID;
  (link->fields).objectWOID = toID;
  (link->fields).id = linkID;
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 != (WorldNetwork *)0x0) &&
     (pMVar2 = (pWVar1->fields)._.worldObjectClientManager,
     pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar3 = (pMVar2->fields)._.worldObjects;
    apMStack_4[0] = (MVWorldObject *)0x0;
    if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,fromID,(Object **)apMStack_4,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    pMVar2 = (pWVar1->fields)._.worldObjectClientManager;
    key = (link->fields).objectWOID;
    if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar3 = (pMVar2->fields)._.worldObjects;
      CStack_6._0_8_ = (MVWorldObject *)0x0;
      if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pMVar7 = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,(Object **)&CStack_6,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      pOVar8 = (pWVar1->fields).objectLinks;
      if (pOVar8 != (ObjectLinks *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pOVar8->fields).objectLinks;
        if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
          uVar9 = CONCAT71((int7)((ulonglong)pMVar7 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,
                     (Object *)link,(InsertionBehavior__Enum)uVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                     ->klass->rgctx_data[0x22].method);
          if ((apMStack_4[0] != (MVWorldObject *)0x0) &&
             (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                        (apMStack_4[0],link,(MethodInfo *)0x0),
             (MVWorldObject *)CStack_6._0_8_ != (MVWorldObject *)0x0)) {
            MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                      ((MVWorldObject *)CStack_6._0_8_,link,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar10 != (GameSessionData *)0x0) {
              if ((pGVar10->fields).gameMode != 0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar10 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar10 == (GameSessionData *)0x0) goto code_?;
                if ((pGVar10->fields).gameMode != 4) {
                  return;
                }
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__PrefabPool);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar11 = TypeInfo__PrefabPool->static_fields->instance;
              if (pPVar11 != (PrefabPool *)0x0) {
                pOVar12 = (pPVar11->fields).objectLinkObject;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pOVar12 = (ObjectLinkObjectScript *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                   ((Object *)pOVar12,
                                    ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                                   );
                if (pOVar12 != (ObjectLinkObjectScript *)0x0) {
                  (pOVar12->fields)._.isObjectLink = 1;
                  (pOVar12->fields)._.linkID = (link->fields).id;
                  ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
                            (pOVar12,link,(MethodInfo *)0x0);
                  this_01 = (pOVar12->fields).lineRenderer;
                  if ((this_01 != (LineRenderer *)0x0) &&
                     (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                Renderer_get_material((Renderer *)this_01,(MethodInfo *)0x0),
                     this_03 != (Material *)0x0)) {
                    CStack_6._0_8_ = _UNK_?;
                    CStack_6.b = _UNK_?;
                    CStack_6.a = _UNK_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                              (this_03,&CStack_6,(MethodInfo *)0x0);
                    this_02 = (pOVar8->fields).objectLinkObjects;
                    if (this_02 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                                 (link->fields).id,(Object *)pOVar12,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2)
                                 ,MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                                  ->klass->rgctx_data[0x22].method);
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAddWorldObjectToInventoryResponseDev(Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
               (MVNetworkGame *this,int32_t returnCode,int32_t worldObjectID,int32_t itemID,
               MethodInfo *method)

{
  aIStackX_20[0].m_value = itemID;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Successfully_added_model_to_your);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Item_not_added_to_inventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).OnAddWorldObjectToInventoryCallbackDev != (UnityAction_1_System_String_ *)0x0)
  {
    pSVar1 = StringLiteral_Item_not_added_to_inventory;
    if (returnCode == 0) {
      pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Successfully_added_model_to_your,pSVar1,(MethodInfo *)0x0);
    }
    pUVar2 = (this->fields).OnAddWorldObjectToInventoryCallbackDev;
    if (pUVar2 == (UnityAction_1_System_String_ *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarRepositoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((outData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                         ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)outData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                         ),
     pDVar1 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDStack_3 = (pDVar1->fields)._dictionary;
  ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  if (pDStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_7 = pDStack_3;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_11 = (pDStack_3->fields)._version;
  uStack_5 = 0;
  uStack_12 = 0;
  plStack_13 = (longlong *)0x0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_4 = &pDStack_3;
  do {
    if (pDStack_3 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_11 != (pDStack_3->fields)._version) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (pDStack_3 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto code_?;
      if ((uint)(pDStack_3->fields)._count <= uStack_12) {
        return;
      }
      pDVar14 = (pDStack_3->fields)._entries;
      lVar15 = (longlong)(int)uStack_12;
      uVar6 = uStack_12 + 1;
      if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)0x0) goto code_?;
      if ((uint)pDVar14->max_length <= uStack_12) {
        uStack_12 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_12 = uVar6;
    } while ((&pDVar14->vector[0].hashCode)[lVar15 * 6] < 0);
    plStack_13 = *(longlong **)((longlong)&pDVar14->vector[0].key + lVar15 * 0x18);
    func_?();
    if (plStack_13 == (longlong *)0x0) {
code_?:
      FUN_?();
      uVar6 = uStack_12;
code_?:
      uStack_12 = uVar6;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    if (*(longlong *)(*plStack_13 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar15 = plStack_13[2];
    this_03 = (AvatarRepositoryItem *)FUN_?(TypeInfo__AvatarRepositoryItem);
    uVar16 = 0;
    AvatarRepositoryItem::AvatarRepositoryItem__ctor
              (this_03,outData,(int32_t)lVar15,(MethodInfo *)0x0);
    pAVar17 = (this->fields)._AvatarShopRepository_k__BackingField;
    if (pAVar17 == (AvatarRepository *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Add_int__AvatarRepositoryItem_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__ContainsKey_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Avatar_with_slotPosition__);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__already_exists_in_AvatarReposit);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pAVar17->fields).avatars;
    if (this_03 == (AvatarRepositoryItem *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_01,(this_03->fields).slotPosition,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    this_00 = &(this_03->fields).slotPosition;
    if (iVar18 < 0) {
      this_02 = (pAVar17->fields).avatars;
      if (this_02 == (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_02,*this_00,(Object *)this_03,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar16 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__Add_int__AvatarRepositoryItem_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      pSVar19 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
      pSVar19 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Avatar_with_slotPosition__,pSVar19,
                          StringLiteral__already_exists_in_AvatarReposit,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar19,(MethodInfo *)0x0);
    }
  } while( true );
}


/* Void OnCloneTempWorldObjectWithOriginalReferenceEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::
     MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OriginalId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((eventData != (EventData *)0x0) &&
     (pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (eventData,0x4b,(MethodInfo *)0x0), pIVar2 = TypeInfo__System__Int32,
     pOVar1 != (Object *)0x0)) {
    lVar3 = FUN_?(pOVar1,TypeInfo__System__Int32);
    pIVar4 = TypeInfo__System__Int32;
    if (lVar3 == 0) {
      FUN_?(pOVar1,pIVar2);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = FUN_?(pOVar1,TypeInfo__System__Int32);
    if (lVar3 == 0) {
      FUN_?(pOVar1,pIVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    id = *(int32_t *)(lVar3 + 0x20);
    if ((((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
        (this_00 = (MVWorldObjectClientManager *)
                   (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
        this_00 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_00,id,(MethodInfo *)0x0), pMVar6 != (MVWorldObjectClient *)0x0))
    {
      pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                (*(pMVar6->klass->vtable).get_RunTimeData.methodPtr)
                          (pMVar6,(pMVar6->klass->vtable).get_RunTimeData.method);
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar8 = Extensions::Extensions_ContainsObscuredKey
                        (pDVar7,StringLiteral_OriginalId,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        uVar9 = (*(pMVar6->klass->vtable).get_RunTimeData.methodPtr)(pMVar6);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
        ObscuredInt_Encrypt(id,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        }
        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
        ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(uVar9,StringLiteral_OriginalId);
        MVNetworkGame_OnCloneWorldObjectTreePosition(this,eventData,(MethodInfo *)0x0);
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                  (*(pMVar6->klass->vtable).get_RunTimeData.methodPtr)(pMVar6);
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        value = StringLiteral_OriginalId;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__Extensions);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString
                  ::ObscuredString_op_Implicit(value,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        TypeInfo__Extensions->static_fields->obscuredString = pOVar10;
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
          puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar13 = *puVar12;
            LOCK();
            uVar14 = *puVar12;
            if (uVar13 == uVar14) {
              *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (uVar13 != uVar14);
        }
        if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  (pDVar7,(Object *)TypeInfo__Extensions->static_fields->obscuredString,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
      }
      else {
        MVNetworkGame_OnCloneWorldObjectTreePosition(this,eventData,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectClient OnCloneWorldObjectTree(EventData) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree
          (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CloneToRootGroup_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (eventData != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x4b,(MethodInfo *)0x0);
    pIVar2 = TypeInfo__System__Int32;
    if (pOVar1 == (Object *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_?(pOVar1,TypeInfo__System__Int32);
      if (lVar3 == 0) {
        FUN_?(pOVar1,pIVar2);
        pcVar4 = (code *)swi(3);
        pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
        return pMVar5;
      }
    }
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x15,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar4 = (code *)swi(3);
        pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
        return pMVar5;
      }
      ownerActorNumber = *(int32_t *)&pOVar1[1].klass;
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (eventData,0x3d,(MethodInfo *)0x0);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar1,lRam_?);
          pcVar4 = (code *)swi(3);
          pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
          return pMVar5;
        }
        cloneLinkId = *(int32_t *)&pOVar1[1].klass;
        pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (eventData,0x5f,(MethodInfo *)0x0);
        if (pOVar1 != (Object *)0x0) {
          if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar1,lRam_?);
            pcVar4 = (code *)swi(3);
            pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
            return pMVar5;
          }
          cloneObjectLinkId = *(int32_t *)&pOVar1[1].klass;
          pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                             (eventData,0x68,(MethodInfo *)0x0);
          if (pOVar1 != (Object *)0x0) {
            if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar1,lRam_?);
              pcVar4 = (code *)swi(3);
              pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
              return pMVar5;
            }
            cloneToRootGroup = *(bool *)&pOVar1[1].klass;
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_False);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_True);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar6 = StringLiteral_False;
            if (cloneToRootGroup != 0) {
              pSVar6 = StringLiteral_True;
            }
            pSVar6 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_CloneToRootGroup_,pSVar6,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar6,(MethodInfo *)0x0);
            pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (eventData,0x83,(MethodInfo *)0x0);
            if (pOVar1 != (Object *)0x0) {
              if ((pOVar1->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar1,lRam_?);
                pcVar4 = (code *)swi(3);
                pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
                return pMVar5;
              }
              this_00 = (this->fields).worldNetwork;
              if (lVar3 != 0) {
                if ((*(int *)(lVar3 + 0x18) == 0) || (*(uint *)(lVar3 + 0x18) < 2)) {
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
                  return pMVar5;
                }
                if (this_00 != (WorldNetwork *)0x0) {
                  pMVar5 = WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                                     (this_00,ownerActorNumber,*(int32_t *)&pOVar1[1].klass,
                                      cloneToRootGroup,*(int32_t *)(lVar3 + 0x20),
                                      *(int32_t *)(lVar3 + 0x24),cloneLinkId,cloneObjectLinkId,
                                      (MethodInfo *)0x0);
                  return pMVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar5;
}


/* MVWorldObjectClient OnCloneWorldObjectTreePosition(EventData) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
          (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  pMVar1 = MVNetworkGame_OnCloneWorldObjectTree(this,eventData,(MethodInfo *)0x0);
  if (eventData != (EventData *)0x0) {
    pVVar2 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                       ((Vector3 *)&QStack_3,(eventData->fields).Parameters,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      uStack_4._0_4_ = pVVar2->x;
      uStack_4._4_4_ = pVVar2->y;
      fStack_5 = pVVar2->z;
      (*(pMVar1->klass->vtable).set_Position.methodPtr)(pMVar1,&uStack_4);
      pQVar6 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                         (&QStack_3,(eventData->fields).Parameters,(MethodInfo *)0x0);
      QStack_3.x = pQVar6->x;
      QStack_3.y = pQVar6->y;
      QStack_3.z = pQVar6->z;
      QStack_3.w = pQVar6->w;
      (*(pMVar1->klass->vtable).set_Rotation.methodPtr)
                (pMVar1,&QStack_3,(pMVar1->klass->vtable).set_Rotation.method);
      return pMVar1;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar7)();
  return pMVar1;
}


/* Void OnCollectiblePickedUp(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCollectible);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_call_WO_that_is_not_c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (photonEvent != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xfe,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar3 = *(undefined4 *)&pOVar1[1].klass;
      pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x17,(MethodInfo *)0x0);
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
           (this_00 = (MVWorldObjectClientManager *)
                      (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
           this_00 != (MVWorldObjectClientManager *)0x0)) {
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_00,*(int32_t *)&pOVar1[1].klass,(MethodInfo *)0x0);
          if (pMVar4 != (MVWorldObjectClient *)0x0) {
            pMVar5 = pMVar4->klass;
            bVar6 = (TypeInfo__MVCollectible->_1).naturalAligment;
            if ((bVar6 <= (pMVar5->_1).naturalAligment) &&
               ((MVCollectible__Class *)(pMVar5->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
                TypeInfo__MVCollectible)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)pMVar5[1]._0.interopData)(pMVar4,uVar3,pMVar5[1]._0.klass);
              return;
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar7 = StringLiteral_Attempt_to_call_WO_that_is_not_c;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar8 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,0,pSVar7);
            return;
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  this_00 = (this->fields).eventHandling;
  if (this_00 == (MVNetworkGame_EventHandling *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__JoinUIUpdater,eventData,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this_00->fields).cacheEvents == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 != (MVGameControllerBase *)0x0) && (eventData != (EventData *)0x0)) {
      if ((pMVar2->fields)._joinState != 3) {
        uVar3 = (eventData->fields).Code;
        if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__JoinUIUpdater);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Enqueue_MV__Common__MVEventCodes_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (uVar3 != 0x4a) {
          if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent != 0x3f) || (uVar3 == 0x40))
          {
            if (*(int *)&(TypeInfo__JoinUIUpdater->_1).field_0x1c == 0) {
              FUN_?();
            }
            pQVar4 = TypeInfo__JoinUIUpdater->static_fields->JoinEventCodes;
            if (pQVar4 != (Queue_1_MV_Common_MVEventCodes_ *)0x0) {
              pMVar5 = (pQVar4->fields)._array;
              if (pMVar5 != (MVEventCodes__Enum__Array *)0x0) {
                if ((pQVar4->fields)._size == (int)pMVar5->max_length) {
                  iVar6 = (int)pMVar5->max_length * 2;
                  if (iVar6 < (int)pMVar5->max_length + 4) {
                    iVar6 = (int)pMVar5->max_length + 4;
                  }
                  FUN_?(pQVar4,iVar6,
                                MethodInfo__System__Collections__Generic__Queue<MV::Common::MVEventCodes>__Enqueue_MV__Common__MVEventCodes_
                                ->klass->rgctx_data[5].rgctxDataDummy);
                }
                pMVar5 = (pQVar4->fields)._array;
                uVar7 = (pQVar4->fields)._tail;
                if (pMVar5 != (MVEventCodes__Enum__Array *)0x0) {
                  if ((uint)pMVar5->max_length <= uVar7) {
                    FUN_?();
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  *(uint8_t *)((longlong)pMVar5->vector + (longlong)(int)uVar7) = uVar3;
                  iVar6 = (pQVar4->fields)._tail + 1;
                  pMVar5 = (pQVar4->fields)._array;
                  if (pMVar5 != (MVEventCodes__Enum__Array *)0x0) {
                    iVar8 = 0;
                    if (iVar6 != (int)pMVar5->max_length) {
                      iVar8 = iVar6;
                    }
                    (pQVar4->fields)._tail = iVar8;
                    piVar9 = &(pQVar4->fields)._size;
                    *piVar9 = *piVar9 + 1;
                    piVar9 = &(pQVar4->fields)._version;
                    *piVar9 = *piVar9 + 1;
                    TypeInfo__JoinUIUpdater->static_fields->latestJoinEvent = uVar3;
                    goto code_?;
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
code_?:
      MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
                (this_00,(uint)(eventData->fields).Code,eventData,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pQVar10 = (this_00->fields).cachedEvents;
    if (pQVar10 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
      pEVar11 = (pQVar10->fields)._array;
      if (pEVar11 != (EventData__Array *)0x0) {
        if ((pQVar10->fields)._size == (int)pEVar11->max_length) {
          pEVar11 = (pQVar10->fields)._array;
          iVar6 = (int)pEVar11->max_length * 2;
          if (iVar6 < (int)pEVar11->max_length + 4) {
            iVar6 = (int)pEVar11->max_length + 4;
          }
          FUN_?(pQVar10,iVar6,
                        MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                        ->klass->rgctx_data[5].rgctxDataDummy);
        }
        pEVar11 = (pQVar10->fields)._array;
        if (pEVar11 != (EventData__Array *)0x0) {
          FUN_?(pEVar11,(longlong)(pQVar10->fields)._tail,eventData);
          pEVar11 = (pQVar10->fields)._array;
          if (pEVar11 != (EventData__Array *)0x0) {
            iVar6 = (pQVar10->fields)._tail + 1;
            iVar8 = 0;
            if (iVar6 != (int)pEVar11->max_length) {
              iVar8 = iVar6;
            }
            (pQVar10->fields)._tail = iVar8;
            piVar9 = &(pQVar10->fields)._size;
            *piVar9 = *piVar9 + 1;
            piVar9 = &(pQVar10->fields)._version;
            *piVar9 = *piVar9 + 1;
            return;
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnFriendUpdateEvent(Int32, Int32, FriendStatus) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
               (MVNetworkGame *this,int32_t friendID,int32_t profileID,FriendStatus__Enum status,
               MethodInfo *method)

{
  pcVar1 = (code *)(ulonglong)(uint)status;
  this_01 = (this->fields)._Friends_k__BackingField;
  if (this_01 == (FriendList *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  aiStackX_18[0] = profileID;
  FStackX_20 = status;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tried_updating_friend_that_doesn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Accepted_friend_request_from__0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_2 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  uStack_3 = 0;
  iStack_4 = 0;
  pMStack_5 = (MVPlayer *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
      (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) &&
     (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
     pMVar9 != (MVLocalPlayer *)0x0)) {
    if (profileID == (pMVar9->fields)._._ProfileID_k__BackingField) {
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this_01->fields).friends;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (this_00,friendID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (iVar10 < 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Tried_updating_friend_that_doesn,(MethodInfo *)0x0);
code_?:
          if ((this_01->fields).OnFriendListUpdated != (FriendList_OnFriendListUpdatedDelegate *)0x0
             ) {
            pFVar11 = (this_01->fields).OnFriendListUpdated;
            (*(pFVar11->fields)._._.invoke_impl)
                      ((pFVar11->fields)._._.method_code,(pFVar11->fields)._._.method);
          }
          return;
        }
        if (status == FriendStatus__Enum_Deleted) {
          pDVar12 = (this_01->fields).friends;
          if (pDVar12 != (Dictionary_2_System_Int32_Friend_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,friendID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__Remove_int_
                      );
            goto code_?;
          }
        }
        else {
          if ((this_01->fields).OnFriendRequestAccepted != (FriendList_OnFriendRequestUpdated *)0x0)
          {
            pFVar13 = (this_01->fields).OnFriendRequestAccepted;
            pDVar12 = (this_01->fields).friends;
            if (pDVar12 == (Dictionary_2_System_Int32_Friend_ *)0x0) goto code_?;
            pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,friendID,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                );
            pcVar1 = (pFVar13->fields)._._.invoke_impl;
            (*pcVar1)((pFVar13->fields)._._.method_code,pOVar14,(pFVar13->fields)._._.method);
          }
          pDVar12 = (this_01->fields).friends;
          if ((pDVar12 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
             (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ), pOVar14 != (Object *)0x0)) {
            *(FriendStatus__Enum *)&pOVar14[1].monitor = status;
            this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,10);
            pOVar14 = (Object *)FUN_?(uRam_?,aiStackX_18);
            pDVar12 = (this_01->fields).friends;
            if ((pDVar12 != (Dictionary_2_System_Int32_Friend_ *)0x0) &&
               (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,friendID,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Item_int_
                                  ),
               this_02 !=
               (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar14,value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pcVar1 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__NotificationsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0)
              {
                if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                  FUN_?();
                }
                NotificationController::NotificationController_FriendRequestAccepted
                          ((Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
        }
      }
    }
    else {
      FriendList::FriendList_RemoveFromPendingByProfileID(this_01,profileID,(MethodInfo *)0x0);
      if (status == FriendStatus__Enum_Deleted) goto code_?;
      if ((this_01->fields).OnPendingCountChanged != (UnityAction_1_System_Int32_ *)0x0) {
        pUVar15 = (this_01->fields).OnPendingCountChanged;
        pDVar16 = FriendList::FriendList_GetOnlineFriends(this_01,(MethodInfo *)0x0);
        if (pDVar16 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        (*(pUVar15->fields)._._.invoke_impl)
                  ((pUVar15->fields)._._.method_code,
                   (pDVar16->fields)._count - (pDVar16->fields)._freeCount,
                   (pUVar15->fields)._._.method);
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar7 != (MVNetworkGame *)0x0) &&
          (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) &&
         (pDVar17 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar8,(MethodInfo *)0x0)
         , pDVar17 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
        pDVar16 = (pDVar17->fields)._dictionary;
        ppDStack_18 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
        uStack_19 = 0;
        if (iRam_? != 0) {
          uVar20 = (uint)((ulonglong)&pDStack_21 >> 0xc);
          puVar22 = (ulonglong *)((ulonglong)((uVar20 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar23 = *puVar22;
            LOCK();
            uVar24 = *puVar22;
            if (uVar23 == uVar24) {
              *puVar22 = uVar23 | 1L << (uVar20 & 0x3f);
            }
            UNLOCK();
          } while (uVar23 != uVar24);
        }
        if (pDVar16 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pDStack_21 = pDVar16;
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_4 = (pDVar16->fields)._version;
        uStack_19 = 0;
        uStack_3 = 0;
        pMStack_5 = (MVPlayer *)0x0;
        pDStack_21 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
        ppDStack_18 = &pDStack_2;
        pDStack_2 = pDVar16;
        do {
          if (pDStack_2 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          if (iStack_4 != (pDStack_2->fields)._version) goto code_?;
          do {
            if (pDStack_2 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
            if ((uint)(pDStack_2->fields)._count <= uStack_3) {
              uStack_3 = (pDStack_2->fields)._count + 1;
              pMStack_5 = (MVPlayer *)0x0;
              goto code_?;
            }
            pDVar25 = (pDStack_2->fields)._entries;
            lVar26 = (longlong)(int)uStack_3;
            uVar20 = uStack_3 + 1;
            if (pDVar25 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
            goto code_?;
            bVar27 = (uint)pDVar25->max_length <= uStack_3;
            uStack_3 = uVar20;
            if (bVar27) goto code_?;
          } while (pDVar25->vector[lVar26].hashCode < 0);
          pMStack_5 = pDVar25->vector[lVar26].value;
          func_?();
          pMVar28 = pMStack_5;
          if (pMStack_5 == (MVPlayer *)0x0) goto code_?;
        } while (profileID != (pMStack_5->fields)._ProfileID_k__BackingField);
        if (pMStack_5 != (MVPlayer *)0x0) {
          pSVar29 = TM::TM__(StringLiteral_Accepted_friend_request_from__0_,(MethodInfo *)0x0);
          pUVar30 = (pMVar28->fields)._UserProfileData_k__BackingField;
          if (pUVar30 == (UserProfileData *)0x0) goto code_?;
          pSVar29 = mscorlib.dll::System::String::String_Format
                              (pSVar29,(Object *)(pUVar30->fields).UserName,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          NotificationController::NotificationController_PushNotification
                    (pSVar29,(Sprite *)0x0,3,(MethodInfo *)0x0);
        }
code_?:
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar7 != (MVNetworkGame *)0x0) &&
            (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) &&
           (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0)
           , pMVar9 != (MVLocalPlayer *)0x0)) {
          FriendList::FriendList_AddFriend
                    (this_01,friendID,(pMVar9->fields)._._ProfileID_k__BackingField,profileID,
                     status,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar20 = uStack_3;
code_?:
  uStack_3 = uVar20;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnGameCreated(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGameCreated
               (MVNetworkGame *this,Object *sender,
               InitializedGameQueryDataEventArgs *initializedGameQueryDataEventArgs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVNetworkGame__EventHandling__UncacheEventsFromJoin__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    pEVar2 = (pWVar1->fields)._.InitializedGameQueryData;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVNetworkGame__OnGameCreated_System__Object__InitializedGameQueryDataEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pEVar4 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    if (pDVar3 == (Delegate *)0x0) {
      (pWVar1->fields)._.InitializedGameQueryData =
           (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
    }
    else {
      pEVar2 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
               FUN_?(pDVar3,
                             TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      if (pEVar2 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        FUN_?(pDVar3,pEVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pWVar1->fields)._.InitializedGameQueryData = pEVar2;
      pEVar4 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      lVar6 = FUN_?(pDVar3,
                             TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      if (lVar6 == 0) {
        FUN_?(pDVar3,pEVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pWVar1->fields)._.InitializedGameQueryData >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    object = (this->fields).eventHandling;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)object,
               MethodInfo__MVNetworkGame__EventHandling__UncacheEventsFromJoin__,(MethodInfo *)0x0);
    pIVar11 = WaitForFrames::WaitForFrames_WithCallback(1,(UnityAction *)this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    obj = TypeInfo__Coroutines->static_fields->instance;
    if (obj != (Coroutines *)0x0) {
      if (pIVar11 == (IEnumerator *)0x0) {
        uVar12 = func_?(&TypeInfo__System__NullReferenceException);
        this_02 = (NullReferenceException *)func_?(uVar12);
        pSVar13 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_02,pSVar13,(MethodInfo *)0x0);
        uVar12 = func_?(&
                                     MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                    );
        FUN_?(this_02,uVar12);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar14 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
      if (bVar14 == 0) {
        uVar12 = func_?(&TypeInfo__System__ArgumentException);
        this_03 = (InvalidEnumArgumentException *)func_?(uVar12);
        pSVar13 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_03,pSVar13,(MethodInfo *)0x0);
        uVar12 = func_?(&
                                     MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                    );
        FUN_?(this_03,uVar12);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Coroutines *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar15 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar15,pIVar11);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnGameQueryReady(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGameQueryReady
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if ((eventData == (EventData *)0x0) ||
     (pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (eventData,0x66,(MethodInfo *)0x0), pOVar1 == (Object *)0x0)) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar1,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (this->fields).gameDataQueryManager;
  iVar4 = *(int32_t *)&pOVar1[1].klass;
  if (pMVar3 == (MVNetworkGame_GameDataQueryManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pMVar3->fields).gameDataQueries;
  if (this_00 == (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)0x0)
  goto code_?;
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar4,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                     );
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar1 == (Object *)0x0) goto code_?;
  cVar5 = *(char *)((longlong)&pOVar1[1].monitor + 4);
  if (cVar5 == '\x01') {
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar6->fields).ReceivedItemFromQuery ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      return;
    }
    if (pOVar1[1].klass == (Object__Class *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              ((BytePacker *)pOVar1[1].klass,0,(MethodInfo *)0x0);
    pOVar7 = pOVar1[1].klass;
    iVar4 = *(int32_t *)&pOVar1[1].monitor;
    this_03 = (ReceivedItemFromQueryEventArgs *)
              FUN_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_03,(BytePacker *)pOVar7,iVar4,(MethodInfo *)0x0);
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    pEVar8 = (pMVar6->fields).ReceivedItemFromQuery;
  }
  else {
    if (cVar5 == '\x02') {
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar6 != (MVNetworkGame *)0x0) {
        this_01 = (pMVar6->fields).worldNetwork;
        if (pOVar1[1].klass != (Object__Class *)0x0) {
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                    ((BytePacker *)pOVar1[1].klass,0,(MethodInfo *)0x0);
          iVar4 = *(int32_t *)&pOVar1[1].monitor;
          if (this_01 != (WorldNetwork *)0x0) {
            pOVar7 = pOVar1[1].klass;
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
                           ((BytePacker *)pOVar7,
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
              WorldNetwork::WorldNetwork_CreateQueryEvent(this_01,root,iVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (cVar5 == '\x03') {
      if (pOVar1[1].klass != (Object__Class *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
                  ((BytePacker *)pOVar1[1].klass,0,(MethodInfo *)0x0);
        pOVar7 = pOVar1[1].klass;
        if (pOVar7 != (Object__Class *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__)
            ;
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pcVar9 = (pOVar7->_0).name;
          if (pcVar9 != (char *)0x0) {
            uVar10 = FUN_?(pcVar9,
                                   MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                  );
            pEVar11 = mscorlib.dll::System::Text::Encoding::Encoding_get_ASCII((MethodInfo *)0x0);
            if (pEVar11 != (Encoding *)0x0) {
              uVar10 = (*(pEVar11->klass->vtable).GetString.methodPtr)
                                 (pEVar11,uVar10,(pEVar11->klass->vtable).GetString.method);
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar6 != (MVNetworkGame *)0x0) &&
                 (pAVar12 = (pMVar6->fields).ReceivedAccessoryData, pAVar12 != (Action_1_String_ *)0x0
                 )) {
                (*(pAVar12->fields)._._.invoke_impl)
                          ((pAVar12->fields)._._.method_code,uVar10,(pAVar12->fields)._._.method);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (cVar5 != '\x04') {
      return;
    }
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar6->fields).ReceivedAvatarBodiesFromQuery ==
        (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
      return;
    }
    if (pOVar1[1].klass == (Object__Class *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_set_Position
              ((BytePacker *)pOVar1[1].klass,0,(MethodInfo *)0x0);
    pOVar7 = pOVar1[1].klass;
    iVar4 = *(int32_t *)&pOVar1[1].monitor;
    this_03 = (ReceivedItemFromQueryEventArgs *)
              FUN_?(TypeInfo__ReceivedItemFromQueryEventArgs);
    ReceivedItemFromQueryEventArgs::ReceivedItemFromQueryEventArgs__ctor
              (this_03,(BytePacker *)pOVar7,iVar4,(MethodInfo *)0x0);
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    pEVar8 = (pMVar6->fields).ReceivedAvatarBodiesFromQuery;
  }
  if (pEVar8 != (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
    (*(pEVar8->fields)._._.invoke_impl)
              ((pEVar8->fields)._._.method_code,pMVar3,this_03,(pEVar8->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,woid,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void OnGetBuiltInItemBusinessData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
               (MVNetworkGame *this,
               Dictionary_2_System_Object_System_Object_ *builtInItemBusinessData,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (builtInItemBusinessData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
    lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pMVar8 = (MethodInfo *)0x0;
  uStack_9 = (ulonglong)(uint)(builtInItemBusinessData->fields)._version;
  uStack_10 = 2;
  uStack_11 = 0;
  uStack_12 = 0;
  DStack_13._version = (undefined4)uStack_9;
  DStack_13._index = uStack_9._4_4_;
  DStack_13._current.key = (Object *)0x0;
  DStack_13._current.value = (Object *)0x0;
  DStack_13._getEnumeratorRetType = 2;
  DStack_13._36_4_ = 0;
  pDStack_3 = builtInItemBusinessData;
  DStack_13._dictionary = builtInItemBusinessData;
  while( true ) {
    bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_13,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    pMVar15 = (MethodInfo *)DStack_13._current.value;
    pMVar16 = (MethodInfo *)DStack_13._current.key;
    if (bVar14 == 0) {
      return;
    }
    lVar4 = FUN_?(TypeInfo__MV__WorldObject__MVItem);
    if (lVar4 == 0) goto code_?;
    if (pMVar16 == (MethodInfo *)0x0) break;
    if (*(longlong *)((longlong)((Object *)pMVar16)->klass + 0x40) !=
        *(longlong *)(lRam_? + 0x40)) {
code_?:
      FUN_?(pMVar16);
      break;
    }
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)pMVar16 + 0x10);
    pMVar16 = pMVar8;
    if (pMVar15 != (MethodInfo *)0x0) {
      cVar17 = (code)(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
      if ((((byte)cVar17 <= (byte)*(code *)((longlong)((Object *)pMVar15)->klass + 0x130)) &&
          (*(Dictionary_2_System_Object_System_Object___Class **)
            (*(longlong *)((longlong)((Object *)pMVar15)->klass + 200) + -8 +
            (ulonglong)(byte)cVar17 * 8) ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
         (pMVar16 = pMVar15, pMVar15 != (MethodInfo *)0x0)) goto code_?;
code_?:
      FUN_?(pMVar15);
      pMVar16 = pMVar15;
      goto code_?;
    }
code_?:
    auStackX_10[0] = 0x74;
    pOVar18 = (Object *)FUN_?(uRam_?,auStackX_10);
    if (pMVar16 == (MethodInfo *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pMVar15 = (MethodInfo *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)pMVar16,pOVar18,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pMVar15 == (MethodInfo *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (*(longlong *)(pMVar15->methodPointer + 0x40) != *(longlong *)(lRam_? + 0x40)) {
code_?:
      FUN_?(pMVar15);
      goto code_?;
    }
    *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)&pMVar15->invoker_method;
    auStackX_10[0] = 0x11;
    pOVar18 = (Object *)FUN_?(uRam_?,auStackX_10);
    pMVar15 = (MethodInfo *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)pMVar16,pOVar18,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pMVar15 == (MethodInfo *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (*(longlong *)(pMVar15->methodPointer + 0x40) != *(longlong *)(lRam_? + 0x40)) {
code_?:
      FUN_?(pMVar15);
      goto code_?;
    }
    *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)&pMVar15->invoker_method;
    auStackX_10[0] = 0xc;
    pOVar18 = (Object *)FUN_?(uRam_?,auStackX_10);
    pMVar15 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    pMVar19 = (MethodInfo *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pMVar16,pOVar18,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pMVar19 != (MethodInfo *)0x0) {
      pMVar20 = pMVar8;
      if (pMVar19->methodPointer == pIRam0000000182dc2f60) {
        pMVar20 = pMVar19;
      }
      if (pMVar20 != (MethodInfo *)0x0) {
        *(MethodInfo **)(lVar4 + 0x28) = pMVar20;
        pMVar20 = pMVar8;
        if (pMVar19->methodPointer == pIRam0000000182dc2f60) {
          pMVar20 = pMVar19;
        }
        if (pMVar20 != (MethodInfo *)0x0) goto code_?;
        FUN_?();
code_?:
        pOVar18 = (Object *)FUN_?();
code_?:
        FUN_?(pOVar18,pMVar15);
        goto code_?;
      }
code_?:
      FUN_?();
      goto code_?;
    }
    *(undefined8 *)(lVar4 + 0x28) = 0;
code_?:
    if (iRam_? != 0) {
      uVar2 = (uint)(lVar4 + 0x28U >> 0xc);
      lVar21 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar21 + 0xADDR);
        puVar6 = (ulonglong *)(lVar21 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    auStackX_10[0] = 0x68;
    pOVar18 = (Object *)FUN_?(uRam_?,auStackX_10);
    pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)pMVar16,pOVar18,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pMVar15 = pMRam0000000182dc2ef8;
    if (pOVar18 == (Object *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if ((pOVar18->klass->_0).element_class !=
        (Il2CppClass *)(pMRam0000000182dc2ef8->field8_0x40).genericMethod)
    goto code_?;
    resellable = *(byte *)&pOVar18[1].klass;
    pMVar15 = (MethodInfo *)(ulonglong)resellable;
    *(byte *)(lVar4 + 0x41) = resellable;
    this_00 = (this->fields).itemBusinessLogic;
    if (this_00 == (MVItemBusinessLogic *)0x0) goto code_?;
    MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
              (this_00,*(int32_t *)(lVar4 + 0x10),resellable,*(int32_t *)(lVar4 + 0x14),
               *(int32_t *)(lVar4 + 0x18),*(String **)(lVar4 + 0x28),(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnGetGameBatch(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetGameBatch
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__QueryType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__eventData_Contains__byte_MVPara);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((eventData != (EventData *)0x0) &&
     (pDVar1 = (eventData->fields).Parameters,
     pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__FindEntry
                      (pDVar1,0xf5,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral__eventData_Contains__byte_MVPara,(MethodInfo *)0x0);
      return;
    }
    pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (eventData,0xfe,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = *(int32_t *)&pOVar3[1].klass;
      pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0xf5,(MethodInfo *)0x0);
      this_03 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
      pBVar5 = TypeInfo__System__Byte;
      if (pOVar3 == (Object *)0x0) {
        buffer = (Byte__Array *)0x0;
      }
      else {
        buffer = (Byte__Array *)FUN_?(pOVar3,TypeInfo__System__Byte);
        if (buffer == (Byte__Array *)0x0) {
          FUN_?(pOVar3,pBVar5);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (this_03,buffer,(MethodInfo *)0x0);
      pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (eventData,0x88,(MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class !=
            (TypeInfo__MV__Common__QueryType->_0).element_class) {
          FUN_?(pOVar3);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pDVar1 = (eventData->fields).Parameters;
        cVar6 = '\0';
        uVar7 = *(uint8_t *)&pOVar3[1].klass;
        key = -1;
        if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__FindEntry
                            (pDVar1,0x66,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                             ->klass->rgctx_data[0x21].method);
          if (-1 < iVar8) {
            pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (eventData,0x66,(MethodInfo *)0x0);
            if (pOVar3 == (Object *)0x0) goto code_?;
            if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar3,lRam_?);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            key = *(int32_t *)&pOVar3[1].klass;
          }
          pDVar1 = (eventData->fields).Parameters;
          if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__FindEntry
                              (pDVar1,0x67,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                               ->klass->rgctx_data[0x21].method);
            if (-1 < iVar8) {
              pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  (eventData,0x67,(MethodInfo *)0x0);
              if (pOVar3 == (Object *)0x0) goto code_?;
              if ((pOVar3->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar3,lRam_?);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              cVar6 = *(char *)&pOVar3[1].klass;
            }
            this_00 = (this->fields).gameDataQueryManager;
            if (this_00 != (MVNetworkGame_GameDataQueryManager *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              gameDataQuery =
                   (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
                   FUN_?(TypeInfo__MVNetworkGame_GameDataQueryManager__GameDataQuery);
              bVar9 = iRam_? != 0;
              (gameDataQuery->fields).bp = this_03;
              if (bVar9) {
                uVar10 = (uint)((ulonglong)&gameDataQuery->fields >> 0xc);
                puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar12 = *puVar11;
                  LOCK();
                  uVar13 = *puVar11;
                  if (uVar12 == uVar13) {
                    *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar12 != uVar13);
              }
              bVar9 = cRam_? == '\0';
              (gameDataQuery->fields).instigatorActorNumber = iVar2;
              (gameDataQuery->fields)._QueryType_k__BackingField = uVar7;
              if (bVar9) {
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
              this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                        (this_00->fields).gameDataQueries;
              if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
                iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Vector3]::
                        Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                  (this_01,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__ContainsKey_int_
                                   ->klass->rgctx_data[0x21].method);
                this_02 = (this_00->fields).gameDataQueries;
                if (this_02 !=
                    (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)
                    0x0) {
                  if (iVar2 < 0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                              ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,
                               (Object *)gameDataQuery,CONCAT31((int3)((uint)in_R9D >> 8),2),
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Add_int__MVNetworkGame_GameDataQueryManager__GameDataQuery_
                               ->klass->rgctx_data[0x22].method);
                  }
                  else {
                    this_04 = (MVNetworkGame_GameDataQueryManager_GameDataQuery *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)this_02,key,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__get_Item_int_
                                        );
                    if (this_04 == (MVNetworkGame_GameDataQueryManager_GameDataQuery *)0x0)
                    goto code_?;
                    MVNetworkGame+GameDataQueryManager+GameDataQuery::
                    MVNetworkGame_GameDataQueryManager_GameDataQuery_AddGameDataQuery
                              (this_04,gameDataQuery,(MethodInfo *)0x0);
                  }
                  if (cVar6 != '\0') {
                    return;
                  }
                  MVNetworkGame+GameDataQueryManager::
                  MVNetworkGame_GameDataQueryManager_OnGameQueryReady(this_00,key,(MethodInfo *)0x0)
                  ;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGetItemCategories(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetItemCategories
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ItemCategories);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnDBQueryResponse__outData_is_nu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_OnDBQueryResponse__outData_is_nu,(MethodInfo *)0x0);
    this_02 = (Object__Class *)
              FUN_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>)
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
              );
  }
  else {
    this_00 = (Object__Class *)
              FUN_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>)
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
              );
    this_02 = (Object__Class *)outData;
    pOStackX_20 = this_00;
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             TypeConverterRegistry+ConverterKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                       ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)outData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                       );
    if (pDVar1 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      uStack_2 = (pDVar1->fields)._dictionary;
      puStack_3 = (undefined4 *)0x0;
      uStack_4 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&uStack_2 >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          this_02 = (Object__Class *)(uVar7 | 1L << (uVar5 & 0x3f));
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = (ulonglong)this_02;
          }
          UNLOCK();
        } while (!bVar9);
      }
      if (uStack_2 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iStack_11 = (uStack_2->fields)._version;
      uStack_4 = 0;
      uStack_2._4_4_ = (undefined4)((ulonglong)uStack_2 >> 0x20);
      uStack_12 = (undefined4)uStack_2;
      uStack_13 = uStack_2._4_4_;
      uStack_14 = 0;
      apMStack_15[0] = (MethodInfo *)0x0;
      uStack_2 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      puStack_3 = &uStack_12;
      while (method = (MethodInfo *)CONCAT44(uStack_13,uStack_12), method != (MethodInfo *)0x0) {
        if (iStack_11 != *(int32_t *)((longlong)&method->return_type + 4))
        goto code_?;
        do {
          if (method == (MethodInfo *)0x0) goto code_?;
          if (*(uint *)&method->klass <= uStack_14) {
            uStack_14 = *(int *)&method->klass + 1;
            apMStack_15[0] = (MethodInfo *)0x0;
            this_01 = (ItemCategories *)FUN_?(TypeInfo__ItemCategories);
            ItemCategories::ItemCategories__ctor
                      (this_01,(Dictionary_2_System_String_System_Int32_ *)this_00,(MethodInfo *)0x0
                      );
            (this->fields)._ItemCategories_k__BackingField = this_01;
            if (iRam_? != 0) {
              uVar5 = (uint)((ulonglong)&(this->fields)._ItemCategories_k__BackingField >> 0xc);
              lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                LOCK();
                bVar9 = uVar7 == *puVar8;
                if (bVar9) {
                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            return;
          }
          pDVar16 = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                   method->name;
          lVar6 = (longlong)(int)uStack_14;
          uVar5 = uStack_14 + 1;
          if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0)
          goto code_?;
          bVar9 = (uint)pDVar16->max_length <= uStack_14;
          uStack_14 = uVar5;
          if (bVar9) goto code_?;
          this_02 = (Object__Class *)(lVar6 * 3);
        } while (pDVar16->vector[lVar6].hashCode < 0);
        apMStack_15[0] = (MethodInfo *)pDVar16->vector[lVar6].key;
        func_?(apMStack_15);
        unaff_RBX = apMStack_15[0];
        if (apMStack_15[0] == (MethodInfo *)0x0) goto code_?;
        pMVar17 = pMRam0000000182dc2f18;
        if ((((Dictionary_2_System_Object_System_Object___Class *)apMStack_15[0]->methodPointer)->_0
            ).element_class != (Il2CppClass *)(pMRam0000000182dc2f18->field8_0x40).genericMethod)
        goto code_?;
        auStackX_10[0] =
             *(undefined4 *)
              &((Dictionary_2_System_Object_System_Object___Fields *)&apMStack_15[0]->invoker_method
               )->_buckets;
        pOVar18 = (Object *)FUN_?(pMRam0000000182dc2f18,auStackX_10);
        pMVar17 = (MethodInfo *)outData;
        pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (outData,pOVar18,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (this_00 == (Object__Class *)0x0) goto code_?;
        method = pMRam0000000182dc2f18;
        if ((((Dictionary_2_System_Object_System_Object___Class *)unaff_RBX->methodPointer)->_0).
            element_class != (Il2CppClass *)(pMRam0000000182dc2f18->field8_0x40).genericMethod)
        goto code_?;
        key = (Object *)0x0;
        if (pOVar18 != (Object *)0x0) {
          if (pOVar18->klass == pORam0000000182dc2f60) {
            key = pOVar18;
          }
          this_02 = pORam0000000182dc2f60;
          if (key == (Object *)0x0) goto code_?;
        }
        this_02 = this_00;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
        Dictionary_2_System_Object_System_Int32__TryInsert
                  ((Dictionary_2_System_Object_System_Int32_ *)this_00,key,
                   *(int32_t *)
                    &((Dictionary_2_System_Object_System_Object___Fields *)
                     &unaff_RBX->invoker_method)->_buckets,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pDVar16 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                   ->klass->rgctx_data[0x22].method);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  pOVar18 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar18,this_02);
code_?:
  pMVar17 = unaff_RBX;
  FUN_?(unaff_RBX,method);
code_?:
  FUN_?();
code_?:
  FUN_?(unaff_RBX,pMVar17);
code_?:
  FUN_?();
  uVar5 = uStack_14;
code_?:
  uStack_14 = uVar5;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnGetPlanetOwnershipTypes(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnDBQueryResponse__outData_is_nu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_OnDBQueryResponse__outData_is_nu,(MethodInfo *)0x0);
  }
  else {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             TypeConverterRegistry+ConverterKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                       ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)outData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                       );
    if (pDVar1 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      uStack_2 = (pDVar1->fields)._dictionary;
      puStack_3 = (undefined4 *)0x0;
      uStack_4 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&uStack_2 >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      if (uStack_2 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iStack_10 = (uStack_2->fields)._version;
      uStack_4 = 0;
      uStack_2._4_4_ = (undefined4)((ulonglong)uStack_2 >> 0x20);
      uStack_11 = (undefined4)uStack_2;
      uStack_12 = uStack_2._4_4_;
      uStack_13 = 0;
      plStack_14 = (longlong *)0x0;
      uStack_2 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      puStack_3 = &uStack_11;
      while (lVar15 = CONCAT44(uStack_12,uStack_11), lVar15 != 0) {
        if (iStack_10 != *(int *)(lVar15 + 0x2c)) goto code_?;
        do {
          if (lVar15 == 0) goto code_?;
          if (*(uint *)(lVar15 + 0x20) <= uStack_13) {
            return;
          }
          in_R9 = *(Dictionary_2_System_Object_System_Object_ **)(lVar15 + 0x18);
          lVar16 = (longlong)(int)uStack_13;
          uVar5 = uStack_13 + 1;
          if (in_R9 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          bVar17 = *(uint *)&(in_R9->fields)._entries <= uStack_13;
          uStack_13 = uVar5;
          if (bVar17) goto code_?;
        } while ((&(in_R9->fields)._count)[lVar16 * 6] < 0);
        plStack_14 = *(longlong **)(&(in_R9->fields)._freeCount + lVar16 * 6);
        func_?();
        unaff_RBX = plStack_14;
        pPVar18 = (this->fields)._PlayerRepository_k__BackingField;
        if (pPVar18 == (PlayerRepository *)0x0) goto code_?;
        this_00 = (pPVar18->fields)._.PlanetOwnershipTypes;
        if (plStack_14 == (longlong *)0x0) goto code_?;
        pDVar19 = pDRam0000000182dc2f18;
        if (*(Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ **)
             (*plStack_14 + 0x40) != (pDRam0000000182dc2f18->fields)._values)
        goto code_?;
        auStackX_10[0] = (undefined4)plStack_14[2];
        key = (Object *)FUN_?(pDRam0000000182dc2f18,auStackX_10);
        pDVar19 = outData;
        pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (outData,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (this_00 == (Dictionary_2_System_Int32_System_String_ *)0x0) goto code_?;
        pDVar19 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          if (pDVar20->klass == pDRam0000000182dc2f60) {
            pDVar19 = pDVar20;
          }
          if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        in_R9 = pDRam0000000182dc2f18;
        if (*(Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ **)
             (*unaff_RBX + 0x40) != (pDRam0000000182dc2f18->fields)._values)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)unaff_RBX[2],
                   (Object *)pDVar19,
                   (InsertionBehavior__Enum)
                   CONCAT71((int7)((ulonglong)pDRam0000000182dc2f18 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                   ->klass->rgctx_data[0x22].method);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  pDVar20 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(unaff_RBX,in_R9);
code_?:
  FUN_?(pDVar20);
  pDVar19 = pDVar20;
code_?:
  FUN_?();
code_?:
  FUN_?(unaff_RBX,pDVar19);
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar5 = uStack_13;
code_?:
  uStack_13 = uVar5;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnInventoryChange(Dictionary`2[System.Object,System.Object], Int64) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnInventoryChange
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *inventory,
               int64_t inventoryVersion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_Received_inventory_change_event);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  PStack_1._args = (Object__Array *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Received_inventory_change_event,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    lVar2 = FUN_?();
    if (lVar2 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,inventory,inventoryVersion,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__InventoryItem);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_OnInventoryChanged___0_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Inventory_did_not_change);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (inventoryVersion == *(longlong *)(lVar2 + 0x10)) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Inventory_did_not_change,(MethodInfo *)0x0);
        return;
      }
      if (((*(PlayerInventoryRepository **)(lVar2 + 0x48) == (PlayerInventoryRepository *)0x0) ||
          (PlayerInventoryRepository::PlayerInventoryRepository_ClearAllCategories
                     (*(PlayerInventoryRepository **)(lVar2 + 0x48),(MethodInfo *)0x0),
          inventory == (Dictionary_2_System_Object_System_Object_ *)0x0)) ||
         (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                             ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)inventory,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                             ),
         pDVar3 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      OStack_5.klass = (Object__Class *)(pDVar3->fields)._dictionary;
      PStack_6._arg1 = (Object *)0x0;
      PStack_6._arg2 = (Object *)0x0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&PStack_6 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      if (OStack_5.klass == (Object__Class *)0x0) {
        PStack_6._arg0 = (Object *)OStack_5.klass;
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      OStack_5.monitor._4_4_ =
           *(int *)&(((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                       *)OStack_5.klass)->_0).byval_arg.field_0xc;
      PStack_6._arg2 = (Object *)0x0;
      OStack_5.monitor._0_4_ = 0;
      plStack_11 = (longlong *)0x0;
      PStack_6._arg0 = (Object *)0x0;
      PStack_6._arg1 = &OStack_5;
code_?:
      pSVar12 = StringLiteral_OnInventoryChanged___0_;
      if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
           *)OStack_5.klass !=
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
           *)0x0) {
        if (OStack_5.monitor._4_4_ == *(int *)&((OStack_5.klass)->_0).byval_arg.field_0xc) {
          do {
            if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                 *)OStack_5.klass ==
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                 *)0x0) goto code_?;
            if ((uint)((OStack_5.klass)->_0).byval_arg.data.__klassIndex <= (uint)OStack_5.monitor
               ) {
              OStack_5.monitor =
                   (MonitorData *)
                   CONCAT44(OStack_5.monitor._4_4_,
                            ((OStack_5.klass)->_0).byval_arg.data.__klassIndex + 1);
              plStack_11 = (longlong *)0x0;
              PStack_6._arg0 = (Object *)0x0;
              PStack_6._arg1 = (Object *)0x0;
              PStack_6._arg2 = (Object *)0x0;
              PStack_6._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                        (&PStack_6,*(Object **)(lVar2 + 0x20),(MethodInfo *)0x0);
              PStack_1._arg0 = PStack_6._arg0;
              PStack_1._arg1 = PStack_6._arg1;
              PStack_1._arg2 = PStack_6._arg2;
              PStack_1._args = PStack_6._args;
              pSVar12 = mscorlib.dll::System::String::String_FormatHelper
                                  ((IFormatProvider *)0x0,pSVar12,&PStack_1,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar12,(MethodInfo *)0x0);
              lVar2 = *(longlong *)(lVar2 + 0x20);
              if (lVar2 == 0) {
                return;
              }
              (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
              return;
            }
            pcVar13 = ((OStack_5.klass)->_0).namespaze;
            lVar14 = (longlong)(int)(uint)OStack_5.monitor;
            uVar7 = (uint)OStack_5.monitor + 1;
            if (pcVar13 == (char *)0x0) goto code_?;
            if (*(uint *)(pcVar13 + 0x18) <= (uint)OStack_5.monitor) {
              pDVar15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                         *)OStack_5.klass;
              OStack_5.monitor._0_4_ = uVar7;
              FUN_?();
              goto code_?;
            }
            OStack_5.monitor._0_4_ = uVar7;
          } while (*(int *)(pcVar13 + lVar14 * 0x18 + 0x20) < 0);
          plStack_11 = *(longlong **)(pcVar13 + lVar14 * 0x18 + 0x28);
          uVar16 = func_?(&plStack_11);
          if (plStack_11 != (longlong *)0x0) {
            pDVar15 = pDRam0000000182dc2f18;
            if (*(Il2CppClass **)(*plStack_11 + 0x40) == (pDRam0000000182dc2f18->_0).element_class)
            {
              itemID = (int32_t)plStack_11[2];
              aiStackX_18[0] = itemID;
              pOVar17 = (Object *)FUN_?(pDRam0000000182dc2f18,aiStackX_18);
              pDVar18 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                         *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (inventory,pOVar17,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
              itemData = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                          *)0x0;
              if (pDVar18 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                   *)0x0) {
code_?:
                this_00 = (InventoryItem *)FUN_?(TypeInfo__InventoryItem);
                pDVar15 = itemData;
                InventoryItem::InventoryItem__ctor_2
                          (this_00,itemID,(Dictionary_2_System_Object_System_Object_ *)itemData,
                           (MethodInfo *)0x0);
                if (this_00 != (InventoryItem *)0x0) goto code_?;
                goto code_?;
              }
              pDVar15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                         *)(pDVar18->_0).image;
              bVar19 = (
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).naturalAligment;
              if ((bVar19 <= (pDVar15->_1).naturalAligment) &&
                 (itemData = pDVar18,
                 (Dictionary_2_System_Object_System_Object___Class *)
                 (pDVar15->_1).typeHierarchy[(ulonglong)bVar19 - 1] ==
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                 ) goto code_?;
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  PStack_1._args = (Object__Array *)&UNK_?;
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  if ((this_00->fields).isDeleted == 0) {
    aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0x18);
    pOVar17 = (Object *)FUN_?(uRam_?,aiStackX_18);
    if (itemData !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
         *)0x0) {
      pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)itemData,pOVar17,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pDVar15 = pDRam0000000182dc2f18;
      if (pOVar17 != (Object *)0x0) {
        if ((pOVar17->klass->_0).element_class == (pDRam0000000182dc2f18->_0).element_class) {
          (this_00->fields).slotPosition = *(int32_t *)&pOVar17[1].klass;
          if (*(PlayerInventoryRepository **)(lVar2 + 0x48) != (PlayerInventoryRepository *)0x0) {
            pDVar15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                       *)0x0;
            PlayerInventoryRepository::PlayerInventoryRepository_AddItem
                      (*(PlayerInventoryRepository **)(lVar2 + 0x48),this_00,(MethodInfo *)0x0);
            pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar20 != (MVNetworkGame *)0x0) {
              pMVar21 = (pMVar20->fields).itemBusinessLogic;
              if (pMVar21 != (MVItemBusinessLogic *)0x0) {
                pDVar15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                           *)0x0;
                pMVar22 = MVItemBusinessLogic::MVItemBusinessLogic_GetItem
                                    (pMVar21,itemID,(MethodInfo *)0x0);
                if (pMVar22 != (MVItem *)0x0) goto code_?;
                pMVar20 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar20 != (MVNetworkGame *)0x0) {
                  pMVar21 = (pMVar20->fields).itemBusinessLogic;
                  if (pMVar21 != (MVItemBusinessLogic *)0x0) {
                    MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                              (pMVar21,itemID,(this_00->fields).resellable,
                               (this_00->fields).itemCategoryID,(this_00->fields).itemTypeID,
                               (this_00->fields).name,(MethodInfo *)0x0);
                    goto code_?;
                  }
code_?:
                  FUN_?();
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          pOVar17 = (Object *)FUN_?();
        }
        FUN_?(pOVar17,pDVar15);
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar16 = FUN_?();
code_?:
    FUN_?(uVar16,pDVar15);
code_?:
    FUN_?();
    uVar7 = (uint)OStack_5.monitor;
code_?:
    OStack_5.monitor._0_4_ = uVar7;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
}


/* Void OnInventoryResultSetResponse(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    lVar1 = FUN_?();
    if (lVar1 == 0) {
      pPVar2 = (PlayerShopInventoryRepository *)
               FUN_?(
                            TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                            );
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository__ctor(pPVar2,(MethodInfo *)0x0);
      FUN_?();
    }
    if ((outData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                           ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)outData,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                           ),
       pDVar3 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      uStack_4 = (pDVar3->fields)._dictionary;
      puStack_5 = (undefined4 *)0x0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&uStack_4 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      if (uStack_4 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iStack_12 = (uStack_4->fields)._version;
      uStack_6 = 0;
      uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
      uStack_13 = (undefined4)uStack_4;
      uStack_14 = uStack_4._4_4_;
      uStack_15 = 0;
      aplStack_16[0] = (longlong *)0x0;
      uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      puStack_5 = &uStack_13;
      do {
        pOVar17 = (Object__Class *)CONCAT44(uStack_14,uStack_13);
        if (pOVar17 == (Object__Class *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (iStack_12 != *(int *)&(pOVar17->_0).byval_arg.field_0xc) {
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        do {
          if (pOVar17 == (Object__Class *)0x0) goto code_?;
          if ((uint)(pOVar17->_0).byval_arg.data.__klassIndex <= uStack_15) {
            return;
          }
          pcVar18 = (pOVar17->_0).namespaze;
          lVar1 = (longlong)(int)uStack_15;
          uVar7 = uStack_15 + 1;
          if (pcVar18 == (char *)0x0) goto code_?;
          if (*(uint *)(pcVar18 + 0x18) <= uStack_15) {
            uStack_15 = uVar7;
            FUN_?();
            goto code_?;
          }
          uStack_15 = uVar7;
        } while (*(int *)(pcVar18 + lVar1 * 0x18 + 0x20) < 0);
        aplStack_16[0] = *(longlong **)(pcVar18 + lVar1 * 0x18 + 0x28);
        uVar19 = func_?(aplStack_16);
        if (aplStack_16[0] == (longlong *)0x0) {
code_?:
          FUN_?();
          uVar7 = uStack_15;
code_?:
          uStack_15 = uVar7;
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        name = pORam0000000182dc2f18;
        if (*(Il2CppClass **)(*aplStack_16[0] + 0x40) != (pORam0000000182dc2f18->_0).element_class)
        {
code_?:
          FUN_?(uVar19,name);
          goto code_?;
        }
        itemID = (int32_t)aplStack_16[0][2];
        aiStackX_20[0] = itemID;
        pOVar20 = (Object *)FUN_?(pORam0000000182dc2f18,aiStackX_20);
        pOVar21 = (Object__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (outData,pOVar20,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pOVar17 = (Object__Class *)0x0;
        if (pOVar21 != (Object__Class *)0x0) {
          name = *(Object__Class **)&pOVar21->_0;
          bVar22 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if ((bVar22 <= (name->_1).naturalAligment) &&
             (pOVar17 = pOVar21,
             (Dictionary_2_System_Object_System_Object___Class *)
             (name->_1).typeHierarchy[(ulonglong)bVar22 - 1] ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
code_?:
          uVar19 = FUN_?();
          goto code_?;
        }
code_?:
        this_01 = (InventoryItem *)FUN_?(TypeInfo__InventoryItem);
        name = pOVar17;
        InventoryItem::InventoryItem__ctor_2
                  (this_01,itemID,(Dictionary_2_System_Object_System_Object_ *)pOVar17,
                   (MethodInfo *)0x0);
        if (this_01 == (InventoryItem *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        if ((this_01->fields).isDeleted == 0) {
          aiStackX_20[0] = CONCAT31(aiStackX_20[0]._1_3_,0x18);
          pOVar20 = (Object *)FUN_?(uRam_?,aiStackX_20);
          if (pOVar17 != (Object__Class *)0x0) {
            pOVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)pOVar17,pOVar20,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            name = pORam0000000182dc2f18;
            if (pOVar20 != (Object *)0x0) {
              if ((pOVar20->klass->_0).element_class == (pORam0000000182dc2f18->_0).element_class) {
                (this_01->fields).slotPosition = *(int32_t *)&pOVar20[1].klass;
                pOVar17 = (Object__Class *)FUN_?();
                if (pOVar17 != (Object__Class *)0x0) {
                  pPVar2 = (PlayerShopInventoryRepository *)FUN_?();
                  if (pPVar2 != (PlayerShopInventoryRepository *)0x0) {
                    UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                    PlayerShopInventoryRepository_AddItemToInventory
                              (pPVar2,this_01,(MethodInfo *)0x0);
                    goto code_?;
                  }
code_?:
                  FUN_?();
                  name = pOVar17;
                }
                pOVar20 = (Object *)FUN_?();
              }
              FUN_?(pOVar20,name);
            }
            FUN_?();
          }
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
code_?:
        this_00 = (this->fields).itemBusinessLogic;
        name = (Object__Class *)(this_01->fields).name;
        if (this_00 == (MVItemBusinessLogic *)0x0) goto code_?;
        MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                  (this_00,itemID,(this_01->fields).resellable,(this_01->fields).itemCategoryID,
                   (this_01->fields).itemTypeID,(String *)name,(MethodInfo *)0x0);
      } while( true );
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnJoinResponse(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnJoinResponse
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdConfigSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__ClientSettingFlags);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CreySettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CustomTouristPromotionSettings);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ElitePromotionSettings);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HackingToolDetector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__AntiCheat__AntiCheatData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::AntiCheat::AntiCheatData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::ApplicationDesc>__ToArray__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameCoinManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalPlayerTourist);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SessionLocatorPing);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xd5);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pDVar3 = pDVar2;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar1->klass == pDRam0000000182dc2f60) {
      pDVar3 = pDVar1;
    }
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?(pDVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pOVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                      ((String *)pDVar3,
                       MV__WorldObject__AntiCheat__AntiCheatData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::AntiCheat::AntiCheatData>_System__String_
                      );
  if (((pOVar5 == (Object *)0x0) || (pOVar5[1].klass == (Object__Class *)0x0)) ||
     (this_01 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)((pOVar5[1].klass)->_0).name,
     this_01 ==
     (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
      *)0x0)) goto code_?;
  banList = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
            RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
            List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                      (this_01,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::AntiCheat::ApplicationDesc>__ToArray__
                      );
  if (*(int *)&(TypeInfo__HackingToolDetector->_1).field_0x1c == 0) {
    FUN_?();
  }
  HackingToolDetector::HackingToolDetector_Initialize
            ((ApplicationDesc__Array *)banList,(MethodInfo *)0x0);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xb8);
  pDVar1 = pDVar2;
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar3->klass->_1).naturalAligment < bVar6) ||
       (pDVar1 = pDVar3,
       (Dictionary_2_System_Object_System_Object___Class *)
       (pDVar3->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PricesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = pDVar1;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)TypeInfo__PricesManager->static_fields >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  this_05 = (MVGameCoinManager *)FUN_?(TypeInfo__MVGameCoinManager);
  MVGameCoinManager::MVGameCoinManager__ctor(this_05,(MethodInfo *)0x0);
  bVar11 = iRam_? != 0;
  (this->fields)._GameCoinManager_k__BackingField = this_05;
  if (bVar11) {
    uVar7 = (uint)((ulonglong)&(this->fields)._GameCoinManager_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  plVar12 = (longlong *)FUN_?(returnValues,0xb7);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->fields)._MarketPlaceLevel_k__BackingField = (int32_t)plVar12[2];
  plVar12 = (longlong *)FUN_?(returnValues,0xba);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->fields)._PublishLevel_k__BackingField = (int32_t)plVar12[2];
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xb3);
  if (*(int *)&(TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDVar3 = pDVar2;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar1->klass == pDRam0000000182dc2f60) {
      pDVar3 = pDVar1;
    }
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?(pDVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar13 = MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Decrypt
                      ((String *)pDVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
            ObscuredString_op_Implicit(pSVar13,(MethodInfo *)0x0);
  bVar11 = iRam_? != 0;
  (this->fields)._XpKey_k__BackingField = pOVar14;
  if (bVar11) {
    uVar7 = (uint)((ulonglong)&(this->fields)._XpKey_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  obj = (IUpdatecontrollerSubscriberUpdate *)FUN_?(TypeInfo__SessionLocatorPing);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WaitForTicksLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_06 = (IUpdatecontrollerSubscriberUpdate__Class *)FUN_?(TypeInfo__WaitForTicksLocal);
  WaitForTicksLocal::WaitForTicksLocal__ctor((WaitForTicksLocal *)this_06,0,(MethodInfo *)0x0);
  bVar11 = iRam_? != 0;
  obj[1].klass = this_06;
  if (bVar11) {
    uVar7 = (uint)((ulonglong)(obj + 1) >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  *(undefined4 *)&obj[1].monitor = 60000;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            (obj,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
  plVar12 = (longlong *)FUN_?(returnValues,0x11);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->fields)._Region_k__BackingField = *(uint8_t *)(plVar12 + 2);
  plVar12 = (longlong *)FUN_?(returnValues,0xfe);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar8 = plVar12[2];
  plVar12 = (longlong *)FUN_?(returnValues,0xe);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar15 = plVar12[2];
  lVar16 = FUN_?(returnValues);
  pIVar17 = TypeInfo__System__Int32;
  pDVar1 = pDVar2;
  if ((lVar16 != 0) &&
     (pDVar1 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(lVar16),
     pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    FUN_?(lVar16,pIVar17);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  MVNetworkGame_InitializeManagers(this,(MethodInfo *)0x0);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xe2);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDVar18 = pDVar2;
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar3->klass == pDRam0000000182dc2f60) {
      pDVar18 = pDVar3;
    }
    if (pDVar18 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?(pDVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  userProfileData =
       (UserProfileData *)
       Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                 ((String *)pDVar18,
                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                 );
  pMVar19 = 
  System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
  ;
  if ((
      System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
                 );
  }
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pSVar13 = (String *)func_?(&StringLiteral_source);
    pEVar20 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar13,(MethodInfo *)0x0);
    FUN_?(pEVar20,pMVar19);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar21 = (pMVar19->field7_0x38).rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar21 + 0x135) & 1) == 0) {
    pvVar21 = (void *)FUN_?(pvVar21);
  }
  this_07 = (List_1_System_Int32_ *)FUN_?(pvVar21);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32___ctor_1
            (this_07,(IEnumerable_1_System_Int32_ *)pDVar1,
             (pMVar19->field7_0x38).rgctx_data[2].method);
  value = MVNetworkGame_CreateLocalPlayer
                    (this,(int32_t)lVar8,(int32_t)lVar15,this_07,userProfileData,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar22 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
  plVar12 = (longlong *)
            FUN_?(returnValues,
                          CONCAT71((int7)((ulonglong)TypeInfo__ThemeRepository->static_fields >> 8),
                                   0xd6));
  if ((pTVar22 == (ThemeRepository *)0x0) || (plVar12 == (longlong *)0x0))
  goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pTVar22->fields)._ThemesEnabled_k__BackingField = *(bool *)(plVar12 + 2);
  plVar12 = (longlong *)FUN_?(returnValues,0x5c);
  if ((value == (MVLocalPlayer *)0x0) || (plVar12 == (longlong *)0x0)) goto code_?;
  if (*(Il2CppClass **)(*plVar12 + 0x40) != (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (value->fields)._._Team_k__BackingField = (int32_t)plVar12[2];
  pMVar23 = (this->fields).playerContainer;
  if (pMVar23 == (MVPlayerContainer *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((value->fields)._.playerState == 1) || ((value->fields)._.playerState == 2)) {
    this_10 = (pMVar23->fields).players;
    if (this_10 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    pIVar24 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
              ->klass->rgctx_data;
  }
  else {
    this_10 = (pMVar23->fields).pendingPlayers;
    if (this_10 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    pIVar24 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
              ->klass->rgctx_data;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this_10,
             (value->fields)._._ActorNr_k__BackingField,(Object *)value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)this_07 >> 8),2),
             pIVar24[0x22].method);
  pMVar23 = (this->fields).playerContainer;
  if (pMVar23 == (MVPlayerContainer *)0x0) goto code_?;
  (pMVar23->fields).localPlayerActorNumber = (value->fields)._._ActorNr_k__BackingField;
  plVar12 = (longlong *)FUN_?(returnValues,0xab);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(Il2CppClass **)(*plVar12 + 0x40) !=
      (TypeInfo__MV__Common__ClientSettingFlags->_0).element_class) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar8 = plVar12[2];
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVClientSettings->static_fields->flags = (int32_t)lVar8;
  TypeInfo__MVClientSettings->static_fields->flagsSet = 1;
  plVar12 = (longlong *)FUN_?(returnValues,0xd9);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar8 = plVar12[2];
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVClientSettings->static_fields->_PostGameInterstitialIntervalInSeconds_k__BackingField
       = (int32_t)lVar8;
  plVar12 = (longlong *)FUN_?(returnValues,0xeb);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12,lRam_?);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar8 = plVar12[2];
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField = (int32_t)lVar8;
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xe3);
  pDVar1 = pDVar2;
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar3->klass == pDRam0000000182dc2f60) {
      pDVar1 = pDVar3;
    }
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar11 = iRam_? != 0;
  (this->fields)._AdConsentEndpointURL_k__BackingField = (String *)pDVar1;
  if (bVar11) {
    uVar7 = (uint)((ulonglong)&(this->fields)._AdConsentEndpointURL_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xe4);
  pDVar1 = pDVar2;
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar3->klass == pDRam0000000182dc2f60) {
      pDVar1 = pDVar3;
    }
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar11 = iRam_? != 0;
  (this->fields)._KogamaMainpageURL_k__BackingField = (String *)pDVar1;
  if (bVar11) {
    uVar7 = (uint)((ulonglong)&(this->fields)._KogamaMainpageURL_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  plVar12 = (longlong *)FUN_?(returnValues,0xe6);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xe7);
  plVar25 = (longlong *)FUN_?(returnValues,0xe8);
  pCVar26 = (CreySettings *)FUN_?(TypeInfo__CreySettings);
  if (plVar25 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar25 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar25,lRam_?);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar27 = *(bool *)(plVar25 + 2);
  pDVar3 = pDVar2;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar1->klass == pDRam0000000182dc2f60) {
      pDVar3 = pDVar1;
    }
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?(pDVar1,pDRam0000000182dc2f60);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12,lRam_?);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pCVar26->fields)._TouristPromotionCreyFrequencyPercent_k__BackingField = (int32_t)plVar12[2];
  iVar28 = iRam_?;
  (pCVar26->fields)._TouristPromotionCreyURL_k__BackingField = (String *)pDVar3;
  if (iVar28 != 0) {
    uVar7 = (uint)((ulonglong)&(pCVar26->fields)._TouristPromotionCreyURL_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
      iVar28 = iRam_?;
    } while (!bVar11);
  }
  (pCVar26->fields)._TouristPromotionCreyRedirect_k__BackingField = bVar27;
  (this->fields)._CreySettings_k__BackingField = pCVar26;
  if (iVar28 != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields)._CreySettings_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  plVar12 = (longlong *)FUN_?(returnValues,0xf5);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xf3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xf4);
  plVar25 = (longlong *)FUN_?(returnValues,0xf2);
  pCVar29 = (CustomTouristPromotionSettings *)
            FUN_?(TypeInfo__CustomTouristPromotionSettings);
  if (plVar25 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar25 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar25,lRam_?);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar27 = *(bool *)(plVar25 + 2);
  pDVar18 = pDVar2;
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar3->klass == pDRam0000000182dc2f60) {
      pDVar18 = pDVar3;
    }
    if (pDVar18 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?(pDVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pDVar3 = pDVar2;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar1->klass == pDRam0000000182dc2f60) {
      pDVar3 = pDVar1;
    }
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?(pDVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pCVar29->fields)._FrequencyPercent_k__BackingField = (int32_t)plVar12[2];
  iVar28 = iRam_?;
  (pCVar29->fields)._URL_k__BackingField = (String *)pDVar3;
  if (iVar28 != 0) {
    uVar7 = (uint)((ulonglong)&(pCVar29->fields)._URL_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
      iVar28 = iRam_?;
    } while (!bVar11);
  }
  (pCVar29->fields)._AssetURL_k__BackingField = (String *)pDVar18;
  iVar30 = 0;
  if (iVar28 != 0) {
    uVar7 = (uint)((ulonglong)&(pCVar29->fields)._AssetURL_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
      iVar30 = iRam_?;
    } while (!bVar11);
  }
  (pCVar29->fields)._Redirect_k__BackingField = bVar27;
  (this->fields)._CustomTouristPromotionSettings_k__BackingField = pCVar29;
  if (iVar30 != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields)._CustomTouristPromotionSettings_k__BackingField >>
                   0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  plVar12 = (longlong *)FUN_?(returnValues,0xe9);
  plVar25 = (longlong *)FUN_?(returnValues,0xea);
  pEVar31 = (ElitePromotionSettings *)FUN_?(TypeInfo__ElitePromotionSettings);
  if (plVar25 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar25 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar25,lRam_?);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar8 = plVar25[2];
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar11 = iRam_? != 0;
  (pEVar31->fields)._ElitePromotionEnabled_k__BackingField = *(bool *)(plVar12 + 2);
  (pEVar31->fields)._ElitePromotionInterval_k__BackingField = (int32_t)lVar8;
  (this->fields)._EliteSettings_k__BackingField = pEVar31;
  if (bVar11) {
    uVar7 = (uint)((ulonglong)&(this->fields)._EliteSettings_k__BackingField >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  pLVar32 = (this->fields).embeddedSiteConfigData.sites;
  uVar33 = *(undefined8 *)&(this->fields).embeddedSiteConfigData.siteEnum;
  uVar34 = *(undefined8 *)&(this->fields).embeddedSiteConfigData.integratedSdk;
  plVar12 = (longlong *)FUN_?(returnValues,0xef);
  plVar25 = (longlong *)FUN_?(returnValues,0xed);
  plVar35 = (longlong *)FUN_?(returnValues,0xf0);
  lVar8 = FUN_?(TypeInfo__AdConfigSettings);
  if (plVar35 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar35 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar35,lRam_?);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar15 = plVar35[2];
  if (plVar25 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar25 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar25,lRam_?);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar16 = plVar25[2];
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar11 = iRam_? != 0;
  lVar36 = plVar12[2];
  *(List_1_System_String_ **)(lVar8 + 0x18) = pLVar32;
  *(undefined8 *)(lVar8 + 0x20) = uVar33;
  *(undefined8 *)(lVar8 + 0x28) = uVar34;
  if (bVar11) {
    uVar7 = (uint)(lVar8 + 0x18U >> 0xc);
    lVar37 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar37 + 0xADDR);
      puVar10 = (ulonglong *)(lVar37 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  bVar11 = cRam_? == '\0';
  *(char *)(lVar8 + 0x10) = (char)lVar36;
  *(int *)(lVar8 + 0x14) = (int)lVar16;
  *(int *)(lVar8 + 0x30) = (int)lVar15;
  if (bVar11) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar38 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar38 == (MVGameControllerBase *)0x0) ||
     (plVar12 = (longlong *)
                (*(pMVar38->klass->vtable).__unknown.methodPtr)
                          (pMVar38,(pMVar38->klass->vtable).__unknown.method),
     plVar12 == (longlong *)0x0)) goto code_?;
  lVar15 = *plVar12;
  uVar39 = 0;
  if (*(ushort *)(lVar15 + 0x12e) != 0) {
    do {
      if (*(IAdManager__Class **)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar39 * 0x10) ==
          TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
        puVar40 = (undefined8 *)
                  ((longlong)
                   (*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar39 * 0x10) + 9) *
                   0x10 + 0x138 + lVar15);
        goto code_?;
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 < *(ushort *)(lVar15 + 0x12e));
  }
  puVar40 = (undefined8 *)
            FUN_?(plVar12,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,9);
code_?:
  (*(code *)*puVar40)(plVar12,lVar8,puVar40[1]);
  plVar12 = (longlong *)FUN_?(returnValues,0x55);
  if (plVar12 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar12);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->fields).isPublished = *(bool *)(plVar12 + 2);
  MVGameControllerBase::MVGameControllerBase_set_JoinState
            (MVJoinState__Enum_LoadGUI,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVNetworkGame__OperationRequests__Syncronize__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar38 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar38 == (MVGameControllerBase *)0x0) goto code_?;
  this_02 = (pMVar38->fields).levelLoader;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar41 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar41 == (GameSessionData *)0x0) goto code_?;
  iVar28 = (pGVar41->fields).gameMode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar41 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar41 == (GameSessionData *)0x0) goto code_?;
  iVar30 = (pGVar41->fields).profileID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (this->fields).operationRequests;
  this_08 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_08,(Object *)object,MethodInfo__MVNetworkGame__OperationRequests__Syncronize__,
             (MethodInfo *)0x0);
  if (this_02 == (LevelLoader *)0x0) goto code_?;
  if (iVar28 == 0) {
code_?:
    mode = ScenesForMode__Enum_EditMode;
code_?:
    LevelLoader::LevelLoader_LoadScenes_1(this_02,mode,(Action *)this_08,(MethodInfo *)0x0);
  }
  else {
    if (iVar28 == 1) {
code_?:
      pDVar1 = pDVar2;
      if (iVar30 < 1) {
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)0x2;
      }
      mode = (ScenesForMode__Enum)pDVar1;
      goto code_?;
    }
    if (iVar28 == 2) {
      mode = ScenesForMode__Enum_AvatarEditMode;
      goto code_?;
    }
    if (iVar28 == 3) goto code_?;
    if (iVar28 == 4) goto code_?;
  }
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0xb0);
  bVar6 = (TypeInfo__MVLocalPlayerTourist->_1).naturalAligment;
  pDVar1 = pDVar2;
  if (((value->klass->_1).naturalAligment < bVar6) ||
     ((value->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
      (Il2CppClass *)TypeInfo__MVLocalPlayerTourist)) {
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (pDVar3->klass == pDRam0000000182dc2f60) {
        pDVar1 = pDVar3;
      }
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        FUN_?(pDVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (pDVar3->klass == pDRam0000000182dc2f60) {
        pDVar1 = pDVar3;
      }
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        FUN_?(pDVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_09 = (ProfileSettingsState *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
    MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState__ctor
              (this_09,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
              (this_09,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(returnValues,0x6b);
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (pDVar3->klass == pDRam0000000182dc2f60) {
      pDVar2 = pDVar3;
    }
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?(pDVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__MV__Common__Urls->static_fields->api = (String *)pDVar1;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&TypeInfo__MV__Common__Urls->static_fields->api >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  TypeInfo__MV__Common__Urls->static_fields->streamingAssets = (String *)pDVar2;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&TypeInfo__MV__Common__Urls->static_fields->streamingAssets >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if (TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable !=
      (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar42 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    if (pUVar42 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    (*(pUVar42->fields)._._.invoke_impl)
              ((pUVar42->fields)._._.method_code,(pUVar42->fields)._._.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar41 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar41 == (GameSessionData *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar13 = (pGVar41->fields).language;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_es_ES,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_es);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_GB);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pSVar13 != (String *)0x0) &&
     ((((pSVar43 = StringLiteral_en_US, pSVar13 != StringLiteral_en_GB &&
        ((((StringLiteral_en_GB == (String *)0x0 ||
           ((pSVar13->fields)._stringLength != (StringLiteral_en_GB->fields)._stringLength)) ||
          (bVar27 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar13->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_en_GB->fields)._firstChar,
                               (longlong)(pSVar13->fields)._stringLength * 2,(MethodInfo *)0x0),
          pSVar43 = StringLiteral_en_US, bVar27 == 0)) &&
         (pSVar43 = StringLiteral_es_ES, pSVar13 != StringLiteral_es)))) &&
       (((StringLiteral_es == (String *)0x0 ||
         ((pSVar13->fields)._stringLength != (StringLiteral_es->fields)._stringLength)) ||
        (bVar27 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar13->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_es->fields)._firstChar,
                             (longlong)(pSVar13->fields)._stringLength * 2,(MethodInfo *)0x0),
        pSVar43 = StringLiteral_es_ES, bVar27 == 0)))) ||
      (pSVar13 = pSVar43, pSVar43 != (String *)0x0)))) {
    pSVar43 = mscorlib.dll::System::String::String_Replace(pSVar13,0x5f,0x2d,(MethodInfo *)0x0);
    pTVar44 = TM::TM_get_Instance((MethodInfo *)0x0);
    if (pTVar44 == (TM *)0x0) goto code_?;
    pSVar45 = (pTVar44->fields).cultureName;
    if ((pSVar43 != pSVar45) &&
       (((pSVar43 == (String *)0x0 || (pSVar45 == (String *)0x0)) ||
        (((pSVar43->fields)._stringLength != (pSVar45->fields)._stringLength ||
         (bVar27 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar43->fields)._firstChar,
                              (uint8_t *)&(pSVar45->fields)._firstChar,
                              (longlong)(pSVar43->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar27 == 0)))))) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__AsyncWWWManager);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__GetRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__Common__Urls);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Languages_);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar44 = TM::TM_get_Instance((MethodInfo *)0x0);
      if (pTVar44 == (TM *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar11 = iRam_? != 0;
      (pTVar44->fields).fileName = pSVar13;
      if (bVar11) {
        uVar7 = (uint)((ulonglong)&(pTVar44->fields).fileName >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar46 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar46 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar46 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pSVar13 = mscorlib.dll::System::String::String_Concat_5
                          (StringLiteral_Languages_,pSVar13,StringLiteral__txt,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar43 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
      pSVar13 = mscorlib.dll::System::String::String_Concat_4(pSVar43,pSVar13,(MethodInfo *)0x0);
      this_03 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_03,(Object *)0x0,
                 MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_,
                 (MethodInfo *)0x0);
      this_04 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_04,pSVar13,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AsyncWWWManager,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedGetRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
        if (this_04 != (AsyncWebRequest *)0x0) {
          bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if ((bVar6 <= (this_04->klass->_1).naturalAligment) &&
             ((this_04->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AsyncWWWManager);
            }
            pAVar47 = this_04->klass;
            bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if (((pAVar47->_1).naturalAligment < bVar6) ||
               ((pAVar47->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              FUN_?(this_04,TypeInfo__CachedGetRequest);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            cVar48 = (*(code *)pAVar47[1]._0.image)
                               (this_04,TypeInfo__AsyncWWWManager->static_fields->cache,
                                pAVar47[1]._0.gc_desc);
            if (cVar48 != '\0') {
              return;
            }
          }
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (((this_04 != (AsyncWebRequest *)0x0) &&
            (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
           (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                 (this_04->fields).requestPriority,
                                 MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                ), pOVar5 != (Object *)0x0)) {
          if (pOVar5[1].klass != (Object__Class *)0x0) {
            if (*(int *)&pOVar5[2].klass == *(int *)&((pOVar5[1].klass)->_0).namespaze) {
              pOVar49 = pOVar5[1].klass;
              iVar28 = *(int *)&(pOVar49->_0).namespaze * 2;
              if (iVar28 < *(int *)&(pOVar49->_0).namespaze + 4) {
                iVar28 = *(int *)&(pOVar49->_0).namespaze + 4;
              }
              FUN_?(pOVar5,iVar28,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                            ->klass->rgctx_data[5].rgctxDataDummy);
            }
            if (pOVar5[1].klass != (Object__Class *)0x0) {
              FUN_?(pOVar5[1].klass,(longlong)*(int *)((longlong)&pOVar5[1].monitor + 4),
                            this_04);
              if (pOVar5[1].klass != (Object__Class *)0x0) {
                iVar30 = *(int *)((longlong)&pOVar5[1].monitor + 4) + 1;
                iVar28 = 0;
                if (iVar30 != *(int *)&((pOVar5[1].klass)->_0).namespaze) {
                  iVar28 = iVar30;
                }
                *(int *)((longlong)&pOVar5[1].monitor + 4) = iVar28;
                *(int *)&pOVar5[2].klass = *(int *)&pOVar5[2].klass + 1;
                piVar50 = (int *)((longlong)&pOVar5[2].klass + 4);
                *piVar50 = *piVar50 + 1;
                return;
              }
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      return;
    }
  }
  pTVar44 = TM::TM_get_Instance((MethodInfo *)0x0);
  if (pTVar44 != (TM *)0x0) {
    bVar11 = iRam_? != 0;
    (pTVar44->fields).catalog = (Catalog *)0x0;
    if (bVar11) {
      uVar7 = (uint)((ulonglong)&pTVar44->fields >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar46 = *puVar10;
        LOCK();
        uVar9 = *puVar10;
        if (uVar46 == uVar9) {
          *puVar10 = uVar46 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar46 != uVar9);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__Dispose__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__get_Current__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::Action>__Clear__);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pTVar44 = TM::TM_get_Instance((MethodInfo *)0x0);
    if (pTVar44 != (TM *)0x0) {
      (pTVar44->fields).languageLoadingDone = 1;
      pTVar44 = TM::TM_get_Instance((MethodInfo *)0x0);
      if ((pTVar44 != (TM *)0x0) &&
         ((pTVar44->fields).languageChangedCallback != (List_1_System_Action_ *)0x0)) {
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&stack0xffffffffffffffc0 >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar46 = *puVar10;
            LOCK();
            uVar9 = *puVar10;
            if (uVar46 == uVar9) {
              *puVar10 = uVar46 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar46 != uVar9);
        }
        pOVar5 = (Object *)0x0;
        while (bVar27 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffffffffffd8,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                                  ), bVar27 != 0) {
          if (pOVar5 == (Object *)0x0) goto code_?;
          (*(code *)pOVar5[1].monitor)(pOVar5[4].klass,pOVar5[2].monitor);
        }
        pTVar44 = TM::TM_get_Instance((MethodInfo *)0x0);
        if ((pTVar44 != (TM *)0x0) &&
           (pLVar51 = (pTVar44->fields).languageChangedCallback,
           pLVar51 != (List_1_System_Action_ *)0x0)) {
          piVar52 = &(pLVar51->fields)._version;
          *piVar52 = *piVar52 + 1;
          length = (pLVar51->fields)._size;
          (pLVar51->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar51->fields)._items,0,length,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLevelChanged(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnLevelChanged
               (MVNetworkGame *this,int32_t actorNr,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVNetworkGame_OnLevelChanged);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MVNetworkGame_OnLevelChanged,(MethodInfo *)0x0);
  this_00 = (this->fields).playerContainer;
  if (this_00 != (MVPlayerContainer *)0x0) {
    pMVar1 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(this_00,actorNr,(MethodInfo *)0x0)
    ;
    if (pMVar1 != (MVPlayer *)0x0) {
      iVar2 = (pMVar1->fields).level;
      (pMVar1->fields).level = level;
      if ((iVar2 != level) &&
         ((pMVar1->fields).OnLevelChanged != (UnityAction_1_System_Int32_ *)0x0)) {
        pUVar3 = (pMVar1->fields).OnLevelChanged;
        (*(pUVar3->fields)._._.invoke_impl)
                  ((pUVar3->fields)._._.method_code,level,(pUVar3->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLockHierarchyEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 != (WorldNetwork *)0x0) &&
     (pMVar2 = (pWVar1->fields)._.worldObjectClientManager, eventData != (EventData *)0x0)) {
    pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (eventData,0x17,(MethodInfo *)0x0);
    pOVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (eventData,0x15,(MethodInfo *)0x0);
    if ((pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) && (pOVar4 != (Object *)0x0)) {
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6 = *(undefined4 *)&pOVar4[1].klass;
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        key = *(int32_t *)&pOVar3[1].klass;
        aIStackX_8[0].m_value = key;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_LockHierarchyProxy_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
        pSVar7 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_LockHierarchyProxy_,pSVar7,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,key,uVar6,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeRef__MVGroup);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGroup);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_SetOwnerInHierarchy_has_been_cal);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_SetOwnerInHierarchy_has_been_cal,(MethodInfo *)0x0);
        pDVar8 = (pMVar2->fields)._.worldObjects;
        if ((pDVar8 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
           (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                ), pOVar3 != (Object *)0x0)) {
          *(undefined4 *)&pOVar3[3].monitor = uVar6;
          pDVar8 = (pMVar2->fields)._.worldObjects;
          if ((pDVar8 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
             (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                  ), pOVar3 != (Object *)0x0)) {
            lVar9 = FUN_?(&(pOVar3->klass->_0).byval_arg);
            pIVar10 = TypeRef__MVGroup;
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            if (pIVar10 == (Il2CppType *)0x0) {
              lVar11 = 0;
            }
            else {
              if (*(int *)(lRam_? + 0xe4) == 0) {
                FUN_?();
              }
              lVar11 = FUN_?(pIVar10,1);
              lVar11 = FUN_?(lVar11 + 0x20);
            }
            if (lVar9 != lVar11) {
              return;
            }
            pDVar8 = (pMVar2->fields)._.worldObjects;
            if ((pDVar8 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
               (this_00 = (MVGroup *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                    ), this_00 != (MVGroup *)0x0)) {
              bVar12 = (TypeInfo__MVGroup->_1).naturalAligment;
              if (((this_00->klass->_1).naturalAligment < bVar12) ||
                 ((MVGroup__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
                  TypeInfo__MVGroup)) {
                FUN_?(this_00);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              LStack_13._list =
                   (List_1_System_Object_ *)MVGroup::MVGroup_get_Children(this_00,(MethodInfo *)0x0)
              ;
              if ((List_1_MVWorldObjectClient_ *)LStack_13._list !=
                  (List_1_MVWorldObjectClient_ *)0x0) {
                if (iRam_? != 0) {
                  uVar14 = (uint)((ulonglong)&uStack_15 >> 0xc);
                  puVar16 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar17 = *puVar16;
                    LOCK();
                    uVar18 = *puVar16;
                    if (uVar17 == uVar18) {
                      *puVar16 = uVar17 | 1L << (uVar14 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar17 != uVar18);
                }
                pLStack_19 = (List_1_T_Enumerator_System_Object_ *)
                             ((ulonglong)
                              (uint)(((List_1_MVWorldObjectClient_ *)LStack_13._list)->fields).
                                    _version << 0x20);
                puStack_20 = (undefined *)0x0;
                LStack_13._8_8_ = pLStack_19;
                LStack_13._current = (Object *)0x0;
                uStack_15 = 0;
                pLStack_19 = &LStack_13;
                while( true ) {
                  bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Object]::List_1_T_Enumerator_System_Object__MoveNext
                                     (&LStack_13,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                     );
                  if (bVar21 == 0) {
                    return;
                  }
                  if (LStack_13._current == (Object *)0x0) break;
                  *(undefined4 *)&LStack_13._current[3].monitor = uVar6;
                }
                FUN_?();
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
          }
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    plVar1 = (longlong *)FUN_?(returnValues,0x17);
    if (plVar1 != (longlong *)0x0) {
      if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      key = (int32_t)plVar1[2];
      plVar1 = (longlong *)
               FUN_?(returnValues,CONCAT71((int7)((ulonglong)*plVar1 >> 8),0x42));
      if (plVar1 != (longlong *)0x0) {
        if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pWVar3 = (this->fields).worldNetwork;
        if (pWVar3 != (WorldNetwork *)0x0) {
          this_00 = (pWVar3->fields)._.worldObjectClientManager;
          lVar4 = plVar1[2];
          if (this_00 != (MVWorldObjectClientManagerNetwork *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__OnHierarchyLockedEventArgs);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                      (this_00->fields)._.worldObjects;
            if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
              iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Vector3]::
                      Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                (this_01,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                                 ->klass->rgctx_data[0x21].method);
              if (-1 < iVar5) {
                if ((char)lVar4 == '\0') {
                  iVar5 = 0;
                }
                else {
                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar6 == (MVNetworkGame *)0x0) ||
                     (this_02 = (pMVar6->fields).playerContainer,
                     this_02 == (MVPlayerContainer *)0x0)) goto code_?;
                  pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                     (this_02,(MethodInfo *)0x0);
                  if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
                  iVar5 = (pMVar7->fields)._._ActorNr_k__BackingField;
                }
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy
                          (this_00,key,iVar5,(MethodInfo *)0x0);
                if ((this_00->fields)._.OnHierarchyLockedResponse !=
                    (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
                  pEVar8 = (this_00->fields)._.OnHierarchyLockedResponse;
                  lVar4 = FUN_?(TypeInfo__OnHierarchyLockedEventArgs);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__EventArgs);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  *(int32_t *)(lVar4 + 0x10) = key;
                  *(bool *)(lVar4 + 0x14) = returnCode == 0;
                  (*(pEVar8->fields)._._.invoke_impl)
                            ((pEVar8->fields)._._.method_code,this_00,lVar4,
                             (pEVar8->fields)._._.method);
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnNotificationEventReceived(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
               (MVNetworkGame *this,NotificationType__Enum type,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
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
       (pMVar1 = (this->fields).operationRequests, pMVar1 != (MVNetworkGame_OperationRequests *)0x0)
       ) {
      pOVar2 = (pMVar1->fields).operationResponsePendingManager;
      bVar3 = (operationResponse->fields).OperationCode;
      if (pOVar2 != (OperationResponsePendingManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pHVar4 = (HashSet_1_System_ByteEnum_ *)(pOVar2->fields).pendingOperations;
        if (pHVar4 != (HashSet_1_System_ByteEnum_ *)0x0) {
          bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                  HashSet_1_System_ByteEnum__Contains
                            (pHVar4,(uint)bVar3,
                             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                            );
          if (bVar5 != 0) {
            pHVar4 = (HashSet_1_System_ByteEnum_ *)(pOVar2->fields).pendingOperations;
            if (pHVar4 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Remove
                      (pHVar4,(uint)bVar3,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                      );
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPickupItemStateChangeEvent(PickupItemState, Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
               (MVNetworkGame *this,PickupItemState__Enum state,int32_t worldObjectID,
               int32_t instigatorActorNr,MethodInfo *method)

{
  aIStackX_18[0].m_value = worldObjectID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,CONCAT44(in_register_00000014,state),
                  CONCAT44(in_register_00000084,worldObjectID),
                  CONCAT44(in_register_0000008c,instigatorActorNr));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPickupStateHandler);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnPickupItemStateChangeEvent_fai);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PickUpItemStateChangeEvent_faile);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)
               (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,worldObjectID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_OnPickupItemStateChangeEvent_fai,pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
       (pMVar1 = (MVWorldObjectClientManager *)
                 (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,worldObjectID,(MethodInfo *)0x0);
      lVar6 = FUN_?(pMVar2,TypeInfo__IPickupStateHandler);
      if (lVar6 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = StringLiteral_PickUpItemStateChangeEvent_faile;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar4 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
          return;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
         (pMVar1 = (MVWorldObjectClientManager *)
                   (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar1 != (MVWorldObjectClientManager *)0x0)) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar1,worldObjectID,(MethodInfo *)0x0);
        pIVar7 = TypeInfo__IPickupStateHandler;
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          lVar6 = FUN_?(pMVar2,TypeInfo__IPickupStateHandler);
          pIVar8 = TypeInfo__IPickupStateHandler;
          if (lVar6 == 0) {
            FUN_?(pMVar2,pIVar7);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar9 = (longlong *)FUN_?(pMVar2,TypeInfo__IPickupStateHandler);
          if (plVar9 == (longlong *)0x0) {
            FUN_?(pMVar2,pIVar8);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = 0;
          lVar6 = *plVar9;
          if (*(ushort *)(lVar6 + 0x12e) != 0) {
            do {
              if (*(IPickupStateHandler__Class **)
                   (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TypeInfo__IPickupStateHandler) {
                puVar11 = (undefined8 *)
                         ((longlong)
                          *(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) *
                          0x10 + 0x138 + lVar6);
                goto code_?;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_?(plVar9);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar11)(plVar9,state,puVar11[1],(code *)*puVar11);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPostWinnerReportEvent() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<IWinningCondition>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Only_1_winning_condition_current);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Round_was_reset_without_winning_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_winning_condition_found_even_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._WinningConditionManager_k__BackingField;
  uVar1 = 0;
  if (this_00 != (WinningConditionManager *)0x0) {
    if ((this_00->fields)._WinningConditionFound_k__BackingField == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Round_was_reset_without_winning_,(MethodInfo *)0x0);
code_?:
      pAVar2 = (this->fields).OnWinningConditionFulfilled;
      if (pAVar2 != (Action_1_IWinningCondition_ *)0x0) {
        (*(pAVar2->fields)._._.invoke_impl)
                  ((pAVar2->fields)._._.method_code,uVar1,(pAVar2->fields)._._.method);
      }
      return;
    }
    if (this_00 != (WinningConditionManager *)0x0) {
      pLVar3 = MVWorldObject.dll::WinningConditionManager::
               WinningConditionManager_GetForfilledWinningConditions(this_00,(MethodInfo *)0x0);
      if (pLVar3 != (List_1_IWinningCondition_ *)0x0) {
        if ((pLVar3->fields)._size == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar4 = StringLiteral_No_winning_condition_found_even_;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar5 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,3,pSVar4);
            return;
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (1 < (pLVar3->fields)._size) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar4 = StringLiteral_Only_1_winning_condition_current;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar5 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0,pSVar4);
            return;
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar1 = FUN_?(pLVar3);
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPurchaseProductResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
               (MVNetworkGame *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_refreshCredentials);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).PurchaseProductResponseHandler !=
      (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
    pAVar1 = (this->fields).PurchaseProductResponseHandler;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,returnCode,purchaseResponseData,
               (pAVar1->fields)._._.method);
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?();
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
              (StringLiteral_refreshCredentials,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnRemoveItemFromInventory(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
               (MVNetworkGame *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    lVar1 = FUN_?();
    if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x48), lVar2 != 0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_)
        ;
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_)
        ;
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(Dictionary_2_System_Int32_System_Object_ **)(lVar2 + 0x10) !=
          (Dictionary_2_System_Int32_System_Object_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           (*(Dictionary_2_System_Int32_System_Object_ **)(lVar2 + 0x10),1,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
        index = 0;
        if (pOVar3 != (Object *)0x0) {
          lVar4 = 0x20;
          while( true ) {
            if (*(int *)&pOVar3[1].monitor <= (int)index) {
              lVar1 = *(longlong *)(lVar1 + 0x20);
              if (lVar1 != 0) {
                (**(code **)(lVar1 + 0x18))
                          (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
              }
              return;
            }
            if (*(uint *)&pOVar3[1].monitor <= index) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pOVar6 = pOVar3[1].klass;
            if (pOVar6 == (Object__Class *)0x0) break;
            if (*(uint *)&(pOVar6->_0).namespaze <= index) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar7 = *(longlong *)((longlong)&(pOVar6->_0).image + lVar4);
            if (lVar7 == 0) break;
            if (*(int *)(lVar7 + 0x10) == itemID) {
              if (*(Dictionary_2_System_Int32_System_Object_ **)(lVar2 + 0x10) ==
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
              this_00 = (List_1_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  (*(Dictionary_2_System_Int32_System_Object_ **)(lVar2 + 0x10),1,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                  );
              if (this_00 == (List_1_System_Object_ *)0x0) break;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__RemoveAt
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_
                        );
            }
            index = index + 1;
            lVar4 = lVar4 + 8;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnRemoveLinkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
               (MVNetworkGame *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_reset_count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_RemoveLink_event__but_link_not_r);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (pWVar1->fields).links;
    if (pLVar2 != (Links *)0x0) {
      bVar3 = Links::Links_Contains(pLVar2,linkID,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
        return;
      }
      pLVar2 = (pWVar1->fields).links;
      if (((pLVar2 != (Links *)0x0) &&
          (pLVar4 = Links::Links_GetLink(pLVar2,linkID,(MethodInfo *)0x0), pLVar4 != (Link *)0x0))
         && (pMVar5 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager,
            pMVar5 != (MVWorldObjectClientManager *)0x0)) {
        outputWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (pMVar5,(pLVar4->fields).outputWOID,(MethodInfo *)0x0);
        pMVar5 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager;
        if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
          inputWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar5,(pLVar4->fields).inputWOID,(MethodInfo *)0x0);
          pLVar2 = (pWVar1->fields).links;
          if (pLVar2 != (Links *)0x0) {
            Links::Links_RemoveLink(pLVar2,linkID,outputWo,inputWo,(MethodInfo *)0x0);
            pLVar6 = (this->fields)._LogicObjectManager_k__BackingField;
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pLVar6 != (LogicObjectManagerClient *)0x0) {
              iVar7 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                                ((pLVar4->fields).inputWOID,(IWorldObjectManager *)pMVar5,
                                 (MethodInfo *)0x0);
              iVar8 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                                ((pLVar4->fields).outputWOID,(IWorldObjectManager *)pMVar5,
                                 (MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                   field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              aRStack_9[0]._pointer._value = (void *)0x0;
              aRStack_9[0]._length = 0;
              aRStack_9[0]._12_4_ = 0;
              pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                                  (iVar7 + iVar8,aRStack_9,(IFormatProvider *)0x0,(MethodInfo *)0x0
                                  );
              pSVar10 = mscorlib.dll::System::String::String_Concat_4
                                  (StringLiteral_reset_count_,pSVar10,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar10,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnRemoveObjectLinkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
               (MVNetworkGame *this,int32_t linkID,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 != (WorldNetwork *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_RemoveLink_event__but_link_not_r);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar2 = (pWVar1->fields).objectLinks;
    if (pOVar2 != (ObjectLinks *)0x0) {
      bVar3 = ObjectLinks::ObjectLinks_Contains(pOVar2,linkID,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar4 = StringLiteral_RemoveLink_event__but_link_not_r;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar5 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0,pSVar4);
          return;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pOVar2 = (pWVar1->fields).objectLinks;
      if (pOVar2 != (ObjectLinks *)0x0) {
        link = ObjectLinks::ObjectLinks_GetObjectLink(pOVar2,linkID,(MethodInfo *)0x0);
        if ((link != (ObjectLink *)0x0) &&
           (pMVar7 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager,
           pMVar7 != (MVWorldObjectClientManager *)0x0)) {
          objectConnectorWo =
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar7,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
          pMVar7 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager;
          if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
            objectWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                 (pMVar7,(link->fields).objectWOID,(MethodInfo *)0x0);
            pOVar2 = (pWVar1->fields).objectLinks;
            if (pOVar2 != (ObjectLinks *)0x0) {
              ObjectLinks::ObjectLinks_RemoveObjectLink
                        (pOVar2,link,objectConnectorWo,objectWo,(MethodInfo *)0x0);
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


/* Void OnRequestFriendsResponse(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *friendsList,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__FriendStatus);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Friendslist_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (friendsList == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Friendslist_is_null,(MethodInfo *)0x0);
    return;
  }
  pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
           TypeConverterRegistry+ConverterKey,System::Object]::
           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                     ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)friendsList,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                     );
  if (pDVar1 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = (pDVar1->fields)._dictionary;
  puStack_4 = (undefined4 *)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_3 >> 0xc);
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
  if (uStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_11 = (uStack_3->fields)._version;
  uStack_5 = 0;
  uStack_3._4_4_ = (undefined4)((ulonglong)uStack_3 >> 0x20);
  uStack_12 = (undefined4)uStack_3;
  uStack_13 = uStack_3._4_4_;
  uStack_14 = 0;
  aplStack_15[0] = (longlong *)0x0;
  uStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_4 = &uStack_12;
  do {
    pOVar16 = (Object__Class *)CONCAT44(uStack_13,uStack_12);
    if (pOVar16 == (Object__Class *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_11 != *(int *)&(pOVar16->_0).byval_arg.field_0xc) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (pOVar16 == (Object__Class *)0x0) goto code_?;
      if ((uint)(pOVar16->_0).byval_arg.data.__klassIndex <= uStack_14) {
        return;
      }
      pcVar17 = (pOVar16->_0).namespaze;
      lVar7 = (longlong)(int)uStack_14;
      uVar6 = uStack_14 + 1;
      if (pcVar17 == (char *)0x0) goto code_?;
      if (*(uint *)(pcVar17 + 0x18) <= uStack_14) {
        uStack_14 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_14 = uVar6;
    } while (*(int *)(pcVar17 + lVar7 * 0x18 + 0x20) < 0);
    aplStack_15[0] = *(longlong **)(pcVar17 + lVar7 * 0x18 + 0x28);
    uVar18 = func_?(aplStack_15);
    if (aplStack_15[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      uVar6 = uStack_14;
code_?:
      uStack_14 = uVar6;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar16 = pORam0000000182dc2f18;
    if (*(Il2CppGenericMethod **)(*aplStack_15[0] + 0x40) !=
        ((_union_155 *)&(pORam0000000182dc2f18->_0).element_class)->genericMethod) {
code_?:
      FUN_?(uVar18,pOVar16);
      goto code_?;
    }
    uVar6 = *(uint *)(aplStack_15[0] + 2);
    uStackX_10 = uVar6;
    pOVar19 = (Object *)FUN_?(pORam0000000182dc2f18,&uStackX_10);
    pOVar16 = (Object__Class *)
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    this_01 = (Object__Class *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (friendsList,pOVar19,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar20 = uStackX_10;
    lVar7 = lRam_?;
    if (this_01 != (Object__Class *)0x0) {
      pOVar16 = (Object__Class *)(this_01->_0).image;
      bVar21 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar21 <= (pOVar16->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar16->_1).typeHierarchy[(ulonglong)bVar21 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
code_?:
      uVar18 = FUN_?();
      goto code_?;
    }
code_?:
    uStackX_10 = uStackX_10 & 0xffffff00;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar19 = (Object *)FUN_?(lRam_?);
        pOVar16 = (Object__Class *)((longlong)*(int *)(lVar7 + 0xf8) + -0x10);
        FUN_?(pOVar19 + 1,&uStackX_10,pOVar16);
        if (iRam_? != 0) {
          uVar20 = (uint)((ulonglong)(pOVar19 + 1) >> 0xc);
          lVar7 = (ulonglong)((uVar20 & 0x1fffff) >> 6) * 8;
          pOVar16 = (Object__Class *)(lVar7 + 0xADDR);
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *(ulonglong *)(lVar7 + 0xADDR);
            if (bVar10) {
              *(ulonglong *)(lVar7 + 0xADDR) = uVar8 | 1L << (uVar20 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
      else {
        pOVar19 = (Object *)0x0;
      }
    }
    else {
      pOVar19 = (Object *)(CONCAT44(uStackX_14,uVar20) & 0xffffffffffffff00);
    }
    if (this_01 == (Object__Class *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar19,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar16 = pORam0000000182dc2f18;
    if (pOVar19 == (Object *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if ((pOVar19->klass->_0).element_class !=
        (Il2CppClass *)((_union_155 *)&(pORam0000000182dc2f18->_0).element_class)->genericMethod) {
code_?:
      FUN_?(pOVar19,pOVar16);
      goto code_?;
    }
    profileID = *(int32_t *)&pOVar19[1].klass;
    uStackX_10 = CONCAT31(uStackX_10._1_3_,0x1c);
    pOVar19 = (Object *)FUN_?(lRam_?,&uStackX_10);
    pOVar16 = (Object__Class *)
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar19,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar19 == (Object *)0x0) {
code_?:
      pOVar19 = (Object *)FUN_?();
      goto code_?;
    }
    pOVar16 = pOVar19->klass;
    pOVar22 = pORam0000000182dc2f18;
    if (((_union_155 *)&(pOVar16->_0).element_class)->genericMethod !=
        ((_union_155 *)&(pORam0000000182dc2f18->_0).element_class)->genericMethod) {
code_?:
      FUN_?(pOVar19,pOVar22);
      goto code_?;
    }
    friendProfileID = *(int32_t *)&pOVar19[1].klass;
    uStackX_10 = CONCAT31(uStackX_10._1_3_,0x1e);
    pOVar19 = (Object *)FUN_?(lRam_?,&uStackX_10);
    pOVar16 = (Object__Class *)
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    pOVar23 = (Object__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar19,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar22 = this_01;
    if (pOVar23 == (Object__Class *)0x0) {
code_?:
      pOVar19 = (Object *)FUN_?();
      goto code_?;
    }
    if (*(Il2CppClass **)&((pOVar23->_0).image)->token !=
        (TypeInfo__MV__Common__FriendStatus->_0).element_class) {
code_?:
      FUN_?(pOVar23);
      pOVar22 = pOVar23;
      goto code_?;
    }
    this_00 = (this->fields)._Friends_k__BackingField;
    if (this_00 == (FriendList *)0x0) {
code_?:
      pOVar23 = (Object__Class *)FUN_?();
      goto code_?;
    }
    FriendList::FriendList_AddFriend
              (this_00,uVar6,profileID,friendProfileID,*(FriendStatus__Enum *)&(pOVar23->_0).name,
               (MethodInfo *)0x0);
  } while( true );
}


/* Void OnRequestFriendshipResponse(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
               (MVNetworkGame *this,int32_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Undefined_fail_during_friend_req);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_That_user_has_blocked_you);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_already_have_a_pending_reque);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_have_blocked_that_user);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_User_has_sent_you_request__Accep);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_User_does_not_exist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_already_friends_with_tha);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  message = ::StringLiteral__;
  switch(returnCode) {
  case -7:
    message = StringLiteral_That_user_has_blocked_you;
    break;
  case -6:
    message = StringLiteral_User_has_sent_you_request__Accep;
    break;
  case -5:
    message = StringLiteral_You_have_blocked_that_user;
    break;
  case -4:
    message = StringLiteral_You_are_already_friends_with_tha;
    break;
  case -3:
    message = StringLiteral_You_already_have_a_pending_reque;
    break;
  case -2:
    message = StringLiteral_User_does_not_exist;
    break;
  case -1:
    message = StringLiteral_Undefined_fail_during_friend_req;
  }
  if ((message != ::StringLiteral__) &&
     ((((message == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
       ((message->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
      (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(message->fields)._firstChar,
                          (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                          (longlong)(message->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar1 == 0)))) {
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnRequestMaterialsResponse(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *materialList,
               MethodInfo *method)

{
  this_02 = (this->fields)._MaterialRepository_k__BackingField;
  if (this_02 == (MVMaterialRepository *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  pDVar4 = materialList;
  if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
       (pMVar5 = (pMVar3->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar6 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar6->fields)._._SubscriptionRules_k__BackingField,
      this_01 != (SubscriptionRulesWrapper *)0x0)))) {
    pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    bVar7 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_01,SubscriptionBenefit__Enum_FreeBuildingMaterials,(MethodInfo *)0x0);
    if ((materialList != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)materialList,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       pDVar8 !=
       (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
        *)0x0)) {
      auStack_9._0_8_ = (pDVar8->fields)._dictionary;
      auStack_9._8_4_ = 0.0;
      auStack_9._12_4_ = 0.0;
      auStack_9._16_8_ = 0;
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)auStack_9 >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          auStack_9._0_8_ ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_15 = (((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)auStack_9._0_8_)->fields)._version;
      auStack_9._8_8_ = (ulonglong)uStack_15 << 0x20;
      auStack_9._16_8_ = 0;
      auStack_9._4_4_ = (undefined4)((ulonglong)auStack_9._0_8_ >> 0x20);
      fStack_16 = (float)auStack_9._0_4_;
      fStack_17 = (float)auStack_9._4_4_;
      uStack_18 = 0;
      pIStack_19 = (Il2CppType *)0x0;
      uStack_20 = 0;
      pfStack_21 = &fStack_16;
      while (lVar22 = CONCAT44(fStack_17,fStack_16), lVar22 != 0) {
        if (uStack_15 != *(uint *)(lVar22 + 0x2c)) goto code_?;
        do {
          if (lVar22 == 0) goto code_?;
          if (*(uint *)(lVar22 + 0x20) <= uStack_18) {
            uStack_18 = *(int *)(lVar22 + 0x20) + 1;
            pIStack_19 = (Il2CppType *)0x0;
            pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            pMVar23 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                (this_02,0x15,(MethodInfo *)0x0);
            if (pMVar23 != (MVMaterial *)0x0) {
              auStack_9._0_4_ = (pMVar23->fields)._PhysicalProperties_k__BackingField.friction;
              auStack_9._4_4_ = (pMVar23->fields)._PhysicalProperties_k__BackingField.bouncyness;
              auStack_9._8_4_ = (pMVar23->fields)._PhysicalProperties_k__BackingField.softness;
              auStack_9._12_4_ =
                   (pMVar23->fields)._PhysicalProperties_k__BackingField.staticFriction;
              if (((pMVar23->fields)._PhysicalProperties_k__BackingField.toughness == 0.0) &&
                 ((pMVar23->fields).isUnlocked != 0)) {
                MVMaterialRepository::MVMaterialRepository_GenerateMaterialButtonTextures
                          (this_02,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Application);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
                  FUN_?();
                }
                return;
              }
              uVar24 = func_?(&TypeInfo__System__Exception);
              this_03 = (Exception *)func_?(uVar24);
              pSVar25 = (String *)func_?(&StringLiteral_Default_material_is_invalid);
              mscorlib.dll::System::Exception::Exception__ctor_1(this_03,pSVar25,(MethodInfo *)0x0);
              uVar24 = func_?(&
                                           MethodInfo__MVMaterialRepository__InitializeMaterials_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                          );
              FUN_?(this_03,uVar24);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            goto code_?;
          }
          pDVar2 = *(Dictionary_2_System_Object_System_Object___Class **)(lVar22 + 0x18);
          lVar26 = (longlong)(int)uStack_18;
          uVar10 = uStack_18 + 1;
          if (pDVar2 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
          goto code_?;
          bVar14 = *(uint *)&(pDVar2->_0).namespaze <= uStack_18;
          uStack_18 = uVar10;
          if (bVar14) goto code_?;
        } while (*(int *)((longlong)&(pDVar2->_0).byval_arg + lVar26 * 0x18) < 0);
        pIStack_19 = *(Il2CppType **)((longlong)&(pDVar2->_0).byval_arg + lVar26 * 0x18 + 8);
        uVar27 = func_?(&pIStack_19);
        if (pIStack_19 == (Il2CppType *)0x0) goto code_?;
        pDVar2 = pDRam0000000182dc2ee8;
        if (*(Il2CppGenericMethod **)((longlong)(pIStack_19->data).dummy + 0x40) !=
            ((_union_155 *)&(pDRam0000000182dc2ee8->_0).element_class)->genericMethod)
        goto code_?;
        auStackX_20[0] = *(undefined1 *)&pIStack_19[1].data;
        pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (materialList,pOVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar2 = pDVar4->klass;
          bVar29 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar2->_1).naturalAligment < bVar29) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar2->_1).typeHierarchy[(ulonglong)bVar29 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        auStackX_20[0] = 0x37;
        pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        pSVar30 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar4,pOVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar25 = (String *)0x0;
        if (pSVar30 != (String *)0x0) {
          if (pSVar30->klass == pSRam0000000182dc2f60) {
            pSVar25 = pSVar30;
          }
          if (pSVar25 == (String *)0x0) goto code_?;
        }
        auStackX_20[0] = 0x38;
        pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        pSVar31 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar4,pOVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar30 = (String *)0x0;
        if (pSVar31 != (String *)0x0) {
          if (pSVar31->klass == pSRam0000000182dc2f60) {
            pSVar30 = pSVar31;
          }
          if (pSVar30 == (String *)0x0) goto code_?;
        }
        auStackX_20[0] = 0x39;
        pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__get_Item
                  (pDVar4,pOVar28,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        auStackX_20[0] = 0x3a;
        pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar4,pOVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pDVar2 = pDRam0000000182dc2f18;
        if (pOVar28 == (Object *)0x0) goto code_?;
        if ((pOVar28->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)&(pDRam0000000182dc2f18->_0).element_class)->genericMethod
           ) goto code_?;
        materialSound = *(MaterialSound__Enum *)&pOVar28[1].klass;
        auStackX_20[0] = 0x3b;
        pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar4,pOVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pDVar2 = pDRam0000000182dc2f18;
        if (pOVar28 == (Object *)0x0) goto code_?;
        if ((pOVar28->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)&(pDRam0000000182dc2f18->_0).element_class)->genericMethod
           ) goto code_?;
        modifierPackageType = *(AvatarModifierPackageType__Enum *)&pOVar28[1].klass;
        auStackX_20[0] = 0x3d;
        pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar4,pOVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pDVar2 = pDRam0000000182dc2f18;
        if (pOVar28 == (Object *)0x0) goto code_?;
        if ((pOVar28->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)&(pDRam0000000182dc2f18->_0).element_class)->genericMethod
           ) goto code_?;
        unlockPriceGold = *(int32_t *)&pOVar28[1].klass;
        if (bVar7 == 0) {
          auStackX_20[0] = 0x3e;
          pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
          pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar4,pOVar28,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          pDVar2 = pDRam0000000182dc2ef8;
          if (pOVar28 == (Object *)0x0) goto code_?;
          if ((pOVar28->klass->_0).element_class !=
              (Il2CppClass *)
              ((_union_155 *)&(pDRam0000000182dc2ef8->_0).element_class)->genericMethod)
          goto code_?;
          cVar32 = *(char *)&pOVar28[1].klass;
        }
        else {
          cVar32 = '\x01';
        }
        auStackX_20[0] = 0x73;
        pOVar28 = (Object *)FUN_?(pDRam0000000182dc2ee8,auStackX_20);
        pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar4,pOVar28,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        unaff_RDI = TypeInfo__System__Single;
        if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        lVar22 = FUN_?(pDVar4,TypeInfo__System__Single);
        if (lVar22 == 0) goto code_?;
        if (*(int *)(lVar22 + 0x18) == 0) goto code_?;
        if (*(uint *)(lVar22 + 0x18) < 2) goto code_?;
        if (*(uint *)(lVar22 + 0x18) < 3) goto code_?;
        if (*(uint *)(lVar22 + 0x18) < 4) goto code_?;
        if (*(uint *)(lVar22 + 0x18) < 5) goto code_?;
        uVar27 = *(undefined4 *)(lVar22 + 0x30);
        unaff_RDI = (Single__Array__Class *)(this_02->fields).materials;
        if (unaff_RDI == (Single__Array__Class *)0x0) goto code_?;
        materialId = *(int32_t *)&(unaff_RDI->_0).namespaze;
        uStack_33 = *(undefined4 *)(lVar22 + 0x20);
        uStack_34 = *(undefined4 *)(lVar22 + 0x24);
        uStack_35 = *(undefined4 *)(lVar22 + 0x28);
        uStack_36 = *(undefined4 *)(lVar22 + 0x2c);
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)FUN_?(TypeInfo__MVMaterial);
        auStack_9._0_8_ = CONCAT44(uStack_34,uStack_33);
        auStack_9._8_8_ = CONCAT44(uStack_36,uStack_35);
        auStack_9._16_4_ = uVar27;
        MVMaterial::MVMaterial__ctor_3
                  ((MVMaterial *)pDVar4,materialId,pSVar25,pSVar30,(PhysicalProperties *)auStack_9
                   ,materialSound,modifierPackageType,unlockPriceGold,cVar32 != '\0',
                   (MaterialButtonTextureGenerator *)0x0,(MethodInfo *)0x0);
        FUN_?(unaff_RDI,pDVar4);
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  pOVar28 = (Object *)FUN_?(pDVar4,unaff_RDI);
code_?:
  FUN_?(pOVar28,pDVar2);
code_?:
  pOVar28 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar28,pDVar2);
code_?:
  pOVar28 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar28,pDVar2);
code_?:
  pOVar28 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar28,pDVar2);
code_?:
  pSVar31 = (String *)FUN_?();
code_?:
  pSVar30 = (String *)FUN_?(pSVar31);
code_?:
  FUN_?(pSVar30);
code_?:
  FUN_?();
code_?:
  uVar27 = FUN_?();
code_?:
  FUN_?(uVar27,pDVar2);
code_?:
  FUN_?();
  uVar10 = uStack_18;
code_?:
  uStack_18 = uVar10;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnRequestWoUniquePrototypeFailed(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnRequestWoUniquePrototypeFailed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_OnRequestWoUniquePrototypeFailed,(MethodInfo *)0x0);
  if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar2 = (longlong *)FUN_?(returnValues,0x17);
  if (plVar2 == (longlong *)0x0) goto code_?;
  if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
    FUN_?(plVar2,lRam_?);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pWVar3 = (this->fields).worldNetwork;
  if ((pWVar3 == (WorldNetwork *)0x0) ||
     (pMVar4 = (pWVar3->fields)._.worldInventory, pMVar4 == (MVWorldInventory *)0x0))
  goto code_?;
  key = (int32_t)plVar2[2];
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,key,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_unpend_non_existing_cu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_unpend_runtime_prototy);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_unpend_but_prev_protot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar5 = (pMVar4->fields).pendingRuntimePrototypes;
  if (pDVar5 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                    (pDVar5,key,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar6 < 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Trying_to_unpend_runtime_prototy,(MethodInfo *)0x0);
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_03 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_02,key,(MethodInfo *)0x0);
    if (this_03 == (MVCubeModelBase *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Trying_to_unpend_non_existing_cu,(MethodInfo *)0x0);
    }
    else {
      bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((this_03->klass->_1).naturalAligment < bVar7) ||
         ((MVCubeModelInstance__Class *)(this_03->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(this_03);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pDVar5 = (pMVar4->fields).pendingRuntimePrototypes;
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar4->fields).runtimePrototypes
      ;
      if (pDVar5 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0)
      goto code_?;
      piVar8 = (int32_t *)FUN_?(auStack_9,pDVar5,key);
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,*piVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar6 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Trying_to_unpend_but_prev_protot,(MethodInfo *)0x0);
      }
      else {
        pDVar5 = (pMVar4->fields).pendingRuntimePrototypes;
        this_01 = (pMVar4->fields).runtimePrototypes;
        if (pDVar5 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0)
        goto code_?;
        piVar8 = (int32_t *)FUN_?(auStack_9,pDVar5,key);
        if (this_01 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
        goto code_?;
        pRVar10 = (RuntimePrototypeCubeModel *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,*piVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                           );
        MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel(this_03,pRVar10,(MethodInfo *)0x0);
        pRVar10 = (this_03->fields).prototypeCubeModel;
        if (pRVar10 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                  (pRVar10,this_03,(MethodInfo *)0x0);
      }
    }
    pDVar5 = (pMVar4->fields).pendingRuntimePrototypes;
    if (pDVar5 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,PendingPrototypeData]::
    Dictionary_2_System_Int32_PendingPrototypeData__Remove
              (pDVar5,key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
              );
  }
  return;
}


/* Void OnResetLogicChunkEvent(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,
                  worldObjectManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
            (worldObjectID,resetNodes,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnSetSayChatBubbleVisible(Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
               (MVNetworkGame *this,int32_t actorNr,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager,CONCAT44(in_register_00000014,actorNr),
                  CONCAT71(in_register_00000081,visible));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
           OnSayChatIndicatorVisibilityChange;
  if (pAVar1 != (Action_2_Int32_Boolean_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,actorNr,visible,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void OnSetTeamEvent(Int32, MVTeam) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnSetTeamEvent
               (MVNetworkGame *this,int32_t actorNr,MVTeam__Enum team,MethodInfo *method)

{
  aIStackX_10[0].m_value = actorNr;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Players_ContainsKey_actorNr___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).playerContainer;
  if (pMVar1 != (MVPlayerContainer *)0x0) {
    bVar2 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar1,actorNr,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral__Players_ContainsKey_actorNr___,pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar3,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields).playerContainer;
    if (pMVar1 != (MVPlayerContainer *)0x0) {
      bVar2 = MVPlayerContainer::MVPlayerContainer_ContainsKey(pMVar1,actorNr,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pMVar1 = (this->fields).playerContainer;
        if ((pMVar1 == (MVPlayerContainer *)0x0) ||
           (pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                               (pMVar1,actorNr,(MethodInfo *)0x0), pMVar4 == (MVPlayer *)0x0))
        goto code_?;
        if (team != (pMVar4->fields)._Team_k__BackingField) {
          pMVar1 = (this->fields).playerContainer;
          pGVar5 = (this->fields).gameStatCounterManager;
          if (((pMVar1 == (MVPlayerContainer *)0x0) ||
              (pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                  (pMVar1,actorNr,(MethodInfo *)0x0), pMVar4 == (MVPlayer *)0x0)) ||
             (pGVar5 == (GameStatCounterManager *)0x0)) goto code_?;
          MVWorldObject.dll::GameStatCounterManager::
          GameStatCounterManager_RemoveTeamScoreOnActorLeave
                    (pGVar5,actorNr,(pMVar4->fields)._Team_k__BackingField,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).playerContainer;
      if (pMVar1 != (MVPlayerContainer *)0x0) {
        MVPlayerContainer::MVPlayerContainer_UpdateTeam(pMVar1,actorNr,team,(MethodInfo *)0x0);
        pGVar5 = (this->fields).gameStatCounterManager;
        if (pGVar5 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_RemoveStatsFromActor
                    (pGVar5,actorNr,(MethodInfo *)0x0);
          pMVar1 = (this->fields).playerContainer;
          if ((pMVar1 != (MVPlayerContainer *)0x0) &&
             (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar1,(MethodInfo *)0x0), pMVar6 != (MVLocalPlayer *)0x0)) {
            if ((pMVar6->fields)._._ActorNr_k__BackingField != actorNr) {
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar7 != (MVGameControllerBase *)0x0) &&
               ((pMVar7->fields).game != (MVNetworkGame *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (pMVar7 != (MVGameControllerBase *)0x0) {
                cVar8 = (*(pMVar7->klass->vtable).__unknown_1.methodPtr)();
                if (cVar8 == '\0') {
                  return;
                }
                game = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((game != (MVNetworkGame *)0x0) &&
                    (pWVar9 = (game->fields).worldNetwork, pWVar9 != (WorldNetwork *)0x0)) &&
                   (this_00 = (pWVar9->fields)._.worldObjectClientManager,
                   this_00 != (MVWorldObjectClientManagerNetwork *)0x0)) {
                  MVWorldObjectClientManagerNetwork::
                  MVWorldObjectClientManagerNetwork_ResetLocalWorldObject(this_00,(MethodInfo *)0x0)
                  ;
                  this_01 = (game->fields)._GameCoinManager_k__BackingField;
                  if (this_01 != (MVGameCoinManager *)0x0) {
                    MVGameCoinManager::MVGameCoinManager_Reset(this_01,game,(MethodInfo *)0x0);
                    pMVar1 = (game->fields).playerContainer;
                    if ((pMVar1 != (MVPlayerContainer *)0x0) &&
                       (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                            (pMVar1,(MethodInfo *)0x0),
                       pMVar6 != (MVLocalPlayer *)0x0)) {
                      (pMVar6->fields)._.checkpointWOID = -1;
                      pMVar1 = (game->fields).playerContainer;
                      pGVar5 = (game->fields).gameStatCounterManager;
                      if ((pMVar1 != (MVPlayerContainer *)0x0) &&
                         ((pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                               (pMVar1,(MethodInfo *)0x0),
                          pMVar6 != (MVLocalPlayer *)0x0 &&
                          (pGVar5 != (GameStatCounterManager *)0x0)))) {
                        MVWorldObject.dll::GameStatCounterManager::
                        GameStatCounterManager_RemoveStatsFromActor
                                  (pGVar5,(pMVar6->fields)._._ActorNr_k__BackingField,
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
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnSetWorldObjectsToPurchasedEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
               (MVNetworkGame *this,int32_t purchaseProfileId,int32_t itemId,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 == (WorldNetwork *)0x0) ||
     (pMVar2 = (pWVar1->fields)._.worldObjectClientManager,
     pMVar2 == (MVWorldObjectClientManagerNetwork *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                  ,CONCAT44(in_register_00000014,purchaseProfileId),
                  CONCAT44(in_register_00000084,itemId),0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(pMVar2->fields)._.worldObjects;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
        pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar5 = uStack_6;
code_?:
    uStack_6 = uVar5;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_7 = (pDVar4->fields)._dictionary;
    puStack_8 = (undefined4 *)0x0;
    puStack_9 = (undefined *)0x0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_7 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    if (uStack_7 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_13 = (uStack_7->fields)._version;
    puStack_9 = (undefined *)0x0;
    uStack_7._4_4_ = (undefined4)((ulonglong)uStack_7 >> 0x20);
    uStack_14 = (undefined4)uStack_7;
    uStack_15 = uStack_7._4_4_;
    uStack_6 = 0;
    aplStack_16[0] = (longlong *)0x0;
    uStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_8 = &uStack_14;
    while (lVar17 = CONCAT44(uStack_15,uStack_14), lVar17 != 0) {
      if (iStack_13 != *(int *)(lVar17 + 0x2c)) goto code_?;
      do {
        if (lVar17 == 0) goto code_?;
        if (*(uint *)(lVar17 + 0x20) <= uStack_6) {
          return;
        }
        lVar18 = *(longlong *)(lVar17 + 0x18);
        lVar19 = (longlong)(int)uStack_6;
        uVar5 = uStack_6 + 1;
        if (lVar18 == 0) goto code_?;
        bVar20 = *(uint *)(lVar18 + 0x18) <= uStack_6;
        uStack_6 = uVar5;
        if (bVar20) goto code_?;
      } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
      aplStack_16[0] = *(longlong **)(lVar18 + (lVar19 + 2) * 0x18);
      func_?(aplStack_16);
      if (aplStack_16[0] == (longlong *)0x0) goto code_?;
      if ((*(int *)((longlong)aplStack_16[0] + 0x3c) == purchaseProfileId) &&
         ((int)aplStack_16[0][3] == itemId)) {
        (**(code **)(*aplStack_16[0] + 0x448))
                  (aplStack_16[0],*(undefined8 *)(*aplStack_16[0] + 0x450));
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnShopInventoryResultSetResponse(Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
               (MVNetworkGame *this,Dictionary_2_System_Object_System_Object_ *outData,bool isDone,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    lVar1 = FUN_?();
    if (lVar1 == 0) {
      this_01 = (PlayerShopInventoryRepository *)
                FUN_?(
                             TypeInfo__UGUI__Desktop__Scripts__EditMode__Inventories__PlayerShopInventoryRepository
                             );
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository__ctor(this_01,(MethodInfo *)0x0);
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) {
      uStack_2._0_4_ = 0x8095044c;
      uStack_2._4_4_ = 1;
      lVar1 = FUN_?();
      if (lVar1 != 0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        ,outData,isDone,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ShopItem);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((outData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
           (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                     UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                     Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                               ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                 *)outData,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                               ),
           pDVar3 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0)) {
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          uVar4 = (uint)uStack_2;
code_?:
          uStack_2._0_4_ = uVar4;
          FUN_?();
code_?:
          FUN_?();
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
        }
        else {
          pDStack_5 = (pDVar3->fields)._dictionary;
          ppDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         **)0x0;
          uStack_7 = 0;
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)&pDStack_8 >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          if (pDStack_5 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            pDStack_8 = pDStack_5;
            FUN_?();
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uStack_2._4_4_ = (pDStack_5->fields)._version;
          uStack_7 = 0;
          uStack_2._0_4_ = 0;
          aplStack_13[0] = (longlong *)0x0;
          pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0;
          ppDStack_6 = &pDStack_5;
          while (pDStack_5 !=
                 (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) {
            if (uStack_2._4_4_ != (pDStack_5->fields)._version) goto code_?;
            do {
              if (pDStack_5 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if ((uint)(pDStack_5->fields)._count <= (uint)uStack_2) {
                uStack_2._0_4_ = (pDStack_5->fields)._count + 1;
                aplStack_13[0] = (longlong *)0x0;
                if (isDone != 0) {
                  if (*(ClientShopRepository **)(lVar1 + 0x40) == (ClientShopRepository *)0x0)
                  goto code_?;
                  ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                            (*(ClientShopRepository **)(lVar1 + 0x40),(MethodInfo *)0x0);
                }
                return;
              }
              pDVar14 = (pDStack_5->fields)._entries;
              lVar15 = (longlong)(int)(uint)uStack_2;
              uVar4 = (uint)uStack_2 + 1;
              if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                             *)0x0) goto code_?;
              bVar16 = (uint)pDVar14->max_length <= (uint)uStack_2;
              uStack_2._0_4_ = uVar4;
              if (bVar16) goto code_?;
            } while ((&pDVar14->vector[0].hashCode)[lVar15 * 6] < 0);
            aplStack_13[0] = *(longlong **)((longlong)&pDVar14->vector[0].key + lVar15 * 0x18);
            func_?(aplStack_13);
            plVar17 = aplStack_13[0];
            this_00 = (ShopItem *)FUN_?();
            if (plVar17 == (longlong *)0x0) goto code_?;
            if (*(longlong *)(*plVar17 + 0x40) != *(longlong *)(lRam_? + 0x40))
            goto code_?;
            ShopItem::ShopItem__ctor(this_00,(int32_t)plVar17[2],outData,(MethodInfo *)0x0);
            lVar15 = *(longlong *)(lVar1 + 0x40);
            if (lVar15 == 0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_Item_in_inventory_with_category_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this_00 == (ShopItem *)0x0) goto code_?;
            if (*(Dictionary_2_System_Int32_UnityEngine_Vector3_ **)(lVar15 + 0x10) ==
                (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
            iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Vector3]::
                    Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                              (*(Dictionary_2_System_Int32_UnityEngine_Vector3_ **)(lVar15 + 0x10),
                               (this_00->fields).itemCategoryID,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
                               ->klass->rgctx_data[0x21].method);
            if (iVar18 < 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Item_in_inventory_with_category_,(MethodInfo *)0x0)
              ;
            }
            else {
              if (*(Dictionary_2_System_Int32_System_Object_ **)(lVar15 + 0x10) ==
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
              pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 (*(Dictionary_2_System_Int32_System_Object_ **)(lVar15 + 0x10),
                                  (this_00->fields).itemCategoryID,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                                 );
              if (pOVar19 == (Object *)0x0) goto code_?;
              FUN_?(pOVar19,this_00);
            }
          }
        }
        FUN_?();
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnStatusChanged(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnStatusChanged
               (MVNetworkGame *this,StatusCode__Enum statusCode,MethodInfo *method)

{
  pMVar1 = (this->fields).statusChangedHandling;
  if (pMVar1 == (MVNetworkGame_StatusChangedHandling *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DebugLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame_StatusChangedHandling____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Expecting_that_this_disconnect_i);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unhandled_PeerStatusCallback__re);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Disconnected_because__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PeerStatusCallback___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_3.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
  EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
  SStack_4 = statusCode;
  pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_PeerStatusCallback___,pSVar5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  this_00 = (pMVar1->fields).reconnectWithAlternatePortHandler;
  if (this_00 == (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) goto code_?;
  bVar6 = MVNetworkGame+ReconnectWithAlternatePortHandler::
          MVNetworkGame_ReconnectWithAlternatePortHandler_IsHandling
                    (this_00,statusCode,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_StatusCode_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Client_disconnected_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMVar1->fields).registeredFatalStatusCodeInStatHat == 0) {
    if (statusCode == StatusCode__Enum_Connect) goto code_?;
    if (statusCode != StatusCode__Enum_Disconnect) {
code_?:
      (pMVar1->fields).registeredFatalStatusCodeInStatHat = 1;
      EStack_3.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
      EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
      SStack_4 = statusCode;
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_StatusCode_,pSVar5,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar5,1,(MethodInfo *)0x0);
      EStack_3.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
      EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
      SStack_4 = statusCode;
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Client_disconnected_,pSVar5,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar5,(MethodInfo *)0x0);
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField == 0)
    goto code_?;
code_?:
    pMVar7 = (pMVar1->fields).networkGame;
    if (pMVar7 != (MVNetworkGame *)0x0) {
      if ((pMVar7->fields).connState == 0) {
        return;
      }
      (pMVar7->fields).connState = 1;
      pSVar5 = StringLiteral_Expecting_that_this_disconnect_i;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar5 = StringLiteral_Expecting_that_this_disconnect_i;
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar5,(MethodInfo *)0x0);
      return;
    }
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  switch(statusCode) {
  case StatusCode__Enum_SecurityExceptionOnConnect:
  case StatusCode__Enum_ExceptionOnConnect:
  case StatusCode__Enum_Exception:
  case StatusCode__Enum_SendError:
  case StatusCode__Enum_ExceptionOnReceive:
  case StatusCode__Enum_TimeoutDisconnect:
  case StatusCode__Enum_DisconnectByServerTimeout:
  case StatusCode__Enum_DisconnectByServerUserLimit:
  case StatusCode__Enum_DisconnectByServerLogic:
  case StatusCode__Enum_DisconnectByServerReasonUnknown:
    EStack_3.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
    EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
    SStack_4 = statusCode;
    pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Disconnected_because__,pSVar5,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
    pMVar7 = (pMVar1->fields).networkGame;
    if (pMVar7 != (MVNetworkGame *)0x0) {
      if ((pMVar7->fields).connState == 1) {
        return;
      }
      (pMVar7->fields).connState = 0;
      if (*(int *)&(TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_02 = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0;
      if (this_02 == (UnityAction *)0x0) {
        if (*(int *)&(TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9;
        this_02 = (UnityAction *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  ((NavMesh_OnNavMeshPreUpdate *)this_02,(Object *)object,
                   MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__,
                   (MethodInfo *)0x0);
        TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0 = this_02;
        func_?(&TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->
                             __9__5_0);
      }
      pIVar8 = WaitForFrames::WaitForFrames_WithCallback(5,this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Coroutines,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      obj = TypeInfo__Coroutines->static_fields->instance;
      if (obj == (Coroutines *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pIVar8 == (IEnumerator *)0x0) {
        uVar9 = func_?(&TypeInfo__System__NullReferenceException);
        this_03 = (NullReferenceException *)func_?(uVar9);
        pSVar5 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_03,pSVar5,(MethodInfo *)0x0);
        uVar9 = func_?(&
                                     MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                    );
        FUN_?(this_03,uVar9);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        uVar9 = func_?(&TypeInfo__System__ArgumentException);
        this_04 = (InvalidEnumArgumentException *)func_?(uVar9);
        pSVar5 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_04,pSVar5,(MethodInfo *)0x0);
        uVar9 = func_?(&
                                     MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                    );
        FUN_?(this_04,uVar9);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Coroutines *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar10 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar10,pIVar8);
      return;
    }
    goto code_?;
  case StatusCode__Enum_Connect:
code_?:
    if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DebugLogHandler);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__DebugLogHandler->_1).field_0x1c == 0) {
      FUN_?();
    }
    TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = 1;
    pMVar7 = (pMVar1->fields).networkGame;
    if ((pMVar7 != (MVNetworkGame *)0x0) &&
       (pPVar11 = (pMVar7->fields)._Peer_k__BackingField, pPVar11 != (PhotonPeer *)0x0)) {
      (pPVar11->fields).DebugOut = (pMVar7->fields).photonLoggingConfig.defaultDebugLevel;
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar12 != (MVNetworkGame_OperationRequests *)0x0) {
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
        pMVar7 = (pMVar12->fields).networkGame;
        if (pMVar7 != (MVNetworkGame *)0x0) {
          (pMVar7->fields).connState = 3;
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          pMVar13 = 
          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          pPVar11 = (pMVar12->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar11 != (PhotonPeer *)0x0) {
            (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                      (pPVar11,CONCAT71((int7)((ulonglong)pMVar13 >> 8),0xf8),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar11->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
    goto code_?;
  case StatusCode__Enum_Disconnect:
    goto code_?;
  default:
    EStack_3.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
    EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
    SStack_4 = statusCode;
    pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Unhandled_PeerStatusCallback__re,pSVar5,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    goto code_?;
  }
}


/* Void OnTransferOwnershipEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (photonEvent != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x57,(MethodInfo *)0x0);
    pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x17,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      key = *(int32_t *)&pOVar2[1].klass;
      pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x15,(MethodInfo *)0x0);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar2);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pWVar4 = (this->fields).worldNetwork;
        if (pWVar4 != (WorldNetwork *)0x0) {
          pMVar5 = (pWVar4->fields)._.worldObjectClientManager;
          iVar6 = *(int *)&pOVar2[1].klass;
          if (pMVar5 != (MVWorldObjectClientManagerNetwork *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                      (pMVar5->fields)._.worldObjects;
            if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
              iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Vector3]::
                       Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                 (this_00,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                                  ->klass->rgctx_data[0x21].method);
              if (-1 < iVar7) {
                pDVar8 = (pMVar5->fields)._.worldObjects;
                if (pDVar8 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
                goto code_?;
                pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                    );
                if (pOVar2 == (Object *)0x0) goto code_?;
                *(int *)&pOVar2[3].monitor = iVar6;
                pDVar8 = (pMVar5->fields)._.worldObjects;
                if (pDVar8 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
                goto code_?;
                pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                    );
                if (iVar6 == 0) {
                  if (pOVar2 == (Object *)0x0) goto code_?;
                  (*(code *)pOVar2->klass[3].vtable.Equals.method)
                            (pOVar2,pOVar2->klass[3].vtable.Finalize.methodPtr);
                }
                else {
                  if (pOVar2 == (Object *)0x0) goto code_?;
                  aQStack_9[0].x = _UNK_?;
                  aQStack_9[0].y = _UNK_?;
                  aQStack_9[0].z = _UNK_?;
                  aQStack_9[0].w = _UNK_?;
                  (**(code **)&pOVar2->klass[3]._1.naturalAligment)(pOVar2,aQStack_9);
                }
              }
              if (pOVar1 != (Object *)0x0) {
                if ((pOVar1->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar1);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (*(char *)&pOVar1[1].klass != '\0') {
                  if (((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
                     (this_01 = (MVWorldObjectClientManager *)
                                (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
                     this_01 == (MVWorldObjectClientManager *)0x0)) goto code_?;
                  pMVar10 = MVWorldObjectClientManager::
                            MVWorldObjectClientManager_GetWorldObjectClient
                                      (this_01,key,(MethodInfo *)0x0);
                  if (pMVar10 != (MVWorldObjectClient *)0x0) {
                    pVVar11 = MVWorldObject.dll::MV::WorldObject::TransformHelper::
                              TransformHelper_GetPosition
                                        ((Vector3 *)aQStack_9,(photonEvent->fields).Parameters,
                                         (MethodInfo *)0x0);
                    uVar12._0_4_ = pVVar11->x;
                    uVar12._4_4_ = pVVar11->y;
                    fVar13 = pVVar11->z;
                    pQVar14 = MVWorldObject.dll::MV::WorldObject::TransformHelper::
                              TransformHelper_GetRotation
                                        (aQStack_9,(photonEvent->fields).Parameters,
                                         (MethodInfo *)0x0);
                    this_02 = (this->fields).transformNetworkManager;
                    uVar15._0_4_ = pQVar14->x;
                    uVar15._4_4_ = pQVar14->y;
                    uVar16._0_4_ = pQVar14->z;
                    uVar16._4_4_ = pQVar14->w;
                    if (this_02 == (TransformNetworkManager *)0x0) goto code_?;
                    TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                              (this_02,key,(MethodInfo *)0x0);
                    aQStack_9[0].z = fVar13;
                    aQStack_9[0]._0_8_ = uVar12;
                    (*(pMVar10->klass->vtable).set_Position.methodPtr)
                              (pMVar10,aQStack_9,(pMVar10->klass->vtable).set_Position.method);
                    aQStack_9[0]._0_8_ = uVar15;
                    aQStack_9[0]._8_8_ = uVar16;
                    (*(pMVar10->klass->vtable).set_Rotation.methodPtr)
                              (pMVar10,aQStack_9,(pMVar10->klass->vtable).set_Rotation.method);
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnTransferOwnershipResponse(Dictionary`2[System.Byte,System.Object], Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
               (MVNetworkGame *this,Dictionary_2_System_Byte_System_Object_ *returnValues,
               int32_t returnCode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    plVar1 = (longlong *)FUN_?(returnValues,0x17);
    if (plVar1 != (longlong *)0x0) {
      if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar3 = plVar1[2];
      plVar1 = (longlong *)
               FUN_?(returnValues,CONCAT71((int7)((ulonglong)*plVar1 >> 8),0x15));
      if (plVar1 != (longlong *)0x0) {
        if (*(longlong *)(*plVar1 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pWVar4 = (this->fields).worldNetwork;
        if (pWVar4 != (WorldNetwork *)0x0) {
          this_00 = (pWVar4->fields)._.worldObjectClientManager;
          if (returnCode == 0) {
            if (this_00 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
            success = 1;
          }
          else {
            if (this_00 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
            success = 0;
          }
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
                    (this_00,(int32_t)lVar3,(int32_t)plVar1[2],success,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTransferWorldObjectsToGroup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
               (MVNetworkGame *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((eventData != (EventData *)0x0) &&
     (pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (eventData,0x17,(MethodInfo *)0x0), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    key = *(int32_t *)&pOVar1[1].klass;
    pOVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x4b,(MethodInfo *)0x0);
    pIVar4 = TypeInfo__System__Int32;
    pOVar5 = (Object *)0x0;
    pOVar1 = pOVar5;
    if ((pOVar3 != (Object *)0x0) &&
       (pOVar1 = (Object *)FUN_?(pOVar3,TypeInfo__System__Int32), pOVar1 == (Object *)0x0))
    {
      FUN_?(pOVar3,pIVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pWVar6 = (this->fields).worldNetwork;
    if ((pWVar6 != (WorldNetwork *)0x0) &&
       (pMVar7 = (pWVar6->fields)._.worldObjectClientManager,
       pMVar7 != (MVWorldObjectClientManagerNetwork *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MVGroup);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar7->fields)._.worldObjects;
      if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        pOVar3 = pOVar5;
        if (pOVar8 != (Object *)0x0) {
          bVar9 = (TypeInfo__MVGroup->_1).naturalAligment;
          if (((pOVar8->klass->_1).naturalAligment < bVar9) ||
             (pOVar3 = pOVar8,
             (MVGroup__Class *)(pOVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
             TypeInfo__MVGroup)) {
            FUN_?(pOVar8);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (pOVar1 != (Object *)0x0) {
          pOVar8 = pOVar1 + 2;
          while( true ) {
            uVar10 = (uint)pOVar5;
            if (*(int *)&pOVar1[1].monitor <= (int)uVar10) {
              return;
            }
            if (*(uint *)&pOVar1[1].monitor <= uVar10) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (pOVar3 == (Object *)0x0) break;
            (*(code *)pOVar3->klass[4]._0.methods)
                      (pOVar3,*(undefined4 *)&pOVar8->klass,pOVar3->klass[4]._0.nestedTypes);
            pOVar5 = (Object *)(ulonglong)(uVar10 + 1);
            pOVar8 = (Object *)((longlong)&pOVar8->klass + 4);
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnTriggerBoxEnterEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
               (MVNetworkGame *this,int32_t actorNr,int32_t worldObjectID,MethodInfo *method)

{
  aIStackX_18[0].m_value = worldObjectID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTriggerBox);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__does_not_exist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnTriggerBoxStayBegin_received__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnTriggerBoxEnterEvent_received_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)
               (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,worldObjectID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_OnTriggerBoxEnterEvent_received_;
      str2 = StringLiteral__does_not_exist;
    }
    else {
      if (((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
         (pMVar1 = (MVWorldObjectClientManager *)
                   (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar1 == (MVWorldObjectClientManager *)0x0)) goto code_?;
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,worldObjectID,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        bVar4 = (TypeInfo__MVTriggerBox->_1).naturalAligment;
        if ((bVar4 <= (pMVar2->klass->_1).naturalAligment) &&
           ((MVTriggerBox__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
            TypeInfo__MVTriggerBox)) {
          if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
             (pMVar1 = (MVWorldObjectClientManager *)
                       (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
             pMVar1 != (MVWorldObjectClientManager *)0x0)) {
            pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar1,worldObjectID,(MethodInfo *)0x0);
            pMVar5 = (this->fields).playerContainer;
            if (pMVar5 != (MVPlayerContainer *)0x0) {
              MVPlayerContainer::MVPlayerContainer_get_Item(pMVar5,actorNr,(MethodInfo *)0x0);
              if (pMVar2 != (MVWorldObjectClient *)0x0) {
                bVar4 = (TypeInfo__MVTriggerBox->_1).naturalAligment;
                if (((pMVar2->klass->_1).naturalAligment < bVar4) ||
                   ((MVTriggerBox__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1]
                    != TypeInfo__MVTriggerBox)) {
                  FUN_?(pMVar2);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar7 != (MVGameControllerBase *)0x0) &&
                    (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
                   (pMVar5 = (pMVar8->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0))
                {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVLocalPlayer,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar9 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                      (pMVar5,(pMVar5->fields).localPlayerActorNumber,
                                       (MethodInfo *)0x0);
                  if (pMVar9 != (MVPlayer *)0x0) {
                    pMVar10 = pMVar9->klass;
                    bVar4 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
                    if (((pMVar10->_1).naturalAligment < bVar4) ||
                       ((pMVar10->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
                        (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
                      FUN_?(pMVar9,TypeInfo__MVLocalPlayer,TypeInfo__MVLocalPlayer,pMVar10,
                                    unaff_RBX);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
      str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_OnTriggerBoxStayBegin_received__;
      str2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_5(pSVar3,str1,str2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar11 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,0,pSVar3);
      return;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnTriggerBoxExitEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
               (MVNetworkGame *this,int32_t actorNr,int32_t worldObjectID,MethodInfo *method)

{
  aIStackX_18[0].m_value = worldObjectID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTriggerBox);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__does_not_exist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnTriggerBoxStayBegin_received__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnTriggerBoxExitEvent_received__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)
               (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,worldObjectID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_OnTriggerBoxExitEvent_received__;
      str2 = StringLiteral__does_not_exist;
    }
    else {
      if (((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
         (pMVar1 = (MVWorldObjectClientManager *)
                   (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar1 == (MVWorldObjectClientManager *)0x0)) goto code_?;
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,worldObjectID,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        bVar4 = (TypeInfo__MVTriggerBox->_1).naturalAligment;
        if ((bVar4 <= (pMVar2->klass->_1).naturalAligment) &&
           ((MVTriggerBox__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
            TypeInfo__MVTriggerBox)) {
          if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
             (pMVar1 = (MVWorldObjectClientManager *)
                       (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
             pMVar1 != (MVWorldObjectClientManager *)0x0)) {
            pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar1,worldObjectID,(MethodInfo *)0x0);
            pMVar5 = (this->fields).playerContainer;
            if (pMVar5 != (MVPlayerContainer *)0x0) {
              MVPlayerContainer::MVPlayerContainer_get_Item(pMVar5,actorNr,(MethodInfo *)0x0);
              if (pMVar2 != (MVWorldObjectClient *)0x0) {
                bVar4 = (TypeInfo__MVTriggerBox->_1).naturalAligment;
                if (((pMVar2->klass->_1).naturalAligment < bVar4) ||
                   ((MVTriggerBox__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1]
                    != TypeInfo__MVTriggerBox)) {
                  FUN_?(pMVar2);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar7 != (MVGameControllerBase *)0x0) &&
                    (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
                   (pMVar5 = (pMVar8->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0))
                {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVLocalPlayer,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar9 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                      (pMVar5,(pMVar5->fields).localPlayerActorNumber,
                                       (MethodInfo *)0x0);
                  if (pMVar9 != (MVPlayer *)0x0) {
                    pMVar10 = pMVar9->klass;
                    bVar4 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
                    if (((pMVar10->_1).naturalAligment < bVar4) ||
                       ((pMVar10->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
                        (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
                      FUN_?(pMVar9,TypeInfo__MVLocalPlayer,TypeInfo__MVLocalPlayer,pMVar10,
                                    unaff_RBX);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
      str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_OnTriggerBoxStayBegin_received__;
      str2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_5(pSVar3,str1,str2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar11 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,0,pSVar3);
      return;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnTriggerBoxStayBegin(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
               (MVNetworkGame *this,int32_t worldObjectID,int32_t instigatorId,MethodInfo *method)

{
  aIStackX_10[0].m_value = worldObjectID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ITriggerBoxEventsHandler);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__does_not_exist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnTriggerBoxStayBegin_received__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
     (this_00 = (MVWorldObjectClientManager *)
                (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 == (MVWorldObjectClientManager *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (this_00,worldObjectID,(MethodInfo *)0x0);
  if (pMVar2 == (MVWorldObjectClient *)0x0) {
    str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    pSVar3 = StringLiteral__does_not_exist;
  }
  else {
    plVar4 = (longlong *)FUN_?();
    if (plVar4 != (longlong *)0x0) {
      uVar5 = 0;
      lVar6 = *plVar4;
      if (*(ushort *)(lVar6 + 0x12e) != 0) {
        do {
          if (*(ITriggerBoxEventsHandler__Class **)
               (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
              TypeInfo__ITriggerBoxEventsHandler) {
            puVar7 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10)
                      * 0x10 + 0x138 + lVar6);
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(lVar6 + 0x12e));
      }
      puVar7 = (undefined8 *)FUN_?(plVar4);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(plVar4,instigatorId,puVar7[1],(code *)*puVar7);
      return;
    }
    str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    pSVar3 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_OnTriggerBoxStayBegin_received__,str1,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar8 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,0,pSVar3);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnTriggerBoxStayEnd(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  aIStackX_10[0].m_value = worldObjectID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ITriggerBoxEventsHandler);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__does_not_exist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_a_triggerbox_or_a_toggle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnTriggerBoxStayEnd_received__bu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
     (this_00 = (MVWorldObjectClientManager *)
                (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 == (MVWorldObjectClientManager *)0x0)) {
    FUN_?();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (this_00,worldObjectID,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    pSVar2 = StringLiteral__does_not_exist;
  }
  else {
    plVar3 = (longlong *)FUN_?(pMVar1);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = 0;
      lVar5 = *plVar3;
      if (*(ushort *)(lVar5 + 0x12e) != 0) {
        do {
          if (*(ITriggerBoxEventsHandler__Class **)
               (*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar4 * 0x10) ==
              TypeInfo__ITriggerBoxEventsHandler) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar4 * 0x10) + 1) *
                      0x10 + 0x138 + lVar5);
            UNRECOVERED_JUMPTABLE = (code *)*puVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar3,puVar6[1],UNRECOVERED_JUMPTABLE);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_?(plVar3);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(plVar3,puVar6[1],(code *)*puVar6);
      return;
    }
    str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    pSVar2 = StringLiteral__is_not_a_triggerbox_or_a_toggle;
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_OnTriggerBoxStayEnd_received__bu,str1,pSVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar7 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,0,pSVar2);
    return;
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
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
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Failed_to_remove_runtime_prototy);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar2->fields).runtimePrototypes;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar4 = StringLiteral_Failed_to_remove_runtime_prototy;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar5 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0,pSVar4);
          return;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pDVar7 = (pMVar2->fields).runtimePrototypes;
      if (pDVar7 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
        this_01 = (RuntimePrototypeCubeModel *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,worldInventoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            );
        if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy(this_01,(MethodInfo *)0x0);
          pDVar7 = (pMVar2->fields).runtimePrototypes;
          if (pDVar7 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,worldInventoryID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                      );
            pMVar8 = (pMVar2->fields).OnWorldInventoryChange;
            if (pMVar8 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
              (*(pMVar8->fields)._._.invoke_impl)
                        ((pMVar8->fields)._._.method_code,pMVar2,(pMVar8->fields)._._.method);
            }
            return;
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
    if (bVar2 != 0) {
      this_01 = (pWVar1->fields)._.worldObjectClientManager;
      if (this_01 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                (this_01,worldObjectID,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUnregisterWorldObjectResponse(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
               (MVNetworkGame *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnUnregisterWorldObjectResponse_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 != (WorldNetwork *)0x0) &&
     (this_00 = (MVWorldObjectClientManager *)(pWVar1->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                      (this_00,worldObjectID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = StringLiteral_OnUnregisterWorldObjectResponse_;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_01 = (pWVar1->fields)._.worldObjectClientManager;
    if (this_01 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                (this_01,worldObjectID,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnUpdateLineOfFire(Int32, Vector3, Vector3) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
               (MVNetworkGame *this,int32_t worldObjectID,Vector3 *camOrigin,Vector3 *camDir,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pickup_owner_not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((((this->fields).worldNetwork == (WorldNetwork *)0x0) ||
       (this_00 = (MVWorldObjectClientManager *)
                  (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
       this_00 == (MVWorldObjectClientManager *)0x0)) ||
      (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_00,worldObjectID,(MethodInfo *)0x0),
      pMVar1 == (MVWorldObjectClient *)0x0)) ||
     (this_01 = (pMVar1->fields).gameObject, this_01 == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (this_01,
                      MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                     );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar3 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar3[1].klass != (Object__Class *)0x0) {
      fVar4 = camOrigin->z;
      pOVar3[3].klass = *(Object__Class **)camOrigin;
      uVar5 = *(undefined8 *)camDir;
      *(float *)&pOVar3[3].monitor = fVar4;
      fVar4 = camDir->z;
      *(undefined8 *)((longlong)&pOVar3[3].monitor + 4) = uVar5;
      *(float *)((longlong)&pOVar3[4].klass + 4) = fVar4;
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Pickup_owner_not_found,(MethodInfo *)0x0);
  return;
}


/* Void OnUpdateWorldObjectEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NetworkTransformPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x17,(MethodInfo *)0x0), pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      woID = *(int32_t *)&pOVar2[1].klass;
      p = (NetworkTransformPackage *)FUN_?(TypeInfo__NetworkTransformPackage);
      pVVar4 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_5,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      fVar6 = pVVar4->z;
      if (p != (NetworkTransformPackage *)0x0) {
        fVar7 = pVVar4->y;
        (p->fields).position.x = pVVar4->x;
        (p->fields).position.y = fVar7;
        (p->fields).position.z = fVar6;
        pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xa0,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
          FUN_?();
        }
        pBVar8 = TypeInfo__System__Byte;
        if (pOVar2 == (Object *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = FUN_?(pOVar2,TypeInfo__System__Byte);
          if (lVar9 == 0) {
            FUN_?(pOVar2,pBVar8);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MV__WorldObject__QuaternionCompression);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (lVar9 != 0) {
          if (((*(int *)(lVar9 + 0x18) == 0) || (*(uint *)(lVar9 + 0x18) < 2)) ||
             (*(uint *)(lVar9 + 0x18) < 3)) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar10 = *(byte *)(lVar9 + 0x20);
          bVar11 = *(byte *)(lVar9 + 0x21);
          bVar12 = *(byte *)(lVar9 + 0x22);
          if (*(int *)&(TypeInfo__MV__WorldObject__QuaternionCompression->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar6 = TypeInfo__MV__WorldObject__QuaternionCompression->static_fields->
                  byteToDegreeFactor;
          VStack_5.z = fVar6 * (float)bVar12;
          VStack_5.y = fVar6 * (float)bVar11;
          VStack_5.x = fVar6 * (float)bVar10;
          pQVar13 = MVWorldObject.dll::MV::WorldObject::QuaternionCompression::
                    QuaternionCompression_FromEuler(aQStack_14,&VStack_5,(MethodInfo *)0x0);
          fVar6 = pQVar13->y;
          fVar7 = pQVar13->z;
          fVar15 = pQVar13->w;
          (p->fields).rotation.x = pQVar13->x;
          (p->fields).rotation.y = fVar6;
          (p->fields).rotation.z = fVar7;
          (p->fields).rotation.w = fVar15;
          pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0x24,(MethodInfo *)0x0);
          if (pOVar2 != (Object *)0x0) {
            if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar2,lRam_?);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (p->fields).timestamp = *(int32_t *)&pOVar2[1].klass;
            pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x25,(MethodInfo *)0x0);
            if (pOVar2 != (Object *)0x0) {
              if ((pOVar2->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar2);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              (p->fields).packageType = *(uint8_t *)&pOVar2[1].klass;
              this_00 = (this->fields).transformNetworkManager;
              if (this_00 != (TransformNetworkManager *)0x0) {
                TransformNetworkManager::TransformNetworkManager_AddTransformPackage
                          (this_00,woID,p,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnWoUniquePrototypeEvent(Int32, Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
               (MVNetworkGame *this,int32_t woId,int32_t worldInventoryId,MethodInfo *method)

{
  pWVar1 = (this->fields).worldNetwork;
  if ((pWVar1 == (WorldNetwork *)0x0) ||
     (pMVar2 = (pWVar1->fields)._.worldInventory, pMVar2 == (MVWorldInventory *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<float>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<float>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pending_runtime_prototype_alread);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_protoTypeID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar5 = (pMVar2->fields).pendingRuntimePrototypes;
  if (pDVar5 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                    (pDVar5,woId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar6 < 0) {
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_02 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar7,woId,(MethodInfo *)0x0);
    if (this_02 == (MVCubeModelBase *)0x0) goto code_?;
    bVar8 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((this_02->klass->_1).naturalAligment < bVar8) ||
       ((MVCubeModelInstance__Class *)(this_02->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      FUN_?(this_02,TypeInfo__MVCubeModelInstance);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pRVar9 = (this_02->fields).prototypeCubeModel;
    if ((pRVar9 == (RuntimePrototypeCubeModel *)0x0) ||
       (pDVar10 = (pMVar2->fields).runtimePrototypes,
       pDVar10 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0))
    goto code_?;
    pRVar9 = (RuntimePrototypeCubeModel *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,
                         (pRVar9->fields).prototypeId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    if (pRVar9 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    NVar11 = (pRVar9->fields).PendingScaleUpdate;
    pRVar9 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                        (pRVar9,0,(MethodInfo *)0x0);
    if (pRVar9 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar9->fields).prototypeId = worldInventoryId;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
              (pRVar9,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
    pDVar10 = (pMVar2->fields).runtimePrototypes;
    if (pDVar10 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,worldInventoryId,(Object *)pRVar9
               ,(InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
               ->klass->rgctx_data[0x22].method);
    this_00 = (this_02->fields).prototypeCubeModel;
    if (this_00 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
              (this_00,woId,(MethodInfo *)0x0);
    MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel(this_02,pRVar9,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar9,this_02,(MethodInfo *)0x0);
    pDVar12 = (this_02->fields)._._.data;
    aiStackX_10[0] = worldInventoryId;
    pOVar13 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar12,(Object *)StringLiteral_protoTypeID,pOVar13,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  else {
    pDVar5 = (pMVar2->fields).pendingRuntimePrototypes;
    if (pDVar5 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    lVar14 = FUN_?(auStack_15,pDVar5,woId);
    pRVar9 = *(RuntimePrototypeCubeModel **)(lVar14 + 8);
    if (pRVar9 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    NVar11 = (pRVar9->fields).PendingScaleUpdate;
    (pRVar9->fields).prototypeId = worldInventoryId;
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar2->fields).runtimePrototypes;
    if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
    iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_01,worldInventoryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar6 < 0) {
      pDVar10 = (pMVar2->fields).runtimePrototypes;
      if (pDVar10 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,worldInventoryId,
                 (Object *)pRVar9,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                 ->klass->rgctx_data[0x22].method);
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                (pRVar9,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar7,woId,(MethodInfo *)0x0);
      if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
      pMVar17 = pMVar16->klass;
      bVar8 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar17->_1).naturalAligment < bVar8) ||
         ((MVCubeModelInstance__Class *)(pMVar17->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        FUN_?(pMVar16,TypeInfo__MVCubeModelInstance);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pDVar12 = (pMVar16->fields)._.data;
      aiStackX_10[0] = worldInventoryId;
      pOVar13 = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar12,(Object *)StringLiteral_protoTypeID,pOVar13,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar17 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Pending_runtime_prototype_alread,(MethodInfo *)0x0);
    }
    pDVar5 = (pMVar2->fields).pendingRuntimePrototypes;
    if (pDVar5 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,PendingPrototypeData]::
    Dictionary_2_System_Int32_PendingPrototypeData__Remove
              (pDVar5,woId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
              );
  }
  if (NVar11.hasValue != 0) {
    this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_03 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fStackX_c = NVar11.value;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototypeScale
              (this_03,worldInventoryId,fStackX_c,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnWorldObjectRPCEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_update_world_object__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    if ((photonEvent != (EventData *)0x0) &&
       (pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0x17,(MethodInfo *)0x0), pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      id = *(int32_t *)&pOVar2[1].klass;
      if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
         (pMVar4 = (MVWorldObjectClientManager *)
                   (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar4 != (MVWorldObjectClientManager *)0x0)) {
        pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar4,id,(MethodInfo *)0x0);
        if (pMVar5 == (MVWorldObjectClient *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
          return;
        }
        pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                           (photonEvent,0xfe,(MethodInfo *)0x0);
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar2,lRam_?);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (this->fields).playerContainer;
          if (((this_00 != (MVPlayerContainer *)0x0) &&
              (pMVar6 = MVPlayerContainer::MVPlayerContainer_get_Item
                                  (this_00,*(int32_t *)&pOVar2[1].klass,(MethodInfo *)0x0),
              (this->fields).worldNetwork != (WorldNetwork *)0x0)) &&
             (pMVar4 = (MVWorldObjectClientManager *)
                       (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
             pMVar4 != (MVWorldObjectClientManager *)0x0)) {
            pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar4,id,(MethodInfo *)0x0);
            pOVar2 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (photonEvent,0x56,(MethodInfo *)0x0);
            if (pMVar5 != (MVWorldObjectClient *)0x0) {
              if (pOVar2 != (Object *)0x0) {
                bVar7 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                if (((pOVar2->klass->_1).naturalAligment < bVar7) ||
                   ((Dictionary_2_System_Object_System_Object___Class *)
                    (pOVar2->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   )) {
                  FUN_?(pOVar2);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              (*(pMVar5->klass->vtable).ReceivePackage.methodPtr)
                        (pMVar5,pMVar6,pOVar2,(pMVar5->klass->vtable).ReceivePackage.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PlayModeSetup(EventData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_PlayModeSetup
               (MVNetworkGame *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (photonEvent != (EventData *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0xd,(MethodInfo *)0x0);
    buffer = (Dictionary_2_System_Object_System_Object_ *)0x0;
    userList = buffer;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
         (userList = pDVar1,
         (Dictionary_2_System_Object_System_Object___Class *)
         (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar1);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    MVNetworkGame_CreatePlayersFromUserList(this,userList,(MethodInfo *)0x0);
    pOVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x44,(MethodInfo *)0x0);
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int32_t *)&pOVar4[1].klass;
      pOVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x46,(MethodInfo *)0x0);
      if (pOVar4 != (Object *)0x0) {
        if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar4);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)&pOVar4[1].klass;
        pOVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x45,(MethodInfo *)0x0);
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar4);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = *(int *)&pOVar4[1].klass;
          pOVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xa1,(MethodInfo *)0x0);
          pBVar8 = TypeInfo__System__Byte;
          if ((pOVar4 != (Object *)0x0) &&
             (buffer = (Dictionary_2_System_Object_System_Object_ *)
                       FUN_?(pOVar4,TypeInfo__System__Byte),
             buffer == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
            FUN_?(pOVar4,pBVar8);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (this->fields).gameStatCounterManager;
          if (this_00 != (GameStatCounterManager *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_02 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
            MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                      (this_02,(Byte__Array *)buffer,(MethodInfo *)0x0);
            if (this_02 != (BytePacker *)0x0) {
              uVar9 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                                (this_02,(MethodInfo *)0x0);
              if (0 < (int)uVar9) {
                uVar10 = (ulonglong)uVar9;
                do {
                  MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat_1
                            (this_00,this_02,(MethodInfo *)0x0);
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              pMVar11 = (this->fields)._NetworkGameStateListener_k__BackingField;
              if (pMVar11 != (MVNetworkGameStateListener *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__GameStateChangeEventArgs);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                bVar12 = cRam_? == '\0';
                (pMVar11->fields).currentGameState = iVar5;
                (pMVar11->fields).startTime = iVar6;
                (pMVar11->fields).duration = iVar7;
                if (bVar12) {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar13 != (MVGameControllerBase *)0x0) &&
                   (this_01 = (pMVar13->fields).game, this_01 != (MVNetworkGame *)0x0)) {
                  iVar5 = MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
                  (pMVar11->fields).timeLeft = (iVar7 + iVar6) - iVar5;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
          (pMVar3->fields)._.checkpointWOID = -1;
          pMVar2 = (this->fields).playerContainer;
          pGVar4 = (this->fields).gameStatCounterManager;
          if (pMVar2 != (MVPlayerContainer *)0x0) {
            pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0)
            ;
            if ((pMVar3 != (MVLocalPlayer *)0x0) && (pGVar4 != (GameStatCounterManager *)0x0)) {
              actorNumber = (pMVar3->fields)._._ActorNr_k__BackingField;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__GetEnumerator__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__Dispose__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__get_Current__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__KeyValuePair<GameStatCounterType,_TeamsCounter>__get_Value__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar5 = (pGVar4->fields).statTypeCounters;
              if (pDVar5 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
                if (iRam_? != 0) {
                  uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
                  lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                    puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                    LOCK();
                    bVar11 = uVar9 == *puVar10;
                    if (bVar11) {
                      *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar11);
                }
                uStack_12 = (ulonglong)(uint)(pDVar5->fields)._version;
                uStack_13 = 2;
                uStack_14 = 0;
                uStack_15 = 0;
                auStack_16._8_8_ = uStack_12;
                puStack_17 = (undefined *)0x0;
                pTStack_18 = (TeamsCounter *)0x0;
                uStack_19._0_4_ = 2;
                uStack_19._4_4_ = 0;
                pDStack_7 = pDVar5;
                auStack_16._0_8_ = pDVar5;
                while (bVar20 = mscorlib.dll::System::Collections::Generic::
                               Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]
                               ::
                               Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                                         ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_
                                           *)auStack_16,
                                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                                         ), bVar20 != 0) {
                  if (pTStack_18 == (TeamsCounter *)0x0) {
                    FUN_?();
                    FUN_?();
                    goto code_?;
                  }
                  MVWorldObject.dll::TeamsCounter::TeamsCounter_RemoveStatsFromActor
                            (pTStack_18,actorNumber,(MethodInfo *)0x0);
                }
                pDVar5 = (pGVar4->fields).persistentStats;
                if (pDVar5 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
                  uStack_14 = 0;
                  uStack_15 = 0;
                  if (iRam_? != 0) {
                    uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
                    lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                      LOCK();
                      bVar11 = uVar9 == *puVar10;
                      if (bVar11) {
                        *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar11);
                  }
                  uStack_12 = (ulonglong)(uint)(pDVar5->fields)._version;
                  uStack_13 = 2;
                  auStack_16._8_8_ = uStack_12;
                  puStack_17 = (undefined *)0x0;
                  pTStack_18 = (TeamsCounter *)0x0;
                  uStack_19._0_4_ = 2;
                  uStack_19._4_4_ = 0;
                  pDStack_7 = pDVar5;
                  auStack_16._0_8_ = pDVar5;
                  while( true ) {
                    bVar20 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                            Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                                      ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_
                                        *)auStack_16,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<GameStatCounterType,_TeamsCounter>__MoveNext__
                                      );
                    if (bVar20 == 0) {
                      return;
                    }
                    if (pTStack_18 == (TeamsCounter *)0x0) break;
                    MVWorldObject.dll::TeamsCounter::TeamsCounter_RemoveStatsFromActor
                              (pTStack_18,actorNumber,(MethodInfo *)0x0);
                  }
code_?:
                  FUN_?();
                  FUN_?();
                  pcVar21 = (code *)swi(3);
                  (*pcVar21)();
                  return;
                }
              }
              FUN_?();
              pcVar21 = (code *)swi(3);
              (*pcVar21)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void Service() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Service
               (MVNetworkGame *this,MethodInfo *method)

{
  if ((this->fields)._Peer_k__BackingField != (PhotonPeer *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if (_UNK_? <= fVar3 - (this->fields).prevServiceCallTime) {
      pPVar4 = (this->fields)._Peer_k__BackingField;
      if (pPVar4 == (PhotonPeer *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(pPVar4->klass->vtable).Service.methodPtr)(pPVar4,(pPVar4->klass->vtable).Service.method);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar3 = (float)(*pcRam_?)();
      (this->fields).prevServiceCallTime = fVar3;
    }
  }
  return;
}


/* Void SetupLogicManager(Int32) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_SetupLogicManager
               (MVNetworkGame *this,int32_t stepTimestamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__LogicObjectManagerClientWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LogicObjectManagerClient);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stepTimestamp_is_not_correctly_i);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (stepTimestamp != (stepTimestamp / 1000) * 1000) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_stepTimestamp_is_not_correctly_i,(MethodInfo *)0x0);
  }
  pLVar1 = (LogicObjectManagerClient *)FUN_?(TypeInfo__LogicObjectManagerClient);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (pLVar1->fields)._.logicWorldObjects = (Dictionary_2_System_Int32_IInputSignalReceiver_ *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pHVar7 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar7,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  iVar8 = iRam_?;
  (pLVar1->fields)._.updatedIds = pHVar7;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(pLVar1->fields)._.updatedIds >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar2);
  }
  (pLVar1->fields)._.trackLoops = 0;
  (pLVar1->fields)._._TimeStamp_k__BackingField = stepTimestamp;
  (this->fields)._LogicObjectManager_k__BackingField = pLVar1;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._LogicObjectManager_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_01 = (MVNetworkGame_LogicObjectManagerClientWrapper *)
            FUN_?(TypeInfo__MVNetworkGame__LogicObjectManagerClientWrapper);
  MVNetworkGame+LogicObjectManagerClientWrapper::MVNetworkGame_LogicObjectManagerClientWrapper__ctor
            (this_01,this,stepTimestamp,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).logicObjectManagerClientWrapper = this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).logicObjectManagerClientWrapper >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
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
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                  ,CONCAT44(in_register_00000014,eventCode),callback,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)
            (pMVar2->fields).eventsHandledByDynamicEventCallbackManager;
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
             HashSet_1_System_ByteEnum__Contains
                       (this_00,eventCode & 0xff,
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                       );
    if (bVar5 == 0) {
      uVar4 = func_?(&TypeInfo__System__Exception);
      this_02 = (Exception *)func_?(uVar4);
      message = (String *)func_?(&StringLiteral_Event_not_handled_by_dynamic_eve);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_02,message,(MethodInfo *)0x0);
      uVar4 = func_?(&
                                   MethodInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager__SubscribeToEvent_MV__Common__MVEventCodes__System__Action<ExitGames::Client::Photon::EventData>_
                                  );
      FUN_?(this_02,uVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_01 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)(pMVar2->fields).eventCallbacks;
    if (this_01 !=
        (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *
        )0x0) {
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
               WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
               Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                         (this_01,eventCode & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                          ->klass->rgctx_data[0x21].method);
      if (iVar6 < 0) {
        pDVar7 = (pMVar2->fields).eventCallbacks;
        pOVar8 = (Object *)
                  FUN_?(
                               TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback
                               );
        if (pDVar7 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto DAT_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,eventCode & 0xff,pOVar8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar7 = (pMVar2->fields).eventCallbacks;
      if ((pDVar7 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                      *)0x0) &&
         (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                               eventCode & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                              ), pOVar8 != (Object *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar9 = pOVar8 + 1;
        a = pOVar8[1].klass;
        do {
          pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0);
          pAVar11 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
          if (pDVar10 == (Delegate *)0x0) {
            pOVar12 = (Object__Class *)0x0;
          }
          else {
            pOVar12 = (Object__Class *)
                      FUN_?(pDVar10,
                                    TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
            if (pOVar12 == (Object__Class *)0x0) {
              FUN_?(pDVar10,pAVar11);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          LOCK();
          pOVar13 = pOVar9->klass;
          bVar14 = a == pOVar13;
          if (bVar14) {
            pOVar9->klass = pOVar12;
            pOVar13 = a;
          }
          UNLOCK();
          pOVar12 = a;
          if (!bVar14) {
            pOVar12 = pOVar13;
          }
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)pOVar9 >> 0xc);
            puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar17 = *puVar16;
              LOCK();
              uVar18 = *puVar16;
              if (uVar17 == uVar18) {
                *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
              }
              UNLOCK();
            } while (uVar17 != uVar18);
          }
          bVar14 = pOVar12 != a;
          a = pOVar12;
        } while (bVar14);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame__TransferBodyResponseHandler_System__Object__OnTransferWosResponseEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Body_transfer_failed_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TransferWosResponseHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pMVar1 = (((this->fields).worldNetwork)->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManagerNetwork *)0x0)) {
    pEVar2 = (pMVar1->fields)._.OnTransferWosResponse;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVNetworkGame__TransferBodyResponseHandler_System__Object__OnTransferWosResponseEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pEVar4 = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields)._.OnTransferWosResponse =
           (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0;
    }
    else {
      pEVar2 = (EventHandler_1_OnTransferWosResponseEventArgs_ *)
               FUN_?(pDVar3,TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>);
      if (pEVar2 == (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
        FUN_?(pDVar3,pEVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar1->fields)._.OnTransferWosResponse = pEVar2;
      pEVar4 = TypeInfo__System__EventHandler<OnTransferWosResponseEventArgs>;
      lVar6 = FUN_?();
      if (lVar6 == 0) {
        FUN_?(pDVar3,pEVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar1->fields)._.OnTransferWosResponse >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_TransferWosResponseHandler,(MethodInfo *)0x0);
    if (e != (OnTransferWosResponseEventArgs *)0x0) {
      if ((e->fields).success == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Body_transfer_failed_,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
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
  if (pMVar1 == (MVNetworkGame_EventHandling *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pMVar1->fields).dynamicEventCallbackManager;
  if (pMVar3 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                    ,CONCAT44(in_register_00000014,eventCode),callback,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).eventCallbacks;
    if ((pDVar4 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                    *)0x0) &&
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,eventCode & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           ), pOVar5 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      source = pOVar5[1].klass;
      do {
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
        pAVar7 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
        if (pDVar6 == (Delegate *)0x0) {
          pOVar8 = (Object__Class *)0x0;
        }
        else {
          pOVar8 = (Object__Class *)
                    FUN_?(pDVar6,
                                  TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
          if (pOVar8 == (Object__Class *)0x0) {
            FUN_?(pDVar6,pAVar7);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        LOCK();
        pOVar9 = pOVar5[1].klass;
        bVar10 = source == pOVar9;
        if (bVar10) {
          pOVar5[1].klass = pOVar8;
          pOVar9 = source;
        }
        UNLOCK();
        pOVar8 = source;
        if (!bVar10) {
          pOVar8 = pOVar9;
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        bVar10 = pOVar8 != source;
        source = pOVar8;
      } while (bVar10);
      if (pOVar5[1].klass == (Object__Class *)0x0) {
        pDVar4 = (pMVar3->fields).eventCallbacks;
        if (pDVar4 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Remove
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,eventCode & 0xff,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                  );
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_Update
               (MVNetworkGame *this,MethodInfo *method)

{
  MVNetworkGame_UpdateGame(this,(MethodInfo *)0x0);
  return;
}


/* Void UpdateGame() */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_UpdateGame
               (MVNetworkGame *this,MethodInfo *method)

{
  if ((this->fields)._Peer_k__BackingField == (PhotonPeer *)0x0) {
    return;
  }
  MVNetworkGame_Service(this,(MethodInfo *)0x0);
  this_00 = (this->fields).logicObjectManagerClientWrapper;
  if (this_00 == (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      if ((pMVar1->fields)._joinState == 3) {
        this_01 = (this->fields).runtimeVariableNetworkManager;
        if (this_01 == (RuntimeVariableNetworkManager *)0x0) goto DAT_?;
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData
                  (this_01,(MethodInfo *)0x0);
        this_02 = (this->fields).transformNetworkManager;
        if (this_02 == (TransformNetworkManager *)0x0) goto DAT_?;
        TransformNetworkManager::TransformNetworkManager_Update(this_02,this,(MethodInfo *)0x0);
        pWVar2 = (this->fields).worldNetwork;
        if ((pWVar2 == (WorldNetwork *)0x0) ||
           (this_03 = (pWVar2->fields).links, this_03 == (Links *)0x0)) goto DAT_?;
        Links::Links_Update(this_03,(MethodInfo *)0x0);
        this_04 = (pWVar2->fields).objectLinks;
        if (this_04 == (ObjectLinks *)0x0) goto DAT_?;
        ObjectLinks::ObjectLinks_Update(this_04,(MethodInfo *)0x0);
        this_05 = (this->fields)._GameCoinManager_k__BackingField;
        if (this_05 == (MVGameCoinManager *)0x0) goto DAT_?;
        MVGameCoinManager::MVGameCoinManager_Update(this_05,this,(MethodInfo *)0x0);
      }
      pMVar3 = (this->fields)._NetworkGameStateListener_k__BackingField;
      if (pMVar3 != (MVNetworkGameStateListener *)0x0) {
        if ((pMVar3->fields).currentGameState != 0) {
          if (0 < (pMVar3->fields).timeLeft) {
            iVar4 = (pMVar3->fields).duration;
            iVar5 = MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0);
            iVar4 = ((pMVar3->fields).startTime - iVar5) + iVar4;
            (pMVar3->fields).timeLeft = iVar4;
            if (-1 < iVar4) {
              return;
            }
          }
          (pMVar3->fields).timeLeft = 0;
        }
        return;
      }
    }
  }
  else {
    pMVar6 = (this_00->fields).networkGame;
    pMVar7 = (this_00->fields).fastFordwardUpdateEvaluator;
    while( true ) {
      if ((pMVar6 == (MVNetworkGame *)0x0) ||
         (pLVar8 = (pMVar6->fields)._LogicObjectManager_k__BackingField,
         pMVar7 == (MVNetworkGame_UpdateEvaluator *)0x0)) goto DAT_?;
      iVar4 = (pMVar7->fields).lastUpdateTick;
      iVar9 = FUN_?();
      iVar5 = FUN_?();
      iVar4 = (pMVar7->fields).accumulatedTime + (iVar9 - iVar4);
      (pMVar7->fields).lastUpdateTick = iVar5;
      (pMVar7->fields).accumulatedTime = iVar4;
      if (iVar4 < (pMVar7->fields).updateInterval) break;
      if (pLVar8 == (LogicObjectManagerClient *)0x0) goto DAT_?;
      if ((pMVar7->fields).stepTimestamp <= (pLVar8->fields)._._TimeStamp_k__BackingField) break;
      (pMVar7->fields).accumulatedTime = iVar4 - (pMVar7->fields).updateInterval;
      MVNetworkGame+LogicObjectManagerClientWrapper::
      MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                (this_00,(MethodInfo *)0x0);
      pMVar6 = (this_00->fields).networkGame;
      pMVar7 = (this_00->fields).fastFordwardUpdateEvaluator;
    }
    pMVar6 = (this_00->fields).networkGame;
    pMVar7 = (this_00->fields).updateEvaluatorStep;
    if (pMVar6 != (MVNetworkGame *)0x0) goto code_?;
  }
  goto DAT_?;
  while( true ) {
    iVar4 = (pMVar7->fields).lastUpdateTick;
    iVar9 = FUN_?();
    iVar5 = FUN_?();
    iVar4 = (pMVar7->fields).accumulatedTime + (iVar9 - iVar4);
    (pMVar7->fields).lastUpdateTick = iVar5;
    (pMVar7->fields).accumulatedTime = iVar4;
    if (iVar4 < (pMVar7->fields).updateInterval) goto code_?;
    if (pLVar8 == (LogicObjectManagerClient *)0x0) break;
    if ((pMVar7->fields).stepTimestamp <= (pLVar8->fields)._._TimeStamp_k__BackingField)
    goto code_?;
    (pMVar7->fields).accumulatedTime = iVar4 - (pMVar7->fields).updateInterval;
    MVNetworkGame+LogicObjectManagerClientWrapper::
    MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
              (this_00,(MethodInfo *)0x0);
    pMVar6 = (this_00->fields).networkGame;
    pMVar7 = (this_00->fields).updateEvaluatorStep;
    if (pMVar6 == (MVNetworkGame *)0x0) break;
code_?:
    pLVar8 = (pMVar6->fields)._LogicObjectManager_k__BackingField;
    if (pMVar7 == (MVNetworkGame_UpdateEvaluator *)0x0) break;
  }
DAT_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void WOCM_InitializedGameQueryDataHandler(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_WOCM_InitializedGameQueryDataHandler
               (MVNetworkGame *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RootGroup_is_not_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).worldNetwork;
  if (pWVar1 == (WorldNetwork *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pEVar3 = (pWVar1->fields)._.InitializedGameQueryData;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVNetworkGame__WOCM_InitializedGameQueryDataHandler_System__Object__InitializedGameQueryDataEventArgs_
             ,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pEVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pEVar5 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
  if (pDVar4 == (Delegate *)0x0) {
    (pWVar1->fields)._.InitializedGameQueryData =
         (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
  }
  else {
    pEVar3 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              FUN_?(pDVar4,
                            TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    if (pEVar3 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      FUN_?(pDVar4,pEVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pWVar1->fields)._.InitializedGameQueryData = pEVar3;
    pEVar5 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    lVar6 = FUN_?();
    if (lVar6 == 0) {
      FUN_?(pDVar4,pEVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pWVar1->fields)._.InitializedGameQueryData >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  if (e == (InitializedGameQueryDataEventArgs *)0x0) goto code_?;
  pMVar11 = (e->fields).RootWO;
  if (pMVar11 != (MVWorldObjectClient *)0x0) {
    pMVar12 = pMVar11->klass;
    bVar13 = (TypeInfo__MVGroup->_1).naturalAligment;
    if ((bVar13 <= (pMVar12->_1).naturalAligment) &&
       ((MVGroup__Class *)(pMVar12->_1).typeHierarchy[(ulonglong)bVar13 - 1] == TypeInfo__MVGroup)) {
      if ((this->fields).worldNetwork == (WorldNetwork *)0x0) goto code_?;
      pMVar11 = (e->fields).RootWO;
      pMVar14 = (((this->fields).worldNetwork)->fields)._.worldObjectClientManager;
      if ((pMVar14 == (MVWorldObjectClientManagerNetwork *)0x0) ||
         (pMVar11 == (MVWorldObjectClient *)0x0)) goto code_?;
      bVar13 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar11->klass->_1).naturalAligment < bVar13) ||
         ((MVGroup__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
          TypeInfo__MVGroup)) {
        FUN_?(pMVar11);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (pMVar14->fields)._.rootGroupId = (pMVar11->fields)._.id;
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_RootGroup_is_not_found_,(MethodInfo *)0x0);
code_?:
  if (TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit !=
      (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
    pMVar15 = TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit;
    (*(pMVar15->fields)._._.invoke_impl)
              ((pMVar15->fields)._._.method_code,(pMVar15->fields)._._.method);
  }
  return;
}


/* MVNetworkGame(PhotonLoggingConfig, EmbeddedSiteConfigData) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame__ctor
               (MVNetworkGame *this,PhotonLoggingConfig photonLoggingConfig,
               EmbeddedSiteConfigData *embeddedSiteConfigData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGame__GameDataQueryManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameEventManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelRewardsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVItemBusinessLogic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkGameStateListener);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVNetworkGame__networkGameStateListener_OnGameStateChanged_System__Object__GameStateChangeEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPlayerContainer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeamManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__PhotonPeer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RuntimeVariableNetworkManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TransformNetworkManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (GameEventManager *)FUN_?(TypeInfo__GameEventManager);
  GameEventManager::GameEventManager__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).GameEventManager = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (Dictionary_2_MV_Common_Region_System_Single_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>
                         );
  pEVar6 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::ByteEnum]::
            EqualityComparer_1_System_ByteEnum__get_Default
                      (MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Dictionary__
                       ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar6 != (EqualityComparer_1_System_ByteEnum_ *)0x0) &&
     (bVar1 = iRam_? != 0,
     (this_01->fields)._comparer = (IEqualityComparer_1_MV_Common_Region_ *)0x0, bVar1)) {
    uVar2 = (uint)((ulonglong)&(this_01->fields)._comparer >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (this_01 != (Dictionary_2_MV_Common_Region_System_Single_ *)0x0) {
    uVar7 = CONCAT71((int7)((ulonglong)method >> 8),2);
    uVar8 = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,0,
               TypeRef__System__Activator__T._0_4_,(InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
               ->klass->rgctx_data[0x22].method);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,
               (ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),1),
               TypeRef__System__Activator__T._0_4_,(InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
               ->klass->rgctx_data[0x22].method);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
    uVar8 = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,2,_UNK_?,
               (InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
               ->klass->rgctx_data[0x22].method);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,(ByteEnum__Enum)uVar8,
               _UNK_?,(InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Single]::
    Dictionary_2_System_ByteEnum_System_Single__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Single_ *)this_01,
               (ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),4),_UNK_?,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__Add_MV__Common__Region__float_
               ->klass->rgctx_data[0x22].method);
    bVar1 = iRam_? != 0;
    (this->fields).timeZoneMap = this_01;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).timeZoneMap >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pMVar9 = (MVItemBusinessLogic *)FUN_?(TypeInfo__MVItemBusinessLogic);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar10,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
              );
    iVar11 = iRam_?;
    (pMVar9->fields).items = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)pDVar10;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&pMVar9->fields >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar11 = iRam_?;
      } while (!bVar1);
    }
    (this->fields).itemBusinessLogic = pMVar9;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).itemBusinessLogic >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pMVar12 = (MVNetworkGame_GameDataQueryManager *)
              FUN_?(TypeInfo__MVNetworkGame__GameDataQueryManager);
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
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar10,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkGame_GameDataQueryManager::GameDataQuery>__Dictionary__
              );
    iVar11 = iRam_?;
    (pMVar12->fields).gameDataQueries =
         (Dictionary_2_System_Int32_MVNetworkGame_GameDataQueryManager_GameDataQuery_ *)pDVar10;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&pMVar12->fields >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar11 = iRam_?;
      } while (!bVar1);
    }
    (this->fields).gameDataQueryManager = pMVar12;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).gameDataQueryManager >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pTVar13 = (TransformNetworkManager *)FUN_?(TypeInfo__TransformNetworkManager);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar10,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
              );
    bVar1 = iRam_? != 0;
    (pTVar13->fields).networkedObjects = (Dictionary_2_System_Int32_MVNetworkObject_ *)pDVar10;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&pTVar13->fields >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLVar14 = (List_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(pLVar14);
    iVar11 = iRam_?;
    (pTVar13->fields).removeList = pLVar14;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(pTVar13->fields).removeList >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar11 = iRam_?;
      } while (!bVar1);
    }
    (this->fields).transformNetworkManager = pTVar13;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).transformNetworkManager >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    this_02 = (MVTeamManager *)FUN_?(TypeInfo__MVTeamManager);
    MVTeamManager::MVTeamManager__ctor(this_02,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).teamManager = this_02;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).teamManager >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    this_03 = (GameStatCounterManager *)FUN_?(TypeInfo__GameStatCounterManager);
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager__ctor
              (this_03,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).gameStatCounterManager = this_03;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).gameStatCounterManager >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLVar15 = (LevelRewardsManager *)FUN_?(TypeInfo__LevelRewardsManager);
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar16 = (Dictionary_2_System_Int32_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    FUN_?(pDVar16,
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    iVar11 = iRam_?;
    (pLVar15->fields).unseenLevelRewards = pDVar16;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&pLVar15->fields >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar11 = iRam_?;
      } while (!bVar1);
    }
    (this->fields).levelRewardsManager = pLVar15;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).levelRewardsManager >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    (this->fields).lastFrameServerTimeUpdate = -1;
    (this->fields).lastFrameLocalTimeUpdate = -1;
    pMVar17 = (MVPlayerContainer *)FUN_?(TypeInfo__MVPlayerContainer);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar10,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
    bVar1 = iRam_? != 0;
    (pMVar17->fields).players = (Dictionary_2_System_Int32_MVPlayer_ *)pDVar10;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&pMVar17->fields >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pDVar10 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar10,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
    iVar11 = iRam_?;
    (pMVar17->fields).pendingPlayers = (Dictionary_2_System_Int32_MVPlayer_ *)pDVar10;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar17->fields).pendingPlayers >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar11 = iRam_?;
      } while (!bVar1);
    }
    (pMVar17->fields).localPlayerActorNumber = -1;
    (this->fields).playerContainer = pMVar17;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).playerContainer >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pRVar18 = (RuntimeVariableNetworkManager *)
              FUN_?(TypeInfo__RuntimeVariableNetworkManager);
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pHVar19 = (HashSet_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(pHVar19,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar1 = iRam_? != 0;
    (pRVar18->fields).runtimeDataVariables = pHVar19;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&pRVar18->fields >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLVar14 = (List_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(pLVar14);
    iVar11 = iRam_?;
    (pRVar18->fields).removeList = pLVar14;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(pRVar18->fields).removeList >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar11 = iRam_?;
      } while (!bVar1);
    }
    (this->fields).runtimeVariableNetworkManager = pRVar18;
    iVar20 = 0;
    if (iVar11 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).runtimeVariableNetworkManager >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar20 = iRam_?;
      } while (!bVar1);
    }
    bVar21 = embeddedSiteConfigData->integratedSdk;
    bVar22 = embeddedSiteConfigData->allowsFallbackAds;
    bVar23 = embeddedSiteConfigData->showPlayButtonAd;
    bVar24 = embeddedSiteConfigData->hideGoldShop;
    bVar25 = embeddedSiteConfigData->allowInHouseAds;
    bVar26 = embeddedSiteConfigData->removeFullscreenButton;
    bVar27 = embeddedSiteConfigData->hideSignUp;
    bVar28 = embeddedSiteConfigData->noPlayButtonVideoIcon;
    (this->fields).photonLoggingConfig = photonLoggingConfig;
    iVar29 = embeddedSiteConfigData->siteEnum;
    bVar30 = embeddedSiteConfigData->showTouristPromotion;
    bVar31 = embeddedSiteConfigData->allowsOpenInNewTab;
    bVar32 = embeddedSiteConfigData->allowsRedirectToWebpage;
    bVar33 = embeddedSiteConfigData->allowsModals;
    (this->fields).embeddedSiteConfigData.sites = embeddedSiteConfigData->sites;
    (this->fields).embeddedSiteConfigData.siteEnum = iVar29;
    (this->fields).embeddedSiteConfigData.showTouristPromotion = bVar30;
    (this->fields).embeddedSiteConfigData.allowsOpenInNewTab = bVar31;
    (this->fields).embeddedSiteConfigData.allowsRedirectToWebpage = bVar32;
    (this->fields).embeddedSiteConfigData.allowsModals = bVar33;
    (this->fields).embeddedSiteConfigData.integratedSdk = bVar21;
    (this->fields).embeddedSiteConfigData.allowsFallbackAds = bVar22;
    (this->fields).embeddedSiteConfigData.showPlayButtonAd = bVar23;
    (this->fields).embeddedSiteConfigData.hideGoldShop = bVar24;
    (this->fields).embeddedSiteConfigData.allowInHouseAds = bVar25;
    (this->fields).embeddedSiteConfigData.removeFullscreenButton = bVar26;
    (this->fields).embeddedSiteConfigData.hideSignUp = bVar27;
    (this->fields).embeddedSiteConfigData.noPlayButtonVideoIcon = bVar28;
    if (iVar20 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).embeddedSiteConfigData >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    MVGameControllerBase::MVGameControllerBase_set_JoinState
              (MVJoinState__Enum_Joining,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
        (GameSessionData *)0x0) {
      pPVar34 = (PhotonPeer *)FUN_?(TypeInfo__ExitGames__Client__Photon__PhotonPeer);
      Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::PhotonPeer__ctor_1
                (pPVar34,(IPhotonPeerListener *)this,ConnectionProtocol__Enum_Udp,(MethodInfo *)0x0)
      ;
      bVar1 = iRam_? != 0;
      (this->fields)._Peer_k__BackingField = pPVar34;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields)._Peer_k__BackingField >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pPVar34 = (this->fields)._Peer_k__BackingField;
      if (pPVar34 != (PhotonPeer *)0x0) {
        (pPVar34->fields).DisconnectTimeout = 20000;
        pPVar34 = (this->fields)._Peer_k__BackingField;
        if (pPVar34 != (PhotonPeer *)0x0) {
          (pPVar34->fields).SentCountAllowance = 8;
          pPVar34 = (this->fields)._Peer_k__BackingField;
          if (pPVar34 != (PhotonPeer *)0x0) {
            uStackX_11 = photonLoggingConfig.untilConnectedDebugLevel;
            (pPVar34->fields).DebugOut = uStackX_11;
            MVNetworkGame_CreatePrivateClasses(this,(MethodInfo *)0x0);
            pMVar35 = (MVNetworkGameStateListener *)
                      FUN_?(TypeInfo__MVNetworkGameStateListener);
            bVar1 = iRam_? != 0;
            (this->fields)._NetworkGameStateListener_k__BackingField = pMVar35;
            if (bVar1) {
              uVar2 = (uint)((ulonglong)&(this->fields)._NetworkGameStateListener_k__BackingField
                             >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar1);
            }
            pMVar35 = (this->fields)._NetworkGameStateListener_k__BackingField;
            this_04 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_04,(Object *)this,
                       MethodInfo__MVNetworkGame__networkGameStateListener_OnGameStateChanged_System__Object__GameStateChangeEventArgs_
                       ,(MethodInfo *)0x0);
            if (pMVar35 != (MVNetworkGameStateListener *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              ppEVar36 = &(pMVar35->fields).OnGameStateChanged;
              a = (pMVar35->fields).OnGameStateChanged;
              do {
                pDVar37 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
                pEVar38 = TypeInfo__System__EventHandler<GameStateChangeEventArgs>;
                if (pDVar37 == (Delegate *)0x0) {
                  pEVar39 = (EventHandler_1_GameStateChangeEventArgs_ *)0x0;
                }
                else {
                  pEVar39 = (EventHandler_1_GameStateChangeEventArgs_ *)
                            FUN_?(pDVar37,
                                          TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
                  if (pEVar39 == (EventHandler_1_GameStateChangeEventArgs_ *)0x0) {
                    FUN_?(pDVar37,pEVar38);
                    pcVar40 = (code *)swi(3);
                    (*pcVar40)();
                    return;
                  }
                }
                LOCK();
                pEVar41 = *ppEVar36;
                bVar1 = a == pEVar41;
                if (bVar1) {
                  *ppEVar36 = pEVar39;
                  pEVar41 = a;
                }
                UNLOCK();
                pEVar39 = a;
                if (!bVar1) {
                  pEVar39 = pEVar41;
                }
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)ppEVar36 >> 0xc);
                  uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                    puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                    LOCK();
                    bVar1 = uVar4 == *puVar5;
                    if (bVar1) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar1);
                }
                bVar1 = pEVar39 != a;
                a = pEVar39;
              } while (bVar1);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Void add_ReceivedAccessoryData(Action`1[String]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedAccessoryData
               (MVNetworkGame *this,Action_1_String_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).ReceivedAccessoryData;
  a = (this->fields).ReceivedAccessoryData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<System::String>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_String_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_String_ *)FUN_?(pDVar2,TypeInfo__System__Action<System::String>);
      if (pAVar4 == (Action_1_String_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void add_ReceivedAvatarBodiesFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedAvatarBodiesFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ReceivedAvatarBodiesFromQuery;
  a = (this->fields).ReceivedAvatarBodiesFromQuery;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      if (pEVar4 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void add_ReceivedItemFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ReceivedItemFromQuery;
  a = (this->fields).ReceivedItemFromQuery;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      if (pEVar4 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
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
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).ReceivedPlanetOwnershipData;
  a = (this->fields).ReceivedPlanetOwnershipData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                            );
      if (pAVar4 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void 
   add_ReceivedPlanetPermissionsData(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,List`1[System.Int32]]])
    */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ReceivedPlanetPermissionsData
               (MVNetworkGame *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
               *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).ReceivedPlanetPermissionsData;
  a = (this->fields).ReceivedPlanetPermissionsData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_ *
               )0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_ *
               )FUN_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                             );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                     *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void add_ScreenshotUploaded(EventHandler`1[ScreenshotUploadedEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
               (MVNetworkGame *this,EventHandler_1_ScreenshotUploadedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ScreenshotUploaded;
  a = (this->fields).ScreenshotUploaded;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ScreenshotUploadedEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
      if (pEVar4 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Boolean get_IsPlaying() */

bool Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_IsPlaying
               (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).__unknown_1.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* MVLocalPlayer get_LocalPlayer() */

MVLocalPlayer *
Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_LocalPlayer
          (MVNetworkGame *this,MethodInfo *method)

{
  this_00 = (this->fields).playerContainer;
  if (this_00 == (MVPlayerContainer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVLocalPlayer *)(*pcVar1)();
    return pMVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVLocalPlayer,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (MVLocalPlayer *)
           MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                     (this_00,(this_00->fields).localPlayerActorNumber,(MethodInfo *)0x0);
  if (pMVar2 != (MVLocalPlayer *)0x0) {
    bVar3 = (TypeInfo__MVLocalPlayer->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
       ((pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayer)) {
      FUN_?(pMVar2,TypeInfo__MVLocalPlayer);
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVLocalPlayer *)(*pcVar1)();
      return pMVar2;
    }
  }
  return pMVar2;
}


/* Int32 get_LocalTimeInMilliSeconds() */

int32_t Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_LocalTimeInMilliSeconds
                  (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SupportClass);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).lastFrameLocalTimeUpdate;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  if (iVar1 != iVar5) {
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SupportClass->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::SupportClass::SupportClass_GetTickCount
                      ((MethodInfo *)0x0);
    (this->fields).localTimeInMilliseconds = iVar4;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcRam_?)();
    (this->fields).lastFrameLocalTimeUpdate = iVar4;
  }
  return (this->fields).localTimeInMilliseconds;
}


/* Int32 get_ServerTimeInMilliSeconds() */

int32_t Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                  (MVNetworkGame *this,MethodInfo *method)

{
  iVar1 = (this->fields).lastFrameServerTimeUpdate;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  if (iVar1 != iVar5) {
    this_00 = (this->fields)._Peer_k__BackingField;
    if (this_00 == (PhotonPeer *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
            PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    (this->fields).serverTimeInMilliseconds = iVar4;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcRam_?)();
    (this->fields).lastFrameServerTimeUpdate = iVar4;
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Single get_TimeZone() */

float Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_get_TimeZone
                (MVNetworkGame *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__get_Item_MV__Common__Region_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__get_Item_MV__Common__Region_
  ;
  this_00 = (this->fields).timeZoneMap;
  if (this_00 != (Dictionary_2_MV_Common_Region_System_Single_ *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__FindEntry
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)this_00,
                       (uint)(this->fields)._Region_k__BackingField,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::Region,_float>__get_Item_MV__Common__Region_
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar2 < 0) {
      uVar3 = func_?(pMVar1->klass->rgctx_data,0xe);
      key = (Object *)func_?(uVar3);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                (key,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
    pDVar6 = (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_System_Single___Array *)
             (this_00->fields)._entries;
    if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_System_Single___Array *)0x0) {
      if (uVar2 < (uint)pDVar6->max_length) {
        return pDVar6->vector[(int)uVar2].value;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_logic_event_queue_not_cleared_on);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = (this_00->fields).updateEvaluatorStep;
    if (pMVar3 == (MVNetworkGame_UpdateEvaluator *)0x0) goto code_?;
    piVar4 = &(pMVar3->fields).stepTimestamp;
    *piVar4 = *piVar4 + 1000;
    iVar5 = FUN_?();
    (pMVar3->fields).lastUpdateTick = iVar5;
    (pMVar3->fields).accumulatedTime = 0;
    MVNetworkGame+LogicObjectManagerClientWrapper::
    MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames(this_00,(MethodInfo *)0x0);
    pMVar6 = (this_00->fields).logicEventQueue;
    if (pMVar6 == (MVNetworkGame_LogicEventQueue *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar7 = (pMVar6->fields).logicEvents;
    if (pDVar7 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
    goto code_?;
    if ((pDVar7->fields)._count != (pDVar7->fields)._freeCount) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_logic_event_queue_not_cleared_on,(MethodInfo *)0x0);
    }
    pMVar8 = (this_00->fields).networkGame;
    if ((pMVar8 == (MVNetworkGame *)0x0) ||
       (pLVar9 = (pMVar8->fields)._LogicObjectManager_k__BackingField,
       pLVar9 == (LogicObjectManagerClient *)0x0)) goto code_?;
    (pLVar9->fields)._._TimeStamp_k__BackingField = 0;
    pMVar3 = (this_00->fields).updateEvaluatorStep;
    if (pMVar3 == (MVNetworkGame_UpdateEvaluator *)0x0) goto code_?;
    (pMVar3->fields).stepTimestamp = 0;
    iVar5 = FUN_?();
    (pMVar3->fields).lastUpdateTick = iVar5;
    (pMVar3->fields).accumulatedTime = 0;
    pMVar3 = (this_00->fields).fastFordwardUpdateEvaluator;
    if (pMVar3 == (MVNetworkGame_UpdateEvaluator *)0x0) goto code_?;
    (pMVar3->fields).stepTimestamp = 0;
    iVar5 = FUN_?();
    (pMVar3->fields).lastUpdateTick = iVar5;
    (pMVar3->fields).accumulatedTime = 0;
    pWVar10 = (this->fields).worldNetwork;
    if ((pWVar10 == (WorldNetwork *)0x0) ||
       (this_01 = (pWVar10->fields)._.worldObjectClientManager,
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
    if (this_03 == (MVPlayerContainer *)0x0) goto code_?;
    pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if (pMVar11 == (MVLocalPlayer *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pMVar11->fields)._.checkpointWOID = -1;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_Encrypt(-0xe91,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    uVar12 = 0;
    iVar13 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    bVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar14 != 0) {
      uVar12 = 0xfffff16f;
    }
    uStack_15 = (ulonglong)CONCAT14(1,uVar12);
    (pMVar11->fields).numberOfTimesDiedInRound.currentCryptoKey = iVar13;
    (pMVar11->fields).numberOfTimesDiedInRound.hiddenValue = iVar5;
    (pMVar11->fields).numberOfTimesDiedInRound.fakeValue = (undefined4)uStack_15;
    (pMVar11->fields).numberOfTimesDiedInRound.inited = uStack_15._4_1_;
    *(undefined3 *)&(pMVar11->fields).numberOfTimesDiedInRound.field_0xd = uStack_15._5_3_;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar16 != (MVGameControllerBase *)0x0) &&
       (pMVar8 = (pMVar16->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
      (pGVar17 = (pMVar8->fields).GameEventManager, pGVar17 != (GameEventManager *)0x0)) &&
     (pMVar1 = (this->fields)._NetworkGameStateListener_k__BackingField,
     pMVar1 != (MVNetworkGameStateListener *)0x0)) {
    pGVar18 = (pGVar17->fields).GameState;
    iVar5 = (pMVar1->fields).currentGameState;
    if (pGVar18 != (GameEventManager_GameStateManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__set_ValueSet_MV__Common__MVGameStateType_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar19 = (pGVar18->fields).gameStateType;
      if (pGVar19 !=
          (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_ *)0x0) {
        pAVar20 = (pGVar19->fields)._.OnChange;
        (pGVar19->fields)._.value = iVar5;
        if (pAVar20 != (Action_1_MV_Common_MVGameStateType_ *)0x0) {
          pAVar20 = (pGVar19->fields)._.OnChange;
          (*(pAVar20->fields)._._.invoke_impl)
                    ((pAVar20->fields)._._.method_code,iVar5,(pAVar20->fields)._._.method);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void remove_ReceivedAccessoryData(Action`1[String]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedAccessoryData
               (MVNetworkGame *this,Action_1_String_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).ReceivedAccessoryData;
  source = (this->fields).ReceivedAccessoryData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<System::String>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_String_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_String_ *)FUN_?(pDVar2,TypeInfo__System__Action<System::String>);
      if (pAVar4 == (Action_1_String_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_ReceivedAvatarBodiesFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedAvatarBodiesFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ReceivedAvatarBodiesFromQuery;
  source = (this->fields).ReceivedAvatarBodiesFromQuery;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      if (pEVar4 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_ReceivedItemFromQuery(EventHandler`1[ReceivedItemFromQueryEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
               (MVNetworkGame *this,EventHandler_1_ReceivedItemFromQueryEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ReceivedItemFromQuery;
  source = (this->fields).ReceivedItemFromQuery;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      if (pEVar4 == (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
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
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).ReceivedPlanetOwnershipData;
  source = (this->fields).ReceivedPlanetOwnershipData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                            );
      if (pAVar4 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void 
   remove_ReceivedPlanetPermissionsData(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,List`1[System.Int32]]])
    */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ReceivedPlanetPermissionsData
               (MVNetworkGame *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
               *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).ReceivedPlanetPermissionsData;
  source = (this->fields).ReceivedPlanetPermissionsData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_ *
               )0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_ *
               )FUN_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                             );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                     *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_ScreenshotUploaded(EventHandler`1[ScreenshotUploadedEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
               (MVNetworkGame *this,EventHandler_1_ScreenshotUploadedEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ScreenshotUploaded;
  source = (this->fields).ScreenshotUploaded;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ScreenshotUploadedEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
      if (pEVar4 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

