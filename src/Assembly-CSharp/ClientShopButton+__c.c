
/* Void <OnClick>b__0_0(IOpenClientShop, BaseEventData) */

void Assembly-CSharp.dll::ClientShopButton+<>c::ClientShopButton_c__OnClick_b__0_0
               (ClientShopButton_c *this,IOpenClientShop *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IOpenClientShop;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IOpenClientShop *)0x0) {
    ppIStack_1 = (IOpenClientShop__Class **)0x1;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IOpenClientShop;
    func_?(0);
    return;
  }
  ppIStack_1 = (IOpenClientShop__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ClientShopButton+<>c() */

void Assembly-CSharp.dll::ClientShopButton+<>c::ClientShopButton_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ClientShopButton____c);
    cRam_? = '\x01';
  }
  value = (ClientShopButton_c *)func_?(TypeInfo__ClientShopButton____c);
  if (value != (ClientShopButton_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ClientShopButton____c->static_fields->__9 = value;
    func_?(TypeInfo__ClientShopButton____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

