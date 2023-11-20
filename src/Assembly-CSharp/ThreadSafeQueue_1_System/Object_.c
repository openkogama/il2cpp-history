
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
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            (pTVar1->fields)._queue;
  if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
    Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
              (this_00,method->klass->rgctx_data[4].method);
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
  this_00 = (pTVar1->fields)._queue;
  if (this_00 == (Queue_1_System_Object_ *)0x0) {
    func_?();
    func_?();
    pcVar6 = (code *)swi(3);
    pOVar4 = (Object *)(*pcVar6)();
    return pOVar4;
  }
  pOVar7 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
           Queue_1_System_Object__Dequeue(this_00,method->klass->rgctx_data[5].method);
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
  this_00 = (pTVar1->fields)._queue;
  if (this_00 != (Queue_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue(this_00,a,method->klass->rgctx_data[7].method);
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
  this_00 = (pTVar1->fields)._queue;
  if (this_00 == (Queue_1_System_Object_ *)0x0) {
    func_?();
    func_?();
    pcVar6 = (code *)swi(3);
    pOVar4 = (Object *)(*pcVar6)();
    return pOVar4;
  }
  pOVar7 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
           Queue_1_System_Object__Peek(this_00,method->klass->rgctx_data[8].method);
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
  method_01 = TypeInfo__System__Object;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&(this->fields)._lock;
  (this->fields)._lock = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pIVar1 = method->klass->rgctx_data[1].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_00 = (Queue_1_System_Object_ *)func_?(pIVar1);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Dynamic::
  BindingRestrictions+TestBuilder+AndNode]::
  Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode___ctor_1
            ((Stack_1_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)this_00,initialCap,
             method->klass->rgctx_data[2].method);
  (this->fields)._queue = this_00;
  func_?(&this->fields,this_00);
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
  pQVar5 = (pTVar1->fields)._queue;
  if (pQVar5 == (Queue_1_System_Object_ *)0x0) {
    func_?();
    func_?();
    pcVar6 = (code *)swi(3);
    iVar7 = (*pcVar6)();
    return iVar7;
  }
  iVar7 = (pQVar5->fields)._size;
  uStack_4 = 0xffffffff;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return iVar7;
  }
  *unaff_FS_OFFSET = uStack_3;
  return iVar7;
}

