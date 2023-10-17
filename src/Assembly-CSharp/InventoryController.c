
/* Void AddObject(GameObject, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_AddObject
               (InventoryController *this,GameObject *item,int32_t slotIndex,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 != (InventorySlots *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pIVar1->fields).inventorySlots;
    if (this_00 != (Dictionary_2_System_Int32_InventorySlot_ *)0x0) {
      this_01 = (InventorySlot *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,slotIndex,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                          );
      if (this_01 != (InventorySlot *)0x0) {
        InventorySlot::InventorySlot_Set(this_01,item,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddTab(Int32, String) */

void Assembly-CSharp.dll::InventoryController::InventoryController_AddTab
               (InventoryController *this,int32_t categoryId,String *tabName,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pTVar2 = (this->fields).tabMenu;
  if (pTVar2 != (TabMenuBase *)0x0) {
    pMStack_1 = (pTVar2->klass->vtable).__unknown.method;
    pSStack_3 = tabName;
    iStack_4 = categoryId;
    (*(pTVar2->klass->vtable).__unknown.methodPtr)(pTVar2);
    return;
  }
  uVar5 = func_?(&iStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::InventoryController::InventoryController_Clear
               (InventoryController *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 != (InventorySlots *)0x0) {
    uStack_2 = 0xffffffff;
    puStack_3 = &DAT_?;
    uStack_4 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &uStack_4;
    puStack_5 = &stack0xffffffbc;
    puVar6 = &stack0xffffffbc;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                     );
      cRam_? = '\x01';
      puVar6 = puStack_5;
    }
    puStack_5 = puVar6;
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(pIVar1->fields).inventorySlots;
    if ((this_00 !=
         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
       && (method_00 = (MethodInfo *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                       RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                       Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                 ), method_00 != (MethodInfo *)0x0)) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                         );
      DStack_8._version = 0;
      uStack_2 = 1;
      pIVar9 = (InventorySlot *)pDVar7->_currentValue;
      DStack_8._currentValue = (Object *)&stack0xffffffc8;
      while( true ) {
        this_01 = pIVar9;
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                            *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        if (this_01 == (InventorySlot *)0x0) break;
        pIVar9 = this_01;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pGVar11 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        method_00 = (MethodInfo *)0x0;
        bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pGVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          pGVar11 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pIVar9 = (InventorySlot *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar11,(MethodInfo *)0x0);
        }
      }
    }
  }
  uVar12 = func_?(&stack0xffffffac);
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* List`1[System.Object] GetComponentsOfSlotsWithType[Object]() */

List_1_System_Object_ *
Assembly-CSharp.dll::InventoryController::InventoryController_GetComponentsOfSlotsWithType
          (InventoryController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_InventorySlot>__get_Value__
                   );
    in_stack_6 = (MethodInfo *)&UNK_?;
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  pvVar8 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar8 + 0xba) & 1) == 0) {
    pvVar8 = (void *)func_?(pvVar8);
  }
  pLVar9 = (List_1_System_Object_ *)func_?(pvVar8);
  pLStack_10 = pLVar9;
  if (pLVar9 != (List_1_System_Object_ *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (pLVar9,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
    pIVar11 = (this->fields).inventorySlots;
    pLStack_12 = pLVar9;
    if ((pIVar11 != (InventorySlots *)0x0) &&
       (this_00 = (Dictionary_2_System_Object_System_Object_ *)(pIVar11->fields).inventorySlots,
       this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_14,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                         );
      uStack_15 = 0;
      DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar13->_dictionary;
      DStack_7._version = pDVar13->_version;
      DStack_7._index = pDVar13->_index;
      DStack_7._current.key = (int32_t)(pDVar13->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar13->_current).value;
      uStack_1 = 1;
      pDStack_16 = &DStack_7;
      while( true ) {
        do {
          bVar17 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            (&DStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                            );
          if (bVar17 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_7,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                       ,in_stack_6);
            *unaff_FS_OFFSET = uStack_3;
            return pLVar9;
          }
          this_01 = DStack_7._current.value;
          if ((InventorySlot *)DStack_7._current.value == (InventorySlot *)0x0)
          goto code_?;
          pGStack_18 = InventorySlot::InventorySlot_get_Item
                                 ((InventorySlot *)DStack_7._current.value,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          in_stack_6 = (MethodInfo *)0x0;
          bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pGStack_18,(Object_1 *)0x0,(MethodInfo *)0x0);
          pLVar9 = pLStack_10;
        } while (bVar17 != 0);
        if (((InventorySlot *)this_01 == (InventorySlot *)0x0) ||
           (pGVar19 = InventorySlot::InventorySlot_get_Item
                               ((InventorySlot *)this_01,(MethodInfo *)0x0),
           pGVar19 == (GameObject *)0x0)) break;
        x = (Object_1 *)
            (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                      (pGVar19,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        pLVar9 = pLStack_10;
        if (bVar17 != 0) {
          (*((method->field7_0x1c).rgctx_data[4].method)->virtualMethodPointer)
                    (pLStack_10,x,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
        }
      }
    }
  }
code_?:
  uVar20 = func_?();
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  pLVar9 = (List_1_System_Object_ *)(*pcVar21)();
  return pLVar9;
}


/* Void HighlightSlot(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_HighlightSlot
               (InventoryController *this,int32_t slotPosition,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 != (InventorySlots *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pIVar1->fields).inventorySlots;
    if (this_00 != (Dictionary_2_System_Int32_InventorySlot_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,slotPosition,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                         );
      if ((pOVar2 != (Object *)0x0) && (pOVar2[2].klass != (Object__Class *)0x0)) {
        NotificationFade::NotificationFade_Activate
                  ((NotificationFade *)pOVar2[2].klass,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_Initialize
               (InventoryController *this,int32_t slots,MethodInfo *method)

{
  this_00 = (this->fields).inventorySlots;
  (this->fields).numberOfSlots = slots;
  if (this_00 != (InventorySlots *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                     );
      func_?(&
                      InventorySlot_MethodInfo__UnityEngine__Object__Instantiate<InventorySlot>_InventorySlot__UnityEngine__Transform__bool_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    key = (Object *)0x0;
    (this_00->fields)._SlotCountPerPage_k__BackingField = slots;
    if (0 < slots) {
      do {
        this = (InventoryController *)(this_00->fields).inventorySlotPrefab;
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          this = (InventoryController *)TypeInfo__UnityEngine__Object;
          func_?();
        }
        value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)this,parent,0,
                           InventorySlot_MethodInfo__UnityEngine__Object__Instantiate<InventorySlot>_InventorySlot__UnityEngine__Transform__bool_
                          );
        this_01 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields).inventorySlots;
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                  );
        key = (Object *)((int)&key->klass + 1);
      } while ((int)key < slots);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_PageTurned
               (InventoryController *this,int32_t dir,MethodInfo *method)

{
  if ((this->fields).OnPageTurned != (UnityAction_1_System_Int32_ *)0x0) {
    pUVar1 = (this->fields).OnPageTurned;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,dir,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SelectTab
               (InventoryController *this,int32_t tabId,int32_t currentPage,int32_t maxPages,
               MethodInfo *method)

{
  pTVar1 = (this->fields).tabMenu;
  if (pTVar1 != (TabMenuBase *)0x0) {
    (*(pTVar1->klass->vtable).__unknown_1.methodPtr)
              (pTVar1,tabId,currentPage,maxPages,(pTVar1->klass->vtable).__unknown_1.method);
    this_00 = (this->fields).inventorySlots;
    if (this_00 != (InventorySlots *)0x0) {
      InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                (this_00,currentPage,(this->fields).numberOfSlots,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetHeaderText(String) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SetHeaderText
               (InventoryController *this,String *category,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pTStack_2 = (this->fields).categoryHeaderText;
  if (pTStack_2 != (Text *)0x0) {
    pMStack_1 = (pTStack_2->klass->vtable).set_text.method;
    pSStack_3 = category;
    (*(pTStack_2->klass->vtable).set_text.methodPtr)();
    return;
  }
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SlotChanged(Int32, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SlotChanged
               (InventoryController *this,int32_t fromSlotIndex,int32_t toSlotIndex,
               MethodInfo *method)

{
  if ((this->fields).OnSlotChanged != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
    pUVar1 = (this->fields).OnSlotChanged;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,fromSlotIndex,toSlotIndex,
               (pUVar1->fields)._._.method);
  }
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_TabSelected
               (InventoryController *this,int32_t tabId,MethodInfo *method)

{
  if ((this->fields).OnTabSelected != (UnityAction_1_System_Int32_ *)0x0) {
    pUVar1 = (this->fields).OnTabSelected;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,tabId,(pUVar1->fields)._._.method);
  }
  return;
}

