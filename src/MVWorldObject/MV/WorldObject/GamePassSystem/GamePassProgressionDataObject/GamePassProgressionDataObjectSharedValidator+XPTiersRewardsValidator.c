
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
         GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_ToString
                   (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  PStack_2._arg0 = (Object *)(this->fields).xpTierRewardsValidators;
  if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
       *)PStack_2._arg0 ==
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
       *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar3)();
    return pSVar1;
  }
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&PStack_2 >> 0xc);
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
  PStack_2._arg1 =
       (Object *)
       (ulonglong)
       (uint)(((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
                *)PStack_2._arg0)->fields)._version;
  uStack_8 = 2;
  auStack_9._8_8_ = PStack_2._arg1;
  KStack_10.key = 0;
  KStack_10._1_7_ = 0;
  KStack_10.value = (Object *)0x0;
  uStack_11._0_4_ = 2;
  uStack_11._4_4_ = 0;
  uStack_12 = 0;
  puStack_13 = auStack_9;
  auStack_9._0_8_ = PStack_2._arg0;
  while (bVar14 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                            auStack_9,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                           ), arg1 = KStack_10.value, bVar14 != 0) {
    auStackX_8[0] = KStack_10.key;
    arg0 = (Object *)FUN_?(TypeInfo__MV__Common__GamePassTier,auStackX_8);
    pSVar15 = StringLiteral__0____1_u000A;
    PStack_16._arg0 = (Object *)0x0;
    PStack_16._arg1 = (Object *)0x0;
    PStack_16._arg2 = (Object *)0x0;
    PStack_16._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_16,arg0,arg1,(MethodInfo *)0x0);
    PStack_2._arg0 = PStack_16._arg0;
    PStack_2._arg1 = PStack_16._arg1;
    PStack_2._arg2 = PStack_16._arg2;
    PStack_2._args = PStack_16._args;
    pSVar15 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar15,&PStack_2,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar15,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* Void Validate(Dictionary`2[MV.Common.GamePassTier,System.Int32], Boolean) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
     GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_Validate
               (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
               Dictionary_2_MV_Common_GamePassTier_System_Int32_ *xpTierRewards,bool fixIfInValid,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Count__
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (xpTierRewards != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    pMVar1 = (MethodInfo *)(this->fields).xpTierRewardsValidators;
    if (pMVar1 != (MethodInfo *)0x0) {
      if ((xpTierRewards->fields)._count - (xpTierRewards->fields)._freeCount !=
          *(int *)&pMVar1->klass - *(int *)&pMVar1->return_type) {
        uVar2 = func_?(&TypeInfo__System__Exception);
        pEVar3 = (Exception *)func_?(uVar2);
        pSVar4 = (String *)func_?(&StringLiteral_rewards_count_not_matching);
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
        uVar2 = func_?(&
                                     MethodInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator__XPTiersRewardsValidator__Validate_System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__bool_
                                    );
        FUN_?(pEVar3,uVar2);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pMStack_7 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      uStack_11 = (ulonglong)*(uint *)((longlong)&pMVar1->return_type + 4);
      uStack_12 = 2;
      uStack_13 = 0;
      uStack_14 = 0;
      DStack_15._version = (undefined4)uStack_11;
      DStack_15._index = uStack_11._4_4_;
      DStack_15._current.key = 0;
      DStack_15._current._1_7_ = 0;
      DStack_15._current.value = (Object *)0x0;
      DStack_15._getEnumeratorRetType = 2;
      DStack_15._36_4_ = 0;
      pMStack_7 = pMVar1;
      DStack_15._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pMVar1;
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                          (&DStack_15,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__MoveNext__
                          );
        pOVar17 = DStack_15._current.value;
        pMVar18 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
        ;
        if (bVar16 == 0) {
          return;
        }
        key = DStack_15._current._0_4_;
        uVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Single]::Dictionary_2_System_ByteEnum_System_Single__FindEntry
                          ((Dictionary_2_System_ByteEnum_System_Single_ *)xpTierRewards,key & 0xff,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar6 < 0) break;
        pDVar19 = (xpTierRewards->fields)._entries;
        if (pDVar19 == (Dictionary_2_TKey_TValue_Entry_MV_Common_GamePassTier_System_Int32___Array *)
                      0x0) goto code_?;
        if ((uint)pDVar19->max_length <= uVar6) goto code_?;
        iVar20 = pDVar19->vector[(int)uVar6].value;
        if (pOVar17 == (Object *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (iVar20 == 0) {
          if (*(char *)&pOVar17[1].klass != '\0') {
            value = 0;
            goto code_?;
          }
          if (fixIfInValid == 0) goto code_?;
          if (pOVar17[1].monitor != (MonitorData *)0x0) {
            iVar20 = *(int *)(pOVar17[1].monitor + 0x10);
            goto code_?;
          }
          goto code_?;
        }
code_?:
        if (pOVar17[1].monitor == (MonitorData *)0x0) goto code_?;
        pMVar1 = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
        value = FUN_?(pOVar17[1].monitor,iVar20,fixIfInValid,
                              MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                             );
code_?:
        pMVar1 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar1 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
        Dictionary_2_System_ByteEnum_System_Int32__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Int32_ *)xpTierRewards,key,value,
                   (InsertionBehavior__Enum)pMVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                   ->klass->rgctx_data[0x22].method);
      }
      uVar2 = func_?(pMVar18->klass->rgctx_data,0xe);
      pOVar17 = (Object *)func_?(uVar2);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                (pOVar17,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar3 = (Exception *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_Reward_removal_is_illegal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
      uVar2 = func_?(&
                                   MethodInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator__Validate_int__bool_
                                  );
      FUN_?(pEVar3,uVar2);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
     GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor
               (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).xpTierRewardsValidators =
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
        *)this_00;
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


/* GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator(Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.AntiCheat.RangeValidator`1[System.Int32]],
   Dictionary`2[MV.Common.GamePassTier,System.Boolean]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectSharedValidator+XPTiersRewardsValidator::
     GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__ctor_1
               (GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator *this,
               Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_AntiCheat_RangeValidator_1_System_Int32_
               *xpRangeValidators,
               Dictionary_2_MV_Common_GamePassTier_System_Boolean_ *xpRewardRemovalAllowed,
               MethodInfo *method)

{
  behavior = (InsertionBehavior__Enum)method;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator_
                  ,xpRangeValidators,xpRewardRemovalAllowed,behavior);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_bool>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Dictionary__
            );
  (this->fields).xpTierRewardsValidators =
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
        *)this_01;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (xpRangeValidators ==
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_AntiCheat_RangeValidator_1_System_Int32_ *
      )0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&pDStack_7 >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  uStack_8 = (ulonglong)(uint)(xpRangeValidators->fields)._version;
  uStack_9 = 2;
  uStack_10 = 0;
  uStack_11 = 0;
  DStack_12._version = (undefined4)uStack_8;
  DStack_12._index = uStack_8._4_4_;
  DStack_12._current.key = 0;
  DStack_12._current._1_7_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  pDStack_7 = xpRangeValidators;
  DStack_12._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)xpRangeValidators;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
             ::ByteEnum,System::Object]::
             Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                       (&DStack_12,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::AntiCheat::RangeValidator<int>_>__MoveNext__
                       );
    pMVar14 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_bool>__get_Item_MV__Common__GamePassTier_
    ;
    if (bVar13 == 0) {
      return;
    }
    uVar15 = DStack_12._current._0_4_;
    uVar16 = DStack_12._current.value._0_4_;
    uVar17 = DStack_12._current.value._4_4_;
    if (xpRewardRemovalAllowed == (Dictionary_2_MV_Common_GamePassTier_System_Boolean_ *)0x0)
    goto code_?;
    uVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Boolean]::Dictionary_2_System_ByteEnum_System_Boolean__FindEntry
                       ((Dictionary_2_System_ByteEnum_System_Boolean_ *)xpRewardRemovalAllowed,
                        DStack_12._current._0_4_ & 0xff,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_bool>__get_Item_MV__Common__GamePassTier_
                        ->klass->rgctx_data[0x21].method);
    if ((int)uVar1 < 0) break;
    pDVar18 = (xpRewardRemovalAllowed->fields)._entries;
    if (pDVar18 == (Dictionary_2_TKey_TValue_Entry_MV_Common_GamePassTier_System_Boolean___Array *)
                  0x0) goto code_?;
    if ((uint)pDVar18->max_length <= uVar1) goto code_?;
    bVar13 = pDVar18->vector[(int)uVar1].value;
    pOVar19 = (Object *)
              FUN_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator
                           );
    *(bool *)&pOVar19[1].klass = bVar13;
    *(undefined4 *)&pOVar19[1].monitor = uVar16;
    *(undefined4 *)((longlong)&pOVar19[1].monitor + 4) = uVar17;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pOVar19[1].monitor >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    this_00 = (this->fields).xpTierRewardsValidators;
    if (this_00 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_GamePassProgressionDataObject_GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator_XPTierRewardValidator_
         *)0x0) goto code_?;
    behavior = CONCAT31((int3)(behavior >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,uVar15 & 0xff,pOVar19,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator::XPTierRewardValidator>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectSharedValidator_XPTiersRewardsValidator__XPTierRewardValidator_
               ->klass->rgctx_data[0x22].method);
  }
  uVar20 = func_?(pMVar14->klass->rgctx_data,0xe);
  pOVar19 = (Object *)func_?(uVar20);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
            (pOVar19,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

