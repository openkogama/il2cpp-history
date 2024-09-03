
/* Void <Initialize>b__36_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopPlayModeController+<>c::
     DesktopPlayModeController_c__Initialize_b__36_0
               (DesktopPlayModeController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0xc;
    pIStack_2 = handler;
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


/* DesktopPlayModeController+<>c() */

void Assembly-CSharp.dll::DesktopPlayModeController+<>c::DesktopPlayModeController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopPlayModeController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopPlayModeController____c;
  value = (DesktopPlayModeController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__DesktopPlayModeController____c->static_fields->__9 = value;
  func_?(TypeInfo__DesktopPlayModeController____c->static_fields,value);
  return;
}

