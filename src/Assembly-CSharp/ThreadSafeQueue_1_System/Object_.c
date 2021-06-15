
/* Void Clear() */

void Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__Clear
               (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  func_?();
  obj = (this->fields)._lock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(obj,(MethodInfo *)0x0);
  uStack_1 = 0;
  if ((this->fields)._queue != (Queue_1_System_Object_ *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0xc))();
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Threading::Monitor::Monitor_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Object Peek() */

Object * Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::
         ThreadSafeQueue_1_System_Object__Peek
                   (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  func_?();
  pOVar4 = (this->fields)._lock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(pOVar4,(MethodInfo *)0x0);
  uStack_1 = 0;
  if ((this->fields)._queue != (Queue_1_System_Object_ *)0x0) {
    pOVar5 = (Object *)(*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x18))();
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Threading::Monitor::Monitor_Exit(pOVar4,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return pOVar5;
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar6)();
  return pOVar4;
}


/* Queue`1[System.Object] get_Queue() */

Queue_1_System_Object_ *
Assembly-CSharp.dll::ThreadSafeQueue`1[System::Object]::ThreadSafeQueue_1_System_Object__get_Queue
          (ThreadSafeQueue_1_System_Object_ *this,MethodInfo *method)

{
  func_?();
  obj = (this->fields)._lock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(obj,(MethodInfo *)0x0);
  pQVar1 = (this->fields)._queue;
  mscorlib.dll::System::Threading::Monitor::Monitor_Exit(obj,(MethodInfo *)0x0);
  return pQVar1;
}

