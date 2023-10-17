
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c__DisplayClass4_0::
     EditModeRepositoryController_c_DisplayClass4_0__ProductPurchaseResponseHandler_b__1
               (EditModeRepositoryController_c_DisplayClass4_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).__4__this;
  if ((pEVar1 != (EditModeRepositoryController *)0x0) &&
     (pSVar2 = (pEVar1->fields).currentlyBuyingItem, pSVar2 != (ShopItem *)0x0)) {
    s = mscorlib.dll::System::Int32::Int32_ToString
                  ((Int32 *)&(pSVar2->fields).priceGold,(MethodInfo *)0x0);
    mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

