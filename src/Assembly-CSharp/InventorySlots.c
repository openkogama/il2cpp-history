
/* Void AddItem(GameObject, Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_AddItem
               (InventorySlots *this,GameObject *item,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inventorySlots;
  if ((this_00 == (Dictionary_2_System_Int32_InventorySlot_ *)0x0) ||
     (this_02 = (Component *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,slotIndex,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                          ), this_02 == (Component *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((item->fields)._.m_CachedPtr != (void *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (item,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_02,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (item,
                       UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                      );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (obj == (Object *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_3._0_4_ = (pVVar2->zeroVector).x;
      uStack_3._4_4_ = (pVVar2->zeroVector).y;
      fStack_4 = (pVVar2->zeroVector).z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar5 = obj[1].klass;
      if (pOVar5 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pOVar5,&uStack_3);
    }
  }
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_Clear
               (InventorySlots *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).inventorySlots;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDStack_3 = (pDVar1->fields)._dictionary;
  ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
    uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if (pDStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_7 = pDStack_3;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_12 = (pDStack_3->fields)._version;
  uStack_5 = 0;
  uStack_13 = 0;
  pIStack_14 = (InventorySlot *)0x0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_4 = &pDStack_3;
  do {
    if (pDStack_3 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_12 != (pDStack_3->fields)._version) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (pDStack_3 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto code_?;
      if ((uint)(pDStack_3->fields)._count <= uStack_13) {
        return;
      }
      pDVar15 = (pDStack_3->fields)._entries;
      lVar16 = (longlong)(int)uStack_13;
      uVar6 = uStack_13 + 1;
      if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)0x0) goto code_?;
      if ((uint)pDVar15->max_length <= uStack_13) {
        uStack_13 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_13 = uVar6;
    } while ((&pDVar15->vector[0].hashCode)[lVar16 * 6] < 0);
    pIStack_14 = *(InventorySlot **)((longlong)&pDVar15->vector[0].key + lVar16 * 0x18 + 8);
    func_?();
    this_01 = pIStack_14;
    if (pIStack_14 == (InventorySlot *)0x0) {
code_?:
      FUN_?();
      uVar6 = uStack_13;
code_?:
      uStack_13 = uVar6;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar17 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
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
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar17 == (GameObject *)0x0) {
      bVar11 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar11 = (pGVar17->fields)._.m_CachedPtr != (void *)0x0;
    }
    if (bVar11) {
      pGVar17 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar17,0.0,(MethodInfo *)0x0);
    }
  } while( true );
}


/* InventorySlot GetSlotBasedOnAbsolute(Int32) */

InventorySlot *
Assembly-CSharp.dll::InventorySlots::InventorySlots_GetSlotBasedOnAbsolute
          (InventorySlots *this,int32_t absoluteSlotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_InventorySlot>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).inventorySlots;
  if (pDVar1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
  }
  else {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key = 0;
    DStack_11._current._4_4_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_5 = pDVar1;
    DStack_11._dictionary = pDVar1;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_11,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                        );
      if (bVar12 == 0) {
        return (InventorySlot *)0x0;
      }
      if ((InventorySlot *)DStack_11._current.value == (InventorySlot *)0x0) break;
      if (((InventorySlot__Fields *)((longlong)DStack_11._current.value + 0x10))->
          _AbsoluteSlot_k__BackingField == absoluteSlotIndex) {
        return (InventorySlot *)DStack_11._current.value;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  pIVar14 = (InventorySlot *)(*pcVar13)();
  return pIVar14;
}


