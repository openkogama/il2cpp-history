
/* Void Dispose() */

void Assembly-CSharp.dll::SendMessageControl+<OOMTest>c__Iterator0::
     SendMessageControl_OOMTest_c_Iterator0_Dispose
               (SendMessageControl_OOMTest_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SendMessageControl+<OOMTest>c__Iterator0::
     SendMessageControl_OOMTest_c_Iterator0_MoveNext
               (SendMessageControl_OOMTest_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    bVar2 = MVGameControllerBase::MVGameControllerBase_get_Quitting((MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar3 = (this->fields)._this;
      if (pSVar3 != (SendMessageControl *)0x0) {
        collection = (Byte__Array *)
                     func_?(TypeInfo__System__Byte,(pSVar3->fields).bytesPerFrame);
        pSVar3 = (this->fields)._this;
        (this->fields)._newBytes___1 = collection;
        if ((pSVar3 != (SendMessageControl *)0x0) &&
           (this_00 = (List_1_VoxelHit_ *)(pSVar3->fields).oomBytes,
           this_00 != (List_1_VoxelHit_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                    (this_00,(IEnumerable_1_VoxelHit_ *)collection,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
          (this->fields)._current = (Object *)0x0;
          if ((this->fields)._disposing == 0) {
            (this->fields)._PC = 1;
          }
          return 1;
        }
      }
      func_?(0);
      pcVar4 = (code *)swi(3);
      bVar2 = (*pcVar4)();
      return bVar2;
    }
    (this->fields)._PC = -1;
  }
  return 0;
}


/* Void Reset() */

void Assembly-CSharp.dll::SendMessageControl+<OOMTest>c__Iterator0::
     SendMessageControl_OOMTest_c_Iterator0_Reset
               (SendMessageControl_OOMTest_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

