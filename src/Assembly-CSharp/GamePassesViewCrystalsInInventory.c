
/* Int32 GetItemSlot(WorldObjectType) */

int32_t Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
        GamePassesViewCrystalsInInventory_GetItemSlot
                  (GamePassesViewCrystalsInInventory *this,WorldObjectType__Enum worldObjectType,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (InventoryItem *)0x0;
  iVar2 = -1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar3 != (IEditModeUI *)0x0) {
    this_00 = (PlayerInventoryRepository *)func_?(6,TypeInfo__IEditModeUI,pIVar3);
    if (this_00 != (PlayerInventoryRepository *)0x0) {
      bVar4 = PlayerInventoryRepository::
              PlayerInventoryRepository_GetItemByWorldObjectTypeInCategory
                        (this_00,InventoryCategoryType__Enum_Pickups,worldObjectType,&pIStack_1,
                         (MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (pIStack_1 == (InventoryItem *)0x0) goto code_?;
        iVar2 = (pIStack_1->fields).slotPosition;
      }
      return iVar2;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  iVar2 = (*pcVar5)();
  return iVar2;
}


/* Void HighlightObject(WorldObjectType) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_HighlightObject
               (GamePassesViewCrystalsInInventory *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  itemSlot = GamePassesViewCrystalsInInventory_GetItemSlot(this,worldObjectType,(MethodInfo *)0x0);
  if (itemSlot != -1) {
    GamePassesViewCrystalsInInventory_OpenInventoryAtPosition(this,7,itemSlot,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__GamePassesViewCrystalsInInventory___HighlightObject_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  itemSlot = GamePassesViewCrystalsInInventory_GetItemSlot
                       (this,WorldObjectType__Enum_GamePoint,(MethodInfo *)0x0);
  if (itemSlot != -1) {
    GamePassesViewCrystalsInInventory_OpenInventoryAtPosition(this,7,itemSlot,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__GamePassesViewCrystalsInInventory___HighlightObject_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesViewCrystalsInInventory___OpenInventoryAtPosition_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)category;
    (this_00->fields).state = slot;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimeEventManager);
      }
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesViewCrystalsInInventory___OpenInventoryAtPosition_c__AnonStorey0____m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesViewCrystalsInInventory___OpenInventoryAtPosition_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)categoryId;
    (this_00->fields).state = itemSlot;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimeEventManager);
      }
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                (FirstTimeEvent__Enum_BM_PlaceBazooka,(MethodInfo *)0x0);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesViewCrystalsInInventory___OpenInventoryAtPosition_c__AnonStorey0____m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__GamePassesViewCrystalsInInventory___ProductPurchaseResponseHandler_c__AnonStorey1;
  pSVar1 = (ScaleAnimationBase *)func_?();
  pSVar2 = pSVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
  if (pSVar1 != (ScaleAnimationBase *)0x0) {
    (pSVar1->fields)._._._._.m_CachedPtr = (void *)returnCode;
    piVar3 = &(this->fields).pending;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 != 0) {
      return;
    }
    pLVar4 = (this->fields).buyingItems;
    index = 0;
    if (pLVar4 != (List_1_ShopItem_ *)0x0) {
      while (pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                                 MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__
                                ), index < (int)pOVar5) {
        pSVar1 = (ScaleAnimationBase *)
                 func_?(
                                TypeInfo__GamePassesViewCrystalsInInventory___ProductPurchaseResponseHandler_c__AnonStorey2
                                );
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,in_stack_6);
        if (pSVar1 == (ScaleAnimationBase *)0x0) goto code_?;
        (pSVar1->fields).state = (int32_t)pSVar2;
        pLVar4 = (this->fields).buyingItems;
        if (pLVar4 == (List_1_ShopItem_ *)0x0) goto code_?;
        pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_)
        ;
        (pSVar1->fields)._._._._.m_CachedPtr = pIVar7;
        if ((pSVar2->fields)._._._._.m_CachedPtr == (void *)0x0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pIVar8 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
          if ((pIVar8 == (IEditModeUI *)0x0) ||
             (this_01 = (PlayerInventoryRepository *)func_?(6,TypeInfo__IEditModeUI,pIVar8)
             , this_01 == (PlayerInventoryRepository *)0x0)) goto code_?;
          PlayerInventoryRepository::PlayerInventoryRepository_AddPurchasedItem
                    (this_01,(pSVar1->fields)._._._._.m_CachedPtr,(MethodInfo *)0x0);
          pIVar8 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
          if ((pIVar8 == (IEditModeUI *)0x0) ||
             (in_stack_6 = (MethodInfo *)func_?(4,TypeInfo__IEditModeUI,pIVar8),
             in_stack_6 == (MethodInfo *)0x0)) goto code_?;
          ClientShopRepository::ClientShopRepository_RemoveItem
                    ((ClientShopRepository *)in_stack_6,(pSVar1->fields)._._._._.m_CachedPtr,
                     (MethodInfo *)0x0);
          pIVar8 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
          if ((pIVar8 == (IEditModeUI *)0x0) ||
             (this_02 = (ClientShopRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar8),
             this_02 == (ClientShopRepository *)0x0)) goto code_?;
          ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                    (this_02,(MethodInfo *)0x0);
        }
        else {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Trying_to_pay_for_crystals_throu,(MethodInfo *)0x0);
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                     );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar10,(Object *)pSVar1,
                     MethodInfo__GamePassesViewCrystalsInInventory___ProductPurchaseResponseHandler_c__AnonStorey2____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          in_stack_6 = (MethodInfo *)0x0;
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar9,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar10,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
        }
        pLVar4 = (this->fields).buyingItems;
        index = index + 1;
        if (pLVar4 == (List_1_ShopItem_ *)0x0) goto code_?;
      }
      this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).buyingItems;
      if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,MethodInfo__System__Collections__Generic__List<ShopItem>__Clear__);
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache2 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar10,(Object *)0x0,
                     MethodInfo__GamePassesViewCrystalsInInventory___ProductPurchaseResponseHandler_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache2 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar10;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache2;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar9,(BaseEventData *)0x0,callbackFunction,
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
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PurchaseClientShopItem(ShopItem) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory_PurchaseClientShopItem
               (GamePassesViewCrystalsInInventory *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,
               MethodInfo__GamePassesViewCrystalsInInventory___PurchaseClientShopItem_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar1;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GamePassesViewCrystalsInInventory->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  iVar2 = (this->fields).pending;
  if (iVar2 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      item = (ShopItem *)
             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      a = (pMVar3->fields).PurchaseProductResponseHandler;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,
                 MethodInfo__GamePassesViewCrystalsInInventory__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pDVar5 = (Delegate *)0x0;
      if (pDVar4 != (Delegate *)0x0) {
        if ((Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
             *)pDVar4->klass ==
            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
           ) {
          pDVar5 = pDVar4;
        }
        if (pDVar5 == (Delegate *)0x0) goto code_?;
      }
      iVar2 = (this->fields).pending;
      _UNK_? = pDVar5;
      goto code_?;
    }
  }
  else {
code_?:
    (this->fields).pending = iVar2 + 1;
    this_00 = (this->fields).buyingItems;
    if (this_00 != (List_1_ShopItem_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((item != (ShopItem *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UnlockClientShopInventoryItem
                  (this_01,(item->fields).itemID,(MethodInfo *)0x0);
        return;
      }
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IEditModeUI *)0x0) {
    this_00 = (ClientShopRepository *)func_?(4,TypeInfo__IEditModeUI);
    if (this_00 != (ClientShopRepository *)0x0) {
      item = (ShopItem *)0x0;
      bVar2 = ClientShopRepository::ClientShopRepository_GetItemByWorldObjectTypeInCategory
                        (this_00,InventoryCategoryType__Enum_Pickups,woType,
                         (ShopItem **)&stack0xfffffff8,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Tried_to_buy_crystal_item_but_it,(MethodInfo *)0x0);
        return;
      }
      GamePassesViewCrystalsInInventory_PurchaseClientShopItem(this,item,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
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
  GamePassesViewCrystalsInInventory_PurchaseItem
            (this,WorldObjectType__Enum_GamePointChest,(MethodInfo *)0x0);
  return;
}


/* Void <HighlightObject>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory__HighlightObject_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x20);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ProductPurchaseResponseHandler>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory__ProductPurchaseResponseHandler_m__2
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x80);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PurchaseClientShopItem>m__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::
     GamePassesViewCrystalsInInventory__PurchaseClientShopItem_m__1
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GamePassesViewCrystalsInInventory() */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory::GamePassesViewCrystalsInInventory__ctor
               (GamePassesViewCrystalsInInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
  (this->fields).buyingItems = (List_1_ShopItem_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

