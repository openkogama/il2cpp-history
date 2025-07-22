
/* IAppLovinClient GetAppLovinClient() */

IAppLovinClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::
AppLovin_1_GetAppLovinClient(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient__DummyClient__
                   );
    func_?(&StringLiteral_Dummy_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar1 = MethodInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient__DummyClient__
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
    return (IAppLovinClient *)value;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar5 = (IAppLovinClient *)(*pcVar4)();
  return pIVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_Initialize
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar1 != (IAppLovinClient *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient)
        {
          pIVar2 = pIVar1->klass;
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(pIVar2->vtable).Initialize)[iVar5].method)
                    (pIVar1,(&(pIVar2->vtable).SetHasUserConsent)[iVar5].methodPtr);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(pIVar1,
                             TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient
                             ,0);
    (*(code *)*puVar6)(pIVar1,puVar6[1]);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetDoNotSell(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::
     AppLovin_1_SetDoNotSell(bool doNotSell,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin_1__Class *)_doNotSell;
    pIStack_4 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(3);
    return;
  }
  pAStack_1 = (AppLovin_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetHasUserConsent(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::
     AppLovin_1_SetHasUserConsent(bool hasUserConsent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin_1__Class *)_hasUserConsent;
    pIStack_4 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(1);
    return;
  }
  pAStack_1 = (AppLovin_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetIsAgeRestrictedUser(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::
     AppLovin_1_SetIsAgeRestrictedUser(bool isAgeRestrictedUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AppLovin_1__Class *)&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
    pIStack_2 = (IAppLovinClient *)
                &TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).cctor_finished_or_no_cctor
      == 0) {
    pAStack_1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar3 != (IAppLovinClient *)0x0) {
    pAStack_1 = (AppLovin_1__Class *)_isAgeRestrictedUser;
    pIStack_4 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient;
    pIStack_2 = pIVar3;
    func_?(2);
    return;
  }
  pAStack_1 = (AppLovin_1__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AppLovin() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    cRam_? = '\x01';
  }
  pIVar1 = AppLovin_1_GetAppLovinClient((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client = pIVar1;
  func_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields,
                  pIVar1);
  return;
}

