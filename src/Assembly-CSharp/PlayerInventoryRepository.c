
/* Void AddItem(InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_AddItem
               (PlayerInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                   );
    func_?(&StringLiteral_Item_in_inventory_with_category_);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    pDVar1 = (this->fields).repository;
    if (pDVar1 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__ContainsKey_int_
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
      if (pDVar1 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
        this_00 = (List_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                             (item->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                            );
        if (this_00 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_00,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                    );
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


/* InventoryItem AddPurchasedItem(ShopItem) */

InventoryItem *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_AddPurchasedItem
          (PlayerInventoryRepository *this,ShopItem *purchasedItem,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  _Stack_c.genericMethod = (Il2CppGenericMethod *)&DAT_?;
  IStack_2.rgctxDataDummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->rgctxDataDummy = &IStack_2;
  ppIStack_3 = (Il2CppType **)&stack0xffffffb8;
  ppIVar4 = (Il2CppType **)&stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__get_Current__
                   );
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__)
    ;
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    cRam_? = '\x01';
    ppIVar4 = ppIStack_3;
  }
  ppIStack_3 = ppIVar4;
  LStack_5._list = (List_1_System_Object_ *)0x0;
  LStack_5._index = 0;
  LStack_5._version = 0;
  LStack_5._current = (Object *)0x0;
  this_00 = (this->fields).repository;
  if ((purchasedItem != (ShopItem *)0x0) &&
     (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0)) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (purchasedItem->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                        );
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (MethodInfo *)&stack0xffffffd4;
      pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)method_00,this_01,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__
                         );
      LStack_5._list = (List_1_System_Object_ *)pLVar6->_list;
      LStack_5._index = pLVar6->_index;
      LStack_5._version = pLVar6->_version;
      LStack_5._current = *(Object **)&pLVar6->_current;
      pIStack_7 = (InvokerMethod)0x0;
      uStack_1 = 1;
      pLStack_8 = &LStack_5;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_5,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                          );
        pOVar10 = LStack_5._current;
        if (bVar9 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_5._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (*(int *)((int)LStack_5._current + 8) == (purchasedItem->fields).itemID) {
          *(undefined1 *)((int)LStack_5._current + 0x28) = 1;
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_5,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = IStack_2;
          return (InventoryItem *)(RegexCharClass_SingleRange)pOVar10;
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_5,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pIVar11 = (InventoryItem *)func_?();
      InventoryItem::InventoryItem__ctor_3(pIVar11,purchasedItem,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)pIVar11,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_);
      if (pIVar11 != (InventoryItem *)0x0) {
        (pIVar11->fields).slotPosition = (this_01->fields)._size + -1;
        *unaff_FS_OFFSET = IStack_2;
        return pIVar11;
      }
    }
  }
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  pIVar11 = (InventoryItem *)(*pcVar13)();
  return pIVar11;
}


/* Int32 CategoryItemCount(Int32) */

