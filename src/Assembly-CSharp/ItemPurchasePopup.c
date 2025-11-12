
/* Void ConfirmationCallback(Boolean) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_ConfirmationCallback
               (ItemPurchasePopup *this,bool result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
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
                  MethodInfo__ItemPurchasePopup___ConfirmationCallback_b__12_0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ItemPurchasePopup____c___ConfirmationCallback_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ItemPurchasePopup____c___ConfirmationCallback_b__12_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ItemPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (result == 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ItemPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ItemPurchasePopup____c);
    }
    pEVar2 = TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_1;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__ItemPurchasePopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ItemPurchasePopup____c);
      }
      pIVar3 = TypeInfo__ItemPurchasePopup____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)pIVar3,
                 MethodInfo__ItemPurchasePopup____c___ConfirmationCallback_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_1 = pEVar2;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_1 >>
                       0xc);
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
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ItemPurchasePopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ItemPurchasePopup____c);
    }
    pEVar2 = TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_2;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__ItemPurchasePopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ItemPurchasePopup____c);
      }
      pIVar3 = TypeInfo__ItemPurchasePopup____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)pIVar3,
                 MethodInfo__ItemPurchasePopup____c___ConfirmationCallback_b__12_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_2 = pEVar2;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__ItemPurchasePopup____c->static_fields->__9__12_2 >>
                       0xc);
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
    pMVar9 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
    ;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
      pMVar9 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
    }
  }
  else {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
             FUN_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>
                          );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)this,
               MethodInfo__ItemPurchasePopup___ConfirmationCallback_b__12_0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    pMVar9 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
    ;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
      pMVar9 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
      ;
    }
  }
  if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar5 = (longlong)(pLVar10->fields)._size;
    uVar4 = 0;
    if (0 < lVar5) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar4) {
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar4 = uVar4 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar5);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize(RawImage, String, String, String) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_Initialize
               (ItemPurchasePopup *this,RawImage *image,String *nameText,String *priceGold,
               String *desc,MethodInfo *method)

{
  pTVar1 = (this->fields).itemName;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,nameText,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).cost;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,priceGold,(pTVar1->klass->vtable).set_text.method);
      pTVar1 = (this->fields).nonSubscriberCost;
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,priceGold);
        if ((image != (RawImage *)0x0) &&
           (this_00 = (this->fields).itemImage, this_00 != (RawImage *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(image->fields).m_Texture,(MethodInfo *)0x0);
          pTVar1 = (this->fields).description;
          if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pTVar1->klass->vtable).set_text.methodPtr)
                      (pTVar1,desc,(pTVar1->klass->vtable).set_text.method);
            return;
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


/* Void Initialize(RawImage, ShopItem) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_Initialize_1
               (ItemPurchasePopup *this,RawImage *image,ShopItem *shopItem,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).item = shopItem;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).item >> 0xc);
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
  pSVar6 = (this->fields).item;
  if (pSVar6 != (ShopItem *)0x0) {
    nameText = (pSVar6->fields).name;
    priceGold = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(pSVar6->fields).priceGold,(MethodInfo *)0x0);
    pSVar6 = (this->fields).item;
    if (pSVar6 != (ShopItem *)0x0) {
      ItemPurchasePopup_Initialize
                (this,image,nameText,priceGold,(pSVar6->fields).description,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_Initialize_2
               (ItemPurchasePopup *this,RawImage *image,InventoryItem *invItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ShopItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (ShopItem *)FUN_?(TypeInfo__ShopItem);
  if (invItem == (InventoryItem *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pSVar1->fields).itemID = (invItem->fields).itemID;
  (pSVar1->fields).itemCategoryID = (invItem->fields).itemCategoryID;
  (pSVar1->fields).itemTypeID = (invItem->fields).itemTypeID;
  (pSVar1->fields).name = (invItem->fields).name;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pSVar1->fields).name >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  (pSVar1->fields).description = (invItem->fields).description;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(pSVar1->fields).description >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar7);
  }
  (pSVar1->fields).data = (invItem->fields).data;
  iVar9 = 0;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(pSVar1->fields).data >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar7);
  }
  (pSVar1->fields).resellable = (invItem->fields).resellable;
  (pSVar1->fields).priceGold = (invItem->fields).priceGold;
  (pSVar1->fields).slotPosition = (invItem->fields).slotPosition;
  (this->fields).item = pSVar1;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).item >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  nameText = (invItem->fields).name;
  priceGold = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(invItem->fields).priceGold,(MethodInfo *)0x0);
  ItemPurchasePopup_Initialize
            (this,image,nameText,priceGold,(invItem->fields).description,(MethodInfo *)0x0);
  return;
}


/* Void OnPurchaseClicked() */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_OnPurchaseClicked
               (ItemPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
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
    FUN_?(&MethodInfo__ItemPurchasePopup__ConfirmationCallback_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ItemPurchasePopup___OnPurchaseClicked_b__10_0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ItemPurchaseConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchaseConfirmationPopup>_ItemPurchaseConfirmationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ItemPurchasePopup____c__DisplayClass10_0___OnPurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ItemPurchasePopup____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar3 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
      this_01 != (SubscriptionRulesWrapper *)0x0)))) {
    bVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_01,SubscriptionBenefit__Enum_FreeBuildingGameObjects,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar6,(Object *)this,
                 MethodInfo__ItemPurchasePopup___OnPurchaseClicked_b__10_0_UnityEngine__EventSystems__IPurchaseClientShopItem__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar5,(BaseEventData *)0x0,pEVar6,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseClientShopItem>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseClientShopItem>_
                );
      return;
    }
    object = (Object *)FUN_?(TypeInfo__ItemPurchasePopup____c__DisplayClass10_0);
    original = (this->fields).confirmationPopup;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         ItemPurchaseConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchaseConfirmationPopup>_ItemPurchaseConfirmationPopup_
                        );
    if (object != (Object *)0x0) {
      bVar8 = iRam_? != 0;
      object[1].klass = pOVar7;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)(object + 1) >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar6,object,
                 MethodInfo__ItemPurchasePopup____c__DisplayClass10_0___OnPurchaseClicked_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar5,(BaseEventData *)0x0,pEVar6,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar7 = object[1].klass;
      pvVar13 = (void *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
      FUN_?(pvVar13,this,MethodInfo__ItemPurchasePopup__ConfirmationCallback_bool_);
      if (pOVar7 != (Object__Class *)0x0) {
        bVar8 = iRam_? == 0;
        (pOVar7->_0).byval_arg.data.dummy = pvVar13;
        if (bVar8) {
          return;
        }
        uVar9 = (uint)((ulonglong)&(pOVar7->_0).byval_arg >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void PurchaseItem(IPurchaseClientShopItem) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup_PurchaseItem
               (ItemPurchasePopup *this,IPurchaseClientShopItem *x,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).item;
  if (x == (IPurchaseClientShopItem *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem) {
        pIVar6 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar6 = (IPurchaseClientShopItem__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem,0);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->PurchaseItem).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,pSVar1,(pIVar6->PurchaseItem).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <ConfirmationCallback>b__12_0(IPurchaseClientShopItem, BaseEventData) */

void Assembly-CSharp.dll::ItemPurchasePopup::ItemPurchasePopup__ConfirmationCallback_b__12_0
               (ItemPurchasePopup *this,IPurchaseClientShopItem *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).item;
  if (x == (IPurchaseClientShopItem *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem) {
        pIVar6 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar6 = (IPurchaseClientShopItem__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IPurchaseClientShopItem,0);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->PurchaseItem).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,pSVar1,(pIVar6->PurchaseItem).method,UNRECOVERED_JUMPTABLE);
  return;
}

