
/* Void DoShowing() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup_DoShowing
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0);
    func_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                   );
    func_?(&StringLiteral_prioritizedItem_in_first_time_pl);
    func_?(&StringLiteral_item_in_inventory_missing_docume);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0;
  value = (Debug_2__Class *)func_?();
  object_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  pTVar2 = (this->fields).tabGroup;
  (this->fields).showing = 1;
  if (pTVar2 != (TabMenu *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar2,(MethodInfo *)0x0);
    if ((TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
      if ((TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    pIVar4 = (this->fields).slots;
    if ((pIVar4 != (InventorySlots *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pIVar4,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                        (this_02,(MethodInfo *)0x0);
      if (iVar5 < 1) {
code_?:
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      if (value != (Debug_2__Class *)0x0) {
        (value->_0).name = (char *)0x0;
        func_?();
        pIVar4 = (this->fields).slots;
        this_05 = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
        if (((pIVar4 != (InventorySlots *)0x0) &&
            (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)(pIVar4->fields).inventorySlots,
            this_00 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0)) &&
           (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                ),
           this_03 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
          StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)&stack0xffffffc8,this_03,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                    );
          method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffb8).rgctx_data;
          while( true ) {
            this_04 = (CancellationTokenSource *)&stack0xffffffb8;
            bVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)this_04,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                              );
            if (bVar6 == 0) break;
            if (((this_04 == (CancellationTokenSource *)0x0) ||
                (method_00.methodMetadataHandle =
                      (Il2CppMetadataMethodDefinitionHandle)
                      InventorySlot::InventorySlot_get_Item
                                ((InventorySlot *)this_04,(MethodInfo *)0x0),
                method_00.rgctx_data == (Il2CppRGCTXData *)0x0)) ||
               (pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   ((GameObject *)method_00.methodMetadataHandle,
                                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                                   ), pOVar7 == (Object *)0x0)) goto code_?;
            if (pOVar7[0xb].klass == (Object__Class *)0x0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                object_00 = TypeInfo__UnityEngine__Debug;
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            else {
              pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
              this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                        (this->fields).priorityDictionary;
              if (this_01 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)
              goto code_?;
              method_00.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
              object_00 = (Debug_2__Class *)
                          MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
              ;
              bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Single]::
                      Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                                (this_01,(Int32Enum__Enum)pOVar7[0xb].klass,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                                );
              if (bVar6 != 0) {
                this_05 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                          (this->fields).priorityDictionary;
                if (this_05 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
                goto code_?;
                object_00 = (Debug_2__Class *)&UNK_?;
                pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   (this_05,(Int32Enum__Enum)pOVar7[0xb].klass,
                                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                                   );
              }
              if ((int)this_05 < (int)pDVar8) {
                (object_00->_0).name = (char *)pOVar7[9].monitor;
                this_05 = pDVar8;
                func_?();
              }
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                     ,(MethodInfo *)method_00.methodMetadataHandle);
          if ((object_00->_0).name == (char *)0x0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_prioritizedItem_in_first_time_pl,(MethodInfo *)0x0);
            goto code_?;
          }
          pTVar2 = (this->fields).tabGroup;
          if (pTVar2 != (TabMenu *)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0);
            callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                       (Object *)object_00,
                       MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            pMVar9 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
            ;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                      );
            *unaff_FS_OFFSET = pMVar9;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::FirstTimeActivatableBazookaPopup_OnShow
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  if ((this->fields).showing != 0) {
    return;
  }
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0);
    func_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                   );
    func_?(&StringLiteral_prioritizedItem_in_first_time_pl);
    func_?(&StringLiteral_item_in_inventory_missing_docume);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0;
  value = (Debug_2__Class *)func_?();
  object_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  pTVar2 = (this->fields).tabGroup;
  (this->fields).showing = 1;
  if (pTVar2 != (TabMenu *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar2,(MethodInfo *)0x0);
    if ((TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
      if ((TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0 = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    pIVar4 = (this->fields).slots;
    if ((pIVar4 != (InventorySlots *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pIVar4,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                        (this_02,(MethodInfo *)0x0);
      if (iVar5 < 1) {
code_?:
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      if (value != (Debug_2__Class *)0x0) {
        (value->_0).name = (char *)0x0;
        func_?();
        pIVar4 = (this->fields).slots;
        this_05 = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
        if (((pIVar4 != (InventorySlots *)0x0) &&
            (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)(pIVar4->fields).inventorySlots,
            this_00 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0)) &&
           (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                ),
           this_03 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
          StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)&stack0xffffffc8,this_03,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                    );
          method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffb8).rgctx_data;
          while( true ) {
            this_04 = (CancellationTokenSource *)&stack0xffffffb8;
            bVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)this_04,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                              );
            if (bVar6 == 0) break;
            if (((this_04 == (CancellationTokenSource *)0x0) ||
                (method_00.methodMetadataHandle =
                      (Il2CppMetadataMethodDefinitionHandle)
                      InventorySlot::InventorySlot_get_Item
                                ((InventorySlot *)this_04,(MethodInfo *)0x0),
                method_00.rgctx_data == (Il2CppRGCTXData *)0x0)) ||
               (pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   ((GameObject *)method_00.methodMetadataHandle,
                                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                                   ), pOVar7 == (Object *)0x0)) goto code_?;
            if (pOVar7[0xb].klass == (Object__Class *)0x0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                object_00 = TypeInfo__UnityEngine__Debug;
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            else {
              pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
              this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                        (this->fields).priorityDictionary;
              if (this_01 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)
              goto code_?;
              method_00.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
              object_00 = (Debug_2__Class *)
                          MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
              ;
              bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Single]::
                      Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                                (this_01,(Int32Enum__Enum)pOVar7[0xb].klass,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                                );
              if (bVar6 != 0) {
                this_05 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                          (this->fields).priorityDictionary;
                if (this_05 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
                goto code_?;
                object_00 = (Debug_2__Class *)&UNK_?;
                pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   (this_05,(Int32Enum__Enum)pOVar7[0xb].klass,
                                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                                   );
              }
              if ((int)this_05 < (int)pDVar8) {
                (object_00->_0).name = (char *)pOVar7[9].monitor;
                this_05 = pDVar8;
                func_?();
              }
            }
          }
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                     ,(MethodInfo *)method_00.methodMetadataHandle);
          if ((object_00->_0).name == (char *)0x0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_prioritizedItem_in_first_time_pl,(MethodInfo *)0x0);
            goto code_?;
          }
          pTVar2 = (this->fields).tabGroup;
          if (pTVar2 != (TabMenu *)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0);
            callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                       (Object *)object_00,
                       MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            pMVar9 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
            ;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                      );
            *unaff_FS_OFFSET = pMVar9;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* FirstTimeActivatableBazookaPopup() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::FirstTimeActivatableBazookaPopup__ctor
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,4,10000,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,2,500,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,0x13,300,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,3,200,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,9,100,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    (this->fields).priorityDictionary =
         (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)this_00;
    func_?();
    FirstTimeActivatableMessage::FirstTimeActivatableMessage__ctor
              ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup_get_CanShow
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    this_00 = (this->fields).slots;
    if (this_00 != (InventorySlots *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                          (this_02,(MethodInfo *)0x0);
        bVar4 = 0;
        if (bVar1 == 0) {
          bVar4 = bVar2;
        }
        return 0 < iVar3 & bVar4;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}

