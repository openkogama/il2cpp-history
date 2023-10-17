
/* Void <PopSelf>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeEventPopup+<>c__DisplayClass5_0::
     FirstTimeEventPopup_c_DisplayClass5_0__PopSelf_b__0
               (FirstTimeEventPopup_c_DisplayClass5_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

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

