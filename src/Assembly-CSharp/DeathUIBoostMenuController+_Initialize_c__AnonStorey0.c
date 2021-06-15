
/* Void <>m__0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController+<Initialize>c__AnonStorey0::
     DeathUIBoostMenuController_Initialize_c_AnonStorey0___m__0
               (DeathUIBoostMenuController_Initialize_c_AnonStorey0 *this,IDeathPromotionSelector *x
               ,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IDeathPromotionSelector *)0x0) {
    bVar1 = func_?(0,TypeInfo__IDeathPromotionSelector,x);
    (this->fields).readyForAd = bVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

