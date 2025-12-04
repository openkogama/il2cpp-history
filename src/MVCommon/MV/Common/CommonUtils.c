
/* Void PartialRemoveFromHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,source,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (source == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  str1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStack_9 = (ulonglong)(uint)(source->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  pDStack_5 = source;
  DStack_11._dictionary = source;
  do {
    while( true ) {
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        source_00 = DStack_11._current.value;
        key = DStack_11._current.key;
        if (bVar12 == 0) {
          return;
        }
        pOStack_13 = DStack_11._current.key;
        pDStack_14 = (Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value;
        if ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value !=
            (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  (target,DStack_11._current.key,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
      }
      bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((((((Dictionary_2_System_Object_System_Object___Class *)(DStack_11._current.value)->klass)
            ->_1).naturalAligment < bVar15) ||
          ((Dictionary_2_System_Object_System_Object___Class *)
           (((Dictionary_2_System_Object_System_Object___Class *)(DStack_11._current.value)->klass)
           ->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
         ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value ==
          (Dictionary_2_System_Object_System_Object_ *)0x0)) break;
      if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)target,DStack_11._current.key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar16 < 0) {
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
        lVar17 = func_?(&pOStack_13);
        if (lVar17 == 0) {
          pSVar18 = (String *)func_?(&StringLiteral_Target_hashtable_doesn_t_contain);
        }
        else {
          pSVar18 = (String *)func_?(&StringLiteral_Target_hashtable_doesn_t_contain);
          FUN_?(lVar17);
          str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar17);
        }
        str2 = (String *)func_?(&::StringLiteral__);
        pSVar18 = mscorlib.dll::System::String::String_Concat_5
                            (pSVar18,(String *)str1,str2,(MethodInfo *)0x0);
        uVar19 = func_?(&TypeInfo__System__ArgumentException);
        this = (InvalidEnumArgumentException *)func_?(uVar19);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this,pSVar18,(MethodInfo *)0x0);
        uVar19 = func_?(&
                                     MethodInfo__MV__Common__CommonUtils__PartialRemoveFromHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                                    );
        FUN_?(this,uVar19);
        goto code_?;
      }
      pDVar20 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (target,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      target_00 = str1;
      if (pDVar20 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar20->klass->_1).naturalAligment < bVar15) ||
           (bVar21 = true,
           (Dictionary_2_System_Object_System_Object___Class *)
           (pDVar20->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar21 = false;
        }
        if (bVar21) {
          target_00 = pDVar20;
        }
      }
      CommonUtils_PartialRemoveFromHashtable_1
                (target_00,(Dictionary_2_System_Object_System_Object_ *)source_00,0,
                 (MethodInfo *)0x0);
    }
    if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              (target,DStack_11._current.key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
  } while( true );
}


/* Void PartialRemoveFromHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object], Boolean) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,bool acceptMissingValuesInTarget,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (source == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  str1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStack_9 = (ulonglong)(uint)(source->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  pDStack_5 = source;
  DStack_11._dictionary = source;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_11,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          source_00 = DStack_11._current.value;
          key = DStack_11._current.key;
          if (bVar12 == 0) {
            return;
          }
          pOStack_13 = DStack_11._current.key;
          pDStack_14 = (Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value;
          if ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value !=
              (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Remove
                    (target,DStack_11._current.key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
        }
        bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((bVar15 <= (((Dictionary_2_System_Object_System_Object___Class *)
                        (DStack_11._current.value)->klass)->_1).naturalAligment) &&
            ((Dictionary_2_System_Object_System_Object___Class *)
             (((Dictionary_2_System_Object_System_Object___Class *)(DStack_11._current.value)->klass
              )->_1).typeHierarchy[(ulonglong)bVar15 - 1] ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
           ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value !=
            (Dictionary_2_System_Object_System_Object_ *)0x0)) break;
        if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  (target,DStack_11._current.key,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
      }
      if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)target,DStack_11._current.key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar16 < 0) break;
      pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (target,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      target_00 = str1;
      if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar17->klass->_1).naturalAligment < bVar15) ||
           (bVar18 = true,
           (Dictionary_2_System_Object_System_Object___Class *)
           (pDVar17->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar18 = false;
        }
        if (bVar18) {
          target_00 = pDVar17;
        }
      }
      CommonUtils_PartialRemoveFromHashtable_1
                (target_00,(Dictionary_2_System_Object_System_Object_ *)source_00,
                 acceptMissingValuesInTarget,(MethodInfo *)0x0);
    }
  } while (acceptMissingValuesInTarget != 0);
  func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
  lVar19 = func_?(&pOStack_13);
  if (lVar19 == 0) {
    pSVar20 = (String *)func_?(&StringLiteral_Target_hashtable_doesn_t_contain);
  }
  else {
    pSVar20 = (String *)func_?(&StringLiteral_Target_hashtable_doesn_t_contain);
    FUN_?(lVar19);
    str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar19);
  }
  str2 = (String *)func_?(&::StringLiteral__);
  pSVar20 = mscorlib.dll::System::String::String_Concat_5
                      (pSVar20,(String *)str1,str2,(MethodInfo *)0x0);
  uVar21 = func_?(&TypeInfo__System__ArgumentException);
  this = (InvalidEnumArgumentException *)func_?(uVar21);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this,pSVar20,(MethodInfo *)0x0);
  uVar21 = func_?(&
                               MethodInfo__MV__Common__CommonUtils__PartialRemoveFromHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                              );
  FUN_?(this,uVar21);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PartialUpdateHashtable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
               (Dictionary_2_System_Object_System_Object_ *target,
               Dictionary_2_System_Object_System_Object_ *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Incompatible_types_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (source == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  str1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStack_9 = (ulonglong)(uint)(source->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  uStack_12 = 0;
  pDStack_13 = &DStack_11;
  pDStack_5 = source;
  DStack_11._dictionary = source;
  while( true ) {
    bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    value = DStack_11._current.value;
    pOVar15 = DStack_11._current.key;
    if (bVar14 == 0) {
      return;
    }
    pOStack_16 = DStack_11._current.key;
    pDStack_17 = (Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value;
    if ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value ==
        (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
    iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)target,DStack_11._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar18 < 0) {
      in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (target,pOVar15,value,(InsertionBehavior__Enum)in_R9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (target,pOVar15,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
        FUN_?();
        break;
      }
      lVar20 = FUN_?(&(pDVar19->klass->_0).byval_arg);
      lVar21 = FUN_?(&(((Dictionary_2_System_Object_System_Object___Class *)value->klass)->
                              _0).byval_arg);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (lVar20 != lVar21) {
        values = (String__Array *)func_?(TypeInfo__System__String);
        FUN_?(values);
        FUN_?(values,0,StringLiteral_Incompatible_types_);
        FUN_?(pDVar19);
        pTVar22 = mscorlib.dll::System::Object::Object_GetType((Object *)pDVar19,(MethodInfo *)0x0);
        pDVar19 = str1;
        if (pTVar22 != (Type *)0x0) {
          FUN_?(pTVar22);
          pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,pTVar22);
        }
        FUN_?(values);
        FUN_?(values,1,pDVar19);
        FUN_?(values);
        uVar23 = func_?(&StringLiteral__and_);
        FUN_?(values,2,uVar23);
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                           );
        pOVar15 = (Object *)func_?(&pOStack_16);
        FUN_?(pOVar15);
        pTVar22 = mscorlib.dll::System::Object::Object_GetType(pOVar15,(MethodInfo *)0x0);
        pDVar19 = str1;
        if (pTVar22 != (Type *)0x0) {
          FUN_?(pTVar22);
          pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,pTVar22);
        }
        FUN_?(values);
        FUN_?(values,3,pDVar19);
        FUN_?(values);
        uVar23 = func_?(&StringLiteral__for_key__);
        FUN_?(values,4,uVar23);
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
        lVar20 = func_?(&pOStack_16);
        if (lVar20 != 0) {
          FUN_?(lVar20);
          str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar20);
        }
        FUN_?(values);
        FUN_?(values,5,str1);
        FUN_?(values);
        func_?(&::StringLiteral__);
        FUN_?(values);
        pSVar24 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
        uVar23 = func_?(&TypeInfo__System__ArgumentException);
        pIVar25 = (InvalidEnumArgumentException *)func_?(uVar23);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(pIVar25,pSVar24,(MethodInfo *)0x0);
        uVar23 = func_?(&
                                     MethodInfo__MV__Common__CommonUtils__PartialUpdateHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                    );
        FUN_?(pIVar25,uVar23);
        goto code_?;
      }
      bVar26 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar26) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[(ulonglong)bVar26 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (target,pOVar15,value,(InsertionBehavior__Enum)in_R9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      else {
        bVar26 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((((Dictionary_2_System_Object_System_Object___Class *)value->klass)->_1).
             naturalAligment < bVar26) ||
           (bVar27 = true,
           (Dictionary_2_System_Object_System_Object___Class *)
           (((Dictionary_2_System_Object_System_Object___Class *)value->klass)->_1).typeHierarchy
           [(ulonglong)bVar26 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar27 = false;
        }
        source_00 = str1;
        if (bVar27) {
          source_00 = (Dictionary_2_System_Object_System_Object_ *)value;
        }
        CommonUtils_PartialUpdateHashtable(pDVar19,source_00,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
code_?:
  func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
  lVar20 = func_?(&pOStack_16);
  if (lVar20 == 0) {
    pSVar24 = (String *)func_?(&StringLiteral_Update_table_contains_NULL_valye);
  }
  else {
    pSVar24 = (String *)func_?(&StringLiteral_Update_table_contains_NULL_valye);
    FUN_?(lVar20);
    str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar20);
  }
  str2 = (String *)func_?(&::StringLiteral__);
  pSVar24 = mscorlib.dll::System::String::String_Concat_5
                      (pSVar24,(String *)str1,str2,(MethodInfo *)0x0);
  uVar23 = func_?(&TypeInfo__System__ArgumentException);
  pIVar25 = (InvalidEnumArgumentException *)func_?(uVar23);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(pIVar25,pSVar24,(MethodInfo *)0x0);
  uVar23 = func_?(&
                               MethodInfo__MV__Common__CommonUtils__PartialUpdateHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                              );
  FUN_?(pIVar25,uVar23);
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean PruneEmptyDictionaries(Dictionary`2[System.Object,System.Object]) */

