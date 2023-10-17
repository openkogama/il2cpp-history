
/* Void AddItem(ShopItem) */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_AddItem
               (ClientShopRepository *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_);
    func_?(&StringLiteral_Item_in_inventory_with_category_);
    cRam_? = '\x01';
  }
  if (item != (ShopItem *)0x0) {
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).repository;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)(item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Item_in_inventory_with_category_,(MethodInfo *)0x0);
        return;
      }
      this_01 = (this->fields).repository;
      if (this_01 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
        this_02 = (List_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                             (item->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                            );
        if (this_02 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_02,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 CategoryItemCount(InventoryCategoryType) */

int32_t Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_CategoryItemCount
                  (ClientShopRepository *this,InventoryCategoryType__Enum category,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,category,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      return (int32_t)pOVar1[1].monitor;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* String GetCategoryStringFromId(InventoryCategoryType) */

String * Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_GetCategoryStringFromId
                   (ClientShopRepository *this,InventoryCategoryType__Enum category,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).categories;
  if (this_00 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,category,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                       );
    return pSVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Boolean GetItemByWorldObjectTypeInCategory(InventoryCategoryType, WorldObjectType, ShopItem
   ByRef) */

bool Assembly-CSharp.dll::ClientShopRepository::
     ClientShopRepository_GetItemByWorldObjectTypeInCategory
               (ClientShopRepository *this,InventoryCategoryType__Enum inventoryCategory,
               WorldObjectType__Enum wo,ShopItem **item,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                   );
    func_?(&TypeInfo__KoGaMaPackageClient);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                            inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_02,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         collection,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                );
      index = (MethodInfo *)0x0;
      pLStack_7 = this_02;
      while( true ) {
        if ((this_02->fields)._size <= (int)index) {
          *item = (ShopItem *)0x0;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        method_00 = index;
        RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_02,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
        if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
        buffer = *(Byte__Array **)((int)RVar8 + 0x1c);
        method_01 = (MethodInfo *)&UNK_?;
        pBStack_9 = (BytePacker *)func_?();
        if (pBStack_9 == (BytePacker *)0x0) break;
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (pBStack_9,buffer,(MethodInfo *)0x0);
        this_03 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
        if (this_03 == (KoGaMaPackageClient *)0x0) break;
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_03,pBStack_9,0,(MethodInfo *)0x0);
        KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_03,(MethodInfo *)0x0);
        KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_03,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)(this_03->fields).worldObjects;
        if (this_01 ==
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0) break;
        this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                            (this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            );
        if (this_04 ==
            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
             *)0x0) break;
        pDVar10 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)&stack0xffffffb8,this_04,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                           );
        uStack_11 = 0;
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar10->_dictionary;
        DStack_6._index = pDVar10->_index;
        DStack_6._version = pDVar10->_version;
        DStack_6._currentValue = pDVar10->_currentValue;
        uStack_1 = 1;
        pDStack_12 = &DStack_6;
        while( true ) {
          bVar13 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                            );
          if (bVar13 == 0) break;
          if (DStack_6._currentValue == (Object *)0x0) goto code_?;
          if (DStack_6._currentValue[10].monitor == (MonitorData *)wo) {
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_02,(int32_t)index,
                               MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_
                              );
            *item = (ShopItem *)RVar8;
            func_?();
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                       ,method_01);
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        index = (MethodInfo *)((int)&index->methodPointer + 1);
      }
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  bVar13 = (*pcVar15)();
  return bVar13;
}


/* List`1[ShopItem] GetItemsInCategory(InventoryCategoryType) */

List_1_ShopItem_ *
Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_GetItemsInCategory
          (ClientShopRepository *this,InventoryCategoryType__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,category,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_01,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         collection,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                );
      return (List_1_ShopItem_ *)this_01;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_ShopItem_ *)(*pcVar1)();
  return pLVar2;
}


/* List`1[ShopItem] GetItemsInCategorySlow(String) */

