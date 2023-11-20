
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_Activate
               (EditModeClientShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  pIStack_1 = (Il2CppInteropData *)0xffffffff;
  p_Stack_c = (Il2CppMetadataTypeHandle)&DAT_?;
  pIStack_2 = (Il2CppGenericClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_2;
  pIStack_3 = (Il2CppClass *)&stack0xffffff9c;
  pIVar4 = (Il2CppClass *)&stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                   );
    func_?(&MethodInfo__EditModeClientShopController__PageTurned_int_);
    func_?(&MethodInfo__EditModeClientShopController__TabSelected_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Value__
                   );
    func_?(&
                    InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__EditModeClientShopController____c___Activate_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__EditModeClientShopController____c__DisplayClass12_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__EditModeClientShopController____c__DisplayClass12_0);
    func_?(&TypeInfo__EditModeClientShopController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  DStack_5._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_5._version = 0;
  DStack_5._index = 0;
  DStack_5._current.key = 0;
  DStack_5._16_8_ = (Il2CppType)0x0;
  method_00 = TypeInfo__EditModeClientShopController____c__DisplayClass12_0;
  pIVar4 = (Il2CppClass *)func_?();
  pIStack_6 = pIVar4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pIVar4,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pIStack_7 = pIVar4;
  if (pIVar4 != (Il2CppClass *)0x0) {
    (((ExecuteEvents_EventFunction_1_IUIStack___Fields *)&pIVar4->name)->_)._.method_ptr = this;
    func_?();
    pIVar4->namespaze = (char *)pushOption;
    pIVar8 = (this->fields).inventoryController;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pIVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar9 != 0) goto code_?;
    pIVar8 = (this->fields).inventoryControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar8 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar8,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    (this->fields).inventoryController = pIVar8;
    method_01 = (MethodInfo *)&UNK_?;
    func_?();
    pIStack_10 = (Il2CppClass *)(this->fields).inventoryController;
    if (pIStack_10 == (Il2CppClass *)0x0) goto code_?;
    pIVar4 = pIStack_10->castClass;
    pUVar11 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar11,(Object *)this,MethodInfo__EditModeClientShopController__TabSelected_int_,
               (MethodInfo *)0x0);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pIVar4,(Delegate *)pUVar11,(MethodInfo *)0x0);
    if (pDVar12 == (Delegate *)0x0) {
      pIStack_10->castClass = (Il2CppClass *)0x0;
code_?:
      func_?();
      pIStack_10 = (Il2CppClass *)(this->fields).inventoryController;
      if (pIStack_10 == (Il2CppClass *)0x0) goto code_?;
      pIVar4 = pIStack_10->element_class;
      pUVar11 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar11,(Object *)this,MethodInfo__EditModeClientShopController__PageTurned_int_,
                 (MethodInfo *)0x0);
      pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pIVar4,(Delegate *)pUVar11,(MethodInfo *)0x0);
      if (pDVar12 == (Delegate *)0x0) {
        pIStack_10->element_class = (Il2CppClass *)0x0;
      }
      else {
        pIVar4 = (Il2CppClass *)func_?();
        if (pIVar4 == (Il2CppClass *)0x0) goto code_?;
        pIStack_10->element_class = pIVar4;
        pIStack_10 = (Il2CppClass *)TypeInfo__UnityEngine__Events__UnityAction<int>;
        iVar13 = func_?();
        if (iVar13 == 0) goto code_?;
      }
      func_?();
      pIVar8 = (this->fields).inventoryController;
      if (pIVar8 != (InventoryController *)0x0) {
        InventoryController::InventoryController_Initialize
                  (pIVar8,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
        this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabs;
        if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffffa8,this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                             );
          pIStack_15 = (Il2CppClass *)0x0;
          DStack_5._dictionary = pDVar14->_dictionary;
          DStack_5._version = pDVar14->_version;
          DStack_5._index = pDVar14->_index;
          DStack_5._current.key = (pDVar14->_current).key;
          DStack_5._16_8_ = *(undefined8 *)&(pDVar14->_current).value;
          pIStack_1 = (Il2CppInteropData *)0x1;
          pIStack_10 = (Il2CppClass *)&DStack_5;
          while( true ) {
            bVar9 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_5,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                              );
            if (bVar9 == 0) break;
            pIVar8 = (this->fields).inventoryController;
            if ((DStack_5._current.value == (void *)0x0) || (pIVar8 == (InventoryController *)0x0))
            goto code_?;
            InventoryController::InventoryController_AddTab
                      (pIVar8,DStack_5._current.key,
                       (String *)*(Il2CppClass **)((int)DStack_5._current.value + 0xc),
                       (MethodInfo *)0x0);
          }
          pIStack_1 = (Il2CppInteropData *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_5,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                     ,method_01);
          pIStack_1 = (Il2CppInteropData *)0xffffffff;
          EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
          pIStack_10 = (Il2CppClass *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__EditModeClientShopController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pIVar4 = (Il2CppClass *)
                   TypeInfo__EditModeClientShopController____c->static_fields->__9__12_0;
          if (pIVar4 == (Il2CppClass *)0x0) {
            if ((TypeInfo__EditModeClientShopController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            object = TypeInfo__EditModeClientShopController____c->static_fields->__9;
            pIVar4 = (Il2CppClass *)func_?();
            pIStack_7 = pIVar4;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pIVar4,(Object *)object,
                       MethodInfo__EditModeClientShopController____c___Activate_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__EditModeClientShopController____c->static_fields->__9__12_0 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)pIVar4;
            func_?();
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    ((GameObject *)pIStack_10,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)pIVar4,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                     (Object *)pIStack_6,
                     MethodInfo__EditModeClientShopController____c__DisplayClass12_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
code_?:
          *unaff_FS_OFFSET = pIStack_2;
          return;
        }
      }
    }
    else {
      pIVar4 = (Il2CppClass *)func_?();
      if (pIVar4 != (Il2CppClass *)0x0) {
        pIStack_10->castClass = pIVar4;
        pIStack_10 = (Il2CppClass *)TypeInfo__UnityEngine__Events__UnityAction<int>;
        iVar13 = func_?();
        if (iVar13 == 0) goto code_?;
        goto code_?;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(ShopItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::EditModeClientShopController::
EditModeClientShopController_GetWorldObjectFromItemData(ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__KoGaMaPackageClient);
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
      this = (this_01->fields).worldObjects;
      if (this != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        pMVar1 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this,
                            (this_01->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        return pMVar1;
      }
    }
  }
  func_?();
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                   );
    cRam_? = '\x01';
  }
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).playerShopInventoryRepository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_03 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_get_InventoryCategories(this_00,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                           );
        uVar5 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        uVar6 = (pDVar4->_current).key;
        do {
          uVar7 = uVar6;
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          method_00 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)method_00,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        this_02 = (this->fields).inventoryController;
        if (this_02 != (InventoryController *)0x0) {
          InventoryController::InventoryController_HighlightSlot
                    (this_02,slotPosition % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
          EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize(EditModeRepositoryController) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_Initialize
               (EditModeClientShopController *this,
               EditModeRepositoryController *repositoryController,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
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
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__TabState);
    cRam_? = '\x01';
  }
  (this->fields).repositoryController = repositoryController;
  func_?(&(this->fields).repositoryController,repositoryController);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar4 != (IEditModeUI *)0x0) {
    pPVar5 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar4);
    (this->fields).playerShopInventoryRepository = pPVar5;
    func_?(&(this->fields).playerShopInventoryRepository,pPVar5);
    pPVar5 = (this->fields).playerShopInventoryRepository;
    (this->fields).selectedTab = 1;
    key = (MethodInfo *)0x1;
    if (pPVar5 != (PlayerShopInventoryRepository *)0x0) {
      pDStack_6 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                      PlayerShopInventoryRepository_get_ShopCategories(pPVar5,(MethodInfo *)0x0);
      if (pDStack_6 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                            (pDStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                            );
        if (this_00 !=
            (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar7 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)&stack0xffffffc4,
                              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)this_00,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pDVar7->_currentValue;
          uStack_1 = 1;
          while( true ) {
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffb4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                              );
            if (bVar8 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffb4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_02 = (this->fields).tabsNonLocalized;
            value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_6,
                               (Int32Enum__Enum)method_00,
                               MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                              );
            if (this_02 == (Dictionary_2_System_Int32_System_String_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)this_02,(int32_t)key,value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                      );
            method_01 = (MethodInfo *)(this->fields).tabs;
            pSVar9 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_6,
                                (Int32Enum__Enum)method_00,method_01);
            key_00 = 0;
            pSVar9 = TM::TM__(pSVar9,(MethodInfo *)0x0);
            iVar10 = (this->fields).numberOfSlotsPrPage;
            pDStack_6 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)&UNK_?;
            this_01 = (TabState *)func_?();
            TabState::TabState__ctor(this_01,(int32_t)method_00,pSVar9,iVar10,(MethodInfo *)0x0);
            pPVar5 = (this->fields).playerShopInventoryRepository;
            if (pPVar5 == (PlayerShopInventoryRepository *)0x0) break;
            iVar10 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                    PlayerShopInventoryRepository_ShopCategoryItemCount
                              (pPVar5,(InventoryCategoryType__Enum)method_00,(MethodInfo *)0x0);
            method_00 = key;
            if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Math);
              method_00 = key;
            }
            iVar10 = mscorlib.dll::System::Math::Math_Max_4(iVar10,1,(MethodInfo *)0x0);
            if (this_01 == (TabState *)0x0) break;
            (this_01->fields).highestSlotIndex = iVar10;
            if (method_01 == (MethodInfo *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)method_01,key_00,
                       (Object *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                      );
            key = (MethodInfo *)(key_00 + 1);
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_OnPop
               (EditModeClientShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  (this->fields).previewRootTransform = (Transform *)0x0;
  func_?();
  iVar3 = 0;
  pLVar4 = (this->fields).previewedObjects;
  while (pLVar4 != (List_1_MVWorldObjectClient_ *)0x0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).previewedObjects;
    if ((pLVar4->fields)._size <= iVar3) {
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        iVar3 = (this_00->fields)._size;
        piVar5 = &(this_00->fields)._version;
        *piVar5 = *piVar5 + 1;
        (this_00->fields)._size = 0;
        if (0 < iVar3) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(this_00->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        return;
      }
      break;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    wo = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
         RegexCharClass+SingleRange]::
         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                   (this_00,iVar3,
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
              ((MVWorldObjectClient *)wo,(MethodInfo *)0x0);
    iVar3 = iVar3 + 1;
    pLVar4 = (this->fields).previewedObjects;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                   );
    cRam_? = '\x01';
  }
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).playerShopInventoryRepository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_03 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_get_InventoryCategories(this_00,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                           );
        uVar5 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        uVar6 = (pDVar4->_current).key;
        do {
          uVar7 = uVar6;
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          method_00 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)method_00,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        iVar9 = (this->fields).numberOfSlotsPrPage;
        fVar10 = (float)slotPosition + _UNK_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = (this->fields).tabs;
        if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          this_04 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          if (this_04 != (TabState *)0x0) {
            func_?();
            page = func_?();
            TabState::TabState_SetPage(this_04,page,SUB84((double)(fVar10 / (float)iVar9),0));
            EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                   );
    cRam_? = '\x01';
  }
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).playerShopInventoryRepository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_03 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_get_InventoryCategories(this_00,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                           );
        uVar5 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        uVar6 = (pDVar4->_current).key;
        do {
          uVar7 = uVar6;
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          method_00 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)method_00,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        fVar9 = _UNK_? / (float)(this->fields).numberOfSlotsPrPage;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = (this->fields).tabs;
        if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          this_04 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          if (this_04 != (TabState *)0x0) {
            func_?();
            page = func_?();
            TabState::TabState_SetPage(this_04,page,SUB84((double)fVar9,0));
            EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_PageTurned
               (EditModeClientShopController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    this_01 = (TabState *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (this->fields).selectedTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TabState *)0x0) {
      bVar1 = TabState::TabState_UpdatePage(this_01,dir,(MethodInfo *)0x0);
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
    func_?(&MethodInfo__EditModeClientShopController__UpdateContent__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repositoryController;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__EditModeClientShopController__UpdateContent__,
             (MethodInfo *)0x0);
  if (this_00 != (EditModeRepositoryController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__EditModeRepositoryController___PurchaseClientShopItem_b__1_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      cRam_? = '\x01';
    }
    (this_00->fields).currentlyBuyingItem = item;
    func_?(&(this_00->fields).currentlyBuyingItem,item);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
               MethodInfo__EditModeRepositoryController___PurchaseClientShopItem_b__1_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&
                    EditModeClientShopItem_MethodInfo__UnityEngine__Object__Instantiate<EditModeClientShopItem>_EditModeClientShopItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___ClientShopInvento);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pGVar3 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar3,StringLiteral_Preview_Root___ClientShopInvento,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    (this->fields).previewRootTransform = pTVar1;
    func_?(&(this->fields).previewRootTransform,pTVar1);
    iVar4 = 0;
    pLVar5 = (this->fields).previewedObjects;
    while (pLVar5 != (List_1_MVWorldObjectClient_ *)0x0) {
      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).previewedObjects;
      if ((pLVar5->fields)._size <= iVar4) {
        if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          iVar4 = (pLVar6->fields)._size;
          piVar7 = &(pLVar6->fields)._version;
          *piVar7 = *piVar7 + 1;
          (pLVar6->fields)._size = 0;
          if (0 < iVar4) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar6->fields)._items,0,iVar4,(MethodInfo *)0x0);
          }
          pIVar8 = (this->fields).inventoryController;
          if (pIVar8 != (InventoryController *)0x0) {
            InventoryController::InventoryController_Clear(pIVar8,(MethodInfo *)0x0);
            pIVar8 = (this->fields).inventoryController;
            pDVar9 = (this->fields).tabs;
            if ((pDVar9 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
               (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,
                                    (this->fields).selectedTab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   ),
               tabId = 
               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_,
               pOVar10 != (Object *)0x0)) {
              currentPage = pOVar10[2].monitor;
              pDVar9 = (this->fields).tabs;
              if ((pDVar9 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
                 ((pTVar11 = (TabState *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Object]::
                             Dictionary_2_System_Int32_System_Object__get_Item
                                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,
                                        (this->fields).selectedTab,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                       ), pTVar11 != (TabState *)0x0 &&
                  (maxPages = TabState::TabState_get_MaxPages(pTVar11,(MethodInfo *)0x0),
                  pIVar8 != (InventoryController *)0x0)))) {
                InventoryController::InventoryController_SelectTab
                          (pIVar8,(int32_t)tabId,(int32_t)currentPage,maxPages,(MethodInfo *)0x0);
                this_00 = (this->fields).tabsNonLocalized;
                this_01 = (this->fields).playerShopInventoryRepository;
                if ((this_00 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                   (category = (String *)
                               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32,System::Object]::
                               Dictionary_2_System_Int32_System_Object__get_Item
                                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                          (this->fields).selectedTab,
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                         ), this_01 != (PlayerShopInventoryRepository *)0x0)) {
                  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            UGUI::Desktop::Scripts::EditMode::Inventories::
                            PlayerShopInventoryRepository::
                            PlayerShopInventoryRepository_GetShopItemsInCategorySlow
                                      (this_01,category,(MethodInfo *)0x0);
                  iVar4 = 0;
                  if (pLVar6 !=
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      }
      if (pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar6,iVar4,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                        );
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVWorldObjectClient);
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
                ((MVWorldObjectClient *)RVar12,(MethodInfo *)0x0);
      iVar4 = iVar4 + 1;
      pLVar5 = (this->fields).previewedObjects;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
code_?:
  if ((pLVar6->fields)._size <= iVar4) {
    return;
  }
  pDVar9 = (this->fields).tabs;
  if (pDVar9 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
  pTVar11 = (TabState *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__get_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,(this->fields).selectedTab
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                      );
  RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    (pLVar6,iVar4,
                     MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
  if ((RVar12 == (RegexCharClass_SingleRange)0x0) || (pTVar11 == (TabState *)0x0))
  goto code_?;
  bVar2 = TabState::TabState_SlotIndexIsInRange
                    (pTVar11,*(int32_t *)((int)RVar12 + 0x28),(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pEVar14 = (this->fields).previewItemPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pEVar14 = (EditModeClientShopItem *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pEVar14,
                         EditModeClientShopItem_MethodInfo__UnityEngine__Object__Instantiate<EditModeClientShopItem>_EditModeClientShopItem_
                        );
    RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar6,iVar4,
                       MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    woPreviewObject =
         EditModeClientShopController_GetWorldObjectFromItemData
                   ((ShopItem *)RVar12,(MethodInfo *)0x0);
    pLVar5 = (this->fields).previewedObjects;
    if (pLVar5 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar5,(Object *)woPreviewObject,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              );
    pTVar1 = (this->fields).previewRootTransform;
    RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar6,iVar4,
                       MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    if (pEVar14 == (EditModeClientShopItem *)0x0) goto code_?;
    EditModeClientShopItem::EditModeClientShopItem_Initialize
              (pEVar14,pTVar1,(ShopItem *)RVar12,woPreviewObject,(MethodInfo *)0x0);
    pIVar8 = (this->fields).inventoryController;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pEVar14,(MethodInfo *)0x0);
    RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar6,iVar4,
                       MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    if ((RVar12 == (RegexCharClass_SingleRange)0x0) || (pIVar8 == (InventoryController *)0x0))
    goto code_?;
    InventoryController::InventoryController_AddObject
              (pIVar8,pGVar3,*(int *)((int)RVar12 + 0x28) % (this->fields).numberOfSlotsPrPage,
               (MethodInfo *)0x0);
  }
  iVar4 = iVar4 + 1;
  goto code_?;
}


/* EditModeClientShopController() */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController__ctor
               (EditModeClientShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    cRam_? = '\x01';
  }
  (this->fields).selectedTab = 1;
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  (this->fields).tabs = (Dictionary_2_System_Int32_TabState_ *)pDVar1;
  func_?(&(this->fields).tabs,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  (this->fields).tabsNonLocalized = (Dictionary_2_System_Int32_System_String_ *)pDVar1;
  func_?(&(this->fields).tabsNonLocalized,pDVar1);
  this_00 = (List_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).previewedObjects = this_00;
  func_?(&(this->fields).previewedObjects,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

