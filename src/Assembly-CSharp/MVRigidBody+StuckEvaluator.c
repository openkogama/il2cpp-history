
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
  LStack_6._list = (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.parentId = 0;
  LStack_6._current.uxmlObjectAssets = (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)0x0;
  pFVar7 = (this->fields).getOverlappingObjects;
  if (pFVar7 != (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)0x0) {
    this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (*(pFVar7->fields)._._.invoke_impl)
                        ((pFVar7->fields)._._.method_code,(pFVar7->fields)._._.method);
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
      pDStack_8 = this_01;
      pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
               XmlSchemaObjectTable+XmlSchemaObjectEntry]::
               List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__GetEnumerator
                         (&LStack_10,this_00,
                          MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                         );
      uStack_11 = 0;
      LStack_6._list =
           (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)pLVar9->_list;
      LStack_6._index = pLVar9->_index;
      LStack_6._version = pLVar9->_version;
      LStack_6._current.parentId = (int32_t)(pLVar9->_current).qname;
      LStack_6._current.uxmlObjectAssets =
           (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)(pLVar9->_current).xso;
      uStack_1 = 1;
      pLStack_12 = &LStack_6;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::
                UIElements::VisualTreeAsset+UxmlObjectEntry]::
                List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                          );
        key = (MethodInfo *)LStack_6._current.parentId;
        if (bVar13 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return (Dictionary_2_System_Int32_MVOverlapResult_ *)this_01;
        }
        pIStack_14 = (IntVector__Array *)LStack_6._current.uxmlObjectAssets;
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )0x0) break;
        bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                          ((Dictionary_2_System_Int32_PendingPrototypeData_ *)this_01,
                           LStack_6._current.parentId,
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
  auStack_9._0_4_ =
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0;
  auStack_9._4_4_ = (RuntimePrototypeCubeModel *)0x0;
  auStack_9._8_4_ = 0;
  auStack_9._12_4_ = (Object *)0x0;
  auStack_10._0_4_ = (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0;
  auStack_10._4_4_ = (RuntimePrototypeCubeModel *)0x0;
  auStack_10._8_4_ = 0;
  auStack_10._12_2_ = 0;
  auStack_10._14_2_ = 0;
  DStack_8._dictionary = (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key = 0;
  DStack_8._current.value.prevPrototypeId = 0;
  DStack_8._current.value.pendingRuntimePrototype = (RuntimePrototypeCubeModel *)0x0;
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
  pOStack_11 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).updateTime = (float)pOStack_11;
  pDStack_14 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)MVRigidBody_StuckEvaluator_GetOverlapDictionary(this,(MethodInfo *)0x0);
  if (pDStack_14 ==
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
    pOStack_15 = this_01;
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
      pDVar16 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_17,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                         );
      uStack_18 = 0;
      auStack_9._0_4_ = pDVar16->_dictionary;
      auStack_9._4_4_ = pDVar16->_index;
      auStack_9._8_4_ = pDVar16->_version;
      auStack_9._12_4_ = pDVar16->_currentValue;
      uStack_1 = 1;
      pDStack_19 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                   auStack_9;
      while (bVar20 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                     UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                 *)auStack_9,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                               ), bVar20 != 0) {
        pOStack_21 = (Object *)auStack_9._12_4_;
        bVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                          ((Dictionary_2_System_Int32_PendingPrototypeData_ *)pDStack_14,
                           auStack_9._12_4_,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                          );
        if (bVar20 == 0) {
          if (pOStack_11 == (Object__Class *)0x0) goto code_?;
          in_stack_22 = pOStack_11;
          func_?(pOStack_11,pOStack_21,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)auStack_9,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 ,(MethodInfo *)in_stack_22);
      uStack_1 = 0xffffffff;
      if (pOStack_11 != (Object__Class *)0x0) {
        pLVar23 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&DStack_17,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pOStack_11,
                            MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
        uStack_18 = 0;
        auStack_10._0_4_ = pLVar23->_list;
        auStack_10._4_4_ = pLVar23->_index;
        auStack_10._8_4_ = pLVar23->_version;
        auStack_10._12_4_ = pLVar23->_current;
        uStack_1 = 4;
        pDStack_19 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                     auStack_10;
        while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                       ::RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                 ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)auStack_10,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                 ), bVar20 != 0) {
          pDVar24 = (this->fields).stuckObjects;
          if (pDVar24 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar24,auStack_10._12_4_,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                    );
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)auStack_10,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                   (MethodInfo *)in_stack_7);
        uStack_1 = 0xffffffff;
        pDVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                            ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                              *)(auStack_9 + 0x10),pDStack_14,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                            );
        uStack_18 = 0;
        DStack_8._dictionary =
             (Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar25->_dictionary;
        DStack_8._version = pDVar25->_version;
        DStack_8._index = pDVar25->_index;
        DStack_8._current.key = (pDVar25->_current).key.sheetInstanceID;
        uVar26 = *(undefined8 *)&(pDVar25->_current).key.index;
        DStack_8._current.value.prevPrototypeId = (int32_t)uVar26;
        DStack_8._current.value.pendingRuntimePrototype =
             (RuntimePrototypeCubeModel *)((ulonglong)uVar26 >> 0x20);
        DStack_8._getEnumeratorRetType = pDVar25->_getEnumeratorRetType;
        uStack_1 = 7;
        pDStack_19 = &DStack_8;
        while (bVar20 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::Int32,PendingPrototypeData]::
                       Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData__MoveNext
                                 (&DStack_8,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                                 ), bVar20 != 0) {
          DStack_17._version = DStack_8._current.value.prevPrototypeId;
          DStack_17._index = DStack_8._current.key;
          pOStack_11 = (Object__Class *)DStack_8._current.value.pendingRuntimePrototype;
          pDVar24 = (this->fields).stuckObjects;
          if (pDVar24 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
          goto code_?;
          bVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pDVar24,
                             DStack_8._current.key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                            );
          pMVar27 = (MethodInfo *)(this->fields).stuckObjects;
          if (bVar20 == 0) {
            pOStack_15 = (Object__Class *)
                         func_?(TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
            overlapResult.localCubePos = (IntVector__Array *)pOStack_11;
            overlapResult.woId = DStack_17._version;
            MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                      ((MVRigidBody_StuckEvaluator_StuckObject *)pOStack_15,overlapResult,
                       (MethodInfo *)0x0);
            if (pMVar27 == (MethodInfo *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pMVar27,DStack_17._index,
                       (Object *)pOStack_15,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                      );
          }
          else {
            if (pMVar27 == (MethodInfo *)0x0) goto code_?;
            pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pMVar27,
                                 DStack_17._index,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                );
            if (pOVar28 == (Object *)0x0) goto code_?;
            pOVar28[1].monitor = (MonitorData *)DStack_17._version;
            pOVar28[2].klass = pOStack_11;
            func_?(pOVar28 + 2);
            in_stack_6 = (MethodInfo **)pMVar27;
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDStack_14,
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
          pDVar16 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_17,this_03,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                             );
          uStack_18 = 0;
          pMVar27 = (MethodInfo *)pDVar16->_version;
          this_00 = (MVRigidBody_StuckEvaluator_StuckObject *)pDVar16->_currentValue;
          uStack_1 = 10;
          pDStack_19 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32_PendingPrototypeData_ *)
                       &stack0xffffff68;
          while (bVar20 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                         UInt32,System::Object]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                   ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                     *)&stack0xffffff68,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                                   ), bVar20 != 0) {
            if (this_00 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
            fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
            if (_UNK_? <= fVar29 - (this_00->fields).stuckTime) {
              in_stack_30 = (MethodInfo *)0x0;
              bVar20 = MVRigidBody+StuckEvaluator+StuckObject::
                      MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                (this_00,(MethodInfo *)0x0);
              if (bVar20 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffff68,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                           ,pMVar27);
                *unaff_FS_OFFSET = uStack_3;
                return 1;
              }
            }
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff68,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                     ,in_stack_30);
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
  pcVar31 = (code *)swi(3);
  bVar20 = (*pcVar31)();
  return bVar20;
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
  (this->fields).stuckObjects =
       (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)this_00;
  func_?(method_00,this_00);
  (this->fields).updateInterval = 0.2;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).updateTime = fVar1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).getOverlappingObjects = getOverlappingObjects;
  func_?(&(this->fields).getOverlappingObjects,getOverlappingObjects);
  return;
}

