
/* Void ConfirmationCallback(Boolean) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_ConfirmationCallback
               (ItemPurchasePopup *this,bool result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ItemPurchasePopup___ConfirmationCallback_b__12_0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ItemPurchasePopup____c___ConfirmationCallback_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ItemPurchasePopup____c___ConfirmationCallback_b__12_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ItemPurchasePopup____c);
    cRam_? = '\x01';
  }
  if (result == 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ItemPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ItemPurchasePopup____c);
    }
    pEVar2 = TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_1;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ItemPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ItemPurchasePopup____c);
      }
      pIVar3 = TypeInfo__ItemPurchasePopup____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pIVar3,
                 MethodInfo__ItemPurchasePopup____c___ConfirmationCallback_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_1 = pEVar2;
      func_?(&TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_1,pEVar2);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ItemPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pEVar2 = TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_2;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ItemPurchasePopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar3 = TypeInfo__ItemPurchasePopup____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pIVar3,
                 MethodInfo__ItemPurchasePopup____c___ConfirmationCallback_b__12_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_2 = pEVar2;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__ItemPurchasePopup___ConfirmationCallback_b__12_0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
            );
  return;
}


/* Void Initialize(RawImage, String, String, String) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_Initialize
               (ItemPurchasePopup *this,RawImage *image,String *nameText,String *priceGold,
               String *desc,MethodInfo *method)

{
  pTVar1 = (this->fields).itemName;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,nameText,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).cost;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,priceGold,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                );
      pTVar1 = (this->fields).nonSubscriberCost;
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,priceGold,
                   (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        if ((image != (RawImage *)0x0) &&
           (this_00 = (this->fields).itemImage, this_00 != (RawImage *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(image->fields).m_Texture,(MethodInfo *)0x0);
          pTVar1 = (this->fields).description;
          if (pTVar1 != (Text *)0x0) {
            (*(code *)(pTVar1->klass->vtable).set_text.method)
                      (pTVar1,desc,
                       (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(RawImage, ShopItem) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_Initialize_1
               (ItemPurchasePopup *this,RawImage *image,ShopItem *shopItem,MethodInfo *method)

{
  (this->fields).item = shopItem;
  func_?(&(this->fields).item,shopItem);
  pSVar1 = (this->fields).item;
  if (pSVar1 != (ShopItem *)0x0) {
    nameText = (pSVar1->fields).name;
    priceGold = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(pSVar1->fields).priceGold,(MethodInfo *)0x0);
    pSVar1 = (this->fields).item;
    if (pSVar1 != (ShopItem *)0x0) {
      ItemPurchasePopup_Initialize
                (this,image,nameText,priceGold,(pSVar1->fields).description,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_Initialize_2
               (ItemPurchasePopup *this,RawImage *image,InventoryItem *invItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ShopItem);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ShopItem;
  value = (ShopItem *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (invItem != (InventoryItem *)0x0) {
    (value->fields).itemID = (invItem->fields).itemID;
    (value->fields).itemCategoryID = (invItem->fields).itemCategoryID;
    (value->fields).itemTypeID = (invItem->fields).itemTypeID;
    pSVar1 = (invItem->fields).name;
    (value->fields).name = pSVar1;
    func_?(&(value->fields).name,pSVar1);
    pSVar1 = (invItem->fields).description;
    (value->fields).description = pSVar1;
    func_?(&(value->fields).description,pSVar1);
    pBVar2 = (invItem->fields).data;
    (value->fields).data = pBVar2;
    func_?(&(value->fields).data,pBVar2);
    (value->fields).resellable = (invItem->fields).resellable;
    (value->fields).priceGold = (invItem->fields).priceGold;
    (value->fields).slotPosition = (invItem->fields).slotPosition;
    (this->fields).item = value;
    func_?(&(this->fields).item,value);
    pSVar1 = (invItem->fields).name;
    priceGold = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(invItem->fields).priceGold,(MethodInfo *)0x0);
    ItemPurchasePopup_Initialize
              (this,image,pSVar1,priceGold,(invItem->fields).description,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPurchaseClicked() */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_OnPurchaseClicked
               (ItemPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__ItemPurchasePopup__ConfirmationCallback_bool_);
    func_?(&
                    MethodInfo__ItemPurchasePopup___OnPurchaseClicked_b__10_0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    ItemPurchaseConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchaseConfirmationPopup>_ItemPurchaseConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ItemPurchasePopup____c__DisplayClass10_0___OnPurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ItemPurchasePopup____c__DisplayClass10_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields)._._SubscriptionRules_k__BackingField,
       this_00 != (SubscriptionRulesWrapper *)0x0)) {
      bVar2 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
              SubscriptionRulesWrapper_HasBenefit
                        (this_00,SubscriptionBenefit__Enum_FreeBuildingGameObjects,(MethodInfo *)0x0
                        );
      if (bVar2 == 0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar4 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)this,
                   MethodInfo__ItemPurchasePopup___OnPurchaseClicked_b__10_0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
                  );
        return;
      }
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,method_00);
      original = (this->fields).confirmationPopup;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar5 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          ItemPurchaseConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchaseConfirmationPopup>_ItemPurchaseConfirmationPopup_
                         );
      if (value != (Object *)0x0) {
        value[1].klass = pOVar5;
        func_?(value + 1,pOVar5);
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar4 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar4,value,
                   MethodInfo__ItemPurchasePopup____c__DisplayClass10_0___OnPurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pOVar5 = value[1].klass;
        this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,MethodInfo__ItemPurchasePopup__ConfirmationCallback_bool_,
                   (MethodInfo *)0x0);
        if (pOVar5 != (Object__Class *)0x0) {
          (pOVar5->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_02;
          func_?(&(pOVar5->_0).byval_arg,this_02);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PurchaseItem(IPurchaseClientShopItem) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_PurchaseItem
               (ItemPurchasePopup *this,IPurchaseClientShopItem *x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).item;
  if (x != (IPurchaseClientShopItem *)0x0) {
    pIVar2 = x->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem) {
          pIVar2 = x->klass;
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&pIVar2->vtable)[iVar5].PurchaseItem.method)
                    (x,pSVar1,(&pIVar2[1]._0.image)[iVar5 * 2]);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem,0);
    (*(code *)*puVar6)(x,pSVar1,puVar6[1]);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <ConfirmationCallback>b__12_0(IPurchaseClientShopItem, BaseEventData) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup__ConfirmationCallback_b__12_0
               (ItemPurchasePopup *this,IPurchaseClientShopItem *x,BaseEventData *y,
               MethodInfo *method)

{
  ItemPurchasePopup_PurchaseItem(this,x,(MethodInfo *)0x0);
  return;
}

