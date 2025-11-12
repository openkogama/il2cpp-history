
/* Void Clear() */

void Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__Clear
               (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._lock;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = FUN_?(pOVar1,0xffffffff);
    this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
              (this->fields)._queue;
    if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
      Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                (this_00,method->klass->rgctx_data[4].method);
      if (cVar2 == '\0') {
        return;
      }
      if (pOVar1 != (Object *)0x0) {
        FUN_?();
        return;
      }
      uVar3 = FUN_?(&UNK_?);
      FUN_?(uVar3,0);
    }
    FUN_?();
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar3);
  paramName = (String *)func_?(&StringLiteral_obj);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,paramName,(MethodInfo *)0x0);
  uVar3 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  FUN_?(this_01,uVar3);
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Object Dequeue() */

Object * Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
         ThreadSafeQueue_1_System_Object__Dequeue
                   (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._lock;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = FUN_?(pOVar1,0xffffffff);
    this_00 = (this->fields)._queue;
    if (this_00 != (Queue_1_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
               Queue_1_System_Object__Dequeue(this_00,method->klass->rgctx_data[5].method);
      if (cVar2 == '\0') {
        return pOVar3;
      }
      if (pOVar1 != (Object *)0x0) {
        FUN_?();
        return pOVar3;
      }
      uVar4 = FUN_?(&UNK_?);
      FUN_?(uVar4,0);
    }
    FUN_?();
  }
  uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar4);
  paramName = (String *)func_?(&StringLiteral_obj);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,paramName,(MethodInfo *)0x0);
  uVar4 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  FUN_?(this_01,uVar4);
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  FUN_?();
  pcVar5 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar5)();
  return pOVar1;
}


/* Void Enqueue(Object) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
     ThreadSafeQueue_1_System_Object__Enqueue
               (ThreadSafeQueue_1_System_Object_ *this,Object *a,MethodInfo *method)

{
  pOVar1 = (this->fields)._lock;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = FUN_?(pOVar1,0xffffffff);
    this_00 = (this->fields)._queue;
    if (this_00 != (Queue_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue(this_00,a,method->klass->rgctx_data[7].method);
      if (cVar2 == '\0') {
        return;
      }
      if (pOVar1 != (Object *)0x0) {
        FUN_?();
        return;
      }
      uVar3 = FUN_?(&UNK_?);
      FUN_?(uVar3,0);
    }
    FUN_?();
  }
  uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar3);
  paramName = (String *)func_?(&StringLiteral_obj);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,paramName,(MethodInfo *)0x0);
  uVar3 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  FUN_?(this_01,uVar3);
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Object Peek() */

Object * Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
         ThreadSafeQueue_1_System_Object__Peek
                   (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._lock;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = FUN_?(pOVar1,0xffffffff);
    pQVar3 = (this->fields)._queue;
    if (pQVar3 != (Queue_1_System_Object_ *)0x0) {
      pMVar4 = method->klass->rgctx_data[8].method;
      if ((pQVar3->fields)._size != 0) {
        pOVar5 = (pQVar3->fields)._array;
        uVar6 = (pQVar3->fields)._head;
        if (pOVar5 != (Object__Array *)0x0) {
          if (uVar6 < (uint)pOVar5->max_length) {
            pOVar7 = pOVar5->vector[(int)uVar6];
            if (cVar2 == '\0') {
              return pOVar7;
            }
            if (pOVar1 != (Object *)0x0) {
              FUN_?();
              return pOVar7;
            }
          }
          else {
            FUN_?();
          }
          pMVar4 = (MethodInfo *)FUN_?(&UNK_?);
          FUN_?(pMVar4,0);
        }
        FUN_?();
      }
      uVar8 = func_?(pMVar4->klass->rgctx_data,0xb);
      FUN_?(pQVar3,uVar8);
    }
    FUN_?();
  }
  uVar8 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar8);
  paramName = (String *)func_?(&StringLiteral_obj);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  uVar8 = func_?(&
                              MethodInfo__System__Threading__Monitor__ReliableEnterTimeout_System__Object__int__System__Boolean__
                             );
  FUN_?(this_00,uVar8);
  mscorlib.dll::System::Threading::Monitor::Monitor_ThrowLockTakenException((MethodInfo *)0x0);
  FUN_?();
  pcVar9 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar9)();
  return pOVar1;
}


/* ThreadSafeQueue`1[System.Object](Int32) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object___ctor
               (ThreadSafeQueue_1_System_Object_ *this,int32_t initialCap,MethodInfo *method)

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
  this_00 = (Queue_1_System_Object_ *)FUN_?(pvVar7);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Dynamic::
  BindingRestrictions+TestBuilder+AndNode]::
  Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___ctor_1
            ((Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)this_00,initialCap,
             method->klass->rgctx_data[2].method);
  bVar2 = iRam_? != 0;
  (this->fields)._queue = this_00;
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

int32_t Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
        ThreadSafeQueue_1_System_Object__get_Count
                  (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pOVar1 = (this->fields)._lock;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = FUN_?(pOVar1,0xffffffff);
    pQVar3 = (this->fields)._queue;
    if (pQVar3 != (Queue_1_System_Object_ *)0x0) {
      iVar4 = (pQVar3->fields)._size;
      if (cVar2 == '\0') {
        return iVar4;
      }
      if (pOVar1 != (Object *)0x0) {
        FUN_?();
        return iVar4;
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
  iVar4 = (*pcVar6)();
  return iVar4;
}

