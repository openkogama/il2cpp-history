
/* Void Clone(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_Clone
               (EditorWorldObjectCreation *this,MVWorldObjectClient *original,bool cloneToRoot,
               bool setAsPreviewItem,bool goToInsert,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>);
    func_?(&StringLiteral_goToInsert);
    cRam_? = '\x01';
  }
  if (goToInsert == 0) {
code_?:
    pEVar1 = (this->fields).esm;
    value = (Object *)func_?(TypeInfo__EditorEvent);
    if (pEVar1 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar1,value,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
        pEVar3 = (pMVar2->fields).CloneWorldObjectTreeResponse;
        this_01 = (EventHandler_1_Object_ *)
                  func_?(
                                 TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>
                                 );
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pEVar3,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pDVar4 == (Delegate *)0x0) {
          (pMVar2->fields).CloneWorldObjectTreeResponse =
               (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0;
        }
        else {
          pEVar3 = (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)func_?();
          if (pEVar3 == (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
            func_?();
            goto code_?;
          }
          (pMVar2->fields).CloneWorldObjectTreeResponse = pEVar3;
          iVar5 = func_?();
          if (iVar5 == 0) goto code_?;
        }
        func_?();
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_CloneWorldObjectTree
                    (pMVar2,original,0,setAsPreviewItem,cloneToRoot,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    pEVar1 = (this->fields).esm;
    if ((pEVar1 != (EditorStateMachine *)0x0) &&
       (this_00 = (pEVar1->fields)._.data,
       this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)StringLiteral_goToInsert,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CloneWorldObjectTreeResponseHandler(Object, CloneWorldObjectTreeResponseEventArgs) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_CloneWorldObjectTreeResponseHandler
               (EditorWorldObjectCreation *this,Object *sender,
               CloneWorldObjectTreeResponseEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>);
    cRam_? = '\x01';
  }
  pCVar1 = e;
  if (e != (CloneWorldObjectTreeResponseEventArgs *)0x0) {
    if ((e->fields).Success == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar2->fields).gameMode == 0) {
        e = (CloneWorldObjectTreeResponseEventArgs *)0x2f;
        this_00 = (this->fields).esm;
        value = (Object *)func_?(TypeInfo__EditorEvent,&e);
        if (this_00 == (EditorStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
      }
    }
    e = (CloneWorldObjectTreeResponseEventArgs *)
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((MVWorldObjectClientManager *)e != (MVWorldObjectClientManager *)0x0) {
      source = (((MVWorldObjectClientManager *)e)->fields).CloneWorldObjectTreeResponse;
      this_01 = (EventHandler_1_Object_ *)
                func_?(
                               TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>
                               );
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
      pEVar4 = TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>;
      if (pDVar3 == (Delegate *)0x0) {
        e[4].fields.RootId = 0;
        pCVar5 = (CloneWorldObjectTreeResponseEventArgs *)0x0;
      }
      else {
        e = (CloneWorldObjectTreeResponseEventArgs *)
            TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>;
        iVar6 = func_?();
        if (iVar6 == 0) {
          e = (CloneWorldObjectTreeResponseEventArgs *)pEVar4;
          func_?();
          goto code_?;
        }
        e[4].fields.RootId = iVar6;
        e = (CloneWorldObjectTreeResponseEventArgs *)
            TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>;
        pCVar5 = (CloneWorldObjectTreeResponseEventArgs *)func_?();
        if (pCVar5 == (CloneWorldObjectTreeResponseEventArgs *)0x0) goto code_?;
      }
      e = pCVar5;
      func_?();
      if (_UNK_? != (EditorStateMachine *)0x0) {
        EditorStateMachine::EditorStateMachine_SelectWO
                  (_UNK_?,(pCVar1->fields).RootId,0,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
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
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__KoGaMaPackageClient);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    buffer = (item->fields).data;
    this = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this,buffer,(MethodInfo *)0x0);
    pKVar1 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(pKVar1,this,0,(MethodInfo *)0x0);
    if (pKVar1 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(pKVar1,(MethodInfo *)0x0);
      return pKVar1;
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
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
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar2 = (List_1_MVWorldObjectClient_ *)(*pcVar3)();
  return pLVar2;
}


/* Void Initialize(EditorStateMachine) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
               (EditorWorldObjectCreation *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__EditorWorldObjectCreation__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).esm;
  *ppEVar1 = esm;
  func_?(ppEVar1,esm);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pWVar3 = (pMVar2->fields).worldNetwork;
    if (pWVar3 != (WorldNetwork *)0x0) {
      pEVar4 = (pWVar3->fields)._.InitializedGameQueryData;
      ppEVar5 = &(pWVar3->fields)._.InitializedGameQueryData;
      this_00 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__EditorWorldObjectCreation__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pEVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        *ppEVar5 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0;
        func_?();
        return;
      }
      pEVar4 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)func_?();
      if (pEVar4 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        *ppEVar5 = pEVar4;
        iVar7 = func_?();
        if (iVar7 != 0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsItemAnAllowedWinningCondition(MVWorldObjectClient) */

