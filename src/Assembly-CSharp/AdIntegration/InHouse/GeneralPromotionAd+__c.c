
/* Void <FadeOutAndPop>b__37_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<>c::
     GeneralPromotionAd_c__FadeOutAndPop_b__37_1
               (GeneralPromotionAd_c *this,IUIStack *x,BaseEventData *_,MethodInfo *method)

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


/* Void <OnContinueClicked>b__35_0(ITouristAdController, BaseEventData) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<>c::
     GeneralPromotionAd_c__OnContinueClicked_b__35_0
               (GeneralPromotionAd_c *this,ITouristAdController *x,BaseEventData *_,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (ITouristAdController *)0x0) {
    uVar1 = 0;
    pIVar2 = x->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__ITouristAdController) {
          UNRECOVERED_JUMPTABLE =
               (&pIVar2->vtable)[pIVar2->interfaceOffsets[uVar1].offset].ShowAd.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (x,(&pIVar2->vtable)[pIVar2->interfaceOffsets[uVar1].offset].ShowAd.method,
                     UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar3);
    }
    puVar4 = (undefined8 *)FUN_?(x);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(x,puVar4[1],(code *)*puVar4);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GeneralPromotionAd+<>c() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<>c::
     GeneralPromotionAd_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GeneralPromotionAd_c *)
           FUN_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
  TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9 = pGVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields >> 0xc);
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

