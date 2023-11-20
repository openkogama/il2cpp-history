
/* Void <AddItemToWorldFromInventory>b__31_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<>c::
     PlayerInventoryPreviewItem_c__AddItemToWorldFromInventory_b__31_0
               (PlayerInventoryPreviewItem_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <AdditionalItemSettingsPressed>b__28_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<>c::
     PlayerInventoryPreviewItem_c__AdditionalItemSettingsPressed_b__28_0
               (PlayerInventoryPreviewItem_c *this,IUIStack *handler,BaseEventData *data,
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


/* Void <OnInventoryItemFailedToLoad>b__30_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<>c::
     PlayerInventoryPreviewItem_c__OnInventoryItemFailedToLoad_b__30_0
               (PlayerInventoryPreviewItem_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Failed_to_load_item);
    func_?(&StringLiteral_The_item_could_not_be_loaded__pl);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_The_item_could_not_be_loaded__pl,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Failed_to_load_item,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowPurchasePopUp>b__34_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<>c::
     PlayerInventoryPreviewItem_c__ShowPurchasePopUp_b__34_0
               (PlayerInventoryPreviewItem_c *this,IUIStack *handler,BaseEventData *data,
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


/* PlayerInventoryPreviewItem+<>c() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<>c::PlayerInventoryPreviewItem_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerInventoryPreviewItem____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerInventoryPreviewItem____c;
  value = (PlayerInventoryPreviewItem_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__PlayerInventoryPreviewItem____c->static_fields->__9 = value;
  func_?(TypeInfo__PlayerInventoryPreviewItem____c->static_fields,value);
  return;
}

