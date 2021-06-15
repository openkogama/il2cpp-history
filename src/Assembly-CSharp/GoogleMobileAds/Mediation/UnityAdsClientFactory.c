
/* IUnityAdsClient UnityAdsInstance() */

IUnityAdsClient * Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAdsClientFactory::UnityAdsClientFactory_UnityAdsInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x6be0);
    cRam_? = '\x01';
  }
  this = (DummyClient_4 *)func_?(TypeInfo__GoogleMobileAds__Common__Mediation__UnityAds__DummyClient);
  GoogleMobileAds::Common::Mediation::UnityAds::DummyClient::DummyClient_4__ctor(this,(MethodInfo *)0x0);
  return (IUnityAdsClient *)this;
}

