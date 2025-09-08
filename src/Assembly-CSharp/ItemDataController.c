
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOVar6 = (Object__Class *)0x0;
  TStack_7.klass = (TabState__Class *)0x0;
  TStack_7.monitor = (MonitorData *)0x0;
  TStack_7.fields.slotsPrPage = 0;
  TStack_7.fields.name = (String *)0x0;
  TStack_7.fields.highestSlotIndex = 0;
  TStack_7.fields.currentPage = 0;
  do {
    pOStack_8 = (Object__Class *)((int)pOVar6 % 3);
    pOStack_9 = pOVar6;
    IStack_10.m_value = (int32_t)pOStack_8;
    pDStack_11 = (Dictionary_2_System_Int32_TabState_ *)
                 func_?(TypeInfo__System__Int32,&pOStack_9);
    pOStack_12 = pOVar6;
    pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_12);
    pOStack_14 = (Object__Class *)IStack_10.m_value;
    arg2 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_14);
    pDVar15 = (Dictionary_2_TKey_TValue_Entry_System_Int32_TabState___Array *)
             mscorlib.dll::System::String::String_Format_2
                       (StringLiteral_ItemId___0___SlotIndex___1___Cat,(Object *)pDStack_11,pOVar13,
                        arg2,(MethodInfo *)0x0);
    method_00 = TypeInfo__InventoryItemData;
    pDStack_11 = (Dictionary_2_System_Int32_TabState_ *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pDStack_11,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pDStack_11->fields)._count = (int32_t)pOStack_8;
    (pDStack_11->fields)._freeList = (int32_t)pOVar6;
    (pDStack_11->fields)._entries = pDVar15;
    func_?(&(pDStack_11->fields)._entries,pDVar15);
    (pDStack_11->fields)._buckets = (Int32__Array *)pOVar6;
    this_00 = (this->fields).inventoryItemDatas;
    if (this_00 == (List_1_InventoryItemData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)pDStack_11,
               MethodInfo__System__Collections__Generic__List<InventoryItemData>__Add_InventoryItemData_
              );
    pDVar16 = (this->fields).categories;
    if (pDVar16 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
    bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar16,IStack_10.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      );
    if (bVar17 == 0) {
      pDStack_11 = (this->fields).categories;
      pOStack_9 = (Object__Class *)IStack_10.m_value;
      str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_10,(MethodInfo *)0x0);
      pOStack_8 = (Object__Class *)
                   mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Category_,str1,(MethodInfo *)0x0);
      slotsPrPage = (this->fields).numberOfSlots;
      pTStack_18 = (TabState *)func_?(TypeInfo__TabState);
      key = pOStack_9;
      TabState::TabState__ctor
                (pTStack_18,(int32_t)pOStack_9,(String *)pOStack_8,slotsPrPage,(MethodInfo *)0x0);
      if (pDStack_11 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDStack_11,(int32_t)key,
                 (Object *)pTStack_18,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                );
    }
    pDVar16 = (this->fields).categories;
    if (pDVar16 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
    pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,IStack_10.m_value,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                       );
    if (pOVar13 == (Object *)0x0) goto code_?;
    if ((int)pOVar13[2].klass < (int)pOVar6) {
      unaff_EDI = (MethodInfo *)(this->fields).categories;
      if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)unaff_EDI,IStack_10.m_value,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                         );
      if (pOVar13 == (Object *)0x0) goto code_?;
      pOVar13[2].klass = pOVar6;
    }
    pOVar6 = (Object__Class *)((int)&(pOVar6->_0).image + 1);
  } while ((int)pOVar6 < 0x14);
  this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).categories;
  if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_20,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                       );
    uStack_21 = 0;
    TStack_7.klass = (TabState__Class *)pDVar19->_dictionary;
    TStack_7.monitor = (MonitorData *)pDVar19->_version;
    TStack_7.fields.slotsPrPage = pDVar19->_index;
    TStack_7.fields.name = (String *)(pDVar19->_current).key;
    TStack_7.fields._8_8_ = *(undefined8 *)&(pDVar19->_current).value;
    uStack_1 = 1;
    pTStack_18 = &TStack_7;
    while( true ) {
      bVar17 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &TStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                        );
      if (bVar17 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&TStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_02 = (this->fields).inventoryController;
      if ((TStack_7.fields.highestSlotIndex == 0) || (this_02 == (InventoryController *)0x0))
      break;
      InventoryController::InventoryController_AddTab
                (this_02,(int32_t)TStack_7.fields.name,
                 *(String **)(TStack_7.fields.highestSlotIndex + 0xc),(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  }
  this_00 = (this->fields).categories;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    this_02 = (TabState *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (this->fields).currentTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    pIVar4 = (this->fields).inventoryController;
    if (pIVar4 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Clear(pIVar4,(MethodInfo *)0x0);
      tabId = (this->fields).currentTab;
      pIVar4 = (this->fields).inventoryController;
      if (this_02 != (TabState *)0x0) {
        currentPage = (this_02->fields).currentPage;
        maxPages = TabState::TabState_get_MaxPages(this_02,(MethodInfo *)0x0);
        if (pIVar4 != (InventoryController *)0x0) {
          InventoryController::InventoryController_SelectTab
                    (pIVar4,tabId,currentPage,maxPages,(MethodInfo *)0x0);
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).inventoryItemDatas;
          if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)&pLStack_6,this_01,
                                MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                               );
            uStack_1 = 1;
            RVar7 = pLVar5->_current;
            while( true ) {
              do {
                do {
                  method_00 = RVar7;
                  bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                                    );
                  if (bVar8 == 0) {
                    uStack_1 = 0xffffffff;
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)&stack0xffffffb8,
                               (ExceptionArgument__Enum)
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                               ,(MethodInfo *)method_00);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                  if (method_00 == (RegexCharClass_SingleRange)0x0) goto code_?;
                  RVar7 = method_00;
                } while (*(int *)((int)method_00 + 0x10) != (this->fields).currentTab);
                bVar8 = TabState::TabState_SlotIndexIsInRange
                                  (this_02,*(int32_t *)((int)method_00 + 0x14),(MethodInfo *)0x0);
              } while (bVar8 == 0);
              pTVar9 = (this->fields).testItemPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                pOStack_10 = TypeInfo__UnityEngine__Object;
                pLStack_6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             &UNK_?;
                func_?();
              }
              pTVar9 = (TestItem *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)pTVar9,
                                  TestItem_MethodInfo__UnityEngine__Object__Instantiate<TestItem>_TestItem_
                                 );
              if ((method_00 == (RegexCharClass_SingleRange)0x0) || (pTVar9 == (TestItem *)0x0))
              break;
              TestItem::TestItem_Initialize
                        (pTVar9,*(String **)((int)method_00 + 0xc),
                         *(int32_t *)((int)method_00 + 0x14),(MethodInfo *)0x0);
              pIVar4 = (this->fields).inventoryController;
              item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar9,(MethodInfo *)0x0);
              if (pIVar4 == (InventoryController *)0x0) break;
              InventoryController::InventoryController_AddObject
                        (pIVar4,item,*(int *)((int)method_00 + 0x14) % (this->fields).numberOfSlots,
                         (MethodInfo *)0x0);
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

