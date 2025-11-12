
/* Boolean <SetParentMoverID>b__0(KeyValuePair`2[System.Int32,MVMovable]) */

bool Assembly-CSharp.dll::MVMovable+<>c__DisplayClass62_0::
     MVMovable_c_DisplayClass62_0__SetParentMoverID_b__0
               (MVMovable_c_DisplayClass62_0 *this,KeyValuePair_2_System_Int32_MVMovable_ *x,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x->value != (MVMovable *)0x0) {
    return (x->value->fields)._._._._.id == (this->fields).parentMoverID;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

