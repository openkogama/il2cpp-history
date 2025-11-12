
/* Void SetConsent(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::IronSource::Api::IronSource::
     IronSource_1_SetConsent(bool consent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient);
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

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::IronSource::Api::IronSource::
     IronSource_1_SetMetaData(String *key,String *metaDataValue,MethodInfo *method)

{
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
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
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


/* IronSource() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::IronSource::Api::IronSource::
     IronSource_1__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IIronSourceClient *)
           FUN_?(TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient__DummyClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = MethodInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar2 = ((
              MethodInfo__GoogleMobileAds__Mediation__IronSource__Common__DummyClient__DummyClient__
              ->field8_0x40).genericMethod)->methodDefinition;
  }
  plVar3 = (longlong *)FUN_?(pMVar2,pMVar2->klass);
  if (plVar3 == (longlong *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar5 = (String *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  pSVar5 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Dummy_,pSVar5,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->static_fields->client = pIVar1;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                   TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->static_fields
                  >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}

