
/* Void <OnPromotionShown>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayButton+<>c__DisplayClass12_0::
     PlayButton_c_DisplayClass12_0__OnPromotionShown_b__0
               (PlayButton_c_DisplayClass12_0 *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).continueBtn;
  if (this_00 != (ContinueButtonLockCursor *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
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

