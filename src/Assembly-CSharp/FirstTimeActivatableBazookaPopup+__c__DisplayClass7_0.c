
/* Void <DoShowing>b__1(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup+<>c__DisplayClass7_0::
     FirstTimeActivatableBazookaPopup_c_DisplayClass7_0__DoShowing_b__1
               (FirstTimeActivatableBazookaPopup_c_DisplayClass7_0 *this,IPlayerInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).prioritizedItem != (InventoryItem *)0x0) && (x != (IPlayerInventory *)0x0)) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

