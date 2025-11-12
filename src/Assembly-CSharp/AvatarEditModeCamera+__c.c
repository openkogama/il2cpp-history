
/* Boolean <ResetPosition>b__2_0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeCamera+<>c::AvatarEditModeCamera_c__ResetPosition_b__2_0
               (AvatarEditModeCamera_c *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVSpawnPointBlue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClient *)0x0;
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (MVSpawnPointBlue__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       TypeInfo__MVSpawnPointBlue)) {
      bVar3 = false;
    }
    if (bVar3) {
      pMVar1 = wo;
    }
  }
  return pMVar1 != (MVWorldObjectClient *)0x0;
}


/* AvatarEditModeCamera+<>c() */

void Assembly-CSharp.dll::AvatarEditModeCamera+<>c::AvatarEditModeCamera_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarEditModeCamera____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarEditModeCamera_c *)FUN_?(TypeInfo__AvatarEditModeCamera____c);
  TypeInfo__AvatarEditModeCamera____c->static_fields->__9 = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AvatarEditModeCamera____c->static_fields >> 0xc);
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