/* Void HighlightSlot(Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_HighlightSlot
               (InventorySlots *this,int32_t slotPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inventorySlots;
  if (this_00 != (Dictionary_2_System_Int32_InventorySlot_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,slotPosition,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                       );
    if ((pOVar1 != (Object *)0x0) && (pMVar2 = pOVar1[2].monitor, pMVar2 != (MonitorData *)0x0)) {
      pMVar2[0x34] = (MonitorData)0x1;
      *(undefined4 *)(pMVar2 + 0x3c) = *(undefined4 *)(pMVar2 + 0x30);
      if (*(CanvasGroup **)(pMVar2 + 0x20) != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (*(CanvasGroup **)(pMVar2 + 0x20),0.0,(MethodInfo *)0x0);
        *(undefined4 *)(pMVar2 + 0x38) = 0;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_Initialize
               (InventorySlots *this,int32_t numberOfSlots,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventorySlot_MethodInfo__UnityEngine__Object__Instantiate<InventorySlot>_InventorySlot__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = 0;
  (this->fields)._SlotCountPerPage_k__BackingField = numberOfSlots;
  if (0 < numberOfSlots) {
    do {
      original = (this->fields).inventorySlotPrefab;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar1 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      pvVar1 = (void *)(*pcRam_?)(pvVar1);
      parent = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar1,
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar4 = 
      InventorySlot_MethodInfo__UnityEngine__Object__Instantiate<InventorySlot>_InventorySlot__UnityEngine__Transform__bool_
      ;
      value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                        ((Object *)original,parent,0,
                         InventorySlot_MethodInfo__UnityEngine__Object__Instantiate<InventorySlot>_InventorySlot__UnityEngine__Transform__bool_
                        );
      this_00 = (this->fields).inventorySlots;
      if (this_00 == (Dictionary_2_System_Int32_InventorySlot_ *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                 ->klass->rgctx_data[0x22].method);
      key = key + 1;
    } while (key < numberOfSlots);
  }
  return;
}


/* Void SlotChanged(GameObject, Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_SlotChanged
               (InventorySlots *this,GameObject *draggedItem,int32_t toSlotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISlotChanged>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ISlotChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISlotChanged>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventorySlots____c__DisplayClass12_0___SlotChanged_b__0_UnityEngine__EventSystems__ISlotChanged__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventorySlots____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__InventorySlots____c__DisplayClass12_0);
  if (((object == (Object *)0x0) ||
      (*(int32_t *)((longlong)&object[1].klass + 4) = toSlotIndex, draggedItem == (GameObject *)0x0)
      ) || (pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                               (draggedItem,
                                InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                               ), pOVar1 == (Object *)0x0)) goto code_?;
  absoluteSlotIndex = *(int32_t *)((longlong)&object[1].klass + 4);
  *(undefined4 *)&object[1].klass = *(undefined4 *)&pOVar1[2].klass;
  this_01 = InventorySlots_GetSlotBasedOnAbsolute(this,absoluteSlotIndex,(MethodInfo *)0x0);
  if (this_01 == (InventorySlot *)0x0) goto code_?;
  pGVar2 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
  this_02 = InventorySlots_GetSlotBasedOnAbsolute
                      (this,*(int32_t *)&object[1].klass,(MethodInfo *)0x0);
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (draggedItem,
                      InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                     );
  if (pOVar1 == (Object *)0x0) goto code_?;
  *(undefined4 *)&pOVar1[2].klass = *(undefined4 *)((longlong)&object[1].klass + 4);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar2 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
      pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (pGVar2,
                          InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                         );
      if (pOVar1 == (Object *)0x0) goto code_?;
      *(undefined4 *)&pOVar1[2].klass = *(undefined4 *)&object[1].klass;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_02 == (InventorySlot *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
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
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_02->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    InventorySlot::InventorySlot_Set(this_02,pGVar2,(MethodInfo *)0x0);
  }
  InventorySlot::InventorySlot_Set(this_01,draggedItem,(MethodInfo *)0x0);
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (((pGVar2 != (GameObject *)0x0) &&
      (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar3,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar3,(MethodInfo *)0x0);
    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISlotChanged>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_03,object,
               MethodInfo__InventorySlots____c__DisplayClass12_0___SlotChanged_b__0_UnityEngine__EventSystems__ISlotChanged__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar4 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ISlotChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISlotChanged>_
    ;
    if ((
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ISlotChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ISlotChanged>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar4);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar2,(IList_1_UnityEngine_Transform_ *)
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                      s_InternalTransformList,(MethodInfo *)0x0);
    pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList;
    if (pLVar5 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar6 = (longlong)(pLVar5->fields)._size;
      uVar7 = 0;
      if (0 < lVar6) {
        lVar8 = 0;
        lVar9 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar5->fields)._size <= uVar7) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar11 = (pLVar5->fields)._items;
          if (pTVar11 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar11->max_length <= uVar7) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          this_00 = *(Component **)((longlong)pTVar11->vector + lVar9 + -0x20);
          if (this_00 == (Component *)0x0) goto code_?;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (this_00,(MethodInfo *)0x0);
          bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_Execute_18
                            (pGVar2,(BaseEventData *)0x0,this_03,
                             (pMVar4->field7_0x38).rgctx_data[1].method);
          if (bVar12 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_00,(MethodInfo *)0x0);
            return;
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (lVar8 < lVar6);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateAbsoluteSlotValues(Int32, Int32) */

void Assembly-CSharp.dll::InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
               (InventorySlots *this,int32_t page,int32_t numberOfSlots,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_InventorySlot>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_InventorySlot>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).inventorySlots;
  if (pDStack_1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = 0;
  DStack_11._current._4_4_ = 0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  DStack_11._dictionary = pDStack_1;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if (DStack_11._current.value == (Object *)0x0) break;
    *(uint32_t *)&DStack_11._current.value[2].klass =
         (page + -1) * numberOfSlots + DStack_11._current.key;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* InventorySlots() */

void Assembly-CSharp.dll::InventorySlots::InventorySlots__ctor
               (InventorySlots *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Dictionary__)
  ;
  bVar1 = iRam_? != 0;
  (this->fields).inventorySlots = (Dictionary_2_System_Int32_InventorySlot_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).inventorySlots >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
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

