
/* Void Clear() */

void Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
               (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  pOVar1 = (this->fields)._lock;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = FUN_?(pOVar1,0xffffffff);
    pQVar3 = (this->fields)._queue;
    if (pQVar3 != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar4 = method->klass->rgctx_data[4].method;
      (*pMVar4->methodPointer)(pQVar3,pMVar4);
      if (cVar2 == '\0') {
        return;
      }
      if (pOVar1 != (Object *)0x0) {
        FUN_?();
        return;
      }
      uVar5 = FUN_?(&UNK_?);
      FUN_?(uVar5,0);
    }
    FUN_?();
  }
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar5);
  paramName = (String *)func_?(&StringLiteral_obj);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  uVar5 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  FUN_?(this_00,uVar5);
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* __Il2CppFullySharedGenericType Dequeue() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Dequeue
          (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x30) + 0xfc);
  apuStack_2[0] = &UNK_?;
  pMStackX_10 = method;
  uStackX_18 = uVar1;
  lVar3 = FUN_?(0xffffffffffffff0);
  lVar3 = -lVar3;
  lVar4 = (longlong)&lStack_5 + lVar3;
  lStack_6 = lVar4;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar7 = FUN_?();
  lVar7 = -lVar7;
  lVar8 = (longlong)&lStack_5 + lVar7 + lVar3;
  lStack_9 = lVar8;
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  FUN_?(lVar8,0);
  pOStackX_20 = (this->fields)._lock;
  acStackX_8[0] = '\0';
  uStack_10 = 0;
  pcStack_11 = acStackX_8;
  ppOStack_12 = &pOStackX_20;
  if (pOStackX_20 != (Object *)0x0) {
    *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
    acStackX_8[0] = FUN_?(pOStackX_20,0xffffffff);
    pQVar13 = (this->fields)._queue;
    if (pQVar13 != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      puVar14 = *(undefined8 **)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x28);
      pcVar15 = (code *)puVar14[2];
      lStack_5 = lVar4;
      *(longlong *)((longlong)alStack_16 + lVar7 + lVar3) = lVar4;
      uVar17 = *puVar14;
      *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
      (*pcVar15)(uVar17,puVar14,pQVar13,&lStack_5);
      *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
      FUN_?(lVar8,lVar4);
      if (acStackX_8[0] == '\0') {
code_?:
        *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
        FUN_?(lVar4,lVar8,uVar1);
        *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
        p_Var9 = (_Il2CppFullySharedGenericType *)FUN_?(method,lVar4,uVar1);
        return p_Var9;
      }
      if (pOStackX_20 != (Object *)0x0) {
        *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
        FUN_?();
        goto code_?;
      }
      *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
      uVar17 = FUN_?(&UNK_?);
      *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
      FUN_?(uVar17,0);
    }
    *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
    FUN_?();
  }
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  uVar17 = func_?(&TypeInfo__System__ArgumentNullException);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  this_00 = (ArgumentNullException *)func_?(uVar17);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  paramName = (String *)func_?(&StringLiteral_obj);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  uVar17 = func_?(&
                               MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                              );
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  FUN_?(this_00,uVar17);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  FUN_?();
  pcVar15 = (code *)swi(3);
  p_Var9 = (_Il2CppFullySharedGenericType *)(*pcVar15)();
  return p_Var9;
}


