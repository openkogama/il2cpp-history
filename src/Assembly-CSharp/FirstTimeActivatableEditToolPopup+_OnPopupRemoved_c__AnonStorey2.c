
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup+<OnPopupRemoved>c__AnonStorey2::
     FirstTimeActivatableEditToolPopup_OnPopupRemoved_c_AnonStorey2___m__0
               (FirstTimeActivatableEditToolPopup_OnPopupRemoved_c_AnonStorey2 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

