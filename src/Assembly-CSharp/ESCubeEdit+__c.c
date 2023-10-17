
/* Void <Exit>b__9_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ESCubeEdit+<>c::ESCubeEdit_c__Exit_b__9_0
               (ESCubeEdit_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x80;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(4);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ESCubeEdit+<>c() */

void Assembly-CSharp.dll::ESCubeEdit+<>c::ESCubeEdit_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ESCubeEdit____c);
    cRam_? = '\x01';
  }
  value = (ESCubeEdit_c *)func_?(TypeInfo__ESCubeEdit____c);
  if (value != (ESCubeEdit_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ESCubeEdit____c->static_fields->__9 = value;
    func_?(TypeInfo__ESCubeEdit____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

