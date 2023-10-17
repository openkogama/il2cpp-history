
/* Void <Execute>b__0_0(IHandleMaterial, BaseEventData) */

void Assembly-CSharp.dll::MaterialButton+<>c::MaterialButton_c__Execute_b__0_0
               (MaterialButton_c *this,IHandleMaterial *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IHandleMaterial *)&TypeInfo__UnityEngine__EventSystems__IHandleMaterial;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IHandleMaterial *)0x0) {
    pIStack_1 = handler;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IHandleMaterial;
    uStack_3 = 1;
    func_?();
    return;
  }
  pIStack_1 = (IHandleMaterial *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MaterialButton+<>c() */

void Assembly-CSharp.dll::MaterialButton+<>c::MaterialButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialButton____c);
    cRam_? = '\x01';
  }
  value = (MaterialButton_c *)func_?(TypeInfo__MaterialButton____c);
  if (value != (MaterialButton_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__MaterialButton____c->static_fields->__9 = value;
    func_?(TypeInfo__MaterialButton____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

