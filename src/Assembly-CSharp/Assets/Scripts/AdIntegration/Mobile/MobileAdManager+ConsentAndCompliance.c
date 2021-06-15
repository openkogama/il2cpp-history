
/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
         MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance_ToString
                   (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  pCVar1 = (this->fields).consentData;
  if (pCVar1 != (ConsentData *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pCVar1->klass->vtable).ToString.method)(pCVar1,pCVar1->klass[1]._0.image);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* MobileAdManager+ConsentAndCompliance() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance__ctor
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__ConsentData;
  this_00 = (ScaleAnimationBase *)func_?();
  *(undefined2 *)&(this_00->fields)._._._._.m_CachedPtr = 0x101;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).consentData = (ConsentData *)this_00;
  return;
}


/* Boolean get_DoTagForChildDirectedTreatment() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::
     MobileAdManager_ConsentAndCompliance_get_DoTagForChildDirectedTreatment
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  pCVar1 = (this->fields).consentData;
  if (pCVar1 != (ConsentData *)0x0) {
    if ((pCVar1->fields).isChild == 0) {
      return 0;
    }
    if (pCVar1 != (ConsentData *)0x0) {
      return (pCVar1->fields).isAmerican != 0;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_HasConsented() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+ConsentAndCompliance::MobileAdManager_ConsentAndCompliance_get_HasConsented
               (MobileAdManager_ConsentAndCompliance *this,MethodInfo *method)

{
  pCVar1 = (this->fields).consentData;
  if (pCVar1 != (ConsentData *)0x0) {
    bVar2 = (pCVar1->fields).isEuropean;
    if (bVar2 == 0) {
      bVar3 = 0;
    }
    else {
      if (pCVar1 == (ConsentData *)0x0) goto code_?;
      bVar3 = (pCVar1->fields).isChild;
    }
    if (pCVar1 != (ConsentData *)0x0) {
      bVar4 = 1;
      if (bVar2 == 0) {
        bVar4 = (pCVar1->fields).isAmerican;
      }
      if (((pCVar1->fields).hasConsented != 0) && (bVar3 == 0)) {
        return 1;
      }
      return bVar4 == 0;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
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
  func_?(0);
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
  if (pCVar1 != (ConsentData *)0x0) {
    if ((pCVar1->fields).isChild == 0) {
      return 0;
    }
    if (pCVar1 != (ConsentData *)0x0) {
      return (pCVar1->fields).isEuropean != 0;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

