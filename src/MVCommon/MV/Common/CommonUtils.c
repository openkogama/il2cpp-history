
/* Void PartialRemoveFromHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,MethodInfo *method)

{
  CommonUtils_PartialRemoveFromHashtable_1(target,source,0,(MethodInfo *)0x0);
  return;
}


/* Void PartialRemoveFromHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object], Boolean) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,bool acceptMissingValuesInTarget,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if (source != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_8,source,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            bVar11 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            pOVar12 = DStack_6._current.key;
            if (bVar11 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,(MethodInfo *)unaff_EDI);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pOStack_13 = DStack_6._current.key;
            pOStack_14 = DStack_6._current.value;
            if (DStack_6._current.value != (Object *)0x0) break;
            if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Remove
                      (target,DStack_6._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                      );
          }
          pDStack_15 = (Dictionary_2_System_Object_System_Object_ *)
                       func_?(DStack_6._current.value,
                                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
          if (pDStack_15 != (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Remove
                    (target,pOVar12,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
        }
        if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)target,pOVar12,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar11 == 0) break;
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (target,pOVar12,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        unaff_EDI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        target_00 = (Dictionary_2_System_Object_System_Object_ *)func_?(pOVar12);
        CommonUtils_PartialRemoveFromHashtable_1
                  (target_00,pDStack_15,acceptMissingValuesInTarget,(MethodInfo *)0x0);
      }
    } while (acceptMissingValuesInTarget != 0);
    uVar16 = func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
    pOVar12 = (Object *)func_?(&pOStack_13,uVar16);
    arg2 = (Object *)func_?(&::StringLiteral__);
    arg0 = (Object *)func_?(&StringLiteral_Target_hashtable_doesn_t_contain);
    message = mscorlib.dll::System::String::String_Concat_1(arg0,pOVar12,arg2,(MethodInfo *)0x0);
    func_?();
    this = (ArgumentException *)func_?();
    func_?();
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,message,(MethodInfo *)0x0);
    DStack_8._version =
         (int32_t)&
                  MethodInfo__MV__Common__CommonUtils__PartialRemoveFromHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
    ;
    DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    DStack_8._version = func_?();
    DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)this;
    func_?();
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void PartialUpdateHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
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
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
    ;
    func_?();
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  if (source != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_9,source,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = pDVar8->_dictionary;
    DStack_7._version = pDVar8->_version;
    DStack_7._index = pDVar8->_index;
    DStack_7._current.key = (pDVar8->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      key = (MethodInfo *)DStack_7._current.key;
      if (bVar12 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar13 = DStack_7._current.value;
      pMStack_14 = (MethodInfo *)DStack_7._current.key;
      pOStack_15 = DStack_7._current.value;
      if (DStack_7._current.value == (Object *)0x0) break;
      if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)target,
                         DStack_7._current.key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar12 == 0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (target,(Object *)key,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        in_stack_6 = (MethodInfo **)key;
      }
      else {
        in_stack_6 = (MethodInfo **)target;
        pOStack_16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (target,(Object *)key,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        if (pOStack_16 == (Object *)0x0) goto code_?;
        pDStack_17 = (Dictionary_2_System_Object_System_Object_ *)
                     mscorlib.dll::System::Object::Object_GetType(pOStack_16,(MethodInfo *)0x0);
        pDVar18 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Object::Object_GetType(pOVar13,(MethodInfo *)0x0);
        if (pDStack_17 != pDVar18) {
          DStack_9._dictionary =
               (Dictionary_2_System_Object_System_Object_ *)&TypeInfo__System__Object;
          func_?();
          DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x7;
          args = (Object__Array *)func_?();
          DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)args;
          func_?();
          DStack_9._dictionary =
               (Dictionary_2_System_Object_System_Object_ *)&StringLiteral_Incompatible_types_;
          DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)func_?();
          func_?();
          DStack_9._dictionary =
               (Dictionary_2_System_Object_System_Object_ *)&StringLiteral_Incompatible_types_;
          DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)func_?();
          func_?();
          pOVar13 = pOStack_16;
          func_?();
          pDVar19 = (Dictionary_2_System_Object_System_Object___Class *)
                   mscorlib.dll::System::Object::Object_GetType(pOVar13,(MethodInfo *)0x0);
          DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)args;
          func_?();
          DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar19;
          func_?();
          DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar19;
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          uVar20 = func_?(&
                                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                                 );
          pOVar13 = (Object *)func_?(&pMStack_14,uVar20);
          func_?(pOVar13);
          mscorlib.dll::System::Object::Object_GetType(pOVar13,(MethodInfo *)0x0);
          func_?();
          func_?();
          func_?();
          func_?(args);
          uVar20 = func_?(&StringLiteral__for_key__);
          func_?(args,uVar20);
          uVar20 = func_?(&StringLiteral__for_key__);
          func_?(4,uVar20);
          uVar20 = func_?(&
                                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                                 );
          uVar20 = func_?(&pMStack_14,uVar20);
          func_?(args);
          func_?(args,uVar20);
          func_?(5,uVar20);
          func_?(args);
          uVar20 = func_?(&::StringLiteral__);
          func_?(args,uVar20);
          uVar20 = func_?(&::StringLiteral__);
          func_?(6,uVar20);
          message = mscorlib.dll::System::String::String_Concat_2(args,(MethodInfo *)0x0);
          goto code_?;
        }
        DStack_9._dictionary =
             (Dictionary_2_System_Object_System_Object_ *)
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        pDStack_17 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (pDStack_17 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (target,(Object *)key,pOVar13,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        else {
          pDVar18 = (Dictionary_2_System_Object_System_Object_ *)
                   func_?(pOVar13,
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
          CommonUtils_PartialUpdateHashtable(pDStack_17,pDVar18,(MethodInfo *)0x0);
        }
      }
    }
    uVar20 = func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
    pOVar13 = (Object *)func_?(&pMStack_14,uVar20);
    arg2 = (Object *)func_?(&::StringLiteral__);
    arg0 = (Object *)func_?(&StringLiteral_Update_table_contains_NULL_valye);
    message = mscorlib.dll::System::String::String_Concat_1(arg0,pOVar13,arg2,(MethodInfo *)0x0);
code_?:
    uVar20 = func_?(&TypeInfo__System__ArgumentException);
    this = (ArgumentException *)func_?(uVar20);
    func_?(this);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,message,(MethodInfo *)0x0);
    func_?();
    func_?(this);
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean PruneEmptyDictionaries(Dictionary`2[System.Object,System.Object]) */

