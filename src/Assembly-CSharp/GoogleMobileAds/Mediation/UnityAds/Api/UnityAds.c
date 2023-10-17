
/* Void SetConsentMetaData(String, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::
     UnityAds_SetConsentMetaData(String *key,bool metaDataValue,MethodInfo *method)

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
  uVar3 = 0;
  uVar4 = (pIVar1->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (pIVar1->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient) {
        pIVar5 = &pIVar1->klass->vtable + pIVar1->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IUnityAdsClient__VTable *)
           func_?(pIVar1,
                           TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,0
                          );
code_?:
  (*(pIVar5->SetConsentMetaData).methodPtr)
            (pIVar1,key,_metaDataValue,(pIVar5->SetConsentMetaData).method);
  return;
}


/* UnityAds() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::UnityAds__cctor
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
  if (value != (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
                     );
      func_?(&StringLiteral_Dummy_);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
      pSVar3 = (String *)(**(code **)(*piVar2 + 0xf4))(piVar2,*(undefined4 *)(*piVar2 + 0xf8));
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Dummy_,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->static_fields->client =
           (IUnityAdsClient *)value;
      func_?(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->static_fields);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

