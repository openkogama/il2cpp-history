
/* Void <OnAdFinishedContinue>b__12_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandler+<>c::ReviveUIHandler_c__OnAdFinishedContinue_b__12_0
               (ReviveUIHandler_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnRewardedAdWatched>b__13_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandler+<>c::ReviveUIHandler_c__OnRewardedAdWatched_b__13_0
               (ReviveUIHandler_c *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_Game_ended_while_you_were_busy__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Game_ended_while_you_were_busy__,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ReviveUIHandler+<>c() */

void Assembly-CSharp.dll::ReviveUIHandler+<>c::ReviveUIHandler_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ReviveUIHandler____c);
    cRam_? = '\x01';
  }
  value = (ReviveUIHandler_c *)func_?(TypeInfo__ReviveUIHandler____c);
  if (value != (ReviveUIHandler_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ReviveUIHandler____c->static_fields->__9 = value;
    func_?(TypeInfo__ReviveUIHandler____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

