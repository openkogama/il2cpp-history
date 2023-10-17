
/* Boolean <CountItemsWithOriginalID>b__0(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

bool Assembly-CSharp.dll::PlayerRepository+<>c__DisplayClass6_0::
     PlayerRepository_c_DisplayClass6_0__CountItemsWithOriginalID_b__0
               (PlayerRepository_c_DisplayClass6_0 *this,
               KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
    ;
    func_?();
    cRam_? = '\x01';
  }
  if (p.value != (MVItem *)0x0) {
    return ((p.value)->fields).originalItemID == (this->fields).originalId;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

