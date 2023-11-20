
/* Void UpdateCCPAStatus(VungleCCPAStatus) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::Vungle::Vungle::Vungle_UpdateCCPAStatus
               (VungleCCPAStatus__Enum consentStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pVStack_1 = (Vungle__Class *)
                &TypeInfo__GoogleMobileAds__Common__Mediation__Vungle__IVungleClient;
    func_?();
    pIStack_2 = (IVungleClient *)&TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle->_1).cctor_finished_or_no_cctor ==
      0) {
    pVStack_1 = TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle->static_fields->client;
  if (pIVar3 != (IVungleClient *)0x0) {
    pVStack_1 = (Vungle__Class *)consentStatus;
    pIStack_4 = TypeInfo__GoogleMobileAds__Common__Mediation__Vungle__IVungleClient;
    pIStack_2 = pIVar3;
    func_?(1);
    return;
  }
  pVStack_1 = (Vungle__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateConsentStatus(VungleConsentStatus, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::Vungle::Vungle::
     Vungle_UpdateConsentStatus
               (VungleConsentStatus__Enum consentStatus,String *consentMessageVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pVStack_1 = (Vungle__Class *)
                &TypeInfo__GoogleMobileAds__Common__Mediation__Vungle__IVungleClient;
    func_?();
    ppVStack_2 = &TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle->_1).cctor_finished_or_no_cctor ==
      0) {
    pVStack_1 = TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle->static_fields->client;
  if (pIVar3 != (IVungleClient *)0x0) {
    pVStack_1 = (Vungle__Class *)consentMessageVersion;
    ppVStack_2 = (Vungle__Class **)consentStatus;
    pIStack_4 = pIVar3;
    func_?(0,TypeInfo__GoogleMobileAds__Common__Mediation__Vungle__IVungleClient);
    return;
  }
  pVStack_1 = (Vungle__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Vungle() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::Vungle::Vungle::Vungle__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Common__Mediation__Vungle__DummyClient);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__GoogleMobileAds__Common__Mediation__Vungle__DummyClient);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__GoogleMobileAds__Common__Mediation__Vungle__DummyClient__DummyClient__
                   );
    func_?(&StringLiteral_Dummy_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar1 = MethodInfo__GoogleMobileAds__Common__Mediation__Vungle__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Common__Mediation__Vungle__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Common__Mediation__Vungle__DummyClient__DummyClient__
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
    TypeInfo__GoogleMobileAds__Api__Mediation__Vungle__Vungle->static_fields->client =
         (IVungleClient *)value;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

