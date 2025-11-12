
/* Boolean <Initialize>b__23_0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__Initialize_b__23_0
               (AvatarEditModeBodyController_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSpawnPointRed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClient *)0x0;
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVSpawnPointRed->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (MVSpawnPointRed__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       TypeInfo__MVSpawnPointRed)) {
      bVar3 = false;
    }
    if (bVar3) {
      pMVar1 = wo;
    }
  }
  return pMVar1 != (MVWorldObjectClient *)0x0;
}


/* Boolean <Initialize>b__23_1(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__Initialize_b__23_1
               (AvatarEditModeBodyController_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVBody->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVBody__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] == TypeInfo__MVBody)) {
      pMVar2 = (wo->fields).group;
      if (pMVar2 != (MVGroup *)0x0) {
        return (pMVar2->fields)._.group == (MVGroup *)0x0;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  return 0;
}


/* Void <InitializedPurchasedAvatar>b__38_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__InitializedPurchasedAvatar_b__38_0
               (AvatarEditModeBodyController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

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


/* Void <MVNetworGame_ScreenshotUploadedHandler>b__43_0(IPurchaseSoundManager, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__MVNetworGame_ScreenshotUploadedHandler_b__43_0
               (AvatarEditModeBodyController_c *this,IPurchaseSoundManager *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IPurchaseSoundManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IPurchaseSoundManager *)0x0) {
    uVar1 = 0;
    pIVar2 = x->klass;
    uVar3._0_1_ = (pIVar2->_1).rank;
    uVar3._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IPurchaseSoundManager) {
          pVVar4 = &(pIVar2->vtable).SurpressSoundOnce +
                   (pIVar2->interfaceOffsets[uVar1].offset + 1);
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


/* Void <MVNetworGame_ScreenshotUploadedHandler>b__43_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__MVNetworGame_ScreenshotUploadedHandler_b__43_1
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IUIStack *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 4);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0x80,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <MVNetworGame_ScreenshotUploadedHandler>b__43_3(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__MVNetworGame_ScreenshotUploadedHandler_b__43_3
               (AvatarEditModeBodyController_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IEditStateCommands *)0x0) {
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
          (Il2CppClass *)TypeInfo__IEditStateCommands) {
        pVVar5 = &(pIVar3->vtable).SetState + pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0x34,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <OnActiveAvatarSetAfterPurchase>b__39_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__OnActiveAvatarSetAfterPurchase_b__39_0
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IUIStack *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 4);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0x80,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <OnActiveAvatarSetAfterPurchase>b__39_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__OnActiveAvatarSetAfterPurchase_b__39_1
               (AvatarEditModeBodyController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Warning);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_have_a_new_active_avatar_set);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_You_have_a_new_active_avatar_set,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Warning,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,pSVar2);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <OnProductPurchaseAvatarResponse>b__37_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__OnProductPurchaseAvatarResponse_b__37_0
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IUIStack *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 4);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0x80,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <OnPurchaseAvatarConfirmation>b__36_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__OnPurchaseAvatarConfirmation_b__36_0
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

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


/* Void <ResetCallback>b__27_1(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__ResetCallback_b__27_1
               (AvatarEditModeBodyController_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IEditStateCommands *)0x0) {
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
          (Il2CppClass *)TypeInfo__IEditStateCommands) {
        pVVar5 = &(pIVar3->vtable).SetState + pIVar3->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,0x34,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <ResetCallback>b__27_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__ResetCallback_b__27_2
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

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


/* Void <ResetCallback>b__27_3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__ResetCallback_b__27_3
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

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


/* Void <TakeScreenshot>b__34_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__TakeScreenshot_b__34_0
               (AvatarEditModeBodyController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Image_upload_is_disabled_in_stan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Image_upload_is_disabled_in_stan,(MethodInfo *)0x0);
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


/* AvatarEditModeBodyController+<>c() */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::AvatarEditModeBodyController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarEditModeBodyController_c *)
           FUN_?(TypeInfo__AvatarEditModeBodyController____c);
  TypeInfo__AvatarEditModeBodyController____c->static_fields->__9 = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AvatarEditModeBodyController____c->static_fields >> 0xc);
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

