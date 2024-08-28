
/* MobileAdManager+ConsentAndCompliance() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance__ctor
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (ConsentData *)func_?(TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::Fog::Fog__ctor
            ((Fog *)this_00,(MethodInfo *)0x0);
  (this->fields).consentData = this_00;
  func_?(&this->fields,this_00);
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
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).consentData;
  if (pCVar2 == (ConsentData *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((pCVar2->fields).isEuropean == 0) {
    bVar6 = (pCVar2->fields).isAmerican;
    bVar7 = true;
  }
  else {
    bVar7 = (pCVar2->fields).isChild == 0;
    bVar6 = 1;
  }
  if (((pCVar2->fields).hasConsented & bVar7) != 0) {
    return 1;
  }
  return bVar6 == 0;
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

