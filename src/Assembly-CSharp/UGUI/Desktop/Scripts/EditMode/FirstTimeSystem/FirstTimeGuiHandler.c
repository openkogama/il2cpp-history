
/* Nullable`1[MVWorldObjectDocumentationType] GetDocumentationType(InventorySlot) */

Nullable_1_MVWorldObjectDocumentationType_
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler::
FirstTimeGuiHandler_GetDocumentationType
          (FirstTimeGuiHandler *this,InventorySlot *slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Nullable<MVWorldObjectDocumentationType>__Nullable_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  NStackX_10.hasValue = 0;
  NStackX_10._1_3_ = 0;
  NStackX_10.value = 0;
  if (slot != (InventorySlot *)0x0) {
    this_00 = InventorySlot::InventorySlot_get_Item(slot,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                         );
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
      if (pOVar1 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar1[1].klass != (Object__Class *)0x0) {
          NStackX_10 = (Nullable_1_MVWorldObjectDocumentationType_)
                       ((ulonglong)*(uint *)((longlong)&pOVar1[10].klass + 4) << 0x20);
          NStackX_10.hasValue = 1;
        }
      }
      return NStackX_10;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  NVar3 = (Nullable_1_MVWorldObjectDocumentationType_)(*pcVar2)();
  return NVar3;
}


/* Int32 GetItemSlot(MVWorldObjectDocumentationType, GameObject, Int32, InventorySlots, Int32) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler
        ::FirstTimeGuiHandler_GetItemSlot
                  (FirstTimeGuiHandler *this,MVWorldObjectDocumentationType__Enum docType,
                  GameObject *gameObject,int32_t itemCategory,InventorySlots *slots,
                  int32_t iteration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Count__
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
    FUN_?(&MethodInfo__System__Nullable<MVWorldObjectDocumentationType>__GetValueOrDefault__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<MVWorldObjectDocumentationType>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (slots != (InventorySlots *)0x0) {
    iVar1 = (slots->fields)._SlotCountPerPage_k__BackingField;
    if (cRam_? == '\0') {
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
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0___OpenPage_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    object = (Object *)FUN_?();
    if (object != (Object *)0x0) {
      *(int32_t *)&object[1].klass = itemCategory;
      *(int *)((longlong)&object[1].klass + 4) = iVar1 * iteration;
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0___OpenPage_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (gameObject,(BaseEventData *)0x0,this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                );
      this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(slots->fields).inventorySlots;
      if ((this_00 ==
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) || ((this_00->fields)._count == (this_00->fields)._freeCount)) {
        iVar2 = 0;
      }
      else {
        pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                           );
        if (pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) goto code_?;
        pDStack_4 = (pDVar3->fields)._dictionary;
        ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       **)0x0;
        uStack_6 = 0;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        if (pDStack_4 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          pDStack_8 = pDStack_4;
          FUN_?();
          pcVar12 = (code *)swi(3);
          iVar2 = (*pcVar12)();
          return iVar2;
        }
        ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       **)((ulonglong)(uint)(pDStack_4->fields)._version << 0x20);
        uStack_6 = 0;
        uStack_13 = (ulonglong)ppDStack_5;
        pIStack_14 = (InventorySlot *)0x0;
        pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0;
        ppDStack_5 = &pDStack_4;
        do {
          do {
            do {
              if (pDStack_4 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if (uStack_13._4_4_ != (pDStack_4->fields)._version) goto code_?;
              uVar11 = uStack_13 & 0xffffffff;
              do {
                if (pDStack_4 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                uVar7 = (uint)uVar11;
                if ((uint)(pDStack_4->fields)._count <= uVar7) {
                  uStack_13 = CONCAT44(uStack_13._4_4_,(pDStack_4->fields)._count + 1);
                  pIStack_14 = (InventorySlot *)0x0;
                  iVar2 = FirstTimeGuiHandler_GetItemSlot
                                    (this,docType,gameObject,itemCategory,slots,iteration + 1,
                                     (MethodInfo *)0x0);
                  return iVar2;
                }
                pDVar15 = (pDStack_4->fields)._entries;
                uVar11 = (ulonglong)(uVar7 + 1);
                uStack_13 = CONCAT44(uStack_13._4_4_,uVar7 + 1);
                if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                               *)0x0) goto code_?;
                if ((uint)pDVar15->max_length <= uVar7) goto code_?;
              } while ((&pDVar15->vector[0].hashCode)[(longlong)(int)uVar7 * 6] < 0);
              pIStack_14 = *(InventorySlot **)
                            ((longlong)&pDVar15->vector[0].key + (longlong)(int)uVar7 * 0x18 + 8);
              func_?();
              slot = pIStack_14;
              if (pIStack_14 == (InventorySlot *)0x0) goto code_?;
              pGVar16 = InventorySlot::InventorySlot_get_Item(pIStack_14,(MethodInfo *)0x0);
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
            } while (pGVar16 == (GameObject *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
          } while ((pGVar16->fields)._.m_CachedPtr == (void *)0x0);
          NVar17 = FirstTimeGuiHandler_GetDocumentationType(this,slot,(MethodInfo *)0x0);
        } while ((NVar17.hasValue == 0) || ((NVar17.hasValue & NVar17.value == docType) == 0));
        iVar2 = (slot->fields)._AbsoluteSlot_k__BackingField;
      }
      return iVar2;
    }
  }
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
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  iVar2 = (*pcVar12)();
  return iVar2;
}


/* Void HighlightInCategoryAtSlot(GameObject, Int32, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler::
     FirstTimeGuiHandler_HighlightInCategoryAtSlot
               (FirstTimeGuiHandler *this,GameObject *gameObject,int32_t itemCategory,
               int32_t itemSlot,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass1_0___HighlightInCategoryAtSlot_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass1_0
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass1_0
                        );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int32_t *)&object[1].klass = itemCategory;
  *(int32_t *)((longlong)&object[1].klass + 4) = itemSlot;
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass1_0___HighlightInCategoryAtSlot_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (gameObject,
             (IList_1_UnityEngine_Transform_ *)
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar8 = (pLVar3->fields)._items;
        if (pTVar8 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar8->max_length <= uVar5) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar8->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        target = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar9 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (target,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar9 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OpenPage(GameObject, Int32, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler::
     FirstTimeGuiHandler_OpenPage
               (FirstTimeGuiHandler *this,GameObject *gameObject,int32_t itemCategory,
               int32_t slotsSlotCountPerPage,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0___OpenPage_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0
                        );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int32_t *)&object[1].klass = itemCategory;
  *(int32_t *)((longlong)&object[1].klass + 4) = slotsSlotCountPerPage;
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass2_0___OpenPage_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (gameObject,
             (IList_1_UnityEngine_Transform_ *)
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar8 = (pLVar3->fields)._items;
        if (pTVar8 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar8->max_length <= uVar5) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar8->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        target = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar9 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (target,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar9 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OpenTab(GameObject, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::FirstTimeGuiHandler::
     FirstTimeGuiHandler_OpenTab
               (FirstTimeGuiHandler *this,GameObject *gameObject,int32_t itemCategory,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass0_0___OpenTab_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass0_0
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass0_0
                        );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int32_t *)&object[1].klass = itemCategory;
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__UGUI__Desktop__Scripts__EditMode__FirstTimeSystem__FirstTimeGuiHandler____c__DisplayClass0_0___OpenTab_b__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (gameObject,
             (IList_1_UnityEngine_Transform_ *)
             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
             s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar8 = (pLVar3->fields)._items;
        if (pTVar8 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar8->max_length <= uVar5) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar8->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        target = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar9 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (target,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar9 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

