
/* Dictionary`2[System.Int32,MVOverlapResult] GetOverlapDictionary() */

Dictionary_2_System_Int32_MVOverlapResult_ *
Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
          (MVRigidBody_StuckEvaluator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pFVar6 = (this->fields).getOverlappingObjects;
  if (pFVar6 != (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)0x0) {
    this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (*(pFVar6->fields)._._.invoke_impl)
                        ((pFVar6->fields)._._.method_code,(pFVar6->fields)._._.method);
    if (this_00 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
      if ((this_00->fields)._size == 0) {
        *unaff_FS_OFFSET = uStack_3;
        return (Dictionary_2_System_Int32_MVOverlapResult_ *)0x0;
      }
      this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
      Text::TextResourceManager+FontAssetRef]::
      Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Dictionary__
                );
      pDStack_7 = this_01;
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
               XmlSchemaObjectTable+XmlSchemaObjectEntry]::
               List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__GetEnumerator
                         (&LStack_9,this_00,
                          MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                         );
      uStack_10 = 0;
      LStack_11._list =
           (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)pLVar8->_list;
      LStack_11._index = pLVar8->_index;
      LStack_11._version = pLVar8->_version;
      LStack_11._current.parentId = (int32_t)(pLVar8->_current).qname;
      LStack_11._current.uxmlObjectAssets =
           (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)(pLVar8->_current).xso;
      uStack_1 = 1;
      pLStack_12 = &LStack_11;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::
                UIElements::VisualTreeAsset+UxmlObjectEntry]::
                List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__MoveNext
                          (&LStack_11,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                          );
        key = (MethodInfo *)LStack_11._current.parentId;
        if (bVar13 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_11,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return (Dictionary_2_System_Int32_MVOverlapResult_ *)this_01;
        }
        pIStack_14 = (IntVector__Array *)LStack_11._current.uxmlObjectAssets;
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )0x0) break;
        bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                          ((Dictionary_2_System_Int32_PendingPrototypeData_ *)this_01,
                           LStack_11._current.parentId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                          );
        if (bVar13 == 0) {
          value.localCubePos = pIStack_14;
          value.woId = (int32_t)key;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,MVOverlapResult]::
          Dictionary_2_System_Int32_MVOverlapResult__Add
                    ((Dictionary_2_System_Int32_MVOverlapResult_ *)this_01,(int32_t)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Add_int__MVOverlapResult_
                    );
          unaff_EDI = key;
        }
        else {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          unaff_EDI = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_This_happens_due_to_error_in_MVE,(MethodInfo *)0x0);
        }
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pDVar17 = (Dictionary_2_System_Int32_MVOverlapResult_ *)(*pcVar16)();
  return pDVar17;
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
  auStack_10._0_4_ =
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0;
  auStack_10._4_4_ = 0;
  auStack_10._8_4_ = 0;
  auStack_10._12_4_ = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
  pOStack_11 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((float)pOStack_11 - (this->fields).updateTime < (this->fields).updateInterval) {
    pDVar12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).stuckObjects;
    if (pDVar12 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) goto code_?;
    iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (pDVar12,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                      );
    if (iVar13 == 0) goto code_?;
  }
  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).updateTime = fVar14;
  pDStack_15 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)MVRigidBody_StuckEvaluator_GetOverlapDictionary(this,(MethodInfo *)0x0);
  if (pDStack_15 ==
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).stuckObjects;
    if (pDVar12 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (pDVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                );
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
  else {
    this_01 = (Object__Class *)func_?();
    pOStack_11 = this_01;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pDVar12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).stuckObjects;
    pOStack_16 = this_01;
    if ((pDVar12 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)0x0) &&
       (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                            (pDVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                            ),
       this_02 !=
       (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
      pDVar17 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_18,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                         );
      uStack_19 = 0;
      method_00 = (MethodInfo *)pDVar17->_currentValue;
      uStack_1 = 1;
      pDStack_20 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                   &stack0xffffff58;
      while (bVar21 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                     UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                 *)&stack0xffffff58,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                               ), bVar21 != 0) {
        pMStack_22 = method_00;
        bVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                          ((Dictionary_2_System_Int32_PendingPrototypeData_ *)pDStack_15,
                           (int32_t)method_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                          );
        if (bVar21 == 0) {
          if (pOStack_11 == (Object__Class *)0x0) goto code_?;
          in_stack_23 = pOStack_11;
          func_?(pOStack_11,pMStack_22,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffff58,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 ,(MethodInfo *)in_stack_23);
      uStack_1 = 0xffffffff;
      if (pOStack_11 != (Object__Class *)0x0) {
        pLVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&DStack_18,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pOStack_11,
                            MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
        uStack_19 = 0;
        auStack_9._0_4_ = pLVar24->_list;
        auStack_9._4_4_ = pLVar24->_index;
        auStack_9._8_4_ = pLVar24->_version;
        auStack_9._12_4_ = pLVar24->_current;
        uStack_1 = 4;
        pDStack_20 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                     auStack_9;
        while (bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                       ::RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                 ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)auStack_9,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                 ), bVar21 != 0) {
          pDVar25 = (this->fields).stuckObjects;
          if (pDVar25 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar25,auStack_9._12_4_,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                    );
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)auStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                   (MethodInfo *)in_stack_7);
        uStack_1 = 0xffffffff;
        pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                            ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                              *)(auStack_9 + 0x10),pDStack_15,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                            );
        uStack_19 = 0;
        DStack_8._dictionary =
             (Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar26->_dictionary;
        DStack_8._version = pDVar26->_version;
        DStack_8._index = pDVar26->_index;
        DStack_8._current.key = (pDVar26->_current).key.sheetInstanceID;
        uVar27 = *(undefined8 *)&(pDVar26->_current).key.index;
        DStack_8._current.value.prevPrototypeId = (int32_t)uVar27;
        DStack_8._current.value.pendingRuntimePrototype =
             (RuntimePrototypeCubeModel *)((ulonglong)uVar27 >> 0x20);
        DStack_8._getEnumeratorRetType = pDVar26->_getEnumeratorRetType;
        uStack_1 = 7;
        pDStack_20 = &DStack_8;
        while (bVar21 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                       Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                                 (&DStack_8,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                                 ), bVar21 != 0) {
          DStack_18._version = DStack_8._current.value.prevPrototypeId;
          DStack_18._index = DStack_8._current.key;
          pOStack_11 = (Object__Class *)DStack_8._current.value.pendingRuntimePrototype;
          pDVar25 = (this->fields).stuckObjects;
          if (pDVar25 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
          goto code_?;
          bVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pDVar25,
                             DStack_8._current.key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                            );
          this_04 = (MethodInfo *)(this->fields).stuckObjects;
          if (bVar21 == 0) {
            pOStack_16 = (Object__Class *)
                         func_?(TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
            overlapResult.localCubePos = (IntVector__Array *)pOStack_11;
            overlapResult.woId = DStack_18._version;
            MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                      ((MVRigidBody_StuckEvaluator_StuckObject *)pOStack_16,overlapResult,
                       (MethodInfo *)0x0);
            if (this_04 == (MethodInfo *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)this_04,DStack_18._index,
                       (Object *)pOStack_16,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                      );
          }
          else {
            if (this_04 == (MethodInfo *)0x0) goto code_?;
            pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)this_04,
                                 DStack_18._index,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                );
            if (pOVar28 == (Object *)0x0) goto code_?;
            pOVar28[1].monitor = (MonitorData *)DStack_18._version;
            pOVar28[2].klass = pOStack_11;
            func_?(pOVar28 + 2);
            in_stack_6 = (MethodInfo **)this_04;
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDStack_15,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                  );
        pDVar12 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)(this->fields).stuckObjects;
        if ((pDVar12 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)0x0) &&
           (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                (pDVar12,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                ),
           this_03 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          pDVar17 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_18,this_03,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                             );
          uStack_19 = 0;
          auStack_10._0_4_ = pDVar17->_dictionary;
          auStack_10._4_4_ = pDVar17->_index;
          auStack_10._8_4_ = pDVar17->_version;
          auStack_10._12_4_ = pDVar17->_currentValue;
          uStack_1 = 10;
          pDStack_20 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                       auStack_10;
          while (bVar21 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                         UInt32,System::Object]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                   ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                     *)auStack_10,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                   ), this_00 = auStack_10._12_4_, bVar21 != 0) {
            if ((MVRigidBody_StuckEvaluator_StuckObject *)auStack_10._12_4_ ==
                (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
            fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
            if (_UNK_? <=
                fVar14 - ((MVRigidBody_StuckEvaluator_StuckObject__Fields *)(this_00 + 8))->
                         stuckTime) {
              method_00 = (MethodInfo *)0x0;
              bVar21 = MVRigidBody+StuckEvaluator+StuckObject::
                      MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                ((MVRigidBody_StuckEvaluator_StuckObject *)this_00,(MethodInfo *)0x0
                                );
              if (bVar21 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)auStack_10,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                           ,in_stack_29);
                *unaff_FS_OFFSET = uStack_3;
                return 1;
              }
            }
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)auStack_10,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     ,method_00);
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
  func_?();
  pcVar30 = (code *)swi(3);
  bVar21 = (*pcVar30)();
  return bVar21;
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  ((MVRigidBody_StuckEvaluator__Fields *)method_00)->stuckObjects =
       (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)this_00;
  func_?(method_00,this_00);
  (this->fields).updateInterval = 0.2;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).updateTime = fVar1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  ppFVar2 = &(this->fields).getOverlappingObjects;
  *ppFVar2 = getOverlappingObjects;
  func_?(ppFVar2,getOverlappingObjects);
  return;
}

