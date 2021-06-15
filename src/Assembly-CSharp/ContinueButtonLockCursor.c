
/* Void Initialize(Action) */

void Assembly-CSharp.dll::ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
               (ContinueButtonLockCursor *this,Action *cursorLockCallback,MethodInfo *method)

{
  pCVar1 = (this->fields).button;
  if (pCVar1 != (ContinueButtonHandler *)0x0) {
    (pCVar1->fields).OnClick = cursorLockCallback;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

