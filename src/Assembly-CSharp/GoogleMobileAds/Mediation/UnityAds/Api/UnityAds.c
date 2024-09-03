
/* Void SetConsentMetaData(String, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::
     UnityAds_1_SetConsentMetaData(String *key,bool metaDataValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient);
    func_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->static_fields->client;
  if (pIVar1 == (IUnityAdsClient *)0x0) {
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
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient) {
        ppMVar6 = &(&pIVar1->klass->vtable)[pIVar1->klass->interfaceOffsets[uVar4].offset].
                   SetConsentMetaData.method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(pIVar1,
                            TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,
                            0);
code_?:
  (*(code *)*ppMVar6)(pIVar1,key,_metaDataValue,ppMVar6[1]);
  return;
}


/* UnityAds() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::UnityAds_1__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
                   );
    func_?(&StringLiteral_Dummy_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar1 = MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar1 = (MethodInfo *)
             func_?(
                            MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
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
    TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->static_fields->client =
         (IUnityAdsClient *)value;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

