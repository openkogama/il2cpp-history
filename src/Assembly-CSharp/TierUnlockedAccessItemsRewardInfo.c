
/* Void Initialize(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::TierUnlockedAccessItemsRewardInfo::
     TierUnlockedAccessItemsRewardInfo_Initialize
               (TierUnlockedAccessItemsRewardInfo *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).tier = (uint8_t)tier;
  (this->fields).tierShopData = tierShopData;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).tierShopData >> 0xc);
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
  uStack_6 = 0x8069f240;
  iStack_7 = 1;
  TierUnlockedItemsRewardInfo::TierUnlockedItemsRewardInfo_ChangeBackground
            ((TierUnlockedItemsRewardInfo *)this,tier & 0xff,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = 0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).tierShopData;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                            ),
        pDVar8 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar2 = uStack_6;
code_?:
    uStack_6 = uVar2;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    auStack_9 = (undefined1  [8])(pDVar8->fields)._dictionary;
    puStack_10 = (undefined4 *)0x0;
    uStack_11 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)auStack_9 >> 0xc);
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
    if (auStack_9 == (undefined1  [8])0x0) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iStack_7 = (((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)auStack_9)->fields)._version;
    uStack_11 = 0;
    auStack_9._4_4_ = (undefined4)((ulonglong)auStack_9 >> 0x20);
    uStack_13 = auStack_9._0_4_;
    uStack_14 = auStack_9._4_4_;
    uStack_6 = 0;
    lStack_15 = 0;
    auStack_9 = (undefined1  [8])0x0;
    puStack_10 = &uStack_13;
    while (lVar16 = CONCAT44(uStack_14,uStack_13), lVar16 != 0) {
      if (iStack_7 != *(int *)(lVar16 + 0x2c)) goto code_?;
      do {
        if (lVar16 == 0) goto code_?;
        if (*(uint *)(lVar16 + 0x20) <= uStack_6) {
          uStack_6 = *(int *)(lVar16 + 0x20) + 1;
          lStack_15 = 0;
          pTVar17 = (this->fields).itemAmountText;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_9 = (undefined1  [8])0x0;
          puStack_10 = (undefined4 *)0x0;
          pSVar18 = mscorlib.dll::System::Number::Number_FormatInt32
                             (value,(ReadOnlySpan_1_Char_ *)auStack_9,(IFormatProvider *)0x0,
                              (MethodInfo *)0x0);
          pSVar18 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_x,pSVar18,(MethodInfo *)0x0);
          if (pTVar17 != (Text *)0x0) {
            (*(pTVar17->klass->vtable).set_text.methodPtr)
                      (pTVar17,pSVar18,(pTVar17->klass->vtable).set_text.method);
            return;
          }
          goto code_?;
        }
        lVar19 = *(longlong *)(lVar16 + 0x18);
        lVar20 = (longlong)(int)uStack_6;
        uVar2 = uStack_6 + 1;
        if (lVar19 == 0) goto code_?;
        bVar1 = *(uint *)(lVar19 + 0x18) <= uStack_6;
        uStack_6 = uVar2;
        if (bVar1) goto code_?;
      } while (*(int *)(lVar19 + 0x20 + lVar20 * 0x18) < 0);
      lStack_15 = *(longlong *)(lVar19 + (lVar20 + 2) * 0x18);
      func_?();
      if (lStack_15 == 0) goto code_?;
      value = value + *(int *)(lStack_15 + 0x18);
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnSeeItemsButtonPressed() */

