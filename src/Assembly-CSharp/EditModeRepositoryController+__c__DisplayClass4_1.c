
/* Void <ProductPurchaseResponseHandler>b__2(IAddItemFromInventory, BaseEventData) */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c__DisplayClass4_1::
     EditModeRepositoryController_c_DisplayClass4_1__ProductPurchaseResponseHandler_b__2
               (EditModeRepositoryController_c_DisplayClass4_1 *this,IAddItemFromInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (InventoryItem *)&TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAddItemFromInventory *)0x0) {
    pIStack_1 = (this->fields).inventoryItem;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory;
    func_?(0);
    return;
  }
  pIStack_1 = (InventoryItem *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

