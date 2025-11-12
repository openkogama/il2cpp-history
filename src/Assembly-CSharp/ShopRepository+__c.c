
/* Int32 <GetItemsByItemCategories>b__8_1(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

int32_t Assembly-CSharp.dll::ShopRepository+<>c::ShopRepository_c__GetItemsByItemCategories_b__8_1
                  (ShopRepository_c *this,KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ *pair,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Key__
                 );
    LOCK();
    UNLOCK();
    cRam_? = 1;
    return pair->key;
  }
  return pair->key;
}


/* MVItem <GetItemsByItemCategories>b__8_2(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

MVItem * Assembly-CSharp.dll::ShopRepository+<>c::ShopRepository_c__GetItemsByItemCategories_b__8_2
                   (ShopRepository_c *this,KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ *pair,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = 1;
    return pair->value;
  }
  return pair->value;
}


/* ShopRepository+<>c() */

void Assembly-CSharp.dll::ShopRepository+<>c::ShopRepository_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ShopRepository____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (ShopRepository_c *)FUN_?(TypeInfo__ShopRepository____c);
  TypeInfo__ShopRepository____c->static_fields->__9 = pSVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__ShopRepository____c->static_fields >> 0xc);
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

