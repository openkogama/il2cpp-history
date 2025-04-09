
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
        pIVar4 = x->klass;
        uVar5 = 0;
        uVar6._0_1_ = (pIVar4->_1).rank;
        uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
        if (uVar6 != 0) {
          do {
            if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
                (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGameObjectDroppedInSlot) {
              ppMVar7 = &(&x->klass->vtable)[x->klass->interfaceOffsets[uVar5].offset].SlotChanged.
                         method;
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        ppMVar7 = (MethodInfo **)
                  func_?(x,TypeInfo__UnityEngine__EventSystems__IGameObjectDroppedInSlot,0)
        ;
code_?:
        (*(code *)*ppMVar7)(x,pGVar1,iVar3,ppMVar7[1]);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

