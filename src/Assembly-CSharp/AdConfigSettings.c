
/* AdConfigSettings(EmbeddedSiteConfigData, Boolean, Int32, Int32) */

void Assembly-CSharp.dll::AdConfigSettings::AdConfigSettings__ctor
               (AdConfigSettings *this,EmbeddedSiteConfigData *embeddedSiteConfigData,
               bool adAutoSuccessAfterDelayEnabled,int32_t delayBeforeAdIsAutoSuccess,
               int32_t interstitialTimeoutAfterRewardedAd,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  iVar2 = embeddedSiteConfigData->siteEnum;
  bVar3 = embeddedSiteConfigData->showTouristPromotion;
  bVar4 = embeddedSiteConfigData->allowsOpenInNewTab;
  bVar5 = embeddedSiteConfigData->allowsRedirectToWebpage;
  bVar6 = embeddedSiteConfigData->allowsModals;
  bVar7 = embeddedSiteConfigData->integratedSdk;
  bVar8 = embeddedSiteConfigData->allowsFallbackAds;
  bVar9 = embeddedSiteConfigData->showPlayButtonAd;
  bVar10 = embeddedSiteConfigData->hideGoldShop;
  bVar11 = embeddedSiteConfigData->allowInHouseAds;
  bVar12 = embeddedSiteConfigData->removeFullscreenButton;
  bVar13 = embeddedSiteConfigData->hideSignUp;
  bVar14 = embeddedSiteConfigData->noPlayButtonVideoIcon;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.sites = embeddedSiteConfigData->sites;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.siteEnum = iVar2;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.showTouristPromotion = bVar3;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsOpenInNewTab = bVar4;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsRedirectToWebpage = bVar5;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsModals = bVar6;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.integratedSdk = bVar7;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsFallbackAds = bVar8;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.showPlayButtonAd = bVar9;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.hideGoldShop = bVar10;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowInHouseAds = bVar11;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.removeFullscreenButton = bVar12;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.hideSignUp = bVar13;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.noPlayButtonVideoIcon = bVar14;
  if (bVar1) {
    uVar15 = (uint)((ulonglong)&(this->fields)._EmbeddedSiteConfigData_k__BackingField >> 0xc);
    puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar17 = *puVar16;
      LOCK();
      uVar18 = *puVar16;
      if (uVar17 == uVar18) {
        *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (uVar17 != uVar18);
  }
  (this->fields)._InterstitialTimeoutAfterRewardedAd_k__BackingField =
       interstitialTimeoutAfterRewardedAd;
  (this->fields)._AdTimeoutAsSuccess_k__BackingField = adAutoSuccessAfterDelayEnabled;
  (this->fields)._AdTimeoutAsSuccessDelay_k__BackingField = delayBeforeAdIsAutoSuccess;
  return;
}


/* Void set_EmbeddedSiteConfigData(EmbeddedSiteConfigData) */

void Assembly-CSharp.dll::AdConfigSettings::AdConfigSettings_set_EmbeddedSiteConfigData
               (AdConfigSettings *this,EmbeddedSiteConfigData *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  iVar2 = value->siteEnum;
  bVar3 = value->showTouristPromotion;
  bVar4 = value->allowsOpenInNewTab;
  bVar5 = value->allowsRedirectToWebpage;
  bVar6 = value->allowsModals;
  bVar7 = value->integratedSdk;
  bVar8 = value->allowsFallbackAds;
  bVar9 = value->showPlayButtonAd;
  bVar10 = value->hideGoldShop;
  bVar11 = value->allowInHouseAds;
  bVar12 = value->removeFullscreenButton;
  bVar13 = value->hideSignUp;
  bVar14 = value->noPlayButtonVideoIcon;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.sites = value->sites;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.siteEnum = iVar2;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.showTouristPromotion = bVar3;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsOpenInNewTab = bVar4;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsRedirectToWebpage = bVar5;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsModals = bVar6;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.integratedSdk = bVar7;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsFallbackAds = bVar8;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.showPlayButtonAd = bVar9;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.hideGoldShop = bVar10;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowInHouseAds = bVar11;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.removeFullscreenButton = bVar12;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.hideSignUp = bVar13;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.noPlayButtonVideoIcon = bVar14;
  if (bVar1) {
    uVar15 = (uint)((ulonglong)&(this->fields)._EmbeddedSiteConfigData_k__BackingField >> 0xc);
    puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar17 = *puVar16;
      LOCK();
      uVar18 = *puVar16;
      if (uVar17 == uVar18) {
        *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (uVar17 != uVar18);
  }
  return;
}

