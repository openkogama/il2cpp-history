
/* Boolean <GetItemsByItemCategory>b__0(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

bool Assembly-CSharp.dll::PlayerRepository+<>c__DisplayClass5_0::
     PlayerRepository_c_DisplayClass5_0__GetItemsByItemCategory_b__0
               (PlayerRepository_c_DisplayClass5_0 *this,
               KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (p.value != (MVItem *)0x0) {
    bVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_2
                      ((IEnumerable_1_System_Object_ *)(this->fields).itemCategories,
                       (Object *)((p.value)->fields).itemCategoryID,
                       bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}

