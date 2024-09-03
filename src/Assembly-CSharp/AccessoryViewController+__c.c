
/* Void <PurchasedBundle>b__18_0(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryViewController+<>c::
     AccessoryViewController_c__PurchasedBundle_b__18_0
               (AccessoryViewController_c *this,IAccessoryInventoryControl *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IAccessoryInventoryControl *)
                &TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAccessoryInventoryControl *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IAccessoryInventoryControl;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IAccessoryInventoryControl *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AccessoryViewController+<>c() */

void Assembly-CSharp.dll::AccessoryViewController+<>c::AccessoryViewController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryViewController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryViewController____c;
  value = (AccessoryViewController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AccessoryViewController____c->static_fields->__9 = value;
  func_?(TypeInfo__AccessoryViewController____c->static_fields,value);
  return;
}

