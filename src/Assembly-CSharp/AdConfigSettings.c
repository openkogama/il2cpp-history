
/* AdConfigSettings(EmbeddedSiteConfigData, Boolean, Int32, Int32) */

void Assembly-CSharp.dll::AdConfigSettings::AdConfigSettings__ctor
               (AdConfigSettings *this,EmbeddedSiteConfigData embeddedSiteConfigData,
               bool adAutoSuccessAfterDelayEnabled,int32_t delayBeforeAdIsAutoSuccess,
               int32_t interstitialTimeoutAfterRewardedAd,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._AdTimeoutAsSuccess_k__BackingField = adAutoSuccessAfterDelayEnabled;
  (this->fields)._AdTimeoutAsSuccessDelay_k__BackingField = delayBeforeAdIsAutoSuccess;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.sites = embeddedSiteConfigData.sites;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.siteEnum = embeddedSiteConfigData.siteEnum;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.showTouristPromotion =
       embeddedSiteConfigData.showTouristPromotion;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsOpenInNewTab =
       embeddedSiteConfigData.allowsOpenInNewTab;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsRedirectToWebpage =
       embeddedSiteConfigData.allowsRedirectToWebpage;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsModals =
       embeddedSiteConfigData.allowsModals;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.integratedSdk =
       embeddedSiteConfigData.integratedSdk;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsFallbackAds =
       embeddedSiteConfigData.allowsFallbackAds;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.showPlayButtonAd =
       embeddedSiteConfigData.showPlayButtonAd;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.field_0xf = embeddedSiteConfigData._15_1_;
  (this->fields)._InterstitialTimeoutAfterRewardedAd_k__BackingField =
       interstitialTimeoutAfterRewardedAd;
  return;
}


/* EmbeddedSiteConfigData get_EmbeddedSiteConfigData() */

EmbeddedSiteConfigData *
Assembly-CSharp.dll::AdConfigSettings::AdConfigSettings_get_EmbeddedSiteConfigData
          (EmbeddedSiteConfigData *__return_storage_ptr__,AdConfigSettings *this,MethodInfo *method)

{
  iVar1 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.siteEnum;
  bVar2 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.showTouristPromotion;
  bVar3 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsOpenInNewTab;
  bVar4 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsRedirectToWebpage;
  bVar5 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsModals;
  bVar6 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.integratedSdk;
  bVar7 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsFallbackAds;
  bVar8 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.showPlayButtonAd;
  uVar9 = (this->fields)._EmbeddedSiteConfigData_k__BackingField.field_0xf;
  __return_storage_ptr__->sites = (this->fields)._EmbeddedSiteConfigData_k__BackingField.sites;
  __return_storage_ptr__->siteEnum = iVar1;
  __return_storage_ptr__->showTouristPromotion = bVar2;
  __return_storage_ptr__->allowsOpenInNewTab = bVar3;
  __return_storage_ptr__->allowsRedirectToWebpage = bVar4;
  __return_storage_ptr__->allowsModals = bVar5;
  __return_storage_ptr__->integratedSdk = bVar6;
  __return_storage_ptr__->allowsFallbackAds = bVar7;
  __return_storage_ptr__->showPlayButtonAd = bVar8;
  __return_storage_ptr__->field_0xf = uVar9;
  return __return_storage_ptr__;
}


/* Void set_EmbeddedSiteConfigData(EmbeddedSiteConfigData) */

void Assembly-CSharp.dll::AdConfigSettings::AdConfigSettings_set_EmbeddedSiteConfigData
               (AdConfigSettings *this,EmbeddedSiteConfigData value,MethodInfo *method)

{
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.sites = value.sites;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.siteEnum = value.siteEnum;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.showTouristPromotion =
       value.showTouristPromotion;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsOpenInNewTab =
       value.allowsOpenInNewTab;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsRedirectToWebpage =
       value.allowsRedirectToWebpage;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsModals = value.allowsModals;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.integratedSdk = value.integratedSdk;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.allowsFallbackAds = value.allowsFallbackAds
  ;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.showPlayButtonAd = value.showPlayButtonAd;
  (this->fields)._EmbeddedSiteConfigData_k__BackingField.field_0xf = value._15_1_;
  return;
}

