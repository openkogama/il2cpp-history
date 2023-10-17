
/* Void Initialize(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::TierUnlockedAccessItemsRewardInfo::
     TierUnlockedAccessItemsRewardInfo_Initialize
               (TierUnlockedAccessItemsRewardInfo *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  (this->fields).tierShopData = tierShopData;
  (this->fields).tier = (undefined1)tier;
  func_?(&(this->fields).tierShopData,tierShopData);
  pGVar1 = (this->fields).backgroundTier1;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier1)) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar1,(MethodInfo *)0x0);
      if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier2)) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,(undefined1)tier == GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar1,(MethodInfo *)0x0);
        if ((bool)bVar2 != ((undefined1)tier == GamePassTier__Enum_Tier3)) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
        }
        TierUnlockedAccessItemsRewardInfo_UpdateItemAmountText(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSeeItemsButtonPressed() */

void Assembly-CSharp.dll::TierUnlockedAccessItemsRewardInfo::
     TierUnlockedAccessItemsRewardInfo_OnSeeItemsButtonPressed
               (TierUnlockedAccessItemsRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    TierUnlockAccessItemsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockAccessItemsPopup>_TierUnlockAccessItemsPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TierUnlockedAccessItemsRewardInfo____c__DisplayClass8_0___OnSeeItemsButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockedAccessItemsRewardInfo____c__DisplayClass8_0);
    cRam_? = '\x01';
  }
  this_00 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__TierUnlockedAccessItemsRewardInfo____c__DisplayClass8_0);
  if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    pTVar1 = (this->fields).tierUnlockedItemsPopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar2 = (MonoBehaviour *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pTVar1,
                        TierUnlockAccessItemsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockAccessItemsPopup>_TierUnlockAccessItemsPopup_
                       );
    (this_00->fields).m_CoroutineContainer = pMVar2;
    func_?(&this_00->fields,pMVar2);
    pGStack_3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
                 MethodInfo__TierUnlockedAccessItemsRewardInfo____c__DisplayClass8_0___OnSeeItemsButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGStack_3,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pTVar1 = (TierUnlockAccessItemsPopup *)(this_00->fields).m_CoroutineContainer;
      tierShopData = (this->fields).tierShopData;
      if (pTVar1 != (TierUnlockAccessItemsPopup *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Count__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                         );
          func_?(&
                          TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  TierUnlockAccessItemsPopup::TierUnlockAccessItemsPopup_GetSortedData
                            (pTVar1,tierShopData,(MethodInfo *)0x0);
        pGStack_3 = (GameObject *)0x0;
        if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          while( true ) {
            if ((this_01->fields)._size <= (int)pGStack_3) {
              return;
            }
            pTVar4 = (pTVar1->fields).tierUnlockedItemElementPrefab;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pTVar4 = (TierUnlockedItemElement *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pTVar4,
                                TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                               );
            if (pTVar4 == (TierUnlockedItemElement *)0x0) break;
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pTVar4,(MethodInfo *)0x0);
            if (this_02 == (Transform *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_02,(pTVar1->fields).itemElementContainer,0,(MethodInfo *)0x0);
            pUVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                     UnitySynchronizationContext+WorkRequest]::
                     List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                               (&UStack_6,this_01,(int32_t)pGStack_3,
                                MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                               );
            uStack_7._0_4_ = pUVar5->m_DelagateCallback;
            uStack_7._4_4_ = pUVar5->m_DelagateState;
            TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
                      (pTVar4,(MVTeam__Enum)pUVar5->m_WaitHandle,(MethodInfo *)0x0);
            pUVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                     UnitySynchronizationContext+WorkRequest]::
                     List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                               (&UStack_8,this_01,(int32_t)pGStack_3,
                                MethodInfo__System__Collections__Generic__List<TierUnlockAccessItemsPopup::AccessItemData>__get_Item_int_
                               );
            uStack_9._0_4_ = pUVar5->m_DelagateCallback;
            uStack_9._4_4_ = pUVar5->m_DelagateState;
            TierUnlockedItemElement::TierUnlockedItemElement_Initialize
                      (pTVar4,(List_1_MVWorldObjectClient_ *)uStack_9._4_4_,(int32_t)pGStack_3,
                       (MethodInfo *)0x0);
            pGStack_3 = (GameObject *)((int)&pGStack_3->klass + 1);
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateItemAmountText() */

void Assembly-CSharp.dll::TierUnlockedAccessItemsRewardInfo::
     TierUnlockedAccessItemsRewardInfo_UpdateItemAmountText
               (TierUnlockedAccessItemsRewardInfo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                   );
    in_stack_6 = &StringLiteral_x;
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._index = 0;
  DStack_7._version = 0;
  DStack_7._currentValue = (Object *)0x0;
  IStack_8.m_value = 0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).tierShopData;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_10,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                         );
      DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar9->_dictionary;
      DStack_7._index = pDVar9->_index;
      DStack_7._version = pDVar9->_version;
      DStack_7._currentValue = pDVar9->_currentValue;
      DStack_10._version = 0;
      uStack_1 = 1;
      DStack_10._currentValue = (Object *)&DStack_7;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                          );
        if (bVar11 == 0) break;
        if (DStack_7._currentValue == (Object *)0x0) goto code_?;
        IStack_8.m_value = (int32_t)(DStack_7._currentValue[1].monitor + IStack_8.m_value);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      uStack_1 = 0xffffffff;
      pTVar12 = (this->fields).itemAmountText;
      pSVar13 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
      pSVar13 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_x,pSVar13,(MethodInfo *)0x0);
      if (pTVar12 != (Text *)0x0) {
        (*(pTVar12->klass->vtable).set_text.methodPtr)
                  (pTVar12,pSVar13,(pTVar12->klass->vtable).set_text.method);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

