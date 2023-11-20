
/* Void <OnClick>b__11_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::MaterialViewItem+<>c::MaterialViewItem_c__OnClick_b__11_0
               (MaterialViewItem_c *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_Destructible_material_only_avail);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Destructible_material_only_avail,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnClick>b__11_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialViewItem+<>c::MaterialViewItem_c__OnClick_b__11_2
               (MaterialViewItem_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

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


/* Void <OnInfoClick>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialViewItem+<>c::MaterialViewItem_c__OnInfoClick_b__13_0
               (MaterialViewItem_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method)

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


/* MaterialViewItem+<>c() */

void Assembly-CSharp.dll::MaterialViewItem+<>c::MaterialViewItem_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialViewItem____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MaterialViewItem____c;
  value = (MaterialViewItem_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MaterialViewItem____c->static_fields->__9 = value;
  func_?(TypeInfo__MaterialViewItem____c->static_fields,value);
  return;
}

