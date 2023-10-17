
/* Void <OnEndDrag>b__6_0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemDragHandler+<>c::InventoryItemDragHandler_c__OnEndDrag_b__6_0
               (InventoryItemDragHandler_c *this,IPlayerInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IPlayerInventory *)&TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IPlayerInventory;
    uStack_3 = 6;
    func_?();
    return;
  }
  pIStack_1 = (IPlayerInventory *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* InventoryItemDragHandler+<>c() */

void Assembly-CSharp.dll::InventoryItemDragHandler+<>c::InventoryItemDragHandler_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__InventoryItemDragHandler____c);
    cRam_? = '\x01';
  }
  value = (InventoryItemDragHandler_c *)func_?(TypeInfo__InventoryItemDragHandler____c);
  if (value != (InventoryItemDragHandler_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__InventoryItemDragHandler____c->static_fields->__9 = value;
    func_?(TypeInfo__InventoryItemDragHandler____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

