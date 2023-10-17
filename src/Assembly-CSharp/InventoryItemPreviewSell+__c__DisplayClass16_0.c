
/* Void <OnAddToMarketplaceReturn>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<>c__DisplayClass16_0::
     InventoryItemPreviewSell_c_DisplayClass16_0__OnAddToMarketplaceReturn_b__1
               (InventoryItemPreviewSell_c_DisplayClass16_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pSStack_1 = (String *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    pSStack_2 = (String *)&::StringLiteral__;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pSStack_1 = ::StringLiteral__;
    pSStack_2 = (this->fields).txt;
    pIStack_3 = x;
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  pSStack_1 = (String *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

