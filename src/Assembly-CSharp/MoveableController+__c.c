
/* Boolean <UpdateMoveables>b__11_0(KeyValuePair`2[System.Int32,MVMovable]) */

bool Assembly-CSharp.dll::MoveableController+<>c::MoveableController_c__UpdateMoveables_b__11_0
               (MoveableController_c *this,KeyValuePair_2_System_Int32_MVMovable_ *x,
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
    return (x->value->fields).parentMover == (MVMovable *)0x0;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* MoveableController+<>c() */

void Assembly-CSharp.dll::MoveableController+<>c::MoveableController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MoveableController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MoveableController_c *)FUN_?(TypeInfo__MoveableController____c);
  TypeInfo__MoveableController____c->static_fields->__9 = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__MoveableController____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

