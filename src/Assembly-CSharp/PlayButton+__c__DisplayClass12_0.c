
/* Void <OnPromotionShown>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayButton+<>c__DisplayClass12_0::
     PlayButton_c_DisplayClass12_0__OnPromotionShown_b__0
               (PlayButton_c_DisplayClass12_0 *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).continueBtn;
  if (this_00 != (ContinueButtonLockCursor *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

