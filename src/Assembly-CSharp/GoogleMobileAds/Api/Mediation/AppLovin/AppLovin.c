
/* IAppLovinClient GetAppLovinClient() */

IAppLovinClient *
Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::AppLovin_GetAppLovinClient
          (MethodInfo *method)

{
  pIVar1 = GoogleMobileAds::Mediation::AppLovinClientFactory::AppLovinClientFactory_AppLovinInstance
                     ((MethodInfo *)0x0);
  return pIVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::AppLovin_Initialize
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client;
  if (pIVar1 != (IAppLovinClient *)0x0) {
    func_?(0,TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient,pIVar1
                   );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetHasUserConsent(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::
     AppLovin_SetHasUserConsent(bool hasUserConsent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client;
  if (pIVar1 != (IAppLovinClient *)0x0) {
    func_?(1,TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient,pIVar1
                    ,_hasUserConsent);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetIsAgeRestrictedUser(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::
     AppLovin_SetIsAgeRestrictedUser(bool isAgeRestrictedUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->_1).cctor_started == 0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client;
  if (pIVar1 != (IAppLovinClient *)0x0) {
    func_?(2,TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient,pIVar1
                    ,_isAgeRestrictedUser);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AppLovin() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::AppLovin__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = GoogleMobileAds::Mediation::AppLovinClientFactory::AppLovinClientFactory_AppLovinInstance
                     ((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client = pIVar1;
  return;
}

