
/* InventoryItem GetItem() */

InventoryItem *
Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_GetItem
          (EditModeClientShopItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  itemToCopy = (this->fields).item;
  this_00 = (InventoryItem *)FUN_?(TypeInfo__InventoryItem);
  InventoryItem::InventoryItem__ctor_3(this_00,itemToCopy,(MethodInfo *)0x0);
  return this_00;
}


/* Void Initialize(Transform, ShopItem, MVWorldObjectClient) */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_Initialize
               (EditModeClientShopItem *this,Transform *rootTransform,ShopItem *item,
               MVWorldObjectClient *woPreviewObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).item = item;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).item >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((woPreviewObject != (MVWorldObjectClient *)0x0) &&
     (t = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                    (woPreviewObject,(woPreviewObject->klass->vtable).get_DocumentationType.method),
     item != (ShopItem *)0x0)) {
    ShopItem::ShopItem_ApplyLocalDescriptionOverride(item,t,(MethodInfo *)0x0);
    pIVar6 = (this->fields).objectPreviewerPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar6 = (InventoryItemPreviewer *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar6,
                        InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                       );
    bVar1 = iRam_? != 0;
    (this->fields).objectPreviewer = pIVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).objectPreviewer >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    uVar7 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    fVar10 = (float)(item->fields).slotPosition * _UNK_?;
    if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__InventoryItem);
    }
    this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
              TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    IVar11 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                      (woPreviewObject,(woPreviewObject->klass->vtable).get_DocumentationType.method
                      );
    if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_00,IVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar12) {
        if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__InventoryItem);
        }
        this_01 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
        IVar11 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                          (woPreviewObject,
                           (woPreviewObject->klass->vtable).get_DocumentationType.method);
        if ((this_01 ==
             (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) ||
           (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,IVar11,
                                MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                               ), pOVar13 == (Object *)0x0)) goto code_?;
        pMStack_14 = pOVar13[2].monitor;
        uVar7 = SUB84(pMStack_14,0);
        uVar8 = (undefined4)((ulonglong)pMStack_14 >> 0x20);
        fVar9 = *(float *)&pOVar13[3].klass;
      }
      pIVar6 = (this->fields).objectPreviewer;
      if (pIVar6 != (InventoryItemPreviewer *)0x0) {
        VStack_15.y = _UNK_?;
        VStack_15.x = _UNK_?;
        pMStack_14 = (MonitorData *)CONCAT44(uVar8,uVar7);
        VStack_15.z = fVar10;
        fStack_16 = fVar9;
        InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                  (pIVar6,(this->fields).previewWidth,(this->fields).previewHeight,
                   CameraClearFlags__Enum_Color,(woPreviewObject->fields).previewLayerMask,
                   (Vector3 *)&pMStack_14,rootTransform,&VStack_15,(item->fields).name,
                   woPreviewObject,(woPreviewObject->fields).gameObject,(MethodInfo *)0x0);
        pIVar6 = (this->fields).objectPreviewer;
        if ((pIVar6 != (InventoryItemPreviewer *)0x0) &&
           (this_02 = (this->fields).previewImage, this_02 != (RawImage *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_02,(Texture *)(pIVar6->fields).previewTexture,(MethodInfo *)0x0);
          iVar12 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                            (woPreviewObject,
                             (woPreviewObject->klass->vtable).get_DocumentationType.method);
          (this->fields).documentationType = iVar12;
          (this->fields).initialized = 1;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void ShowPurchasePopUp() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_ShowPurchasePopUp
               (EditModeClientShopItem *this,MethodInfo *method)

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
                  ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditModeClientShopItem____c___ShowPurchasePopUp_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditModeClientShopItem____c__DisplayClass13_0___ShowPurchasePopUp_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditModeClientShopItem____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditModeClientShopItem____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__EditModeClientShopItem____c__DisplayClass13_0);
  original = (this->fields).popup;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                     );
  iVar2 = iRam_?;
  if (object_00 != (Object *)0x0) {
    object_00[1].klass = pOVar1;
    if (iVar2 != 0) {
      uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
        iVar2 = iRam_?;
      } while (!bVar7);
    }
    pOVar1 = object_00[1].klass;
    image = (this->fields).previewImage;
    if (pOVar1 != (Object__Class *)0x0) {
      (pOVar1->_0).declaringType = (Il2CppClass *)(this->fields).item;
      if (iVar2 != 0) {
        uVar3 = (uint)((ulonglong)&(pOVar1->_0).declaringType >> 0xc);
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
      pIVar8 = (pOVar1->_0).declaringType;
      if (pIVar8 != (Il2CppClass *)0x0) {
        nameText = (String *)(pIVar8->byval_arg).data.typeHandle;
        priceGold = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&(pIVar8->this_arg).field_0xc,(MethodInfo *)0x0);
        pIVar8 = (pOVar1->_0).declaringType;
        if (pIVar8 != (Il2CppClass *)0x0) {
          ItemPurchasePopup::ItemPurchasePopup_Initialize
                    ((ItemPurchasePopup *)pOVar1,image,nameText,priceGold,
                     *(String **)&(pIVar8->byval_arg).attrs,(MethodInfo *)0x0);
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__EditModeClientShopItem____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__EditModeClientShopItem____c);
          }
          this_01 = TypeInfo__EditModeClientShopItem____c->static_fields->__9__13_0;
          if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__EditModeClientShopItem____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__EditModeClientShopItem____c);
            }
            object = TypeInfo__EditModeClientShopItem____c->static_fields->__9;
            this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                       MethodInfo__EditModeClientShopItem____c___ShowPurchasePopUp_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__EditModeClientShopItem____c->static_fields->__9__13_0 = this_01;
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)
                              &TypeInfo__EditModeClientShopItem____c->static_fields->__9__13_0 >>
                             0xc);
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
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar9,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object_00,
                     MethodInfo__EditModeClientShopItem____c__DisplayClass13_0___ShowPurchasePopUp_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          pMVar10 = 
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
            if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar10);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar9,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar4 = (longlong)(pLVar11->fields)._size;
            uVar3 = 0;
            if (0 < lVar4) {
              lVar12 = 0;
              lVar13 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar11->fields)._size <= uVar3) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pTVar15 = (pLVar11->fields)._items;
                if (pTVar15 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar15->max_length <= uVar3) {
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                this_00 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
                if (this_00 == (Component *)0x0) goto code_?;
                pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_00,(MethodInfo *)0x0);
                bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_Execute_18
                                  (pGVar9,(BaseEventData *)0x0,this_02,
                                   (pMVar10->field7_0x38).rgctx_data[1].method);
                if (bVar16 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
                uVar3 = uVar3 + 1;
                lVar12 = lVar12 + 1;
                lVar13 = lVar13 + 8;
              } while (lVar12 < lVar4);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SlotPressed() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_SlotPressed
               (EditModeClientShopItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
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
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditModeClientShopItem____c___SlotPressed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditModeClientShopItem____c__DisplayClass12_0___SlotPressed_b__1_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditModeClientShopItem____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditModeClientShopItem____c);
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
      EditModeClientShopItem_ShowPurchasePopUp(this,(MethodInfo *)0x0);
    }
    else {
      object_00 = (Object *)FUN_?(TypeInfo__EditModeClientShopItem____c__DisplayClass12_0);
      itemToCopy = (this->fields).item;
      this_02 = (Object__Class *)FUN_?(TypeInfo__InventoryItem);
      InventoryItem::InventoryItem__ctor_3((InventoryItem *)this_02,itemToCopy,(MethodInfo *)0x0);
      if (object_00 == (Object *)0x0) goto DAT_?;
      bVar5 = iRam_? != 0;
      object_00[1].klass = this_02;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__EditModeClientShopItem____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__EditModeClientShopItem____c);
      }
      this_03 = TypeInfo__EditModeClientShopItem____c->static_fields->__9__12_0;
      if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__EditModeClientShopItem____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__EditModeClientShopItem____c);
        }
        object = TypeInfo__EditModeClientShopItem____c->static_fields->__9;
        this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                   MethodInfo__EditModeClientShopItem____c___SlotPressed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__EditModeClientShopItem____c->static_fields->__9__12_0 = this_03;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)
                          &TypeInfo__EditModeClientShopItem____c->static_fields->__9__12_0 >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar10,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_04,object_00,
                 MethodInfo__EditModeClientShopItem____c__DisplayClass12_0___SlotPressed_b__1_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar10,(BaseEventData *)0x0,this_04,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
                );
    }
    return;
  }
