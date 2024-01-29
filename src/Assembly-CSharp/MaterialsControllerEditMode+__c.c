
/* Void <OnPop>b__12_0(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode+<>c::
     MaterialsControllerEditMode_c__OnPop_b__12_0
               (MaterialsControllerEditMode_c *this,IShortcutKeyUnRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IShortcutKeyUnRegister *)0x0) {
    ppIStack_1 = (IShortcutKeyUnRegister__Class **)0x0;
    puStack_2 = (undefined *)0x16;
    pIStack_3 = x;
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister);
    return;
  }
  ppIStack_1 = (IShortcutKeyUnRegister__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Open>b__8_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode+<>c::
     MaterialsControllerEditMode_c__Open_b__8_1
               (MaterialsControllerEditMode_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x12;
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


/* MaterialsControllerEditMode+<>c() */

void Assembly-CSharp.dll::MaterialsControllerEditMode+<>c::MaterialsControllerEditMode_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialsControllerEditMode____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MaterialsControllerEditMode____c;
  value = (MaterialsControllerEditMode_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MaterialsControllerEditMode____c->static_fields->__9 = value;
  func_?(TypeInfo__MaterialsControllerEditMode____c->static_fields,value);
  return;
}

