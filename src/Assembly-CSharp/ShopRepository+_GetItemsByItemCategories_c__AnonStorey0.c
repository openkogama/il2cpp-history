
/* Boolean <>m__0(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

bool Assembly-CSharp.dll::ShopRepository+<GetItemsByItemCategories>c__AnonStorey0::
     ShopRepository_GetItemsByItemCategories_c_AnonStorey0___m__0
               (ShopRepository_GetItemsByItemCategories_c_AnonStorey0 *this,
               KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).itemCategories;
  if (source != (Int32__Array *)0x0) {
    if (source->max_length == 0) {
      return 1;
    }
    iVar1 = func_?(&p,
                            MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                           );
    if (iVar1 != 0) {
      bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_4
                        ((IEnumerable_1_KogamaControls_ *)source,
                         *(KogamaControls__Enum *)(iVar1 + 0xc),
                         bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                        );
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}

