
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SendMessageControl+<OOMTest>d__59::
     SendMessageControl_OOMTest_d_59_MoveNext
               (SendMessageControl_OOMTest_d_59 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pSVar2 = (this->fields).__4__this;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    bVar3 = cRam_? == '\0';
    (this->fields).__1__state = -1;
    if (bVar3) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField == 0) {
      if (pSVar2 != (SendMessageControl *)0x0) {
        collection = (IEnumerable_1_System_Byte_ *)
                     FUN_?(TypeInfo__System__Byte,(pSVar2->fields).bytesPerFrame);
        this_00 = (pSVar2->fields).oomBytes;
        if (this_00 != (List_1_System_Byte_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
          List_1_System_Byte__InsertRange
                    (this_00,(this_00->fields)._size,collection,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                     ->klass->rgctx_data[0x12].method);
          bVar3 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar6 = *puVar5;
              LOCK();
              uVar7 = *puVar5;
              if (uVar6 == uVar7) {
                *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (uVar6 != uVar7);
          }
          (this->fields).__1__state = 1;
          return 1;
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::SendMessageControl+<OOMTest>d__59::
     SendMessageControl_OOMTest_d_59_System_Collections_IEnumerator_Reset
               (SendMessageControl_OOMTest_d_59 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__SendMessageControl___OOMTest_d__59__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