List_1_ShopItem_ *
Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_GetItemsInCategorySlow
          (ClientShopRepository *this,String *category,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<InventoryCategoryType,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<InventoryCategoryType,_System::String>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  pOStack_7 = (Object *)0x0;
  method_00 = (MethodInfo *)(this->fields).categories;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_System_Object_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar8->_dictionary;
    DStack_6._version = pDVar8->_version;
    DStack_6._index = pDVar8->_index;
    DStack_6._current.key = (int32_t)(pDVar8->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_6;
    do {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                        );
      pOVar13 = (Object *)0x0;
      if (bVar12 == 0) goto code_?;
      pOStack_14 = (Object *)DStack_6._current.key;
      bVar12 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)DStack_6._current.value,category,(MethodInfo *)0x0);
    } while (bVar12 == 0);
    pOStack_7 = pOStack_14;
    pOVar13 = pOStack_14;
code_?:
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (this->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                          (Int32Enum__Enum)pOVar13,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                         );
      this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
      if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  (this_01,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           pOVar13,
                   MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Reverse
                  (this_01,MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_ShopItem_ *)this_01;
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pLVar17 = (List_1_ShopItem_ *)(*pcVar16)();
  return pLVar17;
}


/* Boolean IsItemShopInventory(String, InventoryCategoryType) */