bool MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
               (Dictionary_2_System_Object_System_Object_ *target,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  this = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<System::String>)
  ;
  if ((this != (MethodInfo *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this,
                 MethodInfo__System__Collections__Generic__List<System::String>__List__),
     target != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffb8,target,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uVar6 = *(undefined8 *)&(pDVar5->_current).value;
    uStack_1 = 1;
    pDVar7 = (Dictionary_2_System_Object_System_Object___Class *)(pDVar5->_current).key;
    do {
      do {
        do {
          pDVar8 = pDVar7;
          bVar9 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                             &stack0xffffff90,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          method_00 = (MethodInfo *)uVar6;
          if (bVar9 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffff90,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,method_00);
            uStack_1 = 0xffffffff;
            pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)&stack0xffffffc0,
                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )this,
                                MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                               );
            key = pLVar10->_current;
            uStack_1 = 4;
            while( true ) {
              bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                ((List_1_T_Enumerator_System_Object_ *)&pOStack_4,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                                );
              if (bVar9 == 0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Remove
                        (target,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                        );
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&pOStack_4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                       ,in_stack_11);
            uStack_1 = 0xffffffff;
            iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                              ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)target,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                              );
            *unaff_FS_OFFSET = uStack_3;
            return iVar12 == 0;
          }
          pDVar7 = pDVar8;
        } while ((((method_00 == (MethodInfo *)0x0) ||
                  ((byte)method_00->methodPointer[0xb4] <
                   (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth)) ||
                 (*(Dictionary_2_System_Object_System_Object___Class **)
                   (*(int *)(method_00->methodPointer + 100) + -4 +
                   (uint)(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).typeHierarchyDepth * 4) !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) || (method_00 == (MethodInfo *)0x0));
        pDVar7 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        target_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (target_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        bVar9 = CommonUtils_PruneEmptyDictionaries(target_00,(MethodInfo *)0x0);
      } while (bVar9 == 0);
      item = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(pDVar8->_0).image == TypeInfo__System__String) {
          item = pDVar8;
        }
        if (item == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
    } while( true );
  }
  func_?();
code_?:
  func_?();
  method_00 = this;
code_?:
  uVar13 = func_?(method_00,
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  uVar13 = func_?(uVar13);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  bVar9 = (*pcVar14)();
  return bVar9;
}

