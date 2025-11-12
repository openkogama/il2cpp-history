
/* Boolean <Reset>b__21_0(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+<>c::WinningConditionManager_c__Reset_b__21_0
               (WinningConditionManager_c *this,IWinningCondition *winnerCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IWinningCondition);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    FUN_?(5,TypeInfo__IWinningCondition,winnerCondition);
    return 0;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* WinningConditionManager+<>c() */

void MVWorldObject.dll::WinningConditionManager+<>c::WinningConditionManager_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WinningConditionManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WinningConditionManager_c *)FUN_?(TypeInfo__WinningConditionManager____c);
  TypeInfo__WinningConditionManager____c->static_fields->__9 = pWVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__WinningConditionManager____c->static_fields >> 0xc);
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

