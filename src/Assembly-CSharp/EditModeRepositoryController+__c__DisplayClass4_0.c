
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c__DisplayClass4_0::
     EditModeRepositoryController_c_DisplayClass4_0__ProductPurchaseResponseHandler_b__1
               (EditModeRepositoryController_c_DisplayClass4_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).__4__this;
  iVar2 = (this->fields).returnCode;
  if ((pEVar1 != (EditModeRepositoryController *)0x0) &&
     (pSVar3 = (pEVar1->fields).currentlyBuyingItem, pSVar3 != (ShopItem *)0x0)) {
    s = mscorlib.dll::System::Int32::Int32_ToString
                  ((Int32 *)&(pSVar3->fields).priceGold,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,iVar2,iVar4);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

