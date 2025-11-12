
/* Void <StartGoldPurchasePendingUpdate>b__6_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GoldPurchasedTracker+<>c::
     GoldPurchasedTracker_c__StartGoldPurchasePendingUpdate_b__6_0
               (GoldPurchasedTracker_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Thank_you_for_your_purchase__It_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Purchase_pending);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Thank_you_for_your_purchase__It_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Purchase_pending,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GoldPurchasedTracker+<>c() */

void Assembly-CSharp.dll::GoldPurchasedTracker+<>c::GoldPurchasedTracker_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoldPurchasedTracker____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GoldPurchasedTracker_c *)FUN_?(TypeInfo__GoldPurchasedTracker____c);
  TypeInfo__GoldPurchasedTracker____c->static_fields->__9 = pGVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__GoldPurchasedTracker____c->static_fields >> 0xc);
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

