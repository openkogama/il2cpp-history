
/* Void <ConfirmationCallback>b__12_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ItemPurchasePopup+<>c::ItemPurchasePopup_c__ConfirmationCallback_b__12_1
               (ItemPurchasePopup_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,0x20,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ConfirmationCallback>b__12_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ItemPurchasePopup+<>c::ItemPurchasePopup_c__ConfirmationCallback_b__12_2
               (ItemPurchasePopup_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = handler->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(handler,8,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* ItemPurchasePopup+<>c() */

void Assembly-CSharp.dll::ItemPurchasePopup+<>c::ItemPurchasePopup_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ItemPurchasePopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (ItemPurchasePopup_c *)FUN_?(TypeInfo__ItemPurchasePopup____c);
  TypeInfo__ItemPurchasePopup____c->static_fields->__9 = pIVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__ItemPurchasePopup____c->static_fields >> 0xc);
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

