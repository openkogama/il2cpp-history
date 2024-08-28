
/* Int32 GetItemSlot(WorldObjectType) */

int32_t Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
        GamePassesViewCrystalsInInventory_GetItemSlot
                  (GamePassesViewCrystalsInInventory *this,WorldObjectType__Enum worldObjectType,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  iVar1 = -1;
  pIStack_2 = (InventoryItem *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar3 != (IEditModeUI *)0x0) {
    this_00 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar3);
    if (this_00 != (PlayerShopInventoryRepository *)0x0) {
      bVar4 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_GetInventoryItemByWorldObjectTypeInCategory
                        (this_00,InventoryCategoryType__Enum_Pickups,worldObjectType,&pIStack_2,
                         (MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (pIStack_2 == (InventoryItem *)0x0) goto code_?;
        iVar1 = (pIStack_2->fields).slotPosition;
      }
      return iVar1;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  iVar1 = (*pcVar5)();
  return iVar1;
}


/* Void HighlightObject(WorldObjectType) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_HighlightObject
               (GamePassesViewCrystalsInInventory *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesViewCrystalsInInventory____c___HighlightObject_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    cRam_? = '\x01';
  }
  itemSlot = GamePassesViewCrystalsInInventory_GetItemSlot(this,worldObjectType,(MethodInfo *)0x0);
  if (itemSlot != -1) {
    GamePassesViewCrystalsInInventory_OpenInventoryAtPosition(this,7,itemSlot,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesViewCrystalsInInventory____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__GamePassesViewCrystalsInInventory____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__GamePassesViewCrystalsInInventory____c___HighlightObject_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  GamePassesViewCrystalsInInventory_PurchaseItem
            (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
  GamePassesViewCrystalsInInventory_PurchaseItem
            (this,WorldObjectType__Enum_GamePointChest,(MethodInfo *)0x0);
  return;
}


/* Void OnClickGetCrystals() */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_OnClickGetCrystals
               (GamePassesViewCrystalsInInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesViewCrystalsInInventory____c___HighlightObject_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    cRam_? = '\x01';
  }
  itemSlot = GamePassesViewCrystalsInInventory_GetItemSlot
                       (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
  if (itemSlot != -1) {
    GamePassesViewCrystalsInInventory_OpenInventoryAtPosition(this,7,itemSlot,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__GamePassesViewCrystalsInInventory____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__GamePassesViewCrystalsInInventory____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__GamePassesViewCrystalsInInventory____c___HighlightObject_b__3_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__3_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  GamePassesViewCrystalsInInventory_PurchaseItem
            (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
  GamePassesViewCrystalsInInventory_PurchaseItem
            (this,WorldObjectType__Enum_GamePointChest,(MethodInfo *)0x0);
  return;
}


/* Void OnInventoryItemAdded(Int32, Int32) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_OnInventoryItemAdded
               (GamePassesViewCrystalsInInventory *this,int32_t category,int32_t slot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0___OpenInventoryAtPosition_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)category;
    value[1].monitor = (MonitorData *)slot;
    bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)0x0,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0___OpenInventoryAtPosition_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OpenInventoryAtPosition(Int32, Int32) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_OpenInventoryAtPosition
               (GamePassesViewCrystalsInInventory *this,int32_t categoryId,int32_t itemSlot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0___OpenInventoryAtPosition_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)categoryId;
    value[1].monitor = (MonitorData *)itemSlot;
    bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)0x0,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass8_0___OpenInventoryAtPosition_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_ProductPurchaseResponseHandler
               (GamePassesViewCrystalsInInventory *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    func_?(&
                    MethodInfo__GamePassesViewCrystalsInInventory____c___ProductPurchaseResponseHandler_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_0);
    func_?(&
                    MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_1___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_1);
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    func_?(&StringLiteral_Trying_to_pay_for_crystals_throu);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)returnCode;
    piVar1 = &(this->fields).pending;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    pLVar2 = (this->fields).buyingItems;
    returnCode = 0;
    if (pLVar2 != (List_1_ShopItem_ *)0x0) {
      while (returnCode < (pLVar2->fields)._size) {
        value_00 = (Object *)
                   func_?(
                                  TypeInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_1
                                  );
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        if (value_00 == (Object *)0x0) goto code_?;
        ppMVar3 = &value_00[1].monitor;
        *ppMVar3 = (MonitorData *)value;
        func_?(ppMVar3,value);
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).buyingItems;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,returnCode,
                           MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
        value_00[1].klass = (Object__Class *)RVar4;
        func_?(value_00 + 1,RVar4);
        if (*ppMVar3 == (MonitorData *)0x0) goto code_?;
        if (*(int *)(*ppMVar3 + 8) == 0) {
          iVar5 = func_?(0);
          if ((iVar5 == 0) ||
             (method_00 = (GamePassesViewCrystalsInInventory_c_DisplayClass10_0__Class *)
                          func_?(4,TypeInfo__IEditModeUI,iVar5),
             method_00 == (GamePassesViewCrystalsInInventory_c_DisplayClass10_0__Class *)0x0))
          goto code_?;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_AddPurchasedItem
                    ((PlayerShopInventoryRepository *)method_00,(ShopItem *)value_00[1].klass,
                     (MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Trying_to_pay_for_crystals_throu,(MethodInfo *)0x0);
          method_00 = (GamePassesViewCrystalsInInventory_c_DisplayClass10_0__Class *)&UNK_?;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value_00,
                     MethodInfo__GamePassesViewCrystalsInInventory____c__DisplayClass10_1___ProductPurchaseResponseHandler_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar6,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
        }
        pLVar2 = (this->fields).buyingItems;
        returnCode = returnCode + 1;
        if (pLVar2 == (List_1_ShopItem_ *)0x0) goto code_?;
      }
      pLVar2 = (this->fields).buyingItems;
      if (pLVar2 != (List_1_ShopItem_ *)0x0) {
        iVar5 = (pLVar2->fields)._size;
        piVar1 = &(pLVar2->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pLVar2->fields)._size = 0;
        if (0 < iVar5) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar2->fields)._items,0,iVar5,(MethodInfo *)0x0);
        }
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__GamePassesViewCrystalsInInventory____c->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
        }
        callbackFunction_00 =
             TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__10_0;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__GamePassesViewCrystalsInInventory____c->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
          }
          object = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)object,
                     MethodInfo__GamePassesViewCrystalsInInventory____c___ProductPurchaseResponseHandler_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__10_0 =
               callbackFunction_00;
          func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->
                           __9__10_0,callbackFunction_00);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar6,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        itemSlot = GamePassesViewCrystalsInInventory_GetItemSlot
                             (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
        GamePassesViewCrystalsInInventory_OpenInventoryAtPosition(this,7,itemSlot,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PurchaseClientShopItem(ShopItem) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_PurchaseClientShopItem
               (GamePassesViewCrystalsInInventory *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__GamePassesViewCrystalsInInventory__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_);
    func_?(&
                    MethodInfo__GamePassesViewCrystalsInInventory____c___PurchaseClientShopItem_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GamePassesViewCrystalsInInventory____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
  }
  callbackFunction = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__9_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__GamePassesViewCrystalsInInventory____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesViewCrystalsInInventory____c);
    }
    object = TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GamePassesViewCrystalsInInventory____c___PurchaseClientShopItem_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__9_0 = callbackFunction;
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9__9_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if ((this->fields).pending == 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    a = (pMVar1->fields).PurchaseProductResponseHandler;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__GamePassesViewCrystalsInInventory__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      iRam_? = 0;
code_?:
      func_?();
      goto code_?;
    }
    iVar3 = func_?();
    if (iVar3 == 0) goto code_?;
    iRam_? = iVar3;
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
  }
  else {
code_?:
    piVar4 = &(this->fields).pending;
    *piVar4 = *piVar4 + 1;
    pMVar5 = MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_;
    this_00 = (this->fields).buyingItems;
    if (this_00 != (List_1_ShopItem_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,
                 (Object *)MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((pMVar5 != (MethodInfo *)0x0) && (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UnlockClientShopInventoryItem
                  (this_02,(int32_t)pMVar5->invoker_method,(MethodInfo *)0x0);
        return;
      }
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PurchaseItem(WorldObjectType) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_PurchaseItem
               (GamePassesViewCrystalsInInventory *this,WorldObjectType__Enum woType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&StringLiteral_Tried_to_buy_crystal_item_but_it);
    cRam_? = '\x01';
  }
  pSStack_1 = (ShopItem *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar2 != (IEditModeUI *)0x0) {
    this_00 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar2);
    if (this_00 != (PlayerShopInventoryRepository *)0x0) {
      bVar3 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_GetShopItemByWorldObjectTypeInCategory
                        (this_00,InventoryCategoryType__Enum_Pickups,woType,&pSStack_1,
                         (MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Tried_to_buy_crystal_item_but_it,(MethodInfo *)0x0);
        return;
      }
      GamePassesViewCrystalsInInventory_PurchaseClientShopItem
                ((GamePassesViewCrystalsInInventory *)pSStack_1,pSStack_1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TryPurchaseCrystalItems() */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_TryPurchaseCrystalItems
               (GamePassesViewCrystalsInInventory *this,MethodInfo *method)

{
  GamePassesViewCrystalsInInventory_PurchaseItem
            (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
  GamePassesViewCrystalsInInventory_PurchaseItem
            (this,WorldObjectType__Enum_GamePointChest,(MethodInfo *)0x0);
  return;
}


/* GamePassesViewCrystalsInInventory() */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::GamePassesViewCrystalsInInventory__ctor
               (GamePassesViewCrystalsInInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ShopItem_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
  ppLVar1 = &(this->fields).buyingItems;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

