
/* Void AddItem(InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_AddItem
               (PlayerInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Item_in_inventory_with_category_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((item != (InventoryItem *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).repository,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(item->fields).itemCategoryID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Item_in_inventory_with_category_;
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
      return;
    }
    this_01 = (this->fields).repository;
    if ((this_01 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) &&
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                             (item->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                            ),
       pMVar6 = MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_,
       pOVar5 != (Object *)0x0)) {
      pOVar7 = pOVar5[1].klass;
      piVar8 = (int *)((longlong)&pOVar5[1].monitor + 4);
      *piVar8 = *piVar8 + 1;
      if (pOVar7 == (Object__Class *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = *(uint *)&pOVar5[1].monitor;
      if (uVar9 < *(uint *)&(pOVar7->_0).namespaze) {
        *(uint *)&pOVar5[1].monitor = uVar9 + 1;
      }
      else {
        uVar9 = *(uint *)&pOVar5[1].monitor;
        FUN_?(pOVar5,uVar9 + 1,
                      (pMVar6->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pOVar7,unaff_RDI);
        pOVar7 = pOVar5[1].klass;
        *(uint *)&pOVar5[1].monitor = uVar9 + 1;
        if (pOVar7 == (Object__Class *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(uint *)&(pOVar7->_0).namespaze <= uVar9) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar10 = iRam_? != 0;
      (&(pOVar7->_0).byval_arg.data)[(int)uVar9].typeHandle = (Il2CppMetadataTypeHandle)item;
      if (bVar10) {
        uVar9 = (uint)((ulonglong)(&(pOVar7->_0).byval_arg.data + (int)uVar9) >> 0xc);
        puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar12 = *puVar11;
          LOCK();
          uVar13 = *puVar11;
          if (uVar12 == uVar13) {
            *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar12 != uVar13);
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* InventoryItem AddPurchasedItem(ShopItem) */

InventoryItem *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_AddPurchasedItem
          (PlayerInventoryRepository *this,ShopItem *purchasedItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repository;
  if (((purchasedItem != (ShopItem *)0x0) &&
      (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0)) &&
     (pLVar1 = (List_1_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                          (purchasedItem->fields).itemCategoryID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                         ), pLVar1 != (List_1_System_Object_ *)0x0)) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = pLVar1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                             ), bVar10 != 0) {
      if ((InventoryItem *)LStack_9._current == (InventoryItem *)0x0) goto code_?;
      if (((InventoryItem__Fields *)((longlong)LStack_9._current + 0x10))->itemID ==
          (purchasedItem->fields).itemID) {
        ((InventoryItem__Fields *)((longlong)LStack_9._current + 0x10))->purchased = 1;
        return (InventoryItem *)LStack_9._current;
      }
    }
    pIVar11 = (InventoryItem *)FUN_?(TypeInfo__InventoryItem);
    InventoryItem::InventoryItem__ctor_3(pIVar11,purchasedItem,(MethodInfo *)0x0);
    FUN_?(pLVar1,pIVar11);
    if (pIVar11 != (InventoryItem *)0x0) {
      (pIVar11->fields).slotPosition = (pLVar1->fields)._size + -1;
      return pIVar11;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  pIVar11 = (InventoryItem *)(*pcVar12)();
  return pIVar11;
}


/* Int32 CategoryItemCount(Int32) */

