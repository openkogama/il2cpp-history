
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::
     GamePassesViewCrystalsInInventory+<ProductPurchaseResponseHandler>c__AnonStorey2::
     GamePassesViewCrystalsInInventory_ProductPurchaseResponseHandler_c_AnonStorey2___m__0
               (GamePassesViewCrystalsInInventory_ProductPurchaseResponseHandler_c_AnonStorey2 *this
               ,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).__f__ref_1;
  if (pGVar1 != (GamePassesViewCrystalsInInventory_ProductPurchaseResponseHandler_c_AnonStorey1 *)
                0x0) {
    pSVar2 = (this->fields).currentlyBuyingItem;
    iVar3 = (pGVar1->fields).returnCode;
    if (pSVar2 != (ShopItem *)0x0) {
      s = (String *)func_?(&(pSVar2->fields).priceGold,0);
      iVar4 = mscorlib.dll::System::Int32::Int32_Parse_3(s,(MethodInfo *)0x0);
      if (x != (IModalPopupCreator *)0x0) {
        pIVar5 = x->klass;
        uVar6 = 0;
        uVar7._0_1_ = (pIVar5->_1).rank;
        uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
        if (uVar7 != 0) {
          do {
            if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
              ppMVar8 = &(&(x->klass->vtable).Create)[pIVar5->interfaceOffsets[uVar6].offset].method
              ;
              goto code_?;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar7);
        }
        ppMVar8 = (MethodInfo **)
                  func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,0);
code_?:
        (*(code *)*ppMVar8)(x,iVar3,iVar4,ppMVar8[1]);
        return;
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

