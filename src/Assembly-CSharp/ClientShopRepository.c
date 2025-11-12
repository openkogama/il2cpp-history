
/* Void AddItem(ShopItem) */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_AddItem
               (ClientShopRepository *this,ShopItem *item,MethodInfo *method)

{
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
  if ((item != (ShopItem *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).repository,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(item->fields).itemCategoryID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
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
    if ((this_01 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) &&
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                             (item->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                            ),
       pMVar6 = MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_,
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


/* Int32 CategoryItemCount(InventoryCategoryType) */

int32_t Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_CategoryItemCount
                  (ClientShopRepository *this,InventoryCategoryType__Enum category,
                  MethodInfo *method)

{
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
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
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


/* String GetCategoryStringFromId(InventoryCategoryType) */

String * Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_GetCategoryStringFromId
                   (ClientShopRepository *this,InventoryCategoryType__Enum category,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
  ;
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).categories;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,category,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar4 < 0) {
    uVar5 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar5);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)0x0)
  {
    if (uVar4 < (uint)pDVar6->max_length) {
      return *(String **)&pDVar6->vector[(int)uVar4].value.y;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* Boolean GetItemByWorldObjectTypeInCategory(InventoryCategoryType, WorldObjectType, ShopItem
   ByRef) */

bool Assembly-CSharp.dll::ClientShopRepository::
     ClientShopRepository_GetItemByWorldObjectTypeInCategory
               (ClientShopRepository *this,InventoryCategoryType__Enum inventoryCategory,
               WorldObjectType__Enum wo,ShopItem **item,MethodInfo *method)

{
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
  DStack_1._dictionary =
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentValue = (Object *)0x0;
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_02 = (List_1_System_Object_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_02,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    uVar2 = 0;
    if (this_02 != (List_1_System_Object_ *)0x0) {
      while( true ) {
        uVar3 = (this_02->fields)._size;
        if ((int)uVar3 <= (int)uVar2) {
          *item = (ShopItem *)0x0;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)item >> 0xc);
            lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          return 0;
        }
        if (uVar3 <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pOVar10 = (this_02->fields)._items;
        if (pOVar10 == (Object__Array *)0x0) break;
        if ((uint)pOVar10->max_length <= uVar2) {
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        if (pOVar10->vector[(int)uVar2] == (Object *)0x0) break;
        buffer = pOVar10->vector[(int)uVar2][3].klass;
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
           (pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                     UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                     Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                               (this_01,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                               ),
           pDVar11 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0)) break;
        pDStack_12 = (pDVar11->fields)._dictionary;
        lStack_13 = 0;
        uStack_14 = 0;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&pDStack_12 >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        if (pDStack_12 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        lStack_13 = (ulonglong)(uint)(pDStack_12->fields)._version << 0x20;
        uStack_14 = 0;
        DStack_1._index = (undefined4)lStack_13;
        DStack_1._version = lStack_13._4_4_;
        DStack_1._currentValue = (Object *)0x0;
        DStack_1._dictionary =
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)pDStack_12;
        while (bVar9 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[UnityEngine
                       ::UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__MoveNext
                                 (&DStack_1,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                                 ), bVar9 != 0) {
          if (DStack_1._currentValue == (Object *)0x0) goto code_?;
          if (*(WorldObjectType__Enum *)&DStack_1._currentValue[6].monitor == wo) {
            if (this_02 != (List_1_System_Object_ *)0x0) {
              pSVar15 = (ShopItem *)FUN_?(this_02,uVar2);
              *item = pSVar15;
              func_?(item);
              return 1;
            }
            goto code_?;
          }
        }
        uVar2 = uVar2 + 1;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* List`1[ShopItem] GetItemsInCategory(InventoryCategoryType) */

List_1_ShopItem_ *
Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_GetItemsInCategory
          (ClientShopRepository *this,InventoryCategoryType__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                 );
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
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    pLVar1 = (List_1_ShopItem_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pLVar1,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    return pLVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_ShopItem_ *)(*pcVar2)();
  return pLVar1;
}


/* List`1[ShopItem] GetItemsInCategorySlow(String) */

List_1_ShopItem_ *
Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_GetItemsInCategorySlow
          (ClientShopRepository *this,String *category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                 );
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
    if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                             );
      pLVar13 = (List_1_ShopItem_ *)
               FUN_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)pLVar13,(IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                );
      if (pLVar13 != (List_1_ShopItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Reverse
                  ((List_1_System_Object_ *)pLVar13,
                   MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
        return pLVar13;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pLVar13 = (List_1_ShopItem_ *)(*pcVar14)();
  return pLVar13;
}


/* Boolean IsItemShopInventory(String, InventoryCategoryType) */

bool Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_IsItemShopInventory
               (ClientShopRepository *this,String *itemName,
               InventoryCategoryType__Enum inventoryCategory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                 );
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
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_01 = (List_1_System_Object_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_01,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    uVar1 = 0;
    if (this_01 != (List_1_System_Object_ *)0x0) {
      uVar2 = (this_01->fields)._size;
      lVar3 = 0x20;
      while( true ) {
        if ((int)uVar2 <= (int)uVar1) {
          return 0;
        }
        if (uVar2 <= uVar1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pOVar6 = (this_01->fields)._items;
        if (pOVar6 == (Object__Array *)0x0) break;
        if ((uint)pOVar6->max_length <= uVar1) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        lVar7 = *(longlong *)((longlong)pOVar6->vector + lVar3 + -0x20);
        if (lVar7 == 0) break;
        pSVar8 = *(String **)(lVar7 + 0x20);
        if ((pSVar8 == itemName) ||
           ((((pSVar8 != (String *)0x0 && (itemName != (String *)0x0)) &&
             ((pSVar8->fields)._stringLength == (itemName->fields)._stringLength)) &&
            (bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar8->fields)._firstChar,
                                (uint8_t *)&(itemName->fields)._firstChar,
                                (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar5 != 0)))) {
          return 1;
        }
        uVar1 = uVar1 + 1;
        lVar3 = lVar3 + 8;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void RemoveItem(ShopItem) */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_RemoveItem
               (ClientShopRepository *this,ShopItem *item,MethodInfo *method)

{
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
  if ((item != (ShopItem *)0x0) &&
     (this_00 = (this->fields).repository,
     this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0)) {
    this_01 = (List_1_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                        );
    pMVar1 = MethodInfo__System__Collections__Generic__List<ShopItem>__Remove_ShopItem_;
    if (this_01 != (List_1_System_Object_ *)0x0) {
      index = mscorlib.dll::System::Array::Array_IndexOf_69
                        ((this_01->fields)._items,(Object *)item,0,(this_01->fields)._size,
                         (MethodInfo__System__Collections__Generic__List<ShopItem>__Remove_ShopItem_
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


/* Void ReorganizeBySlotPositions() */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
               (ClientShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<ShopItem>_MethodInfo__System__Linq__Enumerable__OrderBy<ShopItem,_int>_System__Collections__Generic__IEnumerable<ShopItem>__System__Func<ShopItem,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<ShopItem>_MethodInfo__System__Linq__Enumerable__ToList<ShopItem>_System__Collections__Generic__IEnumerable<ShopItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<ShopItem,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ClientShopRepository____c___ReorganizeBySlotPositions_b__11_0_ShopItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ClientShopRepository____c);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_System::Collections::Generic::List<ShopItem>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).repository;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDStack_3 = (pDVar1->fields)._dictionary;
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
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_7 = pDStack_3;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_11 = (pDStack_3->fields)._version;
  uStack_5 = 0;
  uStack_12 = 0;
  apIStack_13[0] = (IEnumerable_1_System_Object_ *)0x0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_4 = &pDStack_3;
code_?:
  if (pDStack_3 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    if (iStack_11 == (pDStack_3->fields)._version) {
      do {
        if (pDStack_3 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_3->fields)._count <= uStack_12) {
          return;
        }
        pDVar14 = (pDStack_3->fields)._entries;
        lVar15 = (longlong)(int)uStack_12;
        uVar6 = uStack_12 + 1;
        if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar14->max_length <= uStack_12) {
          uStack_12 = uVar6;
          FUN_?();
          goto code_?;
        }
        uStack_12 = uVar6;
      } while ((&pDVar14->vector[0].hashCode)[lVar15 * 6] < 0);
      apIStack_13[0] =
           *(IEnumerable_1_System_Object_ **)((longlong)&pDVar14->vector[0].key + lVar15 * 0x18 + 8);
      func_?(apIStack_13);
      source = apIStack_13[0];
      if (*(int *)&(TypeInfo__ClientShopRepository____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = TypeInfo__ClientShopRepository____c->static_fields->__9__11_0;
      if (this_01 == (Func_2_ShopItem_Int32_ *)0x0) {
        if (*(int *)&(TypeInfo__ClientShopRepository____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__ClientShopRepository____c->static_fields->__9;
        this_01 = (Func_2_ShopItem_Int32_ *)FUN_?(TypeInfo__System__Func<ShopItem,_int>);
        mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                  ((Func_2_Object_Int32Enum_ *)this_01,(Object *)object,
                   MethodInfo__ClientShopRepository____c___ReorganizeBySlotPositions_b__11_0_ShopItem_
                   ,(MethodInfo *)0x0);
        TypeInfo__ClientShopRepository____c->static_fields->__9__11_0 = this_01;
        func_?(&TypeInfo__ClientShopRepository____c->static_fields->__9__11_0);
      }
      source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                            (source,(Func_2_Object_Int32_ *)this_01,
                             System__Linq__IOrderedEnumerable<ShopItem>_MethodInfo__System__Linq__Enumerable__OrderBy<ShopItem,_int>_System__Collections__Generic__IEnumerable<ShopItem>__System__Func<ShopItem,_int>_
                            );
      pLVar16 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_10
                         ((IEnumerable_1_System_Object_ *)source_00,
                          System__Collections__Generic__List<ShopItem>_MethodInfo__System__Linq__Enumerable__ToList<ShopItem>_System__Collections__Generic__IEnumerable<ShopItem>_
                         );
      iVar17 = 0;
      if (pLVar16 != (List_1_System_Object_ *)0x0) goto code_?;
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_?:
  for (; iVar17 < (pLVar16->fields)._size; iVar17 = iVar17 + 1) {
    lVar15 = FUN_?(pLVar16,iVar17);
    if (lVar15 == 0) goto code_?;
    *(int *)(lVar15 + 0x40) = iVar17;
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar6 = uStack_12;
code_?:
  uStack_12 = uVar6;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
  goto code_?;
}


/* ClientShopRepository() */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository__ctor
               (ClientShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Add_int__System__Collections__Generic__List<ShopItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Dictionary__
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
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
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
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Dictionary__
            );
  (this->fields).repository = (Dictionary_2_System_Int32_List_1_ShopItem_ *)this_02;
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
                  FUN_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_04,MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
        this_01 = (this->fields).repository;
        if (this_01 == (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
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
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Add_int__System__Collections__Generic__List<ShopItem>_
                                   ->klass >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Add_int__System__Collections__Generic__List<ShopItem>_
                   ->klass->rgctx_data[0x22].method);
      } while( true );
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

