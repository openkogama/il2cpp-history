
/* Void <ShowGoToKogamaPopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<>c__DisplayClass32_0::
     GeneralPromotionAd_c_DisplayClass32_0__ShowGoToKogamaPopup_b__0
               (GeneralPromotionAd_c_DisplayClass32_0 *this,IUIStack *x,BaseEventData *_,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

