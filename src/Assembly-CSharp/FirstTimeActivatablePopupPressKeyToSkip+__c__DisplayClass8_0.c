
/* Void <OnShow>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePopupPressKeyToSkip+<>c__DisplayClass8_0::
     FirstTimeActivatablePopupPressKeyToSkip_c_DisplayClass8_0__OnShow_b__0
               (FirstTimeActivatablePopupPressKeyToSkip_c_DisplayClass8_0 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x20;
    puStack_2 = (undefined *)0x0;
    uStack_3 = 0;
    func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,
                    (this->fields).instantiatedPopup);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