int32_t Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_CategoryItemCount
                  (PlayerInventoryRepository *this,int32_t category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
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
      return (int32_t)pOVar1[1].monitor;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 CountItemsWithOriginalID(InventoryItem) */

int32_t Assembly-CSharp.dll::PlayerInventoryRepository::
        PlayerInventoryRepository_CountItemsWithOriginalID
                  (PlayerInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&
                    int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
                   );
    func_?(&TypeInfo__System__Func<InventoryItem,_bool>);
    func_?(&
                    MethodInfo__PlayerInventoryRepository____c__DisplayClass5_0___CountItemsWithOriginalID_b__0_InventoryItem_
                   );
    func_?(&TypeInfo__PlayerInventoryRepository____c__DisplayClass5_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerInventoryRepository____c__DisplayClass5_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)item;
    func_?(value + 1,item);
    pOVar1 = value[1].klass;
    if (pOVar1 != (Object__Class *)0x0) {
      if ((pOVar1->_0).generic_class == (Il2CppGenericClass *)0x0) {
        return 1;
      }
      this_00 = (this->fields).repository;
      if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
        source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                            (int32_t)(pOVar1->_0).namespaze,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
        this_01 = (Func_2_Object_Boolean_ *)
                  func_?(TypeInfo__System__Func<InventoryItem,_bool>);
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_01,value,
                   MethodInfo__PlayerInventoryRepository____c__DisplayClass5_0___CountItemsWithOriginalID_b__0_InventoryItem_
                   ,(MethodInfo *)0x0);
        iVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_3
                          ((IEnumerable_1_System_Object_ *)source,this_01,
                           int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
                          );
        return iVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* InventoryItem GetInventoryItem(Int32, Int32) */

InventoryItem *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_GetInventoryItem
          (PlayerInventoryRepository *this,int32_t itemID,int32_t itemCategoryID,MethodInfo *method)

{
  _Stack_8 = (_union_155)0xffffffff;
  _Stack_c.rgctx_data = (Il2CppRGCTXData *)&DAT_?;
  ppIStack_1 = (Il2CppType **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppIStack_1;
  pIStack_2 = (Il2CppType *)&stack0xffffffbc;
  pIVar3 = (Il2CppType *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__)
    ;
    cRam_? = '\x01';
    pIVar3 = pIStack_2;
  }
  pIStack_2 = pIVar3;
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                        );
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (MethodInfo *)&stack0xffffffd8;
      pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)method_00,this_01,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__
                         );
      LStack_4._list = (List_1_System_Object_ *)pLVar5->_list;
      LStack_4._index = pLVar5->_index;
      LStack_4._version = pLVar5->_version;
      LStack_4._current = *(Object **)&pLVar5->_current;
      pIStack_6 = (InvokerMethod)0x0;
      _Stack_8 = (_union_155)0x1;
      pLStack_7 = &LStack_4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                          );
        pOVar9 = LStack_4._current;
        if (bVar8 == 0) {
          _Stack_8 = (_union_155)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = ppIStack_1;
          return (InventoryItem *)0x0;
        }
        if ((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0)
        break;
        if (*(int *)((int)LStack_4._current + 8) == itemID) {
          _Stack_8 = (_union_155)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = ppIStack_1;
          return (InventoryItem *)(RegexCharClass_SingleRange)pOVar9;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pIVar11 = (InventoryItem *)(*pcVar10)();
  return pIVar11;
}


/* Boolean GetItemByWorldObjectTypeInCategory(InventoryCategoryType, WorldObjectType, InventoryItem
   ByRef) */

bool Assembly-CSharp.dll::PlayerInventoryRepository::
     PlayerInventoryRepository_GetItemByWorldObjectTypeInCategory
               (PlayerInventoryRepository *this,InventoryCategoryType__Enum inventoryCategory,
               WorldObjectType__Enum wo,InventoryItem **item,MethodInfo *method)

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
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
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
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
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
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
    this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)this_02,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
              );
    this = (PlayerInventoryRepository *)0x0;
    pLStack_7 = this_02;
    if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      while( true ) {
        while( true ) {
          if ((this_02->fields)._size <= (int)this) {
            *item = (InventoryItem *)0x0;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return 0;
          }
          method_00 = (MethodInfo *)this;
          RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_02,(int32_t)this,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            );
          if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
          if (*(char *)((int)RVar8 + 0x20) != '\0') break;
          this = (PlayerInventoryRepository *)((int)&this->klass + 1);
        }
        RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_02,(int32_t)this,
                           MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                          );
        if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
        DStack_6._dictionary =
             (Dictionary_2_System_UInt32_System_Object_ *)TypeInfo__MV__WorldObject__BytePacker;
        buffer = *(Byte__Array **)((int)RVar8 + 0x1c);
        this_03 = (BytePacker *)func_?();
        method_01 = (MethodInfo *)&UNK_?;
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (this_03,buffer,(MethodInfo *)0x0);
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
        pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                           (this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                           );
        if (pDVar9 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) break;
        puVar10 = (undefined4 *)
                 func_?(&stack0xffffffbc,pDVar9,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                                );
        uStack_11 = 0;
        DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)*puVar10;
        DStack_6._index = puVar10[1];
        DStack_6._version = puVar10[2];
        DStack_6._currentValue = (Object *)puVar10[3];
        uStack_1 = 1;
        pDStack_12 = &DStack_6;
        while( true ) {
          bVar13 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                            );
          if (bVar13 == 0) break;
          if (DStack_6._currentValue == (Object *)0x0) goto code_?;
          if (DStack_6._currentValue[10].monitor == (MonitorData *)wo) {
            if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_02,(int32_t)this,
                                 MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                                );
              *item = (InventoryItem *)RVar8;
              func_?();
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                         ,method_01);
              *unaff_FS_OFFSET = uStack_3;
              return 1;
            }
            goto code_?;
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                   ,method_00);
        this = (PlayerInventoryRepository *)((int)&this->klass + 1);
        uStack_1 = 0xffffffff;
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


/* List`1[InventoryItem] GetItemsInCategory(InventoryCategoryType) */

List_1_InventoryItem_ *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategory
          (PlayerInventoryRepository *this,InventoryCategoryType__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
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
             func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
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
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_InventoryItem_ *)(*pcVar2)();
  return pLVar1;
}


/* List`1[InventoryItem] GetItemsInCategorySlow(String) */

List_1_InventoryItem_ *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategorySlow
          (PlayerInventoryRepository *this,String *category,MethodInfo *method)

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
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
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
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  uStack_7 = 0;
  method_00 = (MethodInfo *)(this->fields).categories;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_6._dictionary = pDVar8->_dictionary;
    DStack_6._version = pDVar8->_version;
    DStack_6._index = pDVar8->_index;
    DStack_6._current.key = (pDVar8->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_6;
    do {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                        );
      key = 0;
      if (bVar12 == 0) goto code_?;
      uStack_13 = DStack_6._current.key;
      bVar12 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)DStack_6._current.value,category,(MethodInfo *)0x0);
    } while (bVar12 == 0);
    uStack_7 = uStack_13;
    key = uStack_13;
