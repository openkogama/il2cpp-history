
/* MobileAdManager+ConsentAndCompliance() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance__ctor
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__ConsentData;
  value = (ConsentData *)func_?();
  (value->fields).isAmerican = 1;
  (value->fields).isEuropean = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).consentData = value;
  func_?(&this->fields,value);
  return;
}


/* Boolean get_DoTagForChildDirectedTreatment() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::
     MobileAdManager_ConsentAndCompliance_get_DoTagForChildDirectedTreatment
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).consentData;
  if (pCVar2 == (ConsentData *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((pCVar2->fields).isChild == 0) {
    return 0;
  }
  return (pCVar2->fields).isAmerican;
}


/* Boolean get_HasConsented() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance_get_HasConsented
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  pCVar1 = (this->fields).consentData;
  if (pCVar1 == (ConsentData *)0x0) {
    func_?();
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
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).consentData;
  if (pCVar2 != (ConsentData *)0x0) {
    return (pCVar2->fields).isEuropean;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_TagForUnderAgeOfConsent() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::
     MobileAdManager_ConsentAndCompliance_get_TagForUnderAgeOfConsent
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).consentData;
  if (pCVar2 == (ConsentData *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((pCVar2->fields).isChild == 0) {
    return 0;
  }
  return (pCVar2->fields).isEuropean;
}