int32_t Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_CategoryItemCount
                  (PlayerInventoryRepository *this,int32_t category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      return *(int32_t *)&pOVar1[1].monitor;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 CountItemsWithOriginalID(InventoryItem) */

int32_t Assembly-CSharp.dll::PlayerInventoryRepository::
        PlayerInventoryRepository_CountItemsWithOriginalID
                  (PlayerInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
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
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)item;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pOVar6 = object[1].klass;
    if (pOVar6 != (Object__Class *)0x0) {
      if (*(int *)&(pOVar6->_0).castClass == 0) {
        return 1;
      }
      this_00 = (this->fields).repository;
      if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                            *(int32_t *)((longlong)&(pOVar6->_0).name + 4),
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
        this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<InventoryItem,_bool>);
        mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                  (this_01,object,
                   MethodInfo__PlayerInventoryRepository____c__DisplayClass5_0___CountItemsWithOriginalID_b__0_InventoryItem_
                   ,(MethodInfo *)0x0);
        pMVar8 = 
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
          if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar8);
          }
        }
        if (pOVar7 == (Object *)0x0) {
          pSVar9 = (String *)func_?(&StringLiteral_source);
          pEVar10 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                              (pSVar9,(MethodInfo *)0x0);
          FUN_?(pEVar10,pMVar8);
code_?:
          uVar11 = FUN_?();
          FUN_?(uVar11,pMVar8);
code_?:
          FUN_?();
        }
        else {
          if (this_01 == (Predicate_1_Object_ *)0x0) {
            pSVar9 = (String *)func_?(&StringLiteral_predicate);
            pEVar10 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                                (pSVar9,(MethodInfo *)0x0);
            FUN_?(pEVar10,pMVar8);
            pcVar12 = (code *)swi(3);
            iVar13 = (*pcVar12)();
            return iVar13;
          }
          iVar14 = 0;
          pvVar15 = ((pMVar8->field7_0x38).rgctx_data)->rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
            pvVar15 = (void *)FUN_?(pvVar15);
          }
          lVar16 = FUN_?(0,pvVar15,pOVar7);
          while (lVar16 != 0) {
            cVar17 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
            if (cVar17 == '\0') {
              if (lVar16 != 0) {
                FUN_?(0,TypeInfo__System__IDisposable,lVar16);
              }
              return iVar14;
            }
            if (lVar16 == 0) goto code_?;
            pvVar15 = (pMVar8->field7_0x38).rgctx_data[3].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
              pvVar15 = (void *)FUN_?(pvVar15);
            }
            uVar11 = FUN_?(0,pvVar15,lVar16);
            cVar17 = (*(this_01->fields)._._.invoke_impl)
                              ((this_01->fields)._._.method_code,uVar11,(this_01->fields)._._.method
                              );
            if (cVar17 != '\0') {
              if (iVar14 == 0x7fffffff) goto code_?;
              iVar14 = iVar14 + 1;
            }
          }
        }
        FUN_?();
        FUN_?();
        pcVar12 = (code *)swi(3);
        iVar13 = (*pcVar12)();
        return iVar13;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  iVar13 = (*pcVar12)();
  return iVar13;
}


/* InventoryItem GetInventoryItem(Int32, Int32) */

InventoryItem *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_GetInventoryItem
          (PlayerInventoryRepository *this,int32_t itemID,int32_t itemCategoryID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repository;
  if ((this_00 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) ||
     (pLVar1 = (List_1_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,itemCategoryID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                         ), pLVar1 == (List_1_System_Object_ *)0x0)) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = pLVar1;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                        );
      if (bVar10 == 0) {
        return (InventoryItem *)0x0;
      }
      if ((InventoryItem *)LStack_9._current == (InventoryItem *)0x0) break;
      if (((InventoryItem__Fields *)((longlong)LStack_9._current + 0x10))->itemID == itemID) {
        return (InventoryItem *)LStack_9._current;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  pIVar12 = (InventoryItem *)(*pcVar11)();
  return pIVar12;
}


/* Boolean GetItemByWorldObjectTypeInCategory(InventoryCategoryType, WorldObjectType, InventoryItem
   ByRef) */

bool Assembly-CSharp.dll::PlayerInventoryRepository::
     PlayerInventoryRepository_GetItemByWorldObjectTypeInCategory
               (PlayerInventoryRepository *this,InventoryCategoryType__Enum inventoryCategory,
               WorldObjectType__Enum wo,InventoryItem **item,MethodInfo *method)

