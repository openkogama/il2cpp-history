
/* Void <OnPurchaseResponse>b__20_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::
     ThemePreviewSettingsMenu_c__OnPurchaseResponse_b__20_0
               (ThemePreviewSettingsMenu_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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
        pVVar5 = &(pIVar3->vtable).get_StackReady + (pIVar3->interfaceOffsets[uVar2].offset + 3);
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(x,4,pVVar5->method,pVVar5->methodPtr);
  return;
}


/* Void <OnPurchaseResponse>b__20_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::
     ThemePreviewSettingsMenu_c__OnPurchaseResponse_b__20_1
               (ThemePreviewSettingsMenu_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Your_theme_is_now_active_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Theme_activation);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Your_theme_is_now_active_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPurchaseResponse>b__20_3(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::
     ThemePreviewSettingsMenu_c__OnPurchaseResponse_b__20_3
               (ThemePreviewSettingsMenu_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_do_not_fulfill_the_level_req);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Theme_activation);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_You_do_not_fulfill_the_level_req,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPurchaseResponse>b__20_4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::
     ThemePreviewSettingsMenu_c__OnPurchaseResponse_b__20_4
               (ThemePreviewSettingsMenu_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Something_went_wrong__The_theme_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Theme_activation);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Something_went_wrong__The_theme_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ThemePreviewSettingsMenu+<>c() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::ThemePreviewSettingsMenu_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemePreviewSettingsMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (ThemePreviewSettingsMenu_c *)FUN_?(TypeInfo__ThemePreviewSettingsMenu____c);
  TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9 = pTVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__ThemePreviewSettingsMenu____c->static_fields >> 0xc);
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

