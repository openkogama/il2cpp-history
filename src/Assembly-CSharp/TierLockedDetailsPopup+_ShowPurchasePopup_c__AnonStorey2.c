
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierLockedDetailsPopup+<ShowPurchasePopup>c__AnonStorey2::
     TierLockedDetailsPopup_ShowPurchasePopup_c_AnonStorey2___m__0
               (TierLockedDetailsPopup_ShowPurchasePopup_c_AnonStorey2 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierPurchasePopup;
  if (this_00 != (TierUnlockDetailsPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,4,0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

