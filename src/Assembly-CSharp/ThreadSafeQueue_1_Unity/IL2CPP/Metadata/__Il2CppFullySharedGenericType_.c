
/* Void Clear() */

void Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
               (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  this = (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         ((uint)this & 0xffffff);
  obj = (pTVar1->fields)._lock;
  uStack_4 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  if ((pTVar1->fields)._queue != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
  {
    (*(method->klass->rgctx_data[4].method)->methodPointer)();
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


/* __Il2CppFullySharedGenericType Dequeue() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Dequeue
          (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  uVar4 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)(in_stack_5 + 0x10) + 0x60) + 0x18) + 0x84);
  func_?();
  puStack_6 = &stack0xffffffbc;
  func_?();
  puStack_6 = &stack0xffffffbc;
  func_?(&stack0xffffffbc,0,uVar4);
  bStack_7 = 0;
  obj = (this->fields)._lock;
  uStack_1 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1(obj,&bStack_7,(MethodInfo *)0x0);
  if ((this->fields)._queue != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    iVar8 = *(int *)(*(int *)(*(int *)(in_stack_5 + 0x10) + 0x60) + 0x14);
    (**(code **)(iVar8 + 8))
              (**(undefined4 **)(*(int *)(*(int *)(in_stack_5 + 0x10) + 0x60) + 0x14),iVar8);
    func_?();
    uStack_1 = 0xffffffff;
    if (bStack_7 != 0) {
      mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    }
    func_?();
    p_Var4 = (_Il2CppFullySharedGenericType *)func_?(method);
    *unaff_FS_OFFSET = uStack_3;
    return p_Var4;
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  p_Var4 = (_Il2CppFullySharedGenericType *)(*pcVar9)();
  return p_Var4;
}


/* Void Enqueue(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Enqueue
               (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *a,MethodInfo *method)

{
  pMVar1 = method;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puVar5 = &stack0xffffffcc;
  func_?();
  method = (MethodInfo *)((uint)method & 0xffffff);
  obj = (this->fields)._lock;
  uStack_2 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&method + 3),(MethodInfo *)0x0);
  pQVar6 = (this->fields)._queue;
  func_?();
  if (pQVar6 != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    puVar7 = &stack0xffffffcc;
    if (-1 < (int)(pMVar1->klass->rgctx_data[6].method)->return_type) {
      puVar7 = puVar5;
    }
    pMVar8 = pMVar1->klass->rgctx_data[7].method;
    (*pMVar8->invoker_method)
              ((pMVar1->klass->rgctx_data[7].method)->methodPointer,pMVar8,pQVar6,
               (void **)&stack0xffffffe8,puVar7);
    uStack_2 = 0xffffffff;
    if (method._3_1_ != '\0') {
      mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    }
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* __Il2CppFullySharedGenericType Peek() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Peek
          (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  uVar4 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)(in_stack_5 + 0x10) + 0x60) + 0x18) + 0x84);
  func_?();
  puStack_6 = &stack0xffffffbc;
  func_?();
  puStack_6 = &stack0xffffffbc;
  func_?(&stack0xffffffbc,0,uVar4);
  bStack_7 = 0;
  obj = (this->fields)._lock;
  uStack_1 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1(obj,&bStack_7,(MethodInfo *)0x0);
  if ((this->fields)._queue != (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    iVar8 = *(int *)(*(int *)(*(int *)(in_stack_5 + 0x10) + 0x60) + 0x20);
    (**(code **)(iVar8 + 8))
              (**(undefined4 **)(*(int *)(*(int *)(in_stack_5 + 0x10) + 0x60) + 0x20),iVar8);
    func_?();
    uStack_1 = 0xffffffff;
    if (bStack_7 != 0) {
      mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    }
    func_?();
    p_Var4 = (_Il2CppFullySharedGenericType *)func_?(method);
    *unaff_FS_OFFSET = uStack_3;
    return p_Var4;
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  p_Var4 = (_Il2CppFullySharedGenericType *)(*pcVar9)();
  return p_Var4;
}


/* ThreadSafeQueue`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](Int32) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
     ::ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               int32_t initialCap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Object;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pMVar1 = (MethodInfo *)&(this->fields)._lock;
  (this->fields)._lock = value;
  func_?(pMVar1,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  pIVar2 = method->klass->rgctx_data[1].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pQVar3 = (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)func_?(pIVar2);
  pMVar1 = method->klass->rgctx_data[2].method;
  (*pMVar1->methodPointer)(pQVar3,initialCap,pMVar1);
  (this->fields)._queue = pQVar3;
  func_?(&this->fields,pQVar3);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Count
                  (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  obj = (this->fields)._lock;
  this = (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         ((uint)this & 0xffffff);
  uStack_4 = 1;
  mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
            (obj,(bool *)((int)&this + 3),(MethodInfo *)0x0);
  if ((pTVar1->fields)._queue == (Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
  {
    func_?();
    func_?();
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  iVar6 = (*(method->klass->rgctx_data[3].method)->methodPointer)();
  uStack_4 = 0xffffffff;
  if (this._3_1_ != '\0') {
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return iVar6;
  }
  *unaff_FS_OFFSET = uStack_3;
  return iVar6;
}


/* Queue`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType] get_Queue() */

Queue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::ThreadSafeQueue`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Queue
          (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  pTVar1 = this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  obj = (this->fields)._lock;
  this = (ThreadSafeQueue_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         ((uint)this & 0xffffff);
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

