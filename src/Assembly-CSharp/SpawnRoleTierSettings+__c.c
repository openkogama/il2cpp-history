
/* Void <SelectTier>b__10_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleTierSettings+<>c::SpawnRoleTierSettings_c__SelectTier_b__10_0
               (SpawnRoleTierSettings_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* SpawnRoleTierSettings+<>c() */

void Assembly-CSharp.dll::SpawnRoleTierSettings+<>c::SpawnRoleTierSettings_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SpawnRoleTierSettings____c);
    cRam_? = '\x01';
  }
  value = (SpawnRoleTierSettings_c *)func_?(TypeInfo__SpawnRoleTierSettings____c);
  if (value != (SpawnRoleTierSettings_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__SpawnRoleTierSettings____c->static_fields->__9 = value;
    func_?(TypeInfo__SpawnRoleTierSettings____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

