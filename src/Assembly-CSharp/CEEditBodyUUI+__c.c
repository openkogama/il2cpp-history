
/* Void <Enter>b__6_0(IAvatarEditUIState, BaseEventData) */

void Assembly-CSharp.dll::CEEditBodyUUI+<>c::CEEditBodyUUI_c__Enter_b__6_0
               (CEEditBodyUUI_c *this,IAvatarEditUIState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAvatarEditUIState;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAvatarEditUIState *)0x0) {
    ppIStack_1 = (IAvatarEditUIState__Class **)0x1;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAvatarEditUIState;
    func_?(0);
    return;
  }
  ppIStack_1 = (IAvatarEditUIState__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CEEditBodyUUI+<>c() */

void Assembly-CSharp.dll::CEEditBodyUUI+<>c::CEEditBodyUUI_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditBodyUUI____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CEEditBodyUUI____c;
  value = (CEEditBodyUUI_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__CEEditBodyUUI____c->static_fields->__9 = value;
  func_?(TypeInfo__CEEditBodyUUI____c->static_fields,value);
  return;
}

