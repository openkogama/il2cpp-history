
/* Void <ProductPurchaseResponseHandler>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::MaterialPurchasePopup+<>c__DisplayClass13_0::
     MaterialPurchasePopup_c_DisplayClass13_0__ProductPurchaseResponseHandler_b__2
               (MaterialPurchasePopup_c_DisplayClass13_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).returnCode;
  pMVar2 = (this->fields).__4__this;
  if ((pMVar2 != (MaterialPurchasePopup *)0x0) &&
     (pTVar3 = (pMVar2->fields).price, pTVar3 != (Text *)0x0)) {
    s = (String *)
        (*(code *)(pTVar3->klass->vtable).get_text.method)
                  (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      pIVar5 = x->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pIVar5->_1).rank;
      uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            ppMVar8 = &(&(x->klass->vtable).Create)[x->klass->interfaceOffsets[uVar6].offset].method
            ;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      ppMVar8 = (MethodInfo **)
                func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,0);
code_?:
      (*(code *)*ppMVar8)(x,iVar1,iVar4,ppMVar8[1]);
      return;
    }
  }
  func_?(iVar1);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

