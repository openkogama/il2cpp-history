
/* Void AddGameBoosterGoldRevenue(Int32, String) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport_AddGameBoosterGoldRevenue
               (EarningsReport *this,int32_t goldAmount,String *gameBooster,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).gameBoosterEarningsGold;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)gameBooster,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pDVar2 = (this->fields).gameBoosterEarningsGold;
      if (pDVar2 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__TryInsert
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar2,(Object *)gameBooster,0,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar2 = (this->fields).gameBoosterEarningsGold;
    if (pDVar2 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      IVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                        ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar2,
                         (Object *)gameBooster,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                        );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__TryInsert
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar2,(Object *)gameBooster,
                 IVar3 + goldAmount,(InsertionBehavior__Enum)CONCAT71((uint7)(uint3)(IVar3 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddTierGoldRevenue(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport_AddTierGoldRevenue
               (EarningsReport *this,int32_t goldAmount,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_System_Single_ *)(this->fields).gamePassTierEarningsGold;
  if (this_00 != (Dictionary_2_System_ByteEnum_System_Single_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__FindEntry
                      (this_00,gamePassTier & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pDVar2 = (this->fields).gamePassTierEarningsGold;
      if (pDVar2 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
      Dictionary_2_System_ByteEnum_System_Int32__TryInsert
                ((Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar2,gamePassTier & 0xff,0,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar2 = (this->fields).gamePassTierEarningsGold;
    if (pDVar2 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
      iVar3 = FUN_?(pDVar2,(char)gamePassTier);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
      Dictionary_2_System_ByteEnum_System_Int32__TryInsert
                ((Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar2,gamePassTier & 0xff,
                 iVar3 + goldAmount,
                 (InsertionBehavior__Enum)CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetTotalEarningsGold() */

int32_t MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
        EarningsReport_GetTotalEarningsGold(EarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = (Object *)0x0;
  DStack_1._current.value = 0;
  DStack_1._current._12_4_ = 0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  iVar2 = 0;
  pDVar3 = (this->fields).gamePassTierEarningsGold;
  if (pDVar3 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)
                 (ulonglong)(uint)(pDVar3->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    DStack_13._8_8_ = pDStack_10;
    DStack_13._current.key = 0;
    DStack_13._current._1_3_ = 0;
    DStack_13._current.value = 0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._28_4_ = 0;
    uStack_5 = 0;
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)&DStack_13;
    DStack_13._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar3;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
                   Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                             (&DStack_13,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                             ), bVar14 != 0) {
      iVar2 = iVar2 + DStack_13._current.value;
    }
    pDVar15 = (this->fields).gameBoosterEarningsGold;
    if (pDVar15 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      uStack_12 = 0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
        lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)
                   (ulonglong)(uint)(pDVar15->fields)._version;
      uStack_16 = 2;
      DStack_1._8_8_ = pDStack_10;
      DStack_1._current.key = (Object *)0x0;
      DStack_1._current.value = 0;
      DStack_1._current._12_4_ = 0;
      DStack_1._getEnumeratorRetType = 2;
      DStack_1._36_4_ = 0;
      uStack_5 = 0;
      pDStack_10 = &DStack_1;
      DStack_1._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)pDVar15;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Int32Enum]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                          (&DStack_1,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                          );
        if (bVar14 == 0) break;
        iVar2 = iVar2 + DStack_1._current.value;
      }
      return iVar2;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  iVar18 = (*pcVar17)();
  return iVar18;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
         EarningsReport_ToString(EarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_total_earnings_gold__0__u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = EarningsReport_GetTotalEarningsGold(this,(MethodInfo *)0x0);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar2 = StringLiteral_total_earnings_gold__0__u000A;
  PStack_3._arg0 = (Object *)0x0;
  PStack_3._arg1 = (Object *)0x0;
  PStack_3._arg2 = (Object *)0x0;
  PStack_3._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_3,pOVar1,(MethodInfo *)0x0);
  PStack_4._arg0 = PStack_3._arg0;
  PStack_4._arg1 = PStack_3._arg1;
  PStack_4._arg2 = PStack_3._arg2;
  PStack_4._args = PStack_3._args;
  pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar2,&PStack_4,(MethodInfo *)0x0);
  DStack_5._dictionary =
       (Dictionary_2_System_ByteEnum_System_Int32_ *)(this->fields).gamePassTierEarningsGold;
  if ((Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)DStack_5._dictionary ==
      (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    pSStackX_18 = pSVar2;
    FUN_?();
    pcVar6 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar6)();
    return pSVar2;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
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
  pDStack_12 = (Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_ *)
               (ulonglong)
               (uint)(((Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)DStack_5._dictionary)->
                     fields)._version;
  uStack_13 = 2;
  uStack_14 = 0;
  DStack_5._8_8_ = pDStack_12;
  DStack_5._current.key = 0;
  DStack_5._current._1_3_ = 0;
  DStack_5._current.value = 0;
  DStack_5._getEnumeratorRetType = 2;
  DStack_5._28_4_ = 0;
  uStack_8 = 0;
  pDStack_12 = &DStack_5;
  while (pSStackX_18 = pSVar2,
        bVar15 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
                Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                          (&DStack_5,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                          ), bVar15 != 0) {
    KStackX_20 = DStack_5._current;
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,DStack_5._current.key);
    pOVar1 = (Object *)FUN_?(TypeInfo__MV__Common__GamePassTier,aiStackX_8);
    aiStackX_8[0] = KStackX_20.value;
    arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
    pSVar16 = StringLiteral__0____1__;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_4,pOVar1,arg1,(MethodInfo *)0x0)
    ;
    PStack_17._arg0 = PStack_4._arg0;
    PStack_17._arg1 = PStack_4._arg1;
    PStack_17._arg2 = PStack_4._arg2;
    PStack_17._args = PStack_4._args;
    pSVar16 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar16,&PStack_17,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,pSVar16,(MethodInfo *)0x0);
  }
  return pSVar2;
}


/* EarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport__ctor(EarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                        );
  FUN_?(pDVar1);
  bVar2 = iRam_? != 0;
  (this->fields).gamePassTierEarningsGold = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).gameBoosterEarningsGold = (Dictionary_2_System_String_System_Int32_ *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gameBoosterEarningsGold >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* EarningsReport(Dictionary`2[MV.Common.GamePassTier,System.Int32],
   Dictionary`2[System.String,System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport__ctor_1
               (EarningsReport *this,
               Dictionary_2_MV_Common_GamePassTier_System_Int32_ *gamePassTierEarningsGold,
               Dictionary_2_System_String_System_Int32_ *gameBoosterEarningsGold,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                        );
  FUN_?(pDVar1);
  bVar2 = iRam_? != 0;
  (this->fields).gamePassTierEarningsGold = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  iVar7 = iRam_?;
  (this->fields).gameBoosterEarningsGold = (Dictionary_2_System_String_System_Int32_ *)this_00;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).gameBoosterEarningsGold >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).gamePassTierEarningsGold = gamePassTierEarningsGold;
  iVar8 = 0;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).gameBoosterEarningsGold = gameBoosterEarningsGold;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).gameBoosterEarningsGold >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Int32 get_TotalEarningsGold() */

int32_t MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
        EarningsReport_get_TotalEarningsGold(EarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = (Object *)0x0;
  DStack_1._current.value = 0;
  DStack_1._current._12_4_ = 0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  iVar2 = 0;
  pDVar3 = (this->fields).gamePassTierEarningsGold;
  if (pDVar3 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)
                 (ulonglong)(uint)(pDVar3->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    DStack_13._8_8_ = pDStack_10;
    DStack_13._current.key = 0;
    DStack_13._current._1_3_ = 0;
    DStack_13._current.value = 0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._28_4_ = 0;
    uStack_5 = 0;
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)&DStack_13;
    DStack_13._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar3;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
                   Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                             (&DStack_13,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                             ), bVar14 != 0) {
      iVar2 = iVar2 + DStack_13._current.value;
    }
    pDVar15 = (this->fields).gameBoosterEarningsGold;
    if (pDVar15 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      uStack_12 = 0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
        lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)
                   (ulonglong)(uint)(pDVar15->fields)._version;
      uStack_16 = 2;
      DStack_1._8_8_ = pDStack_10;
      DStack_1._current.key = (Object *)0x0;
      DStack_1._current.value = 0;
      DStack_1._current._12_4_ = 0;
      DStack_1._getEnumeratorRetType = 2;
      DStack_1._36_4_ = 0;
      uStack_5 = 0;
      pDStack_10 = &DStack_1;
      DStack_1._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)pDVar15;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Int32Enum]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                          (&DStack_1,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                          );
        if (bVar14 == 0) break;
        iVar2 = iVar2 + DStack_1._current.value;
      }
      return iVar2;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  iVar18 = (*pcVar17)();
  return iVar18;
}

