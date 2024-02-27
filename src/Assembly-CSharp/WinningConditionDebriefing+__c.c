
/* Void <OnWinningConditionReceived>b__9_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::WinningConditionDebriefing+<>c::
     WinningConditionDebriefing_c__OnWinningConditionReceived_b__9_0
               (WinningConditionDebriefing_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,4);
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x20);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* WinningConditionDebriefing+<>c() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<>c::WinningConditionDebriefing_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WinningConditionDebriefing____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WinningConditionDebriefing____c;
  value = (WinningConditionDebriefing_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__WinningConditionDebriefing____c->static_fields->__9 = value;
  func_?(TypeInfo__WinningConditionDebriefing____c->static_fields,value);
  return;
}

