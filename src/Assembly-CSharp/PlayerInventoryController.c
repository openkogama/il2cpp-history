
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_Activate
               (PlayerInventoryController *this,UIPushOption__Enum options,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                   );
    func_?(&TypeInfo__ESCubeEdit);
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
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
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
    func_?(&MethodInfo__PlayerInventoryController__InventoryChanged__);
    func_?(&MethodInfo__PlayerInventoryController__PageTurned_int_);
    func_?(&MethodInfo__PlayerInventoryController__SlotChanged_int__int_);
    func_?(&MethodInfo__PlayerInventoryController__TabSelected_int_);
    func_?(&
                    MethodInfo__PlayerInventoryController____c___Activate_b__20_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerInventoryController____c__DisplayClass20_0);
    func_?(&TypeInfo__PlayerInventoryController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
    cRam_? = '\x01';
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__PlayerInventoryController____c__DisplayClass20_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  if (this_01 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) goto code_?;
  this_01[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)this;
  func_?();
  this_01[1].monitor = (MonitorData *)options;
  pIVar4 = (this->fields).inventoryController;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) goto code_?;
  (this_01->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)0x0;
  func_?();
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  method_00 = 
  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
  ;
  pEVar7 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)pEVar7,(Object *)this_01,
             MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar6,(BaseEventData *)0x0,pEVar7,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
            );
  pLVar8 = (this_01->fields)._._defaultValue_k__BackingField;
  if (pLVar8 != (List_1_System_Object_ *)0x0) {
    pLVar9 = pLVar8->klass;
    if (((TypeInfo__ESCubeEdit->_1).naturalAligment <= (pLVar9->_1).naturalAligment) &&
       ((pLVar9->_1).typeHierarchy[(TypeInfo__ESCubeEdit->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__ESCubeEdit)) goto code_?;
  }
  PlayerInventoryController_UpdatePageCount(this,(MethodInfo *)0x0);
  pIVar4 = (this->fields).inventoryControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar4 = (InventoryController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pIVar4,
                      InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                     );
  (this->fields).inventoryController = pIVar4;
  func_?();
  pIVar4 = (this->fields).inventoryController;
  if (pIVar4 == (InventoryController *)0x0) goto code_?;
  pUVar10 = (pIVar4->fields).OnTabSelected;
  pUVar11 = (UnityAction_1_System_Int32Enum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (pUVar11,(Object *)this,MethodInfo__PlayerInventoryController__TabSelected_int_,
             (MethodInfo *)0x0);
  pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar10,(Delegate *)pUVar11,(MethodInfo *)0x0);
  if (pDVar12 == (Delegate *)0x0) {
    (pIVar4->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
code_?:
    func_?();
    pIVar4 = (this->fields).inventoryController;
    if (pIVar4 == (InventoryController *)0x0) goto code_?;
    pUVar10 = (pIVar4->fields).OnPageTurned;
    pUVar11 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar11,(Object *)this,MethodInfo__PlayerInventoryController__PageTurned_int_,
               (MethodInfo *)0x0);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar10,(Delegate *)pUVar11,(MethodInfo *)0x0);
    if (pDVar12 == (Delegate *)0x0) {
      (pIVar4->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
    }
    else {
      pUVar10 = (UnityAction_1_System_Int32_ *)func_?();
      if (pUVar10 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
      (pIVar4->fields).OnPageTurned = pUVar10;
      iVar13 = func_?();
      if (iVar13 == 0) goto code_?;
    }
    func_?();
    pIVar4 = (this->fields).inventoryController;
    if (pIVar4 == (InventoryController *)0x0) goto code_?;
    pUVar14 = (pIVar4->fields).OnSlotChanged;
    this_02 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_02,(Object *)this,MethodInfo__PlayerInventoryController__SlotChanged_int__int_,
               (MethodInfo *)0x0);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar14,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar12 == (Delegate *)0x0) {
      (pIVar4->fields).OnSlotChanged = (UnityAction_2_System_Int32_System_Int32_ *)0x0;
    }
    else {
      pUVar14 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
      if (pUVar14 == (UnityAction_2_System_Int32_System_Int32_ *)0x0) goto code_?;
      (pIVar4->fields).OnSlotChanged = pUVar14;
      iVar13 = func_?();
      if (iVar13 == 0) goto code_?;
    }
    func_?();
    pPVar15 = (this->fields).repository;
    if (pPVar15 == (PlayerShopInventoryRepository *)0x0) goto code_?;
    pAVar16 = (pPVar15->fields).OnInventoryChanged;
    this_03 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_03,(Object *)this,MethodInfo__PlayerInventoryController__InventoryChanged__,
               (MethodInfo *)0x0);
    pAVar16 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar16,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pAVar16 == (Action *)0x0) {
      (pPVar15->fields).OnInventoryChanged = (Action *)0x0;
code_?:
      func_?();
      pIVar4 = (this->fields).inventoryController;
      if (pIVar4 != (InventoryController *)0x0) {
        InventoryController::InventoryController_Initialize
                  (pIVar4,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
        this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabs;
        if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          pDVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                    Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                               &stack0xffffffa4,this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                              );
          categoryId = (pDVar17->_current).key;
          uVar18 = *(undefined8 *)&(pDVar17->_current).value;
          uStack_1 = 1;
          while( true ) {
            bVar5 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                               &stack0xffffffbc,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                              );
            if (bVar5 == 0) break;
            pIVar4 = (this->fields).inventoryController;
            if (((Object *)uVar18 == (Object *)0x0) || (pIVar4 == (InventoryController *)0x0))
            goto code_?;
            InventoryController::InventoryController_AddTab
                      (pIVar4,categoryId,(String *)((Object *)uVar18)[1].monitor,(MethodInfo *)0x0);
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffbc,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                     ,(MethodInfo *)method_00);
          uStack_1 = 0xffffffff;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__PlayerInventoryController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__PlayerInventoryController____c->static_fields->__9__20_1;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__PlayerInventoryController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            object = TypeInfo__PlayerInventoryController____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)object,
                       MethodInfo__PlayerInventoryController____c___Activate_b__20_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__PlayerInventoryController____c->static_fields->__9__20_1 = callbackFunction;
            func_?();
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar6,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          pEVar7 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar7,(Object *)this_01,
                     MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar6,(BaseEventData *)0x0,pEVar7,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      goto code_?;
    }
    pAVar19 = (Action *)0x0;
    if (pAVar16->klass == TypeInfo__System__Action) {
      pAVar19 = pAVar16;
    }
    if (pAVar19 != (Action *)0x0) {
      (pPVar15->fields).OnInventoryChanged = pAVar19;
      pAVar19 = (Action *)0x0;
      if (pAVar16->klass == TypeInfo__System__Action) {
        pAVar19 = pAVar16;
      }
      if (pAVar19 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    pUVar10 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar10 != (UnityAction_1_System_Int32_ *)0x0) {
      (pIVar4->fields).OnTabSelected = pUVar10;
      iVar13 = func_?();
      if (iVar13 == 0) goto code_?;
      goto code_?;
    }
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).repository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_04 = (Dictionary_2_System_Int32Enum_System_Object_ *)
              RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                        ((TerrainGizmoLookAndFeel *)this_00,(MethodInfo *)0x0);
    if (this_04 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    (this_04,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffac,this_01,
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
                             &stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          pMVar9 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)pMVar9,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,pMVar9);
        uStack_1 = 0xffffffff;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = (this->fields).tabs;
        if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          pMVar9 = (MethodInfo *)&UNK_?;
          this_05 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          if (this_05 != (TabState *)0x0) {
            func_?();
            page = func_?();
            TabState::TabState_SetPage(this_05,page,pMVar9);
            this_03 = (this->fields).inventoryController;
            if (this_03 != (InventoryController *)0x0) {
              InventoryController::InventoryController_HighlightSlot
                        (this_03,slotPosition % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0
                        );
              PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
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


/* Void DragFailed() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_DragFailed
               (PlayerInventoryController *this,MethodInfo *method)

{
  (this->fields).draggedPreviewItem = (PlayerInventoryPreviewItem *)0x0;
  func_?(&(this->fields).draggedPreviewItem,0);
  PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
  return;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(InventoryItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_GetWorldObjectFromItemData
          (InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__KoGaMaPackageClient);
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


/* Void Initialize() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_Initialize
               (PlayerInventoryController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
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
    func_?(&TypeInfo__TabState);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar6 != (IEditModeUI *)0x0) {
    pPVar7 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar6);
    (this->fields).repository = pPVar7;
    method_00 = (MethodInfo *)&(this->fields).repository;
    func_?(method_00,pPVar7);
    pPVar7 = (this->fields).repository;
    (this->fields).selectedTab = 1;
    pMStack_8 = (MethodInfo *)0x1;
    if (pPVar7 != (PlayerShopInventoryRepository *)0x0) {
      pDStack_9 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                                ((TerrainGizmoLookAndFeel *)pPVar7,(MethodInfo *)0x0);
      if (pDStack_9 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                            (pDStack_9,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                            );
        if (this_01 !=
            (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar10 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_11,
                              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)this_01,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                             );
          pTStack_12 = (TabState__Class *)pDVar10->_currentValue;
          DStack_11._version = 0;
          uStack_1 = 1;
          DStack_11._currentValue = (Object *)&stack0xffffffb0;
          while( true ) {
            bVar13 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffb0,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                              );
            if (bVar13 == 0) break;
            pDStack_14 = (this->fields).tabsNonLocalized;
            pTStack_15 = pTStack_12;
            pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_9,
                                (Int32Enum__Enum)pTStack_12,
                                MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                               );
            if (pDStack_14 == (Dictionary_2_System_Int32_System_String_ *)0x0)
            goto code_?;
            method_00 = pMStack_8;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDStack_14,(int32_t)pMStack_8,
                       pOVar16,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                      );
            pDStack_17 = (this->fields).tabs;
            key = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_9,
                             (Int32Enum__Enum)pTStack_15,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                            );
            pSStack_18 = TM::TM__(key,(MethodInfo *)0x0);
            pDStack_14 = (Dictionary_2_System_Int32_System_String_ *)
                         (this->fields).numberOfSlotsPrPage;
            pTStack_12 = TypeInfo__TabState;
            this_02 = (TabState *)func_?();
            TabState::TabState__ctor
                      (this_02,(int32_t)pTStack_15,pSStack_18,(int32_t)pDStack_14,(MethodInfo *)0x0)
            ;
            pPVar7 = (this->fields).repository;
            if (pPVar7 == (PlayerShopInventoryRepository *)0x0) goto code_?;
            iVar19 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                    PlayerShopInventoryRepository_HighestSlotIndex
                              (pPVar7,(InventoryCategoryType__Enum)pTStack_15,(MethodInfo *)0x0);
            pMVar20 = pMStack_8;
            if (this_02 == (TabState *)0x0) goto code_?;
            (this_02->fields).highestSlotIndex = iVar19;
            if (pDStack_17 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDStack_17,(int32_t)pMStack_8,
                       (Object *)this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                      );
            pMStack_8 = (MethodInfo *)((int)&pMVar20->methodPointer + 1);
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          this_00 = (this->fields).tabs;
          if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
            pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_00,1,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                               );
            if (pOVar16 != (Object *)0x0) {
              pOVar16[2].klass =
                   (Object__Class *)
                   ((int)&((pOVar16[2].klass)->_0).image + (this->fields).numberOfSlotsPrPage);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  uVar21 = func_?();
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void InventoryChanged() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_InventoryChanged
               (PlayerInventoryController *this,MethodInfo *method)

{
  PlayerInventoryController_UpdatePageCount(this,(MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___PlayerInventory);
    cRam_? = '\x01';
  }
  pTVar1 = (in_stack_2->fields).previewRootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar1 = (in_stack_2->fields).previewRootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar4,(MethodInfo *)0x0);
  }
  pGVar4 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar4,StringLiteral_Preview_Root___PlayerInventory,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar4,(MethodInfo *)0x0);
    (in_stack_2->fields).previewRootTransform = pTVar1;
    func_?(&(in_stack_2->fields).previewRootTransform,pTVar1);
    iVar5 = 0;
    pLVar6 = (in_stack_2->fields).previewedObjects;
    while (pLVar6 != (List_1_MVWorldObjectClient_ *)0x0) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (in_stack_2->fields).previewedObjects;
      if ((pLVar6->fields)._size <= iVar5) {
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        iVar5 = (this_00->fields)._size;
        piVar7 = &(this_00->fields)._version;
        *piVar7 = *piVar7 + 1;
        (this_00->fields)._size = 0;
        if (0 < iVar5) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(this_00->fields)._items,0,iVar5,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__InventoryItemDragHandler);
          cRam_? = '\x01';
        }
        if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
          pPVar8 = (in_stack_2->fields).draggedPreviewItem;
          if ((pPVar8 == (PlayerInventoryPreviewItem *)0x0) ||
             (pIVar9 = (pPVar8->fields).item, pIVar9 == (InventoryItem *)0x0)) break;
          if ((pIVar9->fields).hasData != 0) {
            pLVar6 = (in_stack_2->fields).previewedObjects;
            if (pLVar6 == (List_1_MVWorldObjectClient_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar6,
                       (Object *)(in_stack_2->fields).worldObjectDataCopy,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      );
            pMVar10 = (in_stack_2->fields).worldObjectDataCopy;
            if ((pMVar10 == (MVWorldObjectClient *)0x0) ||
               (pTVar1 = (pMVar10->fields).transform, pTVar1 == (Transform *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar1,(in_stack_2->fields).previewRootTransform,(MethodInfo *)0x0);
            pIVar11 = (in_stack_2->fields).draggedPreview;
            if ((pIVar11 == (InventoryItemPreviewer *)0x0) ||
               ((this_01 = (pIVar11->fields).previewCam, this_01 == (Camera *)0x0 ||
                (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
                pTVar1 == (Transform *)0x0)))) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar1,(in_stack_2->fields).previewRootTransform,(MethodInfo *)0x0);
          }
        }
        pIVar12 = (in_stack_2->fields).inventoryController;
        if (pIVar12 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Clear(pIVar12,(MethodInfo *)0x0);
          this_02 = (in_stack_2->fields).tabs;
          if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
            tabState = (TabState *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                                  (in_stack_2->fields).selectedTab,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                 );
            pIVar12 = (in_stack_2->fields).inventoryController;
            tabId = (in_stack_2->fields).selectedTab;
            if (tabState != (TabState *)0x0) {
              this_03 = (TabState *)(tabState->fields).currentPage;
              maxPages = TabState::TabState_get_MaxPages(this_03,(MethodInfo *)0x0);
              if (pIVar12 != (InventoryController *)0x0) {
                InventoryController::InventoryController_SelectTab
                          (pIVar12,tabId,(int32_t)this_03,maxPages,(MethodInfo *)0x0);
                this_04 = (in_stack_2->fields).tabsNonLocalized;
                this_05 = (in_stack_2->fields).repository;
                if ((this_04 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                   (s = (String *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_04,
                                   (in_stack_2->fields).selectedTab,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                  ), this_05 != (PlayerShopInventoryRepository *)0x0)) {
                  pLVar13 = UGUI::Desktop::Scripts::EditMode::Inventories::
                            PlayerShopInventoryRepository::
                            PlayerShopInventoryRepository_GetInventoryItemsInCategorySlow
                                      (this_05,s,(MethodInfo *)0x0);
                  (in_stack_2->fields).items = pLVar13;
                  func_?();
                  if ((tabState->fields)._TabID_k__BackingField != 1) {
                    PlayerInventoryController_UpdateSlots
                              (in_stack_2,tabState,(MethodInfo *)0x0);
                    return;
                  }
                  PlayerInventoryController_UpdateSlotsWithDragAndDrop
                            (in_stack_2,tabState,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        break;
      }
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      wo = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,iVar5,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
                ((MVWorldObjectClient *)wo,(MethodInfo *)0x0);
      iVar5 = iVar5 + 1;
      pLVar6 = (in_stack_2->fields).previewedObjects;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ItemDataLoaded(PlayerInventoryPreviewItem, InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_ItemDataLoaded
               (PlayerInventoryController *this,PlayerInventoryPreviewItem *itemPreview,
               InventoryItem *inventoryItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    cRam_? = '\x01';
  }
  woPreviewObject =
       PlayerInventoryController_GetWorldObjectFromItemData(inventoryItem,(MethodInfo *)0x0);
  this_00 = (this->fields).previewedObjects;
  if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)woPreviewObject,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              );
    if (itemPreview != (PlayerInventoryPreviewItem *)0x0) {
      PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_LoadItemPreviewer
                (itemPreview,(this->fields).previewRootTransform,inventoryItem,woPreviewObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OnPop
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__PlayerInventoryController__InventoryChanged__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tempPreviewRoot;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    pTVar1 = (this->fields).previewRootTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar1 = (this->fields).previewRootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    }
    pPVar4 = (this->fields).repository;
    if (pPVar4 != (PlayerShopInventoryRepository *)0x0) {
      pAVar5 = (pPVar4->fields).OnInventoryChanged;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__PlayerInventoryController__InventoryChanged__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        (pPVar4->fields).OnInventoryChanged = (Action *)0x0;
      }
      else {
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          func_?();
          goto code_?;
        }
        (pPVar4->fields).OnInventoryChanged = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
      }
      func_?();
      iVar7 = 0;
      pLVar8 = (this->fields).previewedObjects;
      while (pLVar8 != (List_1_MVWorldObjectClient_ *)0x0) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).previewedObjects;
        if ((pLVar8->fields)._size <= iVar7) {
          if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            iVar7 = (this_00->fields)._size;
            piVar9 = &(this_00->fields)._version;
            *piVar9 = *piVar9 + 1;
            (this_00->fields)._size = 0;
            if (0 < iVar7) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(this_00->fields)._items,0,iVar7,(MethodInfo *)0x0);
            }
            return;
          }
          break;
        }
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        wo = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_00,iVar7,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                       );
        if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
                  ((MVWorldObjectClient *)wo,(MethodInfo *)0x0);
        iVar7 = iVar7 + 1;
        pLVar8 = (this->fields).previewedObjects;
      }
    }
  }
  else {
    pTVar1 = (this->fields).tempPreviewRoot;
    if (pTVar1 != (Transform *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OpenPage(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OpenPage
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
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
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).repository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_03 = (Dictionary_2_System_Int32Enum_System_Object_ *)
              RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                        ((TerrainGizmoLookAndFeel *)this_00,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    (this_03,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffac,this_01,
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
                             &stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          pMVar9 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)pMVar9,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,pMVar9);
        uStack_1 = 0xffffffff;
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
            pMVar9 = (MethodInfo *)0x0;
            func_?();
            page = func_?();
            TabState::TabState_SetPage(this_04,page,pMVar9);
            PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
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


/* Void OpenTab(UIPushOption, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OpenTab
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
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
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).repository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_03 = (Dictionary_2_System_Int32Enum_System_Object_ *)
              RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                        ((TerrainGizmoLookAndFeel *)this_00,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    (this_03,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffac,this_01,
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
                             &stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          pMVar9 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)pMVar9,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,pMVar9);
        uStack_1 = 0xffffffff;
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
            pMVar9 = (MethodInfo *)0x0;
            func_?();
            page = func_?();
            TabState::TabState_SetPage(this_04,page,pMVar9);
            PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_PageTurned
               (PlayerInventoryController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_temp_Root___PlayerInventory);
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
        pTVar2 = (this->fields).tempPreviewRoot;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pTVar2 = (this->fields).tempPreviewRoot;
          if (pTVar2 == (Transform *)0x0) goto code_?;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
        func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).draggedPreviewItem;
  if ((pPVar1 != (PlayerInventoryPreviewItem *)0x0) &&
     (pIVar2 = (pPVar1->fields).item, pIVar2 != (InventoryItem *)0x0)) {
    if ((pIVar2->fields).hasData == 0) {
      return;
    }
    pMVar3 = PlayerInventoryController_GetWorldObjectFromItemData
                       ((((this->fields).draggedPreviewItem)->fields).item,(MethodInfo *)0x0);
    (this->fields).worldObjectDataCopy = pMVar3;
    func_?(&(this->fields).worldObjectDataCopy,pMVar3);
    pPVar1 = (this->fields).draggedPreviewItem;
    if (pPVar1 != (PlayerInventoryPreviewItem *)0x0) {
      pIVar4 = (pPVar1->fields).objectPreviewer;
      (this->fields).draggedPreview = pIVar4;
      func_?(&(this->fields).draggedPreview,pIVar4);
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).previewedObjects;
      index = 0;
      while (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        if ((pLVar5->fields)._size <= index) {
          pMVar3 = (this->fields).worldObjectDataCopy;
          if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVWorldObjectClient);
          }
          MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar3,(MethodInfo *)0x0);
          return;
        }
        pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).previewedObjects;
        if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar5,index,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              ), RVar6 == (RegexCharClass_SingleRange)0x0)) break;
        iVar7 = *(int *)((int)RVar6 + 0x80);
        pIVar4 = (this->fields).draggedPreview;
        if ((pIVar4 == (InventoryItemPreviewer *)0x0) ||
           (this_00 = (pIVar4->fields)._PreviewGameObject_k__BackingField,
           this_00 == (GameObject *)0x0)) break;
        iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                          ((Object_1 *)this_00,(MethodInfo *)0x0);
        pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).previewedObjects;
        if (iVar7 == iVar8) {
          if (((pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
              && (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar5,index,
                                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                    ), RVar6 != (RegexCharClass_SingleRange)0x0)) &&
             (*(Transform **)((int)RVar6 + 0x90) != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (*(Transform **)((int)RVar6 + 0x90),(this->fields).tempPreviewRoot,
                       (MethodInfo *)0x0);
            pIVar4 = (this->fields).draggedPreview;
            if (((pIVar4 != (InventoryItemPreviewer *)0x0) &&
                (this_01 = (pIVar4->fields).previewCam, this_01 != (Camera *)0x0)) &&
               (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
               this_03 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                        (this_03,(this->fields).tempPreviewRoot,(MethodInfo *)0x0);
              pMVar3 = (this->fields).worldObjectDataCopy;
              if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar3,(MethodInfo *)0x0);
              pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).previewedObjects;
              if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (pLVar5,index,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                  );
                (this->fields).worldObjectDataCopy = (MVWorldObjectClient *)RVar6;
                func_?(&(this->fields).worldObjectDataCopy,RVar6);
                this_02 = (this->fields).previewedObjects;
                if (this_02 != (List_1_MVWorldObjectClient_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__RemoveAt
                            ((List_1_System_Object_ *)this_02,index,
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetCurrentDragTarget(GameObject) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_SetCurrentDragTarget
               (PlayerInventoryController *this,GameObject *draggingGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (draggingGameObject != (GameObject *)0x0) {
    pPVar1 = (PlayerInventoryPreviewItem *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (draggingGameObject,
                        PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                       );
    (this->fields).draggedPreviewItem = pPVar1;
    func_?();
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SlotChanged(Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_SlotChanged
               (PlayerInventoryController *this,int32_t from,int32_t to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__InventoryItemDragHandler);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    func_?(&StringLiteral_destination_isDefaultInvItem);
    cRam_? = '\x01';
  }
  if (from == to) {
    return;
  }
  RStack_1.First = 0;
  RStack_1.Last = 0;
  source.First = 0;
  source.Last = 0;
  index = 0;
  pLVar2 = (this->fields).items;
  if (pLVar2 != (List_1_InventoryItem_ *)0x0) {
    while (iVar3 = to, index < (pLVar2->fields)._size) {
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).items;
      if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar4,index,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).items;
      if (*(int *)((int)RVar5 + 0x3c) == from) {
        if (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        source = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           );
      }
      else {
        if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar4,index,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        if (*(int *)((int)RVar5 + 0x3c) == to) {
          pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).items;
          if (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          RStack_1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar4,index,
                                MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                               );
        }
      }
      pLVar2 = (this->fields).items;
      index = index + 1;
      if (pLVar2 == (List_1_InventoryItem_ *)0x0) goto code_?;
    }
    if (RStack_1 == (RegexCharClass_SingleRange)0x0) {
      if (source != (RegexCharClass_SingleRange)0x0) {
        *(int32_t *)((int)source + 0x3c) = to;
        pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        to = *(int32_t *)((int)source + 8);
        pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&to);
        from = iVar3;
        pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&from);
        if (pDVar6 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar7,pOVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                             ((MethodInfo *)0x0);
          if (pMVar9 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateInventorySlots
                      (pMVar9,(Dictionary_2_System_Object_System_Object_ *)pDVar6,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
    else {
      if (*(char *)((int)RStack_1 + 0x35) != '\0') {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_destination_isDefaultInvItem,(MethodInfo *)0x0);
        TypeInfo__InventoryItemDragHandler->static_fields->dragRejected = 1;
        return;
      }
      this_00 = (this->fields).repository;
      if (this_00 != (PlayerShopInventoryRepository *)0x0) {
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_SwapInventoryItemSlotPositions
                  (this_00,(InventoryItem *)source,(InventoryItem *)RStack_1,(MethodInfo *)0x0);
        pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (source != (RegexCharClass_SingleRange)0x0) {
          uStack_10 = *(undefined4 *)((int)source + 8);
          pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&uStack_10);
          pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
          if (pDVar6 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar7,pOVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
            pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar6,pOVar7,pOVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            pMVar9 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar9 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateInventorySlots
                        (pMVar9,(Dictionary_2_System_Object_System_Object_ *)pDVar6,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___PlayerInventory);
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
            (pGVar3,StringLiteral_Preview_Root___PlayerInventory,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar3,(MethodInfo *)0x0);
    (this->fields).previewRootTransform = pTVar1;
    func_?(&(this->fields).previewRootTransform,pTVar1);
    iVar4 = 0;
    pLVar5 = (this->fields).previewedObjects;
    while (pLVar5 != (List_1_MVWorldObjectClient_ *)0x0) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).previewedObjects;
      if ((pLVar5->fields)._size <= iVar4) {
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        iVar4 = (this_00->fields)._size;
        piVar6 = &(this_00->fields)._version;
        *piVar6 = *piVar6 + 1;
        (this_00->fields)._size = 0;
        if (0 < iVar4) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(this_00->fields)._items,0,iVar4,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__InventoryItemDragHandler);
          cRam_? = '\x01';
        }
        if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
          pPVar7 = (this->fields).draggedPreviewItem;
          if ((pPVar7 == (PlayerInventoryPreviewItem *)0x0) ||
             (pIVar8 = (pPVar7->fields).item, pIVar8 == (InventoryItem *)0x0)) break;
          if ((pIVar8->fields).hasData != 0) {
            pLVar5 = (this->fields).previewedObjects;
            if (pLVar5 == (List_1_MVWorldObjectClient_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar5,(Object *)(this->fields).worldObjectDataCopy,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      );
            pMVar9 = (this->fields).worldObjectDataCopy;
            if ((pMVar9 == (MVWorldObjectClient *)0x0) ||
               (pTVar1 = (pMVar9->fields).transform, pTVar1 == (Transform *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar1,(this->fields).previewRootTransform,(MethodInfo *)0x0);
            pIVar10 = (this->fields).draggedPreview;
            if ((pIVar10 == (InventoryItemPreviewer *)0x0) ||
               ((this_01 = (pIVar10->fields).previewCam, this_01 == (Camera *)0x0 ||
                (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
                pTVar1 == (Transform *)0x0)))) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar1,(this->fields).previewRootTransform,(MethodInfo *)0x0);
          }
        }
        pIVar11 = (this->fields).inventoryController;
        if (pIVar11 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Clear(pIVar11,(MethodInfo *)0x0);
          this_02 = (this->fields).tabs;
          if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
            tabState = (TabState *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                                  (this->fields).selectedTab,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                 );
            pIVar11 = (this->fields).inventoryController;
            tabId = (this->fields).selectedTab;
            if (tabState != (TabState *)0x0) {
              this_03 = (TabState *)(tabState->fields).currentPage;
              maxPages = TabState::TabState_get_MaxPages(this_03,(MethodInfo *)0x0);
              if (pIVar11 != (InventoryController *)0x0) {
                InventoryController::InventoryController_SelectTab
                          (pIVar11,tabId,(int32_t)this_03,maxPages,(MethodInfo *)0x0);
                this_04 = (this->fields).tabsNonLocalized;
                this_05 = (this->fields).repository;
                if ((this_04 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                   (s = (String *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_04,
                                   (this->fields).selectedTab,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                  ), this_05 != (PlayerShopInventoryRepository *)0x0)) {
                  pLVar12 = UGUI::Desktop::Scripts::EditMode::Inventories::
                            PlayerShopInventoryRepository::
                            PlayerShopInventoryRepository_GetInventoryItemsInCategorySlow
                                      (this_05,s,(MethodInfo *)0x0);
                  (this->fields).items = pLVar12;
                  func_?();
                  if ((tabState->fields)._TabID_k__BackingField != 1) {
                    PlayerInventoryController_UpdateSlots(this,tabState,(MethodInfo *)0x0);
                    return;
                  }
                  PlayerInventoryController_UpdateSlotsWithDragAndDrop
                            (this,tabState,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        break;
      }
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      wo = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,iVar4,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
                ((MVWorldObjectClient *)wo,(MethodInfo *)0x0);
      iVar4 = iVar4 + 1;
      pLVar5 = (this->fields).previewedObjects;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdatePageCount() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdatePageCount
               (PlayerInventoryController *this,MethodInfo *method)

{
  pPVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb0;
  puVar6 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
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
    in_stack_7 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
    ;
    func_?();
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  iStack_8 = 1;
  this_00 = (this->fields).repository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                           ((TerrainGizmoLookAndFeel *)this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                          );
      if (this_03 !=
          (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_10,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                           );
        pOVar11 = pDVar9->_currentValue;
        DStack_10._version = 0;
        uStack_2 = 1;
        DStack_10._currentValue = (Object *)&stack0xffffffbc;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                            );
          if (bVar12 == 0) {
            uStack_2 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffbc,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                       ,(MethodInfo *)in_stack_7);
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
          this = (PlayerInventoryController *)0x0;
          if (pOVar11 == (Object *)0x1) {
            this = (PlayerInventoryController *)(pPVar1->fields).numberOfSlotsPrPage;
          }
          this_01 = (pPVar1->fields).tabs;
          pOStack_13 = pOVar11;
          if (this_01 == (Dictionary_2_System_Int32_TabState_ *)0x0) break;
          pOStack_14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)this_01,iStack_8,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                 );
          in_stack_7 = (MethodInfo **)(pPVar1->fields).repository;
          if ((MethodInfo *)in_stack_7 == (MethodInfo *)0x0) break;
          iVar15 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                  PlayerShopInventoryRepository_HighestSlotIndex
                            ((PlayerShopInventoryRepository *)in_stack_7,
                             (InventoryCategoryType__Enum)pOStack_13,(MethodInfo *)0x0);
          if (pOStack_14 == (Object *)0x0) break;
          iStack_8 = iStack_8 + 1;
          pOStack_14[2].klass = (Object__Class *)((int)&this->klass + iVar15);
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateSlots(TabState) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdateSlots
               (PlayerInventoryController *this,TabState *tabState,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__)
    ;
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    func_?(&
                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (this->fields).itemsWithData;
  if (pLVar6 != (List_1_InventoryItem_ *)0x0) {
    iVar7 = (pLVar6->fields)._size;
    piVar8 = &(pLVar6->fields)._version;
    *piVar8 = *piVar8 + 1;
    (pLVar6->fields)._size = 0;
    if (0 < iVar7) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar6->fields)._items,0,iVar7,(MethodInfo *)0x0);
    }
    method_00 = (MethodInfo *)(this->fields).items;
    if (method_00 != (MethodInfo *)0x0) {
      pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_10,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          method_00,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__
                         );
      item = pLVar9->_current;
      LStack_10._version = 0;
      uStack_1 = 1;
      LStack_10._current = (RegexCharClass_SingleRange)&stack0xffffffc4;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                          );
        if (bVar11 == 0) break;
        if (item == (RegexCharClass_SingleRange)0x0) goto code_?;
        if (*(char *)&((Object *)((int)item + 0x20))->klass != '\0') {
          pLVar6 = (this->fields).itemsWithData;
          if (pLVar6 == (List_1_InventoryItem_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar6,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                    );
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffc4,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      if (0 < (this->fields).numberOfSlotsPrPage) {
        iVar7 = 0;
        if (tabState == (TabState *)0x0) goto code_?;
        do {
          pIVar12 = TabState::TabState_get_SlotRange(tabState,(MethodInfo *)0x0);
          if (pIVar12 == (Int32__Array *)0x0) goto code_?;
          if (pIVar12->max_length == 0) {
            func_?();
            goto code_?;
          }
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).itemsWithData;
          index = pIVar12->vector[0] + iVar7;
          if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          if ((this_00->fields)._size <= index) break;
          LStack_10._current =
               mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_00,index,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                         );
          woPreviewObject =
               PlayerInventoryController_GetWorldObjectFromItemData
                         ((InventoryItem *)LStack_10._current,(MethodInfo *)0x0);
          pPStack_13 = (this->fields).previewItemPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            LStack_10._index = (int32_t)TypeInfo__UnityEngine__Object;
            LStack_10._list =
                 (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&UNK_?;
            func_?();
          }
          pPStack_13 = (PlayerInventoryPreviewItem *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)pPStack_13,
                                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                                 );
          if (pPStack_13 == (PlayerInventoryPreviewItem *)0x0) goto code_?;
          PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize_1
                    (pPStack_13,(this->fields).previewRootTransform,
                     (InventoryItem *)LStack_10._current,woPreviewObject,0,(MethodInfo *)0x0);
          LStack_10._current = (RegexCharClass_SingleRange)(this->fields).inventoryController;
          item_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pPStack_13,(MethodInfo *)0x0);
          if (LStack_10._current == (RegexCharClass_SingleRange)0x0) goto code_?;
          InventoryController::InventoryController_AddObject
                    ((InventoryController *)LStack_10._current,item_00,iVar7,(MethodInfo *)0x0);
          this_01 = (this->fields).previewedObjects;
          if (this_01 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_01,(Object *)woPreviewObject,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
          iVar7 = iVar7 + 1;
        } while (iVar7 < (this->fields).numberOfSlotsPrPage);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateSlotsWithDragAndDrop(TabState) */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_UpdateSlotsWithDragAndDrop
               (PlayerInventoryController *this,TabState *tabState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    func_?(&
                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Drag_preview_item_found);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  pLVar2 = (this->fields).items;
  while (pLVar2 != (List_1_InventoryItem_ *)0x0) {
    if ((pLVar2->fields)._size <= (int)puStack_1) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).items;
    if (((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
        (item = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,(int32_t)puStack_1,
                           MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                          ), item == (RegexCharClass_SingleRange)0x0)) ||
       (tabState == (TabState *)0x0)) break;
    bVar3 = TabState::TabState_SlotIndexIsInRange
                      (tabState,*(int32_t *)((int)item + 0x3c),(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pPVar4 = (this->fields).draggedPreviewItem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pPVar4 = (this->fields).draggedPreviewItem;
        if ((pPVar4 == (PlayerInventoryPreviewItem *)0x0) ||
           (pIVar5 = (pPVar4->fields).item, pIVar5 == (InventoryItem *)0x0)) break;
        if (*(int *)((int)item + 8) == (pIVar5->fields).itemID) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          tabState = (TabState *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Drag_preview_item_found,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      pPVar4 = (this->fields).previewItemPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pPVar4 = (PlayerInventoryPreviewItem *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pPVar4,
                          PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                         );
      if (*(char *)((int)item + 0x20) == '\0') {
        if (pPVar4 == (PlayerInventoryPreviewItem *)0x0) break;
        PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
                  (pPVar4,(this->fields).previewRootTransform,(InventoryItem *)item,
                   *(char *)((int)item + 0x35) == '\0',1,(MethodInfo *)0x0);
      }
      else {
        woPreviewObject =
             PlayerInventoryController_GetWorldObjectFromItemData
                       ((InventoryItem *)item,(MethodInfo *)0x0);
        this_01 = (this->fields).previewedObjects;
        if ((this_01 == (List_1_MVWorldObjectClient_ *)0x0) ||
           (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_01,(Object *)woPreviewObject,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      ), pPVar4 == (PlayerInventoryPreviewItem *)0x0)) break;
        PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize_1
                  (pPVar4,(this->fields).previewRootTransform,(InventoryItem *)item,woPreviewObject,
                   *(char *)((int)item + 0x35) == '\0',(MethodInfo *)0x0);
      }
      this_02 = (this->fields).inventoryController;
      item_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pPVar4,(MethodInfo *)0x0);
      if (this_02 == (InventoryController *)0x0) break;
      tabState = (TabState *)0x0;
      InventoryController::InventoryController_AddObject
                (this_02,item_00,*(int *)((int)item + 0x3c) % (this->fields).numberOfSlotsPrPage,
                 (MethodInfo *)0x0);
    }
code_?:
    puStack_1 = puStack_1 + 1;
    pLVar2 = (this->fields).items;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* PlayerInventoryController() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController__ctor
               (PlayerInventoryController *this,MethodInfo *method)

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
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
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
  pLVar2 = (List_1_InventoryItem_ *)
           func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
  (this->fields).items = pLVar2;
  func_?();
  pLVar2 = (List_1_InventoryItem_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
  (this->fields).itemsWithData = pLVar2;
  func_?(&(this->fields).itemsWithData,pLVar2);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

