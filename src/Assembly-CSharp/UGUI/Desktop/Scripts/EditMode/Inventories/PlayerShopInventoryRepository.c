
/* Void AddItemToInventory(InventoryItem) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_AddItemToInventory
               (PlayerShopInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
  this_00 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (this_00 != (PlayerInventoryRepository *)0x0) {
    PlayerInventoryRepository::PlayerInventoryRepository_AddItem(this_00,item,(MethodInfo *)0x0);
    pAVar1 = (this->fields).OnInventoryChanged;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    }
    pAVar2 = (this->fields).OnInventoryItemAdded;
    if (pAVar2 != (Action_3_Int32_Int32_Boolean_ *)0x0) {
      if (item == (InventoryItem *)0x0) goto code_?;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(item->fields).itemCategoryID,
                 (item->fields).slotPosition,1,(pAVar2->fields)._._.method);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* InventoryItem AddPurchasedItem(ShopItem) */

InventoryItem *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_AddPurchasedItem
          (PlayerShopInventoryRepository *this,ShopItem *shopItem,MethodInfo *method)

{
  this_00 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (this_00 != (PlayerInventoryRepository *)0x0) {
    pIVar1 = PlayerInventoryRepository::PlayerInventoryRepository_AddPurchasedItem
                       (this_00,shopItem,(MethodInfo *)0x0);
    pAVar2 = (this->fields).OnInventoryChanged;
    if (pAVar2 != (Action *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
    }
    pAVar3 = (this->fields).OnInventoryItemAdded;
    if (pAVar3 != (Action_3_Int32_Int32_Boolean_ *)0x0) {
      if ((shopItem == (ShopItem *)0x0) || (pIVar1 == (InventoryItem *)0x0))
      goto code_?;
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,(shopItem->fields).itemCategoryID,
                 (pIVar1->fields).slotPosition,0,(pAVar3->fields)._._.method);
    }
    pCVar4 = (this->fields)._clientShopRepository_k__BackingField;
    if (pCVar4 != (ClientShopRepository *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Remove_ShopItem_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((shopItem != (ShopItem *)0x0) &&
         (this_01 = (pCVar4->fields).repository,
         this_01 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0)) {
        this_02 = (List_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                             (shopItem->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                            );
        if (this_02 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Remove
                    (this_02,(Object *)shopItem,
                     MethodInfo__System__Collections__Generic__List<ShopItem>__Remove_ShopItem_);
          pCVar4 = (this->fields)._clientShopRepository_k__BackingField;
          if (pCVar4 != (ClientShopRepository *)0x0) {
            ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                      (pCVar4,(MethodInfo *)0x0);
            return pIVar1;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pIVar1 = (InventoryItem *)(*pcVar5)();
  return pIVar1;
}


/* Void AddShopItems(Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_AddShopItems
               (PlayerShopInventoryRepository *this,
               Dictionary_2_System_Object_System_Object_ *outData,bool isDone,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShopItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((outData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                         ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)outData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                         ),
     pDVar1 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_2 = (pDVar1->fields)._dictionary;
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (pDStack_2 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_6 = pDStack_2;
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_2->fields)._version << 0x20);
    uStack_4 = 0;
    uStack_11 = (ulonglong)ppDStack_3;
    aplStack_12[0] = (longlong *)0x0;
    pDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_3 = &pDStack_2;
    while (pDStack_2 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_11._4_4_ != (pDStack_2->fields)._version) goto code_?;
      uVar9 = uStack_11 & 0xffffffff;
      do {
        if (pDStack_2 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        uVar5 = (uint)uVar9;
        if ((uint)(pDStack_2->fields)._count <= uVar5) {
          uStack_11 = CONCAT44(uStack_11._4_4_,(pDStack_2->fields)._count + 1);
          aplStack_12[0] = (longlong *)0x0;
          if (isDone != 0) {
            pCVar13 = (this->fields)._clientShopRepository_k__BackingField;
            if (pCVar13 == (ClientShopRepository *)0x0) goto code_?;
            ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                      (pCVar13,(MethodInfo *)0x0);
          }
          return;
        }
        pDVar14 = (pDStack_2->fields)._entries;
        uVar9 = (ulonglong)(uVar5 + 1);
        uStack_11 = CONCAT44(uStack_11._4_4_,uVar5 + 1);
        if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar14->max_length <= uVar5) goto code_?;
      } while ((&pDVar14->vector[0].hashCode)[(longlong)(int)uVar5 * 6] < 0);
      aplStack_12[0] =
           *(longlong **)((longlong)&pDVar14->vector[0].key + (longlong)(int)uVar5 * 0x18);
      func_?(aplStack_12);
      plVar15 = aplStack_12[0];
      this_02 = (ShopItem *)FUN_?();
      if (plVar15 == (longlong *)0x0) goto code_?;
      if (*(longlong *)(*plVar15 + 0x40) != *(longlong *)(lRam_? + 0x40))
      goto code_?;
      ShopItem::ShopItem__ctor(this_02,(int32_t)plVar15[2],outData,(MethodInfo *)0x0);
      pCVar13 = (this->fields)._clientShopRepository_k__BackingField;
      if (pCVar13 == (ClientShopRepository *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Item_in_inventory_with_category_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pCVar13->fields).repository;
      if (this_02 == (ShopItem *)0x0) goto code_?;
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,(this_02->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar16 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Item_in_inventory_with_category_,(MethodInfo *)0x0);
      }
      else {
        this_01 = (pCVar13->fields).repository;
        if (this_01 == (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) goto code_?;
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                            (this_02->fields).itemCategoryID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
        if (pOVar17 == (Object *)0x0) goto code_?;
        FUN_?(pOVar17,this_02);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Int32 CountInventoryItemsWithOriginalID(InventoryItem) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
        PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_CountInventoryItemsWithOriginalID
                  (PlayerShopInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 != (PlayerInventoryRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Func<InventoryItem,_bool>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__PlayerInventoryRepository____c__DisplayClass5_0___CountItemsWithOriginalID_b__0_InventoryItem_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__PlayerInventoryRepository____c__DisplayClass5_0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    object = (Object *)FUN_?(TypeInfo__PlayerInventoryRepository____c__DisplayClass5_0);
    if (object != (Object *)0x0) {
      bVar2 = iRam_? != 0;
      object[1].klass = (Object__Class *)item;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
      pOVar7 = object[1].klass;
      if (pOVar7 != (Object__Class *)0x0) {
        if (*(int *)&(pOVar7->_0).castClass == 0) {
          return 1;
        }
        this_00 = (pPVar1->fields).repository;
        if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                               *(int32_t *)((longlong)&(pOVar7->_0).name + 4),
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                              );
          this_01 = (Predicate_1_Object_ *)
                    FUN_?(TypeInfo__System__Func<InventoryItem,_bool>);
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (this_01,object,
                     MethodInfo__PlayerInventoryRepository____c__DisplayClass5_0___CountItemsWithOriginalID_b__0_InventoryItem_
                     ,(MethodInfo *)0x0);
          pMVar9 = 
          int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
          ;
          if ((
              int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&TypeInfo__System__IDisposable);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Collections__IEnumerator);
            LOCK();
            UNLOCK();
            if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar9);
            }
          }
          if (pOVar8 == (Object *)0x0) {
            pSVar10 = (String *)func_?(&StringLiteral_source);
            pEVar11 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                                (pSVar10,(MethodInfo *)0x0);
            FUN_?(pEVar11,pMVar9);
code_?:
            uVar12 = FUN_?();
            FUN_?(uVar12,pMVar9);
code_?:
            FUN_?();
          }
          else {
            if (this_01 == (Predicate_1_Object_ *)0x0) {
              pSVar10 = (String *)func_?(&StringLiteral_predicate);
              pEVar11 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                                  (pSVar10,(MethodInfo *)0x0);
              FUN_?(pEVar11,pMVar9);
              pcVar13 = (code *)swi(3);
              iVar14 = (*pcVar13)();
              return iVar14;
            }
            iVar15 = 0;
            pvVar16 = ((pMVar9->field7_0x38).rgctx_data)->rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
              pvVar16 = (void *)FUN_?(pvVar16);
            }
            lVar17 = FUN_?(0,pvVar16,pOVar8);
            while (lVar17 != 0) {
              cVar18 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
              if (cVar18 == '\0') {
                if (lVar17 != 0) {
                  FUN_?(0,TypeInfo__System__IDisposable,lVar17);
                }
                return iVar15;
              }
              if (lVar17 == 0) goto code_?;
              pvVar16 = (pMVar9->field7_0x38).rgctx_data[3].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
                pvVar16 = (void *)FUN_?(pvVar16);
              }
              uVar12 = FUN_?(0,pvVar16,lVar17);
              cVar18 = (*(this_01->fields)._._.invoke_impl)
                                ((this_01->fields)._._.method_code,uVar12,
                                 (this_01->fields)._._.method);
              if (cVar18 != '\0') {
                if (iVar15 == 0x7fffffff) goto code_?;
                iVar15 = iVar15 + 1;
              }
            }
          }
          FUN_?();
          FUN_?();
          pcVar13 = (code *)swi(3);
          iVar14 = (*pcVar13)();
          return iVar14;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Boolean GetInventoryItemByWorldObjectTypeInCategory(InventoryCategoryType, WorldObjectType,
   InventoryItem ByRef) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::
     PlayerShopInventoryRepository_GetInventoryItemByWorldObjectTypeInCategory
               (PlayerShopInventoryRepository *this,InventoryCategoryType__Enum pickups,
               WorldObjectType__Enum worldObjectType,InventoryItem **item,MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 == (PlayerInventoryRepository *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_4._dictionary =
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0;
  DStack_4._index = 0;
  DStack_4._version = 0;
  DStack_4._currentValue = (Object *)0x0;
  this_00 = (pPVar1->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,pickups,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
    this_02 = (List_1_System_Object_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_02,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
              );
    uVar5 = 0;
    if (this_02 != (List_1_System_Object_ *)0x0) {
      do {
        uVar6 = (this_02->fields)._size;
        if ((int)uVar6 <= (int)uVar5) {
          *item = (InventoryItem *)0x0;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)item >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
          return 0;
        }
        if (uVar6 <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        pOVar10 = (this_02->fields)._items;
        if (pOVar10 == (Object__Array *)0x0) break;
        if ((uint)pOVar10->max_length <= uVar5) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        if (pOVar10->vector[(int)uVar5] == (Object *)0x0) break;
        if (*(char *)&pOVar10->vector[(int)uVar5][3].monitor != '\0') {
          lVar11 = FUN_?(this_02,uVar5);
          if (lVar11 == 0) break;
          buffer = *(Byte__Array **)(lVar11 + 0x30);
          this_03 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    (this_03,buffer,(MethodInfo *)0x0);
          this_04 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
          KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_04,this_03,0,(MethodInfo *)0x0);
          if (this_04 == (KoGaMaPackageClient *)0x0) break;
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_04,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_04,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)(this_04->fields).worldObjects;
          if ((this_01 ==
               (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0) ||
             (this_05 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                  (this_01,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                                  ),
             this_05 ==
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0)) break;
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
          TypeConverterRegistry+ConverterKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__GetEnumerator
                    (&DStack_12,this_05,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                    );
          DStack_4._dictionary =
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)DStack_12._dictionary;
          DStack_4._index = DStack_12._index;
          DStack_4._version = DStack_12._version;
          DStack_4._currentValue = DStack_12._currentValue;
          while (bVar3 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[UnityEngine
                         ::UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__MoveNext
                                   (&DStack_4,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                                   ), bVar3 != 0) {
            if (DStack_4._currentValue == (Object *)0x0) goto code_?;
            if (*(WorldObjectType__Enum *)&DStack_4._currentValue[6].monitor == worldObjectType) {
              if (this_02 != (List_1_System_Object_ *)0x0) {
                pIVar13 = (InventoryItem *)FUN_?(this_02,uVar5);
                *item = pIVar13;
                func_?(item);
                return 1;
              }
              goto code_?;
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while( true );
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* List`1[InventoryItem] GetInventoryItemsInCategorySlow(String) */

List_1_InventoryItem_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_GetInventoryItemsInCategorySlow
          (PlayerShopInventoryRepository *this,String *s,MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 == (PlayerInventoryRepository *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar4 = (List_1_InventoryItem_ *)(*pcVar3)();
    return pLVar4;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                  ,s,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<InventoryCategoryType,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<InventoryCategoryType,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = 0;
  pDVar5 = (Dictionary_2_System_UInt32_System_Object_ *)(pPVar1->fields).categories;
  if (pDVar5 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    uStack_6 = 0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    uStack_13 = (ulonglong)(uint)(pDVar5->fields)._version;
    uStack_14 = 2;
    auStack_2._8_8_ = uStack_13;
    KStack_15.key = 0;
    KStack_15._4_4_ = 0;
    KStack_15.value = (Object *)0x0;
    uStack_16._0_4_ = 2;
    uStack_16._4_4_ = 0;
    pDStack_9 = pDVar5;
    auStack_2._0_8_ = pDVar5;
    do {
      bVar17 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         auStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                        );
      if (bVar17 == 0) goto code_?;
    } while (((String *)KStack_15.value != s) &&
            (((((String *)KStack_15.value == (String *)0x0 || (s == (String *)0x0)) ||
              (((String__Fields *)((longlong)KStack_15.value + 0x10))->_stringLength !=
               (s->fields)._stringLength)) ||
             (bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)
                                 &((String__Fields *)((longlong)KStack_15.value + 0x10))->_firstChar
                                 ,(uint8_t *)&(s->fields)._firstChar,
                                 (longlong)
                                 ((String__Fields *)((longlong)KStack_15.value + 0x10))->
                                 _stringLength * 2,(MethodInfo *)0x0), bVar17 == 0))));
    key = KStack_15.key;
code_?:
    this_00 = (pPVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             );
      pLVar4 = (List_1_InventoryItem_ *)
               FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)pLVar4,(IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                );
      if (pLVar4 != (List_1_InventoryItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Reverse
                  ((List_1_System_Object_ *)pLVar4,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
        return pLVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_InventoryItem_ *)(*pcVar3)();
  return pLVar4;
}


/* String GetShopCategoryStringFromId(InventoryCategoryType) */

String * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
         PlayerShopInventoryRepository::PlayerShopInventoryRepository_GetShopCategoryStringFromId
                   (PlayerShopInventoryRepository *this,
                   InventoryCategoryType__Enum inventoryCategoryType,MethodInfo *method)

{
  pCVar1 = (this->fields)._clientShopRepository_k__BackingField;
  if (pCVar1 != (ClientShopRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
    ;
    this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(pCVar1->fields).categories;
    if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_00,inventoryCategoryType,
                         MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar3 < 0) {
        uVar4 = func_?(pMVar2->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar4);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pSVar6 = (String *)(*pcVar5)();
        return pSVar6;
      }
      pDVar7 = (this_00->fields)._entries;
      if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)
                    0x0) {
        if (uVar3 < (uint)pDVar7->max_length) {
          return *(String **)&pDVar7->vector[(int)uVar3].value.y;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        pSVar6 = (String *)(*pcVar5)();
        return pSVar6;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      pSVar6 = (String *)(*pcVar5)();
      return pSVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* Boolean GetShopItemByWorldObjectTypeInCategory(InventoryCategoryType, WorldObjectType, ShopItem
   ByRef) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::
     PlayerShopInventoryRepository_GetShopItemByWorldObjectTypeInCategory
               (PlayerShopInventoryRepository *this,InventoryCategoryType__Enum pickups,
               WorldObjectType__Enum woType,ShopItem **item,MethodInfo *method)

{
  pCVar1 = (this->fields)._clientShopRepository_k__BackingField;
  if (pCVar1 == (ClientShopRepository *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_4._dictionary =
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0;
  DStack_4._index = 0;
  DStack_4._version = 0;
  DStack_4._currentValue = (Object *)0x0;
  this_00 = (pCVar1->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,pickups,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_02 = (List_1_System_Object_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_02,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    uVar5 = 0;
    if (this_02 != (List_1_System_Object_ *)0x0) {
      while( true ) {
        uVar6 = (this_02->fields)._size;
        if ((int)uVar6 <= (int)uVar5) {
          *item = (ShopItem *)0x0;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)item >> 0xc);
            lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          return 0;
        }
        if (uVar6 <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        pOVar11 = (this_02->fields)._items;
        if (pOVar11 == (Object__Array *)0x0) break;
        if ((uint)pOVar11->max_length <= uVar5) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        if (pOVar11->vector[(int)uVar5] == (Object *)0x0) break;
        buffer = pOVar11->vector[(int)uVar5][3].klass;
        this_03 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (this_03,(Byte__Array *)buffer,(MethodInfo *)0x0);
        this_04 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_04,this_03,0,(MethodInfo *)0x0);
        if (this_04 == (KoGaMaPackageClient *)0x0) break;
        KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_04,(MethodInfo *)0x0);
        KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_04,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)(this_04->fields).worldObjects;
        if ((this_01 ==
             (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0) ||
           (pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                     UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                     Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                               (this_01,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                               ),
           pDVar12 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0)) break;
        pDStack_13 = (pDVar12->fields)._dictionary;
        lStack_14 = 0;
        uStack_15 = 0;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pDStack_13 >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if (pDStack_13 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        lStack_14 = (ulonglong)(uint)(pDStack_13->fields)._version << 0x20;
        uStack_15 = 0;
        DStack_4._index = (undefined4)lStack_14;
        DStack_4._version = lStack_14._4_4_;
        DStack_4._currentValue = (Object *)0x0;
        DStack_4._dictionary =
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)pDStack_13;
        while (bVar3 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[UnityEngine
                       ::UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__MoveNext
                                 (&DStack_4,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                                 ), bVar3 != 0) {
          if (DStack_4._currentValue == (Object *)0x0) goto code_?;
          if (*(WorldObjectType__Enum *)&DStack_4._currentValue[6].monitor == woType) {
            if (this_02 != (List_1_System_Object_ *)0x0) {
              pSVar16 = (ShopItem *)FUN_?(this_02,uVar5);
              *item = pSVar16;
              func_?(item);
              return 1;
            }
            goto code_?;
          }
        }
        uVar5 = uVar5 + 1;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* List`1[ShopItem] GetShopItemsInCategorySlow(String) */

List_1_ShopItem_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_GetShopItemsInCategorySlow
          (PlayerShopInventoryRepository *this,String *category,MethodInfo *method)

{
  pCVar1 = (this->fields)._clientShopRepository_k__BackingField;
  if (pCVar1 == (ClientShopRepository *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar4 = (List_1_ShopItem_ *)(*pcVar3)();
    return pLVar4;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                  ,category,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<InventoryCategoryType,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<InventoryCategoryType,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = 0;
  pDVar5 = (Dictionary_2_System_UInt32_System_Object_ *)(pCVar1->fields).categories;
  if (pDVar5 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    uStack_6 = 0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    uStack_13 = (ulonglong)(uint)(pDVar5->fields)._version;
    uStack_14 = 2;
    auStack_2._8_8_ = uStack_13;
    KStack_15.key = 0;
    KStack_15._4_4_ = 0;
    KStack_15.value = (Object *)0x0;
    uStack_16._0_4_ = 2;
    uStack_16._4_4_ = 0;
    pDStack_9 = pDVar5;
    auStack_2._0_8_ = pDVar5;
    do {
      bVar17 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         auStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                        );
      if (bVar17 == 0) goto code_?;
    } while (((String *)KStack_15.value != category) &&
            (((((String *)KStack_15.value == (String *)0x0 || (category == (String *)0x0)) ||
              (((String__Fields *)((longlong)KStack_15.value + 0x10))->_stringLength !=
               (category->fields)._stringLength)) ||
             (bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)
                                 &((String__Fields *)((longlong)KStack_15.value + 0x10))->_firstChar
                                 ,(uint8_t *)&(category->fields)._firstChar,
                                 (longlong)
                                 ((String__Fields *)((longlong)KStack_15.value + 0x10))->
                                 _stringLength * 2,(MethodInfo *)0x0), bVar17 == 0))));
    key = KStack_15.key;
code_?:
    this_00 = (pCVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                             );
      pLVar4 = (List_1_ShopItem_ *)
               FUN_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)pLVar4,(IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                );
      if (pLVar4 != (List_1_ShopItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Reverse
                  ((List_1_System_Object_ *)pLVar4,
                   MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
        return pLVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_ShopItem_ *)(*pcVar3)();
  return pLVar4;
}


/* Boolean HasShopWorldObjectType(WorldObjectType) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_HasShopWorldObjectType
               (PlayerShopInventoryRepository *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIStackX_8 = (InventoryItem *)0x0;
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (((pPVar1 == (PlayerInventoryRepository *)0x0) ||
      (this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)(pPVar1->fields).categories,
      this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0))
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                            ),
        pDVar2 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_3 = (pDVar2->fields)._dictionary;
    ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_5 = 0;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (pDStack_3 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_7 = pDStack_3;
      FUN_?();
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_3->fields)._version << 0x20);
    uStack_5 = 0;
    uStack_13 = (longlong)ppDStack_4;
    uStack_14 = 0;
    pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_4 = &pDStack_3;
    while (pDStack_3 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_13._4_4_ != (pDStack_3->fields)._version) goto code_?;
      uVar6 = (uint)uStack_13;
      do {
        if (pDStack_3 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_3->fields)._count <= uVar6) {
          return 0;
        }
        pDVar15 = (pDStack_3->fields)._entries;
        lVar16 = (longlong)(int)uVar6;
        uStack_13 = CONCAT44(uStack_13._4_4_,uVar6 + 1);
        if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar15->max_length <= uVar6) goto code_?;
        uVar6 = uVar6 + 1;
      } while ((&pDVar15->vector[0].hashCode)[lVar16 * 6] < 0);
      inventoryCategory =
           *(InventoryCategoryType__Enum *)((longlong)&pDVar15->vector[0].key + lVar16 * 0x18);
      uStack_14 = CONCAT44(uStack_14._4_4_,inventoryCategory);
      pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
      if (pPVar1 == (PlayerInventoryRepository *)0x0) goto code_?;
      PlayerInventoryRepository::PlayerInventoryRepository_GetItemByWorldObjectTypeInCategory
                (pPVar1,inventoryCategory,worldObjectType,&pIStackX_8,(MethodInfo *)0x0);
      if (pIStackX_8 != (InventoryItem *)0x0) {
        return 1;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Int32 HighestSlotIndex(InventoryCategoryType) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
        PlayerShopInventoryRepository::PlayerShopInventoryRepository_HighestSlotIndex
                  (PlayerShopInventoryRepository *this,InventoryCategoryType__Enum categoryID,
                  MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 != (PlayerInventoryRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pPVar1->fields).repository;
    uVar3 = 0;
    if (pDVar2 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      lVar4 = 0x20;
      iVar5 = 1;
      while (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,categoryID,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                ), pOVar6 != (Object *)0x0) {
        if (*(int *)&pOVar6[1].monitor <= (int)uVar3) {
          return iVar5;
        }
        pDVar2 = (pPVar1->fields).repository;
        if ((pDVar2 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) ||
           (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,categoryID,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                               ), pOVar6 == (Object *)0x0)) break;
        if (*(uint *)&pOVar6[1].monitor <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          iVar8 = (*pcVar7)();
          return iVar8;
        }
        pOVar9 = pOVar6[1].klass;
        if (pOVar9 == (Object__Class *)0x0) break;
        if (*(uint *)&(pOVar9->_0).namespaze <= uVar3) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          iVar8 = (*pcVar7)();
          return iVar8;
        }
        lVar10 = *(longlong *)((longlong)&(pOVar9->_0).image + lVar4);
        if (lVar10 == 0) break;
        iVar11 = *(int *)(lVar10 + 0x54);
        pDVar2 = (pPVar1->fields).repository;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 8;
        if (iVar11 <= iVar5) {
          iVar11 = iVar5;
        }
        iVar5 = iVar11;
        if (pDVar2 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) break;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Void RefreshInventory(Dictionary`2[System.Object,System.Object], Int64) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_RefreshInventory
               (PlayerShopInventoryRepository *this,
               Dictionary_2_System_Object_System_Object_ *inventoryData,int64_t inventoryVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnInventoryChanged___0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Inventory_did_not_change);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (inventoryVersion == (this->fields).lastKnownInventoryVersion) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Inventory_did_not_change,(MethodInfo *)0x0);
    return;
  }
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (((pPVar1 == (PlayerInventoryRepository *)0x0) ||
      (PlayerInventoryRepository::PlayerInventoryRepository_ClearAllCategories
                 (pPVar1,(MethodInfo *)0x0),
      inventoryData == (Dictionary_2_System_Object_System_Object_ *)0x0)) ||
     (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                TypeConverterRegistry+ConverterKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                          ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)inventoryData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                          ),
     pDVar2 ==
     (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
      *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  OStack_4.klass = (Object__Class *)(pDVar2->fields)._dictionary;
  PStack_5._arg1 = (Object *)0x0;
  PStack_5._arg2 = (Object *)0x0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&PStack_5 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (OStack_4.klass == (Object__Class *)0x0) {
    PStack_5._arg0 = (Object *)OStack_4.klass;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  OStack_4.monitor._4_4_ =
       *(int *)&(((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                   *)OStack_4.klass)->_0).byval_arg.field_0xc;
  PStack_5._arg2 = (Object *)0x0;
  OStack_4.monitor._0_4_ = 0;
  plStack_10 = (longlong *)0x0;
  PStack_5._arg0 = (Object *)0x0;
  PStack_5._arg1 = &OStack_4;
code_?:
  pSVar11 = StringLiteral_OnInventoryChanged___0_;
  if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
       *)OStack_4.klass !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
       *)0x0) {
    if (OStack_4.monitor._4_4_ == *(int *)&((OStack_4.klass)->_0).byval_arg.field_0xc) {
      do {
        if ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
             *)OStack_4.klass ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
             *)0x0) goto code_?;
        if ((uint)((OStack_4.klass)->_0).byval_arg.data.__klassIndex <= (uint)OStack_4.monitor) {
          OStack_4.monitor =
               (MonitorData *)
               CONCAT44(OStack_4.monitor._4_4_,
                        ((OStack_4.klass)->_0).byval_arg.data.__klassIndex + 1);
          plStack_10 = (longlong *)0x0;
          PStack_5._arg0 = (Object *)0x0;
          PStack_5._arg1 = (Object *)0x0;
          PStack_5._arg2 = (Object *)0x0;
          PStack_5._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                    (&PStack_5,(Object *)(this->fields).OnInventoryChanged,(MethodInfo *)0x0);
          PStack_12._arg0 = PStack_5._arg0;
          PStack_12._arg1 = PStack_5._arg1;
          PStack_12._arg2 = PStack_5._arg2;
          PStack_12._args = PStack_5._args;
          pSVar11 = mscorlib.dll::System::String::String_FormatHelper
                              ((IFormatProvider *)0x0,pSVar11,&PStack_12,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar11,(MethodInfo *)0x0);
          pAVar13 = (this->fields).OnInventoryChanged;
          if (pAVar13 == (Action *)0x0) {
            return;
          }
          (*(pAVar13->fields)._._.invoke_impl)
                    ((pAVar13->fields)._._.method_code,(pAVar13->fields)._._.method);
          return;
        }
        pcVar14 = ((OStack_4.klass)->_0).namespaze;
        lVar15 = (longlong)(int)(uint)OStack_4.monitor;
        uVar6 = (uint)OStack_4.monitor + 1;
        if (pcVar14 == (char *)0x0) goto code_?;
        if (*(uint *)(pcVar14 + 0x18) <= (uint)OStack_4.monitor) {
          pDVar16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                     *)OStack_4.klass;
          OStack_4.monitor._0_4_ = uVar6;
          FUN_?();
          goto code_?;
        }
        OStack_4.monitor._0_4_ = uVar6;
      } while (*(int *)(pcVar14 + lVar15 * 0x18 + 0x20) < 0);
      plStack_10 = *(longlong **)(pcVar14 + lVar15 * 0x18 + 0x28);
      uVar17 = func_?(&plStack_10);
      if (plStack_10 != (longlong *)0x0) {
        pDVar16 = pDRam0000000182dc5078;
        if (*(Il2CppClass **)(*plStack_10 + 0x40) == (pDRam0000000182dc5078->_0).element_class) {
          itemID = (int32_t)plStack_10[2];
          aiStackX_18[0] = itemID;
          pOVar18 = (Object *)FUN_?(pDRam0000000182dc5078,aiStackX_18);
          pDVar19 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                     *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (inventoryData,pOVar18,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
          itemData = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                      *)0x0;
          if (pDVar19 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
               *)0x0) {
code_?:
            this_00 = (InventoryItem *)FUN_?(TypeInfo__InventoryItem);
            pDVar16 = itemData;
            InventoryItem::InventoryItem__ctor_2
                      (this_00,itemID,(Dictionary_2_System_Object_System_Object_ *)itemData,
                       (MethodInfo *)0x0);
            if (this_00 != (InventoryItem *)0x0) goto code_?;
            goto code_?;
          }
          pDVar16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                     *)(pDVar19->_0).image;
          bVar20 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if ((bVar20 <= (pDVar16->_1).naturalAligment) &&
             (itemData = pDVar19,
             (Dictionary_2_System_Object_System_Object___Class *)
             (pDVar16->_1).typeHierarchy[(ulonglong)bVar20 - 1] ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_?:
  if ((this_00->fields).isDeleted == 0) {
    aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,0x18);
    pOVar18 = (Object *)FUN_?(uRam_?,aiStackX_18);
    if (itemData !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
         *)0x0) {
      pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)itemData,pOVar18,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pDVar16 = pDRam0000000182dc5078;
      if (pOVar18 != (Object *)0x0) {
        if ((pOVar18->klass->_0).element_class == (pDRam0000000182dc5078->_0).element_class) {
          (this_00->fields).slotPosition = *(int32_t *)&pOVar18[1].klass;
          pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
          if (pPVar1 != (PlayerInventoryRepository *)0x0) {
            pDVar16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                       *)0x0;
            PlayerInventoryRepository::PlayerInventoryRepository_AddItem
                      (pPVar1,this_00,(MethodInfo *)0x0);
            pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar21 != (MVNetworkGame *)0x0) {
              pMVar22 = (pMVar21->fields).itemBusinessLogic;
              if (pMVar22 != (MVItemBusinessLogic *)0x0) {
                pDVar16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                           *)0x0;
                pMVar23 = MVItemBusinessLogic::MVItemBusinessLogic_GetItem
                                    (pMVar22,itemID,(MethodInfo *)0x0);
                if (pMVar23 != (MVItem *)0x0) goto code_?;
                pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar21 != (MVNetworkGame *)0x0) {
                  pMVar22 = (pMVar21->fields).itemBusinessLogic;
                  if (pMVar22 != (MVItemBusinessLogic *)0x0) {
                    MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
                              (pMVar22,itemID,(this_00->fields).resellable,
                               (this_00->fields).itemCategoryID,(this_00->fields).itemTypeID,
                               (this_00->fields).name,(MethodInfo *)0x0);
                    goto code_?;
                  }
code_?:
                  FUN_?();
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          pOVar18 = (Object *)FUN_?();
        }
        FUN_?(pOVar18,pDVar16);
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar17 = FUN_?();
code_?:
    FUN_?(uVar17,pDVar16);
code_?:
    FUN_?();
    uVar6 = (uint)OStack_4.monitor;
code_?:
    OStack_4.monitor._0_4_ = uVar6;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
}


/* Void RemoveInventoryItem(InventoryItem) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_RemoveInventoryItem
               (PlayerShopInventoryRepository *this,InventoryItem *previewedItem,MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 != (PlayerInventoryRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__Remove_InventoryItem_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((previewedItem != (InventoryItem *)0x0) &&
       (this_00 = (pPVar1->fields).repository,
       this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0)) {
      this_01 = (List_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                           (previewedItem->fields).itemCategoryID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                          );
      if (this_01 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Remove
                  (this_01,(Object *)previewedItem,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__Remove_InventoryItem_
                  );
        pAVar2 = (this->fields).OnInventoryChanged;
        if (pAVar2 != (Action *)0x0) {
          (*(pAVar2->fields)._._.invoke_impl)
                    ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveItemFromInventory(Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_RemoveItemFromInventory
               (PlayerShopInventoryRepository *this,int32_t itemID,MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 != (PlayerInventoryRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pPVar1->fields).repository;
    if (pDVar2 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,1,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                         );
      index = 0;
      if (pOVar3 != (Object *)0x0) {
        lVar4 = 0x20;
        while( true ) {
          if (*(int *)&pOVar3[1].monitor <= (int)index) {
            pAVar5 = (this->fields).OnInventoryChanged;
            if (pAVar5 != (Action *)0x0) {
              (*(pAVar5->fields)._._.invoke_impl)
                        ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
            }
            return;
          }
          if (*(uint *)&pOVar3[1].monitor <= index) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pOVar7 = pOVar3[1].klass;
          if (pOVar7 == (Object__Class *)0x0) break;
          if (*(uint *)&(pOVar7->_0).namespaze <= index) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar8 = *(longlong *)((longlong)&(pOVar7->_0).image + lVar4);
          if (lVar8 == 0) break;
          if (*(int *)(lVar8 + 0x10) == itemID) {
            pDVar2 = (pPVar1->fields).repository;
            if (pDVar2 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) break;
            this_00 = (List_1_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,1,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                );
            if (this_00 == (List_1_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_)
            ;
          }
          index = index + 1;
          lVar4 = lVar4 + 8;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Setup(EventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_Setup
               (PlayerShopInventoryRepository *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ClientShopRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._playerInventoryRepository_k__BackingField == (PlayerInventoryRepository *)0x0)
  {
    this_00 = (PlayerInventoryRepository *)FUN_?(TypeInfo__PlayerInventoryRepository);
    PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._playerInventoryRepository_k__BackingField = this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._playerInventoryRepository_k__BackingField >> 0xc);
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
  if ((this->fields)._clientShopRepository_k__BackingField == (ClientShopRepository *)0x0) {
    this_01 = (ClientShopRepository *)FUN_?(TypeInfo__ClientShopRepository);
    ClientShopRepository::ClientShopRepository__ctor(this_01,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._clientShopRepository_k__BackingField = this_01;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._clientShopRepository_k__BackingField >> 0xc);
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
  return;
}


/* Int32 ShopCategoryItemCount(InventoryCategoryType) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
        PlayerShopInventoryRepository::PlayerShopInventoryRepository_ShopCategoryItemCount
                  (PlayerShopInventoryRepository *this,InventoryCategoryType__Enum category,
                  MethodInfo *method)

{
  pCVar1 = (this->fields)._clientShopRepository_k__BackingField;
  if (pCVar1 != (ClientShopRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pCVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        return *(int32_t *)&pOVar2[1].monitor;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void SwapInventoryItemSlotPositions(InventoryItem, InventoryItem) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_SwapInventoryItemSlotPositions
               (PlayerShopInventoryRepository *this,InventoryItem *source,InventoryItem *destination
               ,MethodInfo *method)

{
  if (((this->fields)._playerInventoryRepository_k__BackingField != (PlayerInventoryRepository *)0x0
      ) && (source != (InventoryItem *)0x0)) {
    iVar1 = (source->fields).slotPosition;
    if (destination != (InventoryItem *)0x0) {
      (source->fields).slotPosition = (destination->fields).slotPosition;
      (destination->fields).slotPosition = iVar1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateItemData(Int32, Int32, Byte[]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_UpdateItemData
               (PlayerShopInventoryRepository *this,int32_t itemID,int32_t itemCategoryID,
               Byte__Array *data,MethodInfo *method)

{
  this_00 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (this_00 == (PlayerInventoryRepository *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = PlayerInventoryRepository::PlayerInventoryRepository_GetInventoryItem
                     (this_00,itemID,itemCategoryID,(MethodInfo *)0x0);
  if (pIVar2 != (InventoryItem *)0x0) {
    bVar3 = iRam_? != 0;
    (pIVar2->fields).data = data;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pIVar2->fields).data >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    (pIVar2->fields).hasData = 1;
  }
  return;
}


/* Void UpdatePlayerShopInventoryID(Int32, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
               (PlayerShopInventoryRepository *this,int32_t itemID,int32_t shopInventoryID,
               MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 != (PlayerInventoryRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pPVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,1,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                         );
      uVar3 = 0;
      if (pOVar2 != (Object *)0x0) {
        lVar4 = 0x20;
        while( true ) {
          if (*(int *)&pOVar2[1].monitor <= (int)uVar3) {
            return;
          }
          if (*(uint *)&pOVar2[1].monitor <= uVar3) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pOVar6 = pOVar2[1].klass;
          if (pOVar6 == (Object__Class *)0x0) break;
          if (*(uint *)&(pOVar6->_0).namespaze <= uVar3) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar7 = *(longlong *)((longlong)&(pOVar6->_0).image + lVar4);
          if (lVar7 == 0) break;
          if (*(int *)(lVar7 + 0x10) == itemID) {
            lVar7 = FUN_?(pOVar2,uVar3);
            if (lVar7 == 0) break;
            *(int32_t *)(lVar7 + 0x50) = shopInventoryID;
          }
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 8;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlayerShopInventoryRepository() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository__ctor
               (PlayerShopInventoryRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ClientShopRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).lastKnownInventoryVersion = -1;
  (this->fields).ItemLoadingTick = -3.4028235e+38;
  this_00 = (PlayerInventoryRepository *)FUN_?(TypeInfo__PlayerInventoryRepository);
  PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._playerInventoryRepository_k__BackingField = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._playerInventoryRepository_k__BackingField >> 0xc);
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
  this_01 = (ClientShopRepository *)FUN_?(TypeInfo__ClientShopRepository);
  ClientShopRepository::ClientShopRepository__ctor(this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._clientShopRepository_k__BackingField = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._clientShopRepository_k__BackingField >> 0xc);
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
  return;
}


/* Dictionary`2[InventoryCategoryType,System.String] get_InventoryCategories() */

Dictionary_2_InventoryCategoryType_System_String_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_get_InventoryCategories
          (PlayerShopInventoryRepository *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 != (PlayerInventoryRepository *)0x0) {
    return (pPVar1->fields).categories;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar3 = (Dictionary_2_InventoryCategoryType_System_String_ *)(*pcVar2)();
  return pDVar3;
}


/* Dictionary`2[InventoryCategoryType,System.String] get_ShopCategories() */

Dictionary_2_InventoryCategoryType_System_String_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_get_ShopCategories
          (PlayerShopInventoryRepository *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._clientShopRepository_k__BackingField;
  if (pCVar1 != (ClientShopRepository *)0x0) {
    return (pCVar1->fields).categories;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar3 = (Dictionary_2_InventoryCategoryType_System_String_ *)(*pcVar2)();
  return pDVar3;
}

