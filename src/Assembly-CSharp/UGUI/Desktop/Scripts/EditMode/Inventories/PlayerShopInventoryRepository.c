
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
  func_?();
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
      if ((shopItem == (ShopItem *)0x0) || (pIVar1 == (InventoryItem *)0x0)) goto code_?;
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,(shopItem->fields).itemCategoryID,
                 (pIVar1->fields).slotPosition,0,(pAVar3->fields)._._.method);
    }
    pCVar4 = (this->fields)._clientShopRepository_k__BackingField;
    if (pCVar4 != (ClientShopRepository *)0x0) {
      ClientShopRepository::ClientShopRepository_RemoveItem(pCVar4,shopItem,(MethodInfo *)0x0);
      pCVar4 = (this->fields)._clientShopRepository_k__BackingField;
      if (pCVar4 != (ClientShopRepository *)0x0) {
        ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                  (pCVar4,(MethodInfo *)0x0);
        return pIVar1;
      }
    }
  }
code_?:
  func_?();
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&TypeInfo__ShopItem);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentKey = (Object *)0x0;
  if (outData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)outData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      DStack_6._dictionary =
           (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentKey = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,UnityEngine::UIElements::TextureId]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        pOVar10 = DStack_6._currentKey;
        if (bVar9 == 0) break;
        pSStack_11 = (ShopItem *)func_?(TypeInfo__ShopItem);
        unaff_EDI = (ShopItem *)pOVar10;
        if ((ShopItem *)pOVar10 == (ShopItem *)0x0) goto code_?;
        pIVar12 = TypeInfo__System__Int32;
        if ((pOVar10->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        method_00 = (MethodInfo *)&UNK_?;
        piVar13 = (int32_t *)func_?(pOVar10);
        unaff_EDI = pSStack_11;
        ShopItem::ShopItem__ctor(pSStack_11,*piVar13,outData,(MethodInfo *)0x0);
        pCVar14 = (this->fields)._clientShopRepository_k__BackingField;
        if (pCVar14 == (ClientShopRepository *)0x0) goto code_?;
        ClientShopRepository::ClientShopRepository_AddItem(pCVar14,unaff_EDI,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      if (isDone != 0) {
        pCVar14 = (this->fields)._clientShopRepository_k__BackingField;
        if (pCVar14 == (ClientShopRepository *)0x0) goto code_?;
        ClientShopRepository::ClientShopRepository_ReorganizeBySlotPositions
                  (pCVar14,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  pIVar12 = (Int32__Class *)func_?();
code_?:
  func_?(unaff_EDI,pIVar12);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
      func_?();
      func_?();
      func_?();
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
      func_?();
      pOVar2 = value[1].klass;
      if (pOVar2 != (Object__Class *)0x0) {
        if ((pOVar2->_0).generic_class == (Il2CppGenericClass *)0x0) {
          return 1;
        }
        this_00 = (pPVar1->fields).repository;
        if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
          source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                              (int32_t)(pOVar2->_0).namespaze,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             );
          this_01 = (Func_2_Object_Boolean_ *)func_?();
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    (this_01,value,
                     MethodInfo__PlayerInventoryRepository____c__DisplayClass5_0___CountItemsWithOriginalID_b__0_InventoryItem_
                     ,(MethodInfo *)0x0);
          iVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_3
                            ((IEnumerable_1_System_Object_ *)source,this_01,
                             int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
                            );
          return iVar3;
        }
      }
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  iVar3 = (*pcVar5)();
  return iVar3;
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
  if (pPVar1 != (PlayerInventoryRepository *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
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
      func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_)
      ;
      func_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    OStack_2.klass = (Object__Class *)0x0;
    OStack_2.monitor = (MonitorData *)0x0;
    puStack_3 = (undefined *)0x0;
    this_00 = (pPVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      this_04 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                 *)&UNK_?;
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,pickups,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                         );
      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)this_02,(IEnumerable_1_System_Object_ *)pOVar4,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                );
      method_00 = (MethodInfo *)0x0;
      if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        while( true ) {
          while( true ) {
            index = MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_;
            if ((this_02->fields)._size <= (int)method_00) {
              *item = (InventoryItem *)0x0;
              func_?();
              *unaff_FS_OFFSET = this_04;
              return 0;
            }
            RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_02,(int32_t)method_00,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              );
            if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (*(char *)((int)RVar5 + 0x20) != '\0') break;
            method_00 = (MethodInfo *)((int)&index->methodPointer + 1);
          }
          RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_02,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            );
          if (RVar5 == (RegexCharClass_SingleRange)0x0) break;
          buffer = *(Byte__Array **)((int)RVar5 + 0x1c);
          item = (InventoryItem **)func_?();
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)item,buffer,(MethodInfo *)0x0);
          this_03 = (KoGaMaPackageClient *)func_?();
          KoGaMaPackageClient::KoGaMaPackageClient__ctor
                    (this_03,(BytePacker *)item,0,(MethodInfo *)0x0);
          if (this_03 == (KoGaMaPackageClient *)0x0) break;
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_03,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_03,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)(this_03->fields).worldObjects;
          if ((this_01 ==
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0) ||
             (pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                       UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                 (this_01,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                                 ),
             pDVar6 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)0x0)) break;
          puVar7 = (undefined4 *)func_?();
          OStack_2.klass = (Object__Class *)*puVar7;
          OStack_2.monitor = (MonitorData *)puVar7[1];
          puStack_3 = (undefined *)puVar7[2];
          pOVar4 = (Object *)puVar7[3];
          while( true ) {
            this_04 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                       *)&OStack_2;
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (this_04,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                              );
            if (bVar8 == 0) break;
            if (pOVar4 == (Object *)0x0) goto code_?;
            if (pOVar4[10].monitor == (MonitorData *)&UNK_?) {
              if (this_02 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                puVar9 = &UNK_?;
                RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_02,0xADDR,
                                   MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                                  );
                ((BytePacker *)item)->klass = (BytePacker__Class *)RVar5;
                func_?();
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          (&OStack_2,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                           ,(MethodInfo *)&UNK_?);
                *unaff_FS_OFFSET = puVar9;
                return 1;
              }
              goto code_?;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (&OStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          method_00 = (MethodInfo *)&UNK_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  bVar8 = (*pcVar10)();
  return bVar8;
}


