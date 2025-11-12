
/* Boolean <CountItemsWithOriginalID>b__0(InventoryItem) */

bool Assembly-CSharp.dll::PlayerInventoryRepository+<>c__DisplayClass5_0::
     PlayerInventoryRepository_c_DisplayClass5_0__CountItemsWithOriginalID_b__0
               (PlayerInventoryRepository_c_DisplayClass5_0 *this,InventoryItem *p,
               MethodInfo *method)

{
  if ((p != (InventoryItem *)0x0) && (pIVar1 = (this->fields).item, pIVar1 != (InventoryItem *)0x0))
  {
    return (p->fields).originalItemID == (pIVar1->fields).originalItemID;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

