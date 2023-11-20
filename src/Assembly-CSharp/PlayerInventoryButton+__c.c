
/* Void <OnClick>b__0_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryButton+<>c::PlayerInventoryButton_c__OnClick_b__0_0
               (PlayerInventoryButton_c *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    ppIStack_1 = (IPlayerInventory__Class **)0x1;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    func_?(0);
    return;
  }
  ppIStack_1 = (IPlayerInventory__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlayerInventoryButton+<>c() */

void Assembly-CSharp.dll::PlayerInventoryButton+<>c::PlayerInventoryButton_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerInventoryButton____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerInventoryButton____c;
  value = (PlayerInventoryButton_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__PlayerInventoryButton____c->static_fields->__9 = value;
  func_?(TypeInfo__PlayerInventoryButton____c->static_fields,value);
  return;
}

