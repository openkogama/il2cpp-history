
/* ProfileSettingsManager+<>c() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager+<>c::
     ProfileSettingsManager_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (ProfileSettingsManager_c *)
           FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c);
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9 =
       pPVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->
                   static_fields >> 0xc);
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

