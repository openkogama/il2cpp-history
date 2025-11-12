
/* SharedCollisionFunctions+<>c() */

void Assembly-CSharp.dll::SharedCollisionFunctions+<>c::SharedCollisionFunctions_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCollisionFunctions____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SharedCollisionFunctions_c *)FUN_?(TypeInfo__SharedCollisionFunctions____c);
  TypeInfo__SharedCollisionFunctions____c->static_fields->__9 = pSVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__SharedCollisionFunctions____c->static_fields >> 0xc);
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

