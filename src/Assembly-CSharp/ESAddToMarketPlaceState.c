
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddToMarketPlaceState::ESAddToMarketPlaceState_Enter
               (ESAddToMarketPlaceState *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<int,_MV::WorldObject::MVItem>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ESAddToMarketPlaceState);
    func_?(&StringLiteral_ItemID);
    func_?(&StringLiteral_Item_not_found);
    func_?(&StringLiteral_Is_not_resellable);
    func_?(&StringLiteral_Is_already_authorprofile__Skip_t);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ESAddToMarketPlaceState,(MethodInfo *)0x0);
  if ((e != (EditorStateMachine *)0x0) &&
     (this_00 = (e->fields)._.data, this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_ItemID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar4 = (int32_t *)func_?(pOVar2);
      itemID = *piVar4;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pPVar6 = (pMVar5->fields)._PlayerRepository_k__BackingField,
         pPVar6 != (PlayerRepository *)0x0)) {
        pDVar7 = (pPVar6->fields).playerInventory;
        if (pDVar7 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
          uVar8 = 0;
          uVar9 = (pDVar7->klass->_1).interface_offsets_count;
          if (uVar9 != 0) {
            do {
              if (pDVar7->klass->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IDictionary<int,_MV::WorldObject::MVItem>)
              {
                pVVar10 = &(pDVar7->klass->vtable).
                           System_Collections_Generic_IDictionary_TKey_TValue__get_Values +
                          pDVar7->klass->interfaceOffsets[uVar8].offset;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          pVVar10 = (VirtualInvokeData *)
                    func_?(pDVar7,
                                    TypeInfo__System__Collections__Generic__IDictionary<int,_MV::WorldObject::MVItem>
                                    ,7,0);
code_?:
          cVar11 = (*pVVar10->methodPtr)(pDVar7,itemID,&iStack_1,pVVar10->method);
          if (cVar11 == '\0') {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Item_not_found,(MethodInfo *)0x0);
            FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
            return;
          }
          if (iStack_1 != 0) {
            iVar12 = *(int *)(iStack_1 + 0x2c);
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar5 != (MVNetworkGame *)0x0) {
              pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
              if (pMVar13 != (MVLocalPlayer *)0x0) {
                if (iVar12 == (pMVar13->fields)._._ProfileID_k__BackingField) {
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Debug);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                            ((Object *)StringLiteral_Is_already_authorprofile__Skip_t,
                             (MethodInfo *)0x0);
                  FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
                  return;
                }
                if (iStack_1 != 0) {
                  if (*(char *)(iStack_1 + 0x29) == '\0') {
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Debug);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                              ((Object *)StringLiteral_Is_not_resellable,(MethodInfo *)0x0);
                    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
                    return;
                  }
                  buffer = *(Byte__Array **)(iStack_1 + 0x24);
                  this_01 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
                  if (this_01 != (BytePacker *)0x0) {
                    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                              (this_01,buffer,(MethodInfo *)0x0);
                    (this->fields).inventoryItemData = this_01;
                    func_?(&(this->fields).inventoryItemData,this_01);
                    (this->fields).internalState = 1;
                    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    this_02 = (UnityAction_2_System_Object_System_Object_ *)
                              func_?(
                                             TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>
                                             );
                    if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                (this_02,(Object *)this,
                                 MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                                 ,(MethodInfo *)0x0);
                      if (pMVar5 != (MVNetworkGame *)0x0) {
                        MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                                  (pMVar5,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,
                                   (MethodInfo *)0x0);
                        this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                            ((MethodInfo *)0x0);
                        if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
                          MVNetworkGame+OperationRequests::
                          MVNetworkGame_OperationRequests_RequestMarketPlaceItem
                                    (this_03,itemID,(MethodInfo *)0x0);
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
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddToMarketPlaceState::ESAddToMarketPlaceState_Execute
               (ESAddToMarketPlaceState *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ESAddToMarketPlaceState__AddToMarketPlaceInternalState);
    func_?(&TypeInfo__MV__Common__CommonValues);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__KoGaMaPackageClient);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Compare_val__0____threshold__1__);
    func_?(&StringLiteral_Compare_val__0_____threshold__1_);
    cRam_? = '\x01';
  }
  pEVar1 = this;
  iVar2 = (this->fields).internalState;
  if (iVar2 == 1) {
    if ((this->fields).marketPlaceItemData != (BytePacker *)0x0) {
      (this->fields).internalState = 2;
    }
  }
  else {
    if (iVar2 == 2) {
      koGaMaData = (this->fields).inventoryItemData;
      this_00 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
      if (this_00 != (KoGaMaPackageClient *)0x0) {
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_00,koGaMaData,0,(MethodInfo *)0x0);
        KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_00,(MethodInfo *)0x0);
        this = (ESAddToMarketPlaceState *)(pEVar1->fields).marketPlaceItemData;
        this_01 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
        if (this_01 != (KoGaMaPackageClient *)0x0) {
          KoGaMaPackageClient::KoGaMaPackageClient__ctor
                    (this_01,(BytePacker *)this,0,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
          pIStack_3 = (Il2CppMethodPointer)
                      KoGaMaPackageClient::KoGaMaPackageClient_Compare
                                (this_01,this_00,(MethodInfo *)0x0);
          if ((TypeInfo__MV__Common__CommonValues->_1).cctor_finished_or_no_cctor == 0) {
            e = (EditorStateMachine *)TypeInfo__MV__Common__CommonValues;
            this = (ESAddToMarketPlaceState *)&UNK_?;
            func_?();
          }
          e = (EditorStateMachine *)0x0;
          this = (ESAddToMarketPlaceState *)&UNK_?;
          fVar4 = MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold
                            ((MethodInfo *)0x0);
          method = (MethodInfo *)&this;
          e = (EditorStateMachine *)TypeInfo__System__Single;
          if ((float)pIStack_3 <= fVar4) {
            this = (ESAddToMarketPlaceState *)&UNK_?;
            pOVar5 = (Object *)func_?();
            if ((TypeInfo__MV__Common__CommonValues->_1).cctor_finished_or_no_cctor == 0) {
              method = (MethodInfo *)TypeInfo__MV__Common__CommonValues;
              e = (EditorStateMachine *)&UNK_?;
              func_?();
            }
            method = (MethodInfo *)0x0;
            e = (EditorStateMachine *)&UNK_?;
            pIStack_3 = (Il2CppMethodPointer)
                        MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold
                                  ((MethodInfo *)0x0);
            method = (MethodInfo *)&pIStack_3;
            e = (EditorStateMachine *)TypeInfo__System__Single;
            this = (ESAddToMarketPlaceState *)&UNK_?;
            pOVar6 = (Object *)func_?();
            pSVar7 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral_Compare_val__0_____threshold__1_,pOVar5,pOVar6,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar7,(MethodInfo *)0x0);
            (pEVar1->fields).internalState = 3;
          }
          else {
            this = (ESAddToMarketPlaceState *)&UNK_?;
            pOVar5 = (Object *)func_?();
            if ((TypeInfo__MV__Common__CommonValues->_1).cctor_finished_or_no_cctor == 0) {
              method = (MethodInfo *)TypeInfo__MV__Common__CommonValues;
              e = (EditorStateMachine *)&UNK_?;
              func_?();
            }
            method = (MethodInfo *)0x0;
            e = (EditorStateMachine *)&UNK_?;
            pIStack_3 = (Il2CppMethodPointer)
                        MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold
                                  ((MethodInfo *)0x0);
            method = (MethodInfo *)&pIStack_3;
            e = (EditorStateMachine *)TypeInfo__System__Single;
            this = (ESAddToMarketPlaceState *)&UNK_?;
            pOVar6 = (Object *)func_?();
            pSVar7 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral_Compare_val__0____threshold__1__,pOVar5,pOVar6,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar7,(MethodInfo *)0x0);
            if (e == (EditorStateMachine *)0x0) goto code_?;
            FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          }
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_00,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_01,(MethodInfo *)0x0);
          return;
        }
      }
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (iVar2 == 3) {
      this = (ESAddToMarketPlaceState *)0x3;
      pOVar5 = (Object *)
               func_?(TypeInfo__ESAddToMarketPlaceState__AddToMarketPlaceInternalState,
                               &this);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar5,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void WOCM_ReceivedItemFromQuery(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::ESAddToMarketPlaceState::
     ESAddToMarketPlaceState_WOCM_ReceivedItemFromQuery
               (ESAddToMarketPlaceState *this,Object *sender,ReceivedItemFromQueryEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0
                );
      if (e != (ReceivedItemFromQueryEventArgs *)0x0) {
        (this->fields).marketPlaceItemData = (e->fields).KoGaMaData;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

