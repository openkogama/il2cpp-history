
/* Int32 <Clone>b__15_0(MVWorldObjectClient, MVWorldObjectClient) */

int32_t Assembly-CSharp.dll::MVGroup+<>c::MVGroup_c__Clone_b__15_0
                  (MVGroup_c *this,MVWorldObjectClient *w1,MVWorldObjectClient *w2,
                  MethodInfo *method)

{
  if ((w1 != (MVWorldObjectClient *)0x0) && (w2 != (MVWorldObjectClient *)0x0)) {
    iVar1 = (w2->fields)._.id;
    iVar2 = (w1->fields)._.id;
    if (iVar1 <= iVar2) {
      return (int32_t)(iVar1 < iVar2);
    }
    return -1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* MVGroup+<>c() */

void Assembly-CSharp.dll::MVGroup+<>c::MVGroup_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGroup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVGroup_c *)FUN_?(TypeInfo__MVGroup____c);
  TypeInfo__MVGroup____c->static_fields->__9 = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__MVGroup____c->static_fields >> 0xc);
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

