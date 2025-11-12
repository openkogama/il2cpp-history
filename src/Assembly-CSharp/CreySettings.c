
/* CreySettings(Int32, String, Boolean) */

void Assembly-CSharp.dll::CreySettings::CreySettings__ctor
               (CreySettings *this,int32_t frequency,String *url,bool shouldRedirect,
               MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields)._TouristPromotionCreyFrequencyPercent_k__BackingField = frequency;
  (this->fields)._TouristPromotionCreyURL_k__BackingField = url;
  if (bVar1) {
    (this->fields)._TouristPromotionCreyRedirect_k__BackingField = shouldRedirect;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields)._TouristPromotionCreyURL_k__BackingField >> 0xc);
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
  (this->fields)._TouristPromotionCreyRedirect_k__BackingField = shouldRedirect;
  return;
}

