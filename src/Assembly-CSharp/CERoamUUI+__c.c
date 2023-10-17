
/* Void <EnterObject>b__9_0(IAvatarEditAnimationState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI+<>c::CERoamUUI_c__EnterObject_b__9_0
               (CERoamUUI_c *this,IAvatarEditAnimationState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pSStack_1 = (String *)&TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState;
    func_?();
    pIStack_2 = (IAvatarEditAnimationState *)&StringLiteral_TPose;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAvatarEditAnimationState *)0x0) {
    pSStack_1 = StringLiteral_TPose;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState;
    func_?(0);
    return;
  }
  pSStack_1 = (String *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Enter>b__4_0(IAvatarEditUIState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI+<>c::CERoamUUI_c__Enter_b__4_0
               (CERoamUUI_c *this,IAvatarEditUIState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAvatarEditUIState;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAvatarEditUIState *)0x0) {
    ppIStack_1 = (IAvatarEditUIState__Class **)0x2;
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


/* Void <Enter>b__4_1(IAvatarEditAnimationState, BaseEventData) */

void Assembly-CSharp.dll::CERoamUUI+<>c::CERoamUUI_c__Enter_b__4_1
               (CERoamUUI_c *this,IAvatarEditAnimationState *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pSStack_1 = (String *)&TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState;
    func_?();
    pIStack_2 = (IAvatarEditAnimationState *)&StringLiteral_Idle;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAvatarEditAnimationState *)0x0) {
    pSStack_1 = StringLiteral_Idle;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAvatarEditAnimationState;
    func_?(0);
    return;
  }
  pSStack_1 = (String *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CERoamUUI+<>c() */

void Assembly-CSharp.dll::CERoamUUI+<>c::CERoamUUI_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CERoamUUI____c);
    cRam_? = '\x01';
  }
  value = (CERoamUUI_c *)func_?(TypeInfo__CERoamUUI____c);
  if (value != (CERoamUUI_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__CERoamUUI____c->static_fields->__9 = value;
    func_?(TypeInfo__CERoamUUI____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

