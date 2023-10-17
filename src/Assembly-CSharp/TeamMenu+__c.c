
/* Void <StartPlaying>b__11_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TeamMenu+<>c::TeamMenu_c__StartPlaying_b__11_0
               (TeamMenu_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Int32 <Start>b__5_0(TeamData) */

int32_t Assembly-CSharp.dll::TeamMenu+<>c::TeamMenu_c__Start_b__5_0
                  (TeamMenu_c *this,TeamData *teamData,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (teamData != (TeamData *)0x0) {
    return (teamData->fields).playersCount;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* TeamMenu+<>c() */

void Assembly-CSharp.dll::TeamMenu+<>c::TeamMenu_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TeamMenu____c);
    cRam_? = '\x01';
  }
  value = (TeamMenu_c *)func_?(TypeInfo__TeamMenu____c);
  if (value != (TeamMenu_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__TeamMenu____c->static_fields->__9 = value;
    func_?(TypeInfo__TeamMenu____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

