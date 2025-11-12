
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddToMarketPlaceState::ESAddToMarketPlaceState_Enter
               (ESAddToMarketPlaceState *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
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
                  MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IDictionary<int,_MV::WorldObject::MVItem>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ESAddToMarketPlaceState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ItemID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Item_not_found);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Is_not_resellable);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Is_already_authorprofile__Skip_t);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_ESAddToMarketPlaceState,(MethodInfo *)0x0);
  if (((e != (EditorStateMachine *)0x0) &&
      (this_00 = (e->fields)._.data, this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0))
     && (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_00,(Object *)StringLiteral_ItemID,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
       ((pPVar6 = (pMVar5->fields)._PlayerRepository_k__BackingField,
        pPVar6 != (PlayerRepository *)0x0 &&
        (pDVar7 = (pPVar6->fields).playerInventory,
        pDVar7 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0)))) {
      pDVar8 = pDVar7->klass;
      uVar9._0_1_ = (pDVar8->_1).rank;
      uVar9._1_1_ = (pDVar8->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pDVar8->interfaceOffsets[uVar1].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IDictionary<int,_MV::WorldObject::MVItem>) {
            pVVar10 = &(pDVar8->vtable).Equals + (pDVar8->interfaceOffsets[uVar1].offset + 7);
            goto code_?;
          }
          uVar11 = (short)uVar1 + 1;
          uVar1 = (ulonglong)uVar11;
        } while (uVar11 < uVar9);
      }
      pVVar10 = (VirtualInvokeData *)
                FUN_?(pDVar7,
                              TypeInfo__System__Collections__Generic__IDictionary<int,_MV::WorldObject::MVItem>
                              ,7);
code_?:
      cVar12 = (*pVVar10->methodPtr)(pDVar7);
      if (cVar12 == '\0') {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Item_not_found,(MethodInfo *)0x0);
        FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddToMarketPlaceState::ESAddToMarketPlaceState_Execute
               (ESAddToMarketPlaceState *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ESAddToMarketPlaceState__AddToMarketPlaceInternalState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__CommonValues);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Compare_val__0____threshold__1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Compare_val__0_____threshold__1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).internalState;
  if (iVar1 == 1) {
    if ((this->fields).marketPlaceItemData != (BytePacker *)0x0) {
      (this->fields).internalState = 2;
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      pBVar2 = (this->fields).inventoryItemData;
      this_00 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_00,pBVar2,0,(MethodInfo *)0x0);
      if (this_00 != (KoGaMaPackageClient *)0x0) {
        KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_00,(MethodInfo *)0x0);
        pBVar2 = (this->fields).marketPlaceItemData;
        this_01 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_01,pBVar2,0,(MethodInfo *)0x0);
        if (this_01 != (KoGaMaPackageClient *)0x0) {
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
          afStackX_8[0] =
               KoGaMaPackageClient::KoGaMaPackageClient_Compare(this_01,this_00,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MV__Common__CommonValues->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (afStackX_8[0] <= _UNK_?) {
            pOVar3 = (Object *)FUN_?(uRam_?,afStackX_8);
            if (*(int *)&(TypeInfo__MV__Common__CommonValues->_1).field_0x1c == 0) {
              FUN_?();
            }
            afStackX_8[0] = 0.7;
            pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
            pSVar5 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral_Compare_val__0_____threshold__1_,pOVar3,pOVar4,
                                (MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar5,(MethodInfo *)0x0);
            (this->fields).internalState = 3;
          }
          else {
            pOVar3 = (Object *)FUN_?(uRam_?,afStackX_8);
            if (*(int *)&(TypeInfo__MV__Common__CommonValues->_1).field_0x1c == 0) {
              FUN_?();
            }
            afStackX_8[0] = 0.7;
            pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
            pSVar5 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral_Compare_val__0____threshold__1__,pOVar3,pOVar4,
                                (MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar5,(MethodInfo *)0x0);
            if (e == (EditorStateMachine *)0x0) goto DAT_?;
            FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          }
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_00,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_01,(MethodInfo *)0x0);
          return;
        }
      }
DAT_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (iVar1 == 3) {
      afStackX_8[0] = 4.2039e-45;
      uVar7 = FUN_?(TypeInfo__ESAddToMarketPlaceState__AddToMarketPlaceInternalState,
                            afStackX_8);
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
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,3,uVar7);
        return;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
    FUN_?(&
                  MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
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
    this_00 = (pMVar1->fields).game;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                  (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,
                   (MethodInfo *)0x0), e != (ReceivedItemFromQueryEventArgs *)0x0)) {
      bVar2 = iRam_? != 0;
      (this->fields).marketPlaceItemData = (e->fields).KoGaMaData;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).marketPlaceItemData >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

