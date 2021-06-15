
/* Void <>m__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup+<DoShowing>c__AnonStorey0::
     FirstTimeActivatableBazookaPopup_DoShowing_c_AnonStorey0___m__0
               (FirstTimeActivatableBazookaPopup_DoShowing_c_AnonStorey0 *this,IPlayerInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).prioritizedItem;
  if ((pIVar1 != (InventoryItem *)0x0) && (x != (IPlayerInventory *)0x0)) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x,1,
                    (pIVar1->fields).itemCategoryID,(pIVar1->fields).slotPosition);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

