
/* Void DoShowing() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup_DoShowing
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
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
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_prioritizedItem_in_first_time_pl);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_item_in_inventory_missing_docume);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0);
  (this->fields).showing = 1;
  pTVar1 = (this->fields).tabGroup;
  if (pTVar1 != (TabMenu *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pTVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FirstTimeActivatableBazookaPopup____c);
    }
    this_03 = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0;
    if (this_03 == (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
      if (*(int *)&(TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FirstTimeActivatableBazookaPopup____c);
      }
      object = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9;
      this_03 = (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                 MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0 = this_03;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)
                        &TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0 >>
                       0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    pIVar8 = (this->fields).slots;
    if ((pIVar8 != (InventorySlots *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pIVar8,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      iVar12 = (*pcRam_?)(pvVar9);
      if (iVar12 < 1) {
        return;
      }
      if (object_00 != (Object *)0x0) {
        object_00[1].klass = (Object__Class *)0x0;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pIVar8 = (this->fields).slots;
        if (((pIVar8 != (InventorySlots *)0x0) &&
            (this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)(pIVar8->fields).inventorySlots,
            this_00 !=
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0)) &&
           (pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                ),
           pDVar13 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
            *)0x0)) {
          pDStack_14 = (pDVar13->fields)._dictionary;
          ppDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         **)0x0;
          uStack_16 = 0;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&pDStack_17 >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          if (pDStack_14 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            pDStack_17 = pDStack_14;
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          ppDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         **)((ulonglong)(uint)(pDStack_14->fields)._version << 0x20);
          uStack_16 = 0;
          uStack_18 = (ulonglong)ppDStack_15;
          apIStack_19[0] = (InventorySlot *)0x0;
          pDStack_17 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0;
          ppDStack_15 = &pDStack_14;
          IVar20 = 0;
          while (pDStack_14 !=
                 (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) {
            if (uStack_18._4_4_ != (pDStack_14->fields)._version) goto code_?;
            uVar5 = uStack_18 & 0xffffffff;
            do {
              if (pDStack_14 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              uVar3 = (uint)uVar5;
              if ((uint)(pDStack_14->fields)._count <= uVar3) {
                uStack_18 = CONCAT44(uStack_18._4_4_,(pDStack_14->fields)._count + 1);
                apIStack_19[0] = (InventorySlot *)0x0;
                if (object_00[1].klass == (Object__Class *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)StringLiteral_prioritizedItem_in_first_time_pl,
                             (MethodInfo *)0x0);
                  return;
                }
                pTVar1 = (this->fields).tabGroup;
                if (pTVar1 != (TabMenu *)0x0) {
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pTVar1,(MethodInfo *)0x0);
                  this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            (this_04,object_00,
                             MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar2,(BaseEventData *)0x0,this_04,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                            );
                  return;
                }
                goto code_?;
              }
              pDVar21 = (pDStack_14->fields)._entries;
              uVar5 = (ulonglong)(uVar3 + 1);
              uStack_18 = CONCAT44(uStack_18._4_4_,uVar3 + 1);
              if (pDVar21 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                             *)0x0) goto code_?;
              if ((uint)pDVar21->max_length <= uVar3) goto code_?;
            } while ((&pDVar21->vector[0].hashCode)[(longlong)(int)uVar3 * 6] < 0);
            apIStack_19[0] =
                 *(InventorySlot **)
                  ((longlong)&pDVar21->vector[0].key + (longlong)(int)uVar3 * 0x18 + 8);
            func_?(apIStack_19);
            if (apIStack_19[0] == (InventorySlot *)0x0) goto code_?;
            pGVar2 = InventorySlot::InventorySlot_get_Item(apIStack_19[0],(MethodInfo *)0x0);
            if (pGVar2 == (GameObject *)0x0) goto code_?;
            pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar2,
                                 PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                                );
            if (pOVar22 == (Object *)0x0) goto code_?;
            if (*(int *)((longlong)&pOVar22[10].klass + 4) == 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            else {
              IVar23 = 0;
              this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                        (this->fields).priorityDictionary;
              if (this_01 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)
              goto code_?;
              iVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Single]::
                      Dictionary_2_System_Int32Enum_System_Single__FindEntry
                                (this_01,*(Int32Enum__Enum *)((longlong)&pOVar22[10].klass + 4),
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                                 ->klass->rgctx_data[0x21].method);
              if (-1 < iVar24) {
                this_02 = (this->fields).priorityDictionary;
                if (this_02 == (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)0x0)
                goto code_?;
                IVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Int32Enum]::
                        Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_02,
                                   *(Int32Enum__Enum *)((longlong)&pOVar22[10].klass + 4),
                                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                                  );
              }
              if ((int)IVar20 < (int)IVar23) {
                object_00[1].klass = pOVar22[9].klass;
                func_?();
                IVar20 = IVar23;
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
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
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatableBazookaPopup____c);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_prioritizedItem_in_first_time_pl);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_item_in_inventory_missing_docume);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)
              FUN_?(TypeInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0);
  (this->fields).showing = 1;
  pTVar1 = (this->fields).tabGroup;
  if (pTVar1 != (TabMenu *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pTVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FirstTimeActivatableBazookaPopup____c);
    }
    this_03 = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0;
    if (this_03 == (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
      if (*(int *)&(TypeInfo__FirstTimeActivatableBazookaPopup____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FirstTimeActivatableBazookaPopup____c);
      }
      object = TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9;
      this_03 = (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                 MethodInfo__FirstTimeActivatableBazookaPopup____c___DoShowing_b__7_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0 = this_03;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)
                        &TypeInfo__FirstTimeActivatableBazookaPopup____c->static_fields->__9__7_0 >>
                       0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
              );
    pIVar8 = (this->fields).slots;
    if ((pIVar8 != (InventorySlots *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pIVar8,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      iVar12 = (*pcRam_?)(pvVar9);
      if (iVar12 < 1) {
        return;
      }
      if (object_00 != (Object *)0x0) {
        object_00[1].klass = (Object__Class *)0x0;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pIVar8 = (this->fields).slots;
        if (((pIVar8 != (InventorySlots *)0x0) &&
            (this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)(pIVar8->fields).inventorySlots,
            this_00 !=
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0)) &&
           (pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                                ),
           pDVar13 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
            *)0x0)) {
          pDStack_14 = (pDVar13->fields)._dictionary;
          ppDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         **)0x0;
          uStack_16 = 0;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&pDStack_17 >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          if (pDStack_14 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            pDStack_17 = pDStack_14;
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          ppDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         **)((ulonglong)(uint)(pDStack_14->fields)._version << 0x20);
          uStack_16 = 0;
          uStack_18 = (ulonglong)ppDStack_15;
          apIStack_19[0] = (InventorySlot *)0x0;
          pDStack_17 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0;
          ppDStack_15 = &pDStack_14;
          IVar20 = 0;
          while (pDStack_14 !=
                 (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) {
            if (uStack_18._4_4_ != (pDStack_14->fields)._version) goto code_?;
            uVar5 = uStack_18 & 0xffffffff;
            do {
              if (pDStack_14 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              uVar3 = (uint)uVar5;
              if ((uint)(pDStack_14->fields)._count <= uVar3) {
                uStack_18 = CONCAT44(uStack_18._4_4_,(pDStack_14->fields)._count + 1);
                apIStack_19[0] = (InventorySlot *)0x0;
                if (object_00[1].klass == (Object__Class *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                            ((Object *)StringLiteral_prioritizedItem_in_first_time_pl,
                             (MethodInfo *)0x0);
                  return;
                }
                pTVar1 = (this->fields).tabGroup;
                if (pTVar1 != (TabMenu *)0x0) {
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pTVar1,(MethodInfo *)0x0);
                  this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            (this_04,object_00,
                             MethodInfo__FirstTimeActivatableBazookaPopup____c__DisplayClass7_0___DoShowing_b__1_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar2,(BaseEventData *)0x0,this_04,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                            );
                  return;
                }
                goto code_?;
              }
              pDVar21 = (pDStack_14->fields)._entries;
              uVar5 = (ulonglong)(uVar3 + 1);
              uStack_18 = CONCAT44(uStack_18._4_4_,uVar3 + 1);
              if (pDVar21 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                             *)0x0) goto code_?;
              if ((uint)pDVar21->max_length <= uVar3) goto code_?;
            } while ((&pDVar21->vector[0].hashCode)[(longlong)(int)uVar3 * 6] < 0);
            apIStack_19[0] =
                 *(InventorySlot **)
                  ((longlong)&pDVar21->vector[0].key + (longlong)(int)uVar3 * 0x18 + 8);
            func_?(apIStack_19);
            if (apIStack_19[0] == (InventorySlot *)0x0) goto code_?;
            pGVar2 = InventorySlot::InventorySlot_get_Item(apIStack_19[0],(MethodInfo *)0x0);
            if (pGVar2 == (GameObject *)0x0) goto code_?;
            pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar2,
                                 PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                                );
            if (pOVar22 == (Object *)0x0) goto code_?;
            if (*(int *)((longlong)&pOVar22[10].klass + 4) == 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_item_in_inventory_missing_docume,(MethodInfo *)0x0)
              ;
            }
            else {
              IVar23 = 0;
              this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                        (this->fields).priorityDictionary;
              if (this_01 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)
              goto code_?;
              iVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Single]::
                      Dictionary_2_System_Int32Enum_System_Single__FindEntry
                                (this_01,*(Int32Enum__Enum *)((longlong)&pOVar22[10].klass + 4),
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__ContainsKey_MVWorldObjectDocumentationType_
                                 ->klass->rgctx_data[0x21].method);
              if (-1 < iVar24) {
                this_02 = (this->fields).priorityDictionary;
                if (this_02 == (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)0x0)
                goto code_?;
                IVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Int32Enum]::
                        Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_02,
                                   *(Int32Enum__Enum *)((longlong)&pOVar22[10].klass + 4),
                                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__get_Item_MVWorldObjectDocumentationType_
                                  );
              }
              if ((int)IVar20 < (int)IVar23) {
                object_00[1].klass = pOVar22[9].klass;
                func_?();
                IVar20 = IVar23;
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* FirstTimeActivatableBazookaPopup() */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::FirstTimeActivatableBazookaPopup__ctor
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Dictionary__
            );
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
  Dictionary_2_System_Int32Enum_System_Int32__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,4,10000,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
  Dictionary_2_System_Int32Enum_System_Int32__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,2,500,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
  Dictionary_2_System_Int32Enum_System_Int32__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,0x13,300,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
             ->klass->rgctx_data[0x22].method);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
  Dictionary_2_System_Int32Enum_System_Int32__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,3,200,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
             ->klass->rgctx_data[0x22].method);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
  Dictionary_2_System_Int32Enum_System_Int32__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,9,100,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_int>__Add_MVWorldObjectDocumentationType__int_
             ->klass->rgctx_data[0x22].method);
  bVar3 = iRam_? != 0;
  (this->fields).priorityDictionary =
       (Dictionary_2_MVWorldObjectDocumentationType_System_Int32_ *)this_00;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).priorityDictionary >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = cRam_? == '\0';
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (bVar3) {
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


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup::
     FirstTimeActivatableBazookaPopup_get_CanShow
               (FirstTimeActivatableBazookaPopup *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (obj->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
    pcRam_? = pcVar3;
    bVar5 = (*pcRam_?)(pvVar2);
    this_00 = (this->fields).slots;
    if ((this_00 != (InventorySlots *)0x0) &&
       (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0), obj_00 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (obj_00->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        bVar1 = (*pcVar3)();
        return bVar1;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        bVar1 = (*pcVar3)();
        return bVar1;
      }
      pcRam_? = pcVar3;
      iVar6 = (*pcRam_?)(pvVar2);
      bVar7 = 0;
      if (0 < iVar6) {
        bVar7 = bVar1 ^ 1;
      }
      return bVar7 & bVar5;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}

