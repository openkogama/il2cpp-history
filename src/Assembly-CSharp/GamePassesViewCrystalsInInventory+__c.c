
/* Void <HighlightObject>b__3_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c::
     GamePassesViewCrystalsInInventory_c__HighlightObject_b__3_0
               (GamePassesViewCrystalsInInventory_c *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x20;
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


/* Void <ProductPurchaseResponseHandler>b__10_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c::
     GamePassesViewCrystalsInInventory_c__ProductPurchaseResponseHandler_b__10_0
               (GamePassesViewCrystalsInInventory_c *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

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


/* Void <PurchaseClientShopItem>b__9_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c::
     GamePassesViewCrystalsInInventory_c__PurchaseClientShopItem_b__9_0
               (GamePassesViewCrystalsInInventory_c *this,IModalPopupCreator *x,BaseEventData *y,
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


/* GamePassesViewCrystalsInInventory+<>c() */

void Assembly-CSharp.dll::GamePassesViewCrystalsInInventory+<>c::
     GamePassesViewCrystalsInInventory_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesViewCrystalsInInventory____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesViewCrystalsInInventory____c;
  value = (GamePassesViewCrystalsInInventory_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields->__9 = value;
  func_?(TypeInfo__GamePassesViewCrystalsInInventory____c->static_fields,value);
  return;
}

