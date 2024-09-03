
/* Void <Exit>b__0_0(IHandleCubeModelEdit, BaseEventData) */

void Assembly-CSharp.dll::ExitCubeModeling+<>c::ExitCubeModeling_c__Exit_b__0_0
               (ExitCubeModeling_c *this,IHandleCubeModelEdit *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    pIStack_1 = (IHandleCubeModelEdit *)&TypeInfo__IHandleCubeModelEdit;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IHandleCubeModelEdit *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__IHandleCubeModelEdit;
    uStack_3 = 1;
    func_?();
    return;
  }
  pIStack_1 = (IHandleCubeModelEdit *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ExitCubeModeling+<>c() */

void Assembly-CSharp.dll::ExitCubeModeling+<>c::ExitCubeModeling_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ExitCubeModeling____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ExitCubeModeling____c;
  value = (ExitCubeModeling_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ExitCubeModeling____c->static_fields->__9 = value;
  func_?(TypeInfo__ExitCubeModeling____c->static_fields,value);
  return;
}

