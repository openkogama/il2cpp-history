
/* Void <TryShowClaimGoldRewardPopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GoldRewardCountdownMeter+<>c__DisplayClass14_0::
     GoldRewardCountdownMeter_c_DisplayClass14_0__TryShowClaimGoldRewardPopup_b__0
               (GoldRewardCountdownMeter_c_DisplayClass14_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).claimGoldRewardPopup != (GameObject *)0x0) && (x != (IUIStack *)0x0)) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

