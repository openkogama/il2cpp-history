
/* IAdColonyAppOptionsClient GetAdColonyAppOptionsClient() */

IAdColonyAppOptionsClient *
Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
AdColonyAppOptions_GetAdColonyAppOptionsClient(MethodInfo *method)

{
  pIVar1 = GoogleMobileAds::Mediation::AdColonyAppOptionsClientFactory::
           AdColonyAppOptionsClientFactory_getAdColonyAppOptionsInstance((MethodInfo *)0x0);
  return pIVar1;
}


/* String GetPrivacyConsentString(AdColonyPrivacyFramework) */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
         AdColonyAppOptions_GetPrivacyConsentString
                   (AdColonyPrivacyFramework__Enum privacyFramework,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient) {
          pVVar4 = &(pIVar1->klass->vtable).GetPrivacyConsentString +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          pSVar5 = (String *)(*pVVar4->methodPtr)(pIVar1,privacyFramework,pVVar4->method);
          return pSVar5;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                             ,3);
    pSVar5 = (String *)(*(code *)*puVar6)(pIVar1,privacyFramework,puVar6[1]);
    return pSVar5;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar7)();
  return pSVar5;
}


/* Boolean GetPrivacyFrameworkRequired(AdColonyPrivacyFramework) */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_GetPrivacyFrameworkRequired
               (AdColonyPrivacyFramework__Enum privacyFramework,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient) {
          pVVar4 = &(pIVar1->klass->vtable).GetPrivacyFrameworkRequired +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          bVar5 = (*pVVar4->methodPtr)(pIVar1,privacyFramework,pVVar4->method);
          return bVar5;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                             ,1);
    bVar5 = (*(code *)*puVar6)(pIVar1,privacyFramework,puVar6[1]);
    return bVar5;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* String GetUserId() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
         AdColonyAppOptions_GetUserId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient) {
          pVVar4 = &(pIVar1->klass->vtable).GetUserId +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          pSVar5 = (String *)(*pVVar4->methodPtr)(pIVar1,pVVar4->method);
          return pSVar5;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                             ,5);
    pSVar5 = (String *)(*(code *)*puVar6)(pIVar1,puVar6[1]);
    return pSVar5;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar7)();
  return pSVar5;
}


/* Boolean IsTestMode() */

bool Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_IsTestMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient) {
          pVVar4 = &(pIVar1->klass->vtable).IsTestMode +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          bVar5 = (*pVVar4->methodPtr)(pIVar1,pVVar4->method);
          return bVar5;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                             ,7);
    bVar5 = (*(code *)*puVar6)(pIVar1,puVar6[1]);
    return bVar5;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Void SetPrivacyConsentString(AdColonyPrivacyFramework, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_SetPrivacyConsentString
               (AdColonyPrivacyFramework__Enum privacyFramework,String *consentString,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 == (IAdColonyAppOptionsClient *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  uVar4 = (pIVar1->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (pIVar1->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient) {
        pVVar5 = &(pIVar1->klass->vtable).SetPrivacyConsentString +
                 pIVar1->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)
           func_?(pIVar1,
                           TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                           ,2);
code_?:
  (*pVVar5->methodPtr)(pIVar1,privacyFramework,consentString,pVVar5->method);
  return;
}


/* Void SetPrivacyFrameworkRequired(AdColonyPrivacyFramework, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_SetPrivacyFrameworkRequired
               (AdColonyPrivacyFramework__Enum privacyFramework,bool isRequired,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 == (IAdColonyAppOptionsClient *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  uVar4 = (pIVar1->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (pIVar1->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient) {
        pVVar5 = &(pIVar1->klass->vtable).SetPrivacyFrameworkRequired +
                 pIVar1->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)
           func_?(pIVar1,
                           TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                           ,0);
code_?:
  (*pVVar5->methodPtr)(pIVar1,privacyFramework,_isRequired,pVVar5->method);
  return;
}


/* Void SetTestMode(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_SetTestMode(bool isTestMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AdColonyAppOptions__Class *)
                &TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions;
    func_?();
    pIStack_2 = (IAdColonyAppOptionsClient *)
                &TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar3 != (IAdColonyAppOptionsClient *)0x0) {
    pAStack_1 = (AdColonyAppOptions__Class *)_isTestMode;
    pIStack_4 = TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient;
    pIStack_2 = pIVar3;
    func_?(6);
    return;
  }
  pAStack_1 = (AdColonyAppOptions__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetUserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions_SetUserId(String *userId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient) {
          pVVar4 = &(pIVar1->klass->vtable).SetUserId +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          (*pVVar4->methodPtr)(pIVar1,userId,pVVar4->method);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Common__Mediation__AdColony__IAdColonyAppOptionsClient
                             ,4);
    (*(code *)*puVar5)(pIVar1,userId,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AdColonyAppOptions() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyAppOptions::
     AdColonyAppOptions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions);
    cRam_? = '\x01';
  }
  pIVar1 = GoogleMobileAds::Mediation::AdColonyAppOptionsClientFactory::
           AdColonyAppOptionsClientFactory_getAdColonyAppOptionsInstance((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->static_fields->client =
       pIVar1;
  func_?(TypeInfo__GoogleMobileAds__Api__Mediation__AdColony__AdColonyAppOptions->
                  static_fields,pIVar1);
  return;
}

