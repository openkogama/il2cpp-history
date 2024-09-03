
/* Void <ShowPurchasePopUp>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EditModeClientShopItem+<>c::
     EditModeClientShopItem_c__ShowPurchasePopUp_b__13_0
               (EditModeClientShopItem_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x8;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <SlotPressed>b__12_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EditModeClientShopItem+<>c::EditModeClientShopItem_c__SlotPressed_b__12_0
               (EditModeClientShopItem_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x4;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* EditModeClientShopItem+<>c() */

void Assembly-CSharp.dll::EditModeClientShopItem+<>c::EditModeClientShopItem_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditModeClientShopItem____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__EditModeClientShopItem____c;
  value = (EditModeClientShopItem_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__EditModeClientShopItem____c->static_fields->__9 = value;
  func_?(TypeInfo__EditModeClientShopItem____c->static_fields,value);
  return;
}

