
/* Void <OnAddToMarketplaceReturn>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<>c__DisplayClass16_0::
     InventoryItemPreviewSell_c_DisplayClass16_0__OnAddToMarketplaceReturn_b__1
               (InventoryItemPreviewSell_c_DisplayClass16_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

