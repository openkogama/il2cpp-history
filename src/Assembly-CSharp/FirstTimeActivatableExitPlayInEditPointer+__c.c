
/* Void <Update>b__8_1(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer+<>c::
     FirstTimeActivatableExitPlayInEditPointer_c__Update_b__8_1
               (FirstTimeActivatableExitPlayInEditPointer_c *this,IFirstTimeElementActivator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IFirstTimeElementActivator *)
                &TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IFirstTimeElementActivator *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeActivatableExitPlayInEditPointer+<>c() */

void Assembly-CSharp.dll::FirstTimeActivatableExitPlayInEditPointer+<>c::
     FirstTimeActivatableExitPlayInEditPointer_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c);
    cRam_? = '\x01';
  }
  value = (FirstTimeActivatableExitPlayInEditPointer_c *)
          func_?(TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c);
  if (value != (FirstTimeActivatableExitPlayInEditPointer_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c->static_fields->__9 = value;
    func_?(TypeInfo__FirstTimeActivatableExitPlayInEditPointer____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

