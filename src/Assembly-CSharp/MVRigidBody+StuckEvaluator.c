
/* Dictionary`2[System.Int32,MVOverlapResult] GetOverlapDictionary() */

Dictionary_2_System_Int32_MVOverlapResult_ *
Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
          (MVRigidBody_StuckEvaluator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Add_int__MVOverlapResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_happens_due_to_error_in_MVE);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).getOverlappingObjects;
  if ((pFVar1 != (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)0x0) &&
     (lVar2 = (*(pFVar1->fields)._._.invoke_impl)
                        ((pFVar1->fields)._._.method_code,(pFVar1->fields)._._.method), lVar2 != 0))
  {
    if (*(int *)(lVar2 + 0x18) == 0) {
      this_00 = (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0;
    }
    else {
      this_00 = (Dictionary_2_System_Int32_PendingPrototypeData_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>
                             );
      pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
                EqualityComparer_1_System_Int32__get_Default
                          (MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Dictionary__
                           ->klass->rgctx_data->method->klass->rgctx_data[3].method);
      uVar4 = 0;
      if ((pEVar3 != (EqualityComparer_1_System_Int32_ *)0x0) &&
         ((this_00->fields)._comparer = (IEqualityComparer_1_System_Int32_ *)0x0,
         iRam_? != 0)) {
        uVar5 = (uint)((ulonglong)&(this_00->fields)._comparer >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uStack_10 = 0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&MStack_12 >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      MStack_12.localCubePos = (IntVector__Array *)((ulonglong)*(uint *)(lVar2 + 0x1c) << 0x20);
      pIStack_13 = MStack_12.localCubePos;
      lStack_14 = 0;
      pIStack_15 = (IntVector__Array *)0x0;
      MStack_12._0_8_ = lVar2;
      lStack_16 = lVar2;
      while (cVar17 = FUN_?(&lStack_16,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                                  ), pIVar18 = pIStack_15, lVar2 = lStack_14, cVar17 != '\0') {
        key = (int32_t)lStack_14;
        if (this_00 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0)
        goto code_?;
        iVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                          (this_00,(int32_t)lStack_14,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar19 < 0) {
          MStack_12._0_8_ = lVar2;
          MStack_12.localCubePos = pIVar18;
          uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,MVOverlapResult]::
          Dictionary_2_System_Int32_MVOverlapResult__TryInsert
                    ((Dictionary_2_System_Int32_MVOverlapResult_ *)this_00,key,&MStack_12,
                     (InsertionBehavior__Enum)uVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Add_int__MVOverlapResult_
                     ->klass->rgctx_data[0x22].method);
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_This_happens_due_to_error_in_MVE,(MethodInfo *)0x0);
        }
      }
    }
    return (Dictionary_2_System_Int32_MVOverlapResult_ *)this_00;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  pDVar21 = (Dictionary_2_System_Int32_MVOverlapResult_ *)(*pcVar20)();
  return pDVar21;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
               (MVRigidBody_StuckEvaluator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  pDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  uStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  iStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  pIStack_11 = (IntVector__Array *)0x0;
  uStack_12 = 0;
  pDStack_13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
  uStack_14 = 0;
  iStack_15 = 0;
  pMStack_16 = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
  pcVar17 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
    pcVar17 = (code *)swi(3);
    bVar19 = (*pcVar17)();
    return bVar19;
  }
  pcRam_? = pcVar17;
  fVar20 = (float)(*pcRam_?)();
  if (fVar20 - (this->fields).updateTime < (this->fields).updateInterval) {
    pDVar21 = (this->fields).stuckObjects;
    if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
    goto code_?;
    if ((pDVar21->fields)._count == (pDVar21->fields)._freeCount) {
      return 0;
    }
  }
  pcVar17 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
code_?:
    FUN_?();
    uVar22 = uStack_14;
code_?:
    uStack_14 = uVar22;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
    pcVar17 = (code *)swi(3);
    bVar19 = (*pcVar17)();
    return bVar19;
  }
  pcRam_? = pcVar17;
  fVar20 = (float)(*pcRam_?)();
  (this->fields).updateTime = fVar20;
  pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )MVRigidBody_StuckEvaluator_GetOverlapDictionary(this,(MethodInfo *)0x0);
  if (pDVar23 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).stuckObjects;
    if (pDVar23 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (pDVar23,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                );
      return 0;
    }
  }
  else {
    pDVar24 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(pDVar24,MethodInfo__System__Collections__Generic__List<int>__List__);
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).stuckObjects;
    pDStack_25 = pDVar24;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                      (this_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                                      ),
                 pDVar26 !=
                 (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      pDStack_27 = (pDVar26->fields)._dictionary;
      ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      **)0x0;
      uStack_29 = 0;
      if (iRam_? != 0) {
        uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
        uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
        do {
          uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
          puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
          LOCK();
          bVar34 = uVar32 == *puVar33;
          if (bVar34) {
            *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
          }
          UNLOCK();
        } while (!bVar34);
      }
      if (pDStack_27 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_30 = pDStack_27;
        FUN_?();
        pcVar17 = (code *)swi(3);
        bVar19 = (*pcVar17)();
        return bVar19;
      }
      ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      **)((ulonglong)(uint)(pDStack_27->fields)._version << 0x20);
      uStack_29 = 0;
      uStack_35 = (longlong)ppDStack_28;
      uStack_36 = 0;
      pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0;
      ppDStack_28 = &pDStack_27;
