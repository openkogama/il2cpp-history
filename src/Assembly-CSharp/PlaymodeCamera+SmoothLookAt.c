
/* Void Clear() */

void Assembly-CSharp.dll::PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt_Clear
               (PlaymodeCamera_SmoothLookAt *this,MethodInfo *method)

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


/* Vector3 GetCurrentLookAt(Vector3) */

Vector3 * Assembly-CSharp.dll::PlaymodeCamera+SmoothLookAt::
          PlaymodeCamera_SmoothLookAt_GetCurrentLookAt
                    (Vector3 *__return_storage_ptr__,PlaymodeCamera_SmoothLookAt *this,
                    Vector3 *velocity,MethodInfo *method)

{
  method_00 = (MethodInfo *)velocity;
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pQStack_1 = (Queue_1_UnityEngine_Vector3_ *)0x0;
  iStack_2 = 0;
  iStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  uStack_7 = 0;
  pQVar8 = (this->fields).prevVelocities;
  while( true ) {
    uVar9 = VStack_10._0_8_;
    ppQVar11 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_12._4_4_,(undefined4)uStack_12);
    if (pQVar8 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    pMVar13 = (MethodInfo *)(this->fields).prevVelocities;
    if ((pQVar8->fields)._size < 5) break;
    ppQVar11 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_12._4_4_,(undefined4)uStack_12);
    if (pMVar13 == (MethodInfo *)0x0) goto code_?;
    if (*(int *)&pMVar13->klass == 0) {
      uVar9 = func_?(MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Dequeue__
                                   ->klass->rgctx_data,0xb);
      FUN_?(pMVar13,uVar9);
      pcVar14 = (code *)swi(3);
      pVVar15 = (Vector3 *)(*pcVar14)();
      return pVVar15;
    }
    ppQVar11 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_12._4_4_,(undefined4)uStack_12);
    if (pMVar13->invoker_method == (InvokerMethod)0x0) goto code_?;
    if (*(uint *)(pMVar13->invoker_method + 0x18) <= *(uint *)&pMVar13->name) {
      FUN_?();
      pcVar14 = (code *)swi(3);
      pVVar15 = (Vector3 *)(*pcVar14)();
      return pVVar15;
    }
    iVar16 = *(int *)&pMVar13->name + 1;
    iVar17 = 0;
    if (iVar16 != *(int *)(pMVar13->invoker_method + 0x18)) {
      iVar17 = iVar16;
    }
    *(int *)&pMVar13->name = iVar17;
    *(int *)&pMVar13->klass = *(int *)&pMVar13->klass + -1;
    puVar18 = (undefined1 *)((longlong)&pMVar13->klass + 4);
    *(int *)puVar18 = *(int *)puVar18 + 1;
    pQVar8 = (this->fields).prevVelocities;
  }
  velocity->z = 0.0;
  velocity->x = 0.0;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    pMVar19 = (MethodInfo *)0x0;
    FUN_?(uVar9);
    ppQVar11 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_12._4_4_,(undefined4)uStack_12);
    goto code_?;
  }
  pcRam_? = pcVar14;
  fVar20 = (float)(*pcRam_?)();
  ppQVar11 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_12._4_4_,(undefined4)uStack_12);
  uVar9._0_4_ = velocity->x;
  uVar9._4_4_ = velocity->y;
  VStack_10.x = (float)uVar9 * fVar20;
  if (pMVar13 == (MethodInfo *)0x0) goto code_?;
  VStack_10.y = uVar9._4_4_ * fVar20;
  VStack_10.z = velocity->z * fVar20;
  FUN_?(pMVar13,&VStack_10);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppQVar11 = (Queue_1_UnityEngine_Vector3_ **)CONCAT44(uStack_12._4_4_,(undefined4)uStack_12);
  pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar20 = (pVVar21->zeroVector).z;
  fVar22 = (pVVar21->zeroVector).y;
  __return_storage_ptr__->x = (pVVar21->zeroVector).x;
  __return_storage_ptr__->y = fVar22;
  __return_storage_ptr__->z = fVar20;
  pQVar8 = (this->fields).prevVelocities;
  uVar9 = VStack_10._0_8_;
  if (pQVar8 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  uStack_23 = 0;
  if (iRam_? != 0) {
    uVar24 = (uint)((ulonglong)&uStack_25 >> 0xc);
    uVar26 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
    method_00 = (MethodInfo *)(ulonglong)(uVar24 & 0x3f);
    do {
      uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
      puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
      LOCK();
      bVar29 = uVar27 == *puVar28;
      if (bVar29) {
        *puVar28 = uVar27 | 1L << (longlong)method_00;
      }
      UNLOCK();
    } while (!bVar29);
  }
  iStack_2 = (pQVar8->fields)._version;
  uStack_12._4_4_ = (int)_UNK_?;
  fStack_30 = (float)((ulonglong)_UNK_? >> 0x20);
  fStack_31 = (float)_UNK_?;
  fStack_32 = (float)((ulonglong)_UNK_? >> 0x20);
  fStack_4 = fStack_30;
  fStack_5 = fStack_31;
  fStack_6 = fStack_32;
  uStack_7 = 0;
  uStack_25 = 0;
  ppQVar11 = &pQStack_1;
  while (pQStack_1 = pQVar8, iStack_3 = uStack_12._4_4_,
        pQVar8 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
    pMVar13 = 
    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
    ;
    if (iStack_2 != (pQVar8->fields)._version) goto code_?;
    if ((uStack_12._4_4_ == -2) ||
       (uStack_12._4_4_ = uStack_12._4_4_ + 1, uStack_12._4_4_ == (pQVar8->fields)._size)) {
      iStack_3 = -2;
      fStack_4 = 0.0;
      fStack_5 = 0.0;
      fStack_6 = 0.0;
      pQVar8 = (this->fields).prevVelocities;
      uVar9 = VStack_10._0_8_;
      if (pQVar8 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
        VStack_10.x = __return_storage_ptr__->x;
        VStack_10.y = __return_storage_ptr__->y;
        fVar20 = (float)(pQVar8->fields)._size;
        __return_storage_ptr__->x = VStack_10.x / fVar20;
        __return_storage_ptr__->y = VStack_10.y / fVar20;
        __return_storage_ptr__->z = __return_storage_ptr__->z / fVar20;
        if (_UNK_? <
            __return_storage_ptr__->x * __return_storage_ptr__->x +
            __return_storage_ptr__->y * __return_storage_ptr__->y +
            __return_storage_ptr__->z * __return_storage_ptr__->z) {
          uStack_12 = ppQVar11;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                              (&VStack_10,__return_storage_ptr__,method_00);
          uVar33 = pVVar15->x;
          fVar22 = pVVar15->y * _UNK_?;
          fVar20 = pVVar15->z * _UNK_?;
          __return_storage_ptr__->x = (float)uVar33 * _UNK_?;
          __return_storage_ptr__->y = fVar22;
          __return_storage_ptr__->z = fVar20;
        }
        return __return_storage_ptr__;
      }
code_?:
      VStack_10._0_8_ = uVar9;
      uStack_12 = ppQVar11;
      FUN_?();
      pcVar14 = (code *)swi(3);
      pVVar15 = (Vector3 *)(*pcVar14)();
      return pVVar15;
    }
    pVVar34 = (pQVar8->fields)._array;
    iStack_3 = uStack_12._4_4_;
    if (pVVar34 == (Vector3__Array *)0x0) goto code_?;
    uVar24 = (uint)pVVar34->max_length;
    method_00 = (MethodInfo *)(ulonglong)uVar24;
    uVar35 = (pQVar8->fields)._head + uStack_12._4_4_;
    pMVar19 = (MethodInfo *)(ulonglong)uVar35;
    uVar36 = uVar35 - uVar24;
    if ((int)uVar35 < (int)uVar24) {
      uVar36 = uVar35;
    }
    if (uVar24 <= uVar36) goto code_?;
    uVar37 = pVVar34->vector[(int)uVar36].x;
    uVar38 = pVVar34->vector[(int)uVar36].y;
    fStack_6 = pVVar34->vector[(int)uVar36].z;
    pMVar19 = 
    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
    ;
    fStack_4 = (float)uVar37;
    fStack_5 = (float)uVar38;
    if (uStack_12._4_4_ < 0) goto code_?;
    VStack_10.x = __return_storage_ptr__->x;
    VStack_10.y = __return_storage_ptr__->y;
    __return_storage_ptr__->x = (float)uVar37 + VStack_10.x;
    __return_storage_ptr__->y = (float)uVar38 + VStack_10.y;
    __return_storage_ptr__->z = fStack_6 + __return_storage_ptr__->z;
  }
code_?:
  uStack_12 = ppQVar11;
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  pVVar15 = (Vector3 *)(*pcVar14)();
  return pVVar15;
code_?:
  uStack_12 = ppQVar11;
  FUN_?();
  ppQVar11 = uStack_12;
code_?:
  uStack_12 = ppQVar11;
  lVar39 = func_?(pMVar19->klass);
  uVar9 = func_?(*(undefined8 *)(lVar39 + 0xc0),4);
  FUN_?(&pQStack_1,uVar9);
  ppQVar11 = uStack_12;
code_?:
  uStack_12 = ppQVar11;
  FUN_?();
  ppQVar11 = uStack_12;
code_?:
  uStack_12 = ppQVar11;
  uVar9 = func_?(&TypeInfo__System__InvalidOperationException);
  this_00 = (ProtocolViolationException *)func_?(uVar9);
  message = (String *)func_?(&StringLiteral_Collection_was_modified__enumera);
  System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
            (this_00,message,(MethodInfo *)0x0);
  FUN_?(this_00,pMVar13);
  ppQVar11 = uStack_12;
  goto code_?;
}


/* PlaymodeCamera+SmoothLookAt() */

void Assembly-CSharp.dll::PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt__ctor
               (PlaymodeCamera_SmoothLookAt *this,MethodInfo *method)

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
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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

