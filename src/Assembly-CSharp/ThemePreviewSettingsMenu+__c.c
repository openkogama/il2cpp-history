
/* Void <OnPurchaseResponse>b__20_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c::
     ThemePreviewSettingsMenu_c__OnPurchaseResponse_b__20_0
               (ThemePreviewSettingsMenu_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    uVar1 = 0;
    uVar2 = (x->klass->_1).interface_offsets_count;
    if (uVar2 != 0) {
      do {
        if (x->klass->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          pVVar3 = &(x->klass->vtable).PopGroups + x->klass->interfaceOffsets[uVar1].offset;
          (*pVVar3->methodPtr)(x,4,pVVar3->method);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    puVar4 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
    (*(code *)*puVar4)(x,4,puVar4[1]);
    return;
  }
  func_?();
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
  value = (ThemePreviewSettingsMenu_c *)func_?(TypeInfo__ThemePreviewSettingsMenu____c);
  if (value != (ThemePreviewSettingsMenu_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ThemePreviewSettingsMenu____c->static_fields->__9 = value;
    func_?(TypeInfo__ThemePreviewSettingsMenu____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

