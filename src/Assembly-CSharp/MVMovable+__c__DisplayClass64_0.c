
/* Boolean <ReadWOData>b__0(KeyValuePair`2[System.Int32,MVMovable]) */

bool Assembly-CSharp.dll::MVMovable+<>c__DisplayClass64_0::
     MVMovable_c_DisplayClass64_0__ReadWOData_b__0
               (MVMovable_c_DisplayClass64_0 *this,KeyValuePair_2_System_Int32_MVMovable_ x,
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
    return ((x.value)->fields)._._._._.id == (this->fields).newParentMoverID;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

