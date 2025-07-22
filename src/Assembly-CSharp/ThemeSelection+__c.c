
/* Void <GoBackToSettings>b__25_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection+<>c::ThemeSelection_c__GoBackToSettings_b__25_0
               (ThemeSelection_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnThemeRemovalWarningResolved>b__24_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection+<>c::
     ThemeSelection_c__OnThemeRemovalWarningResolved_b__24_0
               (ThemeSelection_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* ThemeSelection+<>c() */

void Assembly-CSharp.dll::ThemeSelection+<>c::ThemeSelection_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeSelection____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeSelection____c;
  value = (ThemeSelection_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ThemeSelection____c->static_fields->__9 = value;
  func_?(TypeInfo__ThemeSelection____c->static_fields,value);
  return;
}