code_?:
      if (pDStack_27 !=
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        if (uStack_35._4_4_ == (pDStack_27->fields)._version) {
          uVar22 = (uint)uStack_35;
code_?:
          if (pDStack_27 !=
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            if (uVar22 < (uint)(pDStack_27->fields)._count) {
              pDVar37 = (pDStack_27->fields)._entries;
              lVar38 = (longlong)(int)uVar22;
              uStack_35 = CONCAT44(uStack_35._4_4_,uVar22 + 1);
              if (pDVar37 != (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                             *)0x0) {
                if (uVar22 < (uint)pDVar37->max_length) goto code_?;
                goto code_?;
              }
              goto code_?;
            }
            uStack_35 = CONCAT44(uStack_35._4_4_,(pDStack_27->fields)._count + 1);
            uStack_36 = (ulonglong)uStack_36._4_4_ << 0x20;
            if (pDVar24 !=
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
                uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                  LOCK();
                  bVar34 = uVar32 == *puVar33;
                  if (bVar34) {
                    *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar34);
              }
              iStack_3 = *(int *)((longlong)&(pDVar24->fields)._entries + 4);
              uStack_29 = 0;
              uStack_2 = 0;
              uStack_4 = 0;
              pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
              ppDStack_28 = &pDStack_1;
              pDStack_1 = pDVar24;
              while( true ) {
                if (pDStack_1 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                if ((iStack_3 != *(int *)((longlong)&(pDStack_1->fields)._entries + 4)) ||
                   (lVar38 = (longlong)(int)uStack_2,
                   *(uint *)&(pDStack_1->fields)._entries <= uStack_2)) break;
                pIVar39 = (pDStack_1->fields)._buckets;
                if (pIVar39 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar39->max_length <= uStack_2) goto code_?;
                uStack_4 = CONCAT44(uStack_4._4_4_,pIVar39->vector[lVar38]);
                uStack_2 = uStack_2 + 1;
                pDVar21 = (this->fields).stuckObjects;
                if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
                              0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,pIVar39->vector[lVar38]
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                          );
              }
              if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   ->klass->field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (pDStack_1 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if (iStack_3 != *(int *)((longlong)&(pDStack_1->fields)._entries + 4))
              goto code_?;
              uStack_2 = *(int *)&(pDStack_1->fields)._entries + 1;
              uStack_4 = uStack_4 & 0xffffffff00000000;
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&pDStack_40 >> 0xc);
                uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                  LOCK();
                  bVar34 = uVar32 == *puVar33;
                  if (bVar34) {
                    *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar34);
              }
              uStack_41 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)(ulonglong)(uint)(pDVar23->fields)._version;
              uStack_42 = 2;
              uStack_43 = (IntVector__Array *)0x0;
              uStack_44 = 0;
              uStack_45 = 0;
              uStack_6 = uStack_41;
              iStack_7 = 0;
              uStack_8 = 0;
              uStack_9 = 0;
              uStack_10 = 0;
              pIStack_11 = (IntVector__Array *)0x0;
              uStack_12 = 2;
              pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
              ppDStack_28 = &pDStack_5;
              pDStack_5 = pDVar23;
              pDStack_40 = pDVar23;
              do {
                if (pDStack_5 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                if ((int)uStack_6 != (pDStack_5->fields)._version) goto code_?;
                uVar22 = uStack_6._4_4_;
                do {
                  if (pDStack_5 ==
                      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) goto code_?;
                  if ((uint)(pDStack_5->fields)._count <= uVar22) {
                    uStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                 *)CONCAT44((pDStack_5->fields)._count + 1,(int)uStack_6);
                    iStack_7 = 0;
                    uStack_8 = 0;
                    uStack_9 = 0;
                    uStack_10 = 0;
                    pIStack_11 = (IntVector__Array *)0x0;
                    iVar46 = (pDVar23->fields)._count;
                    if (0 < iVar46) {
                      pIVar39 = (pDVar23->fields)._buckets;
                      if (pIVar39 == (Int32__Array *)0x0) goto code_?;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pDVar23->fields)._buckets,0,(int32_t)pIVar39->max_length,
                                 (MethodInfo *)0x0);
                      (pDVar23->fields)._count = 0;
                      (pDVar23->fields)._freeList = -1;
                      (pDVar23->fields)._freeCount = 0;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pDVar23->fields)._entries,0,iVar46,(MethodInfo *)0x0);
                    }
                    piVar47 = &(pDVar23->fields)._version;
                    *piVar47 = *piVar47 + 1;
                    pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)(this->fields).stuckObjects;
                    if ((pDVar23 ==
                         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                          *)0x0) ||
                       (pDVar48 = mscorlib.dll::System::Collections::Generic::
                                  Dictionary`2[UnityEngine::UIElements::
                                  TypeConverterRegistry+ConverterKey,System::Object]::
                                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                            (pDVar23,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                            ),
                       pDVar48 ==
                       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0)) goto code_?;
                    pDVar23 = (pDVar48->fields)._dictionary;
                    ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                    **)0x0;
                    uStack_29 = 0;
                    if (iRam_? != 0) {
                      uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
                      uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                      do {
                        uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                        puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                        LOCK();
                        bVar34 = uVar32 == *puVar33;
                        if (bVar34) {
                          *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar34);
                    }
                    fVar20 = TypeRef__System__Activator__T._0_4_;
                    if (pDVar23 ==
                        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) {
                      pDStack_30 = pDVar23;
                      FUN_?();
                      pcVar17 = (code *)swi(3);
                      bVar19 = (*pcVar17)();
                      return bVar19;
                    }
                    iStack_15 = (pDVar23->fields)._version;
                    uStack_29 = 0;
                    uStack_14 = 0;
                    pMStack_16 = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
                    pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                   *)0x0;
                    ppDStack_28 = &pDStack_13;
                    pDStack_13 = pDVar23;
                    while( true ) {
                      if (pDStack_13 ==
                          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)0x0) goto code_?;
                      if (iStack_15 != (pDStack_13->fields)._version) break;
                      do {
                        if (pDStack_13 ==
                            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0) goto code_?;
                        if ((uint)(pDStack_13->fields)._count <= uStack_14) {
                          return 0;
                        }
                        pDVar37 = (pDStack_13->fields)._entries;
                        lVar38 = (longlong)(int)uStack_14;
                        uVar22 = uStack_14 + 1;
                        if (pDVar37 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                       *)0x0) goto code_?;
                        bVar34 = (uint)pDVar37->max_length <= uStack_14;
                        uStack_14 = uVar22;
                        if (bVar34) goto code_?;
                      } while ((&pDVar37->vector[0].hashCode)[lVar38 * 6] < 0);
                      pMStack_16 = *(MVRigidBody_StuckEvaluator_StuckObject **)
                                     ((longlong)&pDVar37->vector[0].key + lVar38 * 0x18 + 8);
                      func_?();
                      pMVar49 = pMStack_16;
                      if (pMStack_16 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0)
                      goto code_?;
                      pcVar17 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar17 = (code *)FUN_?(), pcVar17 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar17;
                      fVar50 = (float)(*pcRam_?)();
                      if ((fVar20 <= fVar50 - (pMVar49->fields).stuckTime) &&
                         (bVar19 = MVRigidBody+StuckEvaluator+StuckObject::
                                   MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                             (pMVar49,(MethodInfo *)0x0), bVar19 == 0)) {
                        return 1;
                      }
                    }
                    goto code_?;
                  }
                  pDVar37 = (pDStack_5->fields)._entries;
                  lVar38 = (longlong)(int)uVar22;
                  uStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)CONCAT44(uVar22 + 1,(int)uStack_6);
                  if (pDVar37 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                 *)0x0) goto code_?;
                  if ((uint)pDVar37->max_length <= uVar22) goto code_?;
                  lVar51 = lVar38 * 0x20;
                  uVar22 = uVar22 + 1;
                } while (pDVar37->vector[lVar38].hashCode < 0);
                iVar46 = *(int32_t *)&pDVar37->vector[lVar38].key.SourceType;
                pDStack_25 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)0x0;
                uStack_52 = (IntVector__Array *)0x0;
                apIStack_53[0] = (IntVector__Array *)0x0;
                pTVar54 = &pDVar37->vector[lVar38].key;
                pIVar55 = *(IntVector__Array **)&pTVar54->DestinationType;
                pIVar56 = *(IntVector__Array **)(pTVar54 + 1);
                if ((MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                     ->klass->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                pDStack_25 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)CONCAT44(pDStack_25._4_4_,iVar46);
                uStack_52 = pIVar55;
                apIStack_53[0] = pIVar56;
                func_?(apIStack_53);
                iStack_7 = (int32_t)pDStack_25;
                uStack_8 = pDStack_25._4_4_;
                uStack_9 = SUB84(uStack_52,0);
                uStack_10 = uStack_52._4_4_;
                pIStack_11 = apIStack_53[0];
                func_?(&pIStack_11);
                iVar46 = iStack_7;
                pDStack_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)CONCAT44(uStack_8,iStack_7);
                uStack_41 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)CONCAT44(uStack_10,uStack_9);
                uStack_43 = pIStack_11;
                this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                          (this->fields).stuckObjects;
                if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
                goto code_?;
                iVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Vector3]::
                         Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                   (this_01,iStack_7,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                                    ->klass->rgctx_data[0x21].method);
                pDVar21 = (this->fields).stuckObjects;
                if (iVar57 < 0) {
                  pMVar49 = (MVRigidBody_StuckEvaluator_StuckObject *)
                            FUN_?(TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
                  pDStack_25 = uStack_41;
                  uStack_52 = uStack_43;
                  MVRigidBody+StuckEvaluator+StuckObject::
                  MVRigidBody_StuckEvaluator_StuckObject__ctor
                            (pMVar49,(MVOverlapResult *)&pDStack_25,(MethodInfo *)0x0);
                  if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *
                                )0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,iVar46,
                             (Object *)pMVar49,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar51 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                             ->klass->rgctx_data[0x22].method);
                }
                else {
                  if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *
                                )0x0) goto code_?;
                  pOVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,iVar46,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      );
                  if (pOVar58 == (Object *)0x0) goto code_?;
                  *(undefined4 *)&pOVar58[1].monitor = (undefined4)uStack_41;
                  *(undefined4 *)((longlong)&pOVar58[1].monitor + 4) = uStack_41._4_4_;
                  *(undefined4 *)&pOVar58[2].klass = (undefined4)uStack_43;
                  *(undefined4 *)((longlong)&pOVar58[2].klass + 4) = uStack_43._4_4_;
                  func_?();
                }
              } while( true );
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  bVar19 = (*pcVar17)();
  return bVar19;
code_?:
  uVar22 = uVar22 + 1;
  if (-1 < (&pDVar37->vector[0].hashCode)[lVar38 * 6]) goto code_?;
  goto code_?;
code_?:
  iVar46 = *(int32_t *)((longlong)&pDVar37->vector[0].key + lVar38 * 0x18);
  uStack_36 = CONCAT44(uStack_36._4_4_,iVar46);
  iVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
           Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                     ((Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar23,iVar46,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (iVar57 < 0) {
    if (pDVar24 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) goto code_?;
    FUN_?(pDVar24,iVar46,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  goto code_?;
}


/* MVRigidBody+StuckEvaluator(Func`1[System.Collections.Generic.List`1[MVOverlapResult]]) */

void Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
               (MVRigidBody_StuckEvaluator *this,
               Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *getOverlappingObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).stuckObjects =
       (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pcVar6 = pcRam_?;
  (this->fields).updateInterval = 0.2;
  pcVar7 = pcRam_?;
  if ((pcVar6 == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar6, pcVar6 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcVar6)();
  bVar1 = iRam_? != 0;
  (this->fields).updateTime = fVar9;
  (this->fields).getOverlappingObjects = getOverlappingObjects;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).getOverlappingObjects >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

