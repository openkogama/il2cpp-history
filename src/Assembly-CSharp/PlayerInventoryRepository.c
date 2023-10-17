
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
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).repository;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)(item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__ContainsKey_int_
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
      if (this_01 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
        this_02 = (List_1_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                             (item->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                            );
        if (this_02 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_02,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                    );
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


/* InventoryItem AddPurchasedItem(ShopItem) */

InventoryItem *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_AddPurchasedItem
          (PlayerInventoryRepository *this,ShopItem *purchasedItem,MethodInfo *method)

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
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__)
    ;
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    cRam_? = '\x01';
    pIVar3 = pIStack_2;
  }
  pIStack_2 = pIVar3;
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  this_00 = (this->fields).repository;
  if ((purchasedItem != (ShopItem *)0x0) &&
     (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0)) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                         (purchasedItem->fields).itemCategoryID,
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
        if (bVar8 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (*(int *)((int)LStack_4._current + 8) == (purchasedItem->fields).itemID) {
          *(undefined1 *)((int)LStack_4._current + 0x28) = 1;
          _Stack_8 = (_union_155)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = ppIStack_1;
          return (InventoryItem *)(RegexCharClass_SingleRange)pOVar9;
        }
      }
      _Stack_8 = (_union_155)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&LStack_4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                 ,method_00);
      _Stack_8 = (_union_155)0xffffffff;
      pIVar10 = (InventoryItem *)func_?();
      if (pIVar10 != (InventoryItem *)0x0) {
        InventoryItem::InventoryItem__ctor_3(pIVar10,purchasedItem,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)pIVar10,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                  );
        (pIVar10->fields).slotPosition = (this_01->fields)._size + -1;
        *unaff_FS_OFFSET = ppIStack_1;
        return pIVar10;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pIVar10 = (InventoryItem *)(*pcVar11)();
  return pIVar10;
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,category,
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
  this_01 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__PlayerInventoryRepository____c__DisplayClass5_0);
  if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
    (this_01->fields).m_CoroutineContainer = (MonoBehaviour *)item;
    func_?(&this_01->fields,item);
    pMVar1 = (this_01->fields).m_CoroutineContainer;
    if (pMVar1 != (MonoBehaviour *)0x0) {
      if (pMVar1[4].klass == (MonoBehaviour__Class *)0x0) {
        return 1;
      }
      this_00 = (this->fields).repository;
      if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
        source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                            (Int32Enum__Enum)pMVar1[1].klass,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
        this_02 = (Func_2_Object_Boolean_ *)
                  func_?(TypeInfo__System__Func<InventoryItem,_bool>);
        if (this_02 != (Func_2_Object_Boolean_ *)0x0) {
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    (this_02,(Object *)this_01,
                     MethodInfo__PlayerInventoryRepository____c__DisplayClass5_0___CountItemsWithOriginalID_b__0_InventoryItem_
                     ,(MethodInfo *)0x0);
          iVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_2
                            ((IEnumerable_1_System_Object_ *)source,this_02,
                             int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
                            );
          return iVar2;
        }
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
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,itemCategoryID,
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
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
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_00 = (this->fields).repository;
  if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                            inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
    this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
    if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_02,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         collection,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                );
      index = (MethodInfo *)0x0;
      pLStack_7 = this_02;
      while( true ) {
        while( true ) {
          if ((this_02->fields)._size <= (int)index) {
            *item = (InventoryItem *)0x0;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return 0;
          }
          method_00 = index;
          RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             this_02,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            );
          if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
          if (*(char *)((int)RVar8 + 0x20) != '\0') break;
          index = (MethodInfo *)((int)&index->methodPointer + 1);
        }
        method_01 = index;
        RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_02,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                          );
        if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
        DStack_6._dictionary =
             (Dictionary_2_System_Object_System_Object_ *)TypeInfo__MV__WorldObject__BytePacker;
        buffer = *(Byte__Array **)((int)RVar8 + 0x1c);
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
        pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                           (this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                           );
        if (pDVar10 == (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)0x0) break;
        puVar11 = (undefined4 *)
                 func_?(&stack0xffffffb8,pDVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                                );
        uStack_12 = 0;
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)*puVar11;
        DStack_6._index = puVar11[1];
        DStack_6._version = puVar11[2];
        DStack_6._currentValue = (Object *)puVar11[3];
        uStack_1 = 1;
        pDStack_13 = &DStack_6;
        while( true ) {
          bVar14 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                            );
          if (bVar14 == 0) break;
          if (DStack_6._currentValue == (Object *)0x0) goto code_?;
          if (DStack_6._currentValue[10].monitor == (MonitorData *)wo) {
            RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_02,(int32_t)index,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              );
            *item = (InventoryItem *)RVar8;
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
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  bVar14 = (*pcVar16)();
  return bVar14;
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
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,category,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
    this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
    if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                (this_01,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         collection,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Reverse
                (this_01,MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
      return (List_1_InventoryItem_ *)this_01;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_InventoryItem_ *)(*pcVar1)();
  return pLVar2;
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
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                          (Int32Enum__Enum)pOVar13,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                         );
      this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
      if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  (this_01,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           pOVar13,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Reverse
                  (this_01,MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__)
        ;
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_InventoryItem_ *)this_01;
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pLVar17 = (List_1_InventoryItem_ *)(*pcVar16)();
  return pLVar17;
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
    while (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,category,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                              ), pOVar3 != (Object *)0x0) {
      if ((int)pOVar3[1].monitor <= index) {
        return (int32_t)pLVar1;
      }
      pDVar2 = (this->fields).repository;
      if (((pDVar2 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) ||
          (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,category,
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
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                        );
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
                (this_01,(RegexCharClass_SingleRange)item,
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
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,
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
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,
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
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,
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
  *unaff_FS_OFFSET = &stack0xfffffff0;
  puStack_1 = &stack0xffffffb8;
  puVar2 = &stack0xffffffb8;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
    in_stack_3 = &TypeInfo__System__Collections__Generic__List<InventoryItem>;
    func_?();
    func_?(&StringLiteral_Advancedu000ALogic);
    func_?(&StringLiteral_Pickups);
    func_?(&StringLiteral_Blueprints);
    func_?(&StringLiteral_Cubeu000AModels);
    func_?(&StringLiteral_Logic);
    func_?(&StringLiteral_Premiumu000AModels);
    cRam_? = '\x01';
    puVar2 = puStack_1;
  }
  puStack_1 = puVar2;
  this_01 = (Dictionary_2_System_Int32_List_1_InventoryItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>
                           );
  if (this_01 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Dictionary__
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
                (pDVar4,(Object *)0x1,(Object *)StringLiteral_Cubeu000AModels,
                 MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
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
                      (this_03,MethodInfo__System__Collections__Generic__List<InventoryItem>__List__
                      );
            pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).repository;
            if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar4,(Object *)pMStack_9,(Object *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Add_int__System__Collections__Generic__List<InventoryItem>_
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

