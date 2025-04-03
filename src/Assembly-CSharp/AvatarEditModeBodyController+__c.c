
/* Boolean <Initialize>b__23_0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__Initialize_b__23_0
               (AvatarEditModeBodyController_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSpawnPointRed);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVSpawnPointRed->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVSpawnPointRed__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] ==
        TypeInfo__MVSpawnPointRed)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
}


/* Boolean <Initialize>b__23_1(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__Initialize_b__23_1
               (AvatarEditModeBodyController_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBody);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVBody->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVBody__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] == TypeInfo__MVBody)) {
      bVar2 = MVBody::MVBody_get_IsPlayerBody((MVBody *)wo,(MethodInfo *)0x0);
      return bVar2 == 0;
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
    pIStack_1 = (IModalPopupCreator *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IModalPopupCreator *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <MVNetworGame_ScreenshotUploadedHandler>b__43_0(IPurchaseSoundManager, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__MVNetworGame_ScreenshotUploadedHandler_b__43_0
               (AvatarEditModeBodyController_c *this,IPurchaseSoundManager *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IPurchaseSoundManager *)&TypeInfo__UnityEngine__EventSystems__IPurchaseSoundManager
    ;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IPurchaseSoundManager *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IPurchaseSoundManager;
    uStack_3 = 1;
    func_?();
    return;
  }
  pIStack_1 = (IPurchaseSoundManager *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <MVNetworGame_ScreenshotUploadedHandler>b__43_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__MVNetworGame_ScreenshotUploadedHandler_b__43_1
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x80;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(4);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <MVNetworGame_ScreenshotUploadedHandler>b__43_3(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__MVNetworGame_ScreenshotUploadedHandler_b__43_3
               (AvatarEditModeBodyController_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IEditStateCommands;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    ppIStack_1 = (IEditStateCommands__Class **)0x34;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__IEditStateCommands;
    func_?(0);
    return;
  }
  ppIStack_1 = (IEditStateCommands__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnActiveAvatarSetAfterPurchase>b__39_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__OnActiveAvatarSetAfterPurchase_b__39_0
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x80;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(4);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnActiveAvatarSetAfterPurchase>b__39_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__OnActiveAvatarSetAfterPurchase_b__39_1
               (AvatarEditModeBodyController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Warning);
    func_?(&StringLiteral_You_have_a_new_active_avatar_set);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_You_have_a_new_active_avatar_set,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Warning,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnProductPurchaseAvatarResponse>b__37_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__OnProductPurchaseAvatarResponse_b__37_0
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x80;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(4);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnPurchaseAvatarConfirmation>b__36_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__OnPurchaseAvatarConfirmation_b__36_0
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <ResetCallback>b__27_1(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__ResetCallback_b__27_1
               (AvatarEditModeBodyController_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IEditStateCommands;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    ppIStack_1 = (IEditStateCommands__Class **)0x34;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__IEditStateCommands;
    func_?(0);
    return;
  }
  ppIStack_1 = (IEditStateCommands__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <ResetCallback>b__27_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__ResetCallback_b__27_2
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <ResetCallback>b__27_3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__ResetCallback_b__27_3
               (AvatarEditModeBodyController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <TakeScreenshot>b__34_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::
     AvatarEditModeBodyController_c__TakeScreenshot_b__34_0
               (AvatarEditModeBodyController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_Image_upload_is_disabled_in_stan);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Image_upload_is_disabled_in_stan,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarEditModeBodyController+<>c() */

void Assembly-CSharp.dll::AvatarEditModeBodyController+<>c::AvatarEditModeBodyController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarEditModeBodyController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarEditModeBodyController____c;
  value = (AvatarEditModeBodyController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AvatarEditModeBodyController____c->static_fields->__9 = value;
  func_?(TypeInfo__AvatarEditModeBodyController____c->static_fields,value);
  return;
}

