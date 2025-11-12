
/* Boolean <ResetDistanceAndDirectionToAvatar>b__35_0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::JetPackCamera+<>c::
     JetPackCamera_c__ResetDistanceAndDirectionToAvatar_b__35_0
               (JetPackCamera_c *this,MVWorldObjectClient *wo,MethodInfo *method)

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


/* JetPackCamera+<>c() */

void Assembly-CSharp.dll::JetPackCamera+<>c::JetPackCamera_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__JetPackCamera____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pJVar1 = (JetPackCamera_c *)FUN_?(TypeInfo__JetPackCamera____c);
  TypeInfo__JetPackCamera____c->static_fields->__9 = pJVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__JetPackCamera____c->static_fields >> 0xc);
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

