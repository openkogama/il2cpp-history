
/* InventoryItem GetItem() */

InventoryItem *
Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_GetItem
          (EditModeClientShopItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__InventoryItem);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).item;
  method_00 = TypeInfo__InventoryItem;
  pIVar2 = (InventoryItem *)func_?();
  (pIVar2->fields).hasData = 1;
  (pIVar2->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pIVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pSVar1 != (ShopItem *)0x0) {
    (pIVar2->fields).itemID = (pSVar1->fields).itemID;
    (pIVar2->fields).itemCategoryID = (pSVar1->fields).itemCategoryID;
    (pIVar2->fields).itemTypeID = (pSVar1->fields).itemTypeID;
    pSVar3 = (pSVar1->fields).name;
    (pIVar2->fields).name = pSVar3;
    func_?(&(pIVar2->fields).name,pSVar3);
    pSVar3 = (pSVar1->fields).description;
    (pIVar2->fields).description = pSVar3;
    func_?(&(pIVar2->fields).description,pSVar3);
    (pIVar2->fields).isDeleted = 0;
    pBVar4 = (pSVar1->fields).data;
    (pIVar2->fields).data = pBVar4;
    func_?(&(pIVar2->fields).data,pBVar4);
    (pIVar2->fields).resellable = (pSVar1->fields).resellable;
    (pIVar2->fields).priceGold = (pSVar1->fields).priceGold;
    (pIVar2->fields).purchased = 1;
    (pIVar2->fields).isDefaultInvItem = 0;
    return pIVar2;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar2 = (InventoryItem *)(*pcVar5)();
  return pIVar2;
}