void Assembly-CSharp.dll::TierUnlockedAccessItemsRewardInfo::
     TierUnlockedAccessItemsRewardInfo_OnSeeItemsButtonPressed
               (TierUnlockedAccessItemsRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockAccessItemsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockAccessItemsPopup>_TierUnlockAccessItemsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockedAccessItemsRewardInfo____c__DisplayClass8_0___OnSeeItemsButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockedAccessItemsRewardInfo____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
            FUN_?(TypeInfo__TierUnlockedAccessItemsRewardInfo____c__DisplayClass8_0);
  original = (this->fields).tierUnlockedItemsPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       TierUnlockAccessItemsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockAccessItemsPopup>_TierUnlockAccessItemsPopup_
                      );
  if (pOVar1 != (Object *)0x0) {
    bVar3 = iRam_? != 0;
    pOVar1[1].klass = pOVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,pOVar1,
               MethodInfo__TierUnlockedAccessItemsRewardInfo____c__DisplayClass8_0___OnSeeItemsButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar2 = pOVar1[1].klass;
    if (pOVar2 != (Object__Class *)0x0) {
      tierShopData = (this->fields).tierShopData;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                      ,(this->fields).tier);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar8 = TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_GetSortedData
                         ((TierUnlockAccessItemsPopup *)pOVar2,tierShopData,(MethodInfo *)0x0);
      uVar4 = 0;
      if (pLVar8 != (List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)0x0) {
        lVar9 = 0;
        while( true ) {
          if ((pLVar8->fields)._size <= (int)uVar4) {
            return;
          }
          pTVar10 = *(TierUnlockedItemElement **)&(pOVar2->_0).byval_arg.attrs;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pTVar10 = (TierUnlockedItemElement *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pTVar10,
                              TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                             );
          if (pTVar10 == (TierUnlockedItemElement *)0x0) break;
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
          pvVar11 = (pTVar10->fields)._._._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
          pvVar11 = (void *)(*pcRam_?)(pvVar11);
          pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar11,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          pIVar14 = (pOVar2->_0).byval_arg.data.generic_class;
          if (pOVar1 == (Object *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar15 = pOVar1[1].klass;
          if (pOVar15 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pIVar14 == (Il2CppGenericClass *)0x0) {
            pvVar11 = (void *)0x0;
          }
          else {
            pvVar11 = (((Transform__Fields *)&(pIVar14->context).method_inst)->_)._.m_CachedPtr;
          }
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(pOVar15,pvVar11);
          if ((uint)(pLVar8->fields)._size <= uVar4) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar16 = (pLVar8->fields)._items;
          if (pTVar16 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0) break;
          if ((uint)pTVar16->max_length <= uVar4) {
code_?:
            FUN_?();
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          MStack_17 = (MVTeam__Enum)
                      *(undefined8 *)((longlong)&pTVar16->vector[0].teamRequirement + lVar9);
          TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
                    (pTVar10,MStack_17,(MethodInfo *)0x0);
          if ((uint)(pLVar8->fields)._size <= uVar4) goto code_?;
          pTVar16 = (pLVar8->fields)._items;
          if (pTVar16 == (TierUnlockAccessItemsPopup_AccessItemData__Array *)0x0) break;
          if ((uint)pTVar16->max_length <= uVar4) goto code_?;
          TierUnlockedItemElement::TierUnlockedItemElement_Initialize
                    (pTVar10,*(List_1_MVWorldObjectClient_ **)
                             ((longlong)&pTVar16->vector[0].worldObjects + lVar9),uVar4,
                     (MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          lVar9 = lVar9 + 0x18;
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateItemAmountText() */

void Assembly-CSharp.dll::TierUnlockedAccessItemsRewardInfo::
     TierUnlockedAccessItemsRewardInfo_UpdateItemAmountText
               (TierUnlockedAccessItemsRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = 0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).tierShopData;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar2 = uStack_3;
code_?:
    uStack_3 = uVar2;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    auStack_4 = (undefined1  [8])(pDVar1->fields)._dictionary;
    puStack_5 = (undefined4 *)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)auStack_4 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (auStack_4 == (undefined1  [8])0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iStack_11 = (((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)auStack_4)->fields)._version;
    uStack_6 = 0;
    auStack_4._4_4_ = (undefined4)((ulonglong)auStack_4 >> 0x20);
    uStack_12 = auStack_4._0_4_;
    uStack_13 = auStack_4._4_4_;
    uStack_3 = 0;
    lStack_14 = 0;
    auStack_4 = (undefined1  [8])0x0;
    puStack_5 = &uStack_12;
    while (lVar15 = CONCAT44(uStack_13,uStack_12), lVar15 != 0) {
      if (iStack_11 != *(int *)(lVar15 + 0x2c)) goto code_?;
      do {
        if (lVar15 == 0) goto code_?;
        if (*(uint *)(lVar15 + 0x20) <= uStack_3) {
          uStack_3 = *(int *)(lVar15 + 0x20) + 1;
          lStack_14 = 0;
          pTVar16 = (this->fields).itemAmountText;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          auStack_4 = (undefined1  [8])0x0;
          puStack_5 = (undefined4 *)0x0;
          pSVar17 = mscorlib.dll::System::Number::Number_FormatInt32
                             (value,(ReadOnlySpan_1_Char_ *)auStack_4,(IFormatProvider *)0x0,
                              (MethodInfo *)0x0);
          pSVar17 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_x,pSVar17,(MethodInfo *)0x0);
          if (pTVar16 != (Text *)0x0) {
            (*(pTVar16->klass->vtable).set_text.methodPtr)
                      (pTVar16,pSVar17,(pTVar16->klass->vtable).set_text.method);
            return;
          }
          goto code_?;
        }
        lVar18 = *(longlong *)(lVar15 + 0x18);
        lVar19 = (longlong)(int)uStack_3;
        uVar2 = uStack_3 + 1;
        if (lVar18 == 0) goto code_?;
        bVar20 = *(uint *)(lVar18 + 0x18) <= uStack_3;
        uStack_3 = uVar2;
        if (bVar20) goto code_?;
      } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
      lStack_14 = *(longlong *)(lVar18 + (lVar19 + 2) * 0x18);
      func_?();
      if (lStack_14 == 0) goto code_?;
      value = value + *(int *)(lStack_14 + 0x18);
    }
  }
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

