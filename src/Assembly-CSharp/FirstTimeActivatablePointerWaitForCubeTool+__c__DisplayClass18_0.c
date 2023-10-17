
/* Void <OnPopupRemoved>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool+<>c__DisplayClass18_0::
     FirstTimeActivatablePointerWaitForCubeTool_c_DisplayClass18_0__OnPopupRemoved_b__0
               (FirstTimeActivatablePointerWaitForCubeTool_c_DisplayClass18_0 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    cVar1 = func_?(5,TypeInfo__UnityEngine__EventSystems__IUIStack,x,
                            (this->fields).popupGameObject);
    if (cVar1 != '\0') {
      func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

