
/* Void Initialize(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::TierUnlockedItemsPopup::TierUnlockedItemsPopup_Initialize
               (TierUnlockedItemsPopup *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                  ,CONCAT44(in_register_00000014,tier));
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
    FUN_?(&
                  TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  itemIndex = 0;
  if ((tierShopData ==
       (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) ||
     (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                         ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)tierShopData,
                          MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                         ),
     pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = (pDVar1->fields)._dictionary;
  puStack_4 = (undefined4 *)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (uStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_10 = (uStack_3->fields)._version;
  uStack_5 = 0;
  uStack_3._4_4_ = (undefined4)((ulonglong)uStack_3 >> 0x20);
  uStack_11 = (undefined4)uStack_3;
  uStack_12 = uStack_3._4_4_;
  uStack_13 = 0;
  apLStack_14[0] = (List_1_MVWorldObjectClient_ *)0x0;
  uStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_4 = &uStack_11;
  do {
    lVar15 = CONCAT44(uStack_12,uStack_11);
    if (lVar15 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_10 != *(int *)(lVar15 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar15 == 0) goto code_?;
      if (*(uint *)(lVar15 + 0x20) <= uStack_13) {
        return;
      }
      lVar16 = *(longlong *)(lVar15 + 0x18);
      lVar17 = (longlong)(int)uStack_13;
      uVar6 = uStack_13 + 1;
      if (lVar16 == 0) goto code_?;
      if (*(uint *)(lVar16 + 0x18) <= uStack_13) {
        uStack_13 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_13 = uVar6;
    } while (*(int *)(lVar16 + 0x20 + lVar17 * 0x18) < 0);
    apLStack_14[0] = *(List_1_MVWorldObjectClient_ **)(lVar16 + (lVar17 + 2) * 0x18);
    func_?(apLStack_14);
    tierShopItemData = apLStack_14[0];
    original = (this->fields).tierUnlockedItemElementPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    unaff_R14 = (TierUnlockedItemElement *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                          );
    if (unaff_R14 == (TierUnlockedItemElement *)0x0) {
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
    tierShopData = (unaff_R14->fields)._._._._.m_CachedPtr;
    if (tierShopData ==
        (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_R14,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
code_?:
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18);
code_?:
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)tierShopData,(MethodInfo *)0x0);
code_?:
      FUN_?();
      goto code_?;
    }
    pcRam_? = pcVar2;
    gcHandlePtr = (void *)(*pcRam_?)(tierShopData);
    tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                   UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (gcHandlePtr,
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
    pTVar19 = (this->fields).itemElementContainer;
    if (tierShopData ==
        (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0)
    goto code_?;
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
    pIVar20 = (tierShopData->fields)._buckets;
    if (pIVar20 == (Int32__Array *)0x0) goto code_?;
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    if (pTVar19 == (Transform *)0x0) {
      tierShopData = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
    }
    else {
      tierShopData = (pTVar19->fields)._._.m_CachedPtr;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar2;
    (*pcRam_?)(pIVar20,tierShopData,0);
    TierUnlockedItemElement::TierUnlockedItemElement_Initialize
              (unaff_R14,tierShopItemData,itemIndex,(MethodInfo *)0x0);
    itemIndex = itemIndex + 1;
  } while( true );
}

