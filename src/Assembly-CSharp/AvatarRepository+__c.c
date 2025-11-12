
/* Int32 <GetAvatars>b__5_0(AvatarRepositoryItem) */

int32_t Assembly-CSharp.dll::AvatarRepository+<>c::AvatarRepository_c__GetAvatars_b__5_0
                  (AvatarRepository_c *this,AvatarRepositoryItem *x,MethodInfo *method)

{
  if (x != (AvatarRepositoryItem *)0x0) {
    return (x->fields).slotPosition;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* AvatarRepository+<>c() */

void Assembly-CSharp.dll::AvatarRepository+<>c::AvatarRepository_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarRepository____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarRepository_c *)FUN_?(TypeInfo__AvatarRepository____c);
  TypeInfo__AvatarRepository____c->static_fields->__9 = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AvatarRepository____c->static_fields >> 0xc);
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

