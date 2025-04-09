
/* Void Add(Int32) */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Add(TimeoutMap *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).weaponTimeOutMap;
  value = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
    Dictionary_2_System_Int32_System_Single__set_Item
              (this_00,id,value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Contains
               (TimeoutMap *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).weaponTimeOutMap;
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_float>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Update(TimeoutMap *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Remove_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = 0.0;
  DStack_7._getEnumeratorRetType = 0;
  this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            (this->fields).removeSet;
  auStack_8._0_4_ = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  auStack_8._4_4_ = 0;
  auStack_8._8_4_ = 0;
  auStack_8._12_4_ = 0;
  if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    method_00 = (MethodInfo *)(this->fields).weaponTimeOutMap;
    if (method_00 != (MethodInfo *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          (auStack_8 + 0x10),(Dictionary_2_System_UInt32_System_Object_ *)method_00
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar9->_dictionary;
      DStack_7._version = pDVar9->_version;
      DStack_7._index = pDVar9->_index;
      DStack_7._current.key = (pDVar9->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_7;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Single]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                          );
        if (bVar12 == 0) break;
        fStack_13 = (this->fields).timeOut;
        uStack_14 = DStack_7._current.key;
        HStack_15._current = (uint32_t)DStack_7._current.value;
        fStack_16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
        if ((float)HStack_15._current + fStack_13 <= fStack_16) {
          this_01 = (this->fields).removeSet;
          if (this_01 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
          in_stack_6 =
               (MethodInfo **)MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (this_01,uStack_14,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      uStack_1 = 0xffffffff;
      this_02 = (HashSet_1_System_UInt32_ *)(this->fields).removeSet;
      if (this_02 != (HashSet_1_System_UInt32_ *)0x0) {
        pHVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                 HashSet_1_System_UInt32__GetEnumerator
                           (&HStack_15,this_02,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        uStack_10 = 0;
        auStack_8._0_4_ = pHVar17->_set;
        auStack_8._4_4_ = pHVar17->_index;
        auStack_8._8_4_ = pHVar17->_version;
        auStack_8._12_4_ = pHVar17->_current;
        uStack_1 = 4;
        pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Single_ *)
                     auStack_8;
        while( true ) {
          bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                            ((HashSet_1_T_Enumerator_System_UInt32_ *)auStack_8,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar12 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)auStack_8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          this_03 = (this->fields).weaponTimeOutMap;
          if (this_03 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__Remove
                    (this_03,auStack_8._12_4_,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Remove_int_);
        }
      }
    }
  }
code_?:
  uVar18 = func_?();
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* TimeoutMap(Single) */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap__ctor
               (TimeoutMap *this,float timeOut,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__)
  ;
  (this->fields).weaponTimeOutMap = (Dictionary_2_System_Int32_System_Single_ *)this_00;
  func_?(&(this->fields).weaponTimeOutMap,this_00);
  this_01 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  method_00 = (MethodInfo *)&(this->fields).removeSet;
  (this->fields).removeSet = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).timeOut = timeOut;
  return;
}

