
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
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
  DStack_7.klass = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  DStack_7.monitor = (MonitorData *)0x0;
  DStack_7.fields._buckets = (Int32__Array *)0x0;
  DStack_7.fields._entries =
       (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0;
  DStack_7.fields._count = 0;
  DStack_7.fields._freeList = 0;
  do {
    DStack_7.fields._values =
         (Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ *)((int)pOVar6 % 3);
    pOStack_8 = pOVar6;
    IStack_9.m_value = (int32_t)DStack_7.fields._values;
    DStack_7.fields._syncRoot = (Object *)func_?(TypeInfo__System__Int32,&pOStack_8);
    pOStack_10 = pOVar6;
    pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_10);
    pOStack_12 = (Object__Class *)IStack_9.m_value;
    arg2 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_12);
    DStack_7.fields._syncRoot =
         (Object *)
         mscorlib.dll::System::String::String_Format_2
                   (StringLiteral_ItemId___0___SlotIndex___1___Cat,DStack_7.fields._syncRoot,pOVar11
                    ,arg2,(MethodInfo *)0x0);
    pOVar11 = (Object *)func_?(TypeInfo__InventoryItemData);
    if (pOVar11 == (Object *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar11,ExceptionArgument__Enum_obj,unaff_EDI);
    pOVar11[2].klass = (Object__Class *)DStack_7.fields._values;
    pOVar11[1].monitor = (MonitorData *)DStack_7.fields._syncRoot;
    pOVar11[2].monitor = (MonitorData *)pOVar6;
    func_?(&pOVar11[1].monitor,DStack_7.fields._syncRoot);
    pOVar11[1].klass = pOVar6;
    this_00 = (this->fields).inventoryItemDatas;
    if (this_00 == (List_1_InventoryItemData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,pOVar11,
               MethodInfo__System__Collections__Generic__List<InventoryItemData>__Add_InventoryItemData_
              );
    this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).categories;
    if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_01,(Object *)IStack_9.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      );
    if (bVar13 == 0) {
      DStack_7.fields._keys =
           (Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ *)
           (this->fields).categories;
      pOStack_8 = (Object__Class *)IStack_9.m_value;
      str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
      DStack_7.fields._syncRoot =
           (Object *)
           mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Category_,str1,(MethodInfo *)0x0);
      DStack_7.fields._values =
           (Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ *)
           (this->fields).numberOfSlots;
      DStack_7.fields._version = func_?(TypeInfo__TabState);
      if ((TabState *)DStack_7.fields._version == (TabState *)0x0) goto code_?;
      TabState::TabState__ctor
                ((TabState *)DStack_7.fields._version,(int32_t)pOStack_8,
                 (String *)DStack_7.fields._syncRoot,(int32_t)DStack_7.fields._values,
                 (MethodInfo *)0x0);
      if ((Dictionary_2_System_Object_System_Object_ *)DStack_7.fields._keys ==
          (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)DStack_7.fields._keys,
                 (Object *)pOStack_8,(Object *)DStack_7.fields._version,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                );
    }
    this_02 = (this->fields).categories;
    if (this_02 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
    pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,IStack_9.m_value,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                       );
    if (pOVar11 == (Object *)0x0) goto code_?;
    if ((int)pOVar11[2].klass < (int)pOVar6) {
      unaff_EDI = (MethodInfo *)(this->fields).categories;
      if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
      pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_EDI,
                          IStack_9.m_value,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                         );
      if (pOVar11 == (Object *)0x0) goto code_?;
      pOVar11[2].klass = pOVar6;
    }
    pOVar6 = (Object__Class *)((int)&(pOVar6->_0).image + 1);
  } while ((int)pOVar6 < 0x14);
  this_03 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).categories;
  if (this_03 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_15,this_03,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                       );
    DStack_7.fields._comparer = (IEqualityComparer_1_System_Object_ *)0x0;
    DStack_7.klass = (Dictionary_2_System_Object_System_Object___Class *)pDVar14->_dictionary;
    DStack_7.monitor = (MonitorData *)pDVar14->_version;
    DStack_7.fields._buckets = (Int32__Array *)pDVar14->_index;
    DStack_7.fields._entries =
         (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
         (pDVar14->_current).key;
    DStack_7.fields._8_8_ = *(undefined8 *)&(pDVar14->_current).value;
    uStack_1 = 1;
    DStack_7.fields._keys =
         (Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ *)&DStack_7;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                         &DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pIVar16 = (this->fields).inventoryController;
      if (((DStack_7.fields._count == 0) ||
          (DStack_7.fields._version = *(int32_t *)(DStack_7.fields._count + 0xc),
          pIVar16 == (InventoryController *)0x0)) ||
         (pTVar17 = (pIVar16->fields).tabMenu, pTVar17 == (TabMenuBase *)0x0)) break;
      (*(pTVar17->klass->vtable).__unknown.methodPtr)
                (pTVar17,DStack_7.fields._entries,DStack_7.fields._version,
                 (pTVar17->klass->vtable).__unknown.method);
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
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
  pvVar2 = (void *)(this->fields).numberOfSlots;
  this_01 = (Delegate *)0x0;
  if (pIVar1 == (InventoryController *)0x0) {
code_?:
    func_?();
  }
  else {
    (pIVar1->fields).numberOfSlots = (int32_t)pvVar2;
    this_01 = (Delegate *)(pIVar1->fields).inventorySlots;
    if (this_01 == (Delegate *)0x0) goto code_?;
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
    unaff_EDI = (Delegate *)0x0;
    (this_01->fields).method = pvVar2;
    if (0 < (int)pvVar2) {
      do {
        pOVar3 = (this_01->fields).m_target;
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           (pOVar3,parent,0,
                            InventorySlot_MethodInfo__UnityEngine__Object__Instantiate<InventorySlot>_InventorySlot__UnityEngine__Transform__bool_
                           );
        this_00 = (this_01->fields).invoke_impl;
        if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,(Object *)unaff_EDI,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                  );
        unaff_EDI = (Delegate *)((int)&unaff_EDI->klass + 1);
      } while ((int)unaff_EDI < (int)pvVar2);
    }
    unaff_EDI = (Delegate *)(this->fields).inventoryController;
    if (unaff_EDI == (Delegate *)0x0) goto code_?;
    pDVar4 = (unaff_EDI->fields).extra_arg;
    pUVar5 = (UnityAction_1_System_Int32Enum_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    this_01 = (Delegate *)0x0;
    if (pUVar5 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar5,(Object *)this,MethodInfo__ItemDataController__PageTurned_int_,
               (MethodInfo *)0x0);
    this_01 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    if (this_01 == (Delegate *)0x0) {
      (unaff_EDI->fields).extra_arg = (void *)0x0;
    }
    else {
      pvVar2 = (void *)func_?(this_01);
      if (pvVar2 == (void *)0x0) goto code_?;
      (unaff_EDI->fields).extra_arg = pvVar2;
      iVar6 = func_?(this_01);
      if (iVar6 == 0) goto code_?;
    }
    func_?(&(unaff_EDI->fields).extra_arg);
    this_01 = (Delegate *)(this->fields).inventoryController;
    if (this_01 == (Delegate *)0x0) goto code_?;
    pDVar4 = (this_01->fields).method_code;
    pUVar5 = (UnityAction_1_System_Int32Enum_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    unaff_EDI = (Delegate *)0x0;
    if (pUVar5 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar5,(Object *)this,MethodInfo__ItemDataController__TabSelected_int_,
               (MethodInfo *)0x0);
    unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    if (unaff_EDI == (Delegate *)0x0) {
      (this_01->fields).method_code = (void *)0x0;
code_?:
      func_?(&(this_01->fields).method_code);
      this_01 = (Delegate *)(this->fields).inventoryController;
      if (this_01 != (Delegate *)0x0) {
        pDVar4 = (this_01->fields).interp_method;
        this_02 = (UnityAction_2_System_Int32_System_Int32_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
        unaff_EDI = (Delegate *)0x0;
        if (this_02 != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
          Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                    (this_02,(Object *)this,MethodInfo__ItemDataController__SlotChanged_int__int_,
                     (MethodInfo *)0x0);
          unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar4,(Delegate *)this_02,(MethodInfo *)0x0);
          if (unaff_EDI == (Delegate *)0x0) {
            (this_01->fields).interp_method = (void *)0x0;
code_?:
            func_?(&(this_01->fields).interp_method);
            ItemDataController_InitializeTestData(this,(MethodInfo *)0x0);
            iVar6 = (this->fields).defaultCategoryID;
            if (iVar6 != (this->fields).currentTab) {
              (this->fields).currentTab = iVar6;
              ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
            }
            return;
          }
          pvVar2 = (void *)func_?(unaff_EDI);
          if (pvVar2 != (void *)0x0) {
            (this_01->fields).interp_method = pvVar2;
            iVar6 = func_?(unaff_EDI);
            if (iVar6 != 0) goto code_?;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    pvVar2 = (void *)func_?(unaff_EDI);
    if (pvVar2 != (void *)0x0) {
      (this_01->fields).method_code = pvVar2;
      iVar6 = func_?(unaff_EDI);
      if (iVar6 != 0) goto code_?;
    }
  }
code_?:
  func_?(unaff_EDI);
code_?:
  func_?(this_01);
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
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
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
          (*(pTVar12->klass->vtable).__unknown_1.methodPtr)();
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
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  if (this_00 != (List_1_InventoryItemData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<InventoryItemData>__List__);
    (this->fields).inventoryItemDatas = this_00;
    func_?(&(this->fields).inventoryItemDatas,this_00);
    this_01 = (Dictionary_2_System_Int32_TabState_ *)
              func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    if (this_01 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
      (this->fields).categories = this_01;
      func_?(&(this->fields).categories,this_01);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

