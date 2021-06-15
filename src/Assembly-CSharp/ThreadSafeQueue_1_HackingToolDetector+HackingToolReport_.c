
/* HackingToolDetector+HackingToolReport Dequeue() */

HackingToolDetector_HackingToolReport *
Assembly-CSharp.dll::ThreadSafeQueue`1[HackingToolDetector+HackingToolReport]::
ThreadSafeQueue_1_HackingToolDetector_HackingToolReport__Dequeue
          (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  func_?();
  obj = (this->fields)._lock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(obj,(MethodInfo *)0x0);
  uStack_1 = 0;
  if ((this->fields)._queue != (Queue_1_HackingToolDetector_HackingToolReport_ *)0x0) {
    pHVar4 = (HackingToolDetector_HackingToolReport *)
             (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x10))();
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Threading::Monitor::Monitor_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return pHVar4;
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pHVar4 = (HackingToolDetector_HackingToolReport *)(*pcVar5)();
  return pHVar4;
}


/* Void Enqueue(HackingToolDetector+HackingToolReport) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[HackingToolDetector+HackingToolReport]::
     ThreadSafeQueue_1_HackingToolDetector_HackingToolReport__Enqueue
               (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *this,
               HackingToolDetector_HackingToolReport *a,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  func_?();
  obj = (this->fields)._lock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(obj,(MethodInfo *)0x0);
  pQVar4 = (this->fields)._queue;
  uStack_1 = 0;
  if (pQVar4 != (Queue_1_HackingToolDetector_HackingToolReport_ *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x14))(pQVar4);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Threading::Monitor::Monitor_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ThreadSafeQueue`1[HackingToolDetector+HackingToolReport](Int32) */

void Assembly-CSharp.dll::ThreadSafeQueue`1[HackingToolDetector+HackingToolReport]::
     ThreadSafeQueue_1_HackingToolDetector_HackingToolReport___ctor
               (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *this,int32_t initialCap,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Object;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields)._lock = (Object *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  iVar1 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  pQVar2 = (Queue_1_HackingToolDetector_HackingToolReport_ *)func_?(iVar1);
  puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
  (*(code *)*puVar3)(pQVar2,initialCap,puVar3);
  (this->fields)._queue = pQVar2;
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::ThreadSafeQueue`1[HackingToolDetector+HackingToolReport]::
        ThreadSafeQueue_1_HackingToolDetector_HackingToolReport__get_Count
                  (ThreadSafeQueue_1_HackingToolDetector_HackingToolReport_ *this,MethodInfo *method
                  )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  func_?();
  obj = (this->fields)._lock;
  mscorlib.dll::System::Threading::Monitor::Monitor_Enter(obj,(MethodInfo *)0x0);
  uStack_1 = 0;
  if ((this->fields)._queue != (Queue_1_HackingToolDetector_HackingToolReport_ *)0x0) {
    iVar4 = (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 8))();
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Threading::Monitor::Monitor_Exit(obj,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return iVar4;
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}

