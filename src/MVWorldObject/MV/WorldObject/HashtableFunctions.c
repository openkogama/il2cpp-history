
/* Dictionary`2[System.Object,System.Object]
   DeepCopyHashTable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_DeepCopyHashTable
          (Dictionary_2_System_Object_System_Object_ *from,
          Dictionary_2_System_Object_System_Object_ *to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>
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
    FUN_?(&TypeRef__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
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
    FUN_?(&TypeRef__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (from == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
code_?:
    func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                       );
    pOVar1 = (Object *)func_?(&pOStack_2);
    FUN_?(pOVar1);
    pTVar3 = mscorlib.dll::System::Object::Object_GetType(pOVar1,(MethodInfo *)0x0);
    str0 = (String *)func_?(&StringLiteral_Type_not_handled_in_deepcopy_has);
    if (pTVar3 != (Type *)0x0) {
      FUN_?(pTVar3);
      unaff_R15 = (Int32__Array__Class *)func_?(3,pTVar3);
    }
    pIVar4 = (Int32__Array__Class *)
             mscorlib.dll::System::String::String_Concat_4
                       (str0,(String *)unaff_R15,(MethodInfo *)0x0);
    uVar5 = func_?(&TypeInfo__System__ArgumentException);
    pIVar6 = (Int32__Array__Class *)func_?(uVar5);
    method = (MethodInfo *)0x0;
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1
              ((InvalidEnumArgumentException *)pIVar6,(String *)pIVar4,(MethodInfo *)0x0);
    uVar5 = func_?(&
                                 MethodInfo__MV__WorldObject__HashtableFunctions__DeepCopyHashTable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                );
    FUN_?(pIVar6,uVar5);
code_?:
    FUN_?();
code_?:
    pIVar7 = pIVar4;
    FUN_?(method);
code_?:
    FUN_?();
code_?:
    FUN_?(pIVar7,unaff_RSI);
code_?:
    FUN_?(pIVar6,unaff_RSI);
code_?:
    uVar5 = FUN_?(pIVar7,pIVar6);
    pBVar8 = (Byte__Array__Class *)pIVar6;
code_?:
    FUN_?(uVar5,pBVar8);
    pIVar6 = (Int32__Array__Class *)pBVar8;
code_?:
    FUN_?();
code_?:
    FUN_?(pIVar7,unaff_RSI);
code_?:
    FUN_?(pIVar6,unaff_RSI);
code_?:
    uVar5 = FUN_?(pIVar7,pIVar6);
    pIVar9 = pIVar6;
code_?:
    FUN_?(uVar5,pIVar9);
    method = (MethodInfo *)pIVar9;
    pIVar4 = pIVar7;
code_?:
    FUN_?();
code_?:
    FUN_?();
    pIVar7 = pIVar4;
code_?:
    FUN_?(pIVar7,unaff_RSI);
code_?:
    FUN_?(method,unaff_RSI);
code_?:
    uVar5 = FUN_?(pIVar7,method);
    pSVar10 = (Single__Array__Class *)method;
code_?:
    FUN_?(uVar5,pSVar10);
code_?:
    FUN_?();
    FUN_?();
    pcVar11 = (code *)swi(3);
    pDVar12 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar11)();
    return pDVar12;
  }
  uStack_13 = 0;
  uStack_14 = 0;
  if (iRam_? != 0) {
    uVar15 = (uint)((ulonglong)&pDStack_16 >> 0xc);
    puVar17 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
    method = (MethodInfo *)(ulonglong)(uVar15 & 0x3f);
    do {
      uVar18 = *puVar17;
      LOCK();
      uVar19 = *puVar17;
      if (uVar18 == uVar19) {
        *puVar17 = uVar18 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar18 != uVar19);
  }
  unaff_R15 = (Int32__Array__Class *)0x0;
  uStack_20 = (ulonglong)(uint)(from->fields)._version;
  uStack_21 = 2;
  DStack_22._version = (undefined4)uStack_20;
  DStack_22._index = uStack_20._4_4_;
  DStack_22._current.key = (Object *)0x0;
  DStack_22._current.value = (Object *)0x0;
  DStack_22._getEnumeratorRetType = 2;
  DStack_22._36_4_ = 0;
  pDStack_16 = from;
  DStack_22._dictionary = from;
code_?:
  bVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          Object,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                    (&DStack_22,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                    );
  pIVar7 = (Int32__Array__Class *)DStack_22._current.value;
  pOVar1 = DStack_22._current.key;
  if (bVar23 == 0) {
    return to;
  }
  pOStack_2 = DStack_22._current.key;
  pIStack_24 = (Int32__Array__Class *)DStack_22._current.value;
  if ((Int32__Array__Class *)DStack_22._current.value == (Int32__Array__Class *)0x0)
  goto code_?;
  pIVar4 = (Int32__Array__Class *)
           FUN_?((longlong)((_union_86 *)&(DStack_22._current.value)->klass)->dummy + 0x20);
  pIVar25 = TypeRef__System__Single;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  pIVar9 = unaff_R15;
  if (pIVar25 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar26 = FUN_?(pIVar25);
    pIVar9 = (Int32__Array__Class *)FUN_?(lVar26 + 0x20);
  }
  pSVar10 = TypeInfo__System__Single;
  pIVar25 = TypeRef__System__Int32;
  if (pIVar4 == pIVar9) {
    method = (MethodInfo *)TypeInfo__System__Single;
    pIVar4 = pIVar7;
    if (pIVar7 == (Int32__Array__Class *)0x0) goto code_?;
    lVar26 = FUN_?(pIVar7,TypeInfo__System__Single);
    method = (MethodInfo *)TypeInfo__System__Single;
    uVar5 = extraout_XMM0_Qa_01;
    if (lVar26 == 0) goto code_?;
    lVar26 = FUN_?(pIVar7,TypeInfo__System__Single);
    if (lVar26 == 0) goto code_?;
    iVar27 = *(int32_t *)(lVar26 + 0x18);
    method = (MethodInfo *)FUN_?(TypeInfo__System__Single,iVar27);
    unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Single;
    pIVar4 = unaff_R15;
    if (((Int32__Array__Class *)method != (Int32__Array__Class *)0x0) &&
       (pIVar4 = (Int32__Array__Class *)FUN_?(method,TypeInfo__System__Single),
       pIVar4 == (Int32__Array__Class *)0x0)) goto code_?;
    unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Single;
    pAVar28 = (Array *)FUN_?(pIVar7,TypeInfo__System__Single);
    if (pAVar28 == (Array *)0x0) goto code_?;
    in_R9 = (void *)0x0;
    mscorlib.dll::System::Array::Array_Copy_2(pAVar28,(Array *)pIVar4,iVar27,(MethodInfo *)0x0);
    pIVar4 = pIVar7;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pIVar6 = (Int32__Array__Class *)
              mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar25,(MethodInfo *)0x0);
    pIVar9 = TypeInfo__System__Int32;
    pIVar25 = TypeRef__System__Byte;
    pIVar29 = unaff_R15;
    if (pIVar4 == pIVar6) {
      pIVar6 = TypeInfo__System__Int32;
      if (pIVar7 == (Int32__Array__Class *)0x0) goto code_?;
      lVar26 = FUN_?(pIVar7,TypeInfo__System__Int32);
      pIVar6 = TypeInfo__System__Int32;
      uVar5 = extraout_XMM0_Qa_00;
      if (lVar26 == 0) goto code_?;
      lVar26 = FUN_?(pIVar7,TypeInfo__System__Int32);
      if (lVar26 == 0) goto code_?;
      iVar27 = *(int32_t *)(lVar26 + 0x18);
      pIVar6 = (Int32__Array__Class *)FUN_?(TypeInfo__System__Int32,iVar27);
      unaff_RSI = TypeInfo__System__Int32;
      if ((pIVar6 != (Int32__Array__Class *)0x0) &&
         (pIVar29 = (Int32__Array__Class *)FUN_?(pIVar6,TypeInfo__System__Int32),
         pIVar29 == (Int32__Array__Class *)0x0)) goto code_?;
      unaff_RSI = TypeInfo__System__Int32;
      pAVar28 = (Array *)FUN_?(pIVar7,TypeInfo__System__Int32);
      if (pAVar28 == (Array *)0x0) goto code_?;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pIVar9 = (Int32__Array__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar25,(MethodInfo *)0x0);
      pBVar8 = TypeInfo__System__Byte;
      pIVar6 = (Int32__Array__Class *)
                TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pIVar4 != pIVar9) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pIVar9 = (Int32__Array__Class *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        if (pIVar4 == pIVar9) {
          pIVar9 = unaff_R15;
          if (pIVar7 != (Int32__Array__Class *)0x0) {
            in_R9 = ((_union_86 *)&((Object *)pIVar7)->klass)->dummy;
            bVar30 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            method = (MethodInfo *)pIVar7;
            if (((*(byte *)((longlong)in_R9 + 0x130) < bVar30) ||
                (*(Dictionary_2_System_Object_System_Object___Class **)
                  (*(longlong *)((longlong)in_R9 + 200) + -8 + (ulonglong)bVar30 * 8) !=
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                ) || (pIVar9 = pIVar7, pIVar7 == (Int32__Array__Class *)0x0))
            goto code_?;
          }
          method = (MethodInfo *)
                   HashtableFunctions_DeepCopyHashTable_1
                             ((Dictionary_2_System_Object_System_Object_ *)pIVar9,(MethodInfo *)0x0
                             );
          goto code_?;
        }
        if (pIVar4 == (Int32__Array__Class *)0x0) goto code_?;
        cVar31 = (**(code **)((longlong)((_union_86 *)&pIVar4->_0)->dummy + 0x5c8))(pIVar4);
        lVar26 = lRam_?;
        method = (MethodInfo *)pIVar7;
        if (cVar31 == '\0') {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pIVar9 = (Int32__Array__Class *)
                    mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((void *)(lVar26 + 0x20),(MethodInfo *)0x0);
          if (pIVar4 != pIVar9) goto code_?;
        }
        goto code_?;
      }
      pIVar6 = (Int32__Array__Class *)TypeInfo__System__Byte;
      if (pIVar7 == (Int32__Array__Class *)0x0) goto code_?;
      lVar26 = FUN_?(pIVar7,TypeInfo__System__Byte);
      pIVar6 = (Int32__Array__Class *)TypeInfo__System__Byte;
      uVar5 = extraout_XMM0_Qa;
      if (lVar26 == 0) goto code_?;
      lVar26 = FUN_?(pIVar7,TypeInfo__System__Byte);
      if (lVar26 == 0) goto code_?;
      iVar27 = *(int32_t *)(lVar26 + 0x18);
      pIVar6 = (Int32__Array__Class *)FUN_?(TypeInfo__System__Byte,iVar27);
      unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Byte;
      if ((pIVar6 != (Int32__Array__Class *)0x0) &&
         (pIVar29 = (Int32__Array__Class *)FUN_?(pIVar6,TypeInfo__System__Byte),
         pIVar29 == (Int32__Array__Class *)0x0)) goto code_?;
      unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Byte;
      pAVar28 = (Array *)FUN_?(pIVar7,TypeInfo__System__Byte);
      if (pAVar28 == (Array *)0x0) goto code_?;
    }
    in_R9 = (void *)0x0;
    mscorlib.dll::System::Array::Array_Copy_2(pAVar28,(Array *)pIVar29,iVar27,(MethodInfo *)0x0);
    method = (MethodInfo *)pIVar6;
    pIVar4 = pIVar7;
  }
code_?:
  if (to == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  in_R9 = (void *)CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (to,pOVar1,(Object *)method,(InsertionBehavior__Enum)in_R9,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  goto code_?;
}


/* Dictionary`2[System.Object,System.Object]
   DeepCopyHashTable(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
          (Dictionary_2_System_Object_System_Object_ *from,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  value = (Single__Array__Class *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>
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
    FUN_?(&TypeRef__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
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
    FUN_?(&TypeRef__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (from == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
code_?:
    func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                       );
    pOVar1 = (Object *)func_?(&pOStack_2);
    FUN_?(pOVar1);
    pTVar3 = mscorlib.dll::System::Object::Object_GetType(pOVar1,(MethodInfo *)0x0);
    str0 = (String *)func_?(&StringLiteral_Type_not_handled_in_deepcopy_has);
    if (pTVar3 != (Type *)0x0) {
      FUN_?(pTVar3);
      unaff_R15 = (Int32__Array__Class *)func_?(3,pTVar3);
    }
    pIVar4 = (Int32__Array__Class *)
             mscorlib.dll::System::String::String_Concat_4
                       (str0,(String *)unaff_R15,(MethodInfo *)0x0);
    uVar5 = func_?(&TypeInfo__System__ArgumentException);
    pIVar6 = (Int32__Array__Class *)func_?(uVar5);
    value = (Single__Array__Class *)0x0;
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1
              ((InvalidEnumArgumentException *)pIVar6,(String *)pIVar4,(MethodInfo *)0x0);
    uVar5 = func_?(&
                                 MethodInfo__MV__WorldObject__HashtableFunctions__DeepCopyHashTable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                );
    FUN_?(pIVar6,uVar5);
code_?:
    FUN_?();
code_?:
    pIVar7 = pIVar4;
    FUN_?(value);
code_?:
    FUN_?();
code_?:
    FUN_?(pIVar7,unaff_RSI);
code_?:
    FUN_?(pIVar6,unaff_RSI);
code_?:
    uVar5 = FUN_?(pIVar7,pIVar6);
    pBVar8 = (Byte__Array__Class *)pIVar6;
code_?:
    FUN_?(uVar5,pBVar8);
    pIVar6 = (Int32__Array__Class *)pBVar8;
code_?:
    FUN_?();
code_?:
    FUN_?(pIVar7,unaff_RSI);
code_?:
    FUN_?(pIVar6,unaff_RSI);
code_?:
    uVar5 = FUN_?(pIVar7,pIVar6);
    pIVar9 = pIVar6;
code_?:
    FUN_?(uVar5,pIVar9);
    value = (Single__Array__Class *)pIVar9;
    pIVar4 = pIVar7;
code_?:
    FUN_?();
code_?:
    FUN_?();
    pIVar7 = pIVar4;
code_?:
    FUN_?(pIVar7,unaff_RSI);
code_?:
    FUN_?(value,unaff_RSI);
code_?:
    uVar5 = FUN_?(pIVar7,value);
    pSVar10 = value;
code_?:
    FUN_?(uVar5,pSVar10);
code_?:
    FUN_?();
    FUN_?();
    pcVar11 = (code *)swi(3);
    pDVar12 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar11)();
    return pDVar12;
  }
  uStack_13 = 0;
  uStack_14 = 0;
  if (iRam_? != 0) {
    uVar15 = (uint)((ulonglong)&pDStack_16 >> 0xc);
    puVar17 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
    value = (Single__Array__Class *)(ulonglong)(uVar15 & 0x3f);
    do {
      uVar18 = *puVar17;
      LOCK();
      uVar19 = *puVar17;
      if (uVar18 == uVar19) {
        *puVar17 = uVar18 | 1L << (longlong)value;
      }
      UNLOCK();
    } while (uVar18 != uVar19);
  }
  unaff_R15 = (Int32__Array__Class *)0x0;
  uStack_20 = (ulonglong)(uint)(from->fields)._version;
  uStack_21 = 2;
  DStack_22._version = (undefined4)uStack_20;
  DStack_22._index = uStack_20._4_4_;
  DStack_22._current.key = (Object *)0x0;
  DStack_22._current.value = (Object *)0x0;
  DStack_22._getEnumeratorRetType = 2;
  DStack_22._36_4_ = 0;
  pDStack_16 = from;
  DStack_22._dictionary = from;
code_?:
  bVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          Object,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                    (&DStack_22,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                    );
  pIVar7 = (Int32__Array__Class *)DStack_22._current.value;
  pOVar1 = DStack_22._current.key;
  if (bVar23 == 0) {
    return (Dictionary_2_System_Object_System_Object_ *)this;
  }
  pOStack_2 = DStack_22._current.key;
  pIStack_24 = (Int32__Array__Class *)DStack_22._current.value;
  if ((Int32__Array__Class *)DStack_22._current.value == (Int32__Array__Class *)0x0)
  goto code_?;
  pIVar4 = (Int32__Array__Class *)
           FUN_?((longlong)((_union_86 *)&(DStack_22._current.value)->klass)->dummy + 0x20);
  pIVar25 = TypeRef__System__Single;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  pIVar9 = unaff_R15;
  if (pIVar25 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar26 = FUN_?(pIVar25);
    pIVar9 = (Int32__Array__Class *)FUN_?(lVar26 + 0x20);
  }
  pSVar10 = TypeInfo__System__Single;
  pIVar25 = TypeRef__System__Int32;
  if (pIVar4 == pIVar9) {
    value = TypeInfo__System__Single;
    pIVar4 = pIVar7;
    if (pIVar7 == (Int32__Array__Class *)0x0) goto code_?;
    lVar26 = FUN_?(pIVar7,TypeInfo__System__Single);
    value = TypeInfo__System__Single;
    uVar5 = extraout_XMM0_Qa_01;
    if (lVar26 == 0) goto code_?;
    lVar26 = FUN_?(pIVar7,TypeInfo__System__Single);
    if (lVar26 == 0) goto code_?;
    iVar27 = *(int32_t *)(lVar26 + 0x18);
    value = (Single__Array__Class *)FUN_?(TypeInfo__System__Single,iVar27);
    unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Single;
    pIVar4 = unaff_R15;
    if ((value != (Single__Array__Class *)0x0) &&
       (pIVar4 = (Int32__Array__Class *)FUN_?(value,TypeInfo__System__Single),
       pIVar4 == (Int32__Array__Class *)0x0)) goto code_?;
    unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Single;
    pAVar28 = (Array *)FUN_?(pIVar7,TypeInfo__System__Single);
    if (pAVar28 == (Array *)0x0) goto code_?;
    in_R9 = (void *)0x0;
    mscorlib.dll::System::Array::Array_Copy_2(pAVar28,(Array *)pIVar4,iVar27,(MethodInfo *)0x0);
    pIVar4 = pIVar7;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pIVar6 = (Int32__Array__Class *)
              mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar25,(MethodInfo *)0x0);
    pIVar9 = TypeInfo__System__Int32;
    pIVar25 = TypeRef__System__Byte;
    pIVar29 = unaff_R15;
    if (pIVar4 == pIVar6) {
      pIVar6 = TypeInfo__System__Int32;
      if (pIVar7 == (Int32__Array__Class *)0x0) goto code_?;
      lVar26 = FUN_?(pIVar7,TypeInfo__System__Int32);
      pIVar6 = TypeInfo__System__Int32;
      uVar5 = extraout_XMM0_Qa_00;
      if (lVar26 == 0) goto code_?;
      lVar26 = FUN_?(pIVar7,TypeInfo__System__Int32);
      if (lVar26 == 0) goto code_?;
      iVar27 = *(int32_t *)(lVar26 + 0x18);
      pIVar6 = (Int32__Array__Class *)FUN_?(TypeInfo__System__Int32,iVar27);
      unaff_RSI = TypeInfo__System__Int32;
      if ((pIVar6 != (Int32__Array__Class *)0x0) &&
         (pIVar29 = (Int32__Array__Class *)FUN_?(pIVar6,TypeInfo__System__Int32),
         pIVar29 == (Int32__Array__Class *)0x0)) goto code_?;
      unaff_RSI = TypeInfo__System__Int32;
      pAVar28 = (Array *)FUN_?(pIVar7,TypeInfo__System__Int32);
      if (pAVar28 == (Array *)0x0) goto code_?;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pIVar9 = (Int32__Array__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar25,(MethodInfo *)0x0);
      pBVar8 = TypeInfo__System__Byte;
      pIVar6 = (Int32__Array__Class *)
                TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pIVar4 != pIVar9) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pIVar9 = (Int32__Array__Class *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
        if (pIVar4 == pIVar9) {
          pIVar9 = unaff_R15;
          if (pIVar7 != (Int32__Array__Class *)0x0) {
            in_R9 = ((_union_86 *)&((Object *)pIVar7)->klass)->dummy;
            bVar30 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            value = (Single__Array__Class *)pIVar7;
            if (((*(byte *)((longlong)in_R9 + 0x130) < bVar30) ||
                (*(Dictionary_2_System_Object_System_Object___Class **)
                  (*(longlong *)((longlong)in_R9 + 200) + -8 + (ulonglong)bVar30 * 8) !=
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                ) || (pIVar9 = pIVar7, pIVar7 == (Int32__Array__Class *)0x0))
            goto code_?;
          }
          value = (Single__Array__Class *)
                  HashtableFunctions_DeepCopyHashTable_1
                            ((Dictionary_2_System_Object_System_Object_ *)pIVar9,(MethodInfo *)0x0)
          ;
          goto code_?;
        }
        if (pIVar4 == (Int32__Array__Class *)0x0) goto code_?;
        cVar31 = (**(code **)((longlong)((_union_86 *)&pIVar4->_0)->dummy + 0x5c8))(pIVar4);
        lVar26 = lRam_?;
        value = (Single__Array__Class *)pIVar7;
        if (cVar31 == '\0') {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pIVar9 = (Int32__Array__Class *)
                    mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((void *)(lVar26 + 0x20),(MethodInfo *)0x0);
          if (pIVar4 != pIVar9) goto code_?;
        }
        goto code_?;
      }
      pIVar6 = (Int32__Array__Class *)TypeInfo__System__Byte;
      if (pIVar7 == (Int32__Array__Class *)0x0) goto code_?;
      lVar26 = FUN_?(pIVar7,TypeInfo__System__Byte);
      pIVar6 = (Int32__Array__Class *)TypeInfo__System__Byte;
      uVar5 = extraout_XMM0_Qa;
      if (lVar26 == 0) goto code_?;
      lVar26 = FUN_?(pIVar7,TypeInfo__System__Byte);
      if (lVar26 == 0) goto code_?;
      iVar27 = *(int32_t *)(lVar26 + 0x18);
      pIVar6 = (Int32__Array__Class *)FUN_?(TypeInfo__System__Byte,iVar27);
      unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Byte;
      if ((pIVar6 != (Int32__Array__Class *)0x0) &&
         (pIVar29 = (Int32__Array__Class *)FUN_?(pIVar6,TypeInfo__System__Byte),
         pIVar29 == (Int32__Array__Class *)0x0)) goto code_?;
      unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Byte;
      pAVar28 = (Array *)FUN_?(pIVar7,TypeInfo__System__Byte);
      if (pAVar28 == (Array *)0x0) goto code_?;
    }
    in_R9 = (void *)0x0;
    mscorlib.dll::System::Array::Array_Copy_2(pAVar28,(Array *)pIVar29,iVar27,(MethodInfo *)0x0);
    value = (Single__Array__Class *)pIVar6;
    pIVar4 = pIVar7;
  }
code_?:
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) goto code_?;
  in_R9 = (void *)CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,pOVar1,(Object *)value,
             (InsertionBehavior__Enum)in_R9,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  goto code_?;
}


/* String PrettyString(Dictionary`2[System.Object,System.Object]) */

String * MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                   (Dictionary_2_System_Object_System_Object_ *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = HashtableFunctions_PrettyString_1(dictionary,0,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_u000A;
  if ((StringLiteral_u000A == (String *)0x0) || ((StringLiteral_u000A->fields)._stringLength == 0))
  {
    if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
      return pSVar1;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    return StringLiteral_u000A;
  }
  iVar3 = (StringLiteral_u000A->fields)._stringLength;
  pSVar4 = (String *)FUN_?((pSVar1->fields)._stringLength + iVar3,pSVar1,0);
  if (pSVar4 == (String *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  if ((pSVar2->fields)._stringLength <= (pSVar4->fields)._stringLength) {
    puVar6 = &(pSVar4->fields)._firstChar;
    puVar7 = &(pSVar2->fields)._firstChar;
    uVar8 = (pSVar2->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8) ||
       ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar6,(uint8_t *)puVar7,uVar8,(MethodInfo *)0x0);
    }
    if ((pSVar1->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar3) {
      puVar7 = &(pSVar4->fields)._firstChar + iVar3;
      puVar6 = &(pSVar1->fields)._firstChar;
      uVar8 = (pSVar1->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8) ||
         ((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar6,uVar8,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar10,uVar9);
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar10,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar10,uVar9);
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* String PrettyString(Dictionary`2[System.Object,System.Object], Int32) */

String * MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                   (Dictionary_2_System_Object_System_Object_ *dictionary,int32_t padLeft,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
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
    FUN_?(&StringLiteral__0____1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_____1____2__u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  if (dictionary == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
code_?:
    FUN_?(method);
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar2)();
    return pSVar1;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  uStack_10 = (ulonglong)(uint)(dictionary->fields)._version;
  uStack_11 = 2;
  DStack_12._version = (undefined4)uStack_10;
  DStack_12._index = uStack_10._4_4_;
  DStack_12._current.key = (Object *)0x0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  pDStack_6 = dictionary;
  DStack_12._dictionary = dictionary;
  do {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    method = (MethodInfo *)DStack_12._current.value;
    arg1 = DStack_12._current.key;
    if (bVar13 == 0) {
      return pSVar1;
    }
    if ((MethodInfo *)DStack_12._current.value == (MethodInfo *)0x0) {
code_?:
      if (::StringLiteral__ == (String *)0x0) goto code_?;
      pSVar14 = mscorlib.dll::System::String::String_PadLeft_1
                         (::StringLiteral__,padLeft,0x20,(MethodInfo *)0x0);
      pSVar14 = mscorlib.dll::System::String::String_Format_2
                         (StringLiteral__0_____1____2__u000A,(Object *)pSVar14,arg1,(Object *)method,
                          (MethodInfo *)0x0);
    }
    else {
      bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((((((Dictionary_2_System_Object_System_Object___Class *)(DStack_12._current.value)->klass)
            ->_1).naturalAligment < bVar15) ||
          ((Dictionary_2_System_Object_System_Object___Class *)
           (((Dictionary_2_System_Object_System_Object___Class *)(DStack_12._current.value)->klass)
           ->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
         ((MethodInfo *)DStack_12._current.value == (MethodInfo *)0x0)) goto code_?;
      if (::StringLiteral__ == (String *)0x0) goto code_?;
      pSVar14 = mscorlib.dll::System::String::String_PadLeft_1
                         (::StringLiteral__,padLeft,0x20,(MethodInfo *)0x0);
      pSVar14 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1_u000A,(Object *)pSVar14,arg1,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar14,(MethodInfo *)0x0);
      dictionary_00 = (MethodInfo *)0x0;
      if (method != (MethodInfo *)0x0) {
        bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((((((Dictionary_2_System_Object_System_Object___Class *)((Object *)method)->klass)->_1).
              naturalAligment < bVar15) ||
            ((Dictionary_2_System_Object_System_Object___Class *)
             (((Dictionary_2_System_Object_System_Object___Class *)((Object *)method)->klass)->_1).
             typeHierarchy[(ulonglong)bVar15 - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
           (dictionary_00 = method, method == (MethodInfo *)0x0)) goto code_?;
      }
      pSVar14 = HashtableFunctions_PrettyString_1
                         ((Dictionary_2_System_Object_System_Object_ *)dictionary_00,padLeft + 1,
                          (MethodInfo *)0x0);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar14,(MethodInfo *)0x0);
  } while( true );
}

