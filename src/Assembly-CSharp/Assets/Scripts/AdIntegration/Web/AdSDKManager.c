
/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_InitializeAdConfigSettings
               (AdSDKManager *this,AdConfigSettings *config,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__UnityEngine__Debug);
  func_?(uVar1);
  message = (Object *)func_?(&StringLiteral_AdSDKManager_is_used_by_the_WebA);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager__InitializeAdConfigSettings_AdConfigSettings_
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_InitializeCallbackManager
               (AdSDKManager *this,IAdUIManager *handler,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__UnityEngine__Debug);
  func_?(uVar1);
  message = (Object *)func_?(&StringLiteral_AdSDKManager_is_used_by_the_WebA);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager__InitializeCallbackManager_Assets__Scripts__AdIntegration__IAdUIManager_
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnAdSDKInitReady() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_OnAdSDKInitReady(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAdSDK);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdSDKManager_failed_to_init_adSD);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_adSDK_initialized);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).adSDK == (IAdSDK *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar2 = FUN_?(1);
  if (cVar2 != '\0') {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_adSDK_initialized,(MethodInfo *)0x0);
    (this->fields).wasInitializedSuccessfully = 1;
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar3 = StringLiteral_AdSDKManager_failed_to_init_adSD;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar4 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_RequestInterstitial
               (AdSDKManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAdSDK);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequestInterstitial_in_adsdkmana);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_adSDK_RequestInterstitial_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_wasInitializedSuccessfully_is_fa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  AStack_2 = context;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_RequestInterstitial_in_adsdkmana,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if ((this->fields).wasInitializedSuccessfully == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_wasInitializedSuccessfully_is_fa,(MethodInfo *)0x0);
    if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0)
    {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(interstitialCallback->fields)._._.invoke_impl)
                ((interstitialCallback->fields)._._.method_code,1,
                 (interstitialCallback->fields)._._.method);
      return;
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_adSDK_RequestInterstitial_,(MethodInfo *)0x0);
    pIVar4 = (this->fields).adSDK;
    if (pIVar4 != (IAdSDK *)0x0) {
      uVar5 = 0;
      pIVar6 = pIVar4->klass;
      uVar7._0_1_ = (pIVar6->_1).rank;
      uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar6->interfaceOffsets[uVar5].interfaceType == (Il2CppClass *)TypeInfo__IAdSDK) {
            pVVar8 = &(pIVar6->vtable).PreInit + (pIVar6->interfaceOffsets[uVar5].offset + 2);
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
      pVVar8 = (VirtualInvokeData *)FUN_?(pIVar4);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar8->methodPtr)(pIVar4,interstitialCallback,pVVar8->method,pVVar8->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
     AdSDKManager_RequestRewardedAd
               (AdSDKManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAdSDK);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequestRewardedAd_in_adsdkmanage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_adSDK_ShowRewardedAd_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_wasInitializedSuccessfully_is_fa);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  AStack_2 = context;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_RequestRewardedAd_in_adsdkmanage,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if ((this->fields).wasInitializedSuccessfully == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_wasInitializedSuccessfully_is_fa,(MethodInfo *)0x0);
    if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(rewardedAdCallback->fields)._._.invoke_impl)
                ((rewardedAdCallback->fields)._._.method_code,1,
                 (rewardedAdCallback->fields)._._.method);
      return;
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_adSDK_ShowRewardedAd_,(MethodInfo *)0x0);
    pIVar4 = (this->fields).adSDK;
    if (pIVar4 != (IAdSDK *)0x0) {
      uVar5 = 0;
      pIVar6 = pIVar4->klass;
      uVar7._0_1_ = (pIVar6->_1).rank;
      uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar6->interfaceOffsets[uVar5].interfaceType == (Il2CppClass *)TypeInfo__IAdSDK) {
            pVVar8 = &(pIVar6->vtable).PreInit + (pIVar6->interfaceOffsets[uVar5].offset + 3);
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
      pVVar8 = (VirtualInvokeData *)FUN_?(pIVar4);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar8->methodPtr)(pIVar4,rewardedAdCallback,pVVar8->method,pVVar8->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Type get_AdSDKType() */

Type * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
       AdSDKManager_get_AdSDKType(AdSDKManager *this,MethodInfo *method)

{
  pIVar1 = (this->fields).adSDK;
  if (pIVar1 == (IAdSDK *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Type *)(*pcVar2)();
    return pTVar3;
  }
  pIVar4 = &(pIVar1->klass->_0).byval_arg;
  apTStackX_10[0] = (Type *)0x0;
  pIStackX_8 = pIVar4;
  cVar5 = FUN_?(pIVar4,&pIStackX_8,apTStackX_10);
  if (cVar5 != '\0') {
    return apTStackX_10[0];
  }
  lVar6 = FUN_?(uRam_?);
  *(Il2CppType **)(lVar6 + 0x10) = pIVar4;
  pTVar3 = (Type *)FUN_?();
  return pTVar3;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_RewardedAdNotAvailableText(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Unable_to_display_rewarded_ad__P);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Unable_to_display_rewarded_ad__P;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    return (String *)0x0;
  }
  this_01 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_01,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_01 != (Regex *)0x0) {
    if (((this_01->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar1->fields)._stringLength;
    }
    pMVar2 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_01,0,-1,pSVar1,0,(pSVar1->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar2 != (Match *)0x0) {
      if ((pMVar2->fields)._._capcount != 0) {
        this_02 = (GroupCollection *)
                  (*(pMVar2->klass->vtable).get_Groups.methodPtr)
                            (pMVar2,(pMVar2->klass->vtable).get_Groups.method);
        if (((this_02 == (GroupCollection *)0x0) ||
            (pGVar3 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_02,1,(MethodInfo *)0x0), pGVar3 == (Group *)0x0)
            ) || (pSVar1 = (String *)
                           (*(pGVar3->klass->vtable).ToString.methodPtr)
                                     (pGVar3,(pGVar3->klass->vtable).ToString.method),
                 pSVar1 == (String *)0x0)) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                           (pSVar1,(MethodInfo *)0x0);
      }
      if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
        pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 == (TM *)0x0) goto code_?;
        if ((pTVar4->fields).catalog != (Catalog *)0x0) {
          pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar4 == (TM *)0x0) ||
             (this_00 = (pTVar4->fields).catalog, this_00 == (Catalog *)0x0))
          goto code_?;
          this_03 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this_00,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_03 != (CatalogEntry *)0x0) &&
             ((text = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                (this_03,0,(MethodInfo *)0x0), text != (String *)0x0 &&
              ((text->fields)._stringLength != 0)))) {
            pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (text,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastAd(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  lVar1 = (TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  lVar2 = (TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (lVar1 <= lVar2) {
    lVar2 = lVar1;
  }
  return (TimeSpan)lVar2;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastInterstitial(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::AdSDKManager::
         AdSDKManager_get_TimeSinceLastRewarded(AdSDKManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}

