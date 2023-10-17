
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
  pIStack_1 = (Il2CppClass *)0xffffffff;
  puStack_2 = &DAT_?;
  _Stack_10.dummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->dummy = &_Stack_10;
  puStack_3 = &stack0xffffff84;
  puVar4 = &stack0xffffff84;
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
    puVar4 = puStack_3;
  }
  puStack_3 = puVar4;
  method_00 = (MethodInfo *)0x0;
  pBVar5 = (BlueprintData__Enum__Class *)
           MVGroup::MVGroup_Clone
                     ((MVGroup *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,worldObjects,
                      prototypes,(MethodInfo *)0x0);
  if (pBVar5 == (BlueprintData__Enum__Class *)0x0) goto code_?;
  pIVar6 = (pBVar5->_0).image;
  pMStack_7 = TypeInfo__MVBlueprintBase;
  this_00 = pBVar5;
  if (((TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth <= *(byte *)&pIVar6[4].nameNoExt) &&
     (*(MVBlueprintBase__Class **)
       ((pIVar6[2].typeCount - 4) + (uint)(TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth * 4)
      == TypeInfo__MVBlueprintBase)) {
    if ((pBVar5->vtable).CompareTo.method == (MethodInfo *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = _Stack_10;
      return (MVWorldObjectClient *)pBVar5;
    }
    pMVar8 = (pBVar5->vtable).CompareTo.method;
    auStack_9._4_4_ = TypeInfo__MV__Common__BlueprintData;
    RStack_10.First = 2;
    pMStack_7 = (MVBlueprintBase__Class *)0xffffffff;
    pSVar11 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)(auStack_9 + 4),(MethodInfo *)0x0);
    if (pMVar8 == (MethodInfo *)0x0) goto code_?;
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pMVar8,
                       (Object *)pSVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar12 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_children_map,(MethodInfo *)0x0);
      goto code_?;
    }
    pSVar11 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffb0,(MethodInfo *)0x0);
    this_00 = (BlueprintData__Enum__Class *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pMVar8,(Object *)pSVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if ((this_00 == (BlueprintData__Enum__Class *)0x0) ||
       ((pMStack_7 = (MVBlueprintBase__Class *)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth <= *(byte *)&(this_00->_0).image[4].nameNoExt &&
        (*(Dictionary_2_System_Object_System_Object___Class **)
          (((this_00->_0).image[2].typeCount - 4) +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth * 4) ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      pMStack_7 = (MVBlueprintBase__Class *)
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      auStack_9._4_4_ = &UNK_?;
      pMVar8 = (MethodInfo *)func_?();
      if (pMVar8 != (MethodInfo *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pMVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pMStack_13 = pMVar8;
        _Var7.dummy = (void *)func_?();
        if ((((RegexCharClass_SingleRange)_Var7.dummy != (RegexCharClass_SingleRange)0x0) &&
            (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
             LowLevelList_1_System_Object___ctor
                       ((LowLevelList_1_System_Object_ *)_Var7.typeHandle,
                        MethodInfo__System__Collections__Generic__List<System::Object>__List__),
            _Stack_18.dummy = _Var7.dummy, this_00 != (BlueprintData__Enum__Class *)0x0)) &&
           (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                                ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                  *)this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                ),
           this_01 !=
           (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
            *)0x0)) {
          pDVar14 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)auStack_9,
                              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)this_01,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                             );
          uStack_15 = 0;
          pOVar16 = pDVar14->_currentValue;
          pIStack_1 = (Il2CppClass *)0x1;
          pIStack_17 = (Il2CppImage *)&stack0xffffffa0;
          while (bVar12 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                         Object,System::Object]::
                         Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                   ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                     *)&stack0xffffffa0,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                   ), bVar12 != 0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)_Var7.typeHandle,pOVar16,
                       MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                      );
          }
          pIStack_1 = (Il2CppClass *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffa0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          pIStack_1 = (Il2CppClass *)0xffffffff;
          pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)auStack_9,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              _Var7.typeHandle,
                              MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__
                             );
          pMStack_7 = (MVBlueprintBase__Class *)0x0;
          pIStack_1 = (Il2CppClass *)0x4;
          _Var7.typeHandle = *(_union_86 *)&pLVar18->_current;
          RStack_10 = (RegexCharClass_SingleRange)&stack0xffffff90;
          while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Object]::List_1_T_Enumerator_System_Object__MoveNext
                                   ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff90,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                                   ), bVar12 != 0) {
            _Stack_18 = _Var7;
            if (cloneBookkeeping == (CloneBookkeeping *)0x0) goto code_?;
            this_02 = (_union_86)(cloneBookkeeping->fields).worldObjectIdsMaps;
            pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                                 (Object *)_Var7.typeHandle,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (((RegexCharClass_SingleRange)this_02.dummy == (RegexCharClass_SingleRange)0x0) ||
               (pMStack_19 = 
                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_,
               pOVar16 == (Object *)0x0)) goto code_?;
            if ((pOVar16->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            pIVar20 = (Int32Enum__Enum *)func_?();
            pIVar6 = (Il2CppImage *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02.typeHandle,
                                 *pIVar20,pMStack_19);
            pIStack_21 = pIVar6;
            pOVar16 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)_Stack_18.typeHandle,pOVar16,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            auStack_9._4_4_ = &pIStack_17;
            auStack_9._0_4_ = TypeInfo__System__Int32;
            pIStack_17 = pIVar6;
            pOVar16 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)pMVar8,pOVar16,
                       (Object *)_Stack_18.typeHandle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            _Var7 = this_02;
          }
          pIStack_1 = (Il2CppClass *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffff90,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                     ,(MethodInfo *)_Var7.typeHandle);
          pIStack_1 = (Il2CppClass *)0xffffffff;
          (pBVar5->vtable).ToString_1.method = pMVar8;
          func_?();
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  auStack_9._0_4_ = &UNK_?;
  auStack_9._4_4_ = this_00;
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar22 = (code *)swi(3);
  pMVar23 = (MVWorldObjectClient *)(*pcVar22)();
  return pMVar23;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_compare_different_type,(MethodInfo *)0x0);
    }
    if (((wo->klass->_1).typeHierarchyDepth < (TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth) ||
       ((MVBlueprintBase__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVBlueprintBase)) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Not_a_blue_print,(MethodInfo *)0x0);
    }
    unaff_ESI = wo->klass;
    if (((unaff_ESI->_1).typeHierarchyDepth < (TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth) ||
       ((MVBlueprintBase__Class *)
        (unaff_ESI->_1).typeHierarchy[(TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVBlueprintBase)) {
      func_?(wo,TypeInfo__MVBlueprintBase);
    }
    else {
      this_00 = (this->fields)._._._.data;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        unaff_ESI = (MVWorldObjectClient__Class *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_00,(Object *)StringLiteral_BlueprintData,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        if (unaff_ESI != (MVWorldObjectClient__Class *)0x0) {
          pDVar7 = (Dictionary_2_System_Object_System_Object___Class *)(unaff_ESI->_0).image;
          pDVar8 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (((pDVar7->_1).typeHierarchyDepth <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar7->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          unaff_ESI = (MVWorldObjectClient__Class *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                                 (Object *)StringLiteral_ChildrenMap,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
          if (unaff_ESI != (MVWorldObjectClient__Class *)0x0) {
            pDVar7 = (Dictionary_2_System_Object_System_Object___Class *)(unaff_ESI->_0).image;
            pDVar8 = 
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
            if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth <= (pDVar7->_1).typeHierarchyDepth) &&
               ((Dictionary_2_System_Object_System_Object___Class *)
                (pDVar7->_1).typeHierarchy
                [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth - 1] ==
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::
                       Dictionary_2_System_Object_System_Object__GetEnumerator
                                 ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                   *)&stack0xffffffa8,
                                  (Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                                 );
              unaff_ESI = (MVWorldObjectClient__Class *)&DStack_6;
              _Stack_28.dummy = (void *)0x0;
              DStack_6._dictionary = pDVar9->_dictionary;
              DStack_6._version = pDVar9->_version;
              DStack_6._index = pDVar9->_index;
              DStack_6._current.key = (pDVar9->_current).key;
              DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
              pIStack_1 = (Il2CppInteropData *)0x1;
              pMStack_10 = unaff_ESI;
              do {
                bVar11 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                  (&DStack_6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                  );
                pMVar12 = (MVWorldObjectClient *)DStack_6._current.key;
                if (bVar11 == 0) {
                  pIStack_1 = (Il2CppInteropData *)0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            ((Object *)unaff_ESI,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                             ,(MethodInfo *)in_stack_5);
                  *unaff_FS_OFFSET = pIStack_2;
                  return;
                }
                _Stack_18.__klassIndex = (TypeDefinitionIndex)DStack_6._current.value;
                pMVar13 = (MVWorldObjectClient *)0x0;
                if ((MVWorldObjectClient *)DStack_6._current.key != (MVWorldObjectClient *)0x0) {
                  if ((MVWorldObjectClient__Class *)(DStack_6._current.key)->klass ==
                      (MVWorldObjectClient__Class *)TypeInfo__System__String) {
                    pMVar13 = (MVWorldObjectClient *)DStack_6._current.key;
                  }
                  pSVar14 = TypeInfo__System__String;
                  if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
                }
                _Stack_18.typeHandle =
                     (Il2CppMetadataTypeHandle)
                     MVBlueprintBase_GetChild(this,(String *)pMVar13,(MethodInfo *)0x0);
                pMVar13 = (MVWorldObjectClient *)0x0;
                if (pMVar12 != (MVWorldObjectClient *)0x0) {
                  if ((MVWorldObjectClient__Class *)((Object *)pMVar12)->klass ==
                      (MVWorldObjectClient__Class *)TypeInfo__System__String) {
                    pMVar13 = pMVar12;
                  }
                  pSVar14 = TypeInfo__System__String;
                  if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
                }
                in_stack_5 = (MethodInfo **)wo;
                pMVar12 = MVBlueprintBase_GetChild
                                   ((MVBlueprintBase *)wo,(String *)pMVar13,(MethodInfo *)0x0);
                if (pMVar12 != (MVWorldObjectClient *)0x0) {
                  if (_Stack_18.dummy == (MVWorldObjectClient *)0x0) goto code_?;
                  iVar15._0_1_ = (_Stack_18.array + 0x50)->rank;
                  iVar15._1_1_ = (_Stack_18.array + 0x50)->numsizes;
                  iVar15._2_1_ = (_Stack_18.array + 0x50)->numlobounds;
                  iVar15._3_1_ = (_Stack_18.array + 0x50)->field_0x7;
                  if ((pMVar12->fields)._.type == iVar15) {
                    in_stack_5 = (MethodInfo **)0x2f;
                    func_?(0x2f,_Stack_18.dummy,pMVar12,_visibleCubesOnly,matchingCubeCount,
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
  pSVar14 = (String__Class *)func_?();
  pMVar12 = wo;
code_?:
  func_?(pMVar12,pSVar14);
  pSVar14 = extraout_ECX;
code_?:
  uVar16 = func_?(pMVar12,pSVar14);
  func_?(uVar16);
  pDVar8 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pDVar8);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  if (compareChildren != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)compareChildren,
               MethodInfo__System__Collections__Generic__List<System::String>__List__);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).childIdMap;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System
        ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)&stack0xffffffd4,
                   (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
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
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                              *)&stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          if (bVar5 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)compareChildren,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    );
        } while( true );
      }
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
    left._source = (CancellationTokenSource *)
                   mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
    CStack_8._source =
         (CancellationTokenSource *)
         mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      LStack_7._list = (List_1_System_Object_ *)TypeInfo__System__Type;
      unaff_EBX = (MethodInfo *)&UNK_?;
      func_?();
    }
    bVar9 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,CStack_8,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      arg0 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      arg1 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_Types_does_not_match_this__0__an,(Object *)arg0,
                          (Object *)arg1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar10,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    pMVar11 = TypeInfo__MVBlueprintBase;
    if (((wo->klass->_1).typeHierarchyDepth < (TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth) ||
       ((MVBlueprintBase__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth - 1] !=
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        CStack_8._source =
             (CancellationTokenSource *)
             MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)wo,(String *)LStack_7._current,(MethodInfo *)0x0);
        if ((MVWorldObjectClient *)CStack_8._source == (MVWorldObjectClient *)0x0) {
          pSVar10 = mscorlib.dll::System::String::String_Format
                             (StringLiteral_otherChild__0__is_null,(Object *)child,(MethodInfo *)0x0
                             );
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar10,(MethodInfo *)0x0);
          break;
        }
        pMVar14 = MVBlueprintBase_GetChild(this,(String *)child,(MethodInfo *)0x0);
        if (pMVar14 == (MVWorldObjectClient *)0x0) goto code_?;
        in_stack_6 = (MVBlueprintBase__Class **)&UNK_?;
        cVar15 = func_?(0x2e,pMVar14,CStack_8._source,koGaMaPackageClient,
                                insertedByProfileId);
      } while (cVar15 != '\0');
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).childIdMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)child,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pMVar1,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    pDVar3 = (pMVar1->fields).childIdMap;
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pMVar4 = (MVBlueprintBase *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar3,(Object *)key_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pMVar4 != (MVBlueprintBase *)0x0) {
        if ((pMVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          this = pMVar4;
          puVar5 = (undefined4 *)func_?();
          key = (Object *)*puVar5;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                           );
            cRam_? = '\x01';
          }
          pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(pMVar1->fields)._.children;
          this = (MVBlueprintBase *)0x0;
          if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (pDVar3,key,(Object **)&this,
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pMVar4 == (MethodInfo *)0x0) break;
      if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
           (byte)pMVar4->methodPointer[0xb4]) &&
         (*(MVCubeModelInstance__Class **)
           (*(int *)(pMVar4->methodPointer + 100) + -4 +
           (uint)(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth * 4) ==
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._.data;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar7 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pDVar8 = (this->fields)._._._.data;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar8,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else if (((((pDVar8->klass->_1).typeHierarchyDepth <
                  (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).typeHierarchyDepth) ||
                ((Dictionary_2_System_Object_System_Object___Class *)
                 (pDVar8->klass->_1).typeHierarchy
                 [(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                ) || ((this->fields).blueprintData = pDVar8,
                     (pDVar8->klass->_1).typeHierarchyDepth <
                     (
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).typeHierarchyDepth)) ||
              ((Dictionary_2_System_Object_System_Object___Class *)
               (pDVar8->klass->_1).typeHierarchy
               [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth - 1] !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      DStack_9._version = (int32_t)&(this->fields).blueprintData;
      DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      DStack_9._index = (int32_t)pDVar8;
      func_?();
      pDVar8 = (this->fields).blueprintData;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar8,(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          (this->fields).childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else if ((((pDVar8->klass->_1).typeHierarchyDepth <
                   (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth) ||
                 ((Dictionary_2_System_Object_System_Object___Class *)
                  (pDVar8->klass->_1).typeHierarchy
                  [(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth - 1] !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) || (((this->fields).childIdMap = pDVar8,
                        (pDVar8->klass->_1).typeHierarchyDepth <
                        (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).typeHierarchyDepth ||
                        ((Dictionary_2_System_Object_System_Object___Class *)
                         (pDVar8->klass->_1).typeHierarchy
                         [(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).typeHierarchyDepth - 1] !=
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        )))) goto code_?;
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        pDVar8 = (this->fields).childIdMap;
        if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                             (&DStack_9,pDVar8,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          uStack_11 = 0;
          DStack_6._dictionary = pDVar10->_dictionary;
          DStack_6._version = pDVar10->_version;
          DStack_6._index = pDVar10->_index;
          DStack_6._current.key = (pDVar10->_current).key;
          DStack_6._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
          uStack_1 = 1;
          pDStack_12 = &DStack_6;
          while( true ) {
            bVar7 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar7 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pDVar8 = (this->fields).idChildMap;
            if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDVar8,DStack_6._current.value,DStack_6._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
        }
      }
    }
  }
  uVar13 = func_?();
  func_?(uVar13);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_OnDataUpdate
               (MVBlueprintBase *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  if (*(Dictionary_2_System_Object_GUILoginHandler_PlanetData_ **)(in_stack_3 + 0x58) !=
      (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (*(Dictionary_2_System_Object_GUILoginHandler_PlanetData_ **)
                        (in_stack_3 + 0x58),(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    if (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_3 + 0x58) !=
        (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_3 + 0x58),
                          (Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar5 == (Object *)0x0) {
        *(undefined4 *)(in_stack_3 + 0xe0) = 0;
      }
      else if (((((pOVar5->klass->_1).typeHierarchyDepth <
                  (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).typeHierarchyDepth) ||
                ((Dictionary_2_System_Object_System_Object___Class *)
                 (pOVar5->klass->_1).typeHierarchy
                 [(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                ) || (*(Object **)(in_stack_3 + 0xe0) = pOVar5,
                     (pOVar5->klass->_1).typeHierarchyDepth <
                     (
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).typeHierarchyDepth)) ||
              ((Dictionary_2_System_Object_System_Object___Class *)
               (pOVar5->klass->_1).typeHierarchy
               [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth - 1] !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      DStack_6._version = in_stack_3 + 0xe0;
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      DStack_6._index = (int32_t)pOVar5;
      func_?();
      if (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_3 + 0xe0) !=
          (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (*(Dictionary_2_System_Object_System_Object_ **)
                             (in_stack_3 + 0xe0),(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar5 == (Object *)0x0) {
          *(undefined4 *)(in_stack_3 + 0xe4) = 0;
        }
        else if ((((pOVar5->klass->_1).typeHierarchyDepth <
                   (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth) ||
                 ((Dictionary_2_System_Object_System_Object___Class *)
                  (pOVar5->klass->_1).typeHierarchy
                  [(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth - 1] !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) || ((*(Object **)(in_stack_3 + 0xe4) = pOVar5,
                        (pOVar5->klass->_1).typeHierarchyDepth <
                        (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).typeHierarchyDepth ||
                        ((Dictionary_2_System_Object_System_Object___Class *)
                         (pOVar5->klass->_1).typeHierarchy
                         [(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).typeHierarchyDepth - 1] !=
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        )))) goto code_?;
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        if (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_3 + 0xe4) !=
            (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                             (&DStack_6,
                              *(Dictionary_2_System_Object_System_Object_ **)
                               (in_stack_3 + 0xe4),
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          uStack_8 = 0;
          DStack_2._dictionary = pDVar7->_dictionary;
          DStack_2._version = pDVar7->_version;
          DStack_2._index = pDVar7->_index;
          DStack_2._current.key = (pDVar7->_current).key;
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
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).idChildMap = this_00;
    func_?(&(this->fields).idChildMap,this_00);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                     );
      func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>)
      ;
      func_?(&TypeInfo__MVWorldObjectClient);
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                             );
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                );
      (this->fields)._.children = this_01;
      func_?(&(this->fields)._.children,this_01);
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVWorldObjectClient);
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
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).idChildMap = this_00;
    func_?(&(this->fields).idChildMap,this_00);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                     );
      func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>)
      ;
      func_?(&TypeInfo__MVWorldObjectClient);
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                             );
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                );
      (this->fields)._.children = this_01;
      func_?(&(this->fields)._.children,this_01);
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVWorldObjectClient);
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
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields).idChildMap = this_00;
    func_?(&(this->fields).idChildMap,this_00);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                     );
      func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>)
      ;
      func_?(&TypeInfo__MVWorldObjectClient);
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                             );
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                );
      (this->fields)._.children = this_01;
      func_?(&(this->fields)._.children,this_01);
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVWorldObjectClient);
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
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

