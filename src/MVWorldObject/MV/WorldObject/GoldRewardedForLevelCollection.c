
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GoldRewardedForLevelCollection::
         GoldRewardedForLevelCollection_ToString
                   (GoldRewardedForLevelCollection *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    func_?(&StringLiteral_Level__0___GoldReward__1__u000A);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  pSStack_7 = ::StringLiteral__;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).levelGoldRewards;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff9c,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)pDVar8->_dictionary;
    DStack_10._version = pDVar8->_version;
    DStack_10._index = pDVar8->_index;
    DStack_10._current.key = (pDVar8->_current).key;
    DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_10;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                        (&DStack_10,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                        );
      if (bVar12 == 0) break;
      iStack_13 = DStack_10._current.value;
      pOStack_14 = (Object *)func_?();
      iStack_15 = iStack_13;
      arg1 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_Level__0___GoldReward__1__u000A,pOStack_14,arg1,
                        (MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
      pSStack_7 = pSVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
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


/* GoldRewardedForLevelCollection(Dictionary`2[System.Int32,System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::GoldRewardedForLevelCollection::
     GoldRewardedForLevelCollection__ctor_1
               (GoldRewardedForLevelCollection *this,
               Dictionary_2_System_Int32_System_Int32_ *levelGoldRewards,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary_System__Collections__Generic__IDictionary<int,_int>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
  Dictionary_2_System_Int32_System_Int32___ctor_1
            (this_00,(IDictionary_2_System_Int32_System_Int32_ *)levelGoldRewards,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary_System__Collections__Generic__IDictionary<int,_int>_
            );
  (this->fields).levelGoldRewards = this_00;
  func_?(&this->fields,this_00);
  return;
}

