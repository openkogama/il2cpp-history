
/* Void <Cancel>b__4_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeEventSkipPopup+<>c::FirstTimeEventSkipPopup_c__Cancel_b__4_0
               (FirstTimeEventSkipPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <Ok>b__3_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeEventSkipPopup+<>c::FirstTimeEventSkipPopup_c__Ok_b__3_0
               (FirstTimeEventSkipPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x20;
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


/* FirstTimeEventSkipPopup+<>c() */

void Assembly-CSharp.dll::FirstTimeEventSkipPopup+<>c::FirstTimeEventSkipPopup_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventSkipPopup____c);
    cRam_? = '\x01';
  }
  value = (FirstTimeEventSkipPopup_c *)func_?(TypeInfo__FirstTimeEventSkipPopup____c);
  if (value != (FirstTimeEventSkipPopup_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__FirstTimeEventSkipPopup____c->static_fields->__9 = value;
    func_?(TypeInfo__FirstTimeEventSkipPopup____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

