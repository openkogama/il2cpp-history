
/* Void SetConsentMetaData(String, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::
     UnityAds_1_SetConsentMetaData(String *key,bool metaDataValue,MethodInfo *method)

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

