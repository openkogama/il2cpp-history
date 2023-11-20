
/* Void <OnPurchaseResponse>b__20_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::
     ThemePreviewSettingsMenu_c__OnPurchaseResponse_b__20_0
               (ThemePreviewSettingsMenu_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x4;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnPurchaseResponse>b__20_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::
     ThemePreviewSettingsMenu_c__OnPurchaseResponse_b__20_1
               (ThemePreviewSettingsMenu_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Your_theme_is_now_active_);
    func_?(&StringLiteral_Theme_activation);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Your_theme_is_now_active_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
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
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_You_do_not_fulfill_the_level_req);
    func_?(&StringLiteral_Theme_activation);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_You_do_not_fulfill_the_level_req,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
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
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Something_went_wrong__The_theme_);
    func_?(&StringLiteral_Theme_activation);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Something_went_wrong__The_theme_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ThemePreviewSettingsMenu+<>c() */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::ThemePreviewSettingsMenu_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemePreviewSettingsMenu____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemePreviewSettingsMenu____c;
  value = (ThemePreviewSettingsMenu_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9 = value;
  func_?(TypeInfo__ThemePreviewSettingsMenu____c->static_fields,value);
  return;
}

