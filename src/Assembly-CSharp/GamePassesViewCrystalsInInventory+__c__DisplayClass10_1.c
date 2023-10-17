
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c__DisplayClass10_1::
     GamePassesViewCrystalsInInventory_c_DisplayClass10_1__ProductPurchaseResponseHandler_b__1
               (GamePassesViewCrystalsInInventory_c_DisplayClass10_1 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  if ((this->fields).CS___8__locals1 != (GamePassesViewCrystalsInInventory_c_DisplayClass10_0 *)0x0)
  {
    pSVar1 = (this->fields).currentlyBuyingItem;
    if (pSVar1 != (ShopItem *)0x0) {
      s = mscorlib.dll::System::Int32::Int32_ToString
                    ((Int32 *)&(pSVar1->fields).priceGold,(MethodInfo *)0x0);
      mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
      if (x != (IModalPopupCreator *)0x0) {
        func_?(0,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

