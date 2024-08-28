
/* IAdColonyAppOptionsClient GetAdColonyAppOptionsClient() */

IAdColonyAppOptionsClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
AdColonyAppOptions_1_GetAdColonyAppOptionsClient(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient);
    cRam_? = '\x01';
  }
  pIVar1 = (IAdColonyAppOptionsClient *)
           func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__
                   );
    func_?(&StringLiteral_Dummy_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pIVar1,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar2 = MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar2 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__
                            );
  }
  piVar3 = (int *)func_?(pMVar2,pMVar2->klass);
  if (piVar3 != (int *)0x0) {
    pSVar4 = (String *)(**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Dummy_,pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
    return pIVar1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar1 = (IAdColonyAppOptionsClient *)(*pcVar5)();
  return pIVar1;
}


/* String GetPrivacyConsentString(AdColonyPrivacyFramework) */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
         AdColonyAppOptions_1_GetPrivacyConsentString
                   (AdColonyPrivacyFramework__Enum privacyFramework,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          pSVar6 = (String *)
                   (*(code *)(&(pIVar1->klass->vtable).GetPrivacyConsentString)[iVar5].method)
                             (pIVar1,privacyFramework,
                              (&(pIVar1->klass->vtable).SetUserId)[iVar5].methodPtr);
          return pSVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                             ,3);
    pSVar6 = (String *)(*(code *)*puVar7)(pIVar1,privacyFramework,puVar7[1]);
    return pSVar6;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
}


/* Boolean GetPrivacyFrameworkRequired(AdColonyPrivacyFramework) */

bool Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_GetPrivacyFrameworkRequired
               (AdColonyPrivacyFramework__Enum privacyFramework,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          bVar6 = (*(code *)(&(pIVar1->klass->vtable).GetPrivacyFrameworkRequired)[iVar5].method)
                            (pIVar1,privacyFramework,
                             (&(pIVar1->klass->vtable).SetPrivacyConsentString)[iVar5].methodPtr);
          return bVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                             ,1);
    bVar6 = (*(code *)*puVar7)(pIVar1,privacyFramework,puVar7[1]);
    return bVar6;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* String GetUserId() */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
         AdColonyAppOptions_1_GetUserId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          pSVar6 = (String *)
                   (*(code *)(&(pIVar1->klass->vtable).GetUserId)[iVar5].method)
                             (pIVar1,(&(pIVar1->klass->vtable).SetTestMode)[iVar5].methodPtr);
          return pSVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                             ,5);
    pSVar6 = (String *)(*(code *)*puVar7)(pIVar1,puVar7[1]);
    return pSVar6;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
}


/* Boolean IsTestMode() */

bool Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_IsTestMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          bVar6 = (*(code *)(&(pIVar1->klass->vtable).IsTestMode)[iVar5].method)
                            (pIVar1,(&pIVar1->klass[1]._0.image)[iVar5 * 2]);
          return bVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar7 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                             ,7);
    bVar6 = (*(code *)*puVar7)(pIVar1,puVar7[1]);
    return bVar6;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Void SetPrivacyConsentString(AdColonyPrivacyFramework, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_SetPrivacyConsentString
               (AdColonyPrivacyFramework__Enum privacyFramework,String *consentString,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AdColonyAppOptions_1__Class *)
                &TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions;
    func_?();
    ppIStack_2 = &TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar3 != (IAdColonyAppOptionsClient *)0x0) {
    pAStack_1 = (AdColonyAppOptions_1__Class *)consentString;
    ppIStack_2 = (IAdColonyAppOptionsClient__Class **)privacyFramework;
    pIStack_4 = pIVar3;
    func_?(2,
                    TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                   );
    return;
  }
  pAStack_1 = (AdColonyAppOptions_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetPrivacyFrameworkRequired(AdColonyPrivacyFramework, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_SetPrivacyFrameworkRequired
               (AdColonyPrivacyFramework__Enum privacyFramework,bool isRequired,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    func_?(&
                    TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 == (IAdColonyAppOptionsClient *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = pIVar1->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
        ppMVar6 = &(&(pIVar1->klass->vtable).SetPrivacyFrameworkRequired)
                   [pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(pIVar1,
                            TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                            ,0);
code_?:
  (*(code *)*ppMVar6)(pIVar1,privacyFramework,_isRequired,ppMVar6[1]);
  return;
}


/* Void SetTestMode(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_SetTestMode(bool isTestMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AdColonyAppOptions_1__Class *)
                &TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions;
    func_?();
    pIStack_2 = (IAdColonyAppOptionsClient *)
                &TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar3 != (IAdColonyAppOptionsClient *)0x0) {
    pAStack_1 = (AdColonyAppOptions_1__Class *)_isTestMode;
    pIStack_4 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient;
    pIStack_2 = pIVar3;
    func_?(6);
    return;
  }
  pAStack_1 = (AdColonyAppOptions_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetUserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_SetUserId(String *userId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AdColonyAppOptions_1__Class *)
                &TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions;
    func_?();
    pIStack_2 = (IAdColonyAppOptionsClient *)
                &TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
      cctor_finished_or_no_cctor == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar3 != (IAdColonyAppOptionsClient *)0x0) {
    pAStack_1 = (AdColonyAppOptions_1__Class *)userId;
    pIStack_4 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient;
    pIStack_2 = pIVar3;
    func_?(4);
    return;
  }
  pAStack_1 = (AdColonyAppOptions_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AdColonyAppOptions() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient);
    cRam_? = '\x01';
  }
  value = (IAdColonyAppOptionsClient *)
          func_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__
                   );
    func_?(&StringLiteral_Dummy_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar1 = MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__
                            );
  }
  piVar2 = (int *)func_?(pMVar1,pMVar1->klass);
  if (piVar2 != (int *)0x0) {
    pSVar3 = (String *)(**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->client =
         value;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

