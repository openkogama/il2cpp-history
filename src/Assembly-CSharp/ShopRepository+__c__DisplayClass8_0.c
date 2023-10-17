
/* Boolean <GetItemsByItemCategories>b__0(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

bool Assembly-CSharp.dll::ShopRepository+<>c__DisplayClass8_0::
     ShopRepository_c_DisplayClass8_0__GetItemsByItemCategories_b__0
               (ShopRepository_c_DisplayClass8_0 *this,
               KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).itemCategories;
  if (pIVar1 != (Int32__Array *)0x0) {
    if (pIVar1->max_length == 0) {
      return 1;
    }
    if (p.value != (MVItem *)0x0) {
      bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_2
                        ((IEnumerable_1_System_Object_ *)(this->fields).itemCategories,
                         (Object *)((p.value)->fields).itemCategoryID,
                         bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                        );
      return bVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}

