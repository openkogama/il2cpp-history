
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectShared+XPTierRewards::
         GamePassProgressionDataObjectShared_XPTierRewards_ToString
                   (GamePassProgressionDataObjectShared_XPTierRewards *this,MethodInfo *method)

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
    FUN_?(&StringLiteral_____0____1__u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tier_XP_rewardsu000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Tier_XP_rewardsu000A;
  pSStackX_18 = StringLiteral_Tier_XP_rewardsu000A;
  DStack_2._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)(this->fields).xpTierRewards
  ;
  if ((Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)DStack_2._dictionary ==
      (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar3)();
    return pSVar1;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
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
  pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_ *)
               (ulonglong)
               (uint)(((Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)DStack_2._dictionary)->
                     fields)._version;
  uStack_10 = 2;
  uStack_11 = 0;
  DStack_2._8_8_ = pDStack_9;
  DStack_2._current.key = 0;
  DStack_2._current._1_3_ = 0;
  DStack_2._current.value = 0;
  DStack_2._getEnumeratorRetType = 2;
  DStack_2._28_4_ = 0;
  uStack_5 = 0;
  pDStack_9 = &DStack_2;
  while (pSStackX_18 = pSVar1,
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
                Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                          (&DStack_2,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                          ), bVar12 != 0) {
    KStackX_20 = DStack_2._current;
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,DStack_2._current.key);
    arg0 = (Object *)FUN_?(TypeInfo__MV__Common__GamePassTier,aiStackX_8);
    aiStackX_8[0] = KStackX_20.value;
    arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
    pSVar13 = StringLiteral_____0____1__u000A;
    PStack_14._arg0 = (Object *)0x0;
    PStack_14._arg1 = (Object *)0x0;
    PStack_14._arg2 = (Object *)0x0;
    PStack_14._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_14,arg0,arg1,(MethodInfo *)0x0);
    PStack_15._arg0 = PStack_14._arg0;
    PStack_15._arg1 = PStack_14._arg1;
    PStack_15._arg2 = PStack_14._arg2;
    PStack_15._args = PStack_14._args;
    pSVar13 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar13,&PStack_15,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar13,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* GamePassProgressionDataObjectShared+XPTierRewards() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared+XPTierRewards::
     GamePassProgressionDataObjectShared_XPTierRewards__ctor
               (GamePassProgressionDataObjectShared_XPTierRewards *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
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
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                         );
  FUN_?(this_00);
  if (this_00 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  method_00 = MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
              ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
  Dictionary_2_System_ByteEnum_System_Int32__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_00,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),0x32,
             (InsertionBehavior__Enum)uVar2,method_00);
  uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  uVar2 = 0;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
  Dictionary_2_System_ByteEnum_System_Int32__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_00,2,100,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
             ->klass->rgctx_data[0x22].method);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
  Dictionary_2_System_ByteEnum_System_Int32__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_00,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),3),200,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
             ->klass->rgctx_data[0x22].method);
  bVar4 = iRam_? != 0;
  (this->fields).xpTierRewards = this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}

