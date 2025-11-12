
/* Int32 <Awake>b__8_0(KeyFrameCallback, KeyFrameCallback) */

int32_t Assembly-CSharp.dll::MoveAnimation+<>c::MoveAnimation_c__Awake_b__8_0
                  (MoveAnimation_c *this,KeyFrameCallback *a,KeyFrameCallback *b,MethodInfo *method)

{
  if ((a != (KeyFrameCallback *)0x0) && (b != (KeyFrameCallback *)0x0)) {
    return (a->fields).keyFrameIndex - (b->fields).keyFrameIndex;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* MoveAnimation+<>c() */

void Assembly-CSharp.dll::MoveAnimation+<>c::MoveAnimation_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MoveAnimation____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MoveAnimation_c *)FUN_?(TypeInfo__MoveAnimation____c);
  TypeInfo__MoveAnimation____c->static_fields->__9 = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__MoveAnimation____c->static_fields >> 0xc);
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

