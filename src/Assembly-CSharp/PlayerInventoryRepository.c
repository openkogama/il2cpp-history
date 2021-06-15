
/* Void AddItem(InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_AddItem
               (PlayerInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    this_00 = (this->fields).repository;
    if (this_00 != (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (item->fields).itemCategoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__ContainsKey_int_
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
        this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (this_01,(item->fields).itemCategoryID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                            );
        if (this_04 != (TerrainUtility_TerrainMap *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_04,(UIPushOption__Enum)item,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                    );
          this_02 = (JumpState_OnWallJumpDelegate *)(this->fields).OnInventoryChanged;
          if (this_02 != (JumpState_OnWallJumpDelegate *)0x0) {
            JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                      (this_02,(MethodInfo *)0x0);
          }
          this_03 = (Action_2_Int32_Object_ *)(this->fields).OnInventoryItemAdded;
          if (this_03 != (Action_2_Int32_Object_ *)0x0) {
            System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                      (this_03,(item->fields).itemCategoryID,(Object *)(item->fields).slotPosition,
                       MethodInfo__System__Action<int,_int>__Invoke_int__int_);
          }
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


/* Void AddPurchasedItem(ShopItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_AddPurchasedItem
               (PlayerInventoryRepository *this,ShopItem *purchasedItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = (InventoryItem *)func_?(TypeInfo__InventoryItem);
  InventoryItem::InventoryItem__ctor_3(this_02,purchasedItem,(MethodInfo *)0x0);
  if (purchasedItem != (ShopItem *)0x0) {
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).repository;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (pDVar1,(purchasedItem->fields).itemCategoryID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                         );
      if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pTVar2,(UIPushOption__Enum)this_02,
                   MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                  );
        pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).repository;
        if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar1,(purchasedItem->fields).itemCategoryID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             );
          if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pTVar2,
                                MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__
                               );
            if (this_02 != (InventoryItem *)0x0) {
              (this_02->fields).slotPosition = (int32_t)((int)&pOVar3[-1].monitor + 3);
              this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnInventoryChanged;
              if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
                JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                          (this_00,(MethodInfo *)0x0);
              }
              this_01 = (Action_2_Int32_Object_ *)(this->fields).OnInventoryItemAdded;
              if (this_01 != (Action_2_Int32_Object_ *)0x0) {
                System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
                          (this_01,(this_02->fields).itemCategoryID,
                           (Object *)(this_02->fields).slotPosition,
                           MethodInfo__System__Action<int,_int>__Invoke_int__int_);
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 CategoryItemCount(Int32) */

int32_t Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_CategoryItemCount
                  (PlayerInventoryRepository *this,int32_t category,MethodInfo *method)

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
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                        );
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__
                         );
      return (int32_t)pOVar1;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerInventoryRepository___CountItemsWithOriginalID_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = item;
    if (item != (InventoryItem *)0x0) {
      if ((item->fields).originalItemID == 0) {
        return 1;
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).repository;
      if (this_00 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this_00,(item->fields).itemCategoryID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Func<InventoryItem,_bool>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this_01,
                   MethodInfo__PlayerInventoryRepository___CountItemsWithOriginalID_c__AnonStorey0____m__0_InventoryItem_
                   ,MethodInfo__System__Func<InventoryItem,_bool>__Func_System__Object__void__);
        iVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_4
                          ((IEnumerable_1_InventoryItem_ *)source,
                           (Func_2_InventoryItem_Boolean_ *)this_02,
                           int_MethodInfo__System__Linq__Enumerable__Count<InventoryItem>_System__Collections__Generic__IEnumerable<InventoryItem>__System__Func<InventoryItem,_bool>_
                          );
        return iVar1;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
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
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
    this_02 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_02,(IEnumerable_1_VoxelHit_ *)collection,
               MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
              );
    index = 0;
    while (this_02 != (List_1_VoxelHit_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__
                         );
      if ((int)pOVar6 <= index) {
        *item = (InventoryItem *)0x0;
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,index,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                         );
      if (pIVar7 == (IEventSystemHandler *)0x0) break;
      buffer = (Byte__Array *)pIVar7[2].monitor;
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
      pIVar9 = (InventoryItem *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,index,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                         );
      bStack_4 = 1;
      *item = pIVar9;
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


/* List`1[InventoryItem] GetItemsInCategory(InventoryCategoryType) */

List_1_InventoryItem_ *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategory
          (PlayerInventoryRepository *this,InventoryCategoryType__Enum category,MethodInfo *method)

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
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                           );
    this_01 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_01,(IEnumerable_1_VoxelHit_ *)collection,
               MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
              );
    if (this_01 != (List_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Reverse
                (this_01,MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__);
      return (List_1_InventoryItem_ *)this_01;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_InventoryItem_ *)(*pcVar1)();
  return pLVar2;
}


/* List`1[InventoryItem] GetItemsInCategorySlow(String) */

List_1_InventoryItem_ *
Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategorySlow
          (PlayerInventoryRepository *this,String *category,MethodInfo *method)

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
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                            );
      this_02 = (List_1_VoxelHit_ *)
                func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
                (this_02,(IEnumerable_1_VoxelHit_ *)unaff_ESI,
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__List_System__Collections__Generic__IEnumerable<InventoryItem>_
                );
      if (this_02 != (List_1_VoxelHit_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Reverse
                  (this_02,MethodInfo__System__Collections__Generic__List<InventoryItem>__Reverse__)
        ;
        *unaff_FS_OFFSET = pOStack_3;
        return (List_1_InventoryItem_ *)this_02;
      }
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar14 = (code *)swi(3);
  pLVar15 = (List_1_InventoryItem_ *)(*pcVar14)();
  return pLVar15;
}