bool Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_IsItemAnAllowedWinningCondition
               (EditorWorldObjectCreation *this,MVWorldObjectClient *worldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    ppMStack_1 = &
                  bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<KillLimitClient>__
    ;
    func_?();
    func_?(&
                    bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<OculusKillLimitClient>__
                   );
    cRam_? = '\x01';
  }
  if (worldObject == (MVWorldObjectClient *)0x0) {
    uVar2 = func_?(&ppMStack_1);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  iVar5 = (worldObject->fields)._.type;
  if (iVar5 < 0x32) {
    method_00 = 
    bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<FlagReachedClient>__;
    if (iVar5 != 0x11) {
      if (iVar5 != 0x31) {
        return 1;
      }
      bVar4 = EditorWorldObjectCreation_IsWinningConditionPlaceable
                        (this,
                         bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<AllCollectiblesCollectedClient>__
                        );
      if (bVar4 == 0) {
        return 0;
      }
      return 1;
    }
  }
  else {
    method_00 = 
    bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<KillLimitClient>__;
    if ((iVar5 != 0x3f) &&
       (method_00 = 
        bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<OculusKillLimitClient>__
       , iVar5 != 0x40)) {
      return 1;
    }
  }
  bVar4 = EditorWorldObjectCreation_IsWinningConditionPlaceable(this,method_00);
  if (bVar4 != 0) {
    return 1;
  }
  return 0;
}


/* Boolean IsWinningConditionPlaceable[Object]() */