bool MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
               (Dictionary_2_System_Object_System_Object_ *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  this = (List_1_System_Object_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (target != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      in_R8 = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar7);
    }
    pDStack_8 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                 (ulonglong)(uint)(target->fields)._version;
    uStack_9 = 2;
    uStack_10 = 0;
    uStack_11 = 0;
    aDStack_12[0]._8_8_ = pDStack_8;
    aDStack_12[0]._current.key = (Object *)0x0;
    aDStack_12[0]._current.value = (Object *)0x0;
    aDStack_12[0]._getEnumeratorRetType = 2;
    aDStack_12[0]._36_4_ = 0;
    uStack_3 = 0;
    pDStack_8 = aDStack_12;
    aDStack_12[0]._dictionary = target;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (aDStack_12,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             ), pOVar14 = aDStack_12[0]._current.key, bVar13 != 0) {
      in_R8 = (MethodInfo *)aDStack_12[0]._current.value;
      if ((MethodInfo *)aDStack_12[0]._current.value != (MethodInfo *)0x0) {
        pIVar15 = (Il2CppMethodPointer)(aDStack_12[0]._current.value)->klass;
        cVar16 = (code)(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).naturalAligment;
        if ((((byte)cVar16 <= (byte)pIVar15[0x130]) &&
            (*(Dictionary_2_System_Object_System_Object___Class **)
              (*(longlong *)(pIVar15 + 200) + -8 + (ulonglong)(byte)cVar16 * 8) ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
           ((MethodInfo *)aDStack_12[0]._current.value != (MethodInfo *)0x0)) {
          cVar16 = (code)(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
          if (((byte)pIVar15[0x130] < (byte)cVar16) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(longlong *)(pIVar15 + 200) + -8 + (ulonglong)(byte)cVar16 * 8) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          bVar13 = CommonUtils_PruneEmptyDictionaries
                            ((Dictionary_2_System_Object_System_Object_ *)
                             aDStack_12[0]._current.value,(MethodInfo *)0x0);
          if (bVar13 != 0) {
            if (this == (List_1_System_Object_ *)0x0) goto code_?;
            if (pOVar14 != (Object *)0x0) {
              pOVar17 = (Object *)0x0;
              if (pOVar14->klass == pORam0000000182dbbc60) {
                pOVar17 = pOVar14;
              }
              if (pOVar17 == (Object *)0x0) goto code_?;
            }
            in_R8 = 
            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
            FUN_?(this);
          }
        }
      }
    }
    if (this != (List_1_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
        lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pDStack_8 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                   ((ulonglong)(uint)(this->fields)._version << 0x20);
      uStack_10 = 0;
      LStack_1._8_8_ = pDStack_8;
      LStack_1._current = (Object *)0x0;
      uStack_3 = 0;
      pDStack_8 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)&LStack_1;
      LStack_1._list = this;
      while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_1,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                               ), bVar13 != 0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  (target,LStack_1._current,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
      }
      return (target->fields)._count == (target->fields)._freeCount;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(in_R8);
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar13 = (*pcVar18)();
  return bVar13;
}

