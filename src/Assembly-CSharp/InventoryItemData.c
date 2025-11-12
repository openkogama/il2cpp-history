
/* InventoryItemData(Int32, Int32, Int32, String) */

void Assembly-CSharp.dll::InventoryItemData::InventoryItemData__ctor
               (InventoryItemData *this,int32_t id,int32_t slotIndex,int32_t categoryId,String *name
               ,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).name = name;
  (this->fields).slotIndex = slotIndex;
  (this->fields).categoryId = categoryId;
  if (bVar1) {
    (this->fields).id = id;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).name >> 0xc);
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
  (this->fields).id = id;
  return;
}

