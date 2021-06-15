
/* IIronSourceClient GetIronSourceClient() */

IIronSourceClient *
Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::IronSource::IronSource::
IronSource_GetIronSourceClient(MethodInfo *method)

{
  pIVar1 = GoogleMobileAds::Mediation::IronSourceClientFactory::
           IronSourceClientFactory_IronSourceInstance((MethodInfo *)0x0);
  return pIVar1;
}


/* Void SetConsent(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::IronSource::IronSource::
     IronSource_SetConsent(bool consent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->static_fields->client;
  if (pIVar1 != (IIronSourceClient *)0x0) {
    func_?(0,TypeInfo__GoogleMobileAds__Common__Mediation__IronSource__IIronSourceClient,
                    pIVar1,_consent);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IronSource() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::IronSource::IronSource::IronSource__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = GoogleMobileAds::Mediation::IronSourceClientFactory::
           IronSourceClientFactory_IronSourceInstance((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->static_fields->client = pIVar1;
  return;
}

