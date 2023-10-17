
/* Void <CalculateShouldShowBundleAd>b__12_0(IActivateUIElement, BaseEventData) */

void Assembly-CSharp.dll::AccessoryMenuButton+<>c::
     AccessoryMenuButton_c__CalculateShouldShowBundleAd_b__12_0
               (AccessoryMenuButton_c *this,IActivateUIElement *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IActivateUIElement;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IActivateUIElement *)0x0) {
    ppIStack_1 = (IActivateUIElement__Class **)0x1;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IActivateUIElement;
    func_?(0);
    return;
  }
  ppIStack_1 = (IActivateUIElement__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AccessoryMenuButton+<>c() */

void Assembly-CSharp.dll::AccessoryMenuButton+<>c::AccessoryMenuButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryMenuButton____c);
    cRam_? = '\x01';
  }
  value = (AccessoryMenuButton_c *)func_?(TypeInfo__AccessoryMenuButton____c);
  if (value != (AccessoryMenuButton_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__AccessoryMenuButton____c->static_fields->__9 = value;
    func_?(TypeInfo__AccessoryMenuButton____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

