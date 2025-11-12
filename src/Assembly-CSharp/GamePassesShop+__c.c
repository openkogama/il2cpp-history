
/* Void <Exit>b__87_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop+<>c::GamePassesShop_c__Exit_b__87_0
               (GamePassesShop_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnPlayerPlanetDataUpdated>b__86_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop+<>c::GamePassesShop_c__OnPlayerPlanetDataUpdated_b__86_0
               (GamePassesShop_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <PreviewTier>b__85_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop+<>c::GamePassesShop_c__PreviewTier_b__85_0
               (GamePassesShop_c *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
          pVVar4 = &(pIVar1->vtable).Create + (pIVar1->interfaceOffsets[uVar2].offset + 2);
          UNRECOVERED_JUMPTABLE = pVVar4->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(x,pVVar4->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined8 *)
             FUN_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,2,uVar3,
                           unaff_RBX);
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


/* Void <PreviewTier>b__85_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop+<>c::GamePassesShop_c__PreviewTier_b__85_1
               (GamePassesShop_c *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_An_error_occurred);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Free_try_cannot_be_activated_at_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>b__84_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop+<>c::GamePassesShop_c__RewardedAdCallback_b__84_0
               (GamePassesShop_c *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Video_canceled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_video_was_canceled__Your_Fre);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_The_video_was_canceled__Your_Fre,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Video_canceled,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>b__84_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop+<>c::GamePassesShop_c__RewardedAdCallback_b__84_1
               (GamePassesShop_c *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

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


/* Void <ShowAd>b__83_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShop+<>c::GamePassesShop_c__ShowAd_b__83_0
               (GamePassesShop_c *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_An_error_occurred);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Free_try_cannot_be_activated_at_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GamePassesShop+<>c() */

void Assembly-CSharp.dll::GamePassesShop+<>c::GamePassesShop_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesShop____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GamePassesShop_c *)FUN_?(TypeInfo__GamePassesShop____c);
  TypeInfo__GamePassesShop____c->static_fields->__9 = pGVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__GamePassesShop____c->static_fields >> 0xc);
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

