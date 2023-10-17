
/* Void SetConsent(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::IronSource::IronSource::
     IronSource_SetConsent(bool consent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IronSource__Class *)
                &TypeInfo__GoogleMobileAds__Common__Mediation__IronSource__IIronSourceClient;
    func_?();
    pIStack_2 = (IIronSourceClient *)
                &TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->_1).
      cctor_finished_or_no_cctor == 0) {
    pIStack_1 = TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource;
    func_?();
  }
  pIVar3 = TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->static_fields->client;
  if (pIVar3 != (IIronSourceClient *)0x0) {
    pIStack_1 = (IronSource__Class *)_consent;
    pIStack_4 = TypeInfo__GoogleMobileAds__Common__Mediation__IronSource__IIronSourceClient;
    pIStack_2 = pIVar3;
    func_?(0);
    return;
  }
  pIStack_1 = (IronSource__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetMetaData(String, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::IronSource::IronSource::
     IronSource_SetMetaData(String *key,String *metaDataValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Common__Mediation__IronSource__IIronSourceClient);
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->static_fields->client;
  if (pIVar1 == (IIronSourceClient *)0x0) {
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
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__Mediation__IronSource__IIronSourceClient
         ) {
        pVVar5 = &(pIVar1->klass->vtable).SetMetaData +
                 pIVar1->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pVVar5 = (VirtualInvokeData *)
           func_?(pIVar1,
                           TypeInfo__GoogleMobileAds__Common__Mediation__IronSource__IIronSourceClient
                           ,1);
code_?:
  (*pVVar5->methodPtr)(pIVar1,key,metaDataValue,pVVar5->method);
  return;
}


/* IronSource() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::IronSource::IronSource::IronSource__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource);
    cRam_? = '\x01';
  }
  pIVar1 = GoogleMobileAds::Mediation::IronSourceClientFactory::
           IronSourceClientFactory_CreateIronSourceClient((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->static_fields->client = pIVar1;
  func_?(TypeInfo__GoogleMobileAds__Api__Mediation__IronSource__IronSource->static_fields,
                  pIVar1);
  return;
}

