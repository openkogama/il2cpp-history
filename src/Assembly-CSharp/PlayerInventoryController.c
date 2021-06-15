
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_Activate
               (PlayerInventoryController *this,UIPushOption__Enum options,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
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
  method_00 = TypeInfo__PlayerInventoryController___Activate_c__AnonStorey0;
  puStack_8 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  this_01 = (ScaleAnimationBase *)func_?();
  pSStack_9 = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pSStack_10 = this_01;
  if (this_01 == (ScaleAnimationBase *)0x0) goto code_?;
  (this_01->fields)._._._._.m_CachedPtr = (void *)options;
  (this_01->fields).state = (int32_t)this;
  pIVar11 = (this->fields).inventoryController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar12 != 0) goto code_?;
  PlayerInventoryController_UpdatePageCount(this,(MethodInfo *)0x0);
  pIVar11 = (this->fields).inventoryControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  method_01 = 
  InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
  ;
  pIVar11 = (InventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pIVar11,
                      InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                     );
  (this->fields).inventoryController = pIVar11;
  if (pIVar11 == (InventoryController *)0x0) goto code_?;
  pUVar13 = (pIVar11->fields).OnTabSelected;
  pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar14,(Object *)this,MethodInfo__PlayerInventoryController__TabSelected_int_,
             MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__);
  pUVar15 = (UnityAction_1_System_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar13,(Delegate *)pUVar14,(MethodInfo *)0x0);
  pUVar13 = (UnityAction_1_System_Int32_ *)0x0;
  if (pUVar15 == (UnityAction_1_System_Int32_ *)0x0) {
code_?:
    (pIVar11->fields).OnTabSelected = pUVar13;
    pIVar11 = (this->fields).inventoryController;
    if (pIVar11 == (InventoryController *)0x0) goto code_?;
    pUVar13 = (pIVar11->fields).OnPageTurned;
    pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar14,(Object *)this,MethodInfo__PlayerInventoryController__PageTurned_int_,
               MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
              );
    pUVar15 = (UnityAction_1_System_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar13,(Delegate *)pUVar14,(MethodInfo *)0x0);
    pUVar13 = (UnityAction_1_System_Int32_ *)0x0;
    if (pUVar15 != (UnityAction_1_System_Int32_ *)0x0) {
      if (pUVar15->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
        pUVar13 = pUVar15;
      }
      pUVar16 = (UnityAction_2_System_Int32_System_Int32___Class *)
                TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pUVar13 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    }
    (pIVar11->fields).OnPageTurned = pUVar13;
    pIVar11 = (this->fields).inventoryController;
    if (pIVar11 == (InventoryController *)0x0) goto code_?;
    a = (pIVar11->fields).OnSlotChanged;
    pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar14,(Object *)this,MethodInfo__PlayerInventoryController__SlotChanged_int__int_,
               MethodInfo__UnityEngine__Events__UnityAction<int,_int>__UnityAction_System__Object__void__
              );
    pUVar15 = (UnityAction_1_System_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)pUVar14,(MethodInfo *)0x0);
    pUVar13 = (UnityAction_1_System_Int32_ *)0x0;
    if (pUVar15 != (UnityAction_1_System_Int32_ *)0x0) {
      if ((UnityAction_2_System_Int32_System_Int32___Class *)pUVar15->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<int,_int>) {
        pUVar13 = pUVar15;
      }
      pUVar16 = TypeInfo__UnityEngine__Events__UnityAction<int,_int>;
      if (pUVar13 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    }
    (pIVar11->fields).OnSlotChanged = (UnityAction_2_System_Int32_System_Int32_ *)pUVar13;
    pPVar17 = (this->fields).repository;
    if (pPVar17 == (PlayerInventoryRepository *)0x0) goto code_?;
    a_00 = (pPVar17->fields).OnInventoryChanged;
    pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar14,(Object *)this,MethodInfo__PlayerInventoryController__InventoryChanged__,
               (MethodInfo *)0x0);
    pUVar15 = (UnityAction_1_System_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a_00,(Delegate *)pUVar14,(MethodInfo *)0x0);
    pUVar13 = (UnityAction_1_System_Int32_ *)0x0;
    if (pUVar15 != (UnityAction_1_System_Int32_ *)0x0) {
      if ((Action__Class *)pUVar15->klass == TypeInfo__System__Action) {
        pUVar13 = pUVar15;
      }
      pUVar16 = (UnityAction_2_System_Int32_System_Int32___Class *)TypeInfo__System__Action;
      if (pUVar13 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    }
    (pPVar17->fields).OnInventoryChanged = (Action *)pUVar13;
    pIVar11 = (this->fields).inventoryController;
    if (pIVar11 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Initialize
                (pIVar11,(this->fields).numberOfSlotsPrPage,method_01);
      this_00 = (this->fields).tabs;
      if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
        pDVar18 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                            ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                              *)&stack0xffffffac,
                             (Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                            );
        auStack_6._0_4_ = pDVar18->dictionary;
        auStack_6._4_4_ = pDVar18->next;
        auStack_6._8_4_ = pDVar18->stamp;
        auStack_6._12_4_ = (pDVar18->current).key;
        auStack_6._16_4_ = (pDVar18->current).value;
        uStack_1 = 0;
        while (cVar19 = func_?(), cVar19 != '\0') {
          KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_6,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                                );
          pIVar11 = (this->fields).inventoryController;
          categoryId = func_?();
          iVar20 = func_?();
          if ((iVar20 == 0) || (pIVar11 == (InventoryController *)0x0)) goto code_?;
          InventoryController::InventoryController_AddTab
                    (pIVar11,categoryId,*(String **)(iVar20 + 0xc),(MethodInfo *)0x0);
        }
        *puStack_8 = 0x140;
        uStack_1 = 0xffffffff;
        func_?();
        pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__PlayerInventoryController->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar14,(Object *)0x0,
                     MethodInfo__PlayerInventoryController___Activate_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__PlayerInventoryController->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar14;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__PlayerInventoryController->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar21,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar14,(Object *)pSStack_9,
                   MethodInfo__PlayerInventoryController___Activate_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar21,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar14,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  else {
    if (pUVar15->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
      pUVar13 = pUVar15;
    }
    pUVar16 = (UnityAction_2_System_Int32_System_Int32___Class *)
              TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (pUVar13 != (UnityAction_1_System_Int32_ *)0x0) goto code_?;
code_?:
    func_?(pUVar15,pUVar16);
    func_?();
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void ActivateAtCategoryWithSlot(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_ActivateAtCategoryWithSlot
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
               int32_t slotPosition,MethodInfo *method)

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
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar9 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (((pIVar9 != (IEditModeUI *)0x0) && (iVar10 = func_?(), iVar10 != 0)) &&
     (*(Dictionary_2_InventoryCategoryType_System_Object_ **)(iVar10 + 0xc) !=
      (Dictionary_2_InventoryCategoryType_System_Object_ *)0x0)) {
    a = (String *)
        mscorlib.dll::System::Collections::Generic::Dictionary`2[InventoryCategoryType,System::
        Object]::Dictionary_2_InventoryCategoryType_System_Object__get_Item
                  (*(Dictionary_2_InventoryCategoryType_System_Object_ **)(iVar10 + 0xc),categoryId,
                   MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                  );
    this_00 = (this->fields).tabsNonLocalized;
    if (this_00 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffffb4,
                          (Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar11->dictionary;
      auStack_6._4_4_ = pDVar11->next;
      auStack_6._8_4_ = pDVar11->stamp;
      auStack_6._12_4_ = (pDVar11->current).key;
      auStack_6._16_4_ = (pDVar11->current).value;
      uStack_1 = 0;
      do {
        cVar12 = func_?();
        if (cVar12 == '\0') goto code_?;
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                              );
        auStack_6._0_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
        ;
        b = (String *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        method_00 = (MethodInfo *)&UNK_?;
        bVar13 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      } while (bVar13 == 0);
      iVar14 = func_?();
      (this->fields).selectedTab = iVar14;
code_?:
      unaff_ESI = 0;
      *puStack_8 = 0x79;
      uStack_1 = 0xffffffff;
      func_?();
      iVar10 = (this->fields).numberOfSlotsPrPage;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_CeilToInt
                        (((float)slotPosition + _UNK_?) / (float)iVar10,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).tabs;
      if ((this_01 !=
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) &&
         (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (this_01,(this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), this_03 != (TerrainUtility_TerrainMap *)0x0)) {
        TabState::TabState_SetPage((TabState *)this_03,iVar14,method_00);
        this_02 = (this->fields).inventoryController;
        if (this_02 != (InventoryController *)0x0) {
          InventoryController::InventoryController_HighlightSlot
                    (this_02,slotPosition % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
          PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
  func_?();
  func_?(unaff_ESI,0,0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void DragFailed() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_DragFailed
               (PlayerInventoryController *this,MethodInfo *method)

{
  (this->fields).draggedPreviewItem = (PlayerInventoryPreviewItem *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar3,StringLiteral_Preview_Root___PlayerInventory,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    (this->fields).previewRootTransform = pTVar1;
    iVar4 = 0;
    pLVar5 = (this->fields).previewedObjects;
    while (pLVar5 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).previewedObjects;
      if ((int)pOVar6 <= iVar4) {
        if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
        if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
          func_?(TypeInfo__InventoryItemDragHandler);
        }
        bVar2 = InventoryItemDragHandler::InventoryItemDragHandler_get_Dragging((MethodInfo *)0x0);
        if (bVar2 != 0) {
          pLVar5 = (this->fields).previewedObjects;
          if (pLVar5 == (List_1_MVWorldObjectClient_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar5,
                     (UIPushOption__Enum)(this->fields).worldObjectDataCopy,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
          this_01 = (PrefabPool *)(this->fields).worldObjectDataCopy;
          if ((this_01 == (PrefabPool *)0x0) ||
             (this_05 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0),
             this_05 == (MVPointLightObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    ((Transform *)this_05,(this->fields).previewRootTransform,(MethodInfo *)0x0);
          pIVar7 = (this->fields).draggedPreview;
          if ((pIVar7 == (InventoryItemPreviewer *)0x0) ||
             ((this_02 = (pIVar7->fields).previewCam, this_02 == (Camera *)0x0 ||
              (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this_02,(MethodInfo *)0x0),
              pTVar1 == (Transform *)0x0)))) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar1,(this->fields).previewRootTransform,(MethodInfo *)0x0);
        }
        pIVar8 = (this->fields).inventoryController;
        if (pIVar8 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Clear(pIVar8,(MethodInfo *)0x0);
          pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).tabs;
          pIVar8 = (this->fields).inventoryController;
          key = (this->fields).selectedTab;
          if ((((pDVar9 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) &&
               (pTVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (pDVar9,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                    ), pTVar10 != (TerrainUtility_TerrainMap *)0x0)) &&
              (pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)(this->fields).tabs,
              pDVar9 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0)) &&
             ((pTVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (pDVar9,(this->fields).selectedTab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   ), pTVar10 != (TerrainUtility_TerrainMap *)0x0 &&
              (maxPages = TabState::TabState_get_MaxPages((TabState *)pTVar10,(MethodInfo *)0x0),
              pIVar8 != (InventoryController *)0x0)))) {
            InventoryController::InventoryController_SelectTab
                      (pIVar8,key,0xADDR,maxPages,(MethodInfo *)0x0);
            this_03 = (this->fields).tabsNonLocalized;
            this_04 = (this->fields).repository;
            if ((this_03 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
               (pTVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                      *)this_03,(this->fields).selectedTab,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                    ), this_04 != (PlayerInventoryRepository *)0x0)) {
              pLVar11 = PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategorySlow
                                  (this_04,(String *)pTVar10,(MethodInfo *)0x0);
              (this->fields).items = pLVar11;
              iVar4 = 0;
              goto joined_?;
            }
          }
        }
        break;
      }
      if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
      pMVar12 = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,iVar4,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
      if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVWorldObjectClient);
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar12,(MethodInfo *)0x0);
      iVar4 = iVar4 + 1;
      pLVar5 = (this->fields).previewedObjects;
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
joined_?:
  if (pLVar11 == (List_1_InventoryItem_ *)0x0) goto code_?;
  pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11,
                      MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
  if ((int)pOVar6 <= iVar4) {
    return;
  }
  pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).tabs;
  if (pDVar9 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) goto code_?;
  pTVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                      (pDVar9,(this->fields).selectedTab,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                      );
  pLVar11 = (this->fields).items;
  if (((pLVar11 == (List_1_InventoryItem_ *)0x0) ||
      (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,iVar4,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           ), pIVar14 == (IEventSystemHandler *)0x0)) ||
     (pTVar10 == (TerrainUtility_TerrainMap *)0x0)) goto code_?;
  bVar2 = TabState::TabState_SlotIndexIsInRange
                    ((TabState *)pTVar10,(int32_t)pIVar14[7].monitor,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pPVar15 = (this->fields).draggedPreviewItem;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pPVar15,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pLVar11 = (this->fields).items;
      if ((((pLVar11 == (List_1_InventoryItem_ *)0x0) ||
           (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,
                                 iVar4,
                                 MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                                ), pIVar14 == (IEventSystemHandler *)0x0)) ||
          (pPVar15 = (this->fields).draggedPreviewItem, pPVar15 == (PlayerInventoryPreviewItem *)0x0
          )) || (pIVar16 = (pPVar15->fields).item, pIVar16 == (InventoryItem *)0x0))
      goto code_?;
      if (pIVar14[1].klass == (IEventSystemHandler__Class *)(pIVar16->fields).itemID) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Drag_preview_item_found,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    pPVar15 = (this->fields).previewItemPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar15 = (PlayerInventoryPreviewItem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)pPVar15,
                         PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                        );
    pLVar11 = (this->fields).items;
    if (pLVar11 == (List_1_InventoryItem_ *)0x0) goto code_?;
    this_06 = pPVar15;
    pIVar16 = (InventoryItem *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,iVar4,
                         MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                        );
    pMVar12 = PlayerInventoryController_GetWorldObjectFromItemData(pIVar16,(MethodInfo *)0x0);
    pLVar5 = (this->fields).previewedObjects;
    if (pLVar5 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar5,(UIPushOption__Enum)pMVar12,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              );
    pTVar1 = (this->fields).previewRootTransform;
    pLVar11 = (this->fields).items;
    if (pLVar11 == (List_1_InventoryItem_ *)0x0) goto code_?;
    pIVar16 = (InventoryItem *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,iVar4,
                         MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                        );
    if ((this->fields).selectedTab == 1) {
      pLVar11 = (this->fields).items;
      if ((pLVar11 == (List_1_InventoryItem_ *)0x0) ||
         (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,
                               iVar4,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              ), pIVar14 == (IEventSystemHandler *)0x0)) goto code_?;
      draggable = *(char *)((int)&pIVar14[5].monitor + 1) == '\0';
    }
    else {
      draggable = false;
    }
    if (pPVar15 == (PlayerInventoryPreviewItem *)0x0) goto code_?;
    PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
              (pPVar15,pTVar1,pIVar16,pMVar12,draggable,(MethodInfo *)0x0);
    pIVar8 = (this->fields).inventoryController;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this_06,(MethodInfo *)0x0);
    pLVar11 = (this->fields).items;
    if (((pLVar11 == (List_1_InventoryItem_ *)0x0) ||
        (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,iVar4
                              ,
                              MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                             ), pIVar14 == (IEventSystemHandler *)0x0)) ||
       (pIVar8 == (InventoryController *)0x0)) goto code_?;
    InventoryController::InventoryController_AddObject
              (pIVar8,(GameObject *)pLVar11,
               (int)pIVar14[7].monitor % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
  }
code_?:
  pLVar11 = (this->fields).items;
  iVar4 = iVar4 + 1;
  goto joined_?;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(InventoryItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_GetWorldObjectFromItemData
          (InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    buffer = (item->fields).data;
    this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,buffer,(MethodInfo *)0x0);
    this_01 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_01,this_00,0,(MethodInfo *)0x0);
    if (this_01 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
      this = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this_01->fields).worldObjects;
      if (this != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
        pMVar1 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                           (this,(this_01->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        return pMVar1;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_Initialize
               (PlayerInventoryController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
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
  puStack_11 = (undefined4 *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_11 = (undefined4 *)&stack0xffffff98, puStack_4 = &stack0xffffff98,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_11 = (undefined4 *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar12 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar12 != (IEditModeUI *)0x0) {
    pPVar13 = (PlayerInventoryRepository *)func_?(6,TypeInfo__IEditModeUI);
    pDStack_14 = (Dictionary_2_System_Int32_System_String_ *)0x1;
    (this->fields).repository = pPVar13;
    (this->fields).selectedTab = 1;
    if (((pPVar13 != (PlayerInventoryRepository *)0x0) &&
        (pDVar15 = (pPVar13->fields).categories,
        pDVar15 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) &&
       (this_00 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar15,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                            ),
       this_00 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) {
      pDVar16 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                           *)&stack0xffffffa4,
                          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                           *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                         );
      pDStack_7 = (pDVar16->host_enumerator).dictionary;
      iStack_8 = (pDVar16->host_enumerator).next;
      iStack_9 = (pDVar16->host_enumerator).stamp;
      iStack_10 = (pDVar16->host_enumerator).current.key;
      pOStack_6 = (pDVar16->host_enumerator).current.value;
      uStack_1 = 0;
      while (cVar17 = func_?(&pDStack_7), cVar17 != '\0') {
        IStack_18 = func_?(&pDStack_7);
        pPVar13 = (this->fields).repository;
        unaff_EDI = (this->fields).tabsNonLocalized;
        if (((pPVar13 == (PlayerInventoryRepository *)0x0) ||
            (pDVar15 = (pPVar13->fields).categories,
            pDVar15 == (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) ||
           (pTVar19 = (TerrainUtility_TerrainMap *)
                      mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[InventoryCategoryType,System::Object]::
                      Dictionary_2_InventoryCategoryType_System_Object__get_Item
                                ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar15,
                                 IStack_18,
                                 MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                                ), unaff_EDI == (Dictionary_2_System_Int32_System_String_ *)0x0))
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)unaff_EDI,(int32_t)pDStack_14,pTVar19,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                  );
        pPVar13 = (this->fields).repository;
        unaff_EDI = (Dictionary_2_System_Int32_System_String_ *)(this->fields).tabs;
        pDStack_20 = unaff_EDI;
        if ((pPVar13 == (PlayerInventoryRepository *)0x0) ||
           (pDVar15 = (pPVar13->fields).categories,
           pDVar15 == (Dictionary_2_InventoryCategoryType_System_String_ *)0x0))
        goto code_?;
        key_00 = (String *)
                 mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[InventoryCategoryType,System::Object]::
                 Dictionary_2_InventoryCategoryType_System_Object__get_Item
                           ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar15,IStack_18,
                            MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                           );
        pSStack_21 = TM::TM__(key_00,(MethodInfo *)0x0);
        iStack_22 = (this->fields).numberOfSlotsPrPage;
        pTStack_23 = (TerrainUtility_TerrainMap *)func_?();
        TabState::TabState__ctor((TabState *)pTStack_23,pSStack_21,iStack_22,(MethodInfo *)0x0);
        key = pDStack_14;
        if (unaff_EDI == (Dictionary_2_System_Int32_System_String_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)pDStack_20,(int32_t)pDStack_14,pTStack_23,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                  );
        pDVar24 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).tabs;
        unaff_EDI = key;
        if (pDVar24 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        unaff_EDI = (Dictionary_2_System_Int32_System_String_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar24,(int32_t)key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
        pPVar13 = (this->fields).repository;
        if ((pPVar13 == (PlayerInventoryRepository *)0x0) ||
           (pIVar25 = (Int32__Array *)
                      PlayerInventoryRepository::PlayerInventoryRepository_HighestSlotIndex
                                (pPVar13,IStack_18,(MethodInfo *)0x0),
           unaff_EDI == (Dictionary_2_System_Int32_System_String_ *)0x0)) goto code_?;
        pDStack_14 = (Dictionary_2_System_Int32_System_String_ *)((int)&pDStack_14->klass + 1);
        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Fields
          *)&unaff_EDI->fields)->keySlots = pIVar25;
      }
      unaff_EDI = (Dictionary_2_System_Int32_System_String_ *)0x0;
      *puStack_11 = 0xc6;
      uStack_1 = 0xffffffff;
      func_?(&pDStack_7);
      pDVar24 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).tabs;
      if ((pDVar24 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (pTVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar24,1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), pTVar19 != (TerrainUtility_TerrainMap *)0x0)) {
        pfVar26 = &(pTVar19->fields).m_patchSize.z;
        *pfVar26 = (float)((int)*pfVar26 + (this->fields).numberOfSlotsPrPage);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_EDI,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void InventoryChanged() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_InventoryChanged
               (PlayerInventoryController *this,MethodInfo *method)

{
  PlayerInventoryController_UpdatePageCount(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = *(Object_1 **)(in_stack_2 + 0x18);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (*(Component_1 **)(in_stack_2 + 0x18) == (Component_1 *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (*(Component_1 **)(in_stack_2 + 0x18),(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar4,(MethodInfo *)0x0);
  }
  pGVar4 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar4,StringLiteral_Preview_Root___PlayerInventory,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar4,(MethodInfo *)0x0);
    *(Transform **)(in_stack_2 + 0x18) = pTVar5;
    iVar6 = 0;
    this_00 = *(Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ **)
               (in_stack_2 + 0x30);
    while (this_00 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
      pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (this_00,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      this_01 = *(List_1_UnityEngine_UIVertex_ **)(in_stack_2 + 0x30);
      if ((int)pOVar7 <= iVar6) {
        if (this_01 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
        if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
          func_?(TypeInfo__InventoryItemDragHandler);
        }
        bVar3 = InventoryItemDragHandler::InventoryItemDragHandler_get_Dragging((MethodInfo *)0x0);
        if (bVar3 != 0) {
          if (*(List_1_UIPushOption_ **)(in_stack_2 + 0x30) == (List_1_UIPushOption_ *)0x0)
          break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    (*(List_1_UIPushOption_ **)(in_stack_2 + 0x30),
                     *(UIPushOption__Enum *)(in_stack_2 + 0x40),
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
          if ((*(PrefabPool **)(in_stack_2 + 0x40) == (PrefabPool *)0x0) ||
             (this_05 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                  (*(PrefabPool **)(in_stack_2 + 0x40),(MethodInfo *)0x0),
             this_05 == (MVPointLightObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    ((Transform *)this_05,*(Transform **)(in_stack_2 + 0x18),
                     (MethodInfo *)0x0);
          if ((*(int *)(in_stack_2 + 0x44) == 0) ||
             ((this_02 = *(Component_1 **)(*(int *)(in_stack_2 + 0x44) + 0x30),
              this_02 == (Component_1 *)0x0 ||
              (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform(this_02,(MethodInfo *)0x0),
              pTVar5 == (Transform *)0x0)))) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar5,*(Transform **)(in_stack_2 + 0x18),(MethodInfo *)0x0);
        }
        if (*(InventoryController **)(in_stack_2 + 0x20) != (InventoryController *)0x0) {
          InventoryController::InventoryController_Clear
                    (*(InventoryController **)(in_stack_2 + 0x20),(MethodInfo *)0x0);
          pIVar8 = *(InventoryController **)(in_stack_2 + 0x20);
          key = *(int32_t *)(in_stack_2 + 0x24);
          if ((((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   **)(in_stack_2 + 0x28) !=
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) &&
               (pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                       **)(in_stack_2 + 0x28),key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                    ), pTVar9 != (TerrainUtility_TerrainMap *)0x0)) &&
              (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 **)(in_stack_2 + 0x28) !=
               (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)0x0)) &&
             ((pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                      **)(in_stack_2 + 0x28),
                                    *(int32_t *)(in_stack_2 + 0x24),
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   ), pTVar9 != (TerrainUtility_TerrainMap *)0x0 &&
              (maxPages = TabState::TabState_get_MaxPages((TabState *)pTVar9,(MethodInfo *)0x0),
              pIVar8 != (InventoryController *)0x0)))) {
            InventoryController::InventoryController_SelectTab
                      (pIVar8,key,0xADDR,maxPages,(MethodInfo *)0x0);
            this_03 = *(PlayerInventoryRepository **)(in_stack_2 + 0x34);
            if ((*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   **)(in_stack_2 + 0x2c) !=
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) &&
               (pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                       **)(in_stack_2 + 0x2c),
                                     *(int32_t *)(in_stack_2 + 0x24),
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                    ), this_03 != (PlayerInventoryRepository *)0x0)) {
              this_06 = PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategorySlow
                                  (this_03,(String *)pTVar9,(MethodInfo *)0x0);
              *(List_1_InventoryItem_ **)(in_stack_2 + 0x38) = this_06;
              iVar6 = 0;
              goto joined_?;
            }
          }
        }
        break;
      }
      if (this_01 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
      pMVar10 = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,iVar6,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVWorldObjectClient);
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar10,(MethodInfo *)0x0);
      iVar6 = iVar6 + 1;
      this_00 = *(Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ **)
                 (in_stack_2 + 0x30);
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
joined_?:
  if (this_06 == (List_1_InventoryItem_ *)0x0) goto code_?;
  pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_06,
                      MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
  if ((int)pOVar7 <= iVar6) {
    return;
  }
  if (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ **)
       (in_stack_2 + 0x28) ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) goto code_?;
  pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                      (*(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         **)(in_stack_2 + 0x28),*(int32_t *)(in_stack_2 + 0x24),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                      );
  if (((*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(in_stack_2 + 0x38) ==
        (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
      (pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                             (in_stack_2 + 0x38),iVar6,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           ), pIVar12 == (IEventSystemHandler *)0x0)) ||
     (pTVar9 == (TerrainUtility_TerrainMap *)0x0)) goto code_?;
  bVar3 = TabState::TabState_SlotIndexIsInRange
                    ((TabState *)pTVar9,(int32_t)pIVar12[7].monitor,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pOVar1 = *(Object_1 **)(in_stack_2 + 0x3c);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if ((((*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(in_stack_2 + 0x38) ==
             (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
           (pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                                  (in_stack_2 + 0x38),iVar6,
                                 MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                                ), pIVar12 == (IEventSystemHandler *)0x0)) ||
          (*(int *)(in_stack_2 + 0x3c) == 0)) ||
         (iVar13 = *(int *)(*(int *)(in_stack_2 + 0x3c) + 0x34), iVar13 == 0))
      goto code_?;
      if (pIVar12[1].klass == *(IEventSystemHandler__Class **)(iVar13 + 8)) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Drag_preview_item_found,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    original = *(XpBoostParticlePreviewer **)(in_stack_2 + 0x14);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_07 = (PlayerInventoryPreviewItem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        (original,
                         PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                        );
    if (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(in_stack_2 + 0x38) ==
        (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) goto code_?;
    this_08 = this_07;
    pIVar14 = (InventoryItem *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                          (in_stack_2 + 0x38),iVar6,
                         MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                        );
    pMVar10 = PlayerInventoryController_GetWorldObjectFromItemData(pIVar14,(MethodInfo *)0x0);
    if (*(List_1_UIPushOption_ **)(in_stack_2 + 0x30) == (List_1_UIPushOption_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              (*(List_1_UIPushOption_ **)(in_stack_2 + 0x30),(UIPushOption__Enum)pMVar10,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              );
    pTVar5 = *(Transform **)(in_stack_2 + 0x18);
    if (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(in_stack_2 + 0x38) ==
        (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) goto code_?;
    pIVar14 = (InventoryItem *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                          (in_stack_2 + 0x38),iVar6,
                         MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                        );
    if (*(int *)(in_stack_2 + 0x24) == 1) {
      if ((*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(in_stack_2 + 0x38) ==
           (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              (*(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                                (in_stack_2 + 0x38),iVar6,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              ), pIVar12 == (IEventSystemHandler *)0x0)) goto code_?;
      draggable = *(char *)((int)&pIVar12[5].monitor + 1) == '\0';
    }
    else {
      draggable = false;
    }
    if (this_07 == (PlayerInventoryPreviewItem *)0x0) goto code_?;
    PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
              (this_07,pTVar5,pIVar14,pMVar10,draggable,(MethodInfo *)0x0);
    pIVar8 = *(InventoryController **)(in_stack_2 + 0x20);
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this_08,(MethodInfo *)0x0);
    this_04 = *(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(in_stack_2 + 0x38);
    if (((this_04 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
        (pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (this_04,iVar6,
                              MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                             ), pIVar12 == (IEventSystemHandler *)0x0)) ||
       (pIVar8 == (InventoryController *)0x0)) goto code_?;
    InventoryController::InventoryController_AddObject
              (pIVar8,(GameObject *)this_04,
               (int)pIVar12[7].monitor % *(int *)(in_stack_2 + 0x10),(MethodInfo *)0x0);
  }
code_?:
  this_06 = *(List_1_InventoryItem_ **)(in_stack_2 + 0x38);
  iVar6 = iVar6 + 1;
  goto joined_?;
}


/* Void OnPop() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OnPop
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tempPreviewRoot;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).tempPreviewRoot;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pTVar1 = (this->fields).previewRootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pPVar4 = (this->fields).repository;
  if (pPVar4 != (PlayerInventoryRepository *)0x0) {
    source = (pPVar4->fields).OnInventoryChanged;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__PlayerInventoryController__InventoryChanged__,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_02,(MethodInfo *)0x0);
    pDVar6 = (Delegate *)0x0;
    if (pDVar5 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar5->klass == TypeInfo__System__Action) {
        pDVar6 = pDVar5;
      }
      if (pDVar6 == (Delegate *)0x0) {
        func_?();
        goto code_?;
      }
    }
    index = 0;
    this_00 = (this->fields).previewedObjects;
    pDRam00000010 = pDVar6;
    while (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      this_01 = (List_1_UnityEngine_UIVertex_ *)(this->fields).previewedObjects;
      if ((int)pOVar7 <= index) {
        if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (this_01,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
          return;
        }
        break;
      }
      if (this_01 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
      wo = (MVWorldObjectClient *)
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
      if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
        func_?();
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(wo,(MethodInfo *)0x0);
      index = index + 1;
      this_00 = (this->fields).previewedObjects;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OpenTab(UIPushOption, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OpenTab
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
               MethodInfo *method)

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
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar9 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (((pIVar9 != (IEditModeUI *)0x0) && (iVar10 = func_?(), iVar10 != 0)) &&
     (*(Dictionary_2_InventoryCategoryType_System_Object_ **)(iVar10 + 0xc) !=
      (Dictionary_2_InventoryCategoryType_System_Object_ *)0x0)) {
    a = (String *)
        mscorlib.dll::System::Collections::Generic::Dictionary`2[InventoryCategoryType,System::
        Object]::Dictionary_2_InventoryCategoryType_System_Object__get_Item
                  (*(Dictionary_2_InventoryCategoryType_System_Object_ **)(iVar10 + 0xc),categoryId,
                   MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                  );
    this_00 = (this->fields).tabsNonLocalized;
    if (this_00 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )&stack0xffffffb4,
                          (Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar11->dictionary;
      auStack_6._4_4_ = pDVar11->next;
      auStack_6._8_4_ = pDVar11->stamp;
      auStack_6._12_4_ = (pDVar11->current).key;
      auStack_6._16_4_ = (pDVar11->current).value;
      uStack_1 = 0;
      do {
        cVar12 = func_?();
        if (cVar12 == '\0') goto code_?;
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                              );
        auStack_6._0_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
        ;
        b = (String *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar13 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      } while (bVar13 == 0);
      iVar14 = func_?();
      (this->fields).selectedTab = iVar14;
code_?:
      *puStack_8 = 0x79;
      uStack_1 = 0xffffffff;
      func_?();
      iVar10 = (this->fields).numberOfSlotsPrPage;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      unaff_ESI = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_CeilToInt
                            (_UNK_? / (float)iVar10,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).tabs;
      if ((this_01 !=
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) &&
         (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (this_01,(this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), this_02 != (TerrainUtility_TerrainMap *)0x0)) {
        TabState::TabState_SetPage((TabState *)this_02,unaff_ESI,(MethodInfo *)0x0);
        PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  func_?();
  func_?(unaff_ESI,0,0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_PageTurned
               (PlayerInventoryController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).tabs;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                        (this_00,(this->fields).selectedTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TerrainUtility_TerrainMap *)0x0) {
      bVar1 = TabState::TabState_UpdatePage((TabState *)this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pTVar2 = (this->fields).tempPreviewRoot;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pTVar2 = (this->fields).tempPreviewRoot;
          if (pTVar2 == (Transform *)0x0) goto code_?;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pTVar2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        }
        pGVar3 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar3,StringLiteral_temp_Root___PlayerInventory,(MethodInfo *)0x0);
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0);
        (this->fields).tempPreviewRoot = pTVar2;
        if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = InventoryItemDragHandler::InventoryItemDragHandler_get_Dragging((MethodInfo *)0x0);
        if (bVar1 != 0) {
          PlayerInventoryController_PreserveDraggedItemAcrossPages(this,(MethodInfo *)0x0);
        }
        PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PreserveDraggedItemAcrossPages() */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_PreserveDraggedItemAcrossPages
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).draggedPreviewItem;
  if (pPVar1 != (PlayerInventoryPreviewItem *)0x0) {
    pMVar2 = PlayerInventoryController_GetWorldObjectFromItemData
                       ((pPVar1->fields).item,(MethodInfo *)0x0);
    (this->fields).worldObjectDataCopy = pMVar2;
    pPVar1 = (this->fields).draggedPreviewItem;
    if (pPVar1 != (PlayerInventoryPreviewItem *)0x0) {
      pLVar3 = (this->fields).previewedObjects;
      index = 0;
      (this->fields).draggedPreview = (pPVar1->fields).objectPreviewer;
      while (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        if ((int)pOVar4 <= index) {
          pMVar2 = (this->fields).worldObjectDataCopy;
          if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVWorldObjectClient);
          }
          MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar2,(MethodInfo *)0x0);
          return;
        }
        pLVar3 = (this->fields).previewedObjects;
        if ((pLVar3 == (List_1_MVWorldObjectClient_ *)0x0) ||
           (this_01 = (DayNightCycle *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                ), this_01 == (DayNightCycle *)0x0)) break;
        pSVar5 = DayNightCycle::DayNightCycle_get_CurrentStarsParam(this_01,(MethodInfo *)0x0);
        pIVar6 = (this->fields).draggedPreview;
        if ((pIVar6 == (InventoryItemPreviewer *)0x0) ||
           (this_02 = InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                (pIVar6,(MethodInfo *)0x0), this_02 == (GameObject *)0x0)) break;
        pSVar7 = (StarsParam *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                           ((Object_1 *)this_02,(MethodInfo *)0x0);
        pLVar3 = (this->fields).previewedObjects;
        if (pSVar5 == pSVar7) {
          if (((pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) &&
              (this_03 = (PrefabPool *)
                         mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                         EventSystems::IEventSystemHandler]::
                         List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,
                                    index,
                                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                   ), this_03 != (PrefabPool *)0x0)) &&
             (this_04 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_03,(MethodInfo *)0x0),
             this_04 != (MVPointLightObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      ((Transform *)this_04,(this->fields).tempPreviewRoot,(MethodInfo *)0x0);
            pIVar6 = (this->fields).draggedPreview;
            if (((pIVar6 != (InventoryItemPreviewer *)0x0) &&
                (this_00 = (pIVar6->fields).previewCam, this_00 != (Camera *)0x0)) &&
               (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0),
               this_05 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                        (this_05,(this->fields).tempPreviewRoot,(MethodInfo *)0x0);
              pMVar2 = (this->fields).worldObjectDataCopy;
              if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
                func_?();
              }
              MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar2,(MethodInfo *)0x0);
              pLVar3 = (this->fields).previewedObjects;
              if (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
                pMVar2 = (MVWorldObjectClient *)
                         mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                         EventSystems::IEventSystemHandler]::
                         List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,
                                    index,
                                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                   );
                (this->fields).worldObjectDataCopy = pMVar2;
                pLVar3 = (this->fields).previewedObjects;
                if (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
                  List_1_MVPlayer__RemoveAt
                            ((List_1_MVPlayer_ *)pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                            );
                  return;
                }
              }
            }
          }
          break;
        }
        index = index + 1;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetCurrentDragTarget(GameObject) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_SetCurrentDragTarget
               (PlayerInventoryController *this,GameObject *draggingGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (draggingGameObject != (GameObject *)0x0) {
    pPVar1 = (PlayerInventoryPreviewItem *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (draggingGameObject,
                        PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                       );
    (this->fields).draggedPreviewItem = pPVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SlotChanged(Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_SlotChanged
               (PlayerInventoryController *this,int32_t from,int32_t to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (from == to) {
    return;
  }
  index = 0;
  pMVar1 = (MethodInfo *)0x0;
  pIVar2 = (IEventSystemHandler *)0x0;
  pLVar3 = (this->fields).items;
  do {
    if (pLVar3 == (List_1_InventoryItem_ *)0x0) {
code_?:
      func_?(0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                        MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    iVar6 = to;
    if ((int)pOVar5 <= index) {
      if (pIVar2 == (IEventSystemHandler *)0x0) {
        if (pMVar1 == (MethodInfo *)0x0) goto code_?;
        pMVar1[1].name = (char *)to;
        itemIdToSlotIndexTable =
             (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)itemIdToSlotIndexTable,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        to = (int32_t)pMVar1->invoker_method;
        pSVar7 = (String *)func_?(TypeInfo__System__Int32,&to);
        from = iVar6;
        pCVar8 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&from);
        if (itemIdToSlotIndexTable == (Dictionary_2_System_Object_System_Object_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)itemIdToSlotIndexTable,pSVar7,pCVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
      }
      else {
        if (*(char *)((int)&pIVar2[5].monitor + 1) != '\0') {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_destination_isDefaultInvItem,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
            func_?(TypeInfo__InventoryItemDragHandler);
          }
          TypeInfo__InventoryItemDragHandler->static_fields->dragRejected = 1;
          return;
        }
        if ((this->fields).repository == (PlayerInventoryRepository *)0x0) goto code_?;
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
        if (pMVar1 == (MethodInfo *)0x0) goto code_?;
        pMVar9 = (MonitorData *)pMVar1[1].name;
        pMVar1[1].name = (char *)pIVar2[7].monitor;
        pIVar2[7].monitor = pMVar9;
        itemIdToSlotIndexTable =
             (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)itemIdToSlotIndexTable,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pSVar7 = (String *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
        pCVar8 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&stack0xfffffff0);
        if (itemIdToSlotIndexTable == (Dictionary_2_System_Object_System_Object_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)itemIdToSlotIndexTable,pSVar7,pCVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pSVar7 = (String *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
        pCVar8 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&stack0xffffffe8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)itemIdToSlotIndexTable,pSVar7,pCVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
      }
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateInventorySlots
                  (this_00,itemIdToSlotIndexTable,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pLVar3 = (this->fields).items;
    if ((pLVar3 == (List_1_InventoryItem_ *)0x0) ||
       (pIVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           ), pIVar10 == (IEventSystemHandler *)0x0)) goto code_?;
    pLVar3 = (this->fields).items;
    if (pIVar10[7].monitor == (MonitorData *)from) {
      if (pLVar3 == (List_1_InventoryItem_ *)0x0) goto code_?;
      pMVar1 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                          );
    }
    else {
      if ((pLVar3 == (List_1_InventoryItem_ *)0x0) ||
         (pIVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                             ), pIVar10 == (IEventSystemHandler *)0x0)) goto code_?;
      if (pIVar10[7].monitor == (MonitorData *)to) {
        pLVar3 = (this->fields).items;
        if (pLVar3 == (List_1_InventoryItem_ *)0x0) goto code_?;
        pMVar1 = MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_;
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           );
      }
    }
    pLVar3 = (this->fields).items;
    index = index + 1;
  } while( true );
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_TabSelected
               (PlayerInventoryController *this,int32_t tab,MethodInfo *method)

{
  if (tab != (this->fields).selectedTab) {
    (this->fields).selectedTab = tab;
    PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdateContent
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar3,StringLiteral_Preview_Root___PlayerInventory,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    (this->fields).previewRootTransform = pTVar1;
    iVar4 = 0;
    pLVar5 = (this->fields).previewedObjects;
    while (pLVar5 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).previewedObjects;
      if ((int)pOVar6 <= iVar4) {
        if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
        if ((((uint)(TypeInfo__InventoryItemDragHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__InventoryItemDragHandler->_1).cctor_started == 0)) {
          func_?(TypeInfo__InventoryItemDragHandler);
        }
        bVar2 = InventoryItemDragHandler::InventoryItemDragHandler_get_Dragging((MethodInfo *)0x0);
        if (bVar2 != 0) {
          pLVar5 = (this->fields).previewedObjects;
          if (pLVar5 == (List_1_MVWorldObjectClient_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pLVar5,
                     (UIPushOption__Enum)(this->fields).worldObjectDataCopy,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
          this_01 = (PrefabPool *)(this->fields).worldObjectDataCopy;
          if ((this_01 == (PrefabPool *)0x0) ||
             (this_05 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0),
             this_05 == (MVPointLightObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    ((Transform *)this_05,(this->fields).previewRootTransform,(MethodInfo *)0x0);
          pIVar7 = (this->fields).draggedPreview;
          if ((pIVar7 == (InventoryItemPreviewer *)0x0) ||
             ((this_02 = (pIVar7->fields).previewCam, this_02 == (Camera *)0x0 ||
              (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this_02,(MethodInfo *)0x0),
              pTVar1 == (Transform *)0x0)))) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar1,(this->fields).previewRootTransform,(MethodInfo *)0x0);
        }
        pIVar8 = (this->fields).inventoryController;
        if (pIVar8 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Clear(pIVar8,(MethodInfo *)0x0);
          pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).tabs;
          pIVar8 = (this->fields).inventoryController;
          key = (this->fields).selectedTab;
          if ((((pDVar9 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) &&
               (pTVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (pDVar9,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                    ), pTVar10 != (TerrainUtility_TerrainMap *)0x0)) &&
              (pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)(this->fields).tabs,
              pDVar9 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0)) &&
             ((pTVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (pDVar9,(this->fields).selectedTab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   ), pTVar10 != (TerrainUtility_TerrainMap *)0x0 &&
              (maxPages = TabState::TabState_get_MaxPages((TabState *)pTVar10,(MethodInfo *)0x0),
              pIVar8 != (InventoryController *)0x0)))) {
            InventoryController::InventoryController_SelectTab
                      (pIVar8,key,0xADDR,maxPages,(MethodInfo *)0x0);
            this_03 = (this->fields).tabsNonLocalized;
            this_04 = (this->fields).repository;
            if ((this_03 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
               (pTVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                      *)this_03,(this->fields).selectedTab,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                    ), this_04 != (PlayerInventoryRepository *)0x0)) {
              pLVar11 = PlayerInventoryRepository::PlayerInventoryRepository_GetItemsInCategorySlow
                                  (this_04,(String *)pTVar10,(MethodInfo *)0x0);
              (this->fields).items = pLVar11;
              iVar4 = 0;
              goto joined_?;
            }
          }
        }
        break;
      }
      if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
      pMVar12 = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,iVar4,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
      if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVWorldObjectClient);
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar12,(MethodInfo *)0x0);
      iVar4 = iVar4 + 1;
      pLVar5 = (this->fields).previewedObjects;
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
joined_?:
  if (pLVar11 == (List_1_InventoryItem_ *)0x0) goto code_?;
  pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11,
                      MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
  if ((int)pOVar6 <= iVar4) {
    return;
  }
  pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).tabs;
  if (pDVar9 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) goto code_?;
  pTVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                      (pDVar9,(this->fields).selectedTab,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                      );
  pLVar11 = (this->fields).items;
  if (((pLVar11 == (List_1_InventoryItem_ *)0x0) ||
      (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,iVar4,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           ), pIVar14 == (IEventSystemHandler *)0x0)) ||
     (pTVar10 == (TerrainUtility_TerrainMap *)0x0)) goto code_?;
  bVar2 = TabState::TabState_SlotIndexIsInRange
                    ((TabState *)pTVar10,(int32_t)pIVar14[7].monitor,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pPVar15 = (this->fields).draggedPreviewItem;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pPVar15,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pLVar11 = (this->fields).items;
      if ((((pLVar11 == (List_1_InventoryItem_ *)0x0) ||
           (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,
                                 iVar4,
                                 MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                                ), pIVar14 == (IEventSystemHandler *)0x0)) ||
          (pPVar15 = (this->fields).draggedPreviewItem, pPVar15 == (PlayerInventoryPreviewItem *)0x0
          )) || (pIVar16 = (pPVar15->fields).item, pIVar16 == (InventoryItem *)0x0))
      goto code_?;
      if (pIVar14[1].klass == (IEventSystemHandler__Class *)(pIVar16->fields).itemID) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Drag_preview_item_found,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    pPVar15 = (this->fields).previewItemPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pPVar15 = (PlayerInventoryPreviewItem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)pPVar15,
                         PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                        );
    pLVar11 = (this->fields).items;
    if (pLVar11 == (List_1_InventoryItem_ *)0x0) goto code_?;
    this_06 = pPVar15;
    pIVar16 = (InventoryItem *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,iVar4,
                         MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                        );
    pMVar12 = PlayerInventoryController_GetWorldObjectFromItemData(pIVar16,(MethodInfo *)0x0);
    pLVar5 = (this->fields).previewedObjects;
    if (pLVar5 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar5,(UIPushOption__Enum)pMVar12,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              );
    pTVar1 = (this->fields).previewRootTransform;
    pLVar11 = (this->fields).items;
    if (pLVar11 == (List_1_InventoryItem_ *)0x0) goto code_?;
    pIVar16 = (InventoryItem *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,iVar4,
                         MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                        );
    if ((this->fields).selectedTab == 1) {
      pLVar11 = (this->fields).items;
      if ((pLVar11 == (List_1_InventoryItem_ *)0x0) ||
         (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,
                               iVar4,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              ), pIVar14 == (IEventSystemHandler *)0x0)) goto code_?;
      draggable = *(char *)((int)&pIVar14[5].monitor + 1) == '\0';
    }
    else {
      draggable = false;
    }
    if (pPVar15 == (PlayerInventoryPreviewItem *)0x0) goto code_?;
    PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
              (pPVar15,pTVar1,pIVar16,pMVar12,draggable,(MethodInfo *)0x0);
    pIVar8 = (this->fields).inventoryController;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this_06,(MethodInfo *)0x0);
    pLVar11 = (this->fields).items;
    if (((pLVar11 == (List_1_InventoryItem_ *)0x0) ||
        (pIVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,iVar4
                              ,
                              MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                             ), pIVar14 == (IEventSystemHandler *)0x0)) ||
       (pIVar8 == (InventoryController *)0x0)) goto code_?;
    InventoryController::InventoryController_AddObject
              (pIVar8,(GameObject *)pLVar11,
               (int)pIVar14[7].monitor % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
  }
