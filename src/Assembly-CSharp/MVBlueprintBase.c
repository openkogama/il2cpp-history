
/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Clone
          (MVBlueprintBase *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  ppIStack_1 = (Il2CppClass **)0xffffffff;
  pIStack_2 = (Il2CppRGCTXData *)&DAT_?;
  pIStack_3 = (Int32__StaticFields *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppRuntimeInterfaceOffsetPair *)&stack0xffffff88;
  pIVar5 = (Il2CppRuntimeInterfaceOffsetPair *)&stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__BlueprintData);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    func_?(&TypeInfo__MVBlueprintBase);
    func_?(&StringLiteral_No_blueprint_data);
    func_?(&StringLiteral_No_children_map);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  pMVar6 = MVGroup::MVGroup_Clone
                     ((MVGroup *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,worldObjects,
                      prototypes,(MethodInfo *)0x0);
  if (pMVar6 != (MVWorldObjectClient *)0x0) {
    bVar7 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((pMVar6->klass->_1).naturalAligment < bVar7) ||
       ((MVBlueprintBase__Class *)(pMVar6->klass->_1).typeHierarchy[bVar7 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      func_?();
    }
    else {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                pMVar6[1].fields._.id;
      if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = pIStack_3;
        return pMVar6;
      }
      pSVar8 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc4,(MethodInfo *)0x0)
      ;
      bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)pSVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar9 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_children_map,(MethodInfo *)0x0);
        goto code_?;
      }
      pSVar8 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffb4,(MethodInfo *)0x0)
      ;
      prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (this_00,(Object *)pSVar8,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (prototypes == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0;
      }
      else {
        bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((*(byte *)(*(int *)prototypes + 0xb8) < bVar7) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)prototypes + 100) + -4 + (uint)bVar7 * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
      }
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      method_00 = (Il2CppClass *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pDStack_10 = this_01;
      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      if ((prototypes != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) &&
         (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)prototypes,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              ),
         this_03 !=
         (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        pDVar11 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)&stack0xffffffc0,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                           );
        pMVar12 = (MethodInfo *)pDVar11->_currentValue;
        ppIStack_1 = (Il2CppClass **)0x1;
        pIStack_13 = (Int32__Class *)&stack0xffffff94;
        while (bVar9 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff94,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 ), bVar9 != 0) {
          if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_02,(Object *)pMVar12,
                     MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                    );
        }
        ppIStack_1 = (Il2CppClass **)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffff94,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,pMVar12);
        ppIStack_1 = (Il2CppClass **)0xffffffff;
        if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                    ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                      *)&stack0xffffffc0,this_02,
                     MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__
                    );
          ppIStack_1 = (Il2CppClass **)0x4;
          while (pMVar12 = 
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                , bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Object]::List_1_T_Enumerator_System_Object__MoveNext
                                    ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffa4,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                                    ), bVar9 != 0) {
            if (cloneBookkeeping == (CloneBookkeeping *)0x0) goto code_?;
            method_00 = (Il2CppClass *)(cloneBookkeeping->fields).worldObjectIdsMaps;
            TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               prototypes,(Object *)pMVar12,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            if ((method_00 == (Il2CppClass *)0x0) ||
               (pMStack_15 = 
                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_,
               TVar14.m_Index == 0)) goto code_?;
            if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar16 = (int32_t *)func_?();
            pOStack_17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)method_00,*piVar16,
                                    pMStack_15);
            pOVar18 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)prototypes,(Object *)pMVar12,
                       pOVar18,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pOStack_17 = (Object *)&pIStack_13;
            pIStack_13 = TypeInfo__System__Int32;
            pOVar18 = (Object *)func_?();
            if (this_01 ==
                (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar18,
                       (Object *)pMVar12,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          ppIStack_1 = (Il2CppClass **)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffa4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                     ,(MethodInfo *)method_00);
          ppIStack_1 = (Il2CppClass **)0xffffffff;
          pMVar6[1].fields._.itemId = (int32_t)this_01;
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  pMVar6 = (MVWorldObjectClient *)(*pcVar19)();
  return pMVar6;
}


