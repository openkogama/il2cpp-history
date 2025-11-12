
/* IAdColonyAppOptionsClient GetAdColonyAppOptionsClient() */

IAdColonyAppOptionsClient *
Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
AdColonyAppOptions_1_GetAdColonyAppOptionsClient(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IAdColonyAppOptionsClient *)
           FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar2 = ((MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__
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
  pIVar1 = (IAdColonyAppOptionsClient *)(*pcVar5)();
  return pIVar1;
}


/* String GetPrivacyConsentString(AdColonyPrivacyFramework) */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
         AdColonyAppOptions_1_GetPrivacyConsentString
                   (AdColonyPrivacyFramework__Enum privacyFramework,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 == (IAdColonyAppOptionsClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
        pVVar7 = &(pIVar5->vtable).SetPrivacyFrameworkRequired +
                 (pIVar5->interfaceOffsets[uVar4].offset + 3);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (String *)
           (*pVVar7->methodPtr)(pIVar1,(ulonglong)privacyFramework,pVVar7->method,pVVar7->methodPtr)
  ;
  return pSVar3;
}


/* Boolean GetPrivacyFrameworkRequired(AdColonyPrivacyFramework) */

bool Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_GetPrivacyFrameworkRequired
               (AdColonyPrivacyFramework__Enum privacyFramework,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 == (IAdColonyAppOptionsClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
        pVVar7 = &(pIVar5->vtable).SetPrivacyFrameworkRequired +
                 (pIVar5->interfaceOffsets[uVar4].offset + 1);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pVVar7->methodPtr)(pIVar1,(ulonglong)privacyFramework,pVVar7->method,pVVar7->methodPtr);
  return bVar3;
}


/* String GetUserId() */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
         AdColonyAppOptions_1_GetUserId(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    uVar2 = 0;
    pIVar3 = pIVar1->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
          pVVar5 = &(pIVar3->vtable).SetPrivacyFrameworkRequired +
                   (pIVar3->interfaceOffsets[uVar2].offset + 5);
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar6 = (String *)(*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return pSVar6;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar7 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar6 = (String *)(*(code *)*puVar7)(pIVar1,puVar7[1],(code *)*puVar7);
    return pSVar6;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar8)();
  return pSVar6;
}


/* Boolean IsTestMode() */

bool Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_IsTestMode(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    uVar2 = 0;
    pIVar3 = pIVar1->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
          pVVar5 = &(pIVar3->vtable).SetPrivacyFrameworkRequired +
                   (pIVar3->interfaceOffsets[uVar2].offset + 7);
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar6 = (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return bVar6;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar7 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar6 = (*(code *)*puVar7)(pIVar1,puVar7[1],(code *)*puVar7);
    return bVar6;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Void SetPrivacyConsentString(AdColonyPrivacyFramework, String) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_SetPrivacyConsentString
               (AdColonyPrivacyFramework__Enum privacyFramework,String *consentString,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 != (IAdColonyAppOptionsClient *)0x0) {
    FUN_?(2,
                  TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient,
                  pIVar1,privacyFramework,consentString);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPrivacyFrameworkRequired(AdColonyPrivacyFramework, Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_SetPrivacyFrameworkRequired
               (AdColonyPrivacyFramework__Enum privacyFramework,bool isRequired,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions,
                  CONCAT71(in_register_00000011,isRequired));
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 == (IAdColonyAppOptionsClient *)0x0) {
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
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
        pVVar6 = &(pIVar3->vtable).SetPrivacyFrameworkRequired +
                 pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                         ,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(pIVar1,(ulonglong)privacyFramework,(ulonglong)isRequired,pVVar6->method);
  return;
}


/* Void SetTestMode(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_SetTestMode(bool isTestMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 == (IAdColonyAppOptionsClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)isTestMode;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
        pVVar7 = &(pIVar5->vtable).SetPrivacyFrameworkRequired + (pIVar3[uVar4].offset + 6);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                         ,6,pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,(ulonglong)isTestMode,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void SetUserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1_SetUserId(String *userId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->
           client;
  if (pIVar1 == (IAdColonyAppOptionsClient *)0x0) {
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
          TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient) {
        pVVar6 = &(pIVar4->vtable).SetPrivacyFrameworkRequired +
                 (pIVar4->interfaceOffsets[uVar3].offset + 4);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(pIVar1,userId,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* AdColonyAppOptions() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
     AdColonyAppOptions_1__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IAdColonyAppOptionsClient *)
           FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dummy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__;
  if (MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__->
      is_inflated != 0) {
    pMVar2 = ((MethodInfo__GoogleMobileAds__Mediation__AdColony__Common__DummyClient__DummyClient__
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
  TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->static_fields->client =
       pIVar1;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                   TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->
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

