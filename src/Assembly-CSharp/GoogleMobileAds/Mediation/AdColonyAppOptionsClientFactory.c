
/* IAdColonyAppOptionsClient getAdColonyAppOptionsInstance() */

IAdColonyAppOptionsClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColonyAppOptionsClientFactory::
AdColonyAppOptionsClientFactory_getAdColonyAppOptionsInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (DummyClient_1 *)
         func_?(TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__DummyClient);
  GoogleMobileAds::Common::Mediation::AdColony::DummyClient::DummyClient_1__ctor
            (this,(MethodInfo *)0x0);
  return (IAdColonyAppOptionsClient *)this;
}

