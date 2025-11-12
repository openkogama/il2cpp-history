
/* Boolean <GetItemsByItemCategory>b__0(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

bool Assembly-CSharp.dll::PlayerRepository+<>c__DisplayClass5_0::
     PlayerRepository_c_DisplayClass5_0__GetItemsByItemCategory_b__0
               (PlayerRepository_c_DisplayClass5_0 *this,
               KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ *p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
  ;
  if (p->value != (MVItem *)0x0) {
    value = (p->value->fields).itemCategoryID;
    source = (this->fields).itemCategories;
    if ((
        bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   bool_MethodInfo__System__Linq__Enumerable__Contains<int>_System__Collections__Generic__IEnumerable<int>__int_
                   );
    }
    pvVar2 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    lVar3 = FUN_?(source,pvVar2);
    if (lVar3 == 0) {
      bVar4 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_4
                        ((IEnumerable_1_System_Int32_ *)source,value,
                         (IEqualityComparer_1_System_Int32_ *)0x0,
                         (pMVar1->field7_0x38).rgctx_data[4].method);
    }
    else {
      pvVar2 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
        pvVar2 = (void *)FUN_?(pvVar2);
      }
      bVar4 = FUN_?(4,pvVar2,lVar3,value,unaff_RDI);
    }
    return bVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}

