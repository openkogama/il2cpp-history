
/* Void UpdateCCPAStatus(VungleCCPAStatus) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::LiftoffMonetize::LiftoffMonetize::
     LiftoffMonetize_UpdateCCPAStatus(VungleCCPAStatus__Enum consentStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pLStack_1 = (LiftoffMonetize_1__Class *)
                &TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
      cctor_finished_or_no_cctor == 0) {
    pLStack_1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize;
    func_?();
  }
  if (cRam_? == '\0') {
    pLStack_1 = (LiftoffMonetize_1__Class *)
                &
                TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
    ;
    func_?();
    pIStack_2 = (ILiftoffMonetizeClient *)
                &TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
      cctor_finished_or_no_cctor == 0) {
    pLStack_1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar3 != (ILiftoffMonetizeClient *)0x0) {
    pLStack_1 = (LiftoffMonetize_1__Class *)consentStatus;
    pIStack_4 = 
    TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient;
    pIStack_2 = pIVar3;
    func_?(1);
    return;
  }
  pLStack_1 = (LiftoffMonetize_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateConsentStatus(VungleConsentStatus, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::LiftoffMonetize::LiftoffMonetize::
     LiftoffMonetize_UpdateConsentStatus
               (VungleConsentStatus__Enum consentStatus,String *consentMessageVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pLStack_1 = (LiftoffMonetize_1__Class *)
                &TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
      cctor_finished_or_no_cctor == 0) {
    pLStack_1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize;
    func_?();
  }
  if (cRam_? == '\0') {
    pLStack_1 = (LiftoffMonetize_1__Class *)
                &
                TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
    ;
    func_?();
    ppLStack_2 = &TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
      cctor_finished_or_no_cctor == 0) {
    pLStack_1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar3 != (ILiftoffMonetizeClient *)0x0) {
    pLStack_1 = (LiftoffMonetize_1__Class *)consentMessageVersion;
    ppLStack_2 = (LiftoffMonetize_1__Class **)consentStatus;
    pIStack_4 = pIVar3;
    func_?(0,
                    TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                   );
    return;
  }
  pLStack_1 = (LiftoffMonetize_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

