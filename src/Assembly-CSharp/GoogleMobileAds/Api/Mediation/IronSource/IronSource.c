
/* Void SetConsent(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::IronSource::IronSource::
     IronSource_SetConsent(bool consent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient,0);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->static_fields->client;
  if (pIVar1 == (IIronSourceClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)consent;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient
         ) {
        pVVar7 = &(pIVar5->vtable).SetConsent + pIVar3[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient
                         ,0,pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,(ulonglong)consent,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void SetMetaData(String, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::IronSource::IronSource::
     IronSource_SetMetaData(String *key,String *metaDataValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->static_fields->client;
  if (pIVar1 != (IIronSourceClient *)0x0) {
    FUN_?(1,TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient,
                  pIVar1,key,metaDataValue);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

