
/* Void <SlotPressed>b__1(IAddItemFromInventory, BaseEventData) */

void Assembly-CSharp.dll::EditModeClientShopItem+<>c__DisplayClass12_0::
     EditModeClientShopItem_c_DisplayClass12_0__SlotPressed_b__1
               (EditModeClientShopItem_c_DisplayClass12_0 *this,IAddItemFromInventory *x,
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

