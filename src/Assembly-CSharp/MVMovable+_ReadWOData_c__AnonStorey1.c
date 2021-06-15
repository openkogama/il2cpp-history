
/* Boolean <>m__0(KeyValuePair`2[System.Int32,MVMovable]) */

bool Assembly-CSharp.dll::MVMovable+<ReadWOData>c__AnonStorey1::
     MVMovable_ReadWOData_c_AnonStorey1___m__0
               (MVMovable_ReadWOData_c_AnonStorey1 *this,KeyValuePair_2_System_Int32_MVMovable_ x,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Collection_1_VoxelHit_ *)
            func_?(&x,
                            MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                           );
  if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    return pIVar1 == (IList_1_VoxelHit_ *)(this->fields).newParentMoverID;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

