
/* Void <OnActiveProgressBarClicked>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GameTierProgressBar+<>c__DisplayClass23_0::
     GameTierProgressBar_c_DisplayClass23_0__OnActiveProgressBarClicked_b__0
               (GameTierProgressBar_c_DisplayClass23_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  source = (this->fields).informationPopup;
  if (source != (GameObject *)0x0) {
    mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
              ((Void *)source,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

