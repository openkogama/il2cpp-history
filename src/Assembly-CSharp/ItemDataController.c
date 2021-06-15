
/* InventoryItemData GetItemData(Int32) */

InventoryItemData *
Assembly-CSharp.dll::ItemDataController::ItemDataController_GetItemData
          (ItemDataController *this,int32_t slot,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pIStack_6 = (InventoryItemData *)0x0;
  uStack_7 = 0;
  iStack_8 = 0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_10 = 0xffffffff;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).inventoryItemDatas;
  puStack_11 = &stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    iVar12 = func_?(0);
  }
  else {
    puStack_11 = &stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_14,this_00,
                        MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                       );
    CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar13->l;
    CStack_9.monitor = (MonitorData *)pLVar13->next;
    CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13->ver;
    CStack_9.fields.syncRoot = (Object *)(pLVar13->current).rgba;
    uStack_1 = 0;
    do {
      cVar15 = func_?(&CStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                             );
      if (cVar15 == '\0') {
        iVar16 = 0x4b;
        goto code_?;
      }
      pIVar17 = (InventoryItemData *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_9,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__get_Current__
                         );
      if (pIVar17 == (InventoryItemData *)0x0) goto code_?;
    } while ((pIVar17->fields).slotIndex != slot);
    iVar16 = 0x4d;
    pIStack_6 = pIVar17;
code_?:
    uStack_1 = 0xffffffff;
    func_?(&CStack_9,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                   );
    iVar12 = iStack_8;
    if (iStack_8 == 0) {
      if (iVar16 != 0x4d) {
        *unaff_FS_OFFSET = uStack_3;
        return (InventoryItemData *)0x0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return pIStack_6;
    }
  }
  func_?(iVar12,0,0);
  pcVar18 = (code *)swi(3);
  pIVar17 = (InventoryItemData *)(*pcVar18)();
  return pIVar17;
}


/* Void InitializeTestData() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_InitializeTestData
               (ItemDataController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pTStack_8 = (TabState *)0x0;
  puStack_9 = (undefined4 *)&stack0xffffff8c;
  puStack_4 = &stack0xffffff8c;
  do {
    id = pTStack_8;
    pIVar10 = (InventoryItemData *)((int)pTStack_8 % 3);
    pTStack_11 = pTStack_8;
    pIStack_12 = pIVar10;
    pIStack_13 = (InventoryItemData *)func_?(TypeInfo__System__Int32,&pTStack_11);
    pTStack_14 = id;
    pDStack_15 = (Dictionary_2_System_Int32_TabState_ *)
                 func_?(TypeInfo__System__Int32,&pTStack_14);
    pIStack_16 = pIVar10;
    pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_16);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar18 = mscorlib.dll::System::String::String_Format_2
                       (StringLiteral_ItemId___0___SlotIndex___1___Cat,(Object *)pIStack_13,
                        (Object *)pDStack_15,pOVar17,(MethodInfo *)0x0);
    pIStack_13 = (InventoryItemData *)func_?(TypeInfo__InventoryItemData);
    InventoryItemData::InventoryItemData__ctor
              (pIStack_13,(int32_t)id,(int32_t)id,(int32_t)pIStack_12,pSVar18,(MethodInfo *)0x0);
    this_00 = (this->fields).inventoryItemDatas;
    if (this_00 == (List_1_InventoryItemData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pIStack_13,
               MethodInfo__System__Collections__Generic__List<InventoryItemData>__Add_InventoryItemData_
              );
    pDVar19 = (this->fields).categories;
    if (pDVar19 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
    bVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,(int32_t)pIStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      );
    if (bVar20 == 0) {
      pDStack_15 = (this->fields).categories;
      pIStack_13 = pIStack_12;
      pOVar17 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_13);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar18 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Category_,pOVar17,(MethodInfo *)0x0);
      slotsPrPage = (this->fields).numberOfSlots;
      pTStack_11 = (TabState *)func_?(TypeInfo__TabState);
      TabState::TabState__ctor(pTStack_11,pSVar18,slotsPrPage,(MethodInfo *)0x0);
      if (pDStack_15 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDStack_15,(int32_t)pIStack_12,
                 (Object *)pTStack_11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                );
      id = pTStack_8;
    }
    pDVar21 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).categories;
    if ((pDVar21 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0) ||
       (pTVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (pDVar21,(int32_t)pIStack_12,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                           ), pTVar22 == (TerrainUtility_TerrainMap *)0x0)) goto code_?;
    if ((int)(pTVar22->fields).m_patchSize.z < (int)id) {
      pDVar21 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).categories;
      if ((pDVar21 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) ||
         (pTVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar21,(int32_t)pIStack_12,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                             ), pTVar22 == (TerrainUtility_TerrainMap *)0x0)) goto code_?;
      (pTVar22->fields).m_patchSize.z = (float)id;
    }
    pTStack_8 = (TabState *)((int)&id->klass + 1);
  } while ((int)pTStack_8 < 0x14);
  pDVar19 = (this->fields).categories;
  if (pDVar19 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    pDVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                         &stack0xffffff98,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar19
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                        );
    auStack_6._0_4_ = pDVar23->dictionary;
    auStack_6._4_4_ = pDVar23->next;
    auStack_6._8_4_ = pDVar23->stamp;
    auStack_6._12_4_ = (pDVar23->current).key;
    auStack_6._16_4_ = (pDVar23->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar24 = func_?();
      if (cVar24 == '\0') {
        *puStack_9 = 0x100;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                            );
      this_01 = (this->fields).inventoryController;
      pIStack_13 = (InventoryItemData *)func_?();
      iVar25 = func_?();
      if ((iVar25 == 0) || (this_01 == (InventoryController *)0x0)) break;
      InventoryController::InventoryController_AddTab
                (this_01,(int32_t)pIStack_13,*(String **)(iVar25 + 0xc),(MethodInfo *)0x0);
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_PageTurned
               (ItemDataController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).categories;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,(this->fields).currentTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      bVar1 = TabState::TabState_UpdatePage((TabState *)this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SlotChanged(Int32, Int32) */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_SlotChanged
               (ItemDataController *this,int32_t fromSlotIndex,int32_t toSlotIndex,
               MethodInfo *method)

