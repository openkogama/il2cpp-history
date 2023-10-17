
/* Void <OnSubscriberClicked>b__24_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandlerBase+<>c::
     ReviveUIHandlerBase_c__OnSubscriberClicked_b__24_2
               (ReviveUIHandlerBase_c *this,IUIStack *z,BaseEventData *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (z != (IUIStack *)0x0) {
    pIStack_1 = z;
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


/* Void <OnWatchAdClicked>b__23_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandlerBase+<>c::ReviveUIHandlerBase_c__OnWatchAdClicked_b__23_2
               (ReviveUIHandlerBase_c *this,IUIStack *z,BaseEventData *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (z != (IUIStack *)0x0) {
    pIStack_1 = z;
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


/* ReviveUIHandlerBase+<>c() */

void Assembly-CSharp.dll::ReviveUIHandlerBase+<>c::ReviveUIHandlerBase_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ReviveUIHandlerBase____c);
    cRam_? = '\x01';
  }
  value = (ReviveUIHandlerBase_c *)func_?(TypeInfo__ReviveUIHandlerBase____c);
  if (value != (ReviveUIHandlerBase_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ReviveUIHandlerBase____c->static_fields->__9 = value;
    func_?(TypeInfo__ReviveUIHandlerBase____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

