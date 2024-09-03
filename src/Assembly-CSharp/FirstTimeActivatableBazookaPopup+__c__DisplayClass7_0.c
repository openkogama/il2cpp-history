
/* Void <DoShowing>b__1(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup+<>c__DisplayClass7_0::
     FirstTimeActivatableBazookaPopup_c_DisplayClass7_0__DoShowing_b__1
               (FirstTimeActivatableBazookaPopup_c_DisplayClass7_0 *this,IPlayerInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    func_?();
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields).prioritizedItem;
  if ((pIVar2 != (InventoryItem *)0x0) && (x != (IPlayerInventory *)0x0)) {
    ppIStack_1 = (IPlayerInventory__Class **)(pIVar2->fields).slotPosition;
    puStack_3 = (undefined *)(pIVar2->fields).itemCategoryID;
    uStack_4 = 1;
    func_?(1,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  ppIStack_1 = (IPlayerInventory__Class **)&stack0xfffffffc;
  uVar5 = func_?(&uStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

