
/* Void <UnRegister>b__37_1(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase+<>c::
     FirstTimeActivatableElementBase_c__UnRegister_b__37_1
               (FirstTimeActivatableElementBase_c *this,IFirstTimeElementActivator *x,
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


/* FirstTimeActivatableElementBase+<>c() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase+<>c::
     FirstTimeActivatableElementBase_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeActivatableElementBase____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableElementBase____c;
  value = (FirstTimeActivatableElementBase_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__FirstTimeActivatableElementBase____c->static_fields->__9 = value;
  func_?(TypeInfo__FirstTimeActivatableElementBase____c->static_fields,value);
  return;
}

