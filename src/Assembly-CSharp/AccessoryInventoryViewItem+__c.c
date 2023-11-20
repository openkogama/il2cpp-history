
/* Void <OnPurchasePopupPop>b__33_0(IInventoryChanged, BaseEventData) */

void Assembly-CSharp.dll::AccessoryInventoryViewItem+<>c::
     AccessoryInventoryViewItem_c__OnPurchasePopupPop_b__33_0
               (AccessoryInventoryViewItem_c *this,IInventoryChanged *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IInventoryChanged *)&TypeInfo__UnityEngine__EventSystems__IInventoryChanged;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IInventoryChanged *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IInventoryChanged;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (IInventoryChanged *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AccessoryInventoryViewItem+<>c() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem+<>c::AccessoryInventoryViewItem_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryInventoryViewItem____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AccessoryInventoryViewItem____c;
  value = (AccessoryInventoryViewItem_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AccessoryInventoryViewItem____c->static_fields->__9 = value;
  func_?(TypeInfo__AccessoryInventoryViewItem____c->static_fields,value);
  return;
}

