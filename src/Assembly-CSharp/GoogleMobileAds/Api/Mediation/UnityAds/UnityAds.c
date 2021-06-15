
/* IUnityAdsClient GetUnityAdsClient() */

IUnityAdsClient *
Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::UnityAds_GetUnityAdsClient
          (MethodInfo *method)

{
  pIVar1 = GoogleMobileAds::Mediation::UnityAdsClientFactory::UnityAdsClientFactory_UnityAdsInstance
                     ((MethodInfo *)0x0);
  return pIVar1;
}


/* Void SetGDPRConsentMetaData(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::
     UnityAds_SetGDPRConsentMetaData(bool consent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->static_fields->client;
  if (pIVar1 != (IUnityAdsClient *)0x0) {
    func_?(0,TypeInfo__GoogleMobileAds__Common__Mediation__UnityAds__IUnityAdsClient,pIVar1
                    ,_consent);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* UnityAds() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::UnityAds__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = GoogleMobileAds::Mediation::UnityAdsClientFactory::UnityAdsClientFactory_UnityAdsInstance
                     ((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__Mediation__UnityAds__UnityAds->static_fields->client = pIVar1;
  return;
}

