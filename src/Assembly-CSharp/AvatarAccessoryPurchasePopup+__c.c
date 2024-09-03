
/* Void <OnGoldPurchaseDialogResult>b__21_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c::
     AvatarAccessoryPurchasePopup_c__OnGoldPurchaseDialogResult_b__21_0
               (AvatarAccessoryPurchasePopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
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


/* Void <Pop>b__24_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c::
     AvatarAccessoryPurchasePopup_c__Pop_b__24_0
               (AvatarAccessoryPurchasePopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
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


/* Void <ProductPurchaseResponseHandler>b__19_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c::
     AvatarAccessoryPurchasePopup_c__ProductPurchaseResponseHandler_b__19_0
               (AvatarAccessoryPurchasePopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
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


/* Void <Purchase>b__18_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c::
     AvatarAccessoryPurchasePopup_c__Purchase_b__18_0
               (AvatarAccessoryPurchasePopup_c *this,IModalPopupCreator *x,BaseEventData *y,
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


/* AvatarAccessoryPurchasePopup+<>c() */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c::AvatarAccessoryPurchasePopup_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarAccessoryPurchasePopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryPurchasePopup____c;
  value = (AvatarAccessoryPurchasePopup_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields->__9 = value;
  func_?(TypeInfo__AvatarAccessoryPurchasePopup____c->static_fields,value);
  return;
}

