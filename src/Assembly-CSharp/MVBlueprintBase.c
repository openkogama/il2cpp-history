
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
  pIStack_1 = (IEqualityComparer_1_System_Object_ *)0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object__Class *)0x0;
  pMVar7 = MVGroup::MVGroup_Clone
                     ((MVGroup *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,worldObjects,
                      prototypes,(MethodInfo *)0x0);
  if (pMVar7 != (MVWorldObjectClient *)0x0) {
    if (((pMVar7->klass->_1).naturalAligment < (TypeInfo__MVBlueprintBase->_1).naturalAligment) ||
       ((MVBlueprintBase__Class *)
        (pMVar7->klass->_1).typeHierarchy[(TypeInfo__MVBlueprintBase->_1).naturalAligment - 1] !=
        TypeInfo__MVBlueprintBase)) {
      func_?();
    }
    else {
      if (pMVar7[1].fields._.id == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
code_?:
        *unaff_FS_OFFSET = iStack_3;
        return pMVar7;
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                pMVar7[1].fields._.id;
      pSVar8 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc0,(MethodInfo *)0x0)
      ;
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
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
        pSVar8 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&stack0xffffffb0,(MethodInfo *)0x0);
        this_01 = (RegexCharClass_SingleRange)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)pSVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if ((this_01 != (RegexCharClass_SingleRange)0x0) &&
           ((*(byte *)(*(int *)this_01 + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment ||
            (*(Dictionary_2_System_Object_System_Object___Class **)
              (*(int *)(*(int *)this_01 + 100) + -4 +
              (uint)(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment * 4) !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
        goto code_?;
        RStack_10 = this_01;
        this_02 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        method_01 = TypeInfo__System__Collections__Generic__List<System::Object>;
        pDStack_11 = this_02;
        this_03 = (Int32__Class *)func_?();
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
                   MethodInfo__System__Collections__Generic__List<System::Object>__List__);
        pIStack_12 = this_03;
        if ((this_01 != (RegexCharClass_SingleRange)0x0) &&
           (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                                ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_01,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                ),
           this_04 !=
           (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          pDVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)&stack0xffffffbc,
                              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)this_04,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pDVar13->_index;
          pOVar14 = pDVar13->_currentValue;
          pIStack_1 = (IEqualityComparer_1_System_Object_ *)0x1;
          pDStack_15 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                        *)&stack0xffffffa0;
          while( true ) {
            bVar9 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                              ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                *)&stack0xffffffa0,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar9 == 0) break;
            if (this_03 == (Int32__Class *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_03,pOVar14,
                       MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                      );
          }
          pIStack_1 = (IEqualityComparer_1_System_Object_ *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffa0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          pIStack_1 = (IEqualityComparer_1_System_Object_ *)0xffffffff;
          if (this_03 != (Int32__Class *)0x0) {
            pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)&stack0xffffffbc,
                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )this_03,
                                MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__
                               );
            pOStack_6 = (Object__Class *)pLVar16->_list;
            key = pLVar16->_current;
            pIStack_1 = (IEqualityComparer_1_System_Object_ *)0x4;
            while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                           Object]::List_1_T_Enumerator_System_Object__MoveNext
                                     ((List_1_T_Enumerator_System_Object_ *)&pOStack_6,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                                     ), bVar9 != 0) {
              RStack_10 = key;
              if (cloneBookkeeping == (CloneBookkeeping *)0x0) goto code_?;
              method_01 = (List_1_System_Object___Class *)
                          (cloneBookkeeping->fields).worldObjectIdsMaps;
              TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_01,(Object *)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if ((method_01 == (List_1_System_Object___Class *)0x0) ||
                 (pIStack_12 = (Int32__Class *)
                               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                 , TVar17.m_Index == 0)) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              piVar18 = (int32_t *)func_?();
              pDVar19 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                         *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                     ((Dictionary_2_System_Int32_System_Object_ *)method_01,*piVar18,
                                      (MethodInfo *)pIStack_12);
              pDStack_20 = pDVar19;
              pOVar14 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)RStack_10,
                         pOVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              pDStack_11 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                            *)&pDStack_15;
              pIStack_12 = TypeInfo__System__Int32;
              pDStack_20 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Class
                            *)&UNK_?;
              pDStack_15 = pDVar19;
              key = (RegexCharClass_SingleRange)func_?();
              if (this_02 ==
                  (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                   *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,
                         (Object *)RStack_10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
            }
            pIStack_1 = (IEqualityComparer_1_System_Object_ *)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&pOStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                       ,(MethodInfo *)method_01);
            pIStack_1 = (IEqualityComparer_1_System_Object_ *)0xffffffff;
            pMVar7[1].fields._.itemId = (int32_t)this_02;
            func_?();
            goto code_?;
          }
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
  pcVar21 = (code *)swi(3);
  pMVar7 = (MVWorldObjectClient *)(*pcVar21)();
  return pMVar7;
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
  DStack_6._16_8_ = (Il2CppType)0x0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if (wo != (MVWorldObjectClient *)0x0) {
    if ((wo->fields)._.type != (this->fields)._._._.type) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Trying_to_compare_different_type,(MethodInfo *)0x0);
    }
    if (((wo->klass->_1).naturalAligment < (TypeInfo__MVBlueprintBase->_1).naturalAligment) ||
       ((MVBlueprintBase__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVBlueprintBase->_1).naturalAligment - 1] !=
        TypeInfo__MVBlueprintBase)) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Not_a_blue_print,(MethodInfo *)0x0);
    }
    unaff_ESI.m_Index = (int32_t)wo->klass;
    if (((((MVWorldObjectClient__Class *)unaff_ESI.m_Index)->_1).naturalAligment <
         (TypeInfo__MVBlueprintBase->_1).naturalAligment) ||
       ((MVBlueprintBase__Class *)
        (((MVWorldObjectClient__Class *)unaff_ESI.m_Index)->_1).typeHierarchy
        [(TypeInfo__MVBlueprintBase->_1).naturalAligment - 1] != TypeInfo__MVBlueprintBase)) {
      func_?(wo,TypeInfo__MVBlueprintBase);
    }
    else {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (this->fields)._._._.data;
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (this_00,(Object *)StringLiteral_BlueprintData,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        if (unaff_ESI.m_Index != 0) {
          pDVar7 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (unaff_ESI.m_Index,(Object *)StringLiteral_ChildrenMap,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
          if (unaff_ESI.m_Index != 0) {
            pDVar7 = 
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
            if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment <= *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8)) &&
               (*(Dictionary_2_System_Object_System_Object___Class **)
                 (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                 (uint)(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment * 4) ==
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       UInt32,System::Object]::
                       Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                 ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                   *)&stack0xffffffa8,
                                  (Dictionary_2_System_UInt32_System_Object_ *)unaff_ESI.m_Index,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                                 );
              unaff_ESI.m_Index = (int32_t)&DStack_6;
              _Stack_28.dummy = (void *)0x0;
              DStack_6._dictionary =
                   (Dictionary_2_System_Object_System_Object_ *)pDVar8->_dictionary;
              DStack_6._version = pDVar8->_version;
              DStack_6._index = pDVar8->_index;
              DStack_6._current.key = (Object *)(pDVar8->_current).key;
              DStack_6._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
              pIStack_1 = (Il2CppInteropData *)0x1;
              pMStack_9 = (MVWorldObjectClient__Class *)unaff_ESI.m_Index;
              do {
                bVar10 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                  (&DStack_6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                  );
                pMVar11 = (MVWorldObjectClient *)DStack_6._current.key;
                if (bVar10 == 0) {
                  pIStack_1 = (Il2CppInteropData *)0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)unaff_ESI.m_Index,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                             ,(MethodInfo *)in_stack_5);
                  *unaff_FS_OFFSET = pIStack_2;
                  return;
                }
                _Stack_18.__klassIndex = (TypeDefinitionIndex)DStack_6._current.value;
                pMVar12 = (MVWorldObjectClient *)0x0;
                if ((MVWorldObjectClient *)DStack_6._current.key != (MVWorldObjectClient *)0x0) {
                  if ((MVWorldObjectClient__Class *)(DStack_6._current.key)->klass ==
                      (MVWorldObjectClient__Class *)TypeInfo__System__String) {
                    pMVar12 = (MVWorldObjectClient *)DStack_6._current.key;
                  }
                  pSVar13 = TypeInfo__System__String;
                  if (pMVar12 == (MVWorldObjectClient *)0x0) goto code_?;
                }
                _Stack_18.typeHandle =
                     (Il2CppMetadataTypeHandle)
                     MVBlueprintBase_GetChild(this,(String *)pMVar12,(MethodInfo *)0x0);
                pMVar12 = (MVWorldObjectClient *)0x0;
                if (pMVar11 != (MVWorldObjectClient *)0x0) {
                  if ((MVWorldObjectClient__Class *)((Object *)pMVar11)->klass ==
                      (MVWorldObjectClient__Class *)TypeInfo__System__String) {
                    pMVar12 = pMVar11;
                  }
                  pSVar13 = TypeInfo__System__String;
                  if (pMVar12 == (MVWorldObjectClient *)0x0) goto code_?;
                }
                in_stack_5 = (MethodInfo **)wo;
                pMVar11 = MVBlueprintBase_GetChild
                                   ((MVBlueprintBase *)wo,(String *)pMVar12,(MethodInfo *)0x0);
                if (pMVar11 != (MVWorldObjectClient *)0x0) {
                  if (_Stack_18.dummy == (MVWorldObjectClient *)0x0) goto code_?;
                  iVar14._0_1_ = (_Stack_18.array + 0x50)->rank;
                  iVar14._1_1_ = (_Stack_18.array + 0x50)->numsizes;
                  iVar14._2_1_ = (_Stack_18.array + 0x50)->numlobounds;
                  iVar14._3_1_ = (_Stack_18.array + 0x50)->field_0x7;
                  if ((pMVar11->fields)._.type == iVar14) {
                    in_stack_5 = (MethodInfo **)0x2e;
                    func_?(0x2e,_Stack_18.dummy,pMVar11,_visibleCubesOnly,matchingCubeCount,
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
  pSVar13 = (String__Class *)func_?();
  pMVar11 = wo;
code_?:
  func_?(pMVar11,pSVar13);
  pSVar13 = extraout_ECX;
code_?:
  uVar15 = func_?(pMVar11,pSVar13);
  func_?(uVar15);
  pDVar7 = extraout_EDX;
code_?:
  func_?(unaff_ESI.m_Index,pDVar7);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  child = (RegexCharClass_SingleRange)wo;
  if (wo != (MVWorldObjectClient *)0x0) {
    left = (XNamespace *)
           mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
    pMStack_8 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      LStack_7._list = (List_1_System_Object_ *)TypeInfo__System__Type;
      unaff_EBX = (MethodInfo *)&UNK_?;
      func_?();
    }
    bVar9 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                      (left,(XNamespace *)pMStack_8,(MethodInfo *)0x0);
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
    pMVar11 = TypeInfo__MVBlueprintBase;
    if (((wo->klass->_1).naturalAligment < (TypeInfo__MVBlueprintBase->_1).naturalAligment) ||
       ((MVBlueprintBase__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVBlueprintBase->_1).naturalAligment - 1] !=
        TypeInfo__MVBlueprintBase)) goto code_?;
    if (compareChildren != (List_1_System_String_ *)0x0) {
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_13,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          compareChildren,
                          MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                         );
      LStack_7._list = (List_1_System_Object_ *)pLVar12->_list;
      LStack_7._index = pLVar12->_index;
      LStack_7._version = pLVar12->_version;
      LStack_7._current = *(Object **)&pLVar12->_current;
      LStack_13._version = 0;
      uStack_1 = 1;
      LStack_13._current = (RegexCharClass_SingleRange)&LStack_7;
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                          );
        child = (RegexCharClass_SingleRange)LStack_7._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        pMStack_8 = MVBlueprintBase_GetChild
                               ((MVBlueprintBase *)wo,(String *)LStack_7._current,(MethodInfo *)0x0
                               );
        if (pMStack_8 == (MVWorldObjectClient *)0x0) {
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
        pMVar14 = MVBlueprintBase_GetChild(this,(String *)child,(MethodInfo *)0x0);
        if (pMVar14 == (MVWorldObjectClient *)0x0) goto code_?;
        in_stack_6 = (MVBlueprintBase__Class **)&UNK_?;
        cVar15 = func_?(0x2d,pMVar14,pMStack_8,koGaMaPackageClient,insertedByProfileId);
      } while (cVar15 != '\0');
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                 ,unaff_EBX);
      goto code_?;
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pMVar11 = extraout_EDX;
code_?:
  func_?(child,pMVar11);
  pcVar17 = (code *)swi(3);
  bVar9 = (*pcVar17)();
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
  key_00 = child;
  pMVar1 = this;
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).childIdMap
  ;
  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar2,(Object *)child,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      pMVar1 = (MVBlueprintBase *)
               mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_Child_with_name__0__not_found_in,(Object *)key_00,
                          (Object *)pMVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        child = (String *)TypeInfo__UnityEngine__Debug;
        this = (MVBlueprintBase *)&UNK_?;
        func_?();
      }
      child = (String *)0x0;
      this = pMVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pMVar1,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pMVar1->fields).childIdMap;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)key_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar4.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          this = (MVBlueprintBase *)TVar4;
          piVar5 = (int32_t *)func_?();
          key = *piVar5;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                           );
            cRam_? = '\x01';
          }
          this_00 = (pMVar1->fields)._.children;
          this = (MVBlueprintBase *)0x0;
          if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&this,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            return (MVWorldObjectClient *)this;
          }
        }
        else {
          this = (MVBlueprintBase *)TypeInfo__System__Int32;
          func_?();
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar7 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar7;
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
               &stack0xffffffd0,this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    uStack_1 = 1;
    do {
      pMVar4 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar5 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pMVar4 == (MethodInfo *)0x0) break;
      if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (byte)pMVar4->methodPointer[0xb8])
         && (*(MVCubeModelInstance__Class **)
              (*(int *)(pMVar4->methodPointer + 100) + -4 +
              (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) ==
             TypeInfo__MVCubeModelInstance)) {
        if (pMVar4 == (MethodInfo *)0x0) break;
        if ((((this->fields)._._.interactionFlags & 0x4000) != 0) &&
           (uVar7._0_2_ = pMVar4[3].flags, uVar7._2_2_ = pMVar4[3].iflags, (uVar7 & 0x4000) == 0)) {
          uVar8 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
          piVar9 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar9 = (uint)*piVar9 & 0xffffbfff;
          *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar8;
        }
      }
      if (pMVar4 == (MethodInfo *)0x0) break;
      uVar10._0_2_ = pMVar4[3].flags;
      uVar10._2_2_ = pMVar4[3].iflags;
      pMVar4[3].flags = (short)(uVar10 & 0xffffbfff);
      pMVar4[3].iflags = (short)((uVar10 & 0xffffbfff) >> 0x10);
      pMVar4[3].slot = pMVar4[3].slot;
      pMVar4[3].parameters_count = pMVar4[3].parameters_count;
      pMVar4[3].field_0x2f = pMVar4[3].field_0x2f;
    } while( true );
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
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
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  if (pDVar6 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
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
    if (pDVar6 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar6,(Object *)StringLiteral_BlueprintData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar9.m_Index == 0) {
        (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        if ((*(byte *)(*(int *)TVar9.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar9.m_Index + 100) + -4 +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)TVar9.m_Index;
        if ((*(byte *)(*(int *)TVar9.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar9.m_Index + 100) + -4 +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
      }
      DStack_10._version = (int32_t)&(this->fields).blueprintData;
      DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)&UNK_?;
      DStack_10._index = TVar9.m_Index;
      func_?();
      pDVar6 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).blueprintData;
      if (pDVar6 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar6,(Object *)StringLiteral_ChildrenMap,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar9.m_Index == 0) {
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          if ((*(byte *)(*(int *)TVar9.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)TVar9.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)TVar9.m_Index;
          if ((*(byte *)(*(int *)TVar9.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)TVar9.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        pDVar11 = (this->fields).childIdMap;
        if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             (&DStack_10,(Dictionary_2_System_UInt32_System_Object_ *)pDVar11,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          uStack_13 = 0;
          DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar12->_dictionary;
          DStack_7._version = pDVar12->_version;
          DStack_7._index = pDVar12->_index;
          DStack_7._current.key = (Object *)(pDVar12->_current).key;
          DStack_7._16_8_ = *(undefined8 *)&(pDVar12->_current).value;
          uStack_1 = 1;
          pDStack_14 = &DStack_7;
          while( true ) {
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar8 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&DStack_7,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pDVar11 = (this->fields).idChildMap;
            if (pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDVar11,DStack_7._current.value,DStack_7._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
        }
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_OnDataUpdate
               (MVBlueprintBase *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  DStack_2._current.value = (Object *)0x0;
  DStack_2._getEnumeratorRetType = 0;
  DStack_2._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_2._version = 0;
  DStack_2._index = 0;
  DStack_2._current.key = (Object *)0x0;
  if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_3 + 0x58)
      != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                        (in_stack_3 + 0x58),(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)(in_stack_3 + 0x58)
        != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                          (in_stack_3 + 0x58),(Object *)StringLiteral_BlueprintData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar5.m_Index == 0) {
        *(undefined4 *)(in_stack_3 + 0xe0) = 0;
      }
      else {
        if ((*(byte *)(*(int *)TVar5.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar5.m_Index + 100) + -4 +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        *(int32_t *)(in_stack_3 + 0xe0) = TVar5.m_Index;
        if ((*(byte *)(*(int *)TVar5.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar5.m_Index + 100) + -4 +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
      }
      DStack_6._version = in_stack_3 + 0xe0;
      DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)&UNK_?;
      DStack_6._index = TVar5.m_Index;
      func_?();
      if (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
           (in_stack_3 + 0xe0) !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (*(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                            (in_stack_3 + 0xe0),(Object *)StringLiteral_ChildrenMap,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar5.m_Index == 0) {
          *(undefined4 *)(in_stack_3 + 0xe4) = 0;
        }
        else {
          if ((*(byte *)(*(int *)TVar5.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)TVar5.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          *(int32_t *)(in_stack_3 + 0xe4) = TVar5.m_Index;
          if ((*(byte *)(*(int *)TVar5.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)TVar5.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
        }
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        if (*(Dictionary_2_System_UInt32_System_Object_ **)(in_stack_3 + 0xe4) !=
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             (&DStack_6,
                              *(Dictionary_2_System_UInt32_System_Object_ **)
                               (in_stack_3 + 0xe4),
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          uStack_8 = 0;
          DStack_2._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
          DStack_2._version = pDVar7->_version;
          DStack_2._index = pDVar7->_index;
          DStack_2._current.key = (Object *)(pDVar7->_current).key;
          DStack_2._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
          pDStack_9 = &DStack_2;
          while( true ) {
            bVar4 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_2,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar4 == 0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&DStack_2,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uVar1;
              return;
            }
            if (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_3 + 0xe8) ==
                (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_3 + 0xe8),
                       DStack_2._current.value,DStack_2._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
        }
      }
    }
  }
  uVar1 = func_?();
  func_?(uVar1);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  (this->fields).idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(&(this->fields).idChildMap,this_00);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields)._.children = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_01;
  func_?(&(this->fields)._.children,this_01);
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
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
  (this->fields).idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(&(this->fields).idChildMap,this_00);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields)._.children = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_01;
  func_?(&(this->fields)._.children,this_01);
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
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
  (this->fields).idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(&(this->fields).idChildMap,this_00);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields)._.children = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_01;
  func_?(&(this->fields)._.children,this_01);
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
  MVBlueprintBase_MapDataToFields(this,(MethodInfo *)0x0);
  return;
}

