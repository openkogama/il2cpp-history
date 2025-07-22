
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
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar1 != (IAppLovinClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient)
        {
          pIVar2 = pIVar1->klass;
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(pIVar2->vtable).Initialize)[iVar5].method)
                    (pIVar1,(&(pIVar2->vtable).SetHasUserConsent)[iVar5].methodPtr);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient
                             ,0);
    (*(code *)*puVar6)(pIVar1,puVar6[1]);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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