{
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
  DStack_1._dictionary =
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentValue = (Object *)0x0;
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
    this_02 = (List_1_System_Object_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_02,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
              );
    uVar2 = 0;
    if (this_02 != (List_1_System_Object_ *)0x0) {
      do {
        uVar3 = (this_02->fields)._size;
        if ((int)uVar3 <= (int)uVar2) {
          *item = (InventoryItem *)0x0;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)item >> 0xc);
            puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar5 = *puVar4;
              LOCK();
              uVar6 = *puVar4;
              if (uVar5 == uVar6) {
                *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (uVar5 != uVar6);
          }
          return 0;
        }
        if (uVar3 <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pOVar9 = (this_02->fields)._items;
        if (pOVar9 == (Object__Array *)0x0) break;
        if ((uint)pOVar9->max_length <= uVar2) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        if (pOVar9->vector[(int)uVar2] == (Object *)0x0) break;
        if (*(char *)&pOVar9->vector[(int)uVar2][3].monitor != '\0') {
          lVar10 = FUN_?(this_02,uVar2);
          if (lVar10 == 0) break;
          buffer = *(Byte__Array **)(lVar10 + 0x30);
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
                    (&DStack_11,this_05,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                    );
          DStack_1._dictionary =
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)DStack_11._dictionary;
          DStack_1._index = DStack_11._index;
          DStack_1._version = DStack_11._version;
          DStack_1._currentValue = DStack_11._currentValue;
          while (bVar8 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[UnityEngine
                         ::UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__MoveNext
                                   (&DStack_1,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                                   ), bVar8 != 0) {
            if (DStack_1._currentValue == (Object *)0x0) goto code_?;
            if (*(WorldObjectType__Enum *)&DStack_1._currentValue[6].monitor == wo) {
              if (this_02 != (List_1_System_Object_ *)0x0) {
                pIVar12 = (InventoryItem *)FUN_?(this_02,uVar2);
                *item = pIVar12;
                func_?(item);
                return 1;
              }
              goto code_?;
            }
          }
        }
        uVar2 = uVar2 + 1;
      } while( true );
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* List`1[InventoryItem] GetItemsInCategory(InventoryCategoryType) */

List_1_InventoryItem_ *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategory
          (PlayerInventoryRepository *this,InventoryCategoryType__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
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
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
    pLVar1 = (List_1_InventoryItem_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pLVar1,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
              );
    if (pLVar1 != (List_1_InventoryItem_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Reverse
                ((List_1_System_Object_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
      return pLVar1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_InventoryItem_ *)(*pcVar2)();
  return pLVar1;
}


/* List`1[InventoryItem] GetItemsInCategorySlow(String) */

List_1_InventoryItem_ *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategorySlow
          (PlayerInventoryRepository *this,String *category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                 );
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
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).categories;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key = 0;
    DStack_11._current._4_4_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_5 = pDVar1;
    DStack_11._dictionary = pDVar1;
    do {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_11,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                        );
      if (bVar12 == 0) goto code_?;
    } while (((String *)DStack_11._current.value != category) &&
            (((((String *)DStack_11._current.value == (String *)0x0 || (category == (String *)0x0))
              || (((String__Fields *)((longlong)DStack_11._current.value + 0x10))->_stringLength !=
                  (category->fields)._stringLength)) ||
             (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)
                                 &((String__Fields *)((longlong)DStack_11._current.value + 0x10))->
                                  _firstChar,(uint8_t *)&(category->fields)._firstChar,
                                 (longlong)
                                 ((String__Fields *)((longlong)DStack_11._current.value + 0x10))->
                                 _stringLength * 2,(MethodInfo *)0x0), bVar12 == 0))));
    key = DStack_11._current.key;
