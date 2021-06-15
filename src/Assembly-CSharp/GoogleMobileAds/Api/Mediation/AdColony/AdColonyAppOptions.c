
/* IAdColonyAppOptionsClient GetAdColonyAppOptionsClient() */

IAdColonyAppOptionsClient *
Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
AdColonyAppOptions_GetAdColonyAppOptionsClient(MethodInfo *method)

{
  pIVar1 = GoogleMobileAds::Mediation::AdColonyAppOptionsClientFactory::
           AdColonyAppOptionsClientFactory_getAdColonyAppOptionsInstance((MethodInfo *)0x0);
  return pIVar1;
}


/* String GetGDPRConsentString() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
         AdColonyAppOptions_GetGDPRConsentString(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).cctor_started ==
      0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    pSVar2 = (String *)
             func_?(4,
                             TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                             ,pIVar1);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* String GetUserId() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
         AdColonyAppOptions_GetUserId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).cctor_started ==
      0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    pSVar2 = (String *)
             func_?(6,
                             TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                             ,pIVar1);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Boolean IsGDPRRequired() */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_IsGDPRRequired(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).cctor_started ==
      0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    bVar2 = func_?(5,
                            TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                            ,pIVar1);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean IsTestMode() */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_IsTestMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).cctor_started ==
      0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    bVar2 = func_?(7,
                            TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                            ,pIVar1);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void SetGDPRConsentString(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_SetGDPRConsentString(String *consentString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).cctor_started ==
      0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    func_?(0,
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                    ,pIVar1,consentString);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetGDPRRequired(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_SetGDPRRequired(bool gdprRequired,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).cctor_started ==
      0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    func_?(1,
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                    ,pIVar1,_gdprRequired);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTestMode(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_SetTestMode(bool isTestMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).cctor_started ==
      0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    func_?(3,
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                    ,pIVar1,_isTestMode);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetUserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_SetUserId(String *userId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).cctor_started ==
      0)) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    func_?(2,
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                    ,pIVar1,userId);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AdColonyAppOptions() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = GoogleMobileAds::Mediation::AdColonyAppOptionsClientFactory::
           AdColonyAppOptionsClientFactory_getAdColonyAppOptionsInstance((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->client =
       pIVar1;
  return;
}

