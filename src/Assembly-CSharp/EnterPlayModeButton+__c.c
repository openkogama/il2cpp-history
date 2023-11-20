
/* Void <Execute>b__1_0(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::EnterPlayModeButton+<>c::EnterPlayModeButton_c__Execute_b__1_0
               (EnterPlayModeButton_c *this,IEditModeController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IEditModeController *)&TypeInfo__UnityEngine__EventSystems__IEditModeController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditModeController *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IEditModeController;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IEditModeController *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* EnterPlayModeButton+<>c() */

void Assembly-CSharp.dll::EnterPlayModeButton+<>c::EnterPlayModeButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EnterPlayModeButton____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__EnterPlayModeButton____c;
  value = (EnterPlayModeButton_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__EnterPlayModeButton____c->static_fields->__9 = value;
  func_?(TypeInfo__EnterPlayModeButton____c->static_fields,value);
  return;
}

