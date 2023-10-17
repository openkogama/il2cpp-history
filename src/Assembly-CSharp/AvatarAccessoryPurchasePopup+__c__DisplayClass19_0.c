
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c__DisplayClass19_0::
     AvatarAccessoryPurchasePopup_c_DisplayClass19_0__ProductPurchaseResponseHandler_b__1
               (AvatarAccessoryPurchasePopup_c_DisplayClass19_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).returnCode;
  pAVar2 = (this->fields).__4__this;
  if (pAVar2 != (AvatarAccessoryPurchasePopup *)0x0) {
    iVar3 = (pAVar2->fields).price;
    if (x != (IModalPopupCreator *)0x0) {
      uVar4 = 0;
      uVar5 = (x->klass->_1).interface_offsets_count;
      if (uVar5 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            pVVar6 = &(x->klass->vtable).Create + x->klass->interfaceOffsets[uVar4].offset;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pVVar6 = (VirtualInvokeData *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,0);
code_?:
      (*pVVar6->methodPtr)(x,iVar1,iVar3,pVVar6->method);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

