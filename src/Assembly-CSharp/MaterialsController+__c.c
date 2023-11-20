
/* Void <OnMaterialClicked>b__16_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsController+<>c::MaterialsController_c__OnMaterialClicked_b__16_0
               (MaterialsController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0xc;
    pIStack_2 = x;
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


/* Void <ShowInventory>b__17_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsController+<>c::MaterialsController_c__ShowInventory_b__17_0
               (MaterialsController_c *this,IUIStack *handler,BaseEventData *data,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0xc;
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


/* MaterialsController+<>c() */

void Assembly-CSharp.dll::MaterialsController+<>c::MaterialsController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialsController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MaterialsController____c;
  value = (MaterialsController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MaterialsController____c->static_fields->__9 = value;
  func_?(TypeInfo__MaterialsController____c->static_fields,value);
  return;
}

