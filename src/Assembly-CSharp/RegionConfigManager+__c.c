
/* Boolean <DetectRegionFromEnvironment>b__4_0(RegionConfigNamePair) */

bool Assembly-CSharp.dll::RegionConfigManager+<>c::
     RegionConfigManager_c__DetectRegionFromEnvironment_b__4_0
               (RegionConfigManager_c *this,RegionConfigNamePair *p,MethodInfo *method)

{
  if (p != (RegionConfigNamePair *)0x0) {
    pSVar1 = (p->fields).regionName;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (RegionConfigManager_c *)TypeInfo__MVGameControllerBase->static_fields;
    if (((MVGameControllerBase__StaticFields *)this)->_GameSessionData_k__BackingField !=
        (GameSessionData *)0x0) {
      pSVar2 = (((MVGameControllerBase__StaticFields *)this)->_GameSessionData_k__BackingField->
               fields).region;
      if (pSVar1 == pSVar2) {
        return 1;
      }
      if (((pSVar1 != (String *)0x0) && (pSVar2 != (String *)0x0)) &&
         ((pSVar1->fields)._stringLength == (pSVar2->fields)._stringLength)) {
        lVar3 = (longlong)(pSVar1->fields)._stringLength;
        puVar4 = &(pSVar1->fields)._firstChar;
        uVar5 = lVar3 * 2;
        puVar6 = &(pSVar2->fields)._firstChar;
        if (puVar4 != puVar6) {
          if (7 < uVar5) {
            if (uVar5 != 8) {
              puVar7 = puVar6;
              do {
                if (*(longlong *)((longlong)puVar7 + ((longlong)puVar4 - (longlong)puVar6)) !=
                    *(longlong *)puVar7) {
                  return 0;
                }
                puVar7 = puVar7 + 4;
              } while ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < uVar5 - 8);
            }
            return *(longlong *)(puVar4 + lVar3 + -4) == *(longlong *)(puVar6 + lVar3 + -4);
          }
          if (uVar5 != 0) {
            puVar7 = puVar6;
            do {
              if (*(char *)((longlong)puVar7 + ((longlong)puVar4 - (longlong)puVar6)) !=
                  (char)*puVar7) {
                return 0;
              }
              puVar7 = (uint16_t *)((longlong)puVar7 + 1);
            } while ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < uVar5);
          }
        }
        return 1;
      }
      return 0;
    }
  }
  FUN_?(this);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* RegionConfigManager+<>c() */

void Assembly-CSharp.dll::RegionConfigManager+<>c::RegionConfigManager_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RegionConfigManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RegionConfigManager_c *)FUN_?(TypeInfo__RegionConfigManager____c);
  TypeInfo__RegionConfigManager____c->static_fields->__9 = pRVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__RegionConfigManager____c->static_fields >> 0xc);
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

