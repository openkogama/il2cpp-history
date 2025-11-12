
/* Void UpdateCCPAStatus(VungleCCPAStatus) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::LiftoffMonetize::LiftoffMonetize::
     LiftoffMonetize_UpdateCCPAStatus(VungleCCPAStatus__Enum consentStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar1 == (ILiftoffMonetizeClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  pIVar4 = pIVar1->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient) {
        pVVar6 = &(pIVar4->vtable).UpdateConsentStatus +
                 (pIVar4->interfaceOffsets[uVar3].offset + 1);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(pIVar1,(ulonglong)consentStatus,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void UpdateConsentStatus(VungleConsentStatus, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::LiftoffMonetize::LiftoffMonetize::
     LiftoffMonetize_UpdateConsentStatus
               (VungleConsentStatus__Enum consentStatus,String *consentMessageVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                  ,consentMessageVersion,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar1 != (ILiftoffMonetizeClient *)0x0) {
    FUN_?(0,
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                  ,pIVar1,consentStatus,consentMessageVersion);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