bool Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_IsItemShopInventory
               (ClientShopRepository *this,String *itemName,
               InventoryCategoryType__Enum inventoryCategory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                            inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_01,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         collection,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                );
      index = 0;
      while( true ) {
        if ((this_01->fields)._size <= index) {
          return 0;
        }
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_01,index,
                           MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
        if (RVar1 == (RegexCharClass_SingleRange)0x0) break;
        bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (*(String **)((int)RVar1 + 0x14),itemName,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return 1;
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void RemoveItem(ShopItem) */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_RemoveItem
               (ClientShopRepository *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__Remove_ShopItem_);
    cRam_? = '\x01';
  }
  if ((item != (ShopItem *)0x0) &&
     (this_00 = (this->fields).repository,
     this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0)) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                        );
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                (this_01,(RegexCharClass_SingleRange)item,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__Remove_ShopItem_);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReorganizeBySlotPositions() */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
               (ClientShopRepository *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  _Stack_c.genericMethod = (Il2CppGenericMethod *)&DAT_?;
  IStack_2.rgctxDataDummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->rgctxDataDummy = &IStack_2;
  ppIStack_3 = (Il2CppType **)&stack0xffffffb8;
  ppIVar4 = (Il2CppType **)&stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Values__
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<ShopItem>_MethodInfo__System__Linq__Enumerable__OrderBy<ShopItem,_int>_System__Collections__Generic__IEnumerable<ShopItem>__System__Func<ShopItem,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<ShopItem>_MethodInfo__System__Linq__Enumerable__ToList<ShopItem>_System__Collections__Generic__IEnumerable<ShopItem>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__get_Current__
                   );
    func_?(&TypeInfo__System__Func<ShopItem,_int>);
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    func_?(&
                    MethodInfo__ClientShopRepository____c___ReorganizeBySlotPositions_b__11_0_ShopItem_
                   );
    func_?(&TypeInfo__ClientShopRepository____c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_System::Collections::Generic::List<ShopItem>_>__GetEnumerator__
                   );
    cRam_? = '\x01';
    ppIVar4 = ppIStack_3;
  }
  ppIStack_3 = ppIVar4;
  DStack_5._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_5._index = 0;
  DStack_5._version = 0;
  DStack_5._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).repository;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      method_00 = (MethodInfo *)&stack0xffffffd4;
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method_00,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_System::Collections::Generic::List<ShopItem>_>__GetEnumerator__
                         );
      DStack_5._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_dictionary;
      DStack_5._index = pDVar6->_index;
      DStack_5._version = pDVar6->_version;
      DStack_5._currentValue = pDVar6->_currentValue;
      pIStack_7 = (InvokerMethod)0x0;
      uStack_1 = 1;
      pDStack_8 = &DStack_5;
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_5,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_5,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = IStack_2;
          return;
        }
        pIStack_10 = (Il2CppType *)DStack_5._currentValue;
        if ((TypeInfo__ClientShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__ClientShopRepository____c);
        }
        this_02 = TypeInfo__ClientShopRepository____c->static_fields->__9__11_0;
        if (this_02 == (Func_2_ShopItem_Int32_ *)0x0) {
          if ((TypeInfo__ClientShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__ClientShopRepository____c);
          }
          object = TypeInfo__ClientShopRepository____c->static_fields->__9;
          this_02 = (Func_2_ShopItem_Int32_ *)func_?(TypeInfo__System__Func<ShopItem,_int>)
          ;
          if (this_02 == (Func_2_ShopItem_Int32_ *)0x0) break;
          mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
          Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                    ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_02,
                     (Object *)object,
                     MethodInfo__ClientShopRepository____c___ReorganizeBySlotPositions_b__11_0_ShopItem_
                     ,(MethodInfo *)0x0);
          TypeInfo__ClientShopRepository____c->static_fields->__9__11_0 = this_02;
          DStack_5._dictionary = (Dictionary_2_System_Object_System_Object_ *)this_02;
          func_?();
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                           ((IEnumerable_1_System_Object_ *)pIStack_10,
                            (Func_2_Object_Single_ *)this_02,
                            System__Linq__IOrderedEnumerable<ShopItem>_MethodInfo__System__Linq__Enumerable__OrderBy<ShopItem,_int>_System__Collections__Generic__IEnumerable<ShopItem>__System__Func<ShopItem,_int>_
                           );
        method_00 = (MethodInfo *)&UNK_?;
        this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                            ((IEnumerable_1_System_Object_ *)source,
                             System__Collections__Generic__List<ShopItem>_MethodInfo__System__Linq__Enumerable__ToList<ShopItem>_System__Collections__Generic__IEnumerable<ShopItem>_
                            );
        index = 0;
        if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        for (; index < (this_03->fields)._size; index = index + 1) {
          RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_03,index,
                             MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_
                            );
          if (RVar11 == (RegexCharClass_SingleRange)0x0) goto code_?;
          *(int *)((int)RVar11 + 0x28) = index;
        }
      } while( true );
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* ClientShopRepository() */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository__ctor
               (ClientShopRepository *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  puStack_1 = &stack0xffffffb8;
  puVar2 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Add_int__System__Collections__Generic__List<ShopItem>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                   );
    in_stack_3 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ShopItem>);
    func_?(&StringLiteral_Advancedu000ALogic);
    func_?(&StringLiteral_Pickups);
    func_?(&StringLiteral_Blueprints);
    func_?(&StringLiteral_Logic);
    func_?(&StringLiteral_Premiumu000AModels);
    cRam_? = '\x01';
    puVar2 = puStack_1;
  }
  puStack_1 = puVar2;
  this_01 = (Dictionary_2_System_Int32_List_1_ShopItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>
                           );
  if (this_01 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Dictionary__
              );
    (this->fields).repository = this_01;
    func_?(&this->fields,this_01);
    pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>
                            );
    if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Dictionary__
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar4,(Object *)0x5,(Object *)StringLiteral_Premiumu000AModels,
                 MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar4,(Object *)0x7,(Object *)StringLiteral_Pickups,
                 MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar4,(Object *)0x8,(Object *)StringLiteral_Blueprints,
                 MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar4,(Object *)0x6,(Object *)StringLiteral_Logic,
                 MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                );
      pDVar5 = pDVar4;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar4,(Object *)0xa,(Object *)StringLiteral_Advancedu000ALogic,
                 MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                );
      (this->fields).categories = (Dictionary_2_InventoryCategoryType_System_String_ *)pDVar4;
      func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_3);
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(this->fields).categories;
      if (this_00 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                            );
        if (this_02 !=
            (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
             *)0x0) {
          pDVar6 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             (&DStack_7,
                              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)this_02,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pDVar6->_currentValue;
          DStack_7._version = 0;
          DStack_7._currentValue = (Object *)&stack0xffffffc4;
          while( true ) {
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                              ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                *)&stack0xffffffc4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                              );
            if (bVar8 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&stack0xffffffc4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = pDVar5;
              return;
            }
            pMStack_9 = method_00;
            this_03 = (LowLevelList_1_System_Object_ *)func_?();
            if (this_03 == (LowLevelList_1_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
            LowLevelList_1_System_Object___ctor
                      (this_03,MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
            pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).repository;
            if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar4,(Object *)pMStack_9,(Object *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Add_int__System__Collections__Generic__List<ShopItem>_
                      );
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

