
/* Dictionary`2[System.Int32,MVOverlapResult] GetOverlapDictionary() */

Dictionary_2_System_Int32_MVOverlapResult_ *
Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
          (MVRigidBody_StuckEvaluator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Add_int__MVOverlapResult_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__);
    func_?(&StringLiteral_This_happens_due_to_error_in_MVE);
    cRam_? = '\x01';
  }
  pFVar4 = (this->fields).getOverlappingObjects;
  if (pFVar4 != (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)0x0) {
    this_00 = (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
              (*(pFVar4->fields)._._.invoke_impl)
                        ((pFVar4->fields)._._.method_code,(pFVar4->fields)._._.method);
    if (this_00 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
      if ((this_00->fields)._size == 0) {
        *unaff_FS_OFFSET = uStack_3;
        return (Dictionary_2_System_Int32_MVOverlapResult_ *)0x0;
      }
      this_01 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>
                                  );
      if (this_01 !=
          (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
           *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Dictionary__
                  );
        pLVar5 = mscorlib.dll::System::Collections::Generic::
                 List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                 List_1_TabMenuButtonAccessory_AccessoryTabDef__GetEnumerator
                           ((List_1_T_Enumerator_TabMenuButtonAccessory_AccessoryTabDef_ *)
                            &stack0xffffffb0,this_00,
                            MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                           );
        key = (Graphic *)(pLVar5->_current).tabID;
        value = (pLVar5->_current).streamedImagePrefab;
        uStack_1 = 1;
        while( true ) {
          bVar6 = mscorlib.dll::System::Collections::Generic::
                  List`1[T]+Enumerator[TabMenuButtonAccessory+AccessoryTabDef]::
                  List_1_T_Enumerator_TabMenuButtonAccessory_AccessoryTabDef__MoveNext
                            ((List_1_T_Enumerator_TabMenuButtonAccessory_AccessoryTabDef_ *)
                             &stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                            );
          if (bVar6 == 0) break;
          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_01,
                             (Object *)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                            );
          if (bVar6 == 0) {
            key_00.TypeName = (String *)key;
            key_00.AssemblyName = (String *)key;
            in_stack_7 = key;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization
            ::DefaultSerializationBinder+TypeNameKey,System::Object]::
            Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
                      (this_01,key_00,(Object *)value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Add_int__MVOverlapResult_
                      );
          }
          else {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            in_stack_7 = (Graphic *)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)StringLiteral_This_happens_due_to_error_in_MVE,(MethodInfo *)0x0);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                   ,(MethodInfo *)in_stack_7);
        *unaff_FS_OFFSET = uStack_3;
        return (Dictionary_2_System_Int32_MVOverlapResult_ *)this_01;
      }
    }
  }
  uVar8 = func_?();
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  pDVar10 = (Dictionary_2_System_Int32_MVOverlapResult_ *)(*pcVar9)();
  return pDVar10;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
               (MVRigidBody_StuckEvaluator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff4c;
  puVar5 = &stack0xffffff4c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    in_stack_7 = &MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_8._getEnumeratorRetType = 0;
  auStack_9._16_4_ =
       (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0;
  pRStack_10 = (RuntimePrototypeCubeModel *)0x0;
  iStack_11 = 0;
  pOStack_12 = (Object *)0x0;
  auStack_9._0_4_ = (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0;
  auStack_9._4_4_ = (RuntimePrototypeCubeModel *)0x0;
  auStack_9._8_4_ = 0;
  auStack_9._12_2_ = 0;
  auStack_9._14_2_ = 0;
  DStack_8._dictionary = (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key = 0;
  DStack_8._current.value.prevPrototypeId = 0;
  DStack_8._current.value.pendingRuntimePrototype = (RuntimePrototypeCubeModel *)0x0;
  pOStack_13 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((float)pOStack_13 - (this->fields).updateTime < (this->fields).updateInterval) {
    pDVar14 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).stuckObjects;
    if (pDVar14 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      (pDVar14,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                      );
    if (iVar15 == 0) goto code_?;
  }
  pOStack_13 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).updateTime = (float)pOStack_13;
  pDStack_16 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)MVRigidBody_StuckEvaluator_GetOverlapDictionary(this,(MethodInfo *)0x0);
  if (pDStack_16 ==
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    pDVar14 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).stuckObjects;
    if (pDVar14 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                (pDVar14,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                );
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
  else {
    this_03 = (Object__Class *)func_?();
    pOStack_13 = this_03;
    if (this_03 != (Object__Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_03,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      pDVar14 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this->fields).stuckObjects;
      pOStack_17 = this_03;
      if ((pDVar14 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)0x0) &&
         (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                              (pDVar14,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                              ),
         this_04 !=
         (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
          *)0x0)) {
        pDVar18 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)(auStack_19 + 0xc),
                            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)this_04,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                           );
        uStack_20 = 0;
        auStack_9._16_4_ = pDVar18->_dictionary;
        pRStack_10 = (RuntimePrototypeCubeModel *)pDVar18->_index;
        iStack_11 = pDVar18->_version;
        pOStack_12 = pDVar18->_currentValue;
        uStack_1 = 1;
        pDStack_21 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                     (auStack_9 + 0x10);
        while (bVar22 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Int32Enum,System::Single]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                   *)(auStack_9 + 0x10),
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                 ), bVar22 != 0) {
          pOStack_23 = pOStack_12;
          bVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pDStack_16,
                             pOStack_12,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                            );
          if (bVar22 == 0) {
            in_stack_24 = pOStack_13;
            func_?(pOStack_13,pOStack_23,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)(auStack_9 + 0x10),
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                   ,(MethodInfo *)in_stack_24);
        uStack_1 = 0xffffffff;
        pLVar25 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)(auStack_19 + 0xc),
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pOStack_13,
                            MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
        uStack_20 = 0;
        auStack_9._0_4_ = pLVar25->_list;
        auStack_9._4_4_ = pLVar25->_index;
        auStack_9._8_4_ = pLVar25->_version;
        auStack_9._12_4_ = pLVar25->_current;
        uStack_1 = 4;
        pDStack_21 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                     auStack_9;
        while (bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                       ::RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                 ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)auStack_9,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                 ), bVar22 != 0) {
          this_00 = (this->fields).stuckObjects;
          if (this_00 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,auStack_9._12_4_,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                    );
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                   (MethodInfo *)in_stack_7);
        uStack_1 = 0xffffffff;
        pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
                 Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
                 Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                             *)auStack_19,
                            (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                             *)pDStack_16,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                           );
        uStack_20 = 0;
        DStack_8._dictionary =
             (Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar26->_dictionary;
        DStack_8._version = pDVar26->_version;
        DStack_8._index = pDVar26->_index;
        DStack_8._current.key = (int32_t)(pDVar26->_current).key.AssemblyName;
        uVar27 = *(undefined8 *)&(pDVar26->_current).key.TypeName;
        DStack_8._current.value.prevPrototypeId = (int32_t)uVar27;
        DStack_8._current.value.pendingRuntimePrototype =
             (RuntimePrototypeCubeModel *)((ulonglong)uVar27 >> 0x20);
        DStack_8._getEnumeratorRetType = pDVar26->_getEnumeratorRetType;
        uStack_1 = 7;
        pDStack_21 = &DStack_8;
        while (bVar22 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                       Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                                 (&DStack_8,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                                 ), bVar22 != 0) {
          pOStack_28 = (Object *)DStack_8._current.value.prevPrototypeId;
          pSStack_29 = (String *)DStack_8._current.key;
          pOStack_13 = (Object__Class *)DStack_8._current.value.pendingRuntimePrototype;
          this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                    (this->fields).stuckObjects;
          if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
          goto code_?;
          bVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (this_01,(Object *)DStack_8._current.key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                            );
          pMVar30 = (MethodInfo *)(this->fields).stuckObjects;
          if (bVar22 == 0) {
            pOStack_17 = (Object__Class *)
                         func_?(TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
            if (pOStack_17 == (Object__Class *)0x0) goto code_?;
            overlapResult.localCubePos = (IntVector__Array *)pOStack_13;
            overlapResult.woId = (int32_t)pOStack_28;
            MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                      ((MVRigidBody_StuckEvaluator_StuckObject *)pOStack_17,overlapResult,
                       (MethodInfo *)0x0);
            if (pMVar30 == (MethodInfo *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pMVar30,(Object *)pSStack_29,
                       (Object *)pOStack_17,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                      );
          }
          else {
            if (pMVar30 == (MethodInfo *)0x0) goto code_?;
            pOVar31 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pMVar30,
                                 (Int32Enum__Enum)pSStack_29,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                );
            if (pOVar31 == (Object *)0x0) goto code_?;
            pOVar31[1].monitor = (MonitorData *)pOStack_28;
            pOVar31[2].klass = pOStack_13;
            func_?(pOVar31 + 2);
            in_stack_6 = (MethodInfo **)pMVar30;
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
                  (pDStack_16,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                  );
        pDVar14 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)(this->fields).stuckObjects;
        if ((pDVar14 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)0x0) &&
           (this_05 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                (pDVar14,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                ),
           this_05 !=
           (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
            *)0x0)) {
          pDVar18 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)(auStack_19 + 0xc),this_05,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                             );
          uStack_20 = 0;
          pMVar30 = (MethodInfo *)pDVar18->_version;
          this_02 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar18->_currentValue;
          uStack_1 = 10;
          pDStack_21 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                       &stack0xffffff68;
          while (bVar22 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                         Object,System::Object]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                   ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                     *)&stack0xffffff68,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                   ), bVar22 != 0) {
            if (this_02 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
            fVar32 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
            if (_UNK_? <= fVar32 - (this_02->fields).stuckTime) {
              in_stack_33 = (MethodInfo *)0x0;
              bVar22 = MVRigidBody+StuckEvaluator+StuckObject::
                      MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                (this_02,(MethodInfo *)0x0);
              if (bVar22 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)&stack0xffffff68,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                           ,pMVar30);
                *unaff_FS_OFFSET = uStack_3;
                return 1;
              }
            }
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffff68,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     ,in_stack_33);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar34 = (code *)swi(3);
  bVar22 = (*pcVar34)();
  return bVar22;
}


/* MVRigidBody+StuckEvaluator(Func`1[System.Collections.Generic.List`1[MVOverlapResult]]) */

void Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
               (MVRigidBody_StuckEvaluator *this,
               Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *getOverlappingObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).stuckObjects = this_00;
    func_?(method_00,this_00);
    (this->fields).updateInterval = 0.2;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).updateTime = fVar1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).getOverlappingObjects = getOverlappingObjects;
    func_?(&(this->fields).getOverlappingObjects,getOverlappingObjects);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

