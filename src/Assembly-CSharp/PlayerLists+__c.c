
/* Void <ReCreate>b__10_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerLists+<>c::PlayerLists_c__ReCreate_b__10_0
               (PlayerLists_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <ReCreate>b__10_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerLists+<>c::PlayerLists_c__ReCreate_b__10_1
               (PlayerLists_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0xc;
    pIStack_2 = x;
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


/* PlayerLists+<>c() */

void Assembly-CSharp.dll::PlayerLists+<>c::PlayerLists_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerLists____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerLists____c;
  value = (PlayerLists_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__PlayerLists____c->static_fields->__9 = value;
  func_?(TypeInfo__PlayerLists____c->static_fields,value);
  return;
}

