
/* Void <SetAsSelected>b__17_0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::BundleTab+<>c::BundleTab_c__SetAsSelected_b__17_0
               (BundleTab_c *this,IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAccessoryClicked *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
  uVar3 = 0;
  pIVar4 = x->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    pIVar2 = pIVar4->interfaceOffsets;
    do {
      if (pIVar2[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
        pVVar6 = &(pIVar4->vtable).OpenAccessoryManagementScreen + (pIVar2[uVar3].offset + 1);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,1,pIVar2);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(x,0,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void <SetAsSelected>b__17_1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::BundleTab+<>c::BundleTab_c__SetAsSelected_b__17_1
               (BundleTab_c *this,IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAccessoryClicked *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
        pVVar5 = &(pIVar3->vtable).OpenAccessoryManagementScreen +
                 (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0xfe,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <SetAsSelected>b__17_2(IBundleController, BaseEventData) */

void Assembly-CSharp.dll::BundleTab+<>c::BundleTab_c__SetAsSelected_b__17_2
               (BundleTab_c *this,IBundleController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IBundleController *)0x0) {
    uVar1 = 0;
    pIVar2 = x->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IBundleController) {
          pVVar4 = &(pIVar2->vtable).ShowBundle + pIVar2->interfaceOffsets[uVar1].offset;
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


/* BundleTab+<>c() */

void Assembly-CSharp.dll::BundleTab+<>c::BundleTab_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BundleTab____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (BundleTab_c *)FUN_?(TypeInfo__BundleTab____c);
  TypeInfo__BundleTab____c->static_fields->__9 = pBVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__BundleTab____c->static_fields >> 0xc);
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

