
/* Void <BackToShop>b__50_0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView+<>c::AccessoryView_c__BackToShop_b__50_0
               (AccessoryView_c *this,IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    ppIStack_1 = (IAccessoryClicked__Class **)0x1;
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


/* Void <BackToShop>b__50_1(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView+<>c::AccessoryView_c__BackToShop_b__50_1
               (AccessoryView_c *this,IAccessoryInventoryControl *x,BaseEventData *y,
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
    uStack_3 = 3;
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


/* Void <EquipPopupResultCallback>b__52_0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView+<>c::AccessoryView_c__EquipPopupResultCallback_b__52_0
               (AccessoryView_c *this,IAccessoryClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    ppIStack_1 = (IAccessoryClicked__Class **)0x1;
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


/* Void <EquipPopupResultCallback>b__52_1(IAccessoryInventoryControl, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView+<>c::AccessoryView_c__EquipPopupResultCallback_b__52_1
               (AccessoryView_c *this,IAccessoryInventoryControl *x,BaseEventData *y,
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
    uStack_3 = 3;
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


/* Void <Pop>b__46_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryView+<>c::AccessoryView_c__Pop_b__46_0
               (AccessoryView_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* AccessoryView+<>c() */

void Assembly-CSharp.dll::AccessoryView+<>c::AccessoryView_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryView____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryView____c;
  value = (AccessoryView_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AccessoryView____c->static_fields->__9 = value;
  func_?(TypeInfo__AccessoryView____c->static_fields,value);
  return;
}

