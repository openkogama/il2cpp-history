
/* Boolean <>m__0(KeyValuePair`2[System.Int32,MV.WorldObject.MVItem]) */

bool Assembly-CSharp.dll::PlayerRepository+<CountItemsWithOriginalID>c__AnonStorey1::
     PlayerRepository_CountItemsWithOriginalID_c_AnonStorey1___m__0
               (PlayerRepository_CountItemsWithOriginalID_c_AnonStorey1 *this,
               KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_ p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&p,
                          MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                         );
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 0x14) == (this->fields).originalId;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

