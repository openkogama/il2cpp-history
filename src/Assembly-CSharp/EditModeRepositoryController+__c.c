
/* Void <OnConfirmed>b__2_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c::
     EditModeRepositoryController_c__OnConfirmed_b__2_0
               (EditModeRepositoryController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

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


/* Void <ProductPurchaseResponseHandler>b__4_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c::
     EditModeRepositoryController_c__ProductPurchaseResponseHandler_b__4_0
               (EditModeRepositoryController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

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


/* Void <PurchaseClientShopItem>b__3_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c::
     EditModeRepositoryController_c__PurchaseClientShopItem_b__3_0
               (EditModeRepositoryController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x80;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(4);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <PurchaseClientShopItem>b__3_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c::
     EditModeRepositoryController_c__PurchaseClientShopItem_b__3_1
               (EditModeRepositoryController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IModalPopupCreator *)&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IModalPopupCreator;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IModalPopupCreator *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* EditModeRepositoryController+<>c() */

void Assembly-CSharp.dll::EditModeRepositoryController+<>c::EditModeRepositoryController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditModeRepositoryController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__EditModeRepositoryController____c;
  value = (EditModeRepositoryController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__EditModeRepositoryController____c->static_fields->__9 = value;
  func_?(TypeInfo__EditModeRepositoryController____c->static_fields,value);
  return;
}

