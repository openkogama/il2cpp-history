
/* Void DoShowing() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup_DoShowing
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  pOVar4 = (Object *)
           func_?(TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0);
  if (pOVar4 != (Object *)0x0) {
    object = pOVar4;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar4,ExceptionArgument__Enum_obj,unaff_EDI);
    pTVar5 = (this->fields).tabGroup;
    (this->fields).showing = 1;
    if (pTVar5 != (TabMenu *)0x0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar5,(MethodInfo *)0x0);
      if ((TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEStack_6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                   TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0;
      if (pEStack_6 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        if ((TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object_00 = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9;
        pEStack_6 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (pEStack_6 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEStack_6,(Object *)object_00,
                   MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0 =
             (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)pEStack_6;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,pEStack_6,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                );
      pIVar7 = (this->fields).slots;
      if ((pIVar7 != (InventorySlots *)0x0) &&
         (pMVar8 = (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pIVar7,(MethodInfo *)0x0), pMVar8 != (MethodInfo *)0x0))
      {
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                          ((Transform *)pMVar8,(MethodInfo *)0x0);
        if (iVar9 < 1) {
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOVar4[1].klass = (Object__Class *)0x0;
        func_?();
        pIVar7 = (this->fields).slots;
        pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)0x0;
        if (((pIVar7 != (InventorySlots *)0x0) &&
            (this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)(pIVar7->fields).inventorySlots,
            this_00 !=
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0)) && (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                          (this_00,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                          ),
                     this_03 !=
                     (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)0x0)) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&stack0xffffffd0,this_03,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                             );
          this_04 = (InventorySlot *)pDVar11->_currentValue;
          uStack_1 = 1;
          while (bVar12 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                         Object,System::Object]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                   ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                     *)&stack0xffffffb8,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                                   ), bVar12 != 0) {
            if (((this_04 == (InventorySlot *)0x0) ||
                (pMVar8 = (MethodInfo *)
                          InventorySlot::InventorySlot_get_Item(this_04,(MethodInfo *)0x0),
                pMVar8 == (MethodInfo *)0x0)) ||
               (pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   ((GameObject *)pMVar8,
                                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                                   ), pOVar4 == (Object *)0x0)) goto code_?;
            if (pOVar4[10].monitor == (MonitorData *)0x0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            else {
              pEStack_6 = (ExecuteEvents_EventFunction_1_System_Object_ *)0x0;
              this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                        (this->fields).priorityDictionary;
              if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
              goto code_?;
              pMVar8 = (MethodInfo *)&UNK_?;
              bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                (this_01,(Object *)pOVar4[10].monitor,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                                );
              if (bVar12 != 0) {
                this_02 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                          (this->fields).priorityDictionary;
                if (this_02 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
                goto code_?;
                object = (Object *)pOVar4[10].monitor;
                pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                ;
                pEStack_6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       (this_02,(Int32Enum__Enum)object,
                                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                                       );
              }
              if ((int)pEVar10 < (int)pEStack_6) {
                object[1].klass = pOVar4[9].klass;
                func_?();
                pEVar10 = pEStack_6;
              }
            }
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                     ,pMVar8);
          uStack_1 = 0xffffffff;
          if (object[1].klass == (Object__Class *)0x0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_prioritizedItem_in_first_time_pl,(MethodInfo *)0x0);
            goto code_?;
          }
          pTVar5 = (this->fields).tabGroup;
          if (pTVar5 != (TabMenu *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar5,(MethodInfo *)0x0);
            pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            if (pEVar10 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
              pMVar8 = 
              MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
              ;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)pEVar10,object,
                         MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        ((GameObject *)pMVar8,(BaseEventData *)0x0,pEVar10,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                        );
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::FirstTimeActivatableBazookaPopup_OnShow
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  if ((this->fields).showing != 0) {
    return;
  }
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  pOVar4 = (Object *)
           func_?(TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0);
  if (pOVar4 != (Object *)0x0) {
    object = pOVar4;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar4,ExceptionArgument__Enum_obj,unaff_EDI);
    pTVar5 = (this->fields).tabGroup;
    (this->fields).showing = 1;
    if (pTVar5 != (TabMenu *)0x0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar5,(MethodInfo *)0x0);
      if ((TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEStack_6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                   TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0;
      if (pEStack_6 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        if ((TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object_00 = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9;
        pEStack_6 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (pEStack_6 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEStack_6,(Object *)object_00,
                   MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0 =
             (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)pEStack_6;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,pEStack_6,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                );
      pIVar7 = (this->fields).slots;
      if ((pIVar7 != (InventorySlots *)0x0) &&
         (pMVar8 = (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pIVar7,(MethodInfo *)0x0), pMVar8 != (MethodInfo *)0x0))
      {
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                          ((Transform *)pMVar8,(MethodInfo *)0x0);
        if (iVar9 < 1) {
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOVar4[1].klass = (Object__Class *)0x0;
        func_?();
        pIVar7 = (this->fields).slots;
        pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)0x0;
        if (((pIVar7 != (InventorySlots *)0x0) &&
            (this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)(pIVar7->fields).inventorySlots,
            this_00 !=
            (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            0x0)) && (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                          (this_00,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                          ),
                     this_03 !=
                     (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)0x0)) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&stack0xffffffd0,this_03,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                             );
          this_04 = (InventorySlot *)pDVar11->_currentValue;
          uStack_1 = 1;
          while (bVar12 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                         Object,System::Object]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                   ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                     *)&stack0xffffffb8,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                                   ), bVar12 != 0) {
            if (((this_04 == (InventorySlot *)0x0) ||
                (pMVar8 = (MethodInfo *)
                          InventorySlot::InventorySlot_get_Item(this_04,(MethodInfo *)0x0),
                pMVar8 == (MethodInfo *)0x0)) ||
               (pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   ((GameObject *)pMVar8,
                                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                                   ), pOVar4 == (Object *)0x0)) goto code_?;
            if (pOVar4[10].monitor == (MonitorData *)0x0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            else {
              pEStack_6 = (ExecuteEvents_EventFunction_1_System_Object_ *)0x0;
              this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                        (this->fields).priorityDictionary;
              if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
              goto code_?;
              pMVar8 = (MethodInfo *)&UNK_?;
              bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                (this_01,(Object *)pOVar4[10].monitor,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                                );
              if (bVar12 != 0) {
                this_02 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                          (this->fields).priorityDictionary;
                if (this_02 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
                goto code_?;
                object = (Object *)pOVar4[10].monitor;
                pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                ;
                pEStack_6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       (this_02,(Int32Enum__Enum)object,
                                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                                       );
              }
              if ((int)pEVar10 < (int)pEStack_6) {
                object[1].klass = pOVar4[9].klass;
                func_?();
                pEVar10 = pEStack_6;
              }
            }
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                     ,pMVar8);
          uStack_1 = 0xffffffff;
          if (object[1].klass == (Object__Class *)0x0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_prioritizedItem_in_first_time_pl,(MethodInfo *)0x0);
            goto code_?;
          }
          pTVar5 = (this->fields).tabGroup;
          if (pTVar5 != (TabMenu *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar5,(MethodInfo *)0x0);
            pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            if (pEVar10 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
              pMVar8 = 
              MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
              ;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)pEVar10,object,
                         MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        ((GameObject *)pMVar8,(BaseEventData *)0x0,pEVar10,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                        );
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x4,(Object *)0x2710,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2,(Object *)0x1f4,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x13,(Object *)0x12c,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x3,(Object *)0xc8,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x9,(Object *)0x64,
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

