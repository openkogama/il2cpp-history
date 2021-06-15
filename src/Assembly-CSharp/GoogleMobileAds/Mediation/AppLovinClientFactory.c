
/* IAppLovinClient AppLovinInstance() */

IAppLovinClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovinClientFactory::
AppLovinClientFactory_AppLovinInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (DummyClient_2 *)
         func_?(TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__DummyClient);
  GoogleMobileAds::Common::Mediation::AppLovin::DummyClient::DummyClient_2__ctor
            (this,(MethodInfo *)0x0);
  return (IAppLovinClient *)this;
}

