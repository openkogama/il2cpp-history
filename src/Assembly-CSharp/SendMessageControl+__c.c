
/* Void <HandleChatCommands>b__55_0(IToggleFps, BaseEventData) */

void Assembly-CSharp.dll::SendMessageControl+<>c::SendMessageControl_c__HandleChatCommands_b__55_0
               (SendMessageControl_c *this,IToggleFps *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IToggleFps *)&TypeInfo__IToggleFps;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IToggleFps *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__IToggleFps;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (IToggleFps *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SendMessageControl+<>c() */

void Assembly-CSharp.dll::SendMessageControl+<>c::SendMessageControl_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SendMessageControl____c);
    cRam_? = '\x01';
  }
  value = (SendMessageControl_c *)func_?(TypeInfo__SendMessageControl____c);
  if (value != (SendMessageControl_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__SendMessageControl____c->static_fields->__9 = value;
    func_?(TypeInfo__SendMessageControl____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