/* Void Enqueue(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Enqueue
               (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *a,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  pTVar2 = this;
  _StackX_10.klass = (_Il2CppFullySharedGenericType__Class *)a;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  plVar4 = (longlong *)((longlong)alStack_5 + lVar3 + 0x10);
  _StackX_10.monitor = (MonitorData *)(pTVar2->fields)._lock;
  acStackX_8[0] = '\0';
  alStack_5[3] = 0;
  pcStack_6 = acStackX_8;
  ppMStack_7 = &_StackX_10.monitor;
  if ((Object *)_StackX_10.monitor != (Object *)0x0) {
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    acStackX_8[0] = FUN_?(_StackX_10.monitor,0xffffffff);
    pQVar8 = (this->fields)._queue;
    p_Var9 = &_StackX_10;
    if (*(int *)&(method->klass->rgctx_data[6].method)->return_type < 0) {
      p_Var9 = a;
    }
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    FUN_?(plVar4,p_Var9);
    if (pQVar8 != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      if (-1 < *(int *)&(method->klass->rgctx_data[6].method)->return_type) {
        plVar4 = (longlong *)*plVar4;
      }
      pMVar9 = method->klass->rgctx_data[7].method;
      pIVar10 = pMVar9->invoker_method;
      *(longlong **)((longlong)alStack_5 + lVar3) = plVar4;
      pIVar11 = pMVar9->methodPointer;
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      pvStackX_20 = plVar4;
      (*pIVar10)(pIVar11,pMVar9,pQVar8,&pvStackX_20,*(void **)((longlong)alStack_5 + lVar3));
      if (acStackX_8[0] == '\0') {
        return;
      }
      if ((Object *)_StackX_10.monitor != (Object *)0x0) {
        *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
        FUN_?();
        return;
      }
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      uVar12 = FUN_?(&UNK_?);
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      FUN_?(uVar12,0);
    }
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    FUN_?();
  }
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  uVar12 = func_?(&TypeInfo__System__ArgumentNullException);
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  this_00 = (ArgumentNullException *)func_?(uVar12);
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  paramName = (String *)func_?(&StringLiteral_obj);
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  uVar12 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  FUN_?(this_00,uVar12);
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* __Il2CppFullySharedGenericType Peek() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Peek
          (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x30) + 0xfc);
  apuStack_2[0] = &UNK_?;
  pMStackX_10 = method;
  uStackX_18 = uVar1;
  lVar3 = FUN_?(0xffffffffffffff0);
  lVar3 = -lVar3;
  lVar4 = (longlong)&lStack_5 + lVar3;
  lStack_6 = lVar4;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar7 = FUN_?();
  lVar7 = -lVar7;
  lVar8 = (longlong)&lStack_5 + lVar7 + lVar3;
  lStack_9 = lVar8;
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  FUN_?(lVar8,0);
  pOStackX_20 = (this->fields)._lock;
  acStackX_8[0] = '\0';
  uStack_10 = 0;
  pcStack_11 = acStackX_8;
  ppOStack_12 = &pOStackX_20;
  if (pOStackX_20 != (Object *)0x0) {
    *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
    acStackX_8[0] = FUN_?(pOStackX_20,0xffffffff);
    pQVar13 = (this->fields)._queue;
    if (pQVar13 != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      puVar14 = *(undefined8 **)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x40);
      pcVar15 = (code *)puVar14[2];
      lStack_5 = lVar4;
      *(longlong *)((longlong)alStack_16 + lVar7 + lVar3) = lVar4;
      uVar17 = *puVar14;
      *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
      (*pcVar15)(uVar17,puVar14,pQVar13,&lStack_5);
      *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
      FUN_?(lVar8,lVar4);
      if (acStackX_8[0] == '\0') {
code_?:
        *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
        FUN_?(lVar4,lVar8,uVar1);
        *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
        p_Var9 = (_Il2CppFullySharedGenericType *)FUN_?(method,lVar4,uVar1);
        return p_Var9;
      }
      if (pOStackX_20 != (Object *)0x0) {
        *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
        FUN_?();
        goto code_?;
      }
      *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
      uVar17 = FUN_?(&UNK_?);
      *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
      FUN_?(uVar17,0);
    }
    *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
    FUN_?();
  }
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  uVar17 = func_?(&TypeInfo__System__ArgumentNullException);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  this_00 = (ArgumentNullException *)func_?(uVar17);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  paramName = (String *)func_?(&StringLiteral_obj);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  uVar17 = func_?(&
                               MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                              );
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  FUN_?(this_00,uVar17);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  *(undefined **)((longlong)apuStack_2 + lVar7 + lVar3) = &UNK_?;
  FUN_?();
  pcVar15 = (code *)swi(3);
  p_Var9 = (_Il2CppFullySharedGenericType *)(*pcVar15)();
  return p_Var9;
}


/* ThreadSafeQueue`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](Int32) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               int32_t initialCap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__System__Object);
  bVar2 = iRam_? != 0;
  (this->fields)._lock = pOVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._lock >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pvVar7 = method->klass->rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
    pvVar7 = (void *)FUN_?(pvVar7);
  }
  pQVar8 = (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)FUN_?(pvVar7);
  (*(method->klass->rgctx_data[2].method)->methodPointer)(pQVar8,(ulonglong)(uint)initialCap);
  bVar2 = iRam_? != 0;
  (this->fields)._queue = pQVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Count
                  (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  MethodInfo *method)

{
  pOVar1 = (this->fields)._lock;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = FUN_?(pOVar1,0xffffffff);
    pQVar3 = (this->fields)._queue;
    if (pQVar3 != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar4 = method->klass->rgctx_data[3].method;
      iVar5 = (*pMVar4->methodPointer)(pQVar3,pMVar4);
      if (cVar2 == '\0') {
        return iVar5;
      }
      if (pOVar1 != (Object *)0x0) {
        FUN_?();
        return iVar5;
      }
      uVar6 = FUN_?(&UNK_?);
      FUN_?(uVar6,0);
    }
    FUN_?();
  }
  uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar6);
  paramName = (String *)func_?(&StringLiteral_obj);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  uVar6 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  FUN_?(this_00,uVar6);
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar5 = (*pcVar7)();
  return iVar5;
}


/* Queue`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType] get_Queue() */

Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Queue
          (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  pOVar1 = (this->fields)._lock;
  if (pOVar1 == (Object *)0x0) {
code_?:
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar2);
    paramName = (String *)func_?(&StringLiteral_obj);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                               );
    FUN_?(this_00,uVar2);
    mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
    FUN_?();
    pcVar3 = (code *)swi(3);
    pQVar4 = (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)(*pcVar3)();
    return pQVar4;
  }
  cVar5 = FUN_?(pOVar1,0xffffffff);
  pQVar4 = (this->fields)._queue;
  if (cVar5 != '\0') {
    if (pOVar1 == (Object *)0x0) {
      uVar2 = FUN_?(&UNK_?);
      FUN_?(uVar2,0);
      goto code_?;
    }
    FUN_?();
  }
  return pQVar4;
}

