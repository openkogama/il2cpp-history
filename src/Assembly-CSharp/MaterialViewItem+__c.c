
/* Void <OnClick>b__11_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::MaterialViewItem+<>c::MaterialViewItem_c__OnClick_b__11_0
               (MaterialViewItem_c *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Destructible_material_only_avail);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Destructible_material_only_avail,(MethodInfo *)0x0);
  pSVar2 = ::StringLiteral__;
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  uVar5 = (x->klass->_1).interface_offsets_count;
  if (uVar5 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        pVVar6 = &(x->klass->vtable).Create_3 + x->klass->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
  (*pVVar6->methodPtr)(x,pSVar1,pSVar2,pVVar6->method);
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
  value = (MaterialViewItem_c *)func_?(TypeInfo__MaterialViewItem____c);
  if (value != (MaterialViewItem_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__MaterialViewItem____c->static_fields->__9 = value;
    func_?(TypeInfo__MaterialViewItem____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

