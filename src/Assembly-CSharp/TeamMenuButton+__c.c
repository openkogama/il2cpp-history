
/* Void <ShowTeamMenu>b__7_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TeamMenuButton+<>c::TeamMenuButton_c__ShowTeamMenu_b__7_0
               (TeamMenuButton_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0xc;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TeamMenuButton+<>c() */

void Assembly-CSharp.dll::TeamMenuButton+<>c::TeamMenuButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TeamMenuButton____c);
    cRam_? = '\x01';
  }
  value = (TeamMenuButton_c *)func_?(TypeInfo__TeamMenuButton____c);
  if (value != (TeamMenuButton_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__TeamMenuButton____c->static_fields->__9 = value;
    func_?(TypeInfo__TeamMenuButton____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

