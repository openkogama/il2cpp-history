
/* MVPlayerContainer+<>c() */

void Assembly-CSharp.dll::MVPlayerContainer+<>c::MVPlayerContainer_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPlayerContainer____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVPlayerContainer_c *)FUN_?(TypeInfo__MVPlayerContainer____c);
  TypeInfo__MVPlayerContainer____c->static_fields->__9 = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__MVPlayerContainer____c->static_fields >> 0xc);
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


/* Boolean <get_ActivePlayers>b__28_0(MVPlayer) */

bool Assembly-CSharp.dll::MVPlayerContainer+<>c::MVPlayerContainer_c__get_ActivePlayers_b__28_0
               (MVPlayerContainer_c *this,MVPlayer *mvPlayer,MethodInfo *method)

{
  if (mvPlayer != (MVPlayer *)0x0) {
    return (mvPlayer->fields).playerState != 3;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

