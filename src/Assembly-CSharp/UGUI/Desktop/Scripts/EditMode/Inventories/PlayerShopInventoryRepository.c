
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
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentKey = (Object *)0x0;
  if (outData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                        ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)outData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_00 !=
        (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentKey = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        pOVar10 = DStack_6._currentKey;
        if (bVar9 == 0) break;
        pSStack_11 = (ShopItem *)func_?(TypeInfo__ShopItem);
        unaff_EDI = (ShopItem *)pOVar10;
        if ((pSStack_11 == (ShopItem *)0x0) || ((ShopItem *)pOVar10 == (ShopItem *)0x0))
        goto code_?;
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  func_?();
  pIVar12 = extraout_ECX;
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
    this_01 = (TweenRunner_1_FloatTween_ *)func_?();
    if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
      (this_01->fields).m_CoroutineContainer = (MonoBehaviour *)item;
      func_?();
      pMVar2 = (this_01->fields).m_CoroutineContainer;
      if (pMVar2 != (MonoBehaviour *)0x0) {
        if (pMVar2[4].klass == (MonoBehaviour__Class *)0x0) {
          return 1;
        }
        this_00 = (pPVar1->fields).repository;
        if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
          source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                              (Int32Enum__Enum)pMVar2[1].klass,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             );
          this_02 = (Func_2_Object_Boolean_ *)func_?();
          if (this_02 != (Func_2_Object_Boolean_ *)0x0) {
            mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                      (this_02,(Object *)this_01,
                       MethodInfo__PlayerInventoryRepository____c__DisplayClass5_0___CountItemsWithOriginalID_b__0_InventoryItem_
                       ,(MethodInfo *)0x0);
            iVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_2
                              ((IEnumerable_1_System_Object_ *)source,this_02,
                               int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
                              );
            return iVar3;
          }
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


/* Void FailedToAddItem() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::
     PlayerShopInventoryRepository::PlayerShopInventoryRepository_FailedToAddItem
               (PlayerShopInventoryRepository *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnFailedToAddItem;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
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
    this_00 = (pPVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,pickups,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             );
      this_02 = (PlayerShopInventoryRepository *)func_?();
      if (this_02 != (PlayerShopInventoryRepository *)0x0) {
        this_05 = this_02;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_02,
                   (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)collection,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                  );
        method_00 = (MethodInfo *)0x0;
        while( true ) {
          while( true ) {
            if ((int)(this_02->fields).OnInventoryChanged <= (int)method_00) {
              *item = (InventoryItem *)0x0;
              func_?();
              *unaff_FS_OFFSET = this_05;
              return 0;
            }
            method_01 = method_00;
            RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_02,(int32_t)method_00,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              );
            pMVar3 = MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_;
            if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (*(char *)((int)RVar2 + 0x20) != '\0') break;
            method_00 = (MethodInfo *)((int)&method_00->methodPointer + 1);
          }
          item = (InventoryItem **)
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_;
          this = (PlayerShopInventoryRepository *)&UNK_?;
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             this_02,(int32_t)method_00,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            );
          if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
          buffer = *(Byte__Array **)((int)RVar2 + 0x1c);
          this_03 = (BytePacker *)func_?();
          if (this_03 == (BytePacker *)0x0) break;
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    (this_03,buffer,(MethodInfo *)0x0);
          this_04 = (KoGaMaPackageClient *)func_?();
          if (this_04 == (KoGaMaPackageClient *)0x0) break;
          KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_04,this_03,0,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_04,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_04,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)(this_04->fields).worldObjects;
          if ((this_01 ==
               (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)0x0) ||
             (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                       RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                       Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                 (this_01,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                                 ),
             pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)0x0)) break;
          iVar5 = func_?();
          pAVar6 = *(Action **)(iVar5 + 0xc);
          while( true ) {
            this_05 = (PlayerShopInventoryRepository *)&stack0xffffffc8;
            bVar7 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                *)this_05,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                              );
            if (bVar7 == 0) break;
            if (pAVar6 == (Action *)0x0) goto code_?;
            if (pAVar6[1].fields._._.method == method_00) {
              puVar8 = &UNK_?;
              RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)&UNK_?,(int32_t)method_00,
                                 MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                                );
              pMVar3->methodPointer = (Il2CppMethodPointer)RVar2;
              func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&stack0xffffffc8,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = puVar8;
              return 1;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_01);
          method_00 = (MethodInfo *)((int)&method_00->methodPointer + 1);
          this_02 = this;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
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
    DStack_2._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
    DStack_2._version = 0;
    DStack_2._index = 0;
    DStack_2._current.key = 0;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(pPVar1->fields).categories;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_4,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                         );
      DStack_2._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3->_dictionary;
      DStack_2._version = pDVar3->_version;
      DStack_2._index = pDVar3->_index;
      DStack_2._current.key = (int32_t)(pDVar3->_current).key;
      DStack_2._16_8_ = *(undefined8 *)&(pDVar3->_current).value;
      do {
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_2,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                 ,(MethodInfo *)0xffffffff);
      this_01 = (pPVar1->fields).repository;
      if (this_01 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
        collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                                (Int32Enum__Enum)key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                               );
        this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)func_?();
        if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          puVar6 = &UNK_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                    (this_02,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                             collection,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                    );
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Reverse
                    (this_02,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
          *unaff_FS_OFFSET = puVar6;
          return (List_1_InventoryItem_ *)this_02;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pLVar8 = (List_1_InventoryItem_ *)(*pcVar7)();
  return pLVar8;
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
    OStack_2.klass = (Object__Class *)0x0;
    OStack_2.monitor = (MonitorData *)0x0;
    pIStack_3 = (InvokerMethod)0x0;
    pOStack_4 = (Object *)0x0;
    this_00 = (pCVar1->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,pickups,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                             );
      this_03 = (MethodInfo *)func_?();
      if (this_03 != (MethodInfo *)0x0) {
        this_07 = this_03;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                  ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_03,
                   (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)collection,
                   MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                  );
        index = (MethodInfo *)0x0;
        while( true ) {
          this_02 = MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_;
          if ((int)this_03->name <= (int)index) {
            *item = (ShopItem *)0x0;
            func_?();
            *unaff_FS_OFFSET = this_07;
            return 0;
          }
          method_00 = index;
          RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             this_03,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_
                            );
          pBVar6 = TypeInfo__MV__WorldObject__BytePacker;
          if (RVar5 == (RegexCharClass_SingleRange)0x0) break;
          item = (ShopItem **)TypeInfo__MV__WorldObject__BytePacker;
          buffer = *(Byte__Array **)((int)RVar5 + 0x1c);
          this_04.genericMethod = (Il2CppGenericMethod *)func_?();
          if ((BytePacker *)this_04.genericMethod == (BytePacker *)0x0) break;
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)this_04.genericMethod,buffer,(MethodInfo *)0x0);
          this_05 = (KoGaMaPackageClient *)func_?();
          if (this_05 == (KoGaMaPackageClient *)0x0) break;
          KoGaMaPackageClient::KoGaMaPackageClient__ctor
                    (this_05,(BytePacker *)this_04.genericMethod,0,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_05,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_05,(MethodInfo *)0x0);
          this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)(this_05->fields).worldObjects;
          if (this_01 ==
              (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) break;
          this_06 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                              (this_01,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                              );
          if (this_06 ==
              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)0x0) break;
          pDVar7 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&stack0xffffffb8,this_06,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                             );
          pIStack_8 = (Il2CppClass *)0x0;
          OStack_2.klass = (Object__Class *)pDVar7->_dictionary;
          OStack_2.monitor = (MonitorData *)pDVar7->_index;
          pIStack_3 = (InvokerMethod)pDVar7->_version;
          pOStack_4 = pDVar7->_currentValue;
          while( true ) {
            this_07 = (MethodInfo *)&OStack_2;
            bVar9 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                *)this_07,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                              );
            if (bVar9 == 0) break;
            if (pOStack_4 == (Object *)0x0) goto code_?;
            if (pOStack_4[10].monitor == (MonitorData *)&UNK_?) {
              puVar10 = &UNK_?;
              RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)this_02,(int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_
                                );
              (pBVar6->_0).image = (Il2CppImage *)RVar5;
              func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (&OStack_2,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                         ,(MethodInfo *)&UNK_?);
              *unaff_FS_OFFSET = puVar10;
              return 1;
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (&OStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                     ,method_00);
          index = (MethodInfo *)((int)&index->methodPointer + 1);
          this_03 = this_02;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  bVar9 = (*pcVar11)();
  return bVar9;
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
    DStack_2._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
    DStack_2._version = 0;
    DStack_2._index = 0;
    DStack_2._current.key = 0;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(pCVar1->fields).categories;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_4,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                         );
      DStack_2._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3->_dictionary;
      DStack_2._version = pDVar3->_version;
      DStack_2._index = pDVar3->_index;
      DStack_2._current.key = (int32_t)(pDVar3->_current).key;
      DStack_2._16_8_ = *(undefined8 *)&(pDVar3->_current).value;
      do {
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_2,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                 ,(MethodInfo *)0xffffffff);
      this_01 = (pCVar1->fields).repository;
      if (this_01 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
        collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                                (Int32Enum__Enum)key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                               );
        this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)func_?();
        if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          puVar6 = &UNK_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor_1
                    (this_02,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                             collection,
                     MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                    );
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Reverse
                    (this_02,MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
          *unaff_FS_OFFSET = puVar6;
          return (List_1_ShopItem_ *)this_02;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pLVar8 = (List_1_ShopItem_ *)(*pcVar7)();
  return pLVar8;
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
     (this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(pPVar7->fields).categories,
     this_00 !=
     (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_9,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
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
                Int32Enum,System::Single]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    this_01 = *(Dictionary_2_System_Int32Enum_System_Object_ **)(unaff_ESI + 8);
    if (this_01 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      while (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                (this_01,unaff_EBX,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                                ), pOVar2 != (Object *)0x0) {
        if ((int)pOVar2[1].monitor <= index) {
          return iStack_1;
        }
        if (((*(Dictionary_2_System_Int32Enum_System_Object_ **)(unaff_ESI + 8) ==
              (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) ||
            (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 (*(Dictionary_2_System_Int32Enum_System_Object_ **)(unaff_ESI + 8),
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
        this_01 = *(Dictionary_2_System_Int32Enum_System_Object_ **)(unaff_ESI + 8);
        index = index + 1;
        iVar4 = *(int *)((int)RVar3 + 0x3c);
        if (*(int *)((int)RVar3 + 0x3c) <= iStack_1) {
          iVar4 = iStack_1;
        }
        iStack_1 = iVar4;
        if (this_01 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) break;
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
    if (this_00 == (PlayerInventoryRepository *)0x0) goto code_?;
    PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._playerInventoryRepository_k__BackingField = this_00;
    func_?(&(this->fields)._playerInventoryRepository_k__BackingField,this_00);
  }
  if ((this->fields)._clientShopRepository_k__BackingField == (ClientShopRepository *)0x0) {
    this_01 = (ClientShopRepository *)func_?(TypeInfo__ClientShopRepository);
    if (this_01 == (ClientShopRepository *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,category,
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (PlayerInventoryRepository *)func_?(TypeInfo__PlayerInventoryRepository);
  if (this_00 != (PlayerInventoryRepository *)0x0) {
    PlayerInventoryRepository::PlayerInventoryRepository__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._playerInventoryRepository_k__BackingField = this_00;
    func_?(&(this->fields)._playerInventoryRepository_k__BackingField,this_00);
    this_01 = (ClientShopRepository *)func_?(TypeInfo__ClientShopRepository);
    if (this_01 != (ClientShopRepository *)0x0) {
      ClientShopRepository::ClientShopRepository__ctor(this_01,(MethodInfo *)0x0);
      (this->fields)._clientShopRepository_k__BackingField = this_01;
      func_?(&(this->fields)._clientShopRepository_k__BackingField,this_01);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Dictionary`2[InventoryCategoryType,System.String] get_InventoryCategories() */

Dictionary_2_InventoryCategoryType_System_String_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_get_InventoryCategories
          (PlayerShopInventoryRepository *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields)._playerInventoryRepository_k__BackingField;
  if (pPVar2 != (PlayerInventoryRepository *)0x0) {
    return (pPVar2->fields).categories;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pDVar6 = (Dictionary_2_InventoryCategoryType_System_String_ *)(*pcVar5)();
  return pDVar6;
}


/* Dictionary`2[InventoryCategoryType,System.String] get_ShopCategories() */

Dictionary_2_InventoryCategoryType_System_String_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
PlayerShopInventoryRepository_get_ShopCategories
          (PlayerShopInventoryRepository *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields)._clientShopRepository_k__BackingField;
  if (pCVar2 != (ClientShopRepository *)0x0) {
    return (pCVar2->fields).categories;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pDVar6 = (Dictionary_2_InventoryCategoryType_System_String_ *)(*pcVar5)();
  return pDVar6;
}

