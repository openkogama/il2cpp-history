
/* Void <SlotChanged>b__0(ISlotChanged, BaseEventData) */

void Assembly-CSharp.dll::InventorySlots+<>c__DisplayClass12_0::
     InventorySlots_c_DisplayClass12_0__SlotChanged_b__0
               (InventorySlots_c_DisplayClass12_0 *this,ISlotChanged *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__ISlotChanged;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (ISlotChanged *)0x0) {
    ppIStack_1 = (ISlotChanged__Class **)(this->fields).toSlotIndex;
    puStack_2 = (undefined *)(this->fields).fromSlotIndex;
    pIStack_3 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__ISlotChanged);
    return;
  }
  ppIStack_1 = (ISlotChanged__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

