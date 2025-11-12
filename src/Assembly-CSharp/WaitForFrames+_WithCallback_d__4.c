
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WaitForFrames+<WithCallback>d__4::WaitForFrames_WithCallback_d_4_MoveNext
               (WaitForFrames_WithCallback_d_4 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WaitForFrames);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pUVar2 = (this->fields).callback;
      (this->fields).__1__state = -1;
      if (pUVar2 != (UnityAction *)0x0) {
        (*(pUVar2->fields)._._.invoke_impl)
                  ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
      }
    }
    return 0;
  }
  iVar1 = (this->fields).frameCount;
  (this->fields).__1__state = -1;
  pOVar3 = (Object *)FUN_?(TypeInfo__WaitForFrames);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    bVar6 = (*pcVar4)();
    return bVar6;
  }
  pcRam_? = pcVar4;
  iVar7 = (*pcRam_?)();
  bVar8 = iRam_? != 0;
  *(int *)&pOVar3[1].klass = iVar7 + iVar1;
  (this->fields).__2__current = pOVar3;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar10;
      LOCK();
      uVar12 = *puVar10;
      if (uVar11 == uVar12) {
        *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar12);
  }
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WaitForFrames+<WithCallback>d__4::
     WaitForFrames_WithCallback_d_4_System_Collections_IEnumerator_Reset
               (WaitForFrames_WithCallback_d_4 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__WaitForFrames___WithCallback_d__4__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

