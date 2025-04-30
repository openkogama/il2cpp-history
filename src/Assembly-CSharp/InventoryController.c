
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
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,slotIndex,
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
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pTVar2 = (this->fields).tabMenu;
  if (pTVar2 != (TabMenuBase *)0x0) {
    pIStack_1 = (pTVar2->klass->vtable).__unknown_1.methodPtr;
    pSStack_3 = tabName;
    iStack_4 = categoryId;
    (*(code *)(pTVar2->klass->vtable).__unknown.method)(pTVar2);
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
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pIVar1->fields).inventorySlots;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0) &&
       (method_00 = (MethodInfo *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                              (this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                              ), method_00 != (MethodInfo *)0x0)) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
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
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
    func_?(&TypeInfo__UnityEngine__Object);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  pIVar4 = ((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
    pIVar4 = (Il2CppClass *)func_?(pIVar4);
  }
  pLVar5 = (List_1_System_Object_ *)func_?(pIVar4);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar5,
             (method->field7_0x1c).rgctx_data[1].method);
  pIVar6 = (this->fields).inventorySlots;
  if ((pIVar6 != (InventorySlots *)0x0) &&
     (this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(pIVar6->fields).inventorySlots,
     this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                       );
    pOStack_8 = (Object__Class *)pDVar7->_dictionary;
    uVar9 = *(ulonglong *)&(pDVar7->_current).value;
    uStack_1 = 1;
    while( true ) {
      do {
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           &pOStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                          );
        if (bVar10 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pOStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                     ,in_stack_11);
          *unaff_FS_OFFSET = uStack_3;
          return pLVar5;
        }
        this_01 = (InventorySlot *)uVar9;
        if (this_01 == (InventorySlot *)0x0) goto code_?;
        pGVar12 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        in_stack_11 = (MethodInfo *)0x0;
        bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pGVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
      } while (bVar10 != 0);
      if (this_01 == (InventorySlot *)0x0) break;
      pGVar12 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
      if (pGVar12 == (GameObject *)0x0) break;
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    (pGVar12,(method->field7_0x1c).rgctx_data[2].method);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar9 = ZEXT48(x);
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        if (pLVar5 == (List_1_System_Object_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add(pLVar5,(Object *)x,(method->field7_0x1c).rgctx_data[4].method);
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  pLVar5 = (List_1_System_Object_ *)(*pcVar13)();
  return pLVar5;
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
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,slotPosition,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                         );
      if ((pOVar2 != (Object *)0x0) &&
         ((NotificationFade *)pOVar2[2].monitor != (NotificationFade *)0x0)) {
        NotificationFade::NotificationFade_Activate
                  ((NotificationFade *)pOVar2[2].monitor,(MethodInfo *)0x0);
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
    key = 0;
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
        this_01 = (this_00->fields).inventorySlots;
        if (this_01 == (Dictionary_2_System_Int32_InventorySlot_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                  );
        key = key + 1;
      } while (key < slots);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SelectTab
               (InventoryController *this,int32_t tabId,int32_t currentPage,int32_t maxPages,
               MethodInfo *method)

{
  pTVar1 = (this->fields).tabMenu;
  if (pTVar1 != (TabMenuBase *)0x0) {
    (*(code *)(pTVar1->klass->vtable).__unknown_1.method)
              (pTVar1,tabId,currentPage,maxPages,pTVar1->klass[1]._0.image);
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
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pTStack_2 = (this->fields).categoryHeaderText;
  if (pTStack_2 != (Text *)0x0) {
    pIStack_1 = (pTStack_2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSStack_3 = category;
    (*(code *)(pTStack_2->klass->vtable).set_text.method)();
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
  pUVar1 = (this->fields).OnSlotChanged;
  if (pUVar1 != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,fromSlotIndex,toSlotIndex,
               (pUVar1->fields)._._.method);
  }
  return;
}

