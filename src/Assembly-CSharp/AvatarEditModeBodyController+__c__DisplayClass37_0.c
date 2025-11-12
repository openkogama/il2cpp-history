
/* Void <OnProductPurchaseAvatarResponse>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c__DisplayClass37_0::
     AvatarEditModeBodyController_c_DisplayClass37_0__OnProductPurchaseAvatarResponse_b__1
               (AvatarEditModeBodyController_c_DisplayClass37_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).__4__this;
  if (((pAVar1 != (AvatarEditModeBodyController *)0x0) &&
      (pAVar2 = (pAVar1->fields).purchasingItem, pAVar2 != (AvatarRepositoryItem *)0x0)) &&
     (x != (IModalPopupCreator *)0x0)) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                  (this->fields).returnCode,(pAVar2->fields).priceGold);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

