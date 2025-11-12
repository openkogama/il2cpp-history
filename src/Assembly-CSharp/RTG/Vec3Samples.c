
/* Void AddSample(Vector3) */

void Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples_AddSample
               (Vec3Samples *this,Vector3 *sample,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Insert_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._samples;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((this->fields)._maxNumSamples <= (pLVar1->fields)._size) {
      uVar2 = 0;
      lVar3 = 0;
      cVar4 = cRam_?;
      while( true ) {
        if (cVar4 == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cVar4 = '\x01';
          cRam_? = '\x01';
        }
        pLVar1 = (this->fields)._samples;
        if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((pLVar1->fields)._size + -1 <= (int)uVar2) break;
        if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
        pVVar5 = (pLVar1->fields)._items;
        if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar5->max_length <= uVar2) goto code_?;
        if ((uint)(pLVar1->fields)._size <= uVar2 + 1) goto code_?;
        pVVar6 = (pLVar1->fields)._items;
        if ((uint)pVVar6->max_length <= uVar2 + 1) goto code_?;
        uVar2 = uVar2 + 1;
        *(undefined8 *)((longlong)&pVVar6->vector[1].x + lVar3) =
             *(undefined8 *)((longlong)&pVVar5->vector[0].x + lVar3);
        *(undefined4 *)((longlong)&pVVar6->vector[1].z + lVar3) =
             *(undefined4 *)((longlong)&pVVar5->vector[0].z + lVar3);
        piVar7 = &(pLVar1->fields)._version;
        *piVar7 = *piVar7 + 1;
        lVar3 = lVar3 + 0xc;
      }
      if ((pLVar1->fields)._size == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pVVar5 = (pLVar1->fields)._items;
      if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
      if ((int)pVVar5->max_length != 0) {
        fVar9 = sample->y;
        fVar10 = sample->z;
        pVVar5->vector[0].x = sample->x;
        pVVar5->vector[0].y = fVar9;
        pVVar5->vector[0].z = fVar10;
        piVar7 = &(pLVar1->fields)._version;
        *piVar7 = *piVar7 + 1;
        return;
      }
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      uStack_11._0_4_ = sample->x;
      uStack_11._4_4_ = sample->y;
      fStack_12 = sample->z;
      FUN_?(pLVar1,0,&uStack_11,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Insert_int__UnityEngine__Vector3_
                   );
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Vector3 GetAverage() */

Vector3 * Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples_GetAverage
                    (Vector3 *__return_storage_ptr__,Vec3Samples *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->zeroVector).x;
  uVar2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  pLVar4 = (this->fields)._samples;
  if (pLVar4 == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector3 *)(*pcVar5)();
    return pVVar6;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
    uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  iStack_13 = (pLVar4->fields)._version;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_8._0_4_ = SUB84(pLVar4,0);
  uStack_8._4_4_ = (undefined4)((ulonglong)pLVar4 >> 0x20);
  uStack_16 = (undefined4)uStack_8;
  uStack_17 = uStack_8._4_4_;
  uStack_18 = 0;
  fStack_19 = 0.0;
  fStack_20 = 0.0;
  fStack_21 = 0.0;
  uStack_22 = 0;
  uStack_8 = 0;
  puStack_23 = &uStack_16;
  uStack_24 = uVar2;
  while( true ) {
    cVar25 = FUN_?(&uStack_16,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                         );
    if (cVar25 == '\0') break;
    uVar2._0_4_ = fStack_19 + (float)uStack_24;
    uVar2._4_4_ = fStack_20 + uStack_24._4_4_;
    fVar3 = fStack_21 + fVar3;
    uStack_24 = CONCAT44(uVar2._4_4_,(float)uVar2);
  }
  uStack_8 = CONCAT44(uVar2._4_4_,(float)uVar2);
  puStack_23 = (undefined4 *)CONCAT44(puStack_23._4_4_,fVar3);
  uVar2._0_4_ = (float)FUN_?(&uStack_8);
  if (_UNK_? < (float)uVar2) {
    fVar26 = (float)uStack_24 / (float)uVar2;
    fVar27 = uStack_24._4_4_ / (float)uVar2;
    fVar3 = fVar3 / (float)uVar2;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar26 = (pVVar1->zeroVector).x;
    fVar27 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
  }
  __return_storage_ptr__->x = fVar26;
  __return_storage_ptr__->y = fVar27;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Void SetMaxNumSamples(Int32) */

void Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples_SetMaxNumSamples
               (Vec3Samples *this,int32_t maxNumSamples,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (maxNumSamples != (this->fields)._maxNumSamples) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields)._samples;
    if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (maxNumSamples < (pLVar1->fields)._size) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields)._samples;
      if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      iVar3 = maxNumSamples - (pLVar1->fields)._size;
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          pLVar1 = (this->fields)._samples;
          if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          if ((uint)(pLVar1->fields)._size <= (pLVar1->fields)._size - 1U) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          piVar5 = &(pLVar1->fields)._size;
          *piVar5 = *piVar5 + -1;
          piVar5 = &(pLVar1->fields)._version;
          *piVar5 = *piVar5 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
    }
  }
  return;
}


/* Vec3Samples() */

void Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples__ctor(Vec3Samples *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._maxNumSamples = 2;
  pLVar1 = (List_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields)._samples = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._samples >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Int32 get_NumSamples() */

int32_t Assembly-CSharp.dll::RTG::Vec3Samples::Vec3Samples_get_NumSamples
                  (Vec3Samples *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._samples;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

