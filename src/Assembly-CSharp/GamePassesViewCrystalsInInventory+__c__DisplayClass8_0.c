
/* Void <OpenInventoryAtPosition>b__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c__DisplayClass8_0::
     GamePassesViewCrystalsInInventory_c_DisplayClass8_0__OpenInventoryAtPosition_b__0
               (GamePassesViewCrystalsInInventory_c_DisplayClass8_0 *this,IPlayerInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IPlayerInventory);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).categoryId;
  iVar2 = (this->fields).itemSlot;
  if (x == (IPlayerInventory *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  uVar5 = (x->klass->_1).interface_offsets_count;
  if (uVar5 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        pVVar6 = &(x->klass->vtable).ActivateAtCategoryWithSlot +
                 x->klass->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,1);
code_?:
  (*pVVar6->methodPtr)(x,1,iVar1,iVar2,pVVar6->method);
  return;
}

