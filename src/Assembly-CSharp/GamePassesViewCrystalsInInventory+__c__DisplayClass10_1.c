
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c__DisplayClass10_1::
     GamePassesViewCrystalsInInventory_c_DisplayClass10_1__ProductPurchaseResponseHandler_b__1
               (GamePassesViewCrystalsInInventory_c_DisplayClass10_1 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).CS___8__locals1;
  if (pGVar1 != (GamePassesViewCrystalsInInventory_c_DisplayClass10_0 *)0x0) {
    pSVar2 = (this->fields).currentlyBuyingItem;
    iVar3 = (pGVar1->fields).returnCode;
    if (pSVar2 != (ShopItem *)0x0) {
      s = mscorlib.dll::System::Int32::Int32_ToString
                    ((Int32 *)&(pSVar2->fields).priceGold,(MethodInfo *)0x0);
      iVar4 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
      if (x != (IModalPopupCreator *)0x0) {
        FUN_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,iVar3,iVar4);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

