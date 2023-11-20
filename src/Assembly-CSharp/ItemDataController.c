
/* InventoryItemData GetItemData(Int32) */

InventoryItemData *
Assembly-CSharp.dll::ItemDataController::ItemDataController_GetItemData
          (ItemDataController *this,int32_t slot,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).inventoryItemDatas;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                        );
      pOVar10 = LStack_6._current;
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (InventoryItemData *)0x0;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      if (*(int *)((int)LStack_6._current + 0x14) == slot) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (InventoryItemData *)(RegexCharClass_SingleRange)pOVar10;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pIVar12 = (InventoryItemData *)(*pcVar11)();
  return pIVar12;
}


/* Void InitializeTestData() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_InitializeTestData
               (ItemDataController *this,MethodInfo *method)

{
  pPStack_1 = (PropertyInfo *)0xffffffff;
  pEStack_2 = (EventInfo *)&DAT_?;
  pFStack_3 = (FieldInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pFStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffff8c;
  pIVar5 = (Il2CppClass *)&stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__InventoryItemData);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItemData>__Add_InventoryItemData_
                   );
    func_?(&TypeInfo__TabState);
    func_?(&StringLiteral_Category_);
    func_?(&StringLiteral_ItemId___0___SlotIndex___1___Cat);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  pIVar5 = (Il2CppClass *)0x0;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._16_8_ = (Il2CppType)0x0;
  do {
    pIStack_7 = (Il2CppClass *)((int)pIVar5 % 3);
    pIStack_8 = pIVar5;
    IStack_9.m_value = (int32_t)pIStack_7;
    pDStack_10 = (Dictionary_2_System_Int32_TabState_ *)
                 func_?(TypeInfo__System__Int32,&pIStack_8);
    pIStack_11 = pIVar5;
    pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_11);
    pIStack_13 = (Il2CppClass *)IStack_9.m_value;
    arg2 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_13);
    pDVar14 = (Dictionary_2_TKey_TValue_Entry_System_Int32_TabState___Array *)
             mscorlib.dll::System::String::String_Format_2
                       (StringLiteral_ItemId___0___SlotIndex___1___Cat,(Object *)pDStack_10,pOVar12,
                        arg2,(MethodInfo *)0x0);
    method_00 = TypeInfo__InventoryItemData;
    pDStack_10 = (Dictionary_2_System_Int32_TabState_ *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pDStack_10,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pDStack_10->fields)._count = (int32_t)pIStack_7;
    (pDStack_10->fields)._freeList = (int32_t)pIVar5;
    (pDStack_10->fields)._entries = pDVar14;
    func_?(&(pDStack_10->fields)._entries,pDVar14);
    (pDStack_10->fields)._buckets = (Int32__Array *)pIVar5;
    this_00 = (this->fields).inventoryItemDatas;
    if (this_00 == (List_1_InventoryItemData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)pDStack_10,
               MethodInfo__System__Collections__Generic__List<InventoryItemData>__Add_InventoryItemData_
              );
    pDVar15 = (this->fields).categories;
    if (pDVar15 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar15,IStack_9.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      );
    if (bVar16 == 0) {
      pDStack_10 = (this->fields).categories;
      pIStack_8 = (Il2CppClass *)IStack_9.m_value;
      str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
      pIStack_7 = (Il2CppClass *)
                   mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Category_,str1,(MethodInfo *)0x0);
      slotsPrPage = (this->fields).numberOfSlots;
      pTStack_17 = (TabState *)func_?(TypeInfo__TabState);
      key = pIStack_8;
      TabState::TabState__ctor
                (pTStack_17,(int32_t)pIStack_8,(String *)pIStack_7,slotsPrPage,(MethodInfo *)0x0);
      if (pDStack_10 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDStack_10,(int32_t)key,
                 (Object *)pTStack_17,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                );
    }
    pDVar15 = (this->fields).categories;
    if (pDVar15 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
    pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,IStack_9.m_value,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                       );
    if (pOVar12 == (Object *)0x0) goto code_?;
    if ((int)pOVar12[2].klass < (int)pIVar5) {
      unaff_EDI = (MethodInfo *)(this->fields).categories;
      if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
      pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)unaff_EDI,IStack_9.m_value,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                         );
      if (pOVar12 == (Object *)0x0) goto code_?;
      pOVar12[2].klass = (Object__Class *)pIVar5;
    }
    pIVar5 = (Il2CppClass *)((int)&((Il2CppClass_0 *)&pIVar5->image)->image + 1);
  } while ((int)pIVar5 < 0x14);
  this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).categories;
  if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_19,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                       );
    pIStack_20 = (Il2CppClass *)0x0;
    DStack_6._dictionary = pDVar18->_dictionary;
    DStack_6._version = pDVar18->_version;
    DStack_6._index = pDVar18->_index;
    DStack_6._current.key = (pDVar18->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar18->_current).value;
    pPStack_1 = (PropertyInfo *)0x1;
    pIStack_7 = (Il2CppClass *)&DStack_6;
    while( true ) {
      bVar16 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                        );
      if (bVar16 == 0) {
        pPStack_1 = (PropertyInfo *)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = pFStack_3;
        return;
      }
      pIVar21 = (this->fields).inventoryController;
      if (((DStack_6._current.value == (void *)0x0) ||
          (pTStack_17 = *(TabState **)&((Il2CppType *)(DStack_6._current.value + 1))->attrs,
          pIVar21 == (InventoryController *)0x0)) ||
         (pTVar22 = (pIVar21->fields).tabMenu, pTVar22 == (TabMenuBase *)0x0)) break;
      (*(code *)(pTVar22->klass->vtable).__unknown.method)
                (pTVar22,DStack_6._current.key,pTStack_17,
                 (pTVar22->klass->vtable).__unknown_1.methodPtr);
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_PageTurned
               (ItemDataController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).categories;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    this_01 = (TabState *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (this->fields).currentTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TabState *)0x0) {
      if (dir == -1) {
        if ((this_01->fields).currentPage == 1) {
          iVar1 = TabState::TabState_get_MaxPages(this_01,(MethodInfo *)0x0);
          (this_01->fields).currentPage = iVar1;
          ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
          return;
        }
      }
      else if (dir == 1) {
        iVar2 = (this_01->fields).currentPage;
        iVar1 = TabState::TabState_get_MaxPages(this_01,(MethodInfo *)0x0);
        if (iVar2 == iVar1) {
          (this_01->fields).currentPage = 1;
          ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
          return;
        }
      }
      (this_01->fields).currentPage = (this_01->fields).currentPage + dir;
      ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&MethodInfo__ItemDataController__PageTurned_int_);
    func_?(&MethodInfo__ItemDataController__SlotChanged_int__int_);
    func_?(&MethodInfo__ItemDataController__TabSelected_int_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
  if (pIVar1 == (InventoryController *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    InventoryController::InventoryController_Initialize
              (pIVar1,(this->fields).numberOfSlots,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inventoryController;
    if (pIVar1 == (InventoryController *)0x0) goto code_?;
    pUVar2 = (pIVar1->fields).OnPageTurned;
    pUVar3 = (UnityAction_1_System_Int32Enum_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar3,(Object *)this,MethodInfo__ItemDataController__PageTurned_int_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pIVar1->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pIVar1 = (this->fields).inventoryController;
      if (pIVar1 == (InventoryController *)0x0) goto code_?;
      pUVar2 = (pIVar1->fields).OnTabSelected;
      pUVar3 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar3,(Object *)this,MethodInfo__ItemDataController__TabSelected_int_,
                 (MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      if (pDVar4 != (Delegate *)0x0) {
        pUVar2 = (UnityAction_1_System_Int32_ *)func_?();
        if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
        (pIVar1->fields).OnTabSelected = pUVar2;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
      (pIVar1->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pIVar1 = (this->fields).inventoryController;
      if (pIVar1 == (InventoryController *)0x0) goto code_?;
      pUVar6 = (pIVar1->fields).OnSlotChanged;
      this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_00,(Object *)this,MethodInfo__ItemDataController__SlotChanged_int__int_,
                 (MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        (pIVar1->fields).OnSlotChanged = (UnityAction_2_System_Int32_System_Int32_ *)0x0;
code_?:
        func_?();
        ItemDataController_InitializeTestData(this,(MethodInfo *)0x0);
        iVar5 = (this->fields).defaultCategoryID;
        if (iVar5 != (this->fields).currentTab) {
          (this->fields).currentTab = iVar5;
          ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
        }
        return;
      }
      pUVar6 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
      if (pUVar6 != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
        (pIVar1->fields).OnSlotChanged = pUVar6;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pUVar2 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pIVar1->fields).OnPageTurned = pUVar2;
    iVar5 = func_?();
    if (iVar5 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                   );
    func_?(&TestItem_MethodInfo__UnityEngine__Object__Instantiate<TestItem>_TestItem_);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields).categories;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    pTStack_6 = (TabState *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                            (this->fields).currentTab,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                           );
    pIVar7 = (this->fields).inventoryController;
    if ((pIVar7 != (InventoryController *)0x0) &&
       (pIVar8 = (pIVar7->fields).inventorySlots, pIVar8 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar8,(MethodInfo *)0x0);
      pTStack_9 = (TestItem *)(this->fields).currentTab;
      pIVar7 = (this->fields).inventoryController;
      if (pTStack_6 != (TabState *)0x0) {
        pGStack_10 = (GameObject *)(pTStack_6->fields).currentPage;
        pIStack_11 = (InventoryController *)
                     TabState::TabState_get_MaxPages(pTStack_6,(MethodInfo *)0x0);
        if ((pIVar7 != (InventoryController *)0x0) &&
           (pTVar12 = (pIVar7->fields).tabMenu, pTVar12 != (TabMenuBase *)0x0)) {
          (*(code *)(pTVar12->klass->vtable).__unknown_1.method)();
          pIVar8 = (pIVar7->fields).inventorySlots;
          if (pIVar8 != (InventorySlots *)0x0) {
            InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                      (pIVar8,(int32_t)pGStack_10,(pIVar7->fields).numberOfSlots,(MethodInfo *)0x0);
            this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (this->fields).inventoryItemDatas;
            if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                                 (&LStack_14,this_01,
                                  MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                                 );
              LStack_14._version = 0;
              uStack_1 = 1;
              RVar15 = pLVar13->_current;
              LStack_14._current = (RegexCharClass_SingleRange)&stack0xffffffb8;
              while( true ) {
                do {
                  do {
                    method_00 = RVar15;
                    bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                            ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                      ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                                      );
                    if (bVar16 == 0) {
                      uStack_1 = 0xffffffff;
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                                ((Object *)&stack0xffffffb8,
                                 (ExceptionArgument__Enum)
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                                 ,(MethodInfo *)method_00);
                      *unaff_FS_OFFSET = uStack_3;
                      return;
                    }
                    if (method_00 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    RVar15 = method_00;
                  } while (*(int *)((int)method_00 + 0x10) != (this->fields).currentTab);
                  bVar16 = TabState::TabState_SlotIndexIsInRange
                                    (pTStack_6,*(int32_t *)((int)method_00 + 0x14),
                                     (MethodInfo *)0x0);
                } while (bVar16 == 0);
                pTStack_9 = (this->fields).testItemPrefab;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  LStack_14._index = (int32_t)TypeInfo__UnityEngine__Object;
                  LStack_14._list =
                       (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       &UNK_?;
                  func_?();
                }
                pTStack_9 = (TestItem *)
                             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                       ((Object *)pTStack_9,
                                        TestItem_MethodInfo__UnityEngine__Object__Instantiate<TestItem>_TestItem_
                                       );
                if ((method_00 == (RegexCharClass_SingleRange)0x0) ||
                   (pTStack_9 == (TestItem *)0x0)) break;
                TestItem::TestItem_Initialize
                          (pTStack_9,*(String **)((int)method_00 + 0xc),
                           *(int32_t *)((int)method_00 + 0x14),(MethodInfo *)0x0);
                pIStack_11 = (this->fields).inventoryController;
                pGStack_10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pTStack_9,(MethodInfo *)0x0);
                pTStack_9 = (TestItem *)(this->fields).numberOfSlots;
                if (pIStack_11 == (InventoryController *)0x0) break;
                InventoryController::InventoryController_AddObject
                          (pIStack_11,pGStack_10,*(int *)((int)method_00 + 0x14) % (int)pTStack_9,
                           (MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* ItemDataController() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController__ctor
               (ItemDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItemData>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<InventoryItemData>);
    cRam_? = '\x01';
  }
  (this->fields).defaultCategoryID = 1;
  (this->fields).currentTab = -1;
  this_00 = (List_1_InventoryItemData_ *)
            func_?(TypeInfo__System__Collections__Generic__List<InventoryItemData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<InventoryItemData>__List__);
  (this->fields).inventoryItemDatas = this_00;
  func_?(&(this->fields).inventoryItemDatas,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  (this->fields).categories = (Dictionary_2_System_Int32_TabState_ *)this_01;
  func_?(&(this->fields).categories,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

