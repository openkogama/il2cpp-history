
/* Int32 <ReorganizeBySlotPositions>b__11_0(ShopItem) */

int32_t Assembly-CSharp.dll::ClientShopRepository+<>c::
        ClientShopRepository_c__ReorganizeBySlotPositions_b__11_0
                  (ClientShopRepository_c *this,ShopItem *o,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (o != (ShopItem *)0x0) {
    return (o->fields).slotPosition;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* ClientShopRepository+<>c() */

void Assembly-CSharp.dll::ClientShopRepository+<>c::ClientShopRepository_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ClientShopRepository____c);
    cRam_? = '\x01';
  }
  value = (ClientShopRepository_c *)func_?(TypeInfo__ClientShopRepository____c);
  if (value != (ClientShopRepository_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ClientShopRepository____c->static_fields->__9 = value;
    func_?(TypeInfo__ClientShopRepository____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

