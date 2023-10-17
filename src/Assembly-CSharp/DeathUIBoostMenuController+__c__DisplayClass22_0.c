
/* Void <Initialize>b__0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::DeathUIBoostMenuController+<>c__DisplayClass22_0::
     DeathUIBoostMenuController_c_DisplayClass22_0__Initialize_b__0
               (DeathUIBoostMenuController_c_DisplayClass22_0 *this,IDeathPromotionSelector *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IDeathPromotionSelector *)&TypeInfo__IDeathPromotionSelector;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IDeathPromotionSelector *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__IDeathPromotionSelector;
    uStack_3 = 0;
    bVar4 = func_?();
    (this->fields).readyForAd = bVar4;
    return;
  }
  pIStack_1 = (IDeathPromotionSelector *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

