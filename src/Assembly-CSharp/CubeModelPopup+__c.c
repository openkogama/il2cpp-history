
/* Void <OnModelScalePressed>b__7_3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::CubeModelPopup+<>c::CubeModelPopup_c__OnModelScalePressed_b__7_3
               (CubeModelPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CubeModelPopup+<>c() */

void Assembly-CSharp.dll::CubeModelPopup+<>c::CubeModelPopup_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelPopup____c);
    cRam_? = '\x01';
  }
  value = (CubeModelPopup_c *)func_?(TypeInfo__CubeModelPopup____c);
  if (value != (CubeModelPopup_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__CubeModelPopup____c->static_fields->__9 = value;
    func_?(TypeInfo__CubeModelPopup____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

