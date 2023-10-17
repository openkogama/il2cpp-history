
/* Void Initialize(Action) */

void Assembly-CSharp.dll::ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
               (ContinueButtonLockCursor *this,Action *cursorLockCallback,MethodInfo *method)

{
  pAStack_1 = (Action *)&stack0xfffffffc;
  pCVar2 = (this->fields).button;
  if (pCVar2 != (ContinueButtonHandler *)0x0) {
    pAStack_1 = cursorLockCallback;
    (pCVar2->fields).OnClick = cursorLockCallback;
    ppAStack_3 = &(pCVar2->fields).OnClick;
    func_?();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

