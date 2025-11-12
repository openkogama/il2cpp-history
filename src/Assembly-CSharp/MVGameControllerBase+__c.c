
/* Boolean <InitRegionDependent>b__162_0() */

bool Assembly-CSharp.dll::MVGameControllerBase+<>c::
     MVGameControllerBase_c__InitRegionDependent_b__162_0
               (MVGameControllerBase_c *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
         (GameSessionData *)0x0;
}


/* MVGameControllerBase+<>c() */

void Assembly-CSharp.dll::MVGameControllerBase+<>c::MVGameControllerBase_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVGameControllerBase_c *)FUN_?(TypeInfo__MVGameControllerBase____c);
  TypeInfo__MVGameControllerBase____c->static_fields->__9 = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__MVGameControllerBase____c->static_fields >> 0xc);
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

