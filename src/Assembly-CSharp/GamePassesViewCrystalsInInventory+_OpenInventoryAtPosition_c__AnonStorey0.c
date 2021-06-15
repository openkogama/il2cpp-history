
/* Void <>m__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<OpenInventoryAtPosition>c__AnonStorey0
     ::GamePassesViewCrystalsInInventory_OpenInventoryAtPosition_c_AnonStorey0___m__0
               (GamePassesViewCrystalsInInventory_OpenInventoryAtPosition_c_AnonStorey0 *this,
               IPlayerInventory *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).categoryId;
  iVar2 = (this->fields).itemSlot;
  if (x == (IPlayerInventory *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        ppMVar7 = &(&(x->klass->vtable).ActivateAtCategoryWithSlot)
                   [pIVar4->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,1);
code_?:
  (*(code *)*ppMVar7)(x,1,iVar1,iVar2,ppMVar7[1]);
  return;
}

