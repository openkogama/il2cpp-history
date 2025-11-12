
/* MobileAdManager+ConsentAndCompliance() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance__ctor
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (ConsentData *)FUN_?(TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
  bVar2 = iRam_? != 0;
  (pCVar1->fields).isAmerican = 1;
  (pCVar1->fields).isEuropean = 1;
  (this->fields).consentData = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Boolean get_DoTagForChildDirectedTreatment() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::
     MobileAdManager_ConsentAndCompliance_get_DoTagForChildDirectedTreatment
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  pCVar1 = (this->fields).consentData;
  if (pCVar1 == (ConsentData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pCVar1->fields).isChild == 0) {
    return 0;
  }
  return (pCVar1->fields).isAmerican;
}


/* Boolean get_HasConsented() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance_get_HasConsented
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  pCVar1 = (this->fields).consentData;
  if (pCVar1 == (ConsentData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pCVar1->fields).isEuropean == 0) {
    bVar3 = (pCVar1->fields).isAmerican;
    bVar4 = true;
  }
  else {
    bVar4 = (pCVar1->fields).isChild == 0;
    bVar3 = 1;
  }
  if (((pCVar1->fields).hasConsented & bVar4) != 0) {
    return 1;
  }
  return bVar3 == 0;
}


/* Boolean get_IsGDPRConsentRequired() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::
     MobileAdManager_ConsentAndCompliance_get_IsGDPRConsentRequired
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  pCVar1 = (this->fields).consentData;
  if (pCVar1 != (ConsentData *)0x0) {
    return (pCVar1->fields).isEuropean;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_TagForUnderAgeOfConsent() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::
     MobileAdManager_ConsentAndCompliance_get_TagForUnderAgeOfConsent
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  pCVar1 = (this->fields).consentData;
  if (pCVar1 == (ConsentData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pCVar1->fields).isChild == 0) {
    return 0;
  }
  return (pCVar1->fields).isEuropean;
}

