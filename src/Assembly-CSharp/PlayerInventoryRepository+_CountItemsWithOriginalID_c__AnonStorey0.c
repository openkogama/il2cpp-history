
/* Boolean <>m__0(InventoryItem) */

bool Assembly-CSharp.dll::PlayerInventoryRepository+<CountItemsWithOriginalID>c__AnonStorey0::
     PlayerInventoryRepository_CountItemsWithOriginalID_c_AnonStorey0___m__0
               (PlayerInventoryRepository_CountItemsWithOriginalID_c_AnonStorey0 *this,
               InventoryItem *p,MethodInfo *method)

{
  if ((p != (InventoryItem *)0x0) && (pIVar1 = (this->fields).item, pIVar1 != (InventoryItem *)0x0))
  {
    return (p->fields).originalItemID == (pIVar1->fields).originalItemID;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

