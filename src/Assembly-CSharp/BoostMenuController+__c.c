
/* Void <OnAdFinished>b__8_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::BoostMenuController+<>c::BoostMenuController_c__OnAdFinished_b__8_0
               (BoostMenuController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_Ad_Available);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    lVar2 = (*(pMVar1->klass->vtable).__unknown.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).__unknown.method);
    if (lVar2 != 0) {
      FUN_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,lVar2);
      TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
      if (x != (IModalPopupCreator *)0x0) {
        FUN_?();
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* BoostMenuController+<>c() */

void Assembly-CSharp.dll::BoostMenuController+<>c::BoostMenuController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (BoostMenuController_c *)FUN_?(TypeInfo__BoostMenuController____c);
  TypeInfo__BoostMenuController____c->static_fields->__9 = pBVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__BoostMenuController____c->static_fields >> 0xc);
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

