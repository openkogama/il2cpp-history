
/* Int32 GetItemAmount() */

int32_t Assembly-CSharp.dll::TierUnlockedPopupContentLoot::
        TierUnlockedPopupContentLoot_GetItemAmount
                  (TierUnlockedPopupContentLoot *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  auStack_8._0_4_ =
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0;
  auStack_8._4_4_ = 0;
  auStack_8._8_4_ = 0;
  auStack_8._12_4_ = (Object *)0x0;
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar9 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar9->fields)._GameTierShopRepository_k__BackingField;
    pDStack_10 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)CONCAT31(pDStack_10._1_3_,(this->fields).unlockedGamePassTier);
    if (this_00 != (GameTierShopRepository *)0x0) {
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)
                GameTierShopRepository::GameTierShopRepository_GetTierItemData
                          (this_00,(GamePassTier__Enum)pDStack_10,(MethodInfo *)0x0);
      pDVar11 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)func_?();
      pDStack_10 = pDVar11;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)pDVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                );
      pDStack_12 = pDVar11;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            (auStack_8 + 0x10),this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                           );
        DStack_7._dictionary = pDVar13->_dictionary;
        DStack_7._version = pDVar13->_version;
        DStack_7._index = pDVar13->_index;
        DStack_7._current.key = (pDVar13->_current).key;
        DStack_7._16_8_ = *(undefined8 *)&(pDVar13->_current).value;
        DStack_14._version = 0;
        uStack_1 = 1;
        DStack_14._currentValue = (Object *)&DStack_7;
        while( true ) {
          bVar15 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                            );
          if (bVar15 == 0) break;
          value = DStack_7._current.value;
          IStack_16 = DStack_7._current.key;
          if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              DStack_7._current.value ==
              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          if (0 < ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
                  ((int)DStack_7._current.value + 8))->_size) {
            item = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              DStack_7._current.value,0,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                             );
            in_stack_6 = (MethodInfo **)this;
            bVar15 = TierUnlockedPopupContentLoot_IsTierItemALootItem
                              (this,(MVWorldObjectClient *)item,(MethodInfo *)0x0);
            if (bVar15 != 0) {
              if (pDStack_10 ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_10,IStack_16,value,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                        );
            }
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        pDVar11 = pDStack_10;
        uStack_1 = 0xffffffff;
        pDVar17 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0;
        pDStack_10 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)0x0;
        if (pDVar11 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) {
          this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                              (pDVar11,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                              );
          if (this_02 !=
              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar18 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                     ::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                               (&DStack_14,this_02,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                               );
            auStack_8._0_4_ = pDVar18->_dictionary;
            auStack_8._4_4_ = pDVar18->_index;
            auStack_8._8_4_ = pDVar18->_version;
            auStack_8._12_4_ = pDVar18->_currentValue;
            DStack_14._version = 0;
            uStack_1 = 4;
            DStack_14._currentValue = (Object *)auStack_8;
            while( true ) {
              bVar15 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                  *)auStack_8,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                                );
              if (bVar15 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)auStack_8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                           ,unaff_ESI);
                *unaff_FS_OFFSET = uStack_3;
                return (int32_t)pDVar17;
              }
              if ((Object *)auStack_8._12_4_ == (Object *)0x0) break;
              pDVar17 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)(((Object *)(auStack_8._12_4_ + 8))->monitor + (int)&pDVar17->klass);
              pDStack_10 = pDVar17;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  iVar21 = (*pcVar20)();
  return iVar21;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentLoot::TierUnlockedPopupContentLoot_Initialize
               (TierUnlockedPopupContentLoot *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  (this->fields).unlockedGamePassTier = (uint8_t)unlockedGamePassTier;
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_x_0__IN_GAME_LOOT_UNLOCKED_);
    cRam_? = '\x01';
  }
  format = TM::TM__(StringLiteral_x_0__IN_GAME_LOOT_UNLOCKED_,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._.titleText;
  unlockedGamePassTier = TierUnlockedPopupContentLoot_GetItemAmount(this,(MethodInfo *)0x0);
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&unlockedGamePassTier);
  pSStack2 = mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    pIStack3 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    onDisplayDoneCallback = (UnityAction *)&UNK_?;
    method = (MethodInfo *)pTVar1;
    (*(code *)(pTVar1->klass->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsTierItemALootItem(MVWorldObjectClient) */

bool Assembly-CSharp.dll::TierUnlockedPopupContentLoot::
     TierUnlockedPopupContentLoot_IsTierItemALootItem
               (TierUnlockedPopupContentLoot *this,MVWorldObjectClient *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPickupItemBase);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    cRam_? = '\x01';
  }
  if (item == (MVWorldObjectClient *)0x0) {
    return 0;
  }
  pMVar1 = item->klass;
  if (((TypeInfo__MVPickupItemBase->_1).naturalAligment <= (pMVar1->_1).naturalAligment) &&
     ((MVPickupItemBase__Class *)
      (pMVar1->_1).typeHierarchy[(TypeInfo__MVPickupItemBase->_1).naturalAligment - 1] ==
      TypeInfo__MVPickupItemBase)) {
    return 1;
  }
  if (((TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment <= (pMVar1->_1).naturalAligment)
     && ((MVWorldObjectSpawnerVehicle__Class *)
         (pMVar1->_1).typeHierarchy[(TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment - 1]
         == TypeInfo__MVWorldObjectSpawnerVehicle)) {
    return item != (MVWorldObjectClient *)0x0;
  }
  return 0;
}


/* Void UpdateItemAmountText() */

void Assembly-CSharp.dll::TierUnlockedPopupContentLoot::
     TierUnlockedPopupContentLoot_UpdateItemAmountText
               (TierUnlockedPopupContentLoot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_x_0__IN_GAME_LOOT_UNLOCKED_);
    cRam_? = '\x01';
  }
  format = TM::TM__(StringLiteral_x_0__IN_GAME_LOOT_UNLOCKED_,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._.titleText;
  iStack_2 = TierUnlockedPopupContentLoot_GetItemAmount(this,(MethodInfo *)0x0);
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

