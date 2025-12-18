
/* Void Clone(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_Clone
               (EditorWorldObjectCreation *this,MVWorldObjectClient *original,bool cloneToRoot,
               bool setAsPreviewItem,bool goToInsert,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_goToInsert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (goToInsert != 0) {
    pEVar1 = (this->fields).esm;
    if ((pEVar1 == (EditorStateMachine *)0x0) ||
       (this_00 = (pEVar1->fields)._.data,
       this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)StringLiteral_goToInsert,(Object *)0x0,
               (InsertionBehavior__Enum)CONCAT71(in_register_00000089,2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pEVar1 = (this->fields).esm;
  _goToInsert = (MethodInfo *)CONCAT44(in_stack_2._3_4_,0x23);
  value = (Object *)FUN_?(TypeInfo__EditorEvent,&goToInsert);
  if (pEVar1 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar1,value,(MethodInfo *)0x0);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pEVar4 = (pMVar3->fields).CloneWorldObjectTreeResponse;
      this_02 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>)
      ;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pEVar4,(Delegate *)this_02,(MethodInfo *)0x0);
      pEVar6 = TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>;
      if (pDVar5 == (Delegate *)0x0) {
        (pMVar3->fields).CloneWorldObjectTreeResponse =
             (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0;
      }
      else {
        pEVar4 = (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)
                  FUN_?(pDVar5,
                                TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>
                               );
        if (pEVar4 == (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
          FUN_?(pDVar5,pEVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar3->fields).CloneWorldObjectTreeResponse = pEVar4;
        pEVar6 = TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>;
        lVar8 = FUN_?(pDVar5,
                               TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>
                              );
        if (lVar8 == 0) {
          FUN_?(pDVar5,pEVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar3->fields).CloneWorldObjectTreeResponse >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar13 != (MVGameControllerBase *)0x0) &&
            (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
           (this_01 = (pMVar14->fields).operationRequests,
           this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar15 = MVNetworkGame+OperationRequests::
                    MVNetworkGame_OperationRequests_CreateBasicCloneData
                              (this_01,original,0,setAsPreviewItem,cloneToRoot,(MethodInfo *)0x0);
          pPVar16 = (this_01->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar16 != (PhotonPeer *)0x0) {
            _goToInsert = (pPVar16->klass->vtable).SendOperation.method;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pPVar16->klass->vtable).SendOperation.methodPtr)
                      (pPVar16,CONCAT71((int7)((ulonglong)original >> 8),0x22),pDVar15,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CloneWorldObjectTreeResponseHandler(Object, CloneWorldObjectTreeResponseEventArgs) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_CloneWorldObjectTreeResponseHandler
               (EditorWorldObjectCreation *this,Object *sender,
               CloneWorldObjectTreeResponseEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e == (CloneWorldObjectTreeResponseEventArgs *)0x0) goto code_?;
  if ((e->fields).Success == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar1->fields).gameMode != 4) goto code_?;
    }
    pEVar2 = (this->fields).esm;
    auStackX_18[0] = 0x2f;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_18);
    if (pEVar2 == (EditorStateMachine *)0x0) goto code_?;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar2,value,(MethodInfo *)0x0);
  }
code_?:
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    pEVar4 = (pMVar3->fields).CloneWorldObjectTreeResponse;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
               ,(MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pEVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    pEVar6 = TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>;
    if (pDVar5 == (Delegate *)0x0) {
      (pMVar3->fields).CloneWorldObjectTreeResponse =
           (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)
                FUN_?(pDVar5,
                              TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>)
      ;
      if (pEVar4 == (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
        FUN_?(pDVar5,pEVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pMVar3->fields).CloneWorldObjectTreeResponse = pEVar4;
      pEVar6 = TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>;
      lVar8 = FUN_?(pDVar5,
                             TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>);
      if (lVar8 == 0) {
        FUN_?(pDVar5,pEVar6);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pMVar3->fields).CloneWorldObjectTreeResponse >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    pEVar2 = (this->fields).esm;
    if ((pEVar2 != (EditorStateMachine *)0x0) &&
       (this_00 = (pEVar2->fields).selectionController, this_00 != (SelectionController *)0x0)) {
      SelectionController::SelectionController_SelectWO
                (this_00,(e->fields).RootId,0,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* KoGaMaPackageClient GetKoGaMaPackageFromItem(InventoryItem) */

