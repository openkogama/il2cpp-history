
/* Void <OnActiveProgressBarClicked>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GameTierProgressBar+<>c__DisplayClass25_0::
     GameTierProgressBar_c_DisplayClass25_0__OnActiveProgressBarClicked_b__0
               (GameTierProgressBar_c_DisplayClass25_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).informationPopup != (GameObject *)0x0) && (x != (IUIStack *)0x0)) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

