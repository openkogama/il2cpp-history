
/* Void <OnDeleteConfirmation>b__7_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler+<>c::
     InventoryItemCubeModelHandler_c__OnDeleteConfirmation_b__7_0
               (InventoryItemCubeModelHandler_c *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    uVar1 = 0;
    pIVar2 = x->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          pVVar4 = &(pIVar2->vtable).get_StackReady + (pIVar2->interfaceOffsets[uVar1].offset + 2);
          UNRECOVERED_JUMPTABLE = pVVar4->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(x,pVVar4->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar3);
    }
    puVar5 = (undefined8 *)FUN_?(x);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(x,puVar5[1],(code *)*puVar5);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnSellClicked>b__3_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler+<>c::
     InventoryItemCubeModelHandler_c__OnSellClicked_b__3_0
               (InventoryItemCubeModelHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_cannot_sell_your_model_throu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_You_cannot_sell_your_model_throu,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,
                  StringLiteral_Error);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* InventoryItemCubeModelHandler+<>c() */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler+<>c::InventoryItemCubeModelHandler_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__InventoryItemCubeModelHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (InventoryItemCubeModelHandler_c *)
           FUN_?(TypeInfo__InventoryItemCubeModelHandler____c);
  TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9 = pIVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__InventoryItemCubeModelHandler____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

