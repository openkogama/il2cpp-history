
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_Activate
               (EditModeClientShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  method_00 = TypeInfo__EditModeClientShopController___Activate_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 == (ScaleAnimationBase *)0x0) goto code_?;
  (this_01->fields)._._._._.m_CachedPtr = (void *)pushOption;
  (this_01->fields).state = (int32_t)this;
  pIVar4 = (this->fields).inventoryController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) goto code_?;
  pIVar4 = (this->fields).inventoryControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  method_01 = 
  InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
  ;
  pIVar4 = (InventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pIVar4,
                      InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                     );
  (this->fields).inventoryController = pIVar4;
  if (pIVar4 == (InventoryController *)0x0) goto code_?;
  pUVar6 = (pIVar4->fields).OnTabSelected;
  pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar7,(Object *)this,MethodInfo__EditModeClientShopController__TabSelected_int_,
             MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__);
  pUVar8 = (UnityAction_1_System_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pUVar6 = (UnityAction_1_System_Int32_ *)0x0;
  if (pUVar8 == (UnityAction_1_System_Int32_ *)0x0) {
code_?:
    (pIVar4->fields).OnTabSelected = pUVar6;
    pIVar4 = (this->fields).inventoryController;
    if (pIVar4 == (InventoryController *)0x0) goto code_?;
    pUVar6 = (pIVar4->fields).OnPageTurned;
    pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar7,(Object *)this,MethodInfo__EditModeClientShopController__PageTurned_int_,
               MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
              );
    pUVar8 = (UnityAction_1_System_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
    pUVar6 = (UnityAction_1_System_Int32_ *)0x0;
    if (pUVar8 != (UnityAction_1_System_Int32_ *)0x0) {
      if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
        pUVar6 = pUVar8;
      }
      if (pUVar6 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    }
    (pIVar4->fields).OnPageTurned = pUVar6;
    pIVar4 = (this->fields).inventoryController;
    if (pIVar4 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Initialize
                (pIVar4,(this->fields).numberOfSlotsPrPage,method_01);
      this_00 = (this->fields).tabs;
      if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
        Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                   &stack0xffffffac,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                  );
        uStack_1 = 0;
        while (cVar9 = func_?(), cVar9 != '\0') {
          LevelRewardsManager::LevelRewardsManager_get_NextReward
                    ((LevelRewardsManager *)&stack0xffffffc0,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                    );
          pIVar4 = (this->fields).inventoryController;
          categoryId = func_?();
          iVar10 = func_?();
          if ((iVar10 == 0) || (pIVar4 == (InventoryController *)0x0)) goto code_?;
          InventoryController::InventoryController_AddTab
                    (pIVar4,categoryId,*(String **)(iVar10 + 0xc),(MethodInfo *)0x0);
        }
        uStack_1 = 0xffffffff;
        func_?();
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__EditModeClientShopController->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar7,(Object *)0x0,
                     MethodInfo__EditModeClientShopController___Activate_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__EditModeClientShopController->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar7;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__EditModeClientShopController->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar11,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar7,(Object *)this_01,
                   MethodInfo__EditModeClientShopController___Activate_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar11,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar7,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  else {
    if (pUVar8->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
      pUVar6 = pUVar8;
    }
    if (pUVar6 != (UnityAction_1_System_Int32_ *)0x0) goto code_?;
code_?:
    func_?(pUVar8,TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?();
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(ShopItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::EditModeClientShopController::
EditModeClientShopController_GetWorldObjectFromItemData(ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (ShopItem *)0x0) {
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


/* Void HighlightAtCategoryWithSlot(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::
     EditModeClientShopController_HighlightAtCategoryWithSlot
               (EditModeClientShopController *this,UIPushOption__Enum options,int32_t categoryId,
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
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
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
      this_01 = (this->fields).inventoryController;
      if (this_01 != (InventoryController *)0x0) {
        InventoryController::InventoryController_HighlightSlot
                  (this_01,slotPosition % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Initialize(EditModeRepositoryController) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_Initialize
               (EditModeClientShopController *this,
               EditModeRepositoryController *repositoryController,MethodInfo *method)

{
  pEVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffa0;
  puVar6 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  pOStack_7 = (Object *)0x0;
  pDStack_8 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_9 = 0;
  iStack_10 = 0;
  iStack_11 = 0;
  func_?();
  (this->fields).repositoryController = repositoryController;
  puStack_12 = (undefined4 *)&stack0xffffffa0;
  puStack_5 = &stack0xffffffa0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_12 = (undefined4 *)&stack0xffffffa0, puStack_5 = &stack0xffffffa0,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_12 = (undefined4 *)&stack0xffffffa0;
    puStack_5 = &stack0xffffffa0;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar13 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar13 != (IEditModeUI *)0x0) {
    pCVar14 = (ClientShopRepository *)func_?(4,TypeInfo__IEditModeUI);
    (this->fields).repository = pCVar14;
    (this->fields).selectedTab = 1;
    this = (EditModeClientShopController *)0x1;
    if (((pCVar14 != (ClientShopRepository *)0x0) &&
        (pDVar15 = (pCVar14->fields).categories,
        pDVar15 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar15,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                            ),
       this_01 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) {
      pDVar16 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                           *)&stack0xffffffac,
                          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                           *)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                         );
      pDStack_8 = (pDVar16->host_enumerator).dictionary;
      iStack_9 = (pDVar16->host_enumerator).next;
      iStack_10 = (pDVar16->host_enumerator).stamp;
      iStack_11 = (pDVar16->host_enumerator).current.key;
      pOStack_7 = (pDVar16->host_enumerator).current.value;
      uStack_2 = 0;
      while( true ) {
        cVar17 = func_?(&pDStack_8);
        if (cVar17 == '\0') {
          *puStack_12 = 0xd3;
          uStack_2 = 0xffffffff;
          func_?(&pDStack_8);
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        key = func_?(&pDStack_8);
        pCVar14 = (pEVar1->fields).repository;
        unaff_EDI = (EditModeClientShopController *)(pEVar1->fields).tabsNonLocalized;
        if (((pCVar14 == (ClientShopRepository *)0x0) ||
            (pDVar15 = (pCVar14->fields).categories,
            pDVar15 == (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) ||
           (value = (TerrainUtility_TerrainMap *)
                    mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[InventoryCategoryType,System::Object]::
                    Dictionary_2_InventoryCategoryType_System_Object__get_Item
                              ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar15,key,
                               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                              ), unaff_EDI == (EditModeClientShopController *)0x0)) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)unaff_EDI,(int32_t)this,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                  );
        pCVar14 = (pEVar1->fields).repository;
        unaff_EDI = (EditModeClientShopController *)(pEVar1->fields).tabs;
        pEStack_18 = unaff_EDI;
        if ((pCVar14 == (ClientShopRepository *)0x0) ||
           (pDVar15 = (pCVar14->fields).categories,
           pDVar15 == (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) break;
        key_00 = (String *)
                 mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[InventoryCategoryType,System::Object]::
                 Dictionary_2_InventoryCategoryType_System_Object__get_Item
                           ((Dictionary_2_InventoryCategoryType_System_Object_ *)pDVar15,key,
                            MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                           );
        pSStack_19 = TM::TM__(key_00,(MethodInfo *)0x0);
        iStack_20 = (pEVar1->fields).numberOfSlotsPrPage;
        pTStack_21 = (TerrainUtility_TerrainMap *)func_?();
        TabState::TabState__ctor((TabState *)pTStack_21,pSStack_19,iStack_20,(MethodInfo *)0x0);
        if (unaff_EDI == (EditModeClientShopController *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)pEStack_18,(int32_t)this,pTStack_21,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                  );
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(pEVar1->fields).tabs;
        unaff_EDI = this;
        if (this_00 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) break;
        unaff_EDI = (EditModeClientShopController *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (this_00,(int32_t)this,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
        pCVar14 = (pEVar1->fields).repository;
        if (pCVar14 == (ClientShopRepository *)0x0) break;
        a = ClientShopRepository::ClientShopRepository_CategoryItemCount
                      (pCVar14,key,(MethodInfo *)0x0);
        pIVar22 = (Int32__Array *)
                 UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2(a,1,(MethodInfo *)0x0);
        if (unaff_EDI == (EditModeClientShopController *)0x0) break;
        this = (EditModeClientShopController *)((int)&this->klass + 1);
        (unaff_EDI->fields).numberOfSlotsPrPage = (int32_t)pIVar22;
      }
    }
  }
  func_?();
  func_?(unaff_EDI,0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_OnPop
               (EditModeClientShopController *this,MethodInfo *method)

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
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).previewedObjects;
  index = 0;
  (this->fields).previewRootTransform = (Transform *)0x0;
  while (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    this_01 = (List_1_UnityEngine_UIVertex_ *)(this->fields).previewedObjects;
    if ((int)pOVar3 <= index) {
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
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OpenPage(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_OpenPage
               (EditModeClientShopController *this,UIPushOption__Enum options,int32_t categoryId,
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
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
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
                            (((float)slotPosition + _UNK_?) / (float)iVar10,(MethodInfo *)0x0)
      ;
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
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
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


/* Void OpenTab(UIPushOption, Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_OpenTab
               (EditModeClientShopController *this,UIPushOption__Enum options,int32_t categoryId,
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
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
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
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_PageTurned
               (EditModeClientShopController *this,int32_t dir,MethodInfo *method)

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
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseItem(ShopItem) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_PurchaseItem
               (EditModeClientShopController *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repositoryController;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,MethodInfo__EditModeClientShopController__UpdateContent__,
             (MethodInfo *)0x0);
  if (this_00 != (EditModeRepositoryController *)0x0) {
    EditModeRepositoryController::EditModeRepositoryController_PurchaseClientShopItem
              (this_00,item,(UnityAction *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_TabSelected
               (EditModeClientShopController *this,int32_t tab,MethodInfo *method)

{
  if (tab != (this->fields).selectedTab) {
    (this->fields).selectedTab = tab;
    EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_UpdateContent
               (EditModeClientShopController *this,MethodInfo *method)

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
            (pGVar3,StringLiteral_Preview_Root___ClientShopInvento,(MethodInfo *)0x0);
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
        if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (this_00,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
          pIVar7 = (this->fields).inventoryController;
          if (pIVar7 != (InventoryController *)0x0) {
            InventoryController::InventoryController_Clear(pIVar7,(MethodInfo *)0x0);
            pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).tabs;
            pIVar7 = (this->fields).inventoryController;
            key = (this->fields).selectedTab;
            if ((pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) &&
               (pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                   (pDVar8,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   ), pTVar9 != (TerrainUtility_TerrainMap *)0x0)) {
              currentPage = (pTVar9->fields).m_errorCode;
              pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)(this->fields).tabs;
              if ((pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)0x0) &&
                 ((pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                            ::
                            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                      (pDVar8,(this->fields).selectedTab,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                      ), pTVar9 != (TerrainUtility_TerrainMap *)0x0 &&
                  (maxPages = TabState::TabState_get_MaxPages((TabState *)pTVar9,(MethodInfo *)0x0),
                  pIVar7 != (InventoryController *)0x0)))) {
                InventoryController::InventoryController_SelectTab
                          (pIVar7,key,currentPage,maxPages,(MethodInfo *)0x0);
                this_01 = (this->fields).tabsNonLocalized;
                this_02 = (this->fields).repository;
                if ((this_01 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                   (pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                       ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                         *)this_01,(this->fields).selectedTab,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                       ), this_02 != (ClientShopRepository *)0x0)) {
                  this_03 = (MethodInfo *)
                            ClientShopRepository::ClientShopRepository_GetItemsInCategorySlow
                                      (this_02,(String *)pTVar9,(MethodInfo *)0x0);
                  iVar4 = 0;
                  if (this_03 != (MethodInfo *)0x0) goto code_?;
                }
              }
            }
          }
        }
        break;
      }
      if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
      pMVar10 = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,iVar4,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVWorldObjectClient);
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar10,(MethodInfo *)0x0);
      iVar4 = iVar4 + 1;
      pLVar5 = (this->fields).previewedObjects;
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                      MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
  if ((int)pOVar6 <= iVar4) {
    return;
  }
  pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).tabs;
  if (pDVar8 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) goto code_?;
  pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                     (pDVar8,(this->fields).selectedTab,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                     );
  this_03 = MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_;
  pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                       MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_,
                       iVar4,
                       MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
  if ((pIVar12 == (IEventSystemHandler *)0x0) || (pTVar9 == (TerrainUtility_TerrainMap *)0x0))
  goto code_?;
  bVar2 = TabState::TabState_SlotIndexIsInRange
                    ((TabState *)pTVar9,(int32_t)pIVar12[5].klass,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pEVar13 = (this->fields).previewItemPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pEVar13 = (EditModeClientShopItem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)pEVar13,
                         EditModeClientShopItem_MethodInfo__UnityEngine__Object__Instantiate<EditModeClientShopItem>_EditModeClientShopItem_
                        );
    pSVar14 = (ShopItem *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,iVar4,
                         MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    pMVar10 = EditModeClientShopController_GetWorldObjectFromItemData(pSVar14,(MethodInfo *)0x0);
    pLVar5 = (this->fields).previewedObjects;
    if (pLVar5 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar5,(UIPushOption__Enum)pMVar10,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              );
    pTVar1 = (this->fields).previewRootTransform;
    pSVar14 = (ShopItem *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,iVar4,
                         MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    if (pEVar13 == (EditModeClientShopItem *)0x0) goto code_?;
    EditModeClientShopItem::EditModeClientShopItem_Initialize
              (pEVar13,pTVar1,pSVar14,pMVar10,(MethodInfo *)0x0);
    pIVar7 = (this->fields).inventoryController;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pEVar13,(MethodInfo *)0x0);
    pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,iVar4,
                         MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    if ((pIVar12 == (IEventSystemHandler *)0x0) || (pIVar7 == (InventoryController *)0x0))
    goto code_?;
    InventoryController::InventoryController_AddObject
              (pIVar7,pGVar3,(int)pIVar12[5].klass % (this->fields).numberOfSlotsPrPage,
               (MethodInfo *)0x0);
  }
  iVar4 = iVar4 + 1;
  goto code_?;
}


/* Void <Activate>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController__Activate_m__0
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


/* EditModeClientShopController() */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController__ctor
               (EditModeClientShopController *this,MethodInfo *method)

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
  this_02 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).previewedObjects = (List_1_MVWorldObjectClient_ *)this_02;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

