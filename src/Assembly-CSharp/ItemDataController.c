
/* InventoryItemData GetItemData(Int32) */

InventoryItemData *
Assembly-CSharp.dll::ItemDataController::ItemDataController_GetItemData
          (ItemDataController *this,int32_t slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).inventoryItemDatas;
  if (pLVar1 == (List_1_InventoryItemData_ *)0x0) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                        );
      if (bVar10 == 0) {
        return (InventoryItemData *)0x0;
      }
      if ((InventoryItemData *)LStack_9._current == (InventoryItemData *)0x0) break;
      if (((InventoryItemData__Fields *)((longlong)LStack_9._current + 0x10))->slotIndex == slot) {
        return (InventoryItemData *)LStack_9._current;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  pIVar12 = (InventoryItemData *)(*pcVar11)();
  return pIVar12;
}


/* Void InitializeTestData() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_InitializeTestData
               (ItemDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemData);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Key__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InventoryItemData>__Add_InventoryItemData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Category_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ItemId___0___SlotIndex___1___Cat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1 = (undefined1  [8])0x0;
  pMStack_2 = (MonitorData *)0x0;
  KStack_3.key = 0;
  KStack_3._4_4_ = 0;
  KStack_3.value = (Object *)0x0;
  uStack_4._0_4_ = 0;
  uStack_4._4_4_ = 0;
  iVar5 = 0;
  do {
    key = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                   (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
                   * -3;
    aiStackX_18[0] = iVar5;
    aIStackX_20[0].m_value = key;
    pOVar6 = (Object *)FUN_?(uRam_?,aiStackX_18);
    aiStackX_18[0] = iVar5;
    arg1 = (Object *)FUN_?(uRam_?,aiStackX_18);
    aiStackX_18[0] = key;
    arg2 = (Object *)FUN_?(uRam_?,aiStackX_18);
    pSVar7 = StringLiteral_ItemId___0___SlotIndex___1___Cat;
    PStack_8._arg0 = (Object *)0x0;
    PStack_8._arg1 = (Object *)0x0;
    PStack_8._arg2 = (Object *)0x0;
    PStack_8._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
              (&PStack_8,pOVar6,arg1,arg2,(MethodInfo *)0x0);
    PStack_9._arg0 = PStack_8._arg0;
    PStack_9._arg1 = PStack_8._arg1;
    PStack_9._arg2 = PStack_8._arg2;
    PStack_9._args = PStack_8._args;
    pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar7,&PStack_9,(MethodInfo *)0x0);
    pOVar6 = (Object *)FUN_?(TypeInfo__InventoryItemData);
    *(int *)((longlong)&pOVar6[2].klass + 4) = iVar5;
    *(int *)&pOVar6[2].klass = key;
    pOVar6[1].monitor = (MonitorData *)pSVar7;
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&pOVar6[1].monitor >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    *(int *)&pOVar6[1].klass = iVar5;
    pMVar15 = 
    MethodInfo__System__Collections__Generic__List<InventoryItemData>__Add_InventoryItemData_;
    this_00 = (this->fields).inventoryItemDatas;
    if (this_00 == (List_1_InventoryItemData_ *)0x0) goto code_?;
    piVar16 = &(this_00->fields)._version;
    *piVar16 = *piVar16 + 1;
    pIVar17 = (this_00->fields)._items;
    uVar10 = (this_00->fields)._size;
    if (pIVar17 == (InventoryItemData__Array *)0x0) goto code_?;
    if (uVar10 < (uint)pIVar17->max_length) {
      (this_00->fields)._size = uVar10 + 1;
      FUN_?(pIVar17,(longlong)(int)uVar10,pOVar6);
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                ((List_1_System_Object_ *)this_00,pOVar6,pMVar15->klass->rgctx_data[0xe].method);
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).categories;
    if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
    iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_01,key,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
    if (iVar18 < 0) {
      pDVar19 = (this->fields).categories;
      pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Category_,pSVar7,(MethodInfo *)0x0);
      uVar10 = (this->fields).numberOfSlots;
      this_02 = (TabState *)FUN_?(TypeInfo__TabState);
      uVar11 = (ulonglong)uVar10;
      TabState::TabState__ctor(this_02,key,pSVar7,uVar10,(MethodInfo *)0x0);
      if (pDVar19 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,key,(Object *)this_02,
                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar11 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar19 = (this->fields).categories;
    if ((pDVar19 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
       (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                            ), pOVar6 == (Object *)0x0)) goto code_?;
    if (*(int *)&pOVar6[2].klass < iVar5) {
      pDVar19 = (this->fields).categories;
      if ((pDVar19 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
         (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), pOVar6 == (Object *)0x0)) goto code_?;
      *(int *)&pOVar6[2].klass = iVar5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x14);
  pOVar20 = (Object__Class *)(this->fields).categories;
  if (pOVar20 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  PStack_9._arg2 = (Object *)0x0;
  PStack_9._args = (Object__Array *)0x0;
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&PStack_9 >> 0xc);
    lVar22 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar11 = *(ulonglong *)(lVar22 + 0xADDR);
      puVar13 = (ulonglong *)(lVar22 + 0xADDR);
      LOCK();
      bVar14 = uVar11 == *puVar13;
      if (bVar14) {
        *puVar13 = uVar11 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  PStack_9._arg1 = (Object *)(ulonglong)*(uint *)&(pOVar20->_0).byval_arg.field_0xc;
  uStack_23 = 2;
  pMStack_2 = (MonitorData *)PStack_9._arg1;
  KStack_3._0_8_ = 0;
  KStack_3.value = (Object *)0x0;
  uStack_4._0_4_ = 2;
  uStack_4._4_4_ = 0;
  PStack_8._arg0 = (Object *)0x0;
  PStack_8._arg1 = (Object *)auStack_1;
  PStack_9._arg0 = (Object *)pOVar20;
  auStack_1 = (undefined1  [8])pOVar20;
  while( true ) {
    bVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
             ::UInt32,System::Object]::
             Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        auStack_1,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                       );
    if (bVar24 == 0) {
      return;
    }
    pIVar25 = (this->fields).inventoryController;
    if (KStack_3.value == (Object *)0x0) goto code_?;
    if (pIVar25 == (InventoryController *)0x0) break;
    pTVar26 = (pIVar25->fields).tabMenu;
    if (pTVar26 == (TabMenuBase *)0x0) {
      FUN_?();
      break;
    }
    (*(pTVar26->klass->vtable).__unknown.methodPtr)
              (pTVar26,KStack_3._0_8_ & 0xffffffff,KStack_3.value[1].monitor,
               (pTVar26->klass->vtable).__unknown.method);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_PageTurned
               (ItemDataController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
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
      bVar1 = TabState::TabState_UpdatePage(this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_Start
               (ItemDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ItemDataController__PageTurned_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ItemDataController__SlotChanged_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ItemDataController__TabSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
  if (pIVar1 != (InventoryController *)0x0) {
    InventoryController::InventoryController_Initialize
              (pIVar1,(this->fields).numberOfSlots,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inventoryController;
    if (pIVar1 != (InventoryController *)0x0) {
      pUVar2 = (pIVar1->fields).OnPageTurned;
      pDVar3 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(pDVar3,this);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,pDVar3,(MethodInfo *)0x0);
      pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pDVar3 == (Delegate *)0x0) {
        (pIVar1->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
      }
      else {
        pUVar2 = (UnityAction_1_System_Int32_ *)
                 FUN_?(pDVar3,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) {
          FUN_?(pDVar3,pUVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pIVar1->fields).OnPageTurned = pUVar2;
        pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        lVar6 = FUN_?(pDVar3,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (lVar6 == 0) {
          FUN_?(pDVar3,pUVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pIVar1->fields).OnPageTurned >> 0xc);
        lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar9 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pIVar1 = (this->fields).inventoryController;
      if (pIVar1 != (InventoryController *)0x0) {
        pUVar2 = (pIVar1->fields).OnTabSelected;
        pDVar3 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        FUN_?(pDVar3,this);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar2,pDVar3,(MethodInfo *)0x0);
        pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        if (pDVar3 == (Delegate *)0x0) {
          (pIVar1->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
        }
        else {
          pUVar2 = (UnityAction_1_System_Int32_ *)
                   FUN_?(pDVar3,TypeInfo__UnityEngine__Events__UnityAction<int>);
          if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) {
            FUN_?(pDVar3,pUVar4);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (pIVar1->fields).OnTabSelected = pUVar2;
          pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<int>;
          lVar6 = FUN_?(pDVar3,TypeInfo__UnityEngine__Events__UnityAction<int>);
          if (lVar6 == 0) {
            FUN_?(pDVar3,pUVar4);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&(pIVar1->fields).OnTabSelected >> 0xc);
          lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar9 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pIVar1 = (this->fields).inventoryController;
        if (pIVar1 != (InventoryController *)0x0) {
          pUVar11 = (pIVar1->fields).OnSlotChanged;
          pDVar3 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
          FUN_?(pDVar3,this);
          pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUVar11,pDVar3,(MethodInfo *)0x0);
          pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<int,_int>;
          if (pDVar3 == (Delegate *)0x0) {
            (pIVar1->fields).OnSlotChanged = (UnityAction_2_System_Int32_System_Int32_ *)0x0;
          }
          else {
            pUVar11 = (UnityAction_2_System_Int32_System_Int32_ *)
                      FUN_?(pDVar3,TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
            if (pUVar11 == (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
              FUN_?(pDVar3,pUVar12);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (pIVar1->fields).OnSlotChanged = pUVar11;
            pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<int,_int>;
            lVar6 = FUN_?();
            if (lVar6 == 0) {
              FUN_?(pDVar3,pUVar12);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&(pIVar1->fields).OnSlotChanged >> 0xc);
            lVar6 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar9 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          ItemDataController_InitializeTestData(this,(MethodInfo *)0x0);
          iVar13 = (this->fields).defaultCategoryID;
          if (iVar13 != (this->fields).currentTab) {
            (this->fields).currentTab = iVar13;
            ItemDataController_UpdateContent(this,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_TabSelected
               (ItemDataController *this,int32_t tabId,MethodInfo *method)

{
  if (tabId == (this->fields).currentTab) {
    return;
  }
  (this->fields).currentTab = tabId;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TestItem_MethodInfo__UnityEngine__Object__Instantiate<TestItem>_TestItem_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
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
    pIVar1 = (this->fields).inventoryController;
    if ((pIVar1 != (InventoryController *)0x0) &&
       (pIVar2 = (pIVar1->fields).inventorySlots, pIVar2 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar2,(MethodInfo *)0x0);
      pIVar1 = (this->fields).inventoryController;
      uVar3 = (this->fields).currentTab;
      if (this_01 != (TabState *)0x0) {
        page = (this_01->fields).currentPage;
        uVar4 = FUN_?((float)(this_01->fields).highestSlotIndex /
                               (float)(this_01->fields).slotsPrPage);
        uVar5 = 1;
        if (1 < (int)uVar4) {
          uVar5 = uVar4;
        }
        if ((pIVar1 != (InventoryController *)0x0) &&
           (pTVar6 = (pIVar1->fields).tabMenu, pTVar6 != (TabMenuBase *)0x0)) {
          (*(pTVar6->klass->vtable).__unknown_1.methodPtr)
                    (pTVar6,(ulonglong)uVar3,(ulonglong)page,(ulonglong)uVar5,
                     (pTVar6->klass->vtable).__unknown_1.method);
          pIVar2 = (pIVar1->fields).inventorySlots;
          if (pIVar2 != (InventorySlots *)0x0) {
            InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                      (pIVar2,page,(pIVar1->fields).numberOfSlots,(MethodInfo *)0x0);
            LStack_7._list = (List_1_System_Object_ *)(this->fields).inventoryItemDatas;
            if ((List_1_InventoryItemData_ *)LStack_7._list != (List_1_InventoryItemData_ *)0x0) {
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&uStack_8 >> 0xc);
                uVar9 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar12 = uVar10 == *puVar11;
                  if (bVar12) {
                    *puVar11 = uVar10 | 1L << (ulonglong)(uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar12);
              }
              pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)
                            (uint)(((List_1_InventoryItemData_ *)LStack_7._list)->fields)._version
                           << 0x20);
              uStack_14 = 0;
              LStack_7._8_8_ = pLStack_13;
              LStack_7._current = (Object *)0x0;
              uStack_8 = 0;
              pLStack_13 = &LStack_7;
code_?:
              do {
                bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_7,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                                  );
                pOVar16 = LStack_7._current;
                if (bVar15 == 0) {
                  return;
                }
                if (LStack_7._current == (Object *)0x0) goto code_?;
              } while ((*(int *)&LStack_7._current[2].klass != (this->fields).currentTab) ||
                      (bVar15 = TabState::TabState_SlotIndexIsInRange
                                         (this_01,*(int32_t *)
                                                   ((longlong)&LStack_7._current[2].klass + 4),
                                          (MethodInfo *)0x0), bVar15 == 0));
              pTVar17 = (this->fields).testItemPrefab;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pTVar17 = (TestItem *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pTVar17,
                                   TestItem_MethodInfo__UnityEngine__Object__Instantiate<TestItem>_TestItem_
                                  );
              if (pTVar17 != (TestItem *)0x0) {
                TestItem::TestItem_Initialize
                          (pTVar17,(String *)pOVar16[1].monitor,
                           *(int32_t *)((longlong)&pOVar16[2].klass + 4),(MethodInfo *)0x0);
                pIVar1 = (this->fields).inventoryController;
                item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar17,(MethodInfo *)0x0);
                if (pIVar1 != (InventoryController *)0x0) {
                  InventoryController::InventoryController_AddObject
                            (pIVar1,item,
                             *(int *)((longlong)&pOVar16[2].klass + 4) % (this->fields).numberOfSlots
                             ,(MethodInfo *)0x0);
                  goto code_?;
                }
                FUN_?();
              }
              FUN_?();
code_?:
              FUN_?();
              FUN_?();
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController_UpdateContent
               (ItemDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<InventoryItemData>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TestItem_MethodInfo__UnityEngine__Object__Instantiate<TestItem>_TestItem_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
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
    pIVar1 = (this->fields).inventoryController;
    if ((pIVar1 != (InventoryController *)0x0) &&
       (pIVar2 = (pIVar1->fields).inventorySlots, pIVar2 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar2,(MethodInfo *)0x0);
      pIVar1 = (this->fields).inventoryController;
      uVar3 = (this->fields).currentTab;
      if (this_01 != (TabState *)0x0) {
        page = (this_01->fields).currentPage;
        uVar4 = FUN_?((float)(this_01->fields).highestSlotIndex /
                               (float)(this_01->fields).slotsPrPage);
        uVar5 = 1;
        if (1 < (int)uVar4) {
          uVar5 = uVar4;
        }
        if ((pIVar1 != (InventoryController *)0x0) &&
           (pTVar6 = (pIVar1->fields).tabMenu, pTVar6 != (TabMenuBase *)0x0)) {
          (*(pTVar6->klass->vtable).__unknown_1.methodPtr)
                    (pTVar6,(ulonglong)uVar3,(ulonglong)page,(ulonglong)uVar5,
                     (pTVar6->klass->vtable).__unknown_1.method);
          pIVar2 = (pIVar1->fields).inventorySlots;
          if (pIVar2 != (InventorySlots *)0x0) {
            InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                      (pIVar2,page,(pIVar1->fields).numberOfSlots,(MethodInfo *)0x0);
            LStack_7._list = (List_1_System_Object_ *)(this->fields).inventoryItemDatas;
            if ((List_1_InventoryItemData_ *)LStack_7._list != (List_1_InventoryItemData_ *)0x0) {
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&uStack_8 >> 0xc);
                uVar9 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar12 = uVar10 == *puVar11;
                  if (bVar12) {
                    *puVar11 = uVar10 | 1L << (ulonglong)(uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar12);
              }
              pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)
                            (uint)(((List_1_InventoryItemData_ *)LStack_7._list)->fields)._version
                           << 0x20);
              uStack_14 = 0;
              LStack_7._8_8_ = pLStack_13;
              LStack_7._current = (Object *)0x0;
              uStack_8 = 0;
              pLStack_13 = &LStack_7;
code_?:
              do {
                bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_7,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItemData>__MoveNext__
                                  );
                pOVar16 = LStack_7._current;
                if (bVar15 == 0) {
                  return;
                }
                if (LStack_7._current == (Object *)0x0) goto code_?;
              } while ((*(int *)&LStack_7._current[2].klass != (this->fields).currentTab) ||
                      (bVar15 = TabState::TabState_SlotIndexIsInRange
                                         (this_01,*(int32_t *)
                                                   ((longlong)&LStack_7._current[2].klass + 4),
                                          (MethodInfo *)0x0), bVar15 == 0));
              pTVar17 = (this->fields).testItemPrefab;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pTVar17 = (TestItem *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pTVar17,
                                   TestItem_MethodInfo__UnityEngine__Object__Instantiate<TestItem>_TestItem_
                                  );
              if (pTVar17 != (TestItem *)0x0) {
                TestItem::TestItem_Initialize
                          (pTVar17,(String *)pOVar16[1].monitor,
                           *(int32_t *)((longlong)&pOVar16[2].klass + 4),(MethodInfo *)0x0);
                pIVar1 = (this->fields).inventoryController;
                item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar17,(MethodInfo *)0x0);
                if (pIVar1 != (InventoryController *)0x0) {
                  InventoryController::InventoryController_AddObject
                            (pIVar1,item,
                             *(int *)((longlong)&pOVar16[2].klass + 4) % (this->fields).numberOfSlots
                             ,(MethodInfo *)0x0);
                  goto code_?;
                }
                FUN_?();
              }
              FUN_?();
code_?:
              FUN_?();
              FUN_?();
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* ItemDataController() */

void Assembly-CSharp.dll::ItemDataController::ItemDataController__ctor
               (ItemDataController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItemData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<InventoryItemData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).defaultCategoryID = 1;
  (this->fields).currentTab = -1;
  this_00 = (List_1_InventoryItemData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItemData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<InventoryItemData>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).inventoryItemDatas = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).inventoryItemDatas >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  bVar1 = iRam_? != 0;
  (this->fields).categories = (Dictionary_2_System_Int32_TabState_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).categories >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

