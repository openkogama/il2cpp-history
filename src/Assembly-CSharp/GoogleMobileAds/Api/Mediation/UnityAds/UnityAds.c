
/* Void SetConsentMetaData(String, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::UnityAds::UnityAds::
     UnityAds_SetConsentMetaData(String *key,bool metaDataValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds,
                  CONCAT71(in_register_00000011,metaDataValue));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,
                  metaDataValue);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->static_fields->client;
  if (pIVar1 == (IUnityAdsClient *)0x0) {
    FUN_?();
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
        pIVar6 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar6 = (IUnityAdsClient__VTable *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,0,
                         TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,
                         unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pIVar6->SetConsentMetaData).methodPtr)
            (pIVar1,key,(ulonglong)metaDataValue,(pIVar6->SetConsentMetaData).method);
  return;
}

