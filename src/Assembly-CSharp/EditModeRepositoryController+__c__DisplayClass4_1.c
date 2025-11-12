
/* Void <ProductPurchaseResponseHandler>b__2(IAddItemFromInventory, BaseEventData) */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c__DisplayClass4_1::
     EditModeRepositoryController_c_DisplayClass4_1__ProductPurchaseResponseHandler_b__2
               (EditModeRepositoryController_c_DisplayClass4_1 *this,IAddItemFromInventory *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAddItemFromInventory *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = (this->fields).inventoryItem;
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory) {
        pIVar6 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar6 = (IAddItemFromInventory__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory,0,pIVar2,
                         unaff_RDI);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->OnAddItemFromInventory).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,pIVar2,(pIVar6->OnAddItemFromInventory).method,UNRECOVERED_JUMPTABLE);
  return;
}

