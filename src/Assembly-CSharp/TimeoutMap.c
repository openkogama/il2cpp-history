
/* Void Add(Int32) */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Add(TimeoutMap *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).weaponTimeOutMap;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  value = (float)(*pcRam_?)();
  if (this_00 == (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
  Dictionary_2_System_Int32_System_Single__TryInsert
            (this_00,id,value,CONCAT31((int3)((uint)in_R9D >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Contains
               (TimeoutMap *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_float>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).weaponTimeOutMap;
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__FindEntry
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_float>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Update(TimeoutMap *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_Int32_System_Single_ *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  pHVar5 = (this->fields).removeSet;
  if (pHVar5 != (HashSet_1_System_Int32_ *)0x0) {
    if (0 < (pHVar5->fields)._lastIndex) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar5->fields)._slots,0,(pHVar5->fields)._lastIndex,(MethodInfo *)0x0);
      pIVar6 = (pHVar5->fields)._buckets;
      if (pIVar6 == (Int32__Array *)0x0) goto code_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar5->fields)._buckets,0,(int32_t)pIVar6->max_length,(MethodInfo *)0x0)
      ;
      (pHVar5->fields)._count = 0;
      (pHVar5->fields)._lastIndex = 0;
      (pHVar5->fields)._freeList = -1;
    }
    piVar7 = &(pHVar5->fields)._version;
    *piVar7 = *piVar7 + 1;
    pDVar8 = (this->fields).weaponTimeOutMap;
    if (pDVar8 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&uStack_10 >> 0xc);
        uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (ulonglong)(uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      ppDStack_15 = (Dictionary_2_System_Int32_System_Single_ **)
                    (ulonglong)(uint)(pDVar8->fields)._version;
      uStack_16 = 2;
      uStack_17 = 0;
      uStack_18 = (ulonglong)ppDStack_15;
      pMStack_19 = (MethodInfo *)0x0;
      uStack_20 = 2;
      uStack_10 = 0;
      ppDStack_15 = &pDStack_21;
      pDStack_21 = pDVar8;
code_?:
      cVar22 = FUN_?(&pDStack_21,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                           );
      pMVar23 = pMStack_19;
      if (cVar22 != '\0') {
        fVar24 = (this->fields).timeOut;
        pcVar25 = pcRam_?;
        if ((pcRam_? != (code *)0x0) ||
           (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 != (code *)0x0))
        goto code_?;
        uVar26 = func_?(&UNK_?);
        FUN_?(uVar26,0);
        goto code_?;
      }
      pDVar8 = (Dictionary_2_System_Int32_System_Single_ *)(this->fields).removeSet;
      if (pDVar8 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&uStack_10 >> 0xc);
          uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        iStack_3 = *(int *)&(pDVar8->fields)._keys;
        uStack_17 = 0;
        uStack_2 = 0;
        uStack_4 = 0;
        uStack_10 = 0;
        ppDStack_15 = &pDStack_1;
        pDStack_1 = pDVar8;
        while (pDStack_1 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
          pMVar23 = 
          MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
          if (iStack_3 != *(int *)&(pDStack_1->fields)._keys) goto code_?;
          while( true ) {
            if (pDStack_1 == (Dictionary_2_System_Int32_System_Single_ *)0x0)
            goto code_?;
            if ((pDStack_1->fields)._freeList <= (int)uStack_2) {
              return;
            }
            pDVar27 = (pDStack_1->fields)._entries;
            if (pDVar27 == (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array *)0x0)
            goto code_?;
            if ((uint)pDVar27->max_length <= uStack_2) goto code_?;
            if (-1 < (&pDVar27->vector[0].hashCode)[(longlong)(int)uStack_2 * 3]) break;
            uStack_2 = uStack_2 + 1;
          }
          if (pDVar27 == (Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array *)0x0)
          goto code_?;
          if ((uint)pDVar27->max_length <= uStack_2) goto code_?;
          key = (&pDVar27->vector[0].key)[(longlong)(int)uStack_2 * 3];
          uStack_4 = CONCAT44(uStack_4._4_4_,key);
          uStack_2 = uStack_2 + 1;
          pDVar8 = (this->fields).weaponTimeOutMap;
          if (pDVar8 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__Remove
                    (pDVar8,key,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Remove_int_);
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
code_?:
  pcRam_? = pcVar25;
  fVar28 = (float)(*pcRam_?)();
  fStackX_1c = (float)((ulonglong)pMVar23 >> 0x20);
  if (fVar28 < fStackX_1c + fVar24) goto code_?;
  pHVar5 = (this->fields).removeSet;
  if (pHVar5 != (HashSet_1_System_Int32_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__AddIfNotPresent
              (pHVar5,(int32_t)pMVar23,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
               [0x15].method);
    goto code_?;
  }
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
  uVar26 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (ProtocolViolationException *)func_?(uVar26);
  message = (String *)func_?(&StringLiteral_Collection_was_modified__enumera);
  System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  FUN_?(this_00,pMVar23);
code_?:
  FUN_?();
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* TimeoutMap(Single) */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap__ctor
               (TimeoutMap *this,float timeOut,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_System_Single_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
  FUN_?(pDVar1);
  bVar2 = iRam_? != 0;
  (this->fields).weaponTimeOutMap = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).weaponTimeOutMap >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pHVar7 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar7,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).removeSet = pHVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).removeSet >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).timeOut = timeOut;
  return;
}

