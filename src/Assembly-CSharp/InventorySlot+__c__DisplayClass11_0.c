
/* Void <OnDrop>b__0(IGameObjectDroppedInSlot, BaseEventData) */

void Assembly-CSharp.dll::InventorySlot+<>c__DisplayClass11_0::
     InventorySlot_c_DisplayClass11_0__OnDrop_b__0
               (InventorySlot_c_DisplayClass11_0 *this,IGameObjectDroppedInSlot *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IGameObjectDroppedInSlot);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).eventData;
  if (this_00 != (PointerEventData *)0x0) {
    pGVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::BaseEventData::
             BaseEventData_get_selectedObject((BaseEventData *)this_00,(MethodInfo *)0x0);
    pIVar2 = (this->fields).__4__this;
    if (pIVar2 != (InventorySlot *)0x0) {
      iVar3 = (pIVar2->fields)._AbsoluteSlot_k__BackingField;
      if (x != (IGameObjectDroppedInSlot *)0x0) {
        uVar4 = 0;
        uVar5 = (x->klass->_1).interface_offsets_count;
        if (uVar5 != 0) {
          do {
            if (x->klass->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGameObjectDroppedInSlot) {
              pIVar6 = &x->klass->vtable + x->klass->interfaceOffsets[uVar4].offset;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        pIVar6 = (IGameObjectDroppedInSlot__VTable *)
                 func_?(x,TypeInfo__UnityEngine__EventSystems__IGameObjectDroppedInSlot,0);
code_?:
        (*(pIVar6->SlotChanged).methodPtr)(x,pGVar1,iVar3,(pIVar6->SlotChanged).method);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

