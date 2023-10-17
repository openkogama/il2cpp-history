
/* Void <OnProductPurchaseAvatarResponse>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c__DisplayClass37_0::
     AvatarEditModeBodyController_c_DisplayClass37_0__OnProductPurchaseAvatarResponse_b__1
               (AvatarEditModeBodyController_c_DisplayClass37_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  pAVar2 = (this->fields).__4__this;
  if (((pAVar2 != (AvatarEditModeBodyController *)0x0) &&
      (pAVar3 = (pAVar2->fields).purchasingItem, pAVar3 != (AvatarRepositoryItem *)0x0)) &&
     (x != (IModalPopupCreator *)0x0)) {
    ppIStack_1 = (IModalPopupCreator__Class **)(pAVar3->fields).priceGold;
    puStack_4 = (undefined *)(this->fields).returnCode;
    pIStack_5 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  ppIStack_1 = (IModalPopupCreator__Class **)&stack0xfffffffc;
  uVar6 = func_?(&pIStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

