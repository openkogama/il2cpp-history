
/* Int32 GetItemSlot(WorldObjectType) */

int32_t Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
        GamePassesViewCrystalsInInventory_GetItemSlot
                  (GamePassesViewCrystalsInInventory *this,WorldObjectType__Enum worldObjectType,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = -1;
  pIStackX_20 = (InventoryItem *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    lVar2 = FUN_?();
    if ((lVar2 != 0) &&
       (*(PlayerInventoryRepository **)(lVar2 + 0x40) != (PlayerInventoryRepository *)0x0)) {
      bVar3 = PlayerInventoryRepository::
              PlayerInventoryRepository_GetItemByWorldObjectTypeInCategory
                        (*(PlayerInventoryRepository **)(lVar2 + 0x40),
                         InventoryCategoryType__Enum_Pickups,worldObjectType,&pIStackX_20,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        if (pIStackX_20 == (InventoryItem *)0x0) goto code_?;
        iVar1 = (pIStackX_20->fields).slotPosition;
      }
      return iVar1;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Void HighlightObject(WorldObjectType) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_HighlightObject
               (GamePassesViewCrystalsInInventory *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesViewCrystalsInInventory____c___HighlightObject_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  itemSlot = GamePassesViewCrystalsInInventory_GetItemSlot(this,worldObjectType,(MethodInfo *)0x0);
  if (itemSlot == -1) {
    GamePassesViewCrystalsInInventory_PurchaseItem
              (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0xb5,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__IEditModeUI);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Tried_to_buy_crystal_item_but_it);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSStackX_20 = (ShopItem *)0x0;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) && (lVar1 = FUN_?(), lVar1 != 0)) &&
       (*(ClientShopRepository **)(lVar1 + 0x38) != (ClientShopRepository *)0x0)) {
      bVar2 = ClientShopRepository::ClientShopRepository_GetItemByWorldObjectTypeInCategory
                        (*(ClientShopRepository **)(lVar1 + 0x38),
                         InventoryCategoryType__Enum_Pickups,WorldObjectType__Enum_GamePointChest,
                         &pSStackX_20,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Tried_to_buy_crystal_item_but_it,(MethodInfo *)0x0);
        return;
      }
      GamePassesViewCrystalsInInventory_PurchaseClientShopItem(this,pSStackX_20,(MethodInfo *)0x0);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  GamePassesViewCrystalsInInventory_OpenInventoryAtPosition(this,7,itemSlot,(MethodInfo *)0x0);
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GamePassesViewCrystalsInInventory____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
  }
  this_01 = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GamePassesViewCrystalsInInventory____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
    }
    object = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GamePassesViewCrystalsInInventory____c___HighlightObject_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0 = this_01;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar4,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar1 = (longlong)(pLVar10->fields)._size;
    uVar5 = 0;
    if (0 < lVar1) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar5) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar2 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar4,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar2 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar1);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnClickGetCrystals() */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_OnClickGetCrystals
               (GamePassesViewCrystalsInInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesViewCrystalsInInventory____c___HighlightObject_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  itemSlot = GamePassesViewCrystalsInInventory_GetItemSlot
                       (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
  if (itemSlot == -1) {
    GamePassesViewCrystalsInInventory_PurchaseItem
              (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0xb5,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__IEditModeUI);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Tried_to_buy_crystal_item_but_it);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSStackX_20 = (ShopItem *)0x0;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) && (lVar1 = FUN_?(), lVar1 != 0)) &&
       (*(ClientShopRepository **)(lVar1 + 0x38) != (ClientShopRepository *)0x0)) {
      bVar2 = ClientShopRepository::ClientShopRepository_GetItemByWorldObjectTypeInCategory
                        (*(ClientShopRepository **)(lVar1 + 0x38),
                         InventoryCategoryType__Enum_Pickups,WorldObjectType__Enum_GamePointChest,
                         &pSStackX_20,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Tried_to_buy_crystal_item_but_it,(MethodInfo *)0x0);
        return;
      }
      GamePassesViewCrystalsInInventory_PurchaseClientShopItem(this,pSStackX_20,(MethodInfo *)0x0);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  GamePassesViewCrystalsInInventory_OpenInventoryAtPosition(this,7,itemSlot,(MethodInfo *)0x0);
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GamePassesViewCrystalsInInventory____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
  }
  this_01 = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GamePassesViewCrystalsInInventory____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
    }
    object = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GamePassesViewCrystalsInInventory____c___HighlightObject_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0 = this_01;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar4,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar1 = (longlong)(pLVar10->fields)._size;
    uVar5 = 0;
    if (0 < lVar1) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar5) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar2 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar4,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar2 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar1);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnInventoryItemAdded(Int32, Int32) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_OnInventoryItemAdded
               (GamePassesViewCrystalsInInventory *this,int32_t category,int32_t slot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0___OpenInventoryAtPosition_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0);
  if (object != (Object *)0x0) {
    bVar1 = cRam_? == '\0';
    *(int32_t *)&object[1].klass = category;
    *(int32_t *)((longlong)&object[1].klass + 4) = slot;
    if (bVar1) {
      FUN_?(&TypeInfo__FirstTimeEventManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pFVar2 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
    if ((pFVar2 != (FirstTimeState *)0x0) &&
       (this_00 = (pFVar2->fields).bitArray, this_00 != (BitArray *)0x0)) {
      if (((this_00->fields).m_length < 0x86) ||
         (bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                            (this_00,0x85,(MethodInfo *)0x0), bVar3 == 0)) {
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
      }
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0___OpenInventoryAtPosition_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar5 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar5);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar4,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar6 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar6 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar7 = (longlong)(pLVar6->fields)._size;
        uVar8 = 0;
        if (0 < lVar7) {
          lVar9 = 0;
          lVar10 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar6 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar6 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar6->fields)._size <= uVar8) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar12 = (pLVar6->fields)._items;
            if (pTVar12 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar12->max_length <= uVar8) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            this_01 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
            if (this_01 == (Component *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_01,(MethodInfo *)0x0);
            bVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar4,(BaseEventData *)0x0,this_02,
                               (pMVar5->field7_0x38).rgctx_data[1].method);
            if (bVar3 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
              return;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 8;
          } while (lVar9 < lVar7);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OpenInventoryAtPosition(Int32, Int32) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_OpenInventoryAtPosition
               (GamePassesViewCrystalsInInventory *this,int32_t categoryId,int32_t itemSlot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0___OpenInventoryAtPosition_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0);
  if (object != (Object *)0x0) {
    bVar1 = cRam_? == '\0';
    *(int32_t *)&object[1].klass = categoryId;
    *(int32_t *)((longlong)&object[1].klass + 4) = itemSlot;
    if (bVar1) {
      FUN_?(&TypeInfo__FirstTimeEventManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pFVar2 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
    if ((pFVar2 != (FirstTimeState *)0x0) &&
       (this_00 = (pFVar2->fields).bitArray, this_00 != (BitArray *)0x0)) {
      if (((this_00->fields).m_length < 0x86) ||
         (bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                            (this_00,0x85,(MethodInfo *)0x0), bVar3 == 0)) {
        FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                  (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
      }
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0___OpenInventoryAtPosition_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar5 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar5);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar4,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar6 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar6 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar7 = (longlong)(pLVar6->fields)._size;
        uVar8 = 0;
        if (0 < lVar7) {
          lVar9 = 0;
          lVar10 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar6 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar6 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar6->fields)._size <= uVar8) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar12 = (pLVar6->fields)._items;
            if (pTVar12 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar12->max_length <= uVar8) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            this_01 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
            if (this_01 == (Component *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_01,(MethodInfo *)0x0);
            bVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar4,(BaseEventData *)0x0,this_02,
                               (pMVar5->field7_0x38).rgctx_data[1].method);
            if (bVar3 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
              return;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 8;
          } while (lVar9 < lVar7);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_ProductPurchaseResponseHandler
               (GamePassesViewCrystalsInInventory *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesViewCrystalsInInventory____c___ProductPurchaseResponseHandler_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_1___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_pay_for_crystals_throu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MonitorData *)
           FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_0);
  if (pMVar1 != (MonitorData *)0x0) {
    *(int32_t *)(pMVar1 + 0x10) = returnCode;
    piVar2 = &(this->fields).pending;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return;
    }
    pLVar3 = (this->fields).buyingItems;
    uVar4 = 0;
    if (pLVar3 != (List_1_ShopItem_ *)0x0) {
      lVar5 = 0x20;
      while ((int)uVar4 < (pLVar3->fields)._size) {
        object_00 = (Object *)
                    FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_1
                                 );
        iVar6 = iRam_?;
        if (object_00 == (Object *)0x0) goto code_?;
        object_00[1].monitor = pMVar1;
        if (iVar6 != 0) {
          uVar7 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
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
            iVar6 = iRam_?;
          } while (!bVar11);
        }
        pLVar3 = (this->fields).buyingItems;
        if (pLVar3 == (List_1_ShopItem_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pSVar13 = (pLVar3->fields)._items;
        if (pSVar13 == (ShopItem__Array *)0x0) goto code_?;
        if ((uint)pSVar13->max_length <= uVar4) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        object_00[1].klass = *(Object__Class **)((longlong)pSVar13->vector + lVar5 + -0x20);
        if (iVar6 != 0) {
          uVar7 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
        if (object_00[1].monitor == (MonitorData *)0x0) goto code_?;
        if (*(int *)(object_00[1].monitor + 0x10) == 0) {
          lVar8 = FUN_?();
          if ((lVar8 == 0) ||
             (this_01 = (PlayerShopInventoryRepository *)FUN_?(),
             this_01 == (PlayerShopInventoryRepository *)0x0)) goto code_?;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_AddPurchasedItem
                    (this_01,(ShopItem *)object_00[1].klass,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Trying_to_pay_for_crystals_throu,(MethodInfo *)0x0);
          pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_00,object_00,
                     MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_1___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar14,(BaseEventData *)0x0,this_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
        }
        pLVar3 = (this->fields).buyingItems;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
        if (pLVar3 == (List_1_ShopItem_ *)0x0) goto code_?;
      }
      pLVar3 = (this->fields).buyingItems;
      if (pLVar3 != (List_1_ShopItem_ *)0x0) {
        iVar15 = (pLVar3->fields)._size;
        piVar2 = &(pLVar3->fields)._version;
        *piVar2 = *piVar2 + 1;
        (pLVar3->fields)._size = 0;
        if (0 < iVar15) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar3->fields)._items,0,iVar15,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar16 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar16 != (void *)0x0) {
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar17 = func_?(&UNK_?);
            FUN_?(uVar17,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
          pvVar16 = (void *)(*pcRam_?)(pvVar16);
          pGVar14 = (GameObject *)
                   UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (pvVar16,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
          if (*(int *)&(TypeInfo__GamePassesViewCrystalsInInventory____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
          }
          this_02 = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__10_0;
          if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__GamePassesViewCrystalsInInventory____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
            }
            object = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9;
            this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                       MethodInfo__GamePassesViewCrystalsInInventory____c___ProductPurchaseResponseHandler_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__10_0 = this_02;
            if (iRam_? != 0) {
              uVar4 = (uint)((ulonglong)
                              &TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->
                               __9__10_0 >> 0xc);
              lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
              do {
                uVar9 = *(ulonglong *)(lVar5 + 0xADDR);
                puVar10 = (ulonglong *)(lVar5 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar14,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          iVar15 = GamePassesViewCrystalsInInventory_GetItemSlot
                            (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
          GamePassesViewCrystalsInInventory_OpenInventoryAtPosition(this,7,iVar15,(MethodInfo *)0x0);
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void PurchaseClientShopItem(ShopItem) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_PurchaseClientShopItem
               (GamePassesViewCrystalsInInventory *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesViewCrystalsInInventory__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesViewCrystalsInInventory____c___PurchaseClientShopItem_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GamePassesViewCrystalsInInventory____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
  }
  this_00 = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__9_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__GamePassesViewCrystalsInInventory____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
    }
    object = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__GamePassesViewCrystalsInInventory____c___PurchaseClientShopItem_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__9_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                      &TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__9_0 >>
                     0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if ((this->fields).pending == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar7 == (MVGameControllerBase *)0x0) ||
       (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) goto code_?;
    pAVar9 = (pMVar8->fields).PurchaseProductResponseHandler;
    this_01 = (Action_2_Int32Enum_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                           );
    pMVar6 = (MethodInfo *)0x0;
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__GamePassesViewCrystalsInInventory__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar9,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar11 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar10 == (Delegate *)0x0) {
      (pMVar8->fields).PurchaseProductResponseHandler =
           (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
    }
    else {
      pAVar9 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)FUN_?(pDVar10,
                                 TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                );
      if (pAVar9 ==
          (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
         ) {
        FUN_?(pDVar10,pAVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (pMVar8->fields).PurchaseProductResponseHandler = pAVar9;
      pAVar11 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      lVar2 = FUN_?(pDVar10,
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
      if (lVar2 == 0) {
        FUN_?(pDVar10,pAVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pMVar8->fields).PurchaseProductResponseHandler >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  piVar13 = &(this->fields).pending;
  *piVar13 = *piVar13 + 1;
  pLVar14 = (this->fields).buyingItems;
  if (pLVar14 != (List_1_ShopItem_ *)0x0) {
    FUN_?(pLVar14,item);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar7 != (MVGameControllerBase *)0x0) &&
         (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
        (item != (ShopItem *)0x0)) &&
       (pMVar15 = (pMVar8->fields).operationRequests,
       pMVar15 != (MVNetworkGame_OperationRequests *)0x0)) {
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
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Purchase_item_with_id__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar16 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&stack0x00000010,(MethodInfo *)0x0);
      pSVar16 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Purchase_item_with_id__,pSVar16,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar16,(MethodInfo *)0x0);
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
      pOVar17 = (Object *)FUN_?(uRam_?,&stack0x00000010);
      value = (Object *)FUN_?(uRam_?,&stack0x00000010);
      if (this_02 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar17,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar18 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ,3,this_02,0);
        LOCK();
        UNLOCK();
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
      this_03 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      pOVar17 = (Object *)FUN_?(uRam_?,&stack0x00000010);
      if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar19 = CONCAT71((int7)((ulonglong)uVar18 >> 8),2);
        pMVar6 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
        uVar20 = (undefined7)((ulonglong)pMVar6 >> 8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_03,0x5e,pOVar17,(InsertionBehavior__Enum)uVar19,pMVar6);
        uVar18 = CONCAT71(uVar20,0x5f);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_03,0x5f,(Object *)this_02,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar19 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar21 = (pMVar15->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar21 != (PhotonPeer *)0x0) {
          (*(pPVar21->klass->vtable).SendOperation.methodPtr)
                    (pPVar21,CONCAT71((int7)((ulonglong)uVar18 >> 8),0x23),this_03,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar21->klass->vtable).SendOperation.method);
          return;
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void PurchaseItem(WorldObjectType) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_PurchaseItem
               (GamePassesViewCrystalsInInventory *this,WorldObjectType__Enum woType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tried_to_buy_crystal_item_but_it);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_20 = (ShopItem *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    lVar1 = FUN_?();
    if ((lVar1 != 0) && (*(ClientShopRepository **)(lVar1 + 0x38) != (ClientShopRepository *)0x0)) {
      bVar2 = ClientShopRepository::ClientShopRepository_GetItemByWorldObjectTypeInCategory
                        (*(ClientShopRepository **)(lVar1 + 0x38),
                         InventoryCategoryType__Enum_Pickups,woType,&pSStackX_20,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Tried_to_buy_crystal_item_but_it,(MethodInfo *)0x0);
        return;
      }
      GamePassesViewCrystalsInInventory_PurchaseClientShopItem(this,pSStackX_20,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TryPurchaseCrystalItems() */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_TryPurchaseCrystalItems
               (GamePassesViewCrystalsInInventory *this,MethodInfo *method)

{
  GamePassesViewCrystalsInInventory_PurchaseItem
            (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0xb5,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tried_to_buy_crystal_item_but_it);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_20 = (ShopItem *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    lVar1 = FUN_?();
    if ((lVar1 != 0) && (*(ClientShopRepository **)(lVar1 + 0x38) != (ClientShopRepository *)0x0)) {
      bVar2 = ClientShopRepository::ClientShopRepository_GetItemByWorldObjectTypeInCategory
                        (*(ClientShopRepository **)(lVar1 + 0x38),
                         InventoryCategoryType__Enum_Pickups,WorldObjectType__Enum_GamePointChest,
                         &pSStackX_20,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Tried_to_buy_crystal_item_but_it,(MethodInfo *)0x0);
        return;
      }
      GamePassesViewCrystalsInInventory_PurchaseClientShopItem(this,pSStackX_20,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GamePassesViewCrystalsInInventory() */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::GamePassesViewCrystalsInInventory__ctor
               (GamePassesViewCrystalsInInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_ShopItem_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).buyingItems = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).buyingItems >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

