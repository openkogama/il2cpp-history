
/* Nullable`1[MVWorldObjectDocumentationType] GetDocumentationType(InventorySlot) */

Nullable_1_MVWorldObjectDocumentationType_
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler::
FirstTimeGuiHandler_GetDocumentationType
          (FirstTimeGuiHandler *this,InventorySlot *slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                   );
    func_?(&
                    MethodInfo__System__Nullable<MVWorldObjectDocumentationType>__Nullable_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (slot != (InventorySlot *)0x0) {
    this_00 = InventorySlot::InventorySlot_get_Item(slot,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      NVar1.value = unaff_ESI;
      NVar1._0_4_ = 
      PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
      ;
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    (this_00,
                     PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                    );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        NVar1.value = (uint32_t)&UNK_?;
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (x == (Object_1 *)0x0) goto code_?;
        mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                  ((Nullable_1_UInt32_ *)&stack0xfffffff4,(uint32_t)x[7].monitor,
                   MethodInfo__System__Nullable<MVWorldObjectDocumentationType>__Nullable_MVWorldObjectDocumentationType_
                  );
      }
      NVar3.hasValue = NVar1.hasValue;
      uVar4._1_3_ = NVar1._1_3_;
      register0x00000008 = NVar1.value;
      return NVar3;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  NVar3 = (Nullable_1_MVWorldObjectDocumentationType_)(*pcVar5)();
  return NVar3;
}


/* Int32 GetItemSlot(MVWorldObjectDocumentationType, GameObject, Int32, InventorySlots, Int32) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler
        ::FirstTimeGuiHandler_GetItemSlot
                  (FirstTimeGuiHandler *this,MVWorldObjectDocumentationType__Enum docType,
                  GameObject *gameObject,int32_t itemCategory,InventorySlots *slots,
                  int32_t iteration,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                   );
    ppMVar6 = &
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Nullable<MVWorldObjectDocumentationType>__GetValueOrDefault__
                   );
    func_?(&MethodInfo__System__Nullable<MVWorldObjectDocumentationType>__get_HasValue__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                   );
    cRam_? = '\x01';
    in_stack_7 = (ExecuteEvents__Class **)ppMVar6;
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (slots != (InventorySlots *)0x0) {
    iVar8 = (slots->fields)._SlotCountPerPage_k__BackingField;
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                     );
      in_stack_7 = &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
      func_?();
      func_?(&
                      MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0___OpenPage_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&
                      TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0
                     );
      cRam_? = '\x01';
    }
    value = (Object *)
            func_?(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0
                           );
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_7);
    if (value != (Object *)0x0) {
      value[1].klass = (Object__Class *)itemCategory;
      value[1].monitor = (MonitorData *)(iVar8 * iteration);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0___OpenPage_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (gameObject,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                );
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(slots->fields).inventorySlots;
      if (this_00 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Count__
                          );
        if (iVar9 != 0) {
          this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                              (this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                              );
          if (this_02 !=
              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar10 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                     ::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               (&DStack_11,this_02,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                               );
            this_01 = (MethodInfo *)pDVar10->_currentValue;
            DStack_11._version = 0;
            uStack_1 = 1;
            DStack_11._currentValue = (Object *)&stack0xffffffc4;
            do {
              do {
                bVar12 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                        UInt32,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                    *)&stack0xffffffc4,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                                  );
                if (bVar12 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffffc4,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                             ,unaff_EBX);
                  uStack_1 = 0xffffffff;
                  iVar9 = FirstTimeGuiHandler_GetItemSlot
                                    (this,docType,gameObject,itemCategory,slots,iteration + 1,
                                     (MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_3;
                  return iVar9;
                }
                if (this_01 == (MethodInfo *)0x0) goto code_?;
                method_00 = this_01;
                pGStack_13 = InventorySlot::InventorySlot_get_Item
                                       ((InventorySlot *)this_01,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  unaff_EBX = (MethodInfo *)&UNK_?;
                  func_?();
                }
                bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                  ((Object_1 *)pGStack_13,(Object_1 *)0x0,(MethodInfo *)0x0);
              } while (bVar12 != 0);
              NVar14 = FirstTimeGuiHandler_GetDocumentationType
                                (this,(InventorySlot *)this_01,(MethodInfo *)0x0);
            } while ((NVar14.hasValue == 0) || ((NVar14.hasValue & NVar14.value == docType) == 0));
            if (this_01 != (MethodInfo *)0x0) {
              pIVar15 = this_01->klass;
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffffc4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return (int32_t)pIVar15;
            }
          }
          goto code_?;
        }
      }
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  iVar9 = (*pcVar17)();
  return iVar9;
}


/* Void HighlightInCategoryAtSlot(GameObject, Int32, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler::
     FirstTimeGuiHandler_HighlightInCategoryAtSlot
               (FirstTimeGuiHandler *this,GameObject *gameObject,int32_t itemCategory,
               int32_t itemSlot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass1_0___HighlightInCategoryAtSlot_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass1_0
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass1_0
  ;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)itemCategory;
    value[1].monitor = (MonitorData *)itemSlot;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass1_0___HighlightInCategoryAtSlot_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
               ,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OpenPage(GameObject, Int32, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler::
     FirstTimeGuiHandler_OpenPage
               (FirstTimeGuiHandler *this,GameObject *gameObject,int32_t itemCategory,
               int32_t slotsSlotCountPerPage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0___OpenPage_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0
  ;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)itemCategory;
    value[1].monitor = (MonitorData *)slotsSlotCountPerPage;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0___OpenPage_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
               ,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OpenTab(GameObject, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler::
     FirstTimeGuiHandler_OpenTab
               (FirstTimeGuiHandler *this,GameObject *gameObject,int32_t itemCategory,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass0_0___OpenTab_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass0_0
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass0_0
  ;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)itemCategory;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass0_0___OpenTab_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
               ,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

