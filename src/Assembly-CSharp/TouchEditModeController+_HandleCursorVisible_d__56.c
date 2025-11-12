
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TouchEditModeController+<HandleCursorVisible>d__56::
     TouchEditModeController_HandleCursorVisible_d_56_MoveNext
               (TouchEditModeController_HandleCursorVisible_d_56 *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    pcVar3 = pcRam_?;
    if (pcVar1 == (code *)0x0) {
      pcVar1 = (code *)FUN_?(&UNK_?);
      pcVar3 = pcVar1;
      if (pcVar1 == (code *)0x0) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar1 = (code *)swi(3);
        bVar5 = (*pcVar1)();
        return bVar5;
      }
    }
    pcRam_? = pcVar3;
    cVar6 = (*pcVar1)();
    if (cVar6 == '\0') {
      pcVar1 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar1 = (code *)FUN_?(&UNK_?);
        if (pcVar1 == (code *)0x0) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar1 = (code *)swi(3);
          bVar5 = (*pcVar1)();
          return bVar5;
        }
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(1);
      bVar7 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else if (iVar2 == 1) {
    (this->fields).__1__state = -1;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TouchEditModeController+<HandleCursorVisible>d__56::
     TouchEditModeController_HandleCursorVisible_d_56_System_Collections_IEnumerator_Reset
               (TouchEditModeController_HandleCursorVisible_d_56 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__TouchEditModeController___HandleCursorVisible_d__56__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

