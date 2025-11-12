
/* Void Reset() */

void Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis_Reset
               (SmoothTouchAxis *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).prevVelocities;
  if (pQVar1 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
    if ((pQVar1->fields)._size != 0) {
      (pQVar1->fields)._size = 0;
    }
    piVar2 = &(pQVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pQVar1->fields)._head = 0;
    (pQVar1->fields)._tail = 0;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 UpdateSmoothVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis_UpdateSmoothVelocity
                    (Vector3 *__return_storage_ptr__,SmoothTouchAxis *this,Vector3 *movement,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Dequeue__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Enqueue_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQStack_1 = (Queue_1_UnityEngine_Vector3_ *)0x0;
  iStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    pVVar10 = (Vector3 *)(*pcVar8)();
    return pVVar10;
  }
  pcRam_? = pcVar8;
  fVar11 = (float)(*pcRam_?)();
  uStack_12._0_4_ = movement->x;
  uStack_12._4_4_ = movement->y;
  pQVar13 = (this->fields).prevVelocities;
  uStack_14 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_14._4_4_,(undefined4)uStack_14);
  if (pQVar13 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
    uStack_12 = CONCAT44(uStack_12._4_4_ / fVar11,(float)uStack_12 / fVar11);
    fStack_15 = movement->z / fVar11;
    FUN_?(pQVar13,&uStack_12);
    pQVar13 = (this->fields).prevVelocities;
    uStack_14 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_14._4_4_,(undefined4)uStack_14);
    if (pQVar13 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
      while ((this->fields).sampleLength <= (pQVar13->fields)._size) {
        uStack_14 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_14._4_4_,(undefined4)uStack_14)
        ;
        if (pQVar13 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((pQVar13->fields)._size == 0) {
          uVar9 = func_?(MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Dequeue__
                                       ->klass->rgctx_data,0xb);
          FUN_?(pQVar13,uVar9);
          goto code_?;
        }
        pVVar16 = (pQVar13->fields)._array;
        uStack_14 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_14._4_4_,(undefined4)uStack_14)
        ;
        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar16->max_length <= (uint)(pQVar13->fields)._head) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          pVVar10 = (Vector3 *)(*pcVar8)();
          return pVVar10;
        }
        iVar17 = (pQVar13->fields)._head + 1;
        iVar18 = 0;
        if (iVar17 != (int)((pQVar13->fields)._array)->max_length) {
          iVar18 = iVar17;
        }
        (pQVar13->fields)._head = iVar18;
        piVar19 = &(pQVar13->fields)._size;
        *piVar19 = *piVar19 + -1;
        piVar19 = &(pQVar13->fields)._version;
        *piVar19 = *piVar19 + 1;
        pQVar13 = (this->fields).prevVelocities;
        uStack_14 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_14._4_4_,(undefined4)uStack_14)
        ;
        if (pQVar13 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      }
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_12._0_4_ = (pVVar20->zeroVector).x;
      uStack_12._4_4_ = (pVVar20->zeroVector).y;
      fStack_15 = (pVVar20->zeroVector).z;
      pQVar13 = (this->fields).prevVelocities;
      if (pQVar13 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      uStack_21 = 0;
      if (iRam_? != 0) {
        uVar22 = (uint)((ulonglong)&uStack_23 >> 0xc);
        uVar24 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
        do {
          uVar25 = *(ulonglong *)(uVar24 * 8 + 0xADDR);
          puVar26 = (ulonglong *)(uVar24 * 8 + 0xADDR);
          LOCK();
          bVar27 = uVar25 == *puVar26;
          if (bVar27) {
            *puVar26 = uVar25 | 1L << (uVar22 & 0x3f);
          }
          UNLOCK();
        } while (!bVar27);
      }
      iStack_2 = (pQVar13->fields)._version;
      uStack_14._4_4_ = (uint)_UNK_?;
      fStack_28 = (float)(_UNK_? >> 0x20);
      fStack_29 = (float)_UNK_?;
      fStack_30 = (float)((ulonglong)_UNK_? >> 0x20);
      uStack_3 = uStack_14._4_4_;
      fStack_4 = fStack_28;
      fStack_5 = fStack_29;
      fStack_6 = fStack_30;
      uStack_7 = 0;
      uStack_23 = 0;
      uStack_14 = &pQStack_1;
      uVar24 = _UNK_? & 0xffffffff;
      do {
        pQStack_1 = pQVar13;
        if (pQVar13 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        unaff_R14 = 
        MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
        ;
        if (iStack_2 != (pQVar13->fields)._version) {
code_?:
          uVar9 = func_?(&TypeInfo__System__InvalidOperationException);
          this_00 = (ProtocolViolationException *)func_?(uVar9);
          message = (String *)func_?(&StringLiteral_Collection_was_modified__enumera);
          System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                    (this_00,message,(MethodInfo *)0x0);
          FUN_?(this_00,unaff_R14);
code_?:
          FUN_?();
          FUN_?();
          pcVar8 = (code *)swi(3);
          pVVar10 = (Vector3 *)(*pcVar8)();
          return pVVar10;
        }
        if ((int)uVar24 == -2) {
code_?:
          uStack_3 = 0xfffffffe;
          fStack_4 = 0.0;
          fStack_5 = 0.0;
          fStack_6 = 0.0;
          pQVar13 = (this->fields).prevVelocities;
          if (pQVar13 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
            fVar11 = (float)(pQVar13->fields)._size;
            fVar31 = (float)uStack_12 / fVar11;
            fVar32 = uStack_12._4_4_ / fVar11;
            fVar11 = fStack_15 / fVar11;
            pcVar8 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar8 = (code *)FUN_?(&UNK_?);
              if (pcVar8 == (code *)0x0) {
                uVar9 = func_?(&UNK_?);
                FUN_?(uVar9,0);
                pcVar8 = (code *)swi(3);
                pVVar10 = (Vector3 *)(*pcVar8)();
                return pVVar10;
              }
            }
            pcRam_? = pcVar8;
            fVar33 = (float)(*pcRam_?)();
            __return_storage_ptr__->x = fVar31 * fVar33;
            __return_storage_ptr__->y = fVar32 * fVar33;
            __return_storage_ptr__->z = fVar11 * fVar33;
            return __return_storage_ptr__;
          }
          break;
        }
        uStack_3 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uStack_3;
        if (uStack_3 == (pQVar13->fields)._size) goto code_?;
        pVVar16 = (pQVar13->fields)._array;
        if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
        uVar22 = (uint)pVVar16->max_length;
        uVar34 = (pQVar13->fields)._head + uStack_3;
        uVar35 = uVar34 - uVar22;
        if ((int)uVar34 < (int)uVar22) {
          uVar35 = uVar34;
        }
        unaff_RSI = 
        MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
        ;
        if (uVar22 <= uVar35) goto code_?;
        uVar36 = pVVar16->vector[(int)uVar35].x;
        uVar37 = pVVar16->vector[(int)uVar35].y;
        fStack_6 = pVVar16->vector[(int)uVar35].z;
        fStack_4 = (float)uVar36;
        fStack_5 = (float)uVar37;
        if ((int)uStack_3 < 0) goto code_?;
        fStack_15 = fStack_6 + fStack_15;
        uStack_12 = CONCAT44((float)uVar37 + uStack_12._4_4_,(float)uVar36 + (float)uStack_12);
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar8)();
  return pVVar10;
code_?:
  FUN_?();
code_?:
  lVar38 = func_?(unaff_RSI->klass);
  uVar9 = func_?(*(undefined8 *)(lVar38 + 0xc0),4);
  FUN_?(&pQStack_1,uVar9);
code_?:
  FUN_?();
  goto code_?;
}


/* SmoothTouchAxis(Int32) */

void Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis__ctor
               (SmoothTouchAxis *this,int32_t sampleLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (Queue_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  FUN_?(pQVar1);
  bVar2 = iRam_? != 0;
  (this->fields).prevVelocities = pQVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).prevVelocities >> 0xc);
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
  (this->fields).sampleLength = sampleLength;
  return;
}

