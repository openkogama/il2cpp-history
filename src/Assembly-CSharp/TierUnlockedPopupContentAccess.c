
/* Int32 GetItemAmount() */

int32_t Assembly-CSharp.dll::TierUnlockedPopupContentAccess::
        TierUnlockedPopupContentAccess_GetItemAmount
                  (TierUnlockedPopupContentAccess *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
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
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  lStack_4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 != (MVGameControllerBase *)0x0) &&
      (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar6->fields)._GameTierShopRepository_k__BackingField,
     this_00 != (GameTierShopRepository *)0x0)) {
    pDVar7 = (Dictionary_2_System_UInt32_System_Object_ *)
             GameTierShopRepository::GameTierShopRepository_GetTierItemData
                       (this_00,(uint)(this->fields).unlockedGamePassTier,(MethodInfo *)0x0);
    pDVar8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)pDVar8,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
              );
    if (pDVar7 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&pDStack_10 >> 0xc);
        lVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      iVar15 = 0;
      ppDStack_16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)(ulonglong)(uint)(pDVar7->fields)._version;
      uStack_17 = 2;
      uStack_18 = 0;
      uStack_19 = 0;
      aDStack_20[0]._8_8_ = ppDStack_16;
      aDStack_20[0]._current.key = 0;
      aDStack_20[0]._current._4_4_ = 0;
      aDStack_20[0]._current.value = (Object *)0x0;
      aDStack_20[0]._getEnumeratorRetType = 2;
      aDStack_20[0]._36_4_ = 0;
      pDStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0;
      ppDStack_16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)aDStack_20;
      aDStack_20[0]._dictionary = pDVar7;
      while (bVar21 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (aDStack_20,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                               ), value = aDStack_20[0]._current.value, bVar21 != 0) {
        key = (Int32Enum__Enum)aDStack_20[0]._current._0_8_;
        if (aDStack_20[0]._current.value == (Object *)0x0) goto code_?;
        if (0 < *(int *)&aDStack_20[0]._current.value[1].monitor) {
          item = (MVWorldObjectClient *)FUN_?(aDStack_20[0]._current.value,0);
          uVar22 = 0;
          bVar21 = TierUnlockedPopupContentAccess_IsTierItemAnAccessItem
                            (this,key,item,(MethodInfo *)0x0);
          if (bVar21 != 0) {
            if (pDVar8 ==
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar8,key,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar22 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                       ->klass->rgctx_data[0x22].method);
          }
        }
      }
      if ((pDVar8 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) && (pDVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                              UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                              Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                        (pDVar8,
                                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                                        ),
                   pDVar23 !=
                   (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0)) {
        pDVar8 = (pDVar23->fields)._dictionary;
        ppDStack_16 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       **)0x0;
        uStack_18 = 0;
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&pDStack_10 >> 0xc);
          lVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar13 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        if (pDVar8 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          pDStack_10 = pDVar8;
          FUN_?();
          pcVar24 = (code *)swi(3);
          iVar25 = (*pcVar24)();
          return iVar25;
        }
        iStack_3 = (pDVar8->fields)._version;
        uStack_18 = 0;
        uStack_2 = 0;
        lStack_4 = 0;
        pDStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0;
        ppDStack_16 = &pDStack_1;
        pDStack_1 = pDVar8;
        while (pDStack_1 !=
               (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0) {
          if (iStack_3 != (pDStack_1->fields)._version) goto code_?;
          do {
            if (pDStack_1 ==
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) goto code_?;
            if ((uint)(pDStack_1->fields)._count <= uStack_2) {
              return iVar15;
            }
            pDVar26 = (pDStack_1->fields)._entries;
            lVar11 = (longlong)(int)uStack_2;
            uVar9 = uStack_2 + 1;
            if (pDVar26 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                           *)0x0) goto code_?;
            bVar14 = (uint)pDVar26->max_length <= uStack_2;
            uStack_2 = uVar9;
            if (bVar14) goto code_?;
          } while ((&pDVar26->vector[0].hashCode)[lVar11 * 6] < 0);
          lStack_4 = *(longlong *)((longlong)&pDVar26->vector[0].key + lVar11 * 0x18 + 8);
          func_?();
          if (lStack_4 == 0) goto code_?;
          iVar15 = iVar15 + *(int *)(lStack_4 + 0x18);
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar9 = uStack_2;
code_?:
  uStack_2 = uVar9;
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
  pcVar24 = (code *)swi(3);
  iVar25 = (*pcVar24)();
  return iVar25;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentAccess::TierUnlockedPopupContentAccess_Initialize
               (TierUnlockedPopupContentAccess *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  (this->fields).unlockedGamePassTier = (uint8_t)unlockedGamePassTier;
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
            ((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_x_0__IN_GAME_ACCESS_UNLOCKED_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_x_0__IN_GAME_ACCESS_UNLOCKED_,(MethodInfo *)0x0);
  pTVar2 = (this->fields)._.titleText;
  aiStackX_10[0] = TierUnlockedPopupContentAccess_GetItemAmount(this,(MethodInfo *)0x0);
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_10);
  PStack_3._arg0 = (Object *)0x0;
  PStack_3._arg1 = (Object *)0x0;
  PStack_3._arg2 = (Object *)0x0;
  PStack_3._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_3,arg0,(MethodInfo *)0x0);
  PStack_4._arg0 = PStack_3._arg0;
  PStack_4._arg1 = PStack_3._arg1;
  PStack_4._arg2 = PStack_3._arg2;
  PStack_4._args = PStack_3._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_4,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar1,(pTVar2->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsTierItemAnAccessItem(MVWorldObjectDocumentationType, MVWorldObjectClient) */

bool Assembly-CSharp.dll::TierUnlockedPopupContentAccess::
     TierUnlockedPopupContentAccess_IsTierItemAnAccessItem
               (TierUnlockedPopupContentAccess *this,
               MVWorldObjectDocumentationType__Enum worldObjectType,MVWorldObjectClient *item,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVTeleporter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((worldObjectType != MVWorldObjectDocumentationType__Enum_Lever) &&
     (worldObjectType != MVWorldObjectDocumentationType__Enum_PressurePlate)) {
    pMVar1 = (MVWorldObjectClient *)0x0;
    if (item != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVTeleporter->_1).naturalAligment;
      if (((item->klass->_1).naturalAligment < bVar2) ||
         (bVar3 = true,
         (MVTeleporter__Class *)(item->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
         TypeInfo__MVTeleporter)) {
        bVar3 = false;
      }
      if (bVar3) {
        pMVar1 = item;
      }
    }
    return pMVar1 != (MVWorldObjectClient *)0x0;
  }
  return 1;
}


/* Void UpdateItemAmountText() */

void Assembly-CSharp.dll::TierUnlockedPopupContentAccess::
     TierUnlockedPopupContentAccess_UpdateItemAmountText
               (TierUnlockedPopupContentAccess *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_x_0__IN_GAME_ACCESS_UNLOCKED_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_x_0__IN_GAME_ACCESS_UNLOCKED_,(MethodInfo *)0x0);
  pTVar2 = (this->fields)._.titleText;
  aiStackX_8[0] = TierUnlockedPopupContentAccess_GetItemAmount(this,(MethodInfo *)0x0);
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  PStack_3._arg0 = (Object *)0x0;
  PStack_3._arg1 = (Object *)0x0;
  PStack_3._arg2 = (Object *)0x0;
  PStack_3._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_3,arg0,(MethodInfo *)0x0);
  PStack_4._arg0 = PStack_3._arg0;
  PStack_4._arg1 = PStack_3._arg1;
  PStack_4._arg2 = PStack_3._arg2;
  PStack_4._args = PStack_3._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_4,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar1,(pTVar2->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

