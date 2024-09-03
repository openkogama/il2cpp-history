
/* Void <AddToMarket>b__13_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<>c::
     InventoryItemPreviewSell_c__AddToMarket_b__13_0
               (InventoryItemPreviewSell_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Item_name_and_description_requir);
    func_?(&StringLiteral_Error__);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Item_name_and_description_requir,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Error__,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnAddToMarketplaceReturn>b__16_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<>c::
     InventoryItemPreviewSell_c__OnAddToMarketplaceReturn_b__16_0
               (InventoryItemPreviewSell_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnAddToMarketplaceReturn>b__16_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<>c::
     InventoryItemPreviewSell_c__OnAddToMarketplaceReturn_b__16_2
               (InventoryItemPreviewSell_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnRemoveFromMarketplace>b__15_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<>c::
     InventoryItemPreviewSell_c__OnRemoveFromMarketplace_b__15_0
               (InventoryItemPreviewSell_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* InventoryItemPreviewSell+<>c() */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<>c::InventoryItemPreviewSell_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__InventoryItemPreviewSell____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__InventoryItemPreviewSell____c;
  value = (InventoryItemPreviewSell_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__InventoryItemPreviewSell____c->static_fields->__9 = value;
  func_?(TypeInfo__InventoryItemPreviewSell____c->static_fields,value);
  return;
}

