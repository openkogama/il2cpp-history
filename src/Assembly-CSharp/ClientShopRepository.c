
/* Void AddItem(ShopItem) */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_AddItem
               (ClientShopRepository *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (ShopItem *)0x0) {
    this_00 = (this->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Item_in_inventory_with_category_,(MethodInfo *)0x0);
        return;
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).repository;
      if (this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (this_01,(item->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                            );
        if (this_02 != (TerrainUtility_TerrainMap *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)item,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).repository;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,category,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                        );
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
      return (int32_t)pOVar1;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).categories;
  if (this_00 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[InventoryCategoryType,System::
             Object]::Dictionary_2_InventoryCategoryType_System_Object__get_Item
                       ((Dictionary_2_InventoryCategoryType_System_Object_ *)this_00,category,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                       );
    return pSVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  func_?();
  iStack_5 = -1;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).repository;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this_00,inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_02 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_02,(IEnumerable_1_VoxelHit_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    index = 0;
    while (this_02 != (List_1_VoxelHit_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                          MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
      if ((int)pOVar6 <= index) {
        *item = (ShopItem *)0x0;
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,index,
                          MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
      if (pIVar7 == (IEventSystemHandler *)0x0) break;
      buffer = (Byte__Array *)pIVar7[3].monitor;
      this_03 = (BytePacker *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (this_03,buffer,(MethodInfo *)0x0);
      this_04 = (KoGaMaPackageClient *)func_?();
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_04,this_03,0,(MethodInfo *)0x0);
      if (this_04 == (KoGaMaPackageClient *)0x0) break;
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_04,(MethodInfo *)0x0);
      KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_04,(MethodInfo *)0x0);
      this_01 = (this_04->fields).worldObjects;
      if ((this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) ||
         (this_05 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[WinningConditionType,System::Object]::
                    Dictionary_2_WinningConditionType_System_Object__get_Values
                              ((Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                              ),
         this_05 ==
         (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0))
      break;
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffac,this_05,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        cVar8 = func_?();
        if (cVar8 == '\0') {
          *(undefined4 *)(&stack0xffffffa0 + (iStack_5 + 1) * 4) = 0xa6;
          goto code_?;
        }
        this_06 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                  func_?();
        if (this_06 ==
            (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
        goto code_?;
        pOVar6 = System.Core.dll::System::Linq::
                 Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                 Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           (this_06,(MethodInfo *)0x0);
      } while (pOVar6 != (Object *)wo);
      if (this_02 == (List_1_VoxelHit_ *)0x0) break;
      pSVar9 = (ShopItem *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,index,
                          MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
      bStack_4 = 1;
      *item = pSVar9;
      *(undefined4 *)(&stack0xffffffa0 + (iStack_5 + 1) * 4) = 0xbb;
code_?:
      iVar10 = iStack_5 + 1;
      uStack_1 = 0xffffffff;
      func_?();
      if (iVar10 != -1) {
        if (*(int *)(&stack0xffffffa0 + iVar10 * 4) == 0xbb) {
          *unaff_FS_OFFSET = uStack_3;
          return bStack_4;
        }
        if ((*(int *)(&stack0xffffffa0 + iVar10 * 4) == 0xa6) && (-1 < iVar10)) {
          iVar10 = iStack_5;
        }
      }
      iStack_5 = iVar10;
      index = index + 1;
    }
  }
code_?:
  uVar11 = func_?(0);
  func_?(uVar11,0,0);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* List`1[ShopItem] GetItemsInCategory(InventoryCategoryType) */

List_1_ShopItem_ *
Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_GetItemsInCategory
          (ClientShopRepository *this,InventoryCategoryType__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).repository;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this_00,category,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_01 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_01,(IEnumerable_1_VoxelHit_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    return (List_1_ShopItem_ *)this_01;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_ShopItem_ *)(*pcVar1)();
  return pLVar2;
}


/* List`1[ShopItem] GetItemsInCategorySlow(String) */

List_1_ShopItem_ *
Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_GetItemsInCategorySlow
          (ClientShopRepository *this,String *category,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pOStack_4 = (Object__Array *)&stack0xffffffa4;
  pOVar5 = (Object__Array *)&stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pOVar5 = pOStack_4;
  }
  pOStack_4 = pOVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pLStack_8 = (Link__Array *)0x0;
  this_00 = (this->fields).categories;
  pWStack_9 = (WinningConditionType__Enum__Array *)&stack0xffffffa4;
  pOStack_4 = (Object__Array *)&stack0xffffffa4;
  if (this_00 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) {
    pWStack_9 = (WinningConditionType__Enum__Array *)&stack0xffffffa4;
    pOStack_4 = (Object__Array *)&stack0xffffffa4;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_11,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    iStack_1 = 0;
    do {
      cVar12 = func_?();
      if (cVar12 == '\0') {
        key = 0;
        pWStack_9->klass = (WinningConditionType__Enum__Array__Class *)0x59;
        goto code_?;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                            );
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<InventoryCategoryType,_System::String>__get_Value__
      ;
      a = (String *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar13 = mscorlib.dll::System::String::String_op_Equality(a,category,(MethodInfo *)0x0);
    } while (bVar13 == 0);
    key = func_?();
    pWStack_9->klass = (WinningConditionType__Enum__Array__Class *)0x59;
code_?:
    unaff_ESI = (TerrainUtility_TerrainMap *)0x0;
    iStack_1 = -1;
    func_?();
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).repository;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (this_01,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                            );
      this_02 = (List_1_VoxelHit_ *)
                func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
                (this_02,(IEnumerable_1_VoxelHit_ *)unaff_ESI,
                 MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
                );
      if (this_02 != (List_1_VoxelHit_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Reverse
                  (this_02,MethodInfo__System__Collections__Generic__List<ShopItem>__Reverse__);
        *unaff_FS_OFFSET = pOStack_3;
        return (List_1_ShopItem_ *)this_02;
      }
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar14 = (code *)swi(3);
  pLVar15 = (List_1_ShopItem_ *)(*pcVar14)();
  return pLVar15;
}


/* Boolean IsItemShopInventory(String, InventoryCategoryType) */

bool Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_IsItemShopInventory
               (ClientShopRepository *this,String *itemName,
               InventoryCategoryType__Enum inventoryCategory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).repository;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this_00,inventoryCategory,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                           );
    this_01 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<ShopItem>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_01,(IEnumerable_1_VoxelHit_ *)collection,
               MethodInfo__System__Collections__Generic__List<ShopItem>__List_System__Collections__Generic__IEnumerable<ShopItem>_
              );
    index = 0;
    if (this_01 != (List_1_VoxelHit_ *)0x0) {
      while( true ) {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
        if ((int)pOVar1 <= index) {
          return 0;
        }
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                            MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_)
        ;
        if (pIVar2 == (IEventSystemHandler *)0x0) break;
        a = (String *)pIVar2[2].monitor;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar3 = mscorlib.dll::System::String::String_op_Equality(a,itemName,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          return 1;
        }
        index = index + 1;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void RemoveItem(ShopItem) */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository_RemoveItem
               (ClientShopRepository *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((item != (ShopItem *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).repository,
     this_00 !=
     (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)0x0
     )) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,(item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                        );
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      item_00._4_4_ = MethodInfo__System__Collections__Generic__List<ShopItem>__Remove_ShopItem_;
      item_00.rgba = (int32_t)item;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Remove
                ((List_1_UnityEngine_Color32_ *)this_01,item_00,(MethodInfo *)this);
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
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  this_00 = (this->fields).repository;
  puStack_11 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((this_00 != (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) &&
     (puStack_11 = (undefined4 *)&stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_13,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_System::Collections::Generic::List<ShopItem>_>__GetEnumerator__
                       );
    pDStack_7 = (pDVar12->host_enumerator).dictionary;
    iStack_8 = (pDVar12->host_enumerator).next;
    iStack_9 = (pDVar12->host_enumerator).stamp;
    iStack_10 = (pDVar12->host_enumerator).current.key;
    pOStack_6 = (pDVar12->host_enumerator).current.value;
    uStack_1 = 0;
    do {
      cVar14 = func_?();
      if (cVar14 == '\0') {
        *puStack_11 = 0x8a;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pIVar15 = (IOrderedEnumerable_1_System_Object_ *)func_?();
      if (TypeInfo__ClientShopRepository->static_fields->__f__am_cache0 ==
          (Func_2_ShopItem_Int32_ *)0x0) {
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Func<ShopItem,_int>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)0x0,
                   MethodInfo__ClientShopRepository___ReorganizeBySlotPositions_m__0_ShopItem_,
                   MethodInfo__System__Func<ShopItem,_int>__Func_System__Object__void__);
        TypeInfo__ClientShopRepository->static_fields->__f__am_cache0 =
             (Func_2_ShopItem_Int32_ *)this_02;
      }
      pIVar15 = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                         (pIVar15,(Func_2_Object_Int64_ *)
                                 TypeInfo__ClientShopRepository->static_fields->__f__am_cache0,
                          System__Linq__IOrderedEnumerable<ShopItem>_MethodInfo__System__Linq__Enumerable__OrderBy<ShopItem,_int>_System__Collections__Generic__IEnumerable<ShopItem>__System__Func<ShopItem,_int>_
                         );
      this_03 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                          ((IEnumerable_1_UseInteractor_ *)pIVar15,
                           System__Collections__Generic__List<ShopItem>_MethodInfo__System__Linq__Enumerable__ToList<ShopItem>_System__Collections__Generic__IEnumerable<ShopItem>_
                          );
      unaff_ESI = (IEventSystemHandler__Class *)0x0;
      while( true ) {
        if (this_03 == (List_1_UseInteractor_ *)0x0) goto code_?;
        pOVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                            MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
        if ((int)pOVar16 <= (int)unaff_ESI) break;
        pIVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,
                            (int32_t)unaff_ESI,
                            MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_)
        ;
        if (pIVar17 == (IEventSystemHandler *)0x0) goto code_?;
        pIVar17[5].klass = unaff_ESI;
        unaff_ESI = (IEventSystemHandler__Class *)((int)&(unaff_ESI->_0).image + 1);
      }
    } while( true );
  }
code_?:
  func_?(0);
  func_?(unaff_ESI);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Int32 <ReorganizeBySlotPositions>m__0(ShopItem) */

int32_t Assembly-CSharp.dll::ClientShopRepository::
        ClientShopRepository__ReorganizeBySlotPositions_m__0(ShopItem *o,MethodInfo *method)

{
  if (o != (ShopItem *)0x0) {
    return (o->fields).slotPosition;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* ClientShopRepository() */

void Assembly-CSharp.dll::ClientShopRepository::ClientShopRepository__ctor
               (ClientShopRepository *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pDVar1 = (Dictionary_2_System_Int32_List_1_ShopItem_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Dictionary__
            );
  (this->fields).repository = pDVar1;
  pDVar2 = (Dictionary_2_InventoryCategoryType_System_String_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Dictionary__
            );
  if (pDVar2 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[InventoryCategoryType,System::Object]::
    Dictionary_2_InventoryCategoryType_System_Object__Add
              ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar2,
               InventoryCategoryType__Enum_PremiumModels,(Object *)StringLiteral_Premiumu000AModels,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[InventoryCategoryType,System::Object]::
    Dictionary_2_InventoryCategoryType_System_Object__Add
              ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar2,
               InventoryCategoryType__Enum_Pickups,(Object *)StringLiteral_Pickups,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[InventoryCategoryType,System::Object]::
    Dictionary_2_InventoryCategoryType_System_Object__Add
              ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar2,
               InventoryCategoryType__Enum_Blueprints,(Object *)StringLiteral_Blueprints,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[InventoryCategoryType,System::Object]::
    Dictionary_2_InventoryCategoryType_System_Object__Add
              ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar2,
               InventoryCategoryType__Enum_Logic,(Object *)StringLiteral_Logic,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    pDVar3 = pDVar2;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[InventoryCategoryType,System::Object]::
    Dictionary_2_InventoryCategoryType_System_Object__Add
              ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar2,
               InventoryCategoryType__Enum_AdvancedLogic,(Object *)StringLiteral_Advancedu000ALogic,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
    (this->fields).categories = pDVar2;
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_retaddr);
    pDVar2 = (this->fields).categories;
    if ((pDVar2 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) &&
       (this_00 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                            ),
       this_00 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffbc,
                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                 this_00,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                );
      while( true ) {
        cVar4 = func_?();
        if (cVar4 == '\0') {
          func_?();
          *unaff_FS_OFFSET = pDVar3;
          return;
        }
        key = func_?();
        this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  (this_01,MethodInfo__System__Collections__Generic__List<ShopItem>__List__);
        pDVar1 = (this->fields).repository;
        if (pDVar1 == (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__Add_int__System__Collections__Generic__List<ShopItem>_
                  );
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

