
/* Void <OnDeleteConfirmation>b__7_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler+<>c::
     InventoryItemCubeModelHandler_c__OnDeleteConfirmation_b__7_0
               (InventoryItemCubeModelHandler_c *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

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


/* Void <OnSellClicked>b__3_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler+<>c::
     InventoryItemCubeModelHandler_c__OnSellClicked_b__3_0
               (InventoryItemCubeModelHandler_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_You_cannot_sell_your_model_throu);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_You_cannot_sell_your_model_throu,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_Error;
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  pIVar5 = x->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(x->klass->vtable).CreateErrorNotificationPopup)
                   [x->klass->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,1);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,pSVar2,ppMVar7[1]);
  return;
}


/* InventoryItemCubeModelHandler+<>c() */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler+<>c::InventoryItemCubeModelHandler_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__InventoryItemCubeModelHandler____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__InventoryItemCubeModelHandler____c;
  value = (InventoryItemCubeModelHandler_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__InventoryItemCubeModelHandler____c->static_fields->__9 = value;
  func_?(TypeInfo__InventoryItemCubeModelHandler____c->static_fields,value);
  return;
}

