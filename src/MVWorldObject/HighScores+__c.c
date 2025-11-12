
/* Int32 <GenerateActorScores>b__7_1(ScoreActorEntry) */

int32_t MVWorldObject.dll::HighScores+<>c::HighScores_c__GenerateActorScores_b__7_1
                  (HighScores_c *this,ScoreActorEntry *x,MethodInfo *method)

{
  if (x != (ScoreActorEntry *)0x0) {
    return (x->fields).counter;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* HighScores+<>c() */

void MVWorldObject.dll::HighScores+<>c::HighScores_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HighScores____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HighScores_c *)FUN_?(TypeInfo__HighScores____c);
  TypeInfo__HighScores____c->static_fields->__9 = pHVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__HighScores____c->static_fields >> 0xc);
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