/* Void Compare(MVWorldObjectClient, Boolean, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Compare
               (MVBlueprintBase *this,MVWorldObjectClient *wo,bool visibleCubesOnly,
               int32_t *matchingCubeCount,int32_t *investigatedCubeCount,MethodInfo *method)

{
  pIStack_1 = (Il2CppInteropData *)0xffffffff;
  p_Stack_c = (Il2CppMetadataTypeHandle)&DAT_?;
  pIStack_2 = (Il2CppGenericClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_2;
  pIStack_3 = (Il2CppClass *)&stack0xffffff9c;
  pIVar4 = (Il2CppClass *)&stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    in_stack_5 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&TypeInfo__MVBlueprintBase);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Trying_to_compare_different_type);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_Not_a_blue_print);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  value = (Dictionary_2_System_Object_System_Object___Class *)wo;
  if (wo != (MVWorldObjectClient *)0x0) {
    if ((wo->fields)._.type != (this->fields)._._._.type) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Trying_to_compare_different_type,(MethodInfo *)0x0);
    }
    bVar6 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar6) ||
       ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[bVar6 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Not_a_blue_print,(MethodInfo *)0x0);
    }
    bVar6 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    unaff_EDI = this;
    if (((wo->klass->_1).naturalAligment < bVar6) ||
       ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[bVar6 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      func_?(wo,TypeInfo__MVBlueprintBase);
    }
    else {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (this->fields)._._._.data;
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        value = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (this_01.m_Index != 0) {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          value = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) < bVar6) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar6 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (this_01.m_Index,(Object *)StringLiteral_ChildrenMap,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          value = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (this_01.m_Index != 0) {
            bVar6 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            value = 
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
            if ((bVar6 <= *(byte *)(*(int *)this_01.m_Index + 0xb8)) &&
               (*(Dictionary_2_System_Object_System_Object___Class **)
                 (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar6 * 4) ==
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       UInt32,System::Object]::
                       Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                 ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                   *)&stack0xffffffa8,
                                  (Dictionary_2_System_UInt32_System_Object_ *)this_01.m_Index,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                                 );
              value = (Dictionary_2_System_Object_System_Object___Class *)&DStack_8;
              _Stack_28.dummy = (void *)0x0;
              DStack_8._dictionary =
                   (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
              DStack_8._version = pDVar7->_version;
              DStack_8._index = pDVar7->_index;
              DStack_8._current.key = (Object *)(pDVar7->_current).key;
              DStack_8._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
              pIStack_1 = (Il2CppInteropData *)0x1;
              pDStack_9 = value;
              do {
                bVar10 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                  (&DStack_8,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                  );
                unaff_EDI = (MVBlueprintBase *)DStack_8._current.key;
                if (bVar10 == 0) {
                  pIStack_1 = (Il2CppInteropData *)0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)value,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                             ,(MethodInfo *)in_stack_5);
                  *unaff_FS_OFFSET = pIStack_2;
                  return;
                }
                _Stack_18.__klassIndex = (TypeDefinitionIndex)DStack_8._current.value;
                pMVar11 = (MVBlueprintBase *)0x0;
                if ((MVBlueprintBase *)DStack_8._current.key != (MVBlueprintBase *)0x0) {
                  if ((MVBlueprintBase__Class *)(DStack_8._current.key)->klass ==
                      (MVBlueprintBase__Class *)TypeInfo__System__String) {
                    pMVar11 = (MVBlueprintBase *)DStack_8._current.key;
                  }
                  pSVar12 = TypeInfo__System__String;
                  if (pMVar11 == (MVBlueprintBase *)0x0) goto code_?;
                }
                _Stack_18.typeHandle =
                     (Il2CppMetadataTypeHandle)
                     MVBlueprintBase_GetChild(this,(String *)pMVar11,(MethodInfo *)0x0);
                pMVar11 = (MVBlueprintBase *)0x0;
                if (unaff_EDI != (MVBlueprintBase *)0x0) {
                  if ((MVBlueprintBase__Class *)((Object *)unaff_EDI)->klass ==
                      (MVBlueprintBase__Class *)TypeInfo__System__String) {
                    pMVar11 = unaff_EDI;
                  }
                  pSVar12 = TypeInfo__System__String;
                  if (pMVar11 == (MVBlueprintBase *)0x0) goto code_?;
                }
                in_stack_5 = (MethodInfo **)wo;
                pMVar13 = MVBlueprintBase_GetChild
                                   ((MVBlueprintBase *)wo,(String *)pMVar11,(MethodInfo *)0x0);
                if (pMVar13 != (MVWorldObjectClient *)0x0) {
                  if (_Stack_18.dummy == (MVWorldObjectClient *)0x0) goto code_?;
                  if ((pMVar13->fields)._.type == *(int32_t *)(_Stack_18.__klassIndex + 0x54)) {
                    in_stack_5 = (MethodInfo **)0x2e;
                    func_?(0x2e,_Stack_18.dummy,pMVar13,_visibleCubesOnly,matchingCubeCount,
                                    investigatedCubeCount);
                  }
                }
              } while( true );
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  pSVar12 = (String__Class *)func_?();
code_?:
  func_?(unaff_EDI,pSVar12);
  pSVar12 = extraout_ECX;
code_?:
  uVar14 = func_?(unaff_EDI,pSVar12);
  func_?(uVar14);
  this_01.m_Index = extraout_EDX;
code_?:
  func_?(this_01.m_Index,value);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_CompareWithKoGaMaPackage
               (MVBlueprintBase *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  compareChildren =
       (List_1_System_String_ *)
       func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)compareChildren,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).childIdMap;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
      StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)&stack0xffffffd4,
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                );
      method_00 = (MethodInfo *)0x0;
      uStack_1 = 1;
      do {
        pMVar4 = 
        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
        ;
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,UnityEngine::UIElements::TextureId]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar5 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          bVar5 = MVBlueprintBase_CompareWorldObjectsInChildrenMap
                            (this,wo,koGaMaPackageClient,compareChildren,insertedByProfileId,
                             (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return bVar5;
        }
        item = (MethodInfo *)0x0;
        if (pMVar4 != (MethodInfo *)0x0) {
          if ((String__Class *)pMVar4->methodPointer == TypeInfo__System__String) {
            item = pMVar4;
          }
          if (item == (MethodInfo *)0x0) goto code_?;
        }
        if (compareChildren == (List_1_System_String_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)compareChildren,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  );
      } while( true );
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean CompareWorldObjectsInChildrenMap(MVWorldObjectClient, KoGaMaPackageClient,
   List`1[System.String], Int32 ByRef) */

