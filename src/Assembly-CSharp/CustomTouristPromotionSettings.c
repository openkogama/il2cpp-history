
/* CustomTouristPromotionSettings(Int32, String, String, Boolean) */

void Assembly-CSharp.dll::CustomTouristPromotionSettings::CustomTouristPromotionSettings__ctor
               (CustomTouristPromotionSettings *this,int32_t frequency,String *url,String *asset,
               bool shouldRedirect,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields)._FrequencyPercent_k__BackingField = frequency;
  (this->fields)._URL_k__BackingField = url;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._URL_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._AssetURL_k__BackingField = asset;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._AssetURL_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields)._Redirect_k__BackingField = shouldRedirect;
  return;
}

