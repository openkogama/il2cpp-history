
/* Void <SlotChanged>b__0(ISlotChanged, BaseEventData) */

void Assembly-CSharp.dll::InventorySlots+<>c__DisplayClass12_0::
     InventorySlots_c_DisplayClass12_0__SlotChanged_b__0
               (InventorySlots_c_DisplayClass12_0 *this,ISlotChanged *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ISlotChanged);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (ISlotChanged *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__ISlotChanged,x,(this->fields).fromSlotIndex
                  ,(this->fields).toSlotIndex);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

