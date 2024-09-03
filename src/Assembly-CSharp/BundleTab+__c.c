
/* Void <SetAsSelected>b__17_0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::BundleTab+<>c::BundleTab_c__SetAsSelected_b__17_0
               (BundleTab_c *this,IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    ppIStack_1 = (IAccessoryClicked__Class **)0x0;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?(1);
    return;
  }
  ppIStack_1 = (IAccessoryClicked__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <SetAsSelected>b__17_1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::BundleTab+<>c::BundleTab_c__SetAsSelected_b__17_1
               (BundleTab_c *this,IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    ppIStack_1 = (IAccessoryClicked__Class **)0xfe;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?(3);
    return;
  }
  ppIStack_1 = (IAccessoryClicked__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <SetAsSelected>b__17_2(IBundleController, BaseEventData) */

void Assembly-CSharp.dll::BundleTab+<>c::BundleTab_c__SetAsSelected_b__17_2
               (BundleTab_c *this,IBundleController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IBundleController *)&TypeInfo__UnityEngine__EventSystems__IBundleController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IBundleController *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IBundleController;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (IBundleController *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* BundleTab+<>c() */

void Assembly-CSharp.dll::BundleTab+<>c::BundleTab_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BundleTab____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BundleTab____c;
  value = (BundleTab_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__BundleTab____c->static_fields->__9 = value;
  func_?(TypeInfo__BundleTab____c->static_fields,value);
  return;
}

