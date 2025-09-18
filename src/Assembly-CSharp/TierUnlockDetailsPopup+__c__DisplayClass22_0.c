
/* Void <ProductPurchaseResponseHandler>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup+<>c__DisplayClass22_0::
     TierUnlockDetailsPopup_c_DisplayClass22_0__ProductPurchaseResponseHandler_b__2
               (TierUnlockDetailsPopup_c_DisplayClass22_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).returnCode;
  pTVar2 = (this->fields).__4__this;
  if (pTVar2 != (TierUnlockDetailsPopup *)0x0) {
    iVar3 = (pTVar2->fields).price;
    if (x != (IModalPopupCreator *)0x0) {
      pIVar4 = x->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            ppMVar7 = &(&(x->klass->vtable).Create)[x->klass->interfaceOffsets[uVar5].offset].method
            ;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,0);
code_?:
      (*(code *)*ppMVar7)(x,iVar1,iVar3,ppMVar7[1]);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

