
/* Void <OnClick>b__0_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryButton+<>c::PlayerInventoryButton_c__OnClick_b__0_0
               (PlayerInventoryButton_c *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IPlayerInventory *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  pIVar3 = x->klass;
  uVar4._0_1_ = (pIVar3->_1).rank;
  uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPlayerInventory) {
        pVVar5 = &(pIVar3->vtable).Activate + pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,1,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* PlayerInventoryButton+<>c() */

void Assembly-CSharp.dll::PlayerInventoryButton+<>c::PlayerInventoryButton_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerInventoryButton____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PlayerInventoryButton_c *)FUN_?(TypeInfo__PlayerInventoryButton____c);
  TypeInfo__PlayerInventoryButton____c->static_fields->__9 = pPVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__PlayerInventoryButton____c->static_fields >> 0xc);
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

