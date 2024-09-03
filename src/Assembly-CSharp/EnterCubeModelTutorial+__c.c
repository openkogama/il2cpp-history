
/* Void <OnClick>b__0_0(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::EnterCubeModelTutorial+<>c::EnterCubeModelTutorial_c__OnClick_b__0_0
               (EnterCubeModelTutorial_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IEditStateCommands;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    ppIStack_1 = (IEditStateCommands__Class **)0x37;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__IEditStateCommands;
    func_?(0);
    return;
  }
  ppIStack_1 = (IEditStateCommands__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* EnterCubeModelTutorial+<>c() */

void Assembly-CSharp.dll::EnterCubeModelTutorial+<>c::EnterCubeModelTutorial_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EnterCubeModelTutorial____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__EnterCubeModelTutorial____c;
  value = (EnterCubeModelTutorial_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__EnterCubeModelTutorial____c->static_fields->__9 = value;
  func_?(TypeInfo__EnterCubeModelTutorial____c->static_fields,value);
  return;
}

