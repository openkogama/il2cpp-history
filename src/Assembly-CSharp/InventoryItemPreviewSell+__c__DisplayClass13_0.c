
/* Void <AddToMarket>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<>c__DisplayClass13_0::
     InventoryItemPreviewSell_c_DisplayClass13_0__AddToMarket_b__1
               (InventoryItemPreviewSell_c_DisplayClass13_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error__);
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