code_?:
    this_00 = (this->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             );
      pLVar13 = (List_1_InventoryItem_ *)
               FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)pLVar13,(IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                );
      if (pLVar13 != (List_1_InventoryItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Reverse
                  ((List_1_System_Object_ *)pLVar13,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
        return pLVar13;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pLVar13 = (List_1_InventoryItem_ *)(*pcVar14)();
  return pLVar13;
}


/* Int32 HighestSlotIndex(InventoryCategoryType) */

int32_t Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_HighestSlotIndex
                  (PlayerInventoryRepository *this,InventoryCategoryType__Enum category,
                  MethodInfo *method)

{
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
  pDVar1 = (this->fields).repository;
  uVar2 = 0;
  if (pDVar1 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    lVar3 = 0x20;
    iVar4 = 1;
    while (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,category,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                              ), pOVar5 != (Object *)0x0) {
      if (*(int *)&pOVar5[1].monitor <= (int)uVar2) {
        return iVar4;
      }
      pDVar1 = (this->fields).repository;
      if ((pDVar1 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) ||
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,category,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             ), pOVar5 == (Object *)0x0)) break;
      if (*(uint *)&pOVar5[1].monitor <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pOVar8 = pOVar5[1].klass;
      if (pOVar8 == (Object__Class *)0x0) break;
      if (*(uint *)&(pOVar8->_0).namespaze <= uVar2) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      lVar9 = *(longlong *)((longlong)&(pOVar8->_0).image + lVar3);
      if (lVar9 == 0) break;
      iVar10 = *(int *)(lVar9 + 0x54);
      pDVar1 = (this->fields).repository;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (iVar10 <= iVar4) {
        iVar10 = iVar4;
      }
      iVar4 = iVar10;
      if (pDVar1 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void RemoveItem(InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem
               (PlayerInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
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
  if ((item != (InventoryItem *)0x0) &&
     (this_00 = (this->fields).repository,
     this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0)) {
    this_01 = (List_1_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                        );
    pMVar1 = MethodInfo__System__Collections__Generic__List<InventoryItem>__Remove_InventoryItem_;
    if (this_01 != (List_1_System_Object_ *)0x0) {
      index = mscorlib.dll::System::Array::Array_IndexOf_69
                        ((this_01->fields)._items,(Object *)item,0,(this_01->fields)._size,
                         (MethodInfo__System__Collections__Generic__List<InventoryItem>__Remove_InventoryItem_
                          ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
      if (index < 0) {
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt(this_01,index,pMVar1->klass->rgctx_data[0x2b].method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem_1
               (PlayerInventoryRepository *this,int32_t itemID,MethodInfo *method)

{
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
  pDVar1 = (this->fields).repository;
  if (pDVar1 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                       );
    index = 0;
    if (pOVar2 != (Object *)0x0) {
      lVar3 = 0x20;
      while( true ) {
        if (*(int *)&pOVar2[1].monitor <= (int)index) {
          return;
        }
        if (*(uint *)&pOVar2[1].monitor <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pOVar5 = pOVar2[1].klass;
        if (pOVar5 == (Object__Class *)0x0) break;
        if (*(uint *)&(pOVar5->_0).namespaze <= index) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar6 = *(longlong *)((longlong)&(pOVar5->_0).image + lVar3);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x10) == itemID) {
          pDVar1 = (this->fields).repository;
          if (pDVar1 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) break;
          this_00 = (List_1_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                              );
          if (this_00 == (List_1_System_Object_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    (this_00,index,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_);
        }
        index = index + 1;
        lVar3 = lVar3 + 8;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SwapItemSlotPositions(InventoryItem, InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_SwapItemSlotPositions
               (PlayerInventoryRepository *this,InventoryItem *from,InventoryItem *to,
               MethodInfo *method)

{
  if (from != (InventoryItem *)0x0) {
    uVar1 = (from->fields).slotPosition;
    this = (PlayerInventoryRepository *)(ulonglong)uVar1;
    if (to != (InventoryItem *)0x0) {
      (from->fields).slotPosition = (to->fields).slotPosition;
      (to->fields).slotPosition = uVar1;
      return;
    }
  }
  FUN_?(this);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateItemData(Int32, Int32, Byte[]) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_UpdateItemData
               (PlayerInventoryRepository *this,int32_t itemID,int32_t itemCategoryID,
               Byte__Array *data,MethodInfo *method)

{
  pIVar1 = PlayerInventoryRepository_GetInventoryItem(this,itemID,itemCategoryID,(MethodInfo *)0x0);
  if (pIVar1 != (InventoryItem *)0x0) {
    bVar2 = iRam_? != 0;
    (pIVar1->fields).data = data;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pIVar1->fields).data >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    (pIVar1->fields).hasData = 1;
  }
  return;
}


/* Void UpdateShopInventoryID(Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_UpdateShopInventoryID
               (PlayerInventoryRepository *this,int32_t itemID,int32_t shopInventoryID,
               MethodInfo *method)

{
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
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                       );
    uVar2 = 0;
    if (pOVar1 != (Object *)0x0) {
      lVar3 = 0x20;
      while( true ) {
        if (*(int *)&pOVar1[1].monitor <= (int)uVar2) {
          return;
        }
        if (*(uint *)&pOVar1[1].monitor <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pOVar5 = pOVar1[1].klass;
        if (pOVar5 == (Object__Class *)0x0) break;
        if (*(uint *)&(pOVar5->_0).namespaze <= uVar2) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar6 = *(longlong *)((longlong)&(pOVar5->_0).image + lVar3);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x10) == itemID) {
          lVar6 = FUN_?(pOVar1,uVar2);
          if (lVar6 == 0) break;
          *(int32_t *)(lVar6 + 0x50) = shopInventoryID;
        }
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 8;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PlayerInventoryRepository() */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository__ctor
               (PlayerInventoryRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Add_int__System__Collections__Generic__List<InventoryItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Advancedu000ALogic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pickups);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Blueprints);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cubeu000AModels);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Premiumu000AModels);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Dictionary__
            );
  (this->fields).repository = (Dictionary_2_System_Int32_List_1_InventoryItem_ *)this_02;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&this->fields >> 0xc);
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
  this_03 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Dictionary__
            );
  if (this_03 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    uVar6 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,1,
               (Object *)StringLiteral_Cubeu000AModels,(InsertionBehavior__Enum)uVar6,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
               ->klass->rgctx_data[0x22].method);
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,5,
               (Object *)StringLiteral_Premiumu000AModels,(InsertionBehavior__Enum)uVar6,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
               ->klass->rgctx_data[0x22].method);
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,7,
               (Object *)StringLiteral_Pickups,(InsertionBehavior__Enum)uVar6,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
               ->klass->rgctx_data[0x22].method);
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,8,
               (Object *)StringLiteral_Blueprints,(InsertionBehavior__Enum)uVar6,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
               ->klass->rgctx_data[0x22].method);
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,6,
               (Object *)StringLiteral_Logic,(InsertionBehavior__Enum)uVar6,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,10,
               (Object *)StringLiteral_Advancedu000ALogic,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
               ->klass->rgctx_data[0x22].method);
    (this->fields).categories = (Dictionary_2_InventoryCategoryType_System_String_ *)this_03;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields).categories >> 0xc);
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
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).categories;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                           UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                     (this_00,
                                      MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                                     ),
                 pDVar7 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)0x0)) {
      uStack_8 = (pDVar7->fields)._dictionary;
      puStack_9 = (undefined4 *)0x0;
      uStack_10 = 0;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&uStack_8 >> 0xc);
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
      if (uStack_8 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iStack_12 = (uStack_8->fields)._version;
      uStack_10 = 0;
      uStack_8._4_4_ = (undefined4)((ulonglong)uStack_8 >> 0x20);
      uStack_13 = (undefined4)uStack_8;
      uStack_14 = uStack_8._4_4_;
      uStack_15 = 0;
      uStack_16 = 0;
      uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      puStack_9 = &uStack_13;
      do {
        lVar2 = CONCAT44(uStack_14,uStack_13);
        if (lVar2 == 0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (iStack_12 != *(int *)(lVar2 + 0x2c)) {
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        do {
          if (lVar2 == 0) goto code_?;
          if (*(uint *)(lVar2 + 0x20) <= uStack_15) {
            return;
          }
          lVar17 = *(longlong *)(lVar2 + 0x18);
          lVar18 = (longlong)(int)uStack_15;
          uVar1 = uStack_15 + 1;
          if (lVar17 == 0) goto code_?;
          if (*(uint *)(lVar17 + 0x18) <= uStack_15) {
            uStack_15 = uVar1;
            FUN_?();
            goto code_?;
          }
          uStack_15 = uVar1;
        } while (*(int *)(lVar17 + 0x20 + lVar18 * 0x18) < 0);
        key = *(int32_t *)(lVar17 + 0x28 + lVar18 * 0x18);
        uStack_16 = CONCAT44(uStack_16._4_4_,key);
        this_04 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_04,MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
        this_01 = (this->fields).repository;
        if (this_01 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
code_?:
          FUN_?();
          uVar1 = uStack_15;
code_?:
          uStack_15 = uVar1;
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,(Object *)this_04,
                   (InsertionBehavior__Enum)
                   CONCAT71((int7)((ulonglong)
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Add_int__System__Collections__Generic__List<InventoryItem>_
                                   ->klass >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Add_int__System__Collections__Generic__List<InventoryItem>_
                   ->klass->rgctx_data[0x22].method);
      } while( true );
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