code_?:
  pLVar11 = (this->fields).items;
  iVar4 = iVar4 + 1;
  goto joined_?;
}


/* Void UpdatePageCount() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdatePageCount
               (PlayerInventoryController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
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
  iVar11 = 1;
  iStack_12 = 1;
  pPVar13 = (this->fields).repository;
  puStack_14 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if (((pPVar13 != (PlayerInventoryRepository *)0x0) &&
      (this_00 = (pPVar13->fields).categories, puStack_14 = (undefined4 *)&stack0xffffffac,
      puStack_4 = &stack0xffffffac,
      this_00 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) &&
     (puStack_14 = (undefined4 *)&stack0xffffffac, puStack_4 = &stack0xffffffac,
     this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                         ),
     this_02 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
    pDVar15 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_16,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_02,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                       );
    pDStack_7 = (pDVar15->host_enumerator).dictionary;
    iStack_8 = (pDVar15->host_enumerator).next;
    iStack_9 = (pDVar15->host_enumerator).stamp;
    iStack_10 = (pDVar15->host_enumerator).current.key;
    pOStack_6 = (pDVar15->host_enumerator).current.value;
    uStack_1 = 0;
    while( true ) {
      cVar17 = func_?(&pDStack_7,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                             );
      if (cVar17 == '\0') {
        *puStack_14 = 0x6c;
        uStack_1 = 0xffffffff;
        func_?(&pDStack_7,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      category = func_?(&pDStack_7,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                                );
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).tabs;
      if (this_01 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) break;
      pTVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,iVar11,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                         );
      pPVar13 = (this->fields).repository;
      if (pPVar13 == (PlayerInventoryRepository *)0x0) break;
      iVar11 = PlayerInventoryRepository::PlayerInventoryRepository_HighestSlotIndex
                        (pPVar13,category,(MethodInfo *)0x0);
      if (pTVar18 == (TerrainUtility_TerrainMap *)0x0) break;
      (pTVar18->fields).m_patchSize.z = (float)(iVar11 + (this->fields).numberOfSlotsPrPage);
      iVar11 = iStack_12 + 1;
      iStack_12 = iVar11;
    }
  }
  func_?(0);
  func_?(this,0,0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void <Activate>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController__Activate_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* PlayerInventoryController() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController__ctor
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).selectedTab = 1;
  this_00 = (Dictionary_2_System_Int32_TabState_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  (this->fields).tabs = this_00;
  this_01 = (Dictionary_2_System_Int32_System_String_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>)
  ;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  (this->fields).tabsNonLocalized = this_01;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).previewedObjects = (List_1_MVWorldObjectClient_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
  (this->fields).items = (List_1_InventoryItem_ *)pLVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