/* List`1[InventoryItem] GetInventoryItemsInCategorySlow(String) */

List_1_InventoryItem_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_GetInventoryItemsInCategorySlow
          (PlayerShopInventoryRepository *this,String *s,MethodInfo *method)

{
  pPVar1 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar1 != (PlayerInventoryRepository *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
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
    }
    DStack_2._current.value = (Object *)0x0;
    DStack_2._getEnumeratorRetType = 0;
    DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_2._version = 0;
    DStack_2._index = 0;
    DStack_2._current.key = 0;
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(pPVar1->fields).categories;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_4,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                         );
      DStack_2._dictionary = pDVar3->_dictionary;
      DStack_2._version = pDVar3->_version;
      DStack_2._index = pDVar3->_index;
      DStack_2._current.key = (pDVar3->_current).key;
      DStack_2._16_8_ = *(undefined8 *)&(pDVar3->_current).value;
      do {
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_2,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                          );
        key = (String *)0x0;
        if (bVar5 == 0) break;
        key = (String *)DStack_2._current.key;
        bVar5 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)DStack_2._current.value,(String *)DStack_2._current.key,
                           (MethodInfo *)0x0);
      } while (bVar5 == 0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_2,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                 ,(MethodInfo *)0xffffffff);
      this_01 = (pPVar1->fields).repository;
      if (this_01 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
        puVar6 = &UNK_?;
        collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                               );
        pLVar7 = (List_1_InventoryItem_ *)func_?();
        DStack_2._getEnumeratorRetType = (int32_t)&UNK_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object___ctor_1
                  ((List_1_System_Object_ *)pLVar7,(IEnumerable_1_System_Object_ *)collection,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                  );
        if (pLVar7 != (List_1_InventoryItem_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Reverse
                    ((List_1_System_Object_ *)pLVar7,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
          *unaff_FS_OFFSET = puVar6;
          return pLVar7;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pLVar7 = (List_1_InventoryItem_ *)(*pcVar8)();
  return pLVar7;
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
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pCVar1->fields).categories;
    if (this_00 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) {
      pSVar2 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                          inventoryCategoryType,
                          MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                         );
      return pSVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar4)();
  return pSVar2;
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
  if (pCVar1 != (ClientShopRepository *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
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
    }
    this_00 = (pCVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      this_05 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                 *)&UNK_?;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,pickups,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                         );
      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)this_02,(IEnumerable_1_System_Object_ *)pOVar2,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                );
      puVar3 = (undefined *)0x0;
      if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        while( true ) {
          if ((this_02->fields)._size <= (int)puVar3) {
            *item = (ShopItem *)0x0;
            func_?();
            *unaff_FS_OFFSET = this_05;
            return 0;
          }
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_02,(int32_t)puVar3,
                             MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_
                            );
          pBVar5 = TypeInfo__MV__WorldObject__BytePacker;
          if (RVar4 == (RegexCharClass_SingleRange)0x0) break;
          item = (ShopItem **)TypeInfo__MV__WorldObject__BytePacker;
          buffer = *(Byte__Array **)((int)RVar4 + 0x1c);
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    func_?();
          method_01 = (MethodInfo *)&UNK_?;
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)this_02,buffer,(MethodInfo *)0x0);
          method_00 = TypeInfo__KoGaMaPackageClient;
          this_03 = (KoGaMaPackageClient *)func_?();
          KoGaMaPackageClient::KoGaMaPackageClient__ctor
                    (this_03,(BytePacker *)this_02,0,(MethodInfo *)0x0);
          if (this_03 == (KoGaMaPackageClient *)0x0) break;
          DStack_6._currentValue = (Object *)&UNK_?;
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_03,(MethodInfo *)0x0);
          DStack_6._currentValue = (Object *)&UNK_?;
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_03,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)(this_03->fields).worldObjects;
          if ((this_01 ==
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0) ||
             (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                  (this_01,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                                  ),
             this_04 ==
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) break;
          pDVar7 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_6,this_04,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                             );
          pOVar2 = pDVar7->_currentValue;
          while( true ) {
            this_05 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                       *)&stack0xffffffcc;
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (this_05,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                              );
            if (bVar8 == 0) break;
            if (pOVar2 == (Object *)0x0) goto code_?;
            if ((KoGaMaPackageClient__Class *)pOVar2[10].monitor == method_00) {
              if (this_02 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                puVar3 = &UNK_?;
                RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (this_02,0xADDR,
                                   MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_
                                  );
                (pBVar5->_0).image = (Il2CppImage *)RVar4;
                func_?();
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffffcc,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                           ,(MethodInfo *)method_00);
                *unaff_FS_OFFSET = puVar3;
                return 1;
              }
              goto code_?;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffcc,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_01);
          puVar3 = &UNK_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* List`1[ShopItem] GetShopItemsInCategorySlow(String) */

List_1_ShopItem_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_GetShopItemsInCategorySlow
          (PlayerShopInventoryRepository *this,String *category,MethodInfo *method)

{
  pCVar1 = (this->fields)._clientShopRepository_k__BackingField;
  if (pCVar1 != (ClientShopRepository *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
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
    }
    DStack_2._current.value = (Object *)0x0;
    DStack_2._getEnumeratorRetType = 0;
    DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_2._version = 0;
    DStack_2._index = 0;
    DStack_2._current.key = 0;
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(pCVar1->fields).categories;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_4,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                         );
      DStack_2._dictionary = pDVar3->_dictionary;
      DStack_2._version = pDVar3->_version;
      DStack_2._index = pDVar3->_index;
      DStack_2._current.key = (pDVar3->_current).key;
      DStack_2._16_8_ = *(undefined8 *)&(pDVar3->_current).value;
      do {
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_2,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                          );
        key = (String *)0x0;
        if (bVar5 == 0) break;
        key = (String *)DStack_2._current.key;
        bVar5 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)DStack_2._current.value,(String *)DStack_2._current.key,
                           (MethodInfo *)0x0);
      } while (bVar5 == 0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_2,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                 ,(MethodInfo *)0xffffffff);
      this_01 = (pCVar1->fields).repository;
      if (this_01 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
        puVar6 = &UNK_?;
        collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                               );
        pLVar7 = (List_1_ShopItem_ *)func_?();
        DStack_2._getEnumeratorRetType = (int32_t)&UNK_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object___ctor_1
                  ((List_1_System_Object_ *)pLVar7,(IEnumerable_1_System_Object_ *)collection,
                   MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                  );
        if (pLVar7 != (List_1_ShopItem_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Reverse
                    ((List_1_System_Object_ *)pLVar7,
                     MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
          *unaff_FS_OFFSET = puVar6;
          return pLVar7;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pLVar7 = (List_1_ShopItem_ *)(*pcVar8)();
  return pLVar7;
}


/* Boolean HasShopWorldObjectType(WorldObjectType) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_HasShopWorldObjectType
               (PlayerShopInventoryRepository *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pIStack_6 = (InventoryItem *)0x0;
  pPVar7 = (this->fields)._playerInventoryRepository_k__BackingField;
  if ((pPVar7 != (PlayerInventoryRepository *)0x0) &&
     (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(pPVar7->fields).categories,
     this_00 !=
     (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_9,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                         );
      method_01 = (MethodInfo *)pDVar8->_version;
      inventoryCategory = pDVar8->_currentValue;
      DStack_9._version = 0;
      uStack_1 = 1;
      DStack_9._currentValue = (Object *)&stack0xffffffc4;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        pPVar7 = (this->fields)._playerInventoryRepository_k__BackingField;
        if (pPVar7 == (PlayerInventoryRepository *)0x0) break;
        PlayerInventoryRepository::PlayerInventoryRepository_GetItemByWorldObjectTypeInCategory
                  (pPVar7,(InventoryCategoryType__Enum)inventoryCategory,worldObjectType,&pIStack_6
                   ,(MethodInfo *)0x0);
        if (pIStack_6 != (InventoryItem *)0x0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                     ,method_01);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar10 = (*pcVar11)();
  return bVar10;
}


/* Int32 HighestSlotIndex(InventoryCategoryType) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
        PlayerShopInventoryRepository::PlayerShopInventoryRepository_HighestSlotIndex
                  (PlayerShopInventoryRepository *this,InventoryCategoryType__Enum categoryID,
                  MethodInfo *method)

{
  if ((this->fields)._playerInventoryRepository_k__BackingField != (PlayerInventoryRepository *)0x0)
  {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_)
      ;
      cRam_? = '\x01';
    }
    index = 0;
    iStack_1 = 1;
    this_01 = *(Dictionary_2_System_Int32_System_Object_ **)(unaff_ESI + 8);
    if (this_01 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
      while (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                (this_01,unaff_EBX,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                ), pOVar2 != (Object *)0x0) {
        if ((int)pOVar2[1].monitor <= index) {
          return iStack_1;
        }
        if (((*(Dictionary_2_System_Int32_System_Object_ **)(unaff_ESI + 8) ==
              (Dictionary_2_System_Int32_System_Object_ *)0x0) ||
            (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 (*(Dictionary_2_System_Int32_System_Object_ **)(unaff_ESI + 8),
                                  unaff_EBX,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                 ),
            this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) ||
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
        this_01 = *(Dictionary_2_System_Int32_System_Object_ **)(unaff_ESI + 8);
        index = index + 1;
        iVar4 = *(int *)((int)RVar3 + 0x3c);
        if (*(int *)((int)RVar3 + 0x3c) <= iStack_1) {
          iVar4 = iStack_1;
        }
        iStack_1 = iVar4;
        if (this_01 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
      }
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void RemoveInventoryItem(InventoryItem) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_RemoveInventoryItem
               (PlayerShopInventoryRepository *this,InventoryItem *previewedItem,MethodInfo *method)

{
  this_00 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (this_00 != (PlayerInventoryRepository *)0x0) {
    PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem
              (this_00,previewedItem,(MethodInfo *)0x0);
    pAVar1 = (this->fields).OnInventoryChanged;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveItemFromInventory(Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_RemoveItemFromInventory
               (PlayerShopInventoryRepository *this,int32_t itemID,MethodInfo *method)

{
  this_00 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (this_00 != (PlayerInventoryRepository *)0x0) {
    PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem_1
              (this_00,itemID,(MethodInfo *)0x0);
    pAVar1 = (this->fields).OnInventoryChanged;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Setup(EventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_Setup
               (PlayerShopInventoryRepository *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ClientShopRepository);
    func_?(&TypeInfo__PlayerInventoryRepository);
    cRam_? = '\x01';
  }
  if ((this->fields)._playerInventoryRepository_k__BackingField == (PlayerInventoryRepository *)0x0)
  {
    this_00 = (PlayerInventoryRepository *)func_?(TypeInfo__PlayerInventoryRepository);
    PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._playerInventoryRepository_k__BackingField = this_00;
    func_?(&(this->fields)._playerInventoryRepository_k__BackingField,this_00);
  }
  if ((this->fields)._clientShopRepository_k__BackingField == (ClientShopRepository *)0x0) {
    this_01 = (ClientShopRepository *)func_?(TypeInfo__ClientShopRepository);
    ClientShopRepository::ClientShopRepository__ctor(this_01,(MethodInfo *)0x0);
    (this->fields)._clientShopRepository_k__BackingField = this_01;
    func_?(&(this->fields)._clientShopRepository_k__BackingField,this_01);
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
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pCVar1->fields).repository;
    if ((this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           ), pOVar2 != (Object *)0x0)) {
      return (int32_t)pOVar2[1].monitor;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void SwapInventoryItemSlotPositions(InventoryItem, InventoryItem) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_SwapInventoryItemSlotPositions
               (PlayerShopInventoryRepository *this,InventoryItem *source,InventoryItem *destination
               ,MethodInfo *method)

{
  if ((((this->fields)._playerInventoryRepository_k__BackingField !=
        (PlayerInventoryRepository *)0x0) && (source != (InventoryItem *)0x0)) &&
     (iVar1 = (source->fields).slotPosition, destination != (InventoryItem *)0x0)) {
    (source->fields).slotPosition = (destination->fields).slotPosition;
    (destination->fields).slotPosition = iVar1;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateItemData(Int32, Int32, Byte[]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_UpdateItemData
               (PlayerShopInventoryRepository *this,int32_t itemID,int32_t itemCategoryID,
               Byte__Array *data,MethodInfo *method)

{
  this_00 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (this_00 != (PlayerInventoryRepository *)0x0) {
    pIVar1 = PlayerInventoryRepository::PlayerInventoryRepository_GetInventoryItem
                       (this_00,itemID,itemCategoryID,(MethodInfo *)0x0);
    if (pIVar1 != (InventoryItem *)0x0) {
      (pIVar1->fields).data = data;
      func_?();
      (pIVar1->fields).hasData = 1;
    }
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pPVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                          );
      index = 0;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        do {
          if ((this_01->fields)._size <= index) {
            return;
          }
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            );
          if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
          if (*(int *)((int)RVar2 + 8) == itemID) {
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,index,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              );
            if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
            *(int32_t *)((int)RVar2 + 0x38) = shopInventoryID;
          }
          index = index + 1;
        } while( true );
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PlayerShopInventoryRepository() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository__ctor
               (PlayerShopInventoryRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ClientShopRepository);
    func_?(&TypeInfo__PlayerInventoryRepository);
    cRam_? = '\x01';
  }
  (this->fields).ItemLoadingTick = -3.4028235e+38;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (PlayerInventoryRepository *)func_?(TypeInfo__PlayerInventoryRepository);
  PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._playerInventoryRepository_k__BackingField = this_00;
  func_?(&(this->fields)._playerInventoryRepository_k__BackingField,this_00);
  this_01 = (ClientShopRepository *)func_?(TypeInfo__ClientShopRepository);
  ClientShopRepository::ClientShopRepository__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._clientShopRepository_k__BackingField = this_01;
  func_?(&(this->fields)._clientShopRepository_k__BackingField,this_01);
  return;
}