code_?:
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (this->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             );
      pLVar14 = (List_1_InventoryItem_ *)
               func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)pLVar14,(IEnumerable_1_System_Object_ *)collection,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                );
      if (pLVar14 != (List_1_InventoryItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Reverse
                  ((List_1_System_Object_ *)pLVar14,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
        *unaff_FS_OFFSET = uStack_3;
        return pLVar14;
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pLVar14 = (List_1_InventoryItem_ *)(*pcVar16)();
  return pLVar14;
}


/* Int32 HighestSlotIndex(InventoryCategoryType) */

int32_t Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_HighestSlotIndex
                  (PlayerInventoryRepository *this,InventoryCategoryType__Enum category,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x1;
  pDVar2 = (this->fields).repository;
  if (pDVar2 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    while (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,category,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                              ), pOVar3 != (Object *)0x0) {
      if ((int)pOVar3[1].monitor <= index) {
        return (int32_t)pLVar1;
      }
      pDVar2 = (this->fields).repository;
      if (((pDVar2 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) ||
          (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,category,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                               ),
          this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      pDVar2 = (this->fields).repository;
      index = index + 1;
      pLVar1 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                ((int)RVar4 + 0x3c);
      if ((int)*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                ((int)RVar4 + 0x3c) <= (int)this_00) {
        pLVar1 = this_00;
      }
      if (pDVar2 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void RemoveItem(InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem
               (PlayerInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__Remove_InventoryItem_
                   );
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
    if (this_01 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                (this_01,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__Remove_InventoryItem_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem_1
               (PlayerInventoryRepository *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).repository;
  if (pDVar1 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                        );
    index = 0;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      do {
        if ((this_00->fields)._size <= index) {
          return;
        }
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                          );
        if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
        if (*(int *)((int)RVar2 + 8) == itemID) {
          pDVar1 = (this->fields).repository;
          if (pDVar1 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) break;
          itemID = (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,1,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                      );
          if ((List_1_System_Object_ *)itemID == (List_1_System_Object_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)itemID,index,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_);
        }
        index = index + 1;
      } while( true );
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SwapItemSlotPositions(InventoryItem, InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_SwapItemSlotPositions
               (PlayerInventoryRepository *this,InventoryItem *from,InventoryItem *to,
               MethodInfo *method)

{
  if (from != (InventoryItem *)0x0) {
    iVar1 = (from->fields).slotPosition;
    if (to != (InventoryItem *)0x0) {
      (from->fields).slotPosition = (to->fields).slotPosition;
      (to->fields).slotPosition = iVar1;
      return;
    }
  }
  func_?();
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
    (pIVar1->fields).data = data;
    func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                        );
    index = 0;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      do {
        if ((this_01->fields)._size <= index) {
          return;
        }
        RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,index,
                           MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                          );
        if (RVar1 == (RegexCharClass_SingleRange)0x0) break;
        if (*(int *)((int)RVar1 + 8) == itemID) {
          RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            );
          if (RVar1 == (RegexCharClass_SingleRange)0x0) break;
          *(int32_t *)((int)RVar1 + 0x38) = shopInventoryID;
        }
        index = index + 1;
      } while( true );
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* PlayerInventoryRepository() */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository__ctor
               (PlayerInventoryRepository *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Add_int__System__Collections__Generic__List<InventoryItem>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Dictionary__
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
                    TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>
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
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
    func_?(&StringLiteral_Advancedu000ALogic);
    func_?(&StringLiteral_Pickups);
    func_?(&StringLiteral_Blueprints);
    func_?(&StringLiteral_Cubeu000AModels);
    func_?(&StringLiteral_Logic);
    func_?(&StringLiteral_Premiumu000AModels);
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Dictionary__
            );
  (this->fields).repository = (Dictionary_2_System_Int32_List_1_InventoryItem_ *)this_02;
  func_?(&this->fields,this_02);
  this_03 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Dictionary__
            );
  if (this_03 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,1,
               (Object *)StringLiteral_Cubeu000AModels,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,10,
               (Object *)StringLiteral_Advancedu000ALogic,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    (this->fields).categories = (Dictionary_2_InventoryCategoryType_System_String_ *)this_03;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_3);
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).categories;
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
        method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffc4).rgctx_data;
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
                       ,(MethodInfo *)method_00.methodMetadataHandle);
            *unaff_FS_OFFSET = uStack_2;
            return;
          }
          this_05 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    func_?();
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (this_05,MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
          this_01 = (this_03->fields)._buckets;
          if (this_01 == (Int32__Array *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)this_06,
                     (Object *)this_05,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Add_int__System__Collections__Generic__List<InventoryItem>_
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

