
/* Boolean <SetParentMoverID>b__0(KeyValuePair`2[System.Int32,MVMovable]) */

bool Assembly-CSharp.dll::MVMovable+<>c__DisplayClass62_0::
     MVMovable_c_DisplayClass62_0__SetParentMoverID_b__0
               (MVMovable_c_DisplayClass62_0 *this,KeyValuePair_2_System_Int32_MVMovable_ x,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
    ;
    func_?();
    cRam_? = '\x01';
  }
  if (x.value != (MVMovable *)0x0) {
    return ((x.value)->fields)._._._._.id == (this->fields).parentMoverID;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

