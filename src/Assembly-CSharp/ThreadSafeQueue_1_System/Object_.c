
/* Void Clear() */

void Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__Clear
               (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  this = (ThreadSafeQueue_1_System_Object_ *)((uint)this & 0xffffff);
  obj = (pTVar1->fields)._lock;
  uStack_4 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  if ((pTVar1->fields)._queue != (Queue_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)();
    uStack_4 = 0xffffffff;
    if (this._3_1_ != '\0') {
      mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Object Dequeue() */

Object * Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
         ThreadSafeQueue_1_System_Object__Dequeue
                   (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  pOVar4 = (this->fields)._lock;
  this = (ThreadSafeQueue_1_System_Object_ *)((uint)this & 0xffffff);
  uStack_5 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (pOVar4,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  if ((pTVar1->fields)._queue == (Queue_1_System_Object_ *)0x0) {
    func_?();
    func_?();
    pcVar6 = (code *)swi(3);
    pOVar4 = (Object *)(*pcVar6)();
    return pOVar4;
  }
  pOVar7 = (Object *)(*(method->klass->rgctx_data[4].method)->virtualMethodPointer)();
  uStack_5 = 0xffffffff;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(pOVar4,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return pOVar7;
  }
  *unaff_FS_OFFSET = uStack_3;
  return pOVar7;
}


/* Void Enqueue(Object) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
     ThreadSafeQueue_1_System_Object__Enqueue
               (ThreadSafeQueue_1_System_Object_ *this,Object *a,MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  this = (ThreadSafeQueue_1_System_Object_ *)((uint)this & 0xffffff);
  obj = (pTVar1->fields)._lock;
  uStack_4 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  if ((pTVar1->fields)._queue != (Queue_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[5].method)->virtualMethodPointer)();
    uStack_4 = 0xffffffff;
    if (this._3_1_ != '\0') {
      mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Object Peek() */

Object * Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
         ThreadSafeQueue_1_System_Object__Peek
                   (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  pOVar4 = (this->fields)._lock;
  this = (ThreadSafeQueue_1_System_Object_ *)((uint)this & 0xffffff);
  uStack_5 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (pOVar4,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  if ((pTVar1->fields)._queue == (Queue_1_System_Object_ *)0x0) {
    func_?();
    func_?();
    pcVar6 = (code *)swi(3);
    pOVar4 = (Object *)(*pcVar6)();
    return pOVar4;
  }
  pOVar7 = (Object *)(*(method->klass->rgctx_data[6].method)->virtualMethodPointer)();
  uStack_5 = 0xffffffff;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(pOVar4,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return pOVar7;
  }
  *unaff_FS_OFFSET = uStack_3;
  return pOVar7;
}


/* ThreadSafeQueue`1[System.Object](Int32) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object___ctor
               (ThreadSafeQueue_1_System_Object_ *this,int32_t initialCap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__System__Object);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    method_00 = (MethodInfo *)&(this->fields)._lock;
    (this->fields)._lock = value;
    func_?(method_00,value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    pvVar1 = method->klass->rgctx_data->rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    pQVar2 = (Queue_1_System_Object_ *)func_?(pvVar1);
    if (pQVar2 != (Queue_1_System_Object_ *)0x0) {
      (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                (pQVar2,initialCap,method->klass->rgctx_data[1].rgctxDataDummy);
      (this->fields)._queue = pQVar2;
      func_?(&this->fields,pQVar2);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
        ThreadSafeQueue_1_System_Object__get_Count
                  (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  obj = (this->fields)._lock;
  this = (ThreadSafeQueue_1_System_Object_ *)((uint)this & 0xffffff);
  uStack_4 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  if ((pTVar1->fields)._queue == (Queue_1_System_Object_ *)0x0) {
    func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  iVar6 = (*(method->klass->rgctx_data[2].method)->virtualMethodPointer)();
  uStack_4 = 0xffffffff;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return iVar6;
  }
  *unaff_FS_OFFSET = uStack_3;
  return iVar6;
}


/* Queue`1[System.Object] get_Queue() */

Queue_1_System_Object_ *
Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__get_Queue
          (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  obj = (this->fields)._lock;
  this = (ThreadSafeQueue_1_System_Object_ *)((uint)this & 0xffffff);
  uStack_4 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  pQVar5 = (pTVar1->fields)._queue;
  uStack_4 = 0xffffffff;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return pQVar5;
  }
  *unaff_FS_OFFSET = uStack_3;
  return pQVar5;
}

