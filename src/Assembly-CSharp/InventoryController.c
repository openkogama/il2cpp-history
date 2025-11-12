
/* Void AddObject(GameObject, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_AddObject
               (InventoryController *this,GameObject *item,int32_t slotIndex,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 != (InventorySlots *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pIVar1->fields).inventorySlots;
    if ((this_00 != (Dictionary_2_System_Int32_InventorySlot_ *)0x0) &&
       (this_01 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_00,slotIndex,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                            ), this_01 != (Component *)0x0)) {
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
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (item,(MethodInfo *)0x0);
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_01,(MethodInfo *)0x0);
          if (this_02 == (Transform *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_02,parent,0,(MethodInfo *)0x0);
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
          pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (obj == (Object *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uStack_4._0_4_ = (pVVar3->zeroVector).x;
          uStack_4._4_4_ = (pVVar3->zeroVector).y;
          fStack_5 = (pVVar3->zeroVector).z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar6 = obj[1].klass;
          if (pOVar6 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pOVar6,&uStack_4);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddTab(Int32, String) */

void Assembly-CSharp.dll::InventoryController::InventoryController_AddTab
               (InventoryController *this,int32_t categoryId,String *tabName,MethodInfo *method)

{
  pTVar1 = (this->fields).tabMenu;
  if (pTVar1 != (TabMenuBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).__unknown.methodPtr)();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::InventoryController::InventoryController_Clear
               (InventoryController *this,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 == (InventorySlots *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                  ,0);
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
            )(pIVar1->fields).inventorySlots;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                            ),
        pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDStack_4 = (pDVar3->fields)._dictionary;
  ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)0x0;
  puStack_6 = (undefined *)0x0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
    uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  if (pDStack_4 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_8 = pDStack_4;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_13 = (pDStack_4->fields)._version;
  puStack_6 = (undefined *)0x0;
  uStack_14 = 0;
  pIStack_15 = (InventorySlot *)0x0;
  pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_5 = &pDStack_4;
  do {
    if (pDStack_4 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_13 != (pDStack_4->fields)._version) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (pDStack_4 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto code_?;
      if ((uint)(pDStack_4->fields)._count <= uStack_14) {
        return;
      }
      pDVar16 = (pDStack_4->fields)._entries;
      lVar17 = (longlong)(int)uStack_14;
      uVar7 = uStack_14 + 1;
      if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)0x0) goto code_?;
      if ((uint)pDVar16->max_length <= uStack_14) {
        uStack_14 = uVar7;
        FUN_?();
        goto code_?;
      }
      uStack_14 = uVar7;
    } while ((&pDVar16->vector[0].hashCode)[lVar17 * 6] < 0);
    pIStack_15 = *(InventorySlot **)((longlong)&pDVar16->vector[0].key + lVar17 * 0x18 + 8);
    func_?();
    this_01 = pIStack_15;
    if (pIStack_15 == (InventorySlot *)0x0) {
code_?:
      FUN_?();
      uVar7 = uStack_14;
code_?:
      uStack_14 = uVar7;
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
    pGVar18 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
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
    if (pGVar18 == (GameObject *)0x0) {
      bVar12 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar12 = (pGVar18->fields)._.m_CachedPtr != (void *)0x0;
    }
    if (bVar12) {
      pGVar18 = InventorySlot::InventorySlot_get_Item(this_01,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar18,0.0,(MethodInfo *)0x0);
    }
  } while( true );
}


/* List`1[System.Object] GetComponentsOfSlotsWithType[Object]() */

