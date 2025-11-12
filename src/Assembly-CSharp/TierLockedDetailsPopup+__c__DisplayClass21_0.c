
/* Void <ShowPurchasePopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierLockedDetailsPopup+<>c__DisplayClass21_0::
     TierLockedDetailsPopup_c_DisplayClass21_0__ShowPurchasePopup_b__0
               (TierLockedDetailsPopup_c_DisplayClass21_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierPurchasePopup;
  if (this_00 != (TierUnlockDetailsPopup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

