
/* Int32 <ReorganizeBySlotPositions>b__11_0(ShopItem) */

int32_t Assembly-CSharp.dll::ClientShopRepository+<>c::
        ClientShopRepository_c__ReorganizeBySlotPositions_b__11_0
                  (ClientShopRepository_c *this,ShopItem *o,MethodInfo *method)

{
  if (o != (ShopItem *)0x0) {
    return (o->fields).slotPosition;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* ClientShopRepository+<>c() */

void Assembly-CSharp.dll::ClientShopRepository+<>c::ClientShopRepository_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ClientShopRepository____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (ClientShopRepository_c *)FUN_?(TypeInfo__ClientShopRepository____c);
  TypeInfo__ClientShopRepository____c->static_fields->__9 = pCVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__ClientShopRepository____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

