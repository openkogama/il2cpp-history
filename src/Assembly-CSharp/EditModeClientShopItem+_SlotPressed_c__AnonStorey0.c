
/* Void <>m__0(IAddItemFromInventory, BaseEventData) */

void Assembly-CSharp.dll::EditModeClientShopItem+<SlotPressed>c__AnonStorey0::
     EditModeClientShopItem_SlotPressed_c_AnonStorey0___m__0
               (EditModeClientShopItem_SlotPressed_c_AnonStorey0 *this,IAddItemFromInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryItem;
  if (x != (IAddItemFromInventory *)0x0) {
    pIVar2 = x->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&x->klass->vtable)[iVar5].OnAddItemFromInventory.method)
                    (x,pIVar1,(&x->klass[1]._0.image)[iVar5 * 2]);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory,0);
    (*(code *)*puVar6)(x,pIVar1,puVar6[1]);
    return;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