{
  pIVar1 = ItemDataController_GetItemData(this,fromSlotIndex,(MethodInfo *)0x0);
  pIVar2 = ItemDataController_GetItemData(this,toSlotIndex,(MethodInfo *)0x0);
  if (pIVar1 != (InventoryItemData *)0x0) {
    (pIVar1->fields).slotIndex = toSlotIndex;
    if (pIVar2 != (InventoryItemData *)0x0) {
      (pIVar2->fields).slotIndex = fromSlotIndex;
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_Start
               (ItemDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
  if (pIVar1 != (InventoryController *)0x0) {
    InventoryController::InventoryController_Initialize
              (pIVar1,(this->fields).numberOfSlots,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inventoryController;
    if (pIVar1 != (InventoryController *)0x0) {
      pUVar2 = (pIVar1->fields).OnPageTurned;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__ItemDataController__PageTurned_int_,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      pUVar4 = (UnityAction_1_System_Int32_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_1_System_Int32_ *)0x0;
      if (pUVar4 != (UnityAction_1_System_Int32_ *)0x0) {
        if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
          pUVar2 = pUVar4;
        }
        if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
      }
      (pIVar1->fields).OnPageTurned = pUVar2;
      pIVar1 = (this->fields).inventoryController;
      if (pIVar1 != (InventoryController *)0x0) {
        pUVar2 = (pIVar1->fields).OnTabSelected;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__ItemDataController__TabSelected_int_,
                   MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                  );
        pUVar4 = (UnityAction_1_System_Int32_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_1_System_Int32_ *)0x0;
        if (pUVar4 != (UnityAction_1_System_Int32_ *)0x0) {
          if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
            pUVar2 = pUVar4;
          }
          if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
        }
        (pIVar1->fields).OnTabSelected = pUVar2;
        pIVar1 = (this->fields).inventoryController;
        if (pIVar1 != (InventoryController *)0x0) {
          a = (pIVar1->fields).OnSlotChanged;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,MethodInfo__ItemDataController__SlotChanged_int__int_,
                     MethodInfo__UnityEngine__Events__UnityAction<int,_int>__UnityAction_System__Object__void__
                    );
          pUVar4 = (UnityAction_1_System_Int32_ *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)a,(Delegate *)pUVar3,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_1_System_Int32_ *)0x0;
          if (pUVar4 == (UnityAction_1_System_Int32_ *)0x0) {
code_?:
            (pIVar1->fields).OnSlotChanged = (UnityAction_2_System_Int32_System_Int32_ *)pUVar2;
            ItemDataController_InitializeTestData(this,(MethodInfo *)0x0);
            iVar5 = (this->fields).defaultCategoryID;
            if (iVar5 != (this->fields).currentTab) {
              (this->fields).currentTab = iVar5;
              ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
            }
            return;
          }
          if ((UnityAction_2_System_Int32_System_Int32___Class *)pUVar4->klass ==
              TypeInfo__UnityEngine__Events__UnityAction<int,_int>) {
            pUVar2 = pUVar4;
          }
          if (pUVar2 != (UnityAction_1_System_Int32_ *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
  pUVar4 = extraout_ECX;
code_?:
  func_?(pUVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_TabSelected
               (ItemDataController *this,int32_t tabId,MethodInfo *method)

{
  if (tabId != (this->fields).currentTab) {
    (this->fields).currentTab = tabId;
    ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_UpdateContent
               (ItemDataController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCStack_4 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  pMStack_5 = (MonitorData *)0x0;
  func_?();
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).categories;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pMVar6 = MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_;
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,(this->fields).currentTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    pIVar7 = (this->fields).inventoryController;
    if (pIVar7 == (InventoryController *)0x0) goto code_?;
    InventoryController::InventoryController_Clear(pIVar7,(MethodInfo *)0x0);
    tabId = (this->fields).currentTab;
    unaff_ESI = (this->fields).inventoryController;
    if (this_02 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
    currentPage = (this_02->fields).m_errorCode;
    maxPages = TabState::TabState_get_MaxPages((TabState *)this_02,(MethodInfo *)0x0);
    if (unaff_ESI == (InventoryController *)0x0) goto code_?;
    InventoryController::InventoryController_SelectTab
              (unaff_ESI,tabId,currentPage,maxPages,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).inventoryItemDatas;
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb4,this_01,
                          MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                         );
      pCStack_4 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
      pMStack_5 = (MonitorData *)pLVar8->next;
      uStack_1 = 0;
      while( true ) {
        do {
          do {
            cVar9 = func_?();
            if (cVar9 == '\0') {
              uStack_1 = 0xffffffff;
              func_?(&pCStack_4,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                             );
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            unaff_ESI = (InventoryController *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   &pCStack_4,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__get_Current__
                                  );
            if (unaff_ESI == (InventoryController *)0x0) goto code_?;
          } while ((unaff_ESI->fields).tabMenu != (TabMenuBase *)(this->fields).currentTab);
          pMVar6 = (MethodInfo *)0x0;
          if (this_02 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
          bVar10 = TabState::TabState_SlotIndexIsInRange
                            ((TabState *)this_02,(int32_t)(unaff_ESI->fields).inventorySlots,
                             in_stack_11);
        } while (bVar10 == 0);
        pXVar12 = (XpBoostParticlePreviewer *)(this->fields).testItemPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar12,
                            TestItem_MethodInfo__UnityEngine__Object__Instantiate<TestItem>_TestItem_
                           );
        pMVar6 = (MethodInfo *)0x0;
        if (pXVar12 == (XpBoostParticlePreviewer *)0x0) break;
        TestItem::TestItem_Initialize
                  ((TestItem *)pXVar12,(String *)(unaff_ESI->fields).numberOfSlots,
                   (int32_t)(unaff_ESI->fields).inventorySlots,in_stack_13);
        pIVar7 = (this->fields).inventoryController;
        item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pXVar12,(MethodInfo *)0x0);
        pMVar6 = (MethodInfo *)0x0;
        if (pIVar7 == (InventoryController *)0x0) break;
        InventoryController::InventoryController_AddObject
                  (pIVar7,item,
                   (int)(unaff_ESI->fields).inventorySlots % (this->fields).numberOfSlots,
                   (MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
code_?:
  pMVar6 = (MethodInfo *)0x0;
code_?:
  func_?(pMVar6);
  func_?(unaff_ESI,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* ItemDataController() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController__ctor
               (ItemDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).defaultCategoryID = 1;
  (this->fields).currentTab = -1;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<InventoryItemData>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<InventoryItemData>__List__);
  (this->fields).inventoryItemDatas = (List_1_InventoryItemData_ *)this_00;
  this_01 = (Dictionary_2_System_Int32_TabState_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  (this->fields).categories = this_01;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

