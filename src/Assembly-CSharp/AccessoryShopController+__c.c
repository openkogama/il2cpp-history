
/* Void <Attach>b__42_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c::AccessoryShopController_c__Attach_b__42_0
               (AccessoryShopController_c *this,IModalPopupCreator *x,BaseEventData *y,
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


/* Void <AttacherFinished>b__43_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c::
     AccessoryShopController_c__AttacherFinished_b__43_0
               (AccessoryShopController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <AttacherFinished>b__43_1(IAccessoryChanged, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c::
     AccessoryShopController_c__AttacherFinished_b__43_1
               (AccessoryShopController_c *this,IAccessoryChanged *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IAccessoryChanged *)&TypeInfo__UnityEngine__EventSystems__IAccessoryChanged;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAccessoryChanged *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IAccessoryChanged;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (IAccessoryChanged *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 <GetAccessoryDataFromCategoryType>b__40_3(AccessoryDataClient) */

int32_t Assembly-CSharp.dll::AccessoryShopController+<>c::
        AccessoryShopController_c__GetAccessoryDataFromCategoryType_b__40_3
                  (AccessoryShopController_c *this,AccessoryDataClient *o,MethodInfo *method)

{
  if (o != (AccessoryDataClient *)0x0) {
    iVar1 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
            AccessoryData_get_DiscountedPrice((AccessoryData *)o,(MethodInfo *)0x0);
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Void <InventoryChanged>b__33_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c::
     AccessoryShopController_c__InventoryChanged_b__33_0
               (AccessoryShopController_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnPop>b__37_0(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c::AccessoryShopController_c__OnPop_b__37_0
               (AccessoryShopController_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IEditStateCommands;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    ppIStack_1 = (IEditStateCommands__Class **)0x34;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__IEditStateCommands;
    func_?(0);
    return;
  }
  ppIStack_1 = (IEditStateCommands__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <ReadyCallback>b__25_0(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c::
     AccessoryShopController_c__ReadyCallback_b__25_0
               (AccessoryShopController_c *this,IEditStateCommands *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IEditStateCommands;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    ppIStack_1 = (IEditStateCommands__Class **)0x36;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__IEditStateCommands;
    func_?(0);
    return;
  }
  ppIStack_1 = (IEditStateCommands__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <ReadyCallback>b__25_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<>c::
     AccessoryShopController_c__ReadyCallback_b__25_1
               (AccessoryShopController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

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


/* AccessoryShopController+<>c() */

void Assembly-CSharp.dll::AccessoryShopController+<>c::AccessoryShopController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryShopController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryShopController____c;
  value = (AccessoryShopController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AccessoryShopController____c->static_fields->__9 = value;
  func_?(TypeInfo__AccessoryShopController____c->static_fields,value);
  return;
}

