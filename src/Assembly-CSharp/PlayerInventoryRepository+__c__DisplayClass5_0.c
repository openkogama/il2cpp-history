
/* Boolean <CountItemsWithOriginalID>b__0(InventoryItem) */

bool Assembly-CSharp.dll::PlayerInventoryRepository+<>c__DisplayClass5_0::
     PlayerInventoryRepository_c_DisplayClass5_0__CountItemsWithOriginalID_b__0
               (PlayerInventoryRepository_c_DisplayClass5_0 *this,InventoryItem *p,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((p != (InventoryItem *)0x0) && (pIVar2 = (this->fields).item, pIVar2 != (InventoryItem *)0x0))
  {
    return (p->fields).originalItemID == (pIVar2->fields).originalItemID;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

