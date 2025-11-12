
/* IAppLovinClient GetAppLovinClient() */

IAppLovinClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::
AppLovin_1_GetAppLovinClient(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IAppLovinClient *)
           FUN_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient__DummyClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = MethodInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar2 = ((MethodInfo__GoogleMobileAds__Mediation__AppLovin__Common__DummyClient__DummyClient__
              ->field8_0x40).genericMethod)->methodDefinition;
  }
  plVar3 = (longlong *)FUN_?(pMVar2,pMVar2->klass);
  if (plVar3 != (longlong *)0x0) {
    pSVar4 = (String *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    pSVar4 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Dummy_,pSVar4,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
    return pIVar1;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pIVar1 = (IAppLovinClient *)(*pcVar5)();
  return pIVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_Initialize
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar1 != (IAppLovinClient *)0x0) {
    uVar2 = 0;
    pIVar3 = pIVar1->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient)
        {
          pVVar5 = &(pIVar3->vtable).Initialize + pIVar3->interfaceOffsets[uVar2].offset;
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar6 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)(pIVar1,puVar6[1],(code *)*puVar6);
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetDoNotSell(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::
     AppLovin_1_SetDoNotSell(bool doNotSell,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar1 == (IAppLovinClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)doNotSell;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient) {
        pVVar7 = &(pIVar5->vtable).Initialize + (pIVar3[uVar4].offset + 3);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient,3,
                         pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,(ulonglong)doNotSell,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void SetHasUserConsent(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::
     AppLovin_1_SetHasUserConsent(bool hasUserConsent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar1 == (IAppLovinClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)hasUserConsent;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient) {
        pVVar7 = &(pIVar5->vtable).Initialize + (pIVar3[uVar4].offset + 1);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient,1,
                         pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,(ulonglong)hasUserConsent,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void SetIsAgeRestrictedUser(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::
     AppLovin_1_SetIsAgeRestrictedUser(bool isAgeRestrictedUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c == 0)
  {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
  if (pIVar1 == (IAppLovinClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)isAgeRestrictedUser;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient) {
        pVVar7 = &(pIVar5->vtable).Initialize + (pIVar3[uVar4].offset + 2);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient,2,
                         pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,(ulonglong)isAgeRestrictedUser,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* AppLovin() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = AppLovin_1_GetAppLovinClient((MethodInfo *)0x0);
  TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client = pIVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields >>
                  0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

