
/* Void AddItemToWorldFromInventory() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_AddItemToWorldFromInventory
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem___AddItemToWorldFromInventory_b__31_1_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem____c___AddItemToWorldFromInventory_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryPreviewItem____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__PlayerInventoryPreviewItem____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PlayerInventoryPreviewItem____c);
  }
  this_01 = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__31_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__PlayerInventoryPreviewItem____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerInventoryPreviewItem____c);
    }
    object = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__PlayerInventoryPreviewItem____c___AddItemToWorldFromInventory_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__31_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__31_0 >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__PlayerInventoryPreviewItem___AddItemToWorldFromInventory_b__31_1_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
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
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_02,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* IEnumerator AddToWorldInSeconds(Int32) */

IEnumerator *
Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_AddToWorldInSeconds
          (PlayerInventoryPreviewItem *this,int32_t seconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)this;
  if (bVar2) {
    *(int32_t *)&pIVar1[2].klass = seconds;
    return pIVar1;
  }
  uVar3 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
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
  *(int32_t *)&pIVar1[2].klass = seconds;
  return pIVar1;
}


/* Void AdditionalItemSettingsPressed() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_AdditionalItemSettingsPressed
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryItemCubeModelHandler_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemCubeModelHandler>_InventoryItemCubeModelHandler_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryItemPreview_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreview>_InventoryItemPreview_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem____c___AdditionalItemSettingsPressed_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem____c__DisplayClass28_0___AdditionalItemSettingsPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryPreviewItem____c__DisplayClass28_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryPreviewItem____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__PlayerInventoryPreviewItem____c__DisplayClass28_0);
  if (object_00 == (Object *)0x0) goto DAT_?;
  bVar1 = iRam_? != 0;
  object_00[1].klass = (Object__Class *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pIVar6 = (this->fields).item;
  if (pIVar6 == (InventoryItem *)0x0) goto DAT_?;
  if (((pIVar6->fields).resellable != 0) && ((pIVar6->fields).isDefaultInvItem == 0)) {
    if ((pIVar6->fields).itemCategoryID != 1) {
      lVar3 = FUN_?();
      if ((lVar3 == 0) ||
         (this_01 = (PlayerShopInventoryRepository *)FUN_?(),
         this_01 == (PlayerShopInventoryRepository *)0x0)) goto DAT_?;
      iVar7 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_CountInventoryItemsWithOriginalID
                        (this_01,(this->fields).item,(MethodInfo *)0x0);
      if (iVar7 < 2) goto code_?;
    }
    original = (this->fields).itemPreviewerCubeModelPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar8 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         InventoryItemCubeModelHandler_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemCubeModelHandler>_InventoryItemCubeModelHandler_
                        );
    object_00[1].klass = pOVar8;
    func_?(object_00 + 1);
  }
code_?:
  pOVar8 = object_00[1].klass;
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
  if (pOVar8 == (Object__Class *)0x0) {
code_?:
    original_00 = (this->fields).itemPreviewerPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar8 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_00,
                         InventoryItemPreview_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreview>_InventoryItemPreview_
                        );
    bVar1 = iRam_? != 0;
    object_00[1].klass = pOVar8;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pOVar8->_0).name == (char *)0x0) goto code_?;
  }
  pOVar8 = object_00[1].klass;
  if (pOVar8 != (Object__Class *)0x0) {
    (*(code *)(pOVar8->_0).image[5].assembly)
              (pOVar8,(this->fields).item,(this->fields).previewImage);
    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__PlayerInventoryPreviewItem____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerInventoryPreviewItem____c);
    }
    this_02 = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__28_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__PlayerInventoryPreviewItem____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerInventoryPreviewItem____c);
      }
      object = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__PlayerInventoryPreviewItem____c___AdditionalItemSettingsPressed_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__28_0 = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                        &TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__28_0 >> 0xc)
        ;
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar9,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_03,object_00,
               MethodInfo__PlayerInventoryPreviewItem____c__DisplayClass28_0___AdditionalItemSettingsPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
      lVar3 = (longlong)(pLVar11->fields)._size;
      uVar2 = 0;
      if (0 < lVar3) {
        lVar12 = 0;
        lVar13 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar11->fields)._size <= uVar2) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pTVar15 = (pLVar11->fields)._items;
          if (pTVar15 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar15->max_length <= uVar2) {
            FUN_?();
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          this_00 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
          if (this_00 == (Component *)0x0) goto code_?;
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_00,(MethodInfo *)0x0);
          bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_Execute_18
                            (pGVar9,(BaseEventData *)0x0,this_03,
                             (pMVar10->field7_0x38).rgctx_data[1].method);
          if (bVar16 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          uVar2 = uVar2 + 1;
          lVar12 = lVar12 + 1;
          lVar13 = lVar13 + 8;
        } while (lVar12 < lVar3);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* IEnumerator DownloadImage(String) */

