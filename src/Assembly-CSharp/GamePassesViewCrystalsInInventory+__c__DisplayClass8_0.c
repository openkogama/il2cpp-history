
/* Void <OpenInventoryAtPosition>b__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c__DisplayClass8_0::
     GamePassesViewCrystalsInInventory_c_DisplayClass8_0__OpenInventoryAtPosition_b__0
               (GamePassesViewCrystalsInInventory_c_DisplayClass8_0 *this,IPlayerInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

