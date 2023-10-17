
/* Void <ExecuteLeaveEditDelayed>b__2_0(ILeaveEditPlayModeHandler, BaseEventData) */

void Assembly-CSharp.dll::LeavePlayModeButton+<>c::
     LeavePlayModeButton_c__ExecuteLeaveEditDelayed_b__2_0
               (LeavePlayModeButton_c *this,ILeaveEditPlayModeHandler *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (ILeaveEditPlayModeHandler *)&TypeInfo__ILeaveEditPlayModeHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (ILeaveEditPlayModeHandler *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__ILeaveEditPlayModeHandler;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (ILeaveEditPlayModeHandler *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Execute>b__1_0(ILeaveEditPlayModeHandler, BaseEventData) */

void Assembly-CSharp.dll::LeavePlayModeButton+<>c::LeavePlayModeButton_c__Execute_b__1_0
               (LeavePlayModeButton_c *this,ILeaveEditPlayModeHandler *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (ILeaveEditPlayModeHandler *)&TypeInfo__ILeaveEditPlayModeHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (ILeaveEditPlayModeHandler *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__ILeaveEditPlayModeHandler;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (ILeaveEditPlayModeHandler *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LeavePlayModeButton+<>c() */

void Assembly-CSharp.dll::LeavePlayModeButton+<>c::LeavePlayModeButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LeavePlayModeButton____c);
    cRam_? = '\x01';
  }
  value = (LeavePlayModeButton_c *)func_?(TypeInfo__LeavePlayModeButton____c);
  if (value != (LeavePlayModeButton_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__LeavePlayModeButton____c->static_fields->__9 = value;
    func_?(TypeInfo__LeavePlayModeButton____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