IEnumerator *
Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_DownloadImage
          (PlayerInventoryPreviewItem *this,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerInventoryPreviewItem___DownloadImage_d__22);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__PlayerInventoryPreviewItem___DownloadImage_d__22);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].klass = (IEnumerator__Class *)url;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* Void Initialize(Transform, InventoryItem, Boolean, Boolean) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
               (PlayerInventoryPreviewItem *this,Transform *rootTransform,InventoryItem *invItem,
               bool draggable,bool done,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___default_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___gold_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___purchased_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_slot_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).item = invItem;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).item >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((invItem != (InventoryItem *)0x0) &&
     (this_00 = (this->fields).toolTip, this_00 != (ToolTip *)0x0)) {
    ToolTip::ToolTip_SetText(this_00,(invItem->fields).name,(MethodInfo *)0x0);
    this_01 = (this->fields).dragHandler;
    if (this_01 != (InventoryItemDragHandler *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,draggable,(MethodInfo *)0x0);
      pTVar6 = (this->fields).text;
      values = (String__Array *)FUN_?(TypeInfo__System__String);
      if (values != (String__Array *)0x0) {
        FUN_?(values,0,StringLiteral_slot_);
        pIVar7 = (this->fields).item;
        if (pIVar7 != (InventoryItem *)0x0) {
          pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&(pIVar7->fields).slotPosition,(MethodInfo *)0x0);
          FUN_?(values,1,pSVar8);
          FUN_?(values,2,StringLiteral___default_);
          pIVar7 = (this->fields).item;
          if (pIVar7 != (InventoryItem *)0x0) {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_False);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_True);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar8 = StringLiteral_False;
            if ((pIVar7->fields).isDefaultInvItem != 0) {
              pSVar8 = StringLiteral_True;
            }
            FUN_?(values,3,pSVar8);
            FUN_?(values,4,StringLiteral___purchased_);
            pIVar7 = (this->fields).item;
            if (pIVar7 != (InventoryItem *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral_False);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_True);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pSVar8 = StringLiteral_False;
              if ((pIVar7->fields).purchased != 0) {
                pSVar8 = StringLiteral_True;
              }
              FUN_?(values,5,pSVar8);
              FUN_?(values,6,StringLiteral___gold_);
              pIVar7 = (this->fields).item;
              if (pIVar7 != (InventoryItem *)0x0) {
                pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                                    ((Int32 *)&(pIVar7->fields).priceGold,(MethodInfo *)0x0);
                FUN_?(values,7,pSVar8);
                mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
                if (pTVar6 != (Text *)0x0) {
                  (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6);
                  pIVar7 = (this->fields).item;
                  if (pIVar7 != (InventoryItem *)0x0) {
                    if (((pIVar7->fields).purchased == 0) &&
                       ((pIVar7->fields).isDefaultInvItem == 0)) {
                      bVar1 = 0 < (pIVar7->fields).priceGold;
                    }
                    else {
                      bVar1 = false;
                    }
                    (this->fields).requiresUnlocking = bVar1;
                    pGVar9 = (this->fields).padLock;
                    if (pGVar9 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar9,bVar1,(MethodInfo *)0x0);
                      pIVar10 = (this->fields).metaData;
                      if (pIVar10 != (InventoryItemMetaData *)0x0) {
                        (pIVar10->fields).slotIndex = (invItem->fields).slotPosition;
                        if (done == 0) {
code_?:
                          (this->fields).initialized = done;
                          return;
                        }
                        if ((invItem->fields).imagePath == (String *)0x0) {
                          this_02 = (this->fields).previewImage;
                          if (this_02 != (RawImage *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                      (this_02,(this->fields).noImageTexture,(MethodInfo *)0x0);
                            goto code_?;
                          }
                        }
                        else {
                          this_03 = (this->fields).loadingWheel;
                          if ((this_03 != (Image *)0x0) &&
                             (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)this_03,(MethodInfo *)0x0),
                             pGVar9 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar9,1,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (((pMVar11 != (MVGameControllerBase *)0x0) &&
                                (this_04 = (pMVar11->fields).regionConfigManager,
                                this_04 != (RegionConfigManager *)0x0)) &&
                               (pRVar12 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                                                    (this_04,(MethodInfo *)0x0),
                               pRVar12 != (RegionConfig *)0x0)) {
                              pIVar13 = (IEnumerator__Class *)
                                        mscorlib.dll::System::String::String_Concat_4
                                                  ((pRVar12->fields).StaticAssetsConfig.url,
                                                   (invItem->fields).imagePath,(MethodInfo *)0x0);
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              TypeInfo__PlayerInventoryPreviewItem___DownloadImage_d__22
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              routine = (IEnumerator *)
                                        FUN_?(
                                                  TypeInfo__PlayerInventoryPreviewItem___DownloadImage_d__22
                                                  );
                              *(undefined4 *)&routine[1].klass = 0;
                              routine[2].monitor = (MonitorData *)this;
                              if (iRam_? != 0) {
                                uVar2 = (uint)((ulonglong)&routine[2].monitor >> 0xc);
                                lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                do {
                                  uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                                  puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                                  LOCK();
                                  bVar1 = uVar4 == *puVar5;
                                  if (bVar1) {
                                    *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar1);
                              }
                              iVar14 = iRam_?;
                              routine[2].klass = pIVar13;
                              if (iVar14 != 0) {
                                uVar2 = (uint)((ulonglong)(routine + 2) >> 0xc);
                                lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                do {
                                  uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                                  puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                                  LOCK();
                                  bVar1 = uVar4 == *puVar5;
                                  if (bVar1) {
                                    *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar1);
                              }
                              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                              MonoBehaviour_StartCoroutine_2
                                        ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
                              goto code_?;
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
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Initialize(Transform, InventoryItem, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize_1
               (PlayerInventoryPreviewItem *this,Transform *rootTransform,InventoryItem *invItem,
               MVWorldObjectClient *woPreviewObject,bool draggable,MethodInfo *method)

{
  PlayerInventoryPreviewItem_Initialize(this,rootTransform,invItem,draggable,0,(MethodInfo *)0x0);
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
  if ((woPreviewObject != (MVWorldObjectClient *)0x0) &&
     (t = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                    (woPreviewObject,(woPreviewObject->klass->vtable).get_DocumentationType.method),
     invItem != (InventoryItem *)0x0)) {
    InventoryItem::InventoryItem_ApplyLocalDescriptionOverride(invItem,t,(MethodInfo *)0x0);
    this_00 = (this->fields).toolTip;
    if (this_00 != (ToolTip *)0x0) {
      ToolTip::ToolTip_SetText(this_00,(invItem->fields).name,(MethodInfo *)0x0);
      iVar1 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                        (woPreviewObject,
                         (woPreviewObject->klass->vtable).get_DocumentationType.method);
      pIVar2 = (this->fields).objectPreviewerPrefab;
      (this->fields).DocumentationType = iVar1;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar2 = (InventoryItemPreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pIVar2,
                          InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                         );
      bVar3 = iRam_? != 0;
      (this->fields).objectPreviewer = pIVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).objectPreviewer >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      uVar8 = 0;
      uVar9 = 0;
      fVar10 = 0.0;
      fVar11 = (float)(invItem->fields).slotPosition * _UNK_?;
      if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__InventoryItem);
      }
      this_01 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
      IVar12 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                        (woPreviewObject,
                         (woPreviewObject->klass->vtable).get_DocumentationType.method);
      if (this_01 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32Enum,UnityEngine::Vector3]::
                Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                          (this_01,IVar12,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                           ->klass->rgctx_data[0x21].method);
        if (-1 < iVar1) {
          if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__InventoryItem);
          }
          this_02 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          IVar12 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                            (woPreviewObject,
                             (woPreviewObject->klass->vtable).get_DocumentationType.method);
          if ((this_02 ==
               (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) ||
             (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,IVar12,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                 ), pOVar13 == (Object *)0x0)) goto code_?;
          pMStack_14 = pOVar13[2].monitor;
          uVar8 = SUB84(pMStack_14,0);
          uVar9 = (undefined4)((ulonglong)pMStack_14 >> 0x20);
          fVar10 = *(float *)&pOVar13[3].klass;
        }
        pIVar2 = (this->fields).objectPreviewer;
        if (pIVar2 != (InventoryItemPreviewer *)0x0) {
          VStack_15.y = _UNK_?;
          VStack_15.x = _UNK_?;
          pMStack_14 = (MonitorData *)CONCAT44(uVar9,uVar8);
          VStack_15.z = fVar11;
          fStack_16 = fVar10;
          InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                    (pIVar2,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,(woPreviewObject->fields).previewLayerMask,
                     (Vector3 *)&pMStack_14,rootTransform,&VStack_15,(invItem->fields).name,
                     woPreviewObject,(woPreviewObject->fields).gameObject,(MethodInfo *)0x0);
          pIVar2 = (this->fields).objectPreviewer;
          if ((pIVar2 != (InventoryItemPreviewer *)0x0) &&
             (this_03 = (this->fields).previewImage, this_03 != (RawImage *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_03,(Texture *)(pIVar2->fields).previewTexture,(MethodInfo *)0x0);
            (this->fields).initialized = 1;
            (this->fields).hasItemPreviewer = 1;
            return;
          }
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


/* Void LoadItemPreviewer(Transform, InventoryItem, MVWorldObjectClient) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_LoadItemPreviewer
               (PlayerInventoryPreviewItem *this,Transform *rootTransform,InventoryItem *item,
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
  if ((woPreviewObject != (MVWorldObjectClient *)0x0) &&
     (t = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                    (woPreviewObject,(woPreviewObject->klass->vtable).get_DocumentationType.method),
     item != (InventoryItem *)0x0)) {
    InventoryItem::InventoryItem_ApplyLocalDescriptionOverride(item,t,(MethodInfo *)0x0);
    this_00 = (this->fields).toolTip;
    if (this_00 != (ToolTip *)0x0) {
      ToolTip::ToolTip_SetText(this_00,(item->fields).name,(MethodInfo *)0x0);
      iVar1 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                        (woPreviewObject,
                         (woPreviewObject->klass->vtable).get_DocumentationType.method);
      pIVar2 = (this->fields).objectPreviewerPrefab;
      (this->fields).DocumentationType = iVar1;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar2 = (InventoryItemPreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pIVar2,
                          InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                         );
      bVar3 = iRam_? != 0;
      (this->fields).objectPreviewer = pIVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).objectPreviewer >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      uVar8 = 0;
      uVar9 = 0;
      fVar10 = 0.0;
      fVar11 = (float)(item->fields).slotPosition * _UNK_?;
      if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__InventoryItem);
      }
      this_01 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
      IVar12 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                        (woPreviewObject,
                         (woPreviewObject->klass->vtable).get_DocumentationType.method);
      if (this_01 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32Enum,UnityEngine::Vector3]::
                Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                          (this_01,IVar12,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                           ->klass->rgctx_data[0x21].method);
        if (-1 < iVar1) {
          if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__InventoryItem);
          }
          this_02 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          IVar12 = (*(woPreviewObject->klass->vtable).get_DocumentationType.methodPtr)
                            (woPreviewObject,
                             (woPreviewObject->klass->vtable).get_DocumentationType.method);
          if ((this_02 ==
               (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) ||
             (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,IVar12,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                 ), pOVar13 == (Object *)0x0)) goto code_?;
          pMStack_14 = pOVar13[2].monitor;
          uVar8 = SUB84(pMStack_14,0);
          uVar9 = (undefined4)((ulonglong)pMStack_14 >> 0x20);
          fVar10 = *(float *)&pOVar13[3].klass;
        }
        pIVar2 = (this->fields).objectPreviewer;
        if (pIVar2 != (InventoryItemPreviewer *)0x0) {
          VStack_15.y = _UNK_?;
          VStack_15.x = _UNK_?;
          pMStack_14 = (MonitorData *)CONCAT44(uVar9,uVar8);
          VStack_15.z = fVar11;
          fStack_16 = fVar10;
          InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                    (pIVar2,(this->fields).previewWidth,(this->fields).previewHeight,
                     CameraClearFlags__Enum_Color,(woPreviewObject->fields).previewLayerMask,
                     (Vector3 *)&pMStack_14,rootTransform,&VStack_15,(item->fields).name,
                     woPreviewObject,(woPreviewObject->fields).gameObject,(MethodInfo *)0x0);
          pIVar2 = (this->fields).objectPreviewer;
          if ((pIVar2 != (InventoryItemPreviewer *)0x0) &&
             (this_03 = (this->fields).previewImage, this_03 != (RawImage *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_03,(Texture *)(pIVar2->fields).previewTexture,(MethodInfo *)0x0);
            (this->fields).initialized = 1;
            (this->fields).hasItemPreviewer = 1;
            return;
          }
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_OnDestroy
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                 );
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
               MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0
                );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
           (IEditModeUI *)0x0) && (lVar2 = FUN_?(), lVar2 != 0)) {
        pDVar3 = *(Delegate **)(lVar2 + 0x28);
        this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,
                   MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                   (MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar3,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          *(undefined8 *)(lVar2 + 0x28) = 0;
        }
        else {
          pDVar4 = (Delegate *)0x0;
          if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
            pDVar4 = pDVar3;
          }
          if (pDVar4 == (Delegate *)0x0) {
            FUN_?(pDVar3,TypeInfo__System__Action);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(Delegate **)(lVar2 + 0x28) = pDVar4;
          pDVar4 = (Delegate *)0x0;
          if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
            pDVar4 = pDVar3;
          }
          if (pDVar4 == (Delegate *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar2 + 0x28U >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pIVar11 = (this->fields).objectPreviewer;
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
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                        ,0,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        pvVar12 = (void *)0x0;
        if (pIVar11 != (InventoryItemPreviewer *)0x0) {
          pvVar12 = (pIVar11->fields)._._._._.m_CachedPtr;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar12,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnInventoryItemFailedToLoad() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_OnInventoryItemFailedToLoad
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
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
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem____c___OnInventoryItemFailedToLoad_b__30_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryPreviewItem____c);
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
    this_03 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_03,(MethodInfo *)0x0
                );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
           (IEditModeUI *)0x0) && (lVar2 = FUN_?(), lVar2 != 0)) {
        pDVar3 = *(Delegate **)(lVar2 + 0x28);
        this_04 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_04,(Object *)this,
                   MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                   (MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                            (pDVar3,(Delegate *)this_04,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          *(undefined8 *)(lVar2 + 0x28) = 0;
        }
        else {
          pDVar4 = (Delegate *)0x0;
          if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
            pDVar4 = pDVar3;
          }
          if (pDVar4 == (Delegate *)0x0) {
            FUN_?(pDVar3,TypeInfo__System__Action);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(Delegate **)(lVar2 + 0x28) = pDVar4;
          pDVar4 = (Delegate *)0x0;
          if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
            pDVar4 = pDVar3;
          }
          if (pDVar4 == (Delegate *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar2 + 0x28U >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        this_01 = (this->fields).loadingWheel;
        if ((this_01 != (Image *)0x0) &&
           (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_01,(MethodInfo *)0x0),
           pGVar11 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar11,0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
               (IEditModeUI *)0x0) && (lVar2 = FUN_?(), lVar2 != 0)) {
            *(undefined4 *)(lVar2 + 0x38) = 0xff7fffff;
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__PlayerInventoryPreviewItem____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__PlayerInventoryPreviewItem____c);
            }
            this_05 = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__30_0;
            if (this_05 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
              if (*(int *)&(TypeInfo__PlayerInventoryPreviewItem____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__PlayerInventoryPreviewItem____c);
              }
              object = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9;
              this_05 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,(Object *)object,
                         MethodInfo__PlayerInventoryPreviewItem____c___OnInventoryItemFailedToLoad_b__30_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__30_0 = this_05;
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)
                                &TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__30_0
                               >> 0xc);
                uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                do {
                  uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                  puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar12 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            ;
            if ((
                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
              if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(pMVar12);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_GetEventChain
                      (pGVar11,(IList_1_UnityEngine_Transform_ *)
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                               s_InternalTransformList,(MethodInfo *)0x0);
            pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
              lVar2 = (longlong)(pLVar13->fields)._size;
              uVar6 = 0;
              if (0 < lVar2) {
                lVar14 = 0;
                lVar15 = 0x20;
                do {
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList;
                  if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                  if ((uint)(pLVar13->fields)._size <= uVar6) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pTVar16 = (pLVar13->fields)._items;
                  if (pTVar16 == (Transform__Array *)0x0) goto code_?;
                  if ((uint)pTVar16->max_length <= uVar6) {
                    FUN_?();
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  this_02 = *(Component **)((longlong)pTVar16->vector + lVar15 + -0x20);
                  if (this_02 == (Component *)0x0) goto code_?;
                  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(this_02,(MethodInfo *)0x0);
                  bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_Execute_18
                                    (pGVar11,(BaseEventData *)0x0,
                                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_05,
                                     (pMVar12->field7_0x38).rgctx_data[1].method);
                  if (bVar17 != 0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_02,(MethodInfo *)0x0);
                    return;
                  }
                  uVar6 = uVar6 + 1;
                  lVar14 = lVar14 + 1;
                  lVar15 = lVar15 + 8;
                } while (lVar14 < lVar2);
              }
              return;
            }
code_?:
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnInventoryItemLoaded(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_OnInventoryItemLoaded
               (PlayerInventoryPreviewItem *this,Object *sender,ReceivedItemFromQueryEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
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
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem___OnInventoryItemLoaded_b__32_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
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
               MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0
                );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
           (IEditModeUI *)0x0) && (lVar2 = FUN_?(), lVar2 != 0)) {
        pDVar3 = *(Delegate **)(lVar2 + 0x28);
        this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,
                   MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                   (MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                            (pDVar3,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          *(undefined8 *)(lVar2 + 0x28) = 0;
        }
        else {
          pDVar4 = (Delegate *)0x0;
          if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
            pDVar4 = pDVar3;
          }
          if (pDVar4 == (Delegate *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(Delegate **)(lVar2 + 0x28) = pDVar4;
          pDVar4 = (Delegate *)0x0;
          if ((Action__Class *)pDVar3->klass == TypeInfo__System__Action) {
            pDVar4 = pDVar3;
          }
          if (pDVar4 == (Delegate *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar2 + 0x28U >> 0xc);
          lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar8 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        if (e != (ReceivedItemFromQueryEventArgs *)0x0) {
          pBVar10 = (e->fields).KoGaMaData;
          pIVar11 = (this->fields).item;
          if (pBVar10 != (BytePacker *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar12 = (pBVar10->fields)._buffer;
            if ((pLVar12 != (List_1_System_Byte_ *)0x0) &&
               (pBVar13 = (Byte__Array *)
                          FUN_?(pLVar12,
                                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                       ), pIVar11 != (InventoryItem *)0x0)) {
              bVar9 = iRam_? != 0;
              (pIVar11->fields).data = pBVar13;
              if (bVar9) {
                uVar6 = (uint)((ulonglong)&(pIVar11->fields).data >> 0xc);
                lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                  puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                  LOCK();
                  bVar9 = uVar7 == *puVar8;
                  if (bVar9) {
                    *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar9);
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
                  (IEditModeUI *)0x0) {
                lVar2 = FUN_?();
                pIVar11 = (this->fields).item;
                if ((pIVar11 != (InventoryItem *)0x0) && (lVar2 != 0)) {
                  pBVar13 = (pIVar11->fields).data;
                  if (*(PlayerInventoryRepository **)(lVar2 + 0x48) !=
                      (PlayerInventoryRepository *)0x0) {
                    pIVar11 = PlayerInventoryRepository::PlayerInventoryRepository_GetInventoryItem
                                        (*(PlayerInventoryRepository **)(lVar2 + 0x48),
                                         (pIVar11->fields).itemID,(pIVar11->fields).itemCategoryID,
                                         (MethodInfo *)0x0);
                    if (pIVar11 != (InventoryItem *)0x0) {
                      bVar9 = iRam_? != 0;
                      (pIVar11->fields).data = pBVar13;
                      if (bVar9) {
                        uVar6 = (uint)((ulonglong)&(pIVar11->fields).data >> 0xc);
                        lVar2 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar7 = *(ulonglong *)(lVar2 + 0xADDR);
                          puVar8 = (ulonglong *)(lVar2 + 0xADDR);
                          LOCK();
                          bVar9 = uVar7 == *puVar8;
                          if (bVar9) {
                            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar9);
                      }
                      (pIVar11->fields).hasData = 1;
                    }
                    root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (this_03,(Object *)this,
                               MethodInfo__PlayerInventoryPreviewItem___OnInventoryItemLoaded_b__32_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (root,(BaseEventData *)0x0,this_03,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                              );
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    TypeInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    lVar2 = FUN_?(
                                         TypeInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33
                                         );
                    bVar9 = iRam_? != 0;
                    *(undefined4 *)(lVar2 + 0x10) = 0;
                    *(PlayerInventoryPreviewItem **)(lVar2 + 0x28) = this;
                    if (bVar9) {
                      uVar6 = (uint)(lVar2 + 0x28U >> 0xc);
                      lVar14 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar7 = *(ulonglong *)(lVar14 + 0xADDR);
                        puVar8 = (ulonglong *)(lVar14 + 0xADDR);
                        LOCK();
                        bVar9 = uVar7 == *puVar8;
                        if (bVar9) {
                          *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar9);
                    }
                    *(undefined4 *)(lVar2 + 0x20) = 1;
                    if (lVar2 == 0) {
                      uVar15 = func_?(&TypeInfo__System__NullReferenceException);
                      this_04 = (NullReferenceException *)func_?(uVar15);
                      pSVar16 = (String *)func_?(&StringLiteral_routine_is_null);
                      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                                (this_04,pSVar16,(MethodInfo *)0x0);
                      uVar15 = func_?(&
                                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                                  );
                      FUN_?(this_04,uVar15);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    bVar17 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
                    if (bVar17 == 0) {
                      uVar15 = func_?(&TypeInfo__System__ArgumentException);
                      this_05 = (InvalidEnumArgumentException *)func_?(uVar15);
                      pSVar16 = (String *)
                                func_?(&StringLiteral_Coroutines_can_only_be_stopped_o)
                      ;
                      System.dll::System::ComponentModel::InvalidEnumArgumentException::
                      InvalidEnumArgumentException__ctor_1(this_05,pSVar16,(MethodInfo *)0x0);
                      uVar15 = func_?(&
                                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                                  );
                      FUN_?(this_05,uVar15);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (this == (PlayerInventoryPreviewItem *)0x0) {
                      FUN_?();
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pvVar18 = (this->fields)._._._._.m_CachedPtr;
                    if (pvVar18 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pcVar5 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                      uVar15 = func_?(&UNK_?);
                      FUN_?(uVar15,0);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam_?)(pvVar18,lVar2);
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowPurchasePopUp() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_ShowPurchasePopUp
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

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
                  MethodInfo__PlayerInventoryPreviewItem____c___ShowPurchasePopUp_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem____c__DisplayClass34_0___ShowPurchasePopUp_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryPreviewItem____c__DisplayClass34_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryPreviewItem____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__PlayerInventoryPreviewItem____c__DisplayClass34_0);
  original = (this->fields).popup;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ItemPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<ItemPurchasePopup>_ItemPurchasePopup_
                     );
  if (object_00 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object_00[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (object_00[1].klass != (Object__Class *)0x0) {
      ItemPurchasePopup::ItemPurchasePopup_Initialize_2
                ((ItemPurchasePopup *)object_00[1].klass,(this->fields).previewImage,
                 (this->fields).item,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__PlayerInventoryPreviewItem____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerInventoryPreviewItem____c);
      }
      this_01 = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__34_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__PlayerInventoryPreviewItem____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PlayerInventoryPreviewItem____c);
        }
        object = TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__PlayerInventoryPreviewItem____c___ShowPurchasePopUp_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__34_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9__34_0 >>
                         0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar7,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object_00,
                 MethodInfo__PlayerInventoryPreviewItem____c__DisplayClass34_0___ShowPurchasePopUp_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      pMVar8 = 
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
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar4 = (longlong)(pLVar9->fields)._size;
        uVar3 = 0;
        if (0 < lVar4) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar9->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_02,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar4);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SlotPressed() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_SlotPressed
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
       (IEditModeUI *)0x0) && (lVar4 = FUN_?(), lVar4 != 0)) {
    if (_UNK_? <= fVar3 - *(float *)(lVar4 + 0x38)) {
      if ((this->fields).requiresUnlocking == 0) {
        pIVar5 = (this->fields).item;
        if (pIVar5 != (InventoryItem *)0x0) {
          if ((pIVar5->fields).hasData != 0) {
            PlayerInventoryPreviewItem_AddItemToWorldFromInventory(this,(MethodInfo *)0x0);
            return;
          }
          this_00 = (this->fields).loadingWheel;
          if ((this_00 != (Image *)0x0) &&
             (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0),
             this_01 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
            this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            this_03 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_03,(Object *)this,
                       MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                       ,(MethodInfo *)0x0);
            if (this_02 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                        (this_02,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_03,
                         (MethodInfo *)0x0);
              lVar4 = FUN_?();
              if ((lVar4 != 0) && (lVar4 = FUN_?(), lVar4 != 0)) {
                *(float *)(lVar4 + 0x38) = fVar3;
                lVar4 = FUN_?();
                if ((lVar4 != 0) && (lVar4 = FUN_?(), lVar4 != 0)) {
                  pDVar6 = *(Delegate **)(lVar4 + 0x28);
                  this_04 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  uVar2 = 0;
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_04,(Object *)this,
                             MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                             (MethodInfo *)0x0);
                  pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     (pDVar6,(Delegate *)this_04,(MethodInfo *)0x0);
                  if (pDVar6 == (Delegate *)0x0) {
                    *(undefined8 *)(lVar4 + 0x28) = 0;
                  }
                  else {
                    pDVar7 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
                      pDVar7 = pDVar6;
                    }
                    if (pDVar7 == (Delegate *)0x0) {
                      FUN_?(pDVar6,TypeInfo__System__Action);
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                    *(Delegate **)(lVar4 + 0x28) = pDVar7;
                    pDVar7 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
                      pDVar7 = pDVar6;
                    }
                    if (pDVar7 == (Delegate *)0x0) {
                      FUN_?();
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                  }
                  func_?();
                  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                     ((MethodInfo *)0x0);
                  pIVar5 = (this->fields).item;
                  if ((pIVar5 != (InventoryItem *)0x0) &&
                     (iVar9 = (pIVar5->fields).itemID,
                     pMVar8 != (MVNetworkGame_OperationRequests *)0x0)) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                   );
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
                    this_05 = (Dictionary_2_System_Byte_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                           );
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object___ctor
                              (this_05,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                              );
                    aiStackX_18[0] = iVar9;
                    value = (Object *)FUN_?(uRam_?,aiStackX_18);
                    if (this_05 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                  ->klass->rgctx_data[0x22].method;
                      uVar10 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x29);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_05,0x29,value,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                                 method_00);
                      pPVar11 = (pMVar8->fields).peer;
                      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                          == 0) {
                        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      if (pPVar11 != (PhotonPeer *)0x0) {
                        (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                                  (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),0x7a),this_05,
                                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                   SendReliable,(pPVar11->klass->vtable).SendOperation.method);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      PlayerInventoryPreviewItem_ShowPurchasePopUp(this,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Update
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (((this->fields).initialized == 0) || ((this->fields).hasItemPreviewer == 0)) {
    return;
  }
  pIVar1 = (this->fields).objectPreviewer;
  if (pIVar1 == (InventoryItemPreviewer *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = (pIVar1->fields)._PreviewGameObject_k__BackingField;
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
  if (pGVar3 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar3->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar3 = (pIVar1->fields)._PreviewGameObject_k__BackingField;
      if (pGVar3 != (GameObject *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0);
        uVar4._0_4_ = (pIVar1->fields).pivotPoint.x;
        uVar4._4_4_ = (pIVar1->fields).pivotPoint.y;
        fVar5 = (pIVar1->fields).pivotPoint.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar6 = _UNK_?;
        pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar8 = (pVVar7->upVector).z;
        uVar9._0_4_ = (pVVar7->upVector).x;
        uVar9._4_4_ = (pVVar7->upVector).y;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar10 = (float)(*pcRam_?)();
        if (this_00 != (Transform *)0x0) {
          VStack_11._0_8_ = uVar9;
          VStack_11.z = fVar8;
          aVStack_12[0]._0_8_ = uVar4;
          aVStack_12[0].z = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                    (this_00,aVStack_12,&VStack_11,fVar10 * fVar6,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void <AddItemToWorldFromInventory>b__31_1(IAddItemFromInventory, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem__AddItemToWorldFromInventory_b__31_1
               (PlayerInventoryPreviewItem *this,IAddItemFromInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAddItemFromInventory *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = (this->fields).item;
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory) {
        pIVar6 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar6 = (IAddItemFromInventory__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory,0,pIVar2,
                         unaff_RDI);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->OnAddItemFromInventory).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,pIVar2,(pIVar6->OnAddItemFromInventory).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* Void <OnInventoryItemLoaded>b__32_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem__OnInventoryItemLoaded_b__32_0
               (PlayerInventoryPreviewItem *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).item;
  if (x == (IPlayerInventory *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        pVVar6 = &(pIVar3->vtable).Activate + (pIVar3->interfaceOffsets[uVar4].offset + 7);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,7);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(x,this,pIVar1,pVVar6->method);
  return;
}

