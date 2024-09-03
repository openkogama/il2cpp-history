
/* IAppLovinClient GetAppLovinClient() */

IAppLovinClient *
Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::AppLovin_GetAppLovinClient
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
  }
  pIVar1 = GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_GetAppLovinClient
                     ((MethodInfo *)0x0);
  return pIVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::AppLovin_Initialize
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    pIStack_1 = (IAppLovinClient__Class *)
                &TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client !=
      (IAppLovinClient *)0x0) {
    pIStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    puStack_2 = (undefined *)0x0;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_2);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDoNotSell(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::AppLovin_SetDoNotSell
               (bool doNotSell,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin_1__Class *)_doNotSell;
    pIStack_4 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(3);
    return;
  }
  pAStack_1 = (AppLovin_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetHasUserConsent(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::
     AppLovin_SetHasUserConsent(bool hasUserConsent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin_1__Class *)_hasUserConsent;
    pIStack_4 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(1);
    return;
  }
  pAStack_1 = (AppLovin_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetIsAgeRestrictedUser(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::
     AppLovin_SetIsAgeRestrictedUser(bool isAgeRestrictedUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin_1__Class *)_isAgeRestrictedUser;
    pIStack_4 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(2);
    return;
  }
  pAStack_1 = (AppLovin_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