List_1_System_Object_ *
Assembly-CSharp.dll::InventoryController::InventoryController_GetComponentsOfSlotsWithType
          (InventoryController *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  pLVar2 = (List_1_System_Object_ *)FUN_?(pvVar1);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             (method->field7_0x38).rgctx_data[1].method);
  pIVar3 = (this->fields).inventorySlots;
  if ((pIVar3 == (InventorySlots *)0x0) ||
     (pDVar4 = (Dictionary_2_System_UInt32_System_Object_ *)(pIVar3->fields).inventorySlots,
     pDVar4 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    uStack_10 = (ulonglong)(uint)(pDVar4->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    DStack_14._version = (undefined4)uStack_10;
    DStack_14._index = uStack_10._4_4_;
    DStack_14._current.key = 0;
    DStack_14._current._4_4_ = 0;
    DStack_14._current.value = (Object *)0x0;
    DStack_14._getEnumeratorRetType = 2;
    DStack_14._36_4_ = 0;
    pDStack_6 = pDVar4;
    DStack_14._dictionary = pDVar4;
    while( true ) {
      do {
        do {
          bVar15 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_14,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                            );
          pOVar16 = DStack_14._current.value;
          if (bVar15 == 0) {
            return pLVar2;
          }
          if ((InventorySlot *)DStack_14._current.value == (InventorySlot *)0x0)
          goto code_?;
          pGVar17 = InventorySlot::InventorySlot_get_Item
                              ((InventorySlot *)DStack_14._current.value,(MethodInfo *)0x0);
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
        } while (pGVar17 == (GameObject *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
      } while ((pGVar17->fields)._.m_CachedPtr == (void *)0x0);
      if ((InventorySlot *)pOVar16 == (InventorySlot *)0x0) break;
      pGVar17 = InventorySlot::InventorySlot_get_Item((InventorySlot *)pOVar16,(MethodInfo *)0x0);
      if (pGVar17 == (GameObject *)0x0) goto code_?;
      pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar17,(method->field7_0x38).rgctx_data[2].method);
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
      if (pOVar16 == (Object *)0x0) {
        bVar18 = false;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar18 = pOVar16[1].klass != (Object__Class *)0x0;
      }
      if (bVar18) {
        if (pLVar2 == (List_1_System_Object_ *)0x0) goto code_?;
        FUN_?(pLVar2,pOVar16,(method->field7_0x38).rgctx_data[4].rgctxDataDummy);
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar19 = (code *)swi(3);
  pLVar2 = (List_1_System_Object_ *)(*pcVar19)();
  return pLVar2;
}


/* Void HighlightSlot(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_HighlightSlot
               (InventoryController *this,int32_t slotPosition,MethodInfo *method)

{
  pIVar1 = (this->fields).inventorySlots;
  if (pIVar1 != (InventorySlots *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pIVar1->fields).inventorySlots;
    if (this_00 != (Dictionary_2_System_Int32_InventorySlot_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,slotPosition,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                         );
      if ((pOVar2 != (Object *)0x0) && (pMVar3 = pOVar2[2].monitor, pMVar3 != (MonitorData *)0x0)) {
        pMVar3[0x34] = (MonitorData)0x1;
        *(undefined4 *)(pMVar3 + 0x3c) = *(undefined4 *)(pMVar3 + 0x30);
        if (*(CanvasGroup **)(pMVar3 + 0x20) != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (*(CanvasGroup **)(pMVar3 + 0x20),0.0,(MethodInfo *)0x0);
          *(undefined4 *)(pMVar3 + 0x38) = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_Initialize
               (InventoryController *this,int32_t slots,MethodInfo *method)

{
  obj = (this->fields).inventorySlots;
  (this->fields).numberOfSlots = slots;
  if (obj == (InventorySlots *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
  (obj->fields)._SlotCountPerPage_k__BackingField = slots;
  if (0 < slots) {
    do {
      original = (obj->fields).inventorySlotPrefab;
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
      pvVar2 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      pvVar2 = (void *)(*pcRam_?)(pvVar2);
      parent = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar2,
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
      this_00 = (obj->fields).inventorySlots;
      if (this_00 == (Dictionary_2_System_Int32_InventorySlot_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__Add_int__InventorySlot_
                 ->klass->rgctx_data[0x22].method);
      key = key + 1;
    } while (key < slots);
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
    uStack_2 = (pTVar1->klass->vtable).__unknown_1.method;
    (*(pTVar1->klass->vtable).__unknown_1.methodPtr)
              (pTVar1,CONCAT44(in_register_00000014,tabId),
               CONCAT44(in_register_00000084,currentPage),CONCAT44(in_register_0000008c,maxPages));
    pIVar3 = (this->fields).inventorySlots;
    if (pIVar3 != (InventorySlots *)0x0) {
      iVar4 = (this->fields).numberOfSlots;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__GetEnumerator__
                      ,currentPage,iVar4,0);
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
      pDStack_5 = (Dictionary_2_System_UInt32_System_Object_ *)(pIVar3->fields).inventorySlots;
      if (pDStack_5 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_7 = 0;
      uStack_8 = 0;
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&pDStack_5 >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      uStack_13 = (ulonglong)(uint)(pDStack_5->fields)._version;
      puStack_14 = (undefined *)0x2;
      auStack_15._8_8_ = uStack_13;
      auStack_15._16_8_ = 0;
      auStack_15._24_8_ = (Object *)0x0;
      uStack_2._0_4_ = 2;
      uStack_2._4_4_ = 0;
      auStack_15._0_8_ = pDStack_5;
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           auStack_15,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                          );
        if (bVar16 == 0) {
          return;
        }
        if ((Object *)auStack_15._24_8_ == (Object *)0x0) break;
        *(int32_t *)&((Object *)(auStack_15._24_8_ + 0x20))->klass =
             (currentPage + -1) * iVar4 + auStack_15._16_4_;
      }
      FUN_?();
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetHeaderText(String) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SetHeaderText
               (InventoryController *this,String *category,MethodInfo *method)

{
  pTVar1 = (this->fields).categoryHeaderText;
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,category,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SlotChanged(Int32, Int32) */

void Assembly-CSharp.dll::InventoryController::InventoryController_SlotChanged
               (InventoryController *this,int32_t fromSlotIndex,int32_t toSlotIndex,
               MethodInfo *method)

{
  pUVar1 = (this->fields).OnSlotChanged;
  if (pUVar1 != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,fromSlotIndex,toSlotIndex,
               (pUVar1->fields)._._.method);
    return;
  }
  return;
}

