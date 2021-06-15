
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::
     AvatarEditModeBodyController+<OnProductPurchaseAvatarResponse>c__AnonStorey2::
     AvatarEditModeBodyController_OnProductPurchaseAvatarResponse_c_AnonStorey2___m__0
               (AvatarEditModeBodyController_OnProductPurchaseAvatarResponse_c_AnonStorey2 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._this;
  if (((pAVar1 != (AvatarEditModeBodyController *)0x0) &&
      (pAVar2 = (pAVar1->fields).purchasingItem, pAVar2 != (AvatarRepositoryItem *)0x0)) &&
     (x != (IModalPopupCreator *)0x0)) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,
                    (this->fields).returnCode,(pAVar2->fields).priceGold);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

