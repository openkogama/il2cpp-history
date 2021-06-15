
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BoostMenuItem+<OnPurchaseBoostPressed>c__AnonStorey0::
     BoostMenuItem_OnPurchaseBoostPressed_c_AnonStorey0___m__0
               (BoostMenuItem_OnPurchaseBoostPressed_c_AnonStorey0 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,
                    (this->fields).informationPopup,4,0,4);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