bool Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_IsWinningConditionPlaceable
               (EditorWorldObjectCreation *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    bVar2 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_CanPlaceWinningCondition
                      (this_00,((method->field7_0x1c).rgctx_data)->method);
    return bVar2 != 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnAddItemFromInventory(InventoryItem) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_OnAddItemFromInventory
               (EditorWorldObjectCreation *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EditorEvent);
    func_?(&StringLiteral_Creating_new_wo);
    func_?(&StringLiteral_Found_wo_for_cloning);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__KoGaMaPackageClient);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    buffer = (item->fields).data;
    this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,buffer,(MethodInfo *)0x0);
    this_01 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_01,this_00,0,(MethodInfo *)0x0);
    if (this_01 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
      bVar2 = EditorWorldObjectCreation_ValidateAddItemFromInventory(this,this_01,(MethodInfo *)0x0)
      ;
      if (bVar2 == 0) {
code_?:
        KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_01,(MethodInfo *)0x0);
        return;
      }
      pEVar3 = (this->fields).esm;
      if (pEVar3 != (EditorStateMachine *)0x0) {
        while (bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                                 (pEVar3,(MethodInfo *)0x0), bVar2 == 0) {
          pEVar3 = (this->fields).esm;
          if ((pEVar3 == (EditorStateMachine *)0x0) ||
             (this_02 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                                  (pEVar3,(MethodInfo *)0x0), this_02 == (MVGroup *)0x0))
          goto code_?;
          bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            ((MVWorldObjectClient *)this_02,InteractionFlags__Enum_CantAddChildren,
                             (MethodInfo *)0x0);
          if (bVar2 == 0) break;
          pEVar3 = (this->fields).esm;
          if (pEVar3 == (EditorStateMachine *)0x0) goto code_?;
          EditorStateMachine::EditorStateMachine_ExitGroup(pEVar3,(MethodInfo *)0x0);
          pEVar3 = (this->fields).esm;
          if (pEVar3 == (EditorStateMachine *)0x0) goto code_?;
        }
        iStack_1 = -1;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
          bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetUnmodifiedWorldObject
                            (pMVar4,this_01,&iStack_1,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Creating_new_wo,(MethodInfo *)0x0);
            pEVar3 = (this->fields).esm;
            value = (Object *)func_?(TypeInfo__EditorEvent,&stack0xfffffff4);
            if (pEVar3 != (EditorStateMachine *)0x0) {
              FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar3,value,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Quaternion);
                cRam_? = '\x01';
              }
              rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
              this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              itemId = (item->fields).itemID;
              pEVar3 = (this->fields).esm;
              if (pEVar3 != (EditorStateMachine *)0x0) {
                groupId = EditorStateMachine::EditorStateMachine_get_ParentGroupID
                                    (pEVar3,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Vector3);
                  cRam_? = '\x01';
                }
                pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
                uVar6 = (pVVar5->upVector).x;
                uVar7 = (pVVar5->upVector).y;
                if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
                  position.y = (float)uVar7 * _UNK_?;
                  position.x = (float)uVar6 * _UNK_?;
                  position.z = (pVVar5->upVector).z * _UNK_?;
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddItemToWorld
                            (this_03,itemId,groupId,position,rotation,0,1,0,(MethodInfo *)0x0);
                  KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_01,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Found_wo_for_cloning,(MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
              original = (MVWorldObjectClient *)
                         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (pMVar4,iStack_1,(MethodInfo *)0x0);
              EditorWorldObjectCreation_Clone(this,original,0,0,1,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnAddNewPrototype(String, Single) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_OnAddNewPrototype
               (EditorWorldObjectCreation *this,String *name,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_IsNewPrototype);
    cRam_? = '\x01';
  }
  pEVar1 = this;
  pEVar2 = (this->fields).esm;
  if (pEVar2 != (EditorStateMachine *)0x0) {
    while (bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                              (pEVar2,(MethodInfo *)0x0), bVar3 == 0) {
      pEVar2 = (pEVar1->fields).esm;
      if ((pEVar2 == (EditorStateMachine *)0x0) ||
         (pMVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                              (pEVar2,(MethodInfo *)0x0), pMVar4 == (MVGroup *)0x0))
      goto code_?;
      bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                         ((MVWorldObjectClient *)pMVar4,InteractionFlags__Enum_CantAddChildren,
                          (MethodInfo *)0x0);
      if (bVar3 == 0) break;
      pEVar2 = (pEVar1->fields).esm;
      if (pEVar2 == (EditorStateMachine *)0x0) goto code_?;
      EditorStateMachine::EditorStateMachine_ExitGroup(pEVar2,(MethodInfo *)0x0);
      pEVar2 = (pEVar1->fields).esm;
      if (pEVar2 == (EditorStateMachine *)0x0) goto code_?;
    }
    pEVar2 = (pEVar1->fields).esm;
    afStack_5[1] = 2.66247e-44;
    pOVar6 = (Object *)func_?(TypeInfo__EditorEvent,afStack_5 + 1);
    if (pEVar2 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar2,pOVar6,(MethodInfo *)0x0);
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (EditorWorldObjectCreation *)CONCAT13(1,this._0_3_);
      pOVar6 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      afStack_5[0] = scale;
      pOVar7 = (Object *)func_?(TypeInfo__System__Single,afStack_5);
      if (this_02 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar6,pOVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        auStack_8[1] = 2;
        pOVar6 = (Object *)func_?(TypeInfo__System__Byte,auStack_8 + 1);
        pEVar2 = (pEVar1->fields).esm;
        if ((pEVar2 != (EditorStateMachine *)0x0) &&
           (this_00 = (pEVar2->fields).cubeModelingStateMachine,
           this_00 != (CubeModelingStateMachine *)0x0)) {
          auStack_8[0] = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   (this_00,(MethodInfo *)0x0);
          pOVar7 = (Object *)func_?(TypeInfo__System__Byte,auStack_8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar6,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          uStack_9 = 3;
          pOVar6 = (Object *)func_?(TypeInfo__System__Byte,&uStack_9);
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_03 != (MVNetworkGame *)0x0) &&
             (pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
             pMVar10 != (MVLocalPlayer *)0x0)) {
            iStack_11 = (pMVar10->fields)._._ProfileID_k__BackingField;
            pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_11);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar6,pOVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            pEVar2 = (pEVar1->fields).esm;
            if (pEVar2 != (EditorStateMachine *)0x0) {
              this_01 = (pEVar2->fields)._.data;
              uStack_12 = 1;
              pOVar6 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_12);
              if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (this_01,(Object *)StringLiteral_IsNewPrototype,pOVar6,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if ((this_05 != (MVWorldObjectClientManager *)0x0) &&
                   (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                        (this_05,(MethodInfo *)0x0), pMVar4 != (MVGroup *)0x0)) {
                  groupId = (pMVar4->fields)._._.id;
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector3);
                    cRam_? = '\x01';
                  }
                  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar14 = (pVVar13->upVector).x;
                  uVar15 = (pVVar13->upVector).y;
                  fVar16 = (float)uVar14 * _UNK_?;
                  fVar17 = (float)uVar15 * _UNK_?;
                  fVar18 = (pVVar13->upVector).z * _UNK_?;
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Quaternion);
                    cRam_? = '\x01';
                  }
                  pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
                  fVar20 = (pQVar19->identityQuaternion).x;
                  fVar21 = (pQVar19->identityQuaternion).y;
                  fVar22 = (pQVar19->identityQuaternion).z;
                  fVar23 = (pQVar19->identityQuaternion).w;
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__UnityEngine__Vector3);
                    cRam_? = '\x01';
                  }
                  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
                  uVar24 = (pVVar13->oneVector).x;
                  uVar25 = (pVVar13->oneVector).y;
                  if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
                    position.y = fVar17;
                    position.x = fVar16;
                    position.z = fVar18;
                    rotation.y = fVar21;
                    rotation.x = fVar20;
                    rotation.z = fVar22;
                    rotation.w = fVar23;
                    scale_00.y = (float)uVar25 * scale;
                    scale_00.x = (float)uVar24 * scale;
                    scale_00.z = (pVVar13->oneVector).z * scale;
                    MVNetworkGame+OperationRequests::
                    MVNetworkGame_OperationRequests_RequestBuiltInItem
                              (this_04,BuiltInItem__Enum_CubeModel,groupId,
                               (Dictionary_2_System_Object_System_Object_ *)this_02,position,
                               rotation,scale_00,0,1,(MethodInfo *)0x0);
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
code_?:
  func_?();
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
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  if (-1 < worldId) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_01 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,worldId,(MethodInfo *)0x0);
    if (this_01 != (MVCubeModelBase *)0x0) {
      bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if ((bVar2 <= (this_01->klass->_1).naturalAligment) &&
         ((MVCubeModelBase__Class *)(this_01->klass->_1).typeHierarchy[bVar2 - 1] ==
          TypeInfo__MVCubeModelBase)) {
        MVCubeModelBase::MVCubeModelBase_UpdatePrototypeScale(this_01,scale,(MethodInfo *)0x0);
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&StringLiteral_Only_one_winning_condition_will_);
    func_?(&StringLiteral_There_can_be_only_one_of_this_ob);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((package != (KoGaMaPackageClient *)0x0) &&
     (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(package->fields).worldObjects,
     this_00 !=
     (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      method_00 = 
      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
      ;
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_7,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      pOStack_8 = (Object__Class *)pDVar6->_dictionary;
      DStack_7._version = 0;
      uStack_1 = 1;
      worldObject = (MVWorldObjectClient *)pDVar6->_currentValue;
      DStack_7._currentValue = (Object *)&pOStack_8;
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&pOStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        if (worldObject == (MVWorldObjectClient *)0x0) break;
        method_01 = worldObject;
        cVar10 = (*(code *)(worldObject->klass->vtable).IsSingletonObject.method)(worldObject);
        if (cVar10 != '\0') {
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_02 == (MVWorldObjectClientManager *)0x0) break;
          this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                              (this_02,(worldObject->fields)._.type,(MethodInfo *)0x0);
          if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          break;
          if (0 < (this_03->fields)._size) {
            this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_04 != (MainCameraManager *)0x0) {
              pMVar11 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                 (this_04,(MethodInfo *)0x0);
              RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_03,0,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                );
              if (pMVar11 != (MVCameraBase *)0x0) {
                func_?(0xd,pMVar11,RVar12,0x40000000,0,0,0,0);
                pSVar13 = TM::TM__(StringLiteral_There_can_be_only_one_of_this_ob,(MethodInfo *)0x0);
                if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                NotificationController::NotificationController_PushNotification
                          (pSVar13,(Sprite *)0x0,5,(MethodInfo *)0x0);
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&pOStack_8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                           ,(MethodInfo *)method_01);
                *unaff_FS_OFFSET = uStack_3;
                return 0;
              }
            }
            break;
          }
        }
        bVar9 = EditorWorldObjectCreation_IsItemAnAllowedWinningCondition
                          (this,worldObject,(MethodInfo *)0x0);
        worldObject = method_01;
        if (bVar9 == 0) {
          pSVar13 = TM::TM__(StringLiteral_Only_one_winning_condition_will_,(MethodInfo *)0x0);
          worldObject = method_01;
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__NotificationController);
            worldObject = method_01;
          }
          NotificationController::NotificationController_PushNotification
                    (pSVar13,(Sprite *)0x0,5,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  bVar9 = (*pcVar14)();
  return bVar9;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_WOCM_InitializedGameQueryData
               (EditorWorldObjectCreation *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) && (e != (InitializedGameQueryDataEventArgs *)0x0)) {
      if ((pMVar1->fields)._._ActorNr_k__BackingField == (e->fields).InstigatorActorNumber) {
        pEVar2 = (this->fields).esm;
        if (pEVar2 == (EditorStateMachine *)0x0) goto code_?;
        EVar3 = EditorStateMachine::EditorStateMachine_get_CurEvent(pEVar2,(MethodInfo *)0x0);
        if (EVar3 == EditorEvent__Enum_ESWaitForSelect) {
          pMVar4 = (e->fields).RootWO;
          if ((pMVar4 == (MVWorldObjectClient *)0x0) ||
             (pEVar2 = (this->fields).esm, pEVar2 == (EditorStateMachine *)0x0))
          goto code_?;
          EditorStateMachine::EditorStateMachine_SelectWO
                    (pEVar2,(pMVar4->fields)._.id,0,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