/* Int32 HighestSlotIndex(InventoryCategoryType) */

int32_t Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_HighestSlotIndex
                  (PlayerInventoryRepository *this,InventoryCategoryType__Enum category,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).repository;
  pMVar2 = (MonitorData *)0x1;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    while (iVar3 = index,
          pTVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar1,category,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             ), pTVar4 != (TerrainUtility_TerrainMap *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pTVar4,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__
                         );
      if ((int)pOVar5 <= iVar3) {
        return (int32_t)pMVar2;
      }
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).repository;
      if ((pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) ||
         (pTVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar1,category,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                             ), pTVar4 == (TerrainUtility_TerrainMap *)0x0)) break;
      category = (InventoryCategoryType__Enum)
                 MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_;
      pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pTVar4,index,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                         );
      if (pIVar6 == (IEventSystemHandler *)0x0) break;
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).repository;
      index = index + 1;
      pMVar7 = pIVar6[7].monitor;
      if ((int)pIVar6[7].monitor <= (int)pMVar2) {
        pMVar7 = pMVar2;
      }
      pMVar2 = pMVar7;
      if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) break;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Void RemoveItem(InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem
               (PlayerInventoryRepository *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).repository;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (this_00,(item->fields).itemCategoryID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                          );
      if (this_02 != (TerrainUtility_TerrainMap *)0x0) {
        item_00._4_4_ =
             MethodInfo__System__Collections__Generic__List<InventoryItem>__Remove_InventoryItem_;
        item_00.rgba = (int32_t)item;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
        List_1_UnityEngine_Color32__Remove
                  ((List_1_UnityEngine_Color32_ *)this_02,item_00,unaff_retaddr);
        this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).OnInventoryChanged;
        if (this_01 != (JumpState_OnWallJumpDelegate *)0x0) {
          JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                    (this_01,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_RemoveItem_1
               (PlayerInventoryRepository *this,int32_t itemID,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).repository;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this = (PlayerInventoryRepository *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                     (this_00,1,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                     );
    index = 0;
    if (this != (PlayerInventoryRepository *)0x0) {
      do {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__
                           );
        if ((int)pOVar2 <= index) {
          this_01 = (JumpState_OnWallJumpDelegate *)(pPVar1->fields).OnInventoryChanged;
          if (this_01 != (JumpState_OnWallJumpDelegate *)0x0) {
            JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                      (this_01,(MethodInfo *)0x0);
          }
          return;
        }
        pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this,index,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           );
        if (pIVar3 == (IEventSystemHandler *)0x0) break;
        if (pIVar3[1].klass == (IEventSystemHandler__Class *)itemID) {
          this = (PlayerInventoryRepository *)(pPVar1->fields).repository;
          if ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)this ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) break;
          itemID = 1;
          this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)this,1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                              );
          if (this_02 == (TerrainUtility_TerrainMap *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                    ((List_1_MVPlayer_ *)this_02,index,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__RemoveAt_int_);
        }
        index = index + 1;
      } while( true );
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SwapItemSlotPositions(InventoryItem, InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_SwapItemSlotPositions
               (PlayerInventoryRepository *this,InventoryItem *from,InventoryItem *to,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_SwapItemSlotPositions,(MethodInfo *)0x0);
  if (from != (InventoryItem *)0x0) {
    iVar1 = (from->fields).slotPosition;
    if (to != (InventoryItem *)0x0) {
      (from->fields).slotPosition = (to->fields).slotPosition;
      (to->fields).slotPosition = iVar1;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateShopInventoryID(Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository_UpdateShopInventoryID
               (PlayerInventoryRepository *this,int32_t itemID,int32_t shopInventoryID,
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
                        (this_00,1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__get_Item_int_
                        );
    index = 0;
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      do {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__
                           );
        if ((int)pOVar1 <= index) {
          return;
        }
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           );
        pMVar3 = MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_;
        if (pIVar2 == (IEventSystemHandler *)0x0) break;
        if (pIVar2[1].klass == (IEventSystemHandler__Class *)itemID) {
          pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                              MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                             );
          if (pIVar2 == (IEventSystemHandler *)0x0) break;
          pIVar2[6].klass = (IEventSystemHandler__Class *)pMVar3;
          itemID = index;
        }
        index = index + 1;
      } while( true );
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PlayerInventoryRepository() */

void Assembly-CSharp.dll::PlayerInventoryRepository::PlayerInventoryRepository__ctor
               (PlayerInventoryRepository *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pDVar1 = (Dictionary_2_System_Int32_List_1_InventoryItem_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Dictionary__
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
               InventoryCategoryType__Enum_CubeModels,(Object *)StringLiteral_Cubeu000AModels,
               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__Add_InventoryCategoryType__System__String_
              );
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
                  (this_01,MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
        pDVar1 = (this->fields).repository;
        if (pDVar1 == (Dictionary_2_System_Int32_List_1_InventoryItem_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<InventoryItem>_>__Add_int__System__Collections__Generic__List<InventoryItem>_
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

