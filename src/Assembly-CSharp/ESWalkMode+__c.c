
/* Void <Enter>b__0_0(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::ESWalkMode+<>c::ESWalkMode_c__Enter_b__0_0
               (ESWalkMode_c *this,IEditModeController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IEditModeController *)&TypeInfo__UnityEngine__EventSystems__IEditModeController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditModeController *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IEditModeController;
    uStack_3 = 1;
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


/* ESWalkMode+<>c() */

void Assembly-CSharp.dll::ESWalkMode+<>c::ESWalkMode_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ESWalkMode____c);
    cRam_? = '\x01';
  }
  value = (ESWalkMode_c *)func_?(TypeInfo__ESWalkMode____c);
  if (value != (ESWalkMode_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ESWalkMode____c->static_fields->__9 = value;
    func_?(TypeInfo__ESWalkMode____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

