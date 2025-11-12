
/* Void <Continue>b__4_0(ITouristAdController, BaseEventData) */

void Assembly-CSharp.dll::CustomTouristPromotion+<>c::CustomTouristPromotion_c__Continue_b__4_0
               (CustomTouristPromotion_c *this,ITouristAdController *x,BaseEventData *y,
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


/* CustomTouristPromotion+<>c() */

void Assembly-CSharp.dll::CustomTouristPromotion+<>c::CustomTouristPromotion_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CustomTouristPromotion____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (CustomTouristPromotion_c *)FUN_?(TypeInfo__CustomTouristPromotion____c);
  TypeInfo__CustomTouristPromotion____c->static_fields->__9 = pCVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__CustomTouristPromotion____c->static_fields >> 0xc);
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