bool Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_CompareWorldObjectsInChildrenMap
               (MVBlueprintBase *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,List_1_System_String_ *compareChildren,
               int32_t *insertedByProfileId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                   );
    in_stack_6 = &TypeInfo__MVBlueprintBase;
    func_?();
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Types_does_not_match_this__0__an);
    func_?(&StringLiteral_otherChild__0__is_null);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  child = (RegexCharClass_SingleRange)wo;
  if (wo != (MVWorldObjectClient *)0x0) {
    left = (XNamespace *)
           mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
    pMStack_7 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      LStack_8._list = (List_1_System_Object_ *)TypeInfo__System__Type;
      unaff_EBX = (MethodInfo *)&UNK_?;
      func_?();
    }
    bVar9 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                      (left,(XNamespace *)pMStack_7,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      arg0 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      arg1 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_Types_does_not_match_this__0__an,(Object *)arg0,
                          (Object *)arg1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar10,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    bVar11 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    pMVar12 = TypeInfo__MVBlueprintBase;
    if (((wo->klass->_1).naturalAligment < bVar11) ||
       ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[bVar11 - 1] !=
        TypeInfo__MVBlueprintBase)) goto code_?;
    if (compareChildren != (List_1_System_String_ *)0x0) {
      pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_14,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          compareChildren,
                          MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                         );
      LStack_8._list = (List_1_System_Object_ *)pLVar13->_list;
      LStack_8._index = pLVar13->_index;
      LStack_8._version = pLVar13->_version;
      LStack_8._current = *(Object **)&pLVar13->_current;
      LStack_14._version = 0;
      uStack_1 = 1;
      LStack_14._current = (RegexCharClass_SingleRange)&LStack_8;
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                          );
        child = (RegexCharClass_SingleRange)LStack_8._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        pMStack_7 = MVBlueprintBase_GetChild
                               ((MVBlueprintBase *)wo,(String *)LStack_8._current,(MethodInfo *)0x0
                               );
        if (pMStack_7 == (MVWorldObjectClient *)0x0) {
          pSVar10 = mscorlib.dll::System::String::String_Format
                             (StringLiteral_otherChild__0__is_null,(Object *)child,(MethodInfo *)0x0
                             );
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar10,(MethodInfo *)0x0);
          break;
        }
        pMVar15 = MVBlueprintBase_GetChild(this,(String *)child,(MethodInfo *)0x0);
        if (pMVar15 == (MVWorldObjectClient *)0x0) goto code_?;
        in_stack_6 = (MVBlueprintBase__Class **)&UNK_?;
        cVar16 = func_?(0x2d,pMVar15,pMStack_7,koGaMaPackageClient,insertedByProfileId);
      } while (cVar16 != '\0');
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&LStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                 ,unaff_EBX);
      goto code_?;
    }
  }