KoGaMaPackageClient *
Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_GetKoGaMaPackageFromItem
          (InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    buffer = (item->fields).data;
    this = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this,buffer,(MethodInfo *)0x0);
    pKVar1 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(pKVar1,this,0,(MethodInfo *)0x0);
    if (pKVar1 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(pKVar1,(MethodInfo *)0x0);
      return pKVar1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pKVar1 = (KoGaMaPackageClient *)(*pcVar2)();
  return pKVar1;
}


/* List`1[MVWorldObjectClient] GetPlacedWinningConditions() */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_GetPlacedWinningConditions
          (EditorWorldObjectCreation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (pMVar1,WorldObjectType__Enum_OculusKillLimit,(MethodInfo *)0x0),
     pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
    if (0 < (pLVar2->fields)._size) {
      return pLVar2;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
       (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar1,WorldObjectType__Enum_KillLimit,(MethodInfo *)0x0),
       pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
      if (0 < (pLVar2->fields)._size) {
        return pLVar2;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
         (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                             (pMVar1,WorldObjectType__Enum_CollectibleItem,(MethodInfo *)0x0),
         pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
        if (0 < (pLVar2->fields)._size) {
          return pLVar2;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
           (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                               (pMVar1,WorldObjectType__Enum_Flag,(MethodInfo *)0x0),
           pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
          if (0 < (pLVar2->fields)._size) {
            return pLVar2;
          }
          return (List_1_MVWorldObjectClient_ *)0x0;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar2 = (List_1_MVWorldObjectClient_ *)(*pcVar3)();
  return pLVar2;
}


/* Void Initialize(EditorStateMachine) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
               (EditorWorldObjectCreation *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__EditorWorldObjectCreation__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).esm = esm;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).esm >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 == (MVGameControllerBase *)0x0) ||
      (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
     (pWVar8 = (pMVar7->fields).worldNetwork, pWVar8 == (WorldNetwork *)0x0)) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pEVar10 = (pWVar8->fields)._.InitializedGameQueryData;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__EditorWorldObjectCreation__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
             ,(MethodInfo *)0x0);
  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pEVar10,(Delegate *)this_00,(MethodInfo *)0x0);
  pEVar12 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
  if (pDVar11 == (Delegate *)0x0) {
    (pWVar8->fields)._.InitializedGameQueryData =
         (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
  }
  else {
    pEVar10 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
             FUN_?(pDVar11,TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>)
    ;
    if (pEVar10 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      FUN_?(pDVar11,pEVar12);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (pWVar8->fields)._.InitializedGameQueryData = pEVar10;
    pEVar12 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
    lVar3 = FUN_?(pDVar11,TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>)
    ;
    if (lVar3 == 0) {
      FUN_?(pDVar11,pEVar12);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pWVar8->fields)._.InitializedGameQueryData >> 0xc);
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


/* Boolean IsItemAnAllowedWinningCondition(MVWorldObjectClient) */

bool Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_IsItemAnAllowedWinningCondition
               (EditorWorldObjectCreation *this,MVWorldObjectClient *worldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<AllCollectiblesCollectedClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<FlagReachedClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<KillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<OculusKillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (worldObject != (MVWorldObjectClient *)0x0) {
    iVar1 = (worldObject->fields)._.type;
    if (iVar1 < 0x32) {
      method_00 = 
      bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<FlagReachedClient>__;
      if ((iVar1 != 0x11) &&
         (method_00 = 
          bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<AllCollectiblesCollectedClient>__
         , iVar1 != 0x31)) {
        return 1;
      }
    }
    else {
      method_00 = 
      bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<KillLimitClient>__;
      if ((iVar1 != 0x3f) &&
         (method_00 = 
          bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<OculusKillLimitClient>__
         , iVar1 != 0x40)) {
        return 1;
      }
    }
    bVar2 = EditorWorldObjectCreation_IsWinningConditionPlaceable(this,method_00);
    if (bVar2 != 0) {
      return 1;
    }
    return 0;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean IsWinningConditionPlaceable[Object]() */

bool Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_IsWinningConditionPlaceable
               (EditorWorldObjectCreation *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
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
     (this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    lVar3 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
    if (*(longlong *)(lVar3 + 0x38) == 0) {
      FUN_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_);
      LOCK();
      UNLOCK();
      if (*(longlong *)(lVar3 + 0x38) == 0) {
        FUN_?(lVar3);
      }
    }
    pWVar4 = (this_00->fields).winnerConditionsRoot;
    if (pWVar4 != (WinningConditionOr *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar5 = (pWVar4->fields)._.winnerConditions;
      if (pDVar5 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
        if (((pDVar5->fields)._count - (pDVar5->fields)._freeCount < 1) ||
           (pOVar6 = MVWorldObject.dll::WinningConditionManager::
                     WinningConditionManager_GetSingletonWinnerConditionByType
                               (this_00,(MethodInfo *)**(undefined8 **)(lVar3 + 0x38)),
           pOVar6 != (Object *)0x0)) {
          return 1;
        }
        pWVar4 = (this_00->fields).winnerConditionsRoot;
        if (pWVar4 != (WinningConditionOr *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar5 = (pWVar4->fields)._.winnerConditions;
          if (pDVar5 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
            if ((pDVar5->fields)._count - (pDVar5->fields)._freeCount == 1) {
              pWVar4 = (this_00->fields).winnerConditionsRoot;
              this_01 = (Predicate_1_Object_ *)
                        FUN_?(TypeInfo__System__Func<IWinningCondition,_bool>);
              mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                        (this_01,(Object *)this_00,
                         MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_,
                         (MethodInfo *)0x0);
              if (pWVar4 == (WinningConditionOr *)0x0) goto code_?;
              cVar7 = (*(pWVar4->klass->vtable).Traverse_1.methodPtr)
                                (pWVar4,this_01,(pWVar4->klass->vtable).Traverse_1.method);
              if (cVar7 != '\0') {
                return 1;
              }
            }
            return 0;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void OnAddItemFromInventory(InventoryItem) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_OnAddItemFromInventory
               (EditorWorldObjectCreation *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Creating_new_wo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Found_wo_for_cloning);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    buffer = (item->fields).data;
    this_01 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_01,buffer,(MethodInfo *)0x0);
    this_02 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_02,this_01,0,(MethodInfo *)0x0);
    if (this_02 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_02,(MethodInfo *)0x0);
      bVar1 = EditorWorldObjectCreation_ValidateAddItemFromInventory
                         (this,this_02,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_02,(MethodInfo *)0x0);
        return;
      }
      pEVar2 = (this->fields).esm;
      if (pEVar2 != (EditorStateMachine *)0x0) {
        while (pSVar3 = (pEVar2->fields).selectionController, pSVar3 != (SelectionController *)0x0)
        {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pSVar3->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) break;
          iVar4 = FUN_?();
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
             (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                  (pMVar5,(MethodInfo *)0x0), pMVar6 == (MVGroup *)0x0)) break;
          if (iVar4 == (pMVar6->fields)._._.id) {
code_?:
            aiStackX_10[0] = -1;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar7 == (MVGameControllerBase *)0x0) ||
                 (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
                ((pMVar8->fields).worldNetwork == (WorldNetwork *)0x0)) ||
               (pMVar5 = (MVWorldObjectClientManager *)
                          (((pMVar8->fields).worldNetwork)->fields)._.worldObjectClientManager,
               pMVar5 == (MVWorldObjectClientManager *)0x0)) break;
            bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetUnmodifiedWorldObject
                               (pMVar5,this_02,aiStackX_10,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_Creating_new_wo,(MethodInfo *)0x0);
              pEVar2 = (this->fields).esm;
              aiStackX_10[0] = 0x13;
              value = (Object *)FUN_?(TypeInfo__EditorEvent,aiStackX_10);
              if (pEVar2 == (EditorStateMachine *)0x0) break;
              FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar2,value,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Quaternion);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
              uVar10._0_4_ = (pQVar9->identityQuaternion).x;
              uVar10._4_4_ = (pQVar9->identityQuaternion).y;
              uVar11._0_4_ = (pQVar9->identityQuaternion).z;
              uVar11._4_4_ = (pQVar9->identityQuaternion).w;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar7 == (MVGameControllerBase *)0x0) ||
                 (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) break;
              pEVar2 = (this->fields).esm;
              this_00 = (pMVar8->fields).operationRequests;
              itemId = (item->fields).itemID;
              if ((pEVar2 == (EditorStateMachine *)0x0) ||
                 (pSVar3 = (pEVar2->fields).selectionController,
                 pSVar3 == (SelectionController *)0x0)) break;
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((pSVar3->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) break;
              groupId = FUN_?();
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_13.x = (pVVar12->upVector).x;
              VStack_13.y = (pVVar12->upVector).y;
              if (this_00 == (MVNetworkGame_OperationRequests *)0x0) break;
              VStack_13.y = VStack_13.y * _UNK_?;
              VStack_13.x = VStack_13.x * _UNK_?;
              VStack_13.z = (pVVar12->upVector).z * _UNK_?;
              aQStack_14[0]._0_8_ = uVar10;
              aQStack_14[0]._8_8_ = uVar11;
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddItemToWorld
                        (this_00,itemId,groupId,&VStack_13,aQStack_14,0,1,0,(MethodInfo *)0x0);
            }
            else {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_Found_wo_for_cloning,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar7 == (MVGameControllerBase *)0x0) ||
                  (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
                 (((pMVar8->fields).worldNetwork == (WorldNetwork *)0x0 ||
                  (pMVar15 = (((pMVar8->fields).worldNetwork)->fields)._.worldObjectClientManager,
                  pMVar15 == (MVWorldObjectClientManagerNetwork *)0x0)))) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar16 = (pMVar15->fields)._.worldObjects;
              pMStackX_20 = (MVWorldObjectClient *)0x0;
              if (pDVar16 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                FUN_?();
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,aiStackX_10[0],
                         (Object **)&pMStackX_20,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        );
              EditorWorldObjectCreation_Clone(this,pMStackX_20,0,0,1,(MethodInfo *)0x0);
            }
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
            pDVar16 = (this_02->fields).worldObjects;
            if (pDVar16 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
              wo = (MVWorldObjectClient *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,
                              (this_02->fields).worldObjectRoot,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
              if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
                FUN_?();
              }
              MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(wo,(MethodInfo *)0x0);
              return;
            }
            break;
          }
          pEVar2 = (this->fields).esm;
          if ((pEVar2 == (EditorStateMachine *)0x0) ||
             (pMVar6 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                                  (pEVar2,(MethodInfo *)0x0), pMVar6 == (MVGroup *)0x0)) break;
          if (((uint)(pMVar6->fields)._.interactionFlags >> 0x13 & 1) == 0)
          goto code_?;
          pEVar2 = (this->fields).esm;
          if (pEVar2 == (EditorStateMachine *)0x0) break;
          EditorStateMachine::EditorStateMachine_ExitGroup(pEVar2,(MethodInfo *)0x0);
          pEVar2 = (this->fields).esm;
          if (pEVar2 == (EditorStateMachine *)0x0) break;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnAddNewPrototype(String, Single) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_OnAddNewPrototype
               (EditorWorldObjectCreation *this,String *name,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_IsNewPrototype);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).esm;
  if (pEVar1 != (EditorStateMachine *)0x0) {
    while (pSVar2 = (pEVar1->fields).selectionController, pSVar2 != (SelectionController *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pSVar2->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) break;
      iVar3 = FUN_?();
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar4 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                              (pMVar4,(MethodInfo *)0x0), pMVar5 == (MVGroup *)0x0)) break;
      if (iVar3 == (pMVar5->fields)._._.id) {
code_?:
        pEVar1 = (this->fields).esm;
        aOStackX_8[0].currentCryptoKey = 0x13;
        aOStackX_8[0].hiddenValue = 0;
        aOStackX_8[0].fakeValue = 0;
        aOStackX_8[0].inited = 0;
        pOVar6 = (Object *)FUN_?(TypeInfo__EditorEvent,aOStackX_8);
        if (pEVar1 != (EditorStateMachine *)0x0) {
          FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar1,pOVar6,(MethodInfo *)0x0);
          this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          aOStackX_8[0].currentCryptoKey = 1;
          pOVar6 = (Object *)FUN_?(uRam_?,aOStackX_8);
          aOStackX_8[0] = (ObscuredByte)scale;
          pOVar7 = (Object *)FUN_?(uRam_?,aOStackX_8);
          if (this_03 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            uVar8 = CONCAT71((int7)((ulonglong)method >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar6,pOVar7,
                       (InsertionBehavior__Enum)uVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            aOStackX_8[0].currentCryptoKey = 2;
            pOVar6 = (Object *)FUN_?(uRam_?);
            pEVar1 = (this->fields).esm;
            if ((pEVar1 != (EditorStateMachine *)0x0) &&
               (pCVar9 = (pEVar1->fields).cubeModelingStateMachine,
               pCVar9 != (CubeModelingStateMachine *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              OVar10 = (pCVar9->fields).currentMaterialId;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              aOStackX_8[0] = OVar10;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              uVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredByte::ObscuredByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
              aOStackX_8[0].currentCryptoKey = uVar11;
              pOVar7 = (Object *)FUN_?(uRam_?,aOStackX_8);
              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar6,pOVar7,
                         (InsertionBehavior__Enum)uVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              aOStackX_8[0].currentCryptoKey = 3;
              pOVar6 = (Object *)FUN_?(uRam_?,aOStackX_8);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
                   (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                  (this_00 = (pMVar13->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
                 && (pMVar14 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                         (this_00,(MethodInfo *)0x0),
                    pMVar14 != (MVLocalPlayer *)0x0)) {
                aOStackX_8[0] = (ObscuredByte)(pMVar14->fields)._._ProfileID_k__BackingField;
                pOVar7 = (Object *)FUN_?(uRam_?,aOStackX_8);
                uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar6,pOVar7,
                           (InsertionBehavior__Enum)uVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                pEVar1 = (this->fields).esm;
                if (pEVar1 != (EditorStateMachine *)0x0) {
                  this_01 = (pEVar1->fields)._.data;
                  aOStackX_8[0].currentCryptoKey = 1;
                  pOVar6 = (Object *)FUN_?(uRam_?,aOStackX_8);
                  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryInsert
                              (this_01,(Object *)StringLiteral_IsNewPrototype,pOVar6,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),1),
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if ((pMVar12 != (MVGameControllerBase *)0x0) &&
                       (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) {
                      this_02 = (pMVar13->fields).operationRequests;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar12 != (MVGameControllerBase *)0x0) &&
                          (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
                         (((pMVar13->fields).worldNetwork != (WorldNetwork *)0x0 &&
                          ((pMVar4 = (MVWorldObjectClientManager *)
                                      (((pMVar13->fields).worldNetwork)->fields)._.
                                      worldObjectClientManager,
                           pMVar4 != (MVWorldObjectClientManager *)0x0 &&
                           (pMVar5 = MVWorldObjectClientManager::
                                      MVWorldObjectClientManager_get_RootGroup
                                                (pMVar4,(MethodInfo *)0x0),
                           pMVar5 != (MVGroup *)0x0)))))) {
                        groupId = (pMVar5->fields)._._.id;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
                        VStack_16.x = (pVVar15->upVector).x;
                        VStack_16.y = (pVVar15->upVector).y;
                        fVar17 = VStack_16.y * _UNK_?;
                        fVar18 = VStack_16.x * _UNK_?;
                        fVar19 = (pVVar15->upVector).z * _UNK_?;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Quaternion);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pQVar20 = TypeInfo__UnityEngine__Quaternion->static_fields;
                        uVar8._0_4_ = (pQVar20->identityQuaternion).x;
                        uVar8._4_4_ = (pQVar20->identityQuaternion).y;
                        uVar21._0_4_ = (pQVar20->identityQuaternion).z;
                        uVar21._4_4_ = (pQVar20->identityQuaternion).w;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
                        VStack_16.x = (pVVar15->oneVector).x;
                        VStack_16.y = (pVVar15->oneVector).y;
                        fVar22 = VStack_16.y * scale;
                        fVar23 = VStack_16.x * scale;
                        VStack_24.z = (pVVar15->oneVector).z * scale;
                        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
                          VStack_16.y = fVar17;
                          VStack_16.x = fVar18;
                          VStack_24.y = fVar22;
                          VStack_24.x = fVar23;
                          VStack_16.z = fVar19;
                          aQStack_25[0]._0_8_ = uVar8;
                          aQStack_25[0]._8_8_ = uVar21;
                          MVNetworkGame+OperationRequests::
                          MVNetworkGame_OperationRequests_RequestBuiltInItem
                                    (this_02,(BuiltInItem__Enum)
                                             CONCAT71((int7)((ulonglong)pQVar20 >> 8),1),groupId,
                                     (Dictionary_2_System_Object_System_Object_ *)this_03,&VStack_16
                                     ,aQStack_25,&VStack_24,0,1,(MethodInfo *)0x0);
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
        break;
      }
      pEVar1 = (this->fields).esm;
      if ((pEVar1 == (EditorStateMachine *)0x0) ||
         (pMVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                              (pEVar1,(MethodInfo *)0x0), pMVar5 == (MVGroup *)0x0)) break;
      if (((uint)(pMVar5->fields)._.interactionFlags >> 0x13 & 1) == 0) goto code_?;
      pEVar1 = (this->fields).esm;
      if (pEVar1 == (EditorStateMachine *)0x0) break;
      EditorStateMachine::EditorStateMachine_ExitGroup(pEVar1,(MethodInfo *)0x0);
      pEVar1 = (this->fields).esm;
      if (pEVar1 == (EditorStateMachine *)0x0) break;
    }
  }
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnChangePrototypeScale(Int32, Single) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_OnChangePrototypeScale
               (EditorWorldObjectCreation *this,int32_t worldId,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (-1 < worldId) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) {
DAT_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,worldId,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVCubeModelBase__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVCubeModelBase)) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = pMVar2[1].klass;
        if (pMVar4 != (MVWorldObjectClient__Class *)0x0) {
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          p_Var6 = (pMVar4->_0).typeMetadataHandle;
          if (p_Var6 != (Il2CppMetadataTypeHandle)0x0) {
            if (*(int *)(p_Var6 + 0x20) < 2) {
              this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              pMVar4 = pMVar2[1].klass;
              if ((pMVar4 != (MVWorldObjectClient__Class *)0x0) &&
                 (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
                worldInventoryID._0_2_ = (pMVar4->_0).byval_arg.attrs;
                worldInventoryID._2_1_ = (pMVar4->_0).byval_arg.type;
                worldInventoryID._3_1_ = (pMVar4->_0).byval_arg.field_0xb;
                MVNetworkGame+OperationRequests::
                MVNetworkGame_OperationRequests_UpdatePrototypeScale
                          (this_02,worldInventoryID,scale,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pcStack_5 = (char *)((ulonglong)(uint)scale << 0x20);
              pcStack_5 = (char *)CONCAT71(pcStack_5._1_7_,1);
              if (pMVar2[1].klass != (MVWorldObjectClient__Class *)0x0) {
                ((pMVar2[1].klass)->_0).namespaze = pcStack_5;
                pMVar4 = pMVar2[1].klass;
                if (pMVar4 != (MVWorldObjectClient__Class *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  p_Var6 = (pMVar4->_0).typeMetadataHandle;
                  if (p_Var6 != (Il2CppMetadataTypeHandle)0x0) {
                    if (*(int *)(p_Var6 + 0x20) < 2) {
                      return;
                    }
                    if (pMVar2[1].klass != (MVWorldObjectClient__Class *)0x0) {
                      RuntimePrototypeCubeModel::
                      RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                                ((RuntimePrototypeCubeModel *)pMVar2[1].klass,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
                           (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
                          (pWVar8 = (pMVar7->fields).worldNetwork, pWVar8 != (WorldNetwork *)0x0))
                         && (this_00 = (pWVar8->fields)._.worldInventory,
                            this_00 != (MVWorldInventory *)0x0)) {
                        MVWorldInventory::MVWorldInventory_RequestWoMakeUniquePrototype
                                  (this_00,(pMVar2->fields)._.id,(MethodInfo *)0x0);
                        if (pMVar2[1].klass != (MVWorldObjectClient__Class *)0x0) {
                          RuntimePrototypeCubeModel::
                          RuntimePrototypeCubeModel_AddReferenceToAllChunks
                                    ((RuntimePrototypeCubeModel *)pMVar2[1].klass,(MethodInfo *)0x0)
                          ;
                          return;
                        }
                      }
                    }
                  }
                }
                FUN_?();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
          }
        }
        goto DAT_?;
      }
    }
  }
  return;
}


/* Boolean ValidateAddItemFromInventory(KoGaMaPackageClient) */

bool Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_ValidateAddItemFromInventory
               (EditorWorldObjectCreation *this,KoGaMaPackageClient *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Only_one_winning_condition_will_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((package == (KoGaMaPackageClient *)0x0) ||
      (this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)(package->fields).worldObjects,
      this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0))
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
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
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_2 = (pDVar1->fields)._dictionary;
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    if (pDStack_2 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_6 = pDStack_2;
      FUN_?();
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_2->fields)._version << 0x20);
    uStack_4 = 0;
    uStack_13 = (ulonglong)ppDStack_3;
    pMStack_14 = (MVWorldObjectClient *)0x0;
    pDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_3 = &pDStack_2;
    while (pDStack_2 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_13._4_4_ != (pDStack_2->fields)._version) goto code_?;
      uVar7 = uStack_13 & 0xffffffff;
      do {
        if (pDStack_2 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        uVar5 = (uint)uVar7;
        if ((uint)(pDStack_2->fields)._count <= uVar5) {
          return 1;
        }
        pDVar15 = (pDStack_2->fields)._entries;
        uVar7 = (ulonglong)(uVar5 + 1);
        uStack_13 = CONCAT44(uStack_13._4_4_,uVar5 + 1);
        if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar15->max_length <= uVar5) goto code_?;
      } while ((&pDVar15->vector[0].hashCode)[(longlong)(int)uVar5 * 6] < 0);
      pMStack_14 = *(MVWorldObjectClient **)
                    ((longlong)&pDVar15->vector[0].key + (longlong)(int)uVar5 * 0x18 + 8);
      func_?();
      worldObject = pMStack_14;
      if (pMStack_14 == (MVWorldObjectClient *)0x0) goto code_?;
      cVar16 = (*(pMStack_14->klass->vtable).IsSingletonObject.methodPtr)
                        (pMStack_14,(pMStack_14->klass->vtable).IsSingletonObject.method);
      if (cVar16 != '\0') {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pLVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (this_02,(worldObject->fields)._.type,(MethodInfo *)0x0);
        if (pLVar17 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
        if (0 < (pLVar17->fields)._size) {
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (pMVar18 == (MainCameraManager *)0x0) goto code_?;
          pMVar19 = (pMVar18->fields).cameraController;
          if (pMVar19 == (MVCameraController *)0x0) goto code_?;
          this_01 = (pMVar19->fields).cameraStack;
          if (this_01 == (MVCameraController_CameraStack *)0x0) goto code_?;
          pMVar20 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                              (this_01,(MethodInfo *)0x0);
          uVar21 = FUN_?(pLVar17,0);
          uStack_22 = 0;
          if (pMVar20 != (MVCameraBase *)0x0) {
            uStack_23 = 0;
            uStack_24 = 0;
            uStack_22 = 0;
            uStack_25 = 0;
            (*(pMVar20->klass->vtable).FocusOnObject.methodPtr)
                      (pMVar20,uVar21,TypeRef__System__Activator__T._0_4_,&uStack_22,&uStack_23,
                       (pMVar20->klass->vtable).FocusOnObject.method);
            pSVar26 = TM::TM__(StringLiteral_There_can_be_only_one_of_this_ob,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?();
            }
            NotificationController::NotificationController_PushNotification
                      (pSVar26,(Sprite *)0x0,5,(MethodInfo *)0x0);
            return 0;
          }
          goto code_?;
        }
      }
      bVar12 = EditorWorldObjectCreation_IsItemAnAllowedWinningCondition
                        (this,worldObject,(MethodInfo *)0x0);
      if (bVar12 == 0) {
        pSVar26 = TM::TM__(StringLiteral_Only_one_winning_condition_will_,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
          FUN_?();
        }
        NotificationController::NotificationController_PushNotification
                  (pSVar26,(Sprite *)0x0,5,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_WOCM_InitializedGameQueryData
               (EditorWorldObjectCreation *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,sender,e,(char)method);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) && (e != (InitializedGameQueryDataEventArgs *)0x0)) {
      if ((pMVar3->fields)._._ActorNr_k__BackingField == (e->fields).InstigatorActorNumber) {
        pEVar4 = (this->fields).esm;
        if (pEVar4 == (EditorStateMachine *)0x0) goto code_?;
        EVar5 = EditorStateMachine::EditorStateMachine_get_CurEvent(pEVar4,(MethodInfo *)0x0);
        if (EVar5 == EditorEvent__Enum_ESWaitForSelect) {
          pMVar6 = (e->fields).RootWO;
          if (((pMVar6 == (MVWorldObjectClient *)0x0) ||
              (pEVar4 = (this->fields).esm, pEVar4 == (EditorStateMachine *)0x0)) ||
             (this_01 = (pEVar4->fields).selectionController, this_01 == (SelectionController *)0x0)
             ) goto code_?;
          SelectionController::SelectionController_SelectWO
                    (this_01,(pMVar6->fields)._.id,0,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

