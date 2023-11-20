
/* Void <DoShowing>b__1(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableBazookaPopup+<>c__DisplayClass7_0::
     FirstTimeActivatableBazookaPopup_c_DisplayClass7_0__DoShowing_b__1
               (FirstTimeActivatableBazookaPopup_c_DisplayClass7_0 *this,IPlayerInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).prioritizedItem;
  if (pIVar1 != (InventoryItem *)0x0) {
    iVar2 = (pIVar1->fields).itemCategoryID;
    iVar3 = (((this->fields).prioritizedItem)->fields).slotPosition;
    if (x != (IPlayerInventory *)0x0) {
      pIVar4 = x->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
            ppMVar7 = &(&(x->klass->vtable).ActivateAtCategoryWithSlot)
                       [x->klass->interfaceOffsets[uVar5].offset].method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,1);
code_?:
      (*(code *)*ppMVar7)(x,1,iVar2,iVar3,ppMVar7[1]);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