code_?:
  uVar17 = func_?();
  func_?(uVar17);
  pMVar12 = extraout_EDX;
code_?:
  func_?(child,pMVar12);
  pcVar18 = (code *)swi(3);
  bVar9 = (*pcVar18)();
  return bVar9;
}


/* MVWorldObjectClient GetChild(String) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_GetChild
          (MVBlueprintBase *this,String *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Child_with_name__0__not_found_in);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).childIdMap
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)child,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      message = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Child_with_name__0__not_found_in,(Object *)child,
                           (Object *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields).childIdMap;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)child,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar4 = (int32_t *)func_?();
          pMVar5 = MVGroup::MVGroup_GetChild((MVGroup *)this,*piVar4,(MethodInfo *)0x0);
          return pMVar5;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Initialize
               (MVBlueprintBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffc8,this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    uStack_1 = 1;
    while( true ) {
      pMVar4 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar5 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffb8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pMVar4 == (MethodInfo *)0x0) break;
      cVar7 = (code)(TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if ((((byte)cVar7 <= (byte)pMVar4->methodPointer[0xb8]) &&
          (*(MVCubeModelInstance__Class **)
            (*(int *)(pMVar4->methodPointer + 100) + -4 + (uint)(byte)cVar7 * 4) ==
           TypeInfo__MVCubeModelInstance)) && (pMVar4 != (MethodInfo *)0x0)) {
        uVar8 = (uint)(this->fields)._._.interactionFlags;
        uVar9 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
        if (((uVar8 & 0x4000) != 0) &&
           (uVar10._0_2_ = pMVar4[3].flags, uVar10._2_2_ = pMVar4[3].iflags, (uVar10 & 0x4000) == 0)) {
          *(uint *)&(this->fields)._._.interactionFlags = uVar8 & 0xffffbfff;
          *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar9;
        }
      }
      uVar8._0_2_ = pMVar4[3].flags;
      uVar8._2_2_ = pMVar4[3].iflags;
      pMVar4[3].flags = (short)(uVar8 & 0xffffbfff);
      pMVar4[3].iflags = (short)((uVar8 & 0xffffbfff) >> 0x10);
      pMVar4[3].slot = pMVar4[3].slot;
      pMVar4[3].parameters_count = pMVar4[3].parameters_count;
      pMVar4[3].field_0x2f = pMVar4[3].field_0x2f;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void MapDataToFields() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_MapDataToFields
               (MVBlueprintBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_No_blueprint_data);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    uVar7 = func_?();
    func_?(uVar7);
  }
  else {
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar6,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar8 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar6 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar6,(Object *)StringLiteral_BlueprintData,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
    if (pDStack_9 == (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x0) {
      (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
      ppDVar10 = &(this->fields).blueprintData;
      DStack_11._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)&UNK_?;
      DStack_11._version = (int32_t)ppDVar10;
      DStack_11._index = (int32_t)pDStack_9;
      func_?();
      pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar10;
      if (pDVar6 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (pDVar6,(Object *)StringLiteral_ChildrenMap,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        if (pDStack_9 == (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x0) {
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar12 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if ((*(byte *)(*(int *)pDStack_9 + 0xb8) < bVar12) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)pDStack_9 + 100) + -4 + (uint)bVar12 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)pDStack_9;
          bStack_13 = (
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).naturalAligment;
          if ((*(byte *)(*(int *)pDStack_9 + 0xb8) < bStack_13) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)pDStack_9 + 100) + -4 + (uint)bStack_13 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        pDVar14 = (this->fields).childIdMap;
        if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             (&DStack_11,(Dictionary_2_System_UInt32_System_Object_ *)pDVar14,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          uStack_16 = 0;
          DStack_17._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar15->_dictionary;
          DStack_17._version = pDVar15->_version;
          DStack_17._index = pDVar15->_index;
          DStack_17._current.key = (Object *)(pDVar15->_current).key;
          DStack_17._16_8_ = *(undefined8 *)&(pDVar15->_current).value;
          uStack_1 = 1;
          pDStack_9 = &DStack_17;
          while( true ) {
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_17,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar8 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&DStack_17,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pDVar14 = (this->fields).idChildMap;
            if (pDVar14 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDVar14,DStack_17._current.value,DStack_17._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
        }
      }
      goto code_?;
    }
    bVar12 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)(*(int *)pDStack_9 + 0xb8) < bVar12) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)pDStack_9 + 100) + -4 + (uint)bVar12 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)pDStack_9;
    bStack_13 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
    if ((bStack_13 <= *(byte *)(*(int *)pDStack_9 + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)pDStack_9 + 100) + -4 + (uint)bStack_13 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_OnDataUpdate
               (MVBlueprintBase *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_No_blueprint_data);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_2 + 0x58)
      == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    uVar1 = func_?();
    func_?(uVar1);
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                        (in_stack_2 + 0x58),(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_2 + 0x58)
        == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    pDStack_4 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                             (in_stack_2 + 0x58),(Object *)StringLiteral_BlueprintData,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
    if (pDStack_4 == (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x0) {
      *(undefined4 *)(in_stack_2 + 0xe0) = 0;
code_?:
      DStack_5._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)&UNK_?;
      DStack_5._version = (int32_t)(in_stack_2 + 0xe0);
      DStack_5._index = (int32_t)pDStack_4;
      func_?();
      this_00 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                 (in_stack_2 + 0xe0);
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        pDStack_4 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (this_00,(Object *)StringLiteral_ChildrenMap,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        if (pDStack_4 == (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x0) {
          *(undefined4 *)(in_stack_2 + 0xe4) = 0;
        }
        else {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if ((*(byte *)(*(int *)pDStack_4 + 0xb8) < bVar6) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)pDStack_4 + 100) + -4 + (uint)bVar6 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          *(Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ **)
           (in_stack_2 + 0xe4) = pDStack_4;
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          uStack_7 = (undefined *)CONCAT13(bVar6,(undefined3)uStack_7);
          if ((*(byte *)(*(int *)pDStack_4 + 0xb8) < bVar6) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)pDStack_4 + 100) + -4 + (uint)bVar6 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        if (*(Dictionary_2_System_UInt32_System_Object_ **)(in_stack_2 + 0xe4) !=
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             (&DStack_5,
                              *(Dictionary_2_System_UInt32_System_Object_ **)
                               (in_stack_2 + 0xe4),
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          uStack_9 = 0;
          DStack_10._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
          DStack_10._version = pDVar8->_version;
          DStack_10._index = pDVar8->_index;
          DStack_10._current.key = (Object *)(pDVar8->_current).key;
          DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
          pDStack_4 = &DStack_10;
          while( true ) {
            bVar3 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_10,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar3 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&DStack_10,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uVar1;
              return;
            }
            if (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_2 + 0xe8) ==
                (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_2 + 0xe8),
                       DStack_10._current.value,DStack_10._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
        }
      }
      goto code_?;
    }
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)(*(int *)pDStack_4 + 0xb8) < bVar6) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)pDStack_4 + 100) + -4 + (uint)bVar6 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    *(Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ **)(in_stack_2 + 0xe0)
         = pDStack_4;
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    uStack_7 = (undefined *)CONCAT13(bVar6,(undefined3)uStack_7);
    if ((bVar6 <= *(byte *)(*(int *)pDStack_4 + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)pDStack_4 + 100) + -4 + (uint)bVar6 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  ppDVar1 = &(this->fields).idChildMap;
  *ppDVar1 = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(ppDVar1,this_00);
  MVGroup::MVGroup__ctor_2((MVGroup *)this,data,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase_MapDataToFields(this,(MethodInfo *)0x0);
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor_1
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  ppDVar1 = &(this->fields).idChildMap;
  *ppDVar1 = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(ppDVar1,this_00);
  MVGroup::MVGroup__ctor_1((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase_MapDataToFields(this,(MethodInfo *)0x0);
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor_2
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  ppDVar1 = &(this->fields).idChildMap;
  *ppDVar1 = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(ppDVar1,this_00);
  MVGroup::MVGroup__ctor((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase_MapDataToFields(this,(MethodInfo *)0x0);
  return;
}

