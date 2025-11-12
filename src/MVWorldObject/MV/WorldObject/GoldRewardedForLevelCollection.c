
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GoldRewardedForLevelCollection::
         GoldRewardedForLevelCollection_ToString
                   (GoldRewardedForLevelCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Level__0___GoldReward__1__u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pSStackX_18 = ::StringLiteral__;
  pDVar2 = (this->fields).levelGoldRewards;
  if (pDVar2 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
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
  iStack_9 = (pDVar2->fields)._version;
  uStack_10 = 2;
  uStack_11 = 0;
  uStack_5._0_4_ = SUB84(pDVar2,0);
  uStack_5._4_4_ = (undefined4)((ulonglong)pDVar2 >> 0x20);
  uStack_12 = (undefined4)uStack_5;
  uStack_13 = uStack_5._4_4_;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 2;
  uStack_5 = 0;
  puStack_17 = &uStack_12;
  while (pSStackX_18 = pSVar1,
        cVar18 = FUN_?(&uStack_12,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                             ), cVar18 != '\0') {
    uStackX_20 = uStack_15;
    auStackX_8[0] = (undefined4)uStack_15;
    arg0 = (Object *)FUN_?(uRam_?,auStackX_8);
    auStackX_8[0] = uStackX_20._4_4_;
    arg1 = (Object *)FUN_?(uRam_?,auStackX_8);
    pSVar19 = StringLiteral_Level__0___GoldReward__1__u000A;
    PStack_20._arg0 = (Object *)0x0;
    PStack_20._arg1 = (Object *)0x0;
    PStack_20._arg2 = (Object *)0x0;
    PStack_20._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_20,arg0,arg1,(MethodInfo *)0x0);
    PStack_21._arg0 = PStack_20._arg0;
    PStack_21._arg1 = PStack_20._arg1;
    PStack_21._arg2 = PStack_20._arg2;
    PStack_21._args = PStack_20._args;
    pSVar19 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar19,&PStack_21,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar19,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* GoldRewardedForLevelCollection(Dictionary`2[System.Int32,System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::GoldRewardedForLevelCollection::
     GoldRewardedForLevelCollection__ctor_1
               (GoldRewardedForLevelCollection *this,
               Dictionary_2_System_Int32_System_Int32_ *levelGoldRewards,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary_System__Collections__Generic__IDictionary<int,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
  Dictionary_2_System_Int32_System_Int32___ctor_4
            (this_00,(IDictionary_2_System_Int32_System_Int32_ *)levelGoldRewards,
             (IEqualityComparer_1_System_Int32_ *)0x0,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary_System__Collections__Generic__IDictionary<int,_int>_
             ->klass->rgctx_data[8].method);
  bVar1 = iRam_? != 0;
  (this->fields).levelGoldRewards = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}

