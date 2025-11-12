
/* Void SetCCPAStatus(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
     LiftoffMonetize_1_SetCCPAStatus(bool ccpaStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar1 == (ILiftoffMonetizeClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)ccpaStatus;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient) {
        pVVar7 = &(pIVar5->vtable).UpdateConsentStatus + (pIVar3[uVar4].offset + 4);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                         ,4,pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,(ulonglong)ccpaStatus,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void SetGDPRMessageVersion(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
     LiftoffMonetize_1_SetGDPRMessageVersion(String *gdprMessageVersion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar1 == (ILiftoffMonetizeClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  pIVar4 = pIVar1->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient) {
        pVVar6 = &(pIVar4->vtable).UpdateConsentStatus +
                 (pIVar4->interfaceOffsets[uVar3].offset + 3);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(pIVar1,gdprMessageVersion,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void SetGDPRStatus(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
     LiftoffMonetize_1_SetGDPRStatus(bool gdprStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar1 == (ILiftoffMonetizeClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)gdprStatus;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient) {
        pVVar7 = &(pIVar5->vtable).UpdateConsentStatus + (pIVar3[uVar4].offset + 2);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                         ,2,pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,(ulonglong)gdprStatus,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void UpdateCCPAStatus(VungleCCPAStatus) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
     LiftoffMonetize_1_UpdateCCPAStatus(VungleCCPAStatus__Enum_1 consentStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar1 == (ILiftoffMonetizeClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  pIVar4 = pIVar1->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient) {
        pVVar6 = &(pIVar4->vtable).UpdateConsentStatus +
                 (pIVar4->interfaceOffsets[uVar3].offset + 1);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(pIVar1,(ulonglong)consentStatus,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void UpdateConsentStatus(VungleConsentStatus, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
     LiftoffMonetize_1_UpdateConsentStatus
               (VungleConsentStatus__Enum_1 consentStatus,String *consentMessageVersion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar1 != (ILiftoffMonetizeClient *)0x0) {
    FUN_?(0,
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                  ,pIVar1,consentStatus,consentMessageVersion);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* LiftoffMonetize() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
     LiftoffMonetize_1__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__DummyClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (ILiftoffMonetizeClient *)
           FUN_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__DummyClient)
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__DummyClient__DummyClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = 
  MethodInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar2 = ((
              MethodInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__DummyClient__DummyClient__
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
  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->static_fields->client
       = pIVar1;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                   TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
                   static_fields >> 0xc);
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

