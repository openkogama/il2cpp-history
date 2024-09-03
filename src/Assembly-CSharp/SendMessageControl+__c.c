
/* Void <HandleChatCommands>b__56_0(IToggleFps, BaseEventData) */

void Assembly-CSharp.dll::SendMessageControl+<>c::SendMessageControl_c__HandleChatCommands_b__56_0
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
  method_00 = TypeInfo__SendMessageControl____c;
  value = (SendMessageControl_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__SendMessageControl____c->static_fields->__9 = value;
  func_?(TypeInfo__SendMessageControl____c->static_fields,value);
  return;
}

