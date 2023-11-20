
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
         GamePassProgressionDataObjectShared+XPTierRewards::
         GamePassProgressionDataObjectShared_XPTierRewards_ToString
                   (GamePassProgressionDataObjectShared_XPTierRewards *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                   );
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
                   );
    func_?(&StringLiteral_____0____1__u000A);
    func_?(&StringLiteral_Tier_XP_rewardsu000A);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = StringLiteral_Tier_XP_rewardsu000A;
  DStack_7._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current._1_3_ = 0;
  pSStack_8 = StringLiteral_Tier_XP_rewardsu000A;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).xpTierRewards;
  DStack_7._current.value = 0;
  DStack_7._getEnumeratorRetType = 0;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff9c,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar9->_dictionary;
    DStack_7._version = pDVar9->_version;
    DStack_7._index = pDVar9->_index;
    DStack_7._current._0_4_ = (pDVar9->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                        );
      if (bVar12 == 0) break;
      iStack_13 = DStack_7._current.value;
      pOStack_14 = (Object *)func_?();
      iStack_15 = iStack_13;
      arg1 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_____0____1__u000A,pOStack_14,arg1,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSStack_8 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
               ,in_stack_16);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar6;
  }
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar18)();
  return pSVar6;
}


/* GamePassProgressionDataObjectShared+XPTierRewards() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared+XPTierRewards::
     GamePassProgressionDataObjectShared_XPTierRewards__ctor
               (GamePassProgressionDataObjectShared_XPTierRewards *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
    Dictionary_2_System_ByteEnum_System_Int32__Add
              ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_00,1,0x32,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
    Dictionary_2_System_ByteEnum_System_Int32__Add
              ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_00,2,100,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
    Dictionary_2_System_ByteEnum_System_Int32__Add
              ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_00,3,200,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).xpTierRewards = (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

