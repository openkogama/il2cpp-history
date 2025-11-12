
/* Void Initialize(Action) */

void Assembly-CSharp.dll::ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
               (ContinueButtonLockCursor *this,Action *cursorLockCallback,MethodInfo *method)

{
  pCVar1 = (this->fields).button;
  if (pCVar1 == (ContinueButtonHandler *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pCVar1->fields).OnClick = cursorLockCallback;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pCVar1->fields).OnClick >> 0xc);
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
  return;
}

