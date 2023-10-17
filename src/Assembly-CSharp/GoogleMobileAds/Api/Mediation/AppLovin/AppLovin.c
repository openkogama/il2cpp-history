
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
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin);
    func_?(&TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client;
  if (pIVar1 != (IAppLovinClient *)0x0) {
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient)
        {
          pVVar4 = &(pIVar1->klass->vtable).Initialize +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          (*pVVar4->methodPtr)(pIVar1,pVVar4->method);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient
                             ,0);
    (*(code *)*puVar5)(pIVar1,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetDoNotSell(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::AppLovin_SetDoNotSell
               (bool doNotSell,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin__Class *)&TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin__Class *)_doNotSell;
    pIStack_4 = TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(3);
    return;
  }
  pAStack_1 = (AppLovin__Class *)&stack0xfffffffc;
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
    pAStack_1 = (AppLovin__Class *)&TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin__Class *)_hasUserConsent;
    pIStack_4 = TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(1);
    return;
  }
  pAStack_1 = (AppLovin__Class *)&stack0xfffffffc;
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
    pAStack_1 = (AppLovin__Class *)&TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin__Class *)_isAgeRestrictedUser;
    pIStack_4 = TypeInfo__GoogleMobileAds__Common__Mediation__AppLovin__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(2);
    return;
  }
  pAStack_1 = (AppLovin__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AppLovin() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AppLovin::AppLovin::AppLovin__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin);
    cRam_? = '\x01';
  }
  pIVar1 = GoogleMobileAds::Mediation::AppLovinClientFactory::AppLovinClientFactory_AppLovinInstance
                     ((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields->client = pIVar1;
  func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AppLovin__AppLovin->static_fields,
                  pIVar1);
  return;
}

