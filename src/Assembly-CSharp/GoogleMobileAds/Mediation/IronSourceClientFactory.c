
/* IIronSourceClient IronSourceInstance() */

IIronSourceClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::IronSourceClientFactory::
IronSourceClientFactory_IronSourceInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (DummyClient_3 *)
         func_?(TypeInfo__GoogleMobileAds__Common__Mediation__IronSource__DummyClient);
  GoogleMobileAds::Common::Mediation::IronSource::DummyClient::DummyClient_3__ctor
            (this,(MethodInfo *)0x0);
  return (IIronSourceClient *)this;
}