/* Void Initialize(Transform, ShopItem, MVWorldObjectClient) */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_Initialize
               (EditModeClientShopItem *this,Transform *rootTransform,ShopItem *item,
               MVWorldObjectClient *woPreviewObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).item = item;
  func_?(&(this->fields).item,item);
  if (woPreviewObject != (MVWorldObjectClient *)0x0) {
    IVar1 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                      (woPreviewObject,
                       (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr);
    if (item != (ShopItem *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                       );
        func_?(&TypeInfo__InventoryItem);
        cRam_? = '\x01';
      }
      if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__InventoryItem);
      }
      pDVar2 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
      if (pDVar2 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)
                    0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar2,IVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                          );
        if (bVar3 != 0) {
          if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__InventoryItem);
          }
          pDVar2 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          if (pDVar2 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                         *)0x0) goto code_?;
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,IVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                             );
          if (pOVar4 == (Object *)0x0) goto code_?;
          pOVar5 = pOVar4[1].klass;
          (item->fields).name = (String *)pOVar5;
          func_?(&(item->fields).name,pOVar5);
          if (cRam_? == '\0') {
            func_?(&StringLiteral_u000Au000A);
            cRam_? = '\x01';
          }
          pSVar6 = mscorlib.dll::System::String::String_Concat_4
                             ((String *)pOVar4[1].monitor,StringLiteral_u000Au000A,
                              (String *)pOVar4[2].klass,(MethodInfo *)0x0);
          (item->fields).description = pSVar6;
          func_?(&(item->fields).description,pSVar6);
        }
        pIVar7 = (this->fields).objectPreviewerPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pIVar7 = (InventoryItemPreviewer *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pIVar7,
                            InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                           );
        (this->fields).objectPreviewer = pIVar7;
        func_?(&(this->fields).objectPreviewer,pIVar7);
        fVar8 = (float)(item->fields).slotPosition * _UNK_?;
        if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__InventoryItem);
        }
        pDVar2 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
        IVar1 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                          (woPreviewObject,
                           (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr);
        if (pDVar2 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)
                      0x0) {
          bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar2,IVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                            );
          if (bVar3 == 0) {
            pMVar9 = (MonitorData *)0x0;
            uVar10 = 0;
          }
          else {
            if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__InventoryItem);
            }
            pDVar2 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
            IVar1 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                              (woPreviewObject,
                               (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr);
            if (pDVar2 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                           *)0x0) goto code_?;
            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,IVar1,
                                MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                               );
            if (pOVar4 == (Object *)0x0) goto code_?;
            uVar10 = *(undefined8 *)&pOVar4[2].monitor;
            pMVar9 = pOVar4[3].monitor;
          }
          pIVar7 = (this->fields).objectPreviewer;
          if (pIVar7 != (InventoryItemPreviewer *)0x0) {
            cameraOffset.z = (float)pMVar9;
            cameraOffset.x = (float)(int)uVar10;
            cameraOffset.y = (float)(int)((ulonglong)uVar10 >> 0x20);
            previewPosition.z = fVar8;
            previewPosition.x = 100.0;
            previewPosition.y = 100.0;
            InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                      (pIVar7,(this->fields).previewWidth,(this->fields).previewHeight,
                       CameraClearFlags__Enum_Color,(woPreviewObject->fields).previewLayerMask,
                       cameraOffset,rootTransform,previewPosition,(item->fields).name,
                       woPreviewObject,(woPreviewObject->fields).gameObject,(MethodInfo *)0x0);
            pIVar7 = (this->fields).objectPreviewer;
            if ((pIVar7 != (InventoryItemPreviewer *)0x0) &&
               (this_00 = (this->fields).previewImage, this_00 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,(Texture *)(pIVar7->fields).previewTexture,(MethodInfo *)0x0);
              iVar11 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)();
              (this->fields).documentationType = iVar11;
              (this->fields).initialized = 1;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ShowPurchasePopUp() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_ShowPurchasePopUp
               (EditModeClientShopItem *this,MethodInfo *method)

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
                    ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__EditModeClientShopItem____c___ShowPurchasePopUp_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__EditModeClientShopItem____c__DisplayClass13_0___ShowPurchasePopUp_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__EditModeClientShopItem____c__DisplayClass13_0);
    func_?(&TypeInfo__EditModeClientShopItem____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__EditModeClientShopItem____c__DisplayClass13_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).popup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    if (pOVar1 != (Object__Class *)0x0) {
      pIVar2 = (Il2CppClass *)(this->fields).item;
      (pOVar1->_0).declaringType = pIVar2;
      func_?(&(pOVar1->_0).declaringType,pIVar2);
      pIVar2 = (pOVar1->_0).declaringType;
      if (pIVar2 != (Il2CppClass *)0x0) {
        nameText = *(String **)&(pIVar2->byval_arg).attrs;
        priceGold = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&((pOVar1->_0).declaringType)->castClass,(MethodInfo *)0x0);
        pIVar2 = (pOVar1->_0).declaringType;
        if (pIVar2 != (Il2CppClass *)0x0) {
          ItemPurchasePopup::ItemPurchasePopup_Initialize
                    ((ItemPurchasePopup *)pOVar1,(RawImage *)0x0,nameText,priceGold,
                     (String *)(pIVar2->this_arg).data.typeHandle,(MethodInfo *)0x0);
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__EditModeClientShopItem____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__EditModeClientShopItem____c->static_fields->__9__13_0;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__EditModeClientShopItem____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            object = TypeInfo__EditModeClientShopItem____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)object,
                       MethodInfo__EditModeClientShopItem____c___ShowPurchasePopUp_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__EditModeClientShopItem____c->static_fields->__9__13_0 = callbackFunction;
            func_?();
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar3,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                     MethodInfo__EditModeClientShopItem____c__DisplayClass13_0___ShowPurchasePopUp_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SlotPressed() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_SlotPressed
               (EditModeClientShopItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    MethodInfo__EditModeClientShopItem____c___SlotPressed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__EditModeClientShopItem____c__DisplayClass12_0___SlotPressed_b__1_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__EditModeClientShopItem____c__DisplayClass12_0);
    func_?(&TypeInfo__EditModeClientShopItem____c);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields)._._SubscriptionRules_k__BackingField,
       this_00 != (SubscriptionRulesWrapper *)0x0)) {
      bVar2 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
              SubscriptionRulesWrapper_HasBenefit
                        (this_00,SubscriptionBenefit__Enum_FreeBuildingGameObjects,(MethodInfo *)0x0
                        );
      if (bVar2 == 0) {
        EditModeClientShopItem_ShowPurchasePopUp(this,(MethodInfo *)0x0);
        return;
      }
      method_00 = TypeInfo__EditModeClientShopItem____c__DisplayClass12_0;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      itemToCopy = (unaff_EDI->fields)._._.interp_method;
      this_02 = (Object__Class *)func_?(TypeInfo__InventoryItem);
      InventoryItem::InventoryItem__ctor_3((InventoryItem *)this_02,itemToCopy,(MethodInfo *)0x0);
      if (value != (Object *)0x0) {
        value[1].klass = this_02;
        func_?(value + 1);
        root = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)unaff_EDI,(MethodInfo *)0x0);
        if ((TypeInfo__EditModeClientShopItem____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction_00 = TypeInfo__EditModeClientShopItem____c->static_fields->__9__12_0;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__EditModeClientShopItem____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__EditModeClientShopItem____c->static_fields->__9;
          unaff_EDI = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          root = unaff_EDI;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)unaff_EDI,(Object *)object,
                     MethodInfo__EditModeClientShopItem____c___SlotPressed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__EditModeClientShopItem____c->static_fields->__9__12_0 = unaff_EDI;
          func_?();
          callbackFunction_00 = unaff_EDI;
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  ((GameObject *)root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        root_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)unaff_EDI,(MethodInfo *)0x0);
        callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__EditModeClientShopItem____c__DisplayClass12_0___SlotPressed_b__1_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root_00,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_Update
               (EditModeClientShopItem *this,MethodInfo *method)

{
  if ((this->fields).initialized != 0) {
    this_00 = (this->fields).objectPreviewer;
    if (this_00 == (InventoryItemPreviewer *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    InventoryItemPreviewer::InventoryItemPreviewer_UpdateRotation(this_00,0.0,(MethodInfo *)0x0);
  }
  return;
}

