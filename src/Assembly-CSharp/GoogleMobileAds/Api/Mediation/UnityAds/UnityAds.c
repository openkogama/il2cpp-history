
/* Void SetConsentMetaData(String, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::
     UnityAds_SetConsentMetaData(String *key,bool metaDataValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,
                    unaff_EBP);
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
        ppMVar6 = &(&pIVar1->klass->vtable)[pIVar3->interfaceOffsets[uVar4].offset].
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

