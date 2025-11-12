
/* Void SetConsentMetaData(String, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::
     UnityAds_1_SetConsentMetaData(String *key,bool metaDataValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,
                  CONCAT71(in_register_00000011,metaDataValue));
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
                         TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pIVar6->SetConsentMetaData).methodPtr)
            (pIVar1,key,(ulonglong)metaDataValue,(pIVar6->SetConsentMetaData).method);
  return;
}


/* UnityAds() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::UnityAds_1__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IUnityAdsClient *)
           FUN_?(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar2 = ((MethodInfo__GoogleMobileAds__Mediation__UnityAds__Common__DummyClient__DummyClient__
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
  TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->static_fields->client = pIVar1;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                   TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->static_fields >>
                  0xc);
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

