
/* Void <ProductPurchaseResponseHandler>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c__DisplayClass10_1::
     GamePassesViewCrystalsInInventory_c_DisplayClass10_1__ProductPurchaseResponseHandler_b__1
               (GamePassesViewCrystalsInInventory_c_DisplayClass10_1 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    cRam_? = '\x01';
  }
  if ((this->fields).CS___8__locals1 != (GamePassesViewCrystalsInInventory_c_DisplayClass10_0 *)0x0)
  {
    pSVar1 = (this->fields).currentlyBuyingItem;
    if (pSVar1 != (ShopItem *)0x0) {
      s = mscorlib.dll::System::Int32::Int32_ToString
                    ((Int32 *)&(pSVar1->fields).priceGold,(MethodInfo *)0x0);
      iVar2 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
      if (x != (IModalPopupCreator *)0x0) {
        pIVar3 = x->klass;
        uVar4 = 0;
        uVar5._0_1_ = (pIVar3->_1).rank;
        uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
        if (uVar5 != 0) {
          do {
            if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
              ppMVar6 = &(&(x->klass->vtable).Create)[x->klass->interfaceOffsets[uVar4].offset].
                         method;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        ppMVar6 = (MethodInfo **)
                  func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,0);
code_?:
        (*(code *)*ppMVar6)(x,ppMVar6[1],iVar2);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