DAT_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::EditModeClientShopItem::EditModeClientShopItem_Update
               (EditModeClientShopItem *this,MethodInfo *method)

{
  if ((this->fields).initialized == 0) {
    return;
  }
  pIVar1 = (this->fields).objectPreviewer;
  if (pIVar1 != (InventoryItemPreviewer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object,0,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = (pIVar1->fields)._PreviewGameObject_k__BackingField;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar2 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
        pGVar2 = (pIVar1->fields)._PreviewGameObject_k__BackingField;
        if (pGVar2 != (GameObject *)0x0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar2,(MethodInfo *)0x0);
          uVar3._0_4_ = (pIVar1->fields).pivotPoint.x;
          uVar3._4_4_ = (pIVar1->fields).pivotPoint.y;
          fVar4 = (pIVar1->fields).pivotPoint.z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          fVar5 = _UNK_?;
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar7 = (pVVar6->upVector).z;
          uVar8._0_4_ = (pVVar6->upVector).x;
          uVar8._4_4_ = (pVVar6->upVector).y;
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          fVar10 = (float)(*pcRam_?)();
          if (this_00 != (Transform *)0x0) {
            VStack_11._0_8_ = uVar8;
            VStack_11.z = fVar7;
            aVStack_12[0]._0_8_ = uVar3;
            aVStack_12[0].z = fVar4;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                      (this_00,aVStack_12,&VStack_11,fVar10 * fVar5,(MethodInfo *)0x0);
            return;
          }
        }
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

