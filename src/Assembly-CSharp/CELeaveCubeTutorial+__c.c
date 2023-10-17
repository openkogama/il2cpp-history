
/* Void <Enter>b__0_0(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::CELeaveCubeTutorial+<>c::CELeaveCubeTutorial_c__Enter_b__0_0
               (CELeaveCubeTutorial_c *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IAvatarSetBodyGroup *)&TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAvatarSetBodyGroup *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup;
    uStack_3 = 1;
    func_?();
    return;
  }
  pIStack_1 = (IAvatarSetBodyGroup *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CELeaveCubeTutorial+<>c() */

void Assembly-CSharp.dll::CELeaveCubeTutorial+<>c::CELeaveCubeTutorial_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CELeaveCubeTutorial____c);
    cRam_? = '\x01';
  }
  value = (CELeaveCubeTutorial_c *)func_?(TypeInfo__CELeaveCubeTutorial____c);
  if (value != (CELeaveCubeTutorial_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__CELeaveCubeTutorial____c->static_fields->__9 = value;
    func_?(TypeInfo__CELeaveCubeTutorial____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

