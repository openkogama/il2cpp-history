
/* Void <OnPurchaseBoostPressed>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BoostMenuItem+<>c__DisplayClass29_0::
     BoostMenuItem_c_DisplayClass29_0__OnPurchaseBoostPressed_b__0
               (BoostMenuItem_c_DisplayClass29_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x4;
    puStack_2 = (undefined *)0x0;
    uStack_3 = 4;
    func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,
                    (this->fields).informationPopup);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

