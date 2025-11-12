
/* Int32 <SortByHitDistance>b__18_0(GameObjectRayHit, GameObjectRayHit) */

int32_t Assembly-CSharp.dll::RTG::GameObjectRayHit+<>c::
        GameObjectRayHit_c__SortByHitDistance_b__18_0
                  (GameObjectRayHit_c *this,GameObjectRayHit *h0,GameObjectRayHit *h1,
                  MethodInfo *method)

{
  if ((h0 == (GameObjectRayHit *)0x0) || (h1 == (GameObjectRayHit *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  fVar3 = (h1->fields)._hitEnter;
  fVar4 = (h0->fields)._hitEnter;
  if (fVar4 < fVar3) {
    return -1;
  }
  if (fVar4 <= fVar3) {
    if (fVar4 == fVar3) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar4)) {
      return (0x7f800000 < (uint)ABS(fVar3)) - 1;
    }
  }
  return 1;
}


/* GameObjectRayHit+<>c() */

void Assembly-CSharp.dll::RTG::GameObjectRayHit+<>c::GameObjectRayHit_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectRayHit____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObjectRayHit_c *)FUN_?(TypeInfo__RTG__GameObjectRayHit____c);
  TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9 = pGVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__RTG__GameObjectRayHit____c->static_fields >> 0xc);
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

