
/* Void <>m__0(ISlotChanged, BaseEventData) */

void Assembly-CSharp.dll::InventorySlots+<SlotChanged>c__AnonStorey0::
     InventorySlots_SlotChanged_c_AnonStorey0___m__0
               (InventorySlots_SlotChanged_c_AnonStorey0 *this,ISlotChanged *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (ISlotChanged *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__ISlotChanged,x,
                    (this->fields).fromSlotIndex,(this->fields).toSlotIndex);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

