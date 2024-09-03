
/* Void <StartPlaying>b__0_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BriefingPlayButton+<>c::BriefingPlayButton_c__StartPlaying_b__0_0
               (BriefingPlayButton_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    pIStack_1 = handler;
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


/* BriefingPlayButton+<>c() */

void Assembly-CSharp.dll::BriefingPlayButton+<>c::BriefingPlayButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BriefingPlayButton____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BriefingPlayButton____c;
  value = (BriefingPlayButton_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__BriefingPlayButton____c->static_fields->__9 = value;
  func_?(TypeInfo__BriefingPlayButton____c->static_fields,value);
  return;
}

