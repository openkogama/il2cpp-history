
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
    pDVar1 = (this->fields).repository;
    if (pDVar1 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Item_in_inventory_with_category_,(MethodInfo *)0x0);
        return;
      }
      pDVar1 = (this->fields).repository;
      if (pDVar1 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
        this_00 = (List_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                             (item->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                            );
        if (this_00 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_00,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<ShopItem>__Add_ShopItem_);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
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
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
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
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)this_02,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    index = 0;
    pLStack_7 = this_02;
    while (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_02->fields)._size <= index) {
        *item = (ShopItem *)0x0;
        func_?(item,0);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_02,index,
                         MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
      if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
      buffer = *(Byte__Array **)((int)RVar8 + 0x1c);
      this_03 = (BytePacker *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (this_03,buffer,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&UNK_?;
      this_04 = (KoGaMaPackageClient *)func_?();
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_04,this_03,0,(MethodInfo *)0x0);
      if (this_04 == (KoGaMaPackageClient *)0x0) break;
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_04,(MethodInfo *)0x0);
      KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_04,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this_04->fields).worldObjects;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) break;
      this_05 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                          );
      if (this_05 ==
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) break;
      pDVar9 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffbc,this_05,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar9->_dictionary;
      DStack_6._index = pDVar9->_index;
      DStack_6._version = pDVar9->_version;
      DStack_6._currentValue = pDVar9->_currentValue;
      uStack_1 = 1;
      pDStack_11 = &DStack_6;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                          );
        if (bVar12 == 0) break;
        if (DStack_6._currentValue == (Object *)0x0) goto code_?;
        if (DStack_6._currentValue[10].monitor == (MonitorData *)wo) {
          RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_02,index,
                             MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_
                            );
          *item = (ShopItem *)RVar8;
          func_?();
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,in_stack_13);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 ,method_00);
      index = index + 1;
      uStack_1 = 0xffffffff;
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  bVar12 = (*pcVar15)();
  return bVar12;
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
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    pLVar1 = (List_1_ShopItem_ *)
             func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)pLVar1,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    return pLVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_ShopItem_ *)(*pcVar2)();
  return pLVar1;
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
  uStack_6 = 0;
  method_00 = (MethodInfo *)(this->fields).categories;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_10._dictionary = pDVar7->_dictionary;
    DStack_10._version = pDVar7->_version;
    DStack_10._index = pDVar7->_index;
    DStack_10._current.key = (pDVar7->_current).key;
    DStack_10._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_10;
    do {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_10,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                        );
      key = 0;
      if (bVar12 == 0) goto code_?;
      uStack_13 = DStack_10._current.key;
      bVar12 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)DStack_10._current.value,category,(MethodInfo *)0x0);
    } while (bVar12 == 0);
    uStack_6 = uStack_13;
    key = uStack_13;
code_?:
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (this->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                             );
      pLVar14 = (List_1_ShopItem_ *)
               func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)pLVar14,(IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                );
      if (pLVar14 != (List_1_ShopItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Reverse
                  ((List_1_System_Object_ *)pLVar14,
                   MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
        *unaff_FS_OFFSET = uStack_3;
        return pLVar14;
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pLVar14 = (List_1_ShopItem_ *)(*pcVar16)();
  return pLVar14;
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
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)this_01,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    index = 0;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      while( true ) {
        if ((this_01->fields)._size <= index) {
          return 0;
        }
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,index,
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
    this_01 = (List_1_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                        );
    if (this_01 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                (this_01,(Object *)item,
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
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).repository;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_7,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_System::Collections::Generic::List<ShopItem>_>__GetEnumerator__
                         );
      pOVar8 = pDVar6->_currentValue;
      DStack_7._version = 0;
      uStack_1 = 1;
      DStack_7._currentValue = (Object *)&stack0xffffffc4;
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<ShopItem>_>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOStack_10 = pOVar8;
        if ((TypeInfo__ClientShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = TypeInfo__ClientShopRepository____c->static_fields->__9__11_0;
        if (this_02 == (Func_2_ShopItem_Int32_ *)0x0) {
          if ((TypeInfo__ClientShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__ClientShopRepository____c->static_fields->__9;
          this_02 = (Func_2_ShopItem_Int32_ *)func_?();
          Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType]::
          ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                     this_02,(Object *)object,
                     MethodInfo__ClientShopRepository____c___ReorganizeBySlotPositions_b__11_0_ShopItem_
                     ,(MethodInfo *)0x0);
          TypeInfo__ClientShopRepository____c->static_fields->__9__11_0 = this_02;
          func_?();
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                           ((IEnumerable_1_System_Object_ *)pOStack_10,
                            (Func_2_Object_Int32_ *)this_02,
                            System__Linq__IOrderedEnumerable<ShopItem>_MethodInfo__System__Linq__Enumerable__OrderBy<ShopItem,_int>_System__Collections__Generic__IEnumerable<ShopItem>__System__Func<ShopItem,_int>_
                           );
        unaff_EBX = (MethodInfo *)&UNK_?;
        this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                            ((IEnumerable_1_System_Object_ *)source,
                             System__Collections__Generic__List<ShopItem>_MethodInfo__System__Linq__Enumerable__ToList<ShopItem>_System__Collections__Generic__IEnumerable<ShopItem>_
                            );
        index = 0;
        while( true ) {
          if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          if ((this_03->fields)._size <= index) break;
          RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_03,index,
                             MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_
                            );
          if (RVar11 == (RegexCharClass_SingleRange)0x0) goto code_?;
          *(int *)((int)RVar11 + 0x28) = index;
          index = index + 1;
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
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                   );
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
  }
  this_02 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Dictionary__
            );
  (this->fields).repository = (Dictionary_2_System_Int32_List_1_ShopItem_ *)this_02;
  func_?(&this->fields,this_02);
  this_03 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>
                           );
  method_00 = 
  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Dictionary__
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Dictionary__
            );
  if (this_03 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,5,
               (Object *)StringLiteral_Premiumu000AModels,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,7,
               (Object *)StringLiteral_Pickups,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,8,
               (Object *)StringLiteral_Blueprints,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,6,
               (Object *)StringLiteral_Logic,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,10,
               (Object *)StringLiteral_Advancedu000ALogic,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    pMVar3->name = (char *)this_03;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_03,ExceptionArgument__Enum_obj,method_00);
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)pMVar3->name;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                          );
      if (this_04 !=
          (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::
        Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
        StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)&stack0xffffffd4,
                   (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)this_04,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                  );
        method_01.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffc4).rgctx_data;
        while( true ) {
          this_06 = (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                     *)&stack0xffffffc4;
          bVar4 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (this_06,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                            );
          if (bVar4 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffc4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                       ,(MethodInfo *)method_01.methodMetadataHandle);
            *unaff_FS_OFFSET = uStack_2;
            return;
          }
          this_05 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    func_?();
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (this_05,MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
          this_01 = (this_03->fields)._buckets;
          if (this_01 == (Int32__Array *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)this_06,
                     (Object *)this_05,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Add_int__System__Collections__Generic__List<ShopItem>_
                    );
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

