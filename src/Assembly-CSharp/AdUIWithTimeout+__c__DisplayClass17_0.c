
/* Void <CreatePopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIWithTimeout+<>c__DisplayClass17_0::
     AdUIWithTimeout_c_DisplayClass17_0__CreatePopup_b__0
               (AdUIWithTimeout_c_DisplayClass17_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 0;
    bVar4 = func_?();
    (this->fields).stackReady = bVar4;
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

