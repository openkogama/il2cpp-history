
/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_InitializeAdConfigSettings
               (DummyAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  if (config != (AdConfigSettings *)0x0) {
    iVar1 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.siteEnum;
    bVar2 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.showTouristPromotion;
    bVar3 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsOpenInNewTab;
    bVar4 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsRedirectToWebpage;
    bVar5 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsModals;
    bVar6 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.integratedSdk;
    bVar7 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowsFallbackAds;
    bVar8 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.showPlayButtonAd;
    bVar9 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.hideGoldShop;
    bVar10 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.allowInHouseAds;
    bVar11 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.removeFullscreenButton;
    bVar12 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.hideSignUp;
    bVar13 = (config->fields)._EmbeddedSiteConfigData_k__BackingField.noPlayButtonVideoIcon;
    (this->fields).siteData.sites = (config->fields)._EmbeddedSiteConfigData_k__BackingField.sites;
    (this->fields).siteData.siteEnum = iVar1;
    (this->fields).siteData.showTouristPromotion = bVar2;
    (this->fields).siteData.allowsOpenInNewTab = bVar3;
    (this->fields).siteData.allowsRedirectToWebpage = bVar4;
    (this->fields).siteData.allowsModals = bVar5;
    (this->fields).siteData.integratedSdk = bVar6;
    (this->fields).siteData.allowsFallbackAds = bVar7;
    (this->fields).siteData.showPlayButtonAd = bVar8;
    (this->fields).siteData.hideGoldShop = bVar9;
    (this->fields).siteData.allowInHouseAds = bVar10;
    (this->fields).siteData.removeFullscreenButton = bVar11;
    (this->fields).siteData.hideSignUp = bVar12;
    (this->fields).siteData.noPlayButtonVideoIcon = bVar13;
    func_?(&(this->fields).siteData,0);
    (this->fields).timeoutAsEnabled = (config->fields)._AdTimeoutAsSuccess_k__BackingField;
    (this->fields).timeoutSuccessDelay = (config->fields)._AdTimeoutAsSuccessDelay_k__BackingField;
    return;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_InitializeCallbackManager
               (DummyAdManager *this,IAdUIManager *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  (this->fields).adUIHandler = handler;
  func_?(&this->fields,handler);
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::DummyAdManager_RequestInterstitial
               (DummyAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&StringLiteral_DummyAdManager___RequestIntersti);
    func_?(&StringLiteral_DummyAdManager___RequestIntersti);
    cRam_? = '\x01';
  }
  message = StringLiteral_DummyAdManager___RequestIntersti;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  pIVar1 = (this->fields).adUIHandler;
  if (pIVar1 != (IAdUIManager *)0x0) {
    cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
    if (cVar2 == '\0') {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                  (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Start,context,
                   (MethodInfo *)0x0);
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).startTime = fVar3;
        if ((this->fields).adUIHandler != (IAdUIManager *)0x0) {
          func_?();
          (this->fields).rewarded = 0;
          return;
        }
      }
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_DummyAdManager___RequestIntersti,(MethodInfo *)0x0);
      if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0
         ) {
        (*(interstitialCallback->fields)._._.invoke_impl)
                  ((interstitialCallback->fields)._._.method_code,0,
                   (interstitialCallback->fields)._._.method);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::DummyAdManager_RequestRewardedAd
               (DummyAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&StringLiteral_DummyAdManager___RequestRewarded);
    func_?(&StringLiteral_DummyAdManager___RequestRewarded);
    cRam_? = '\x01';
  }
  message = StringLiteral_DummyAdManager___RequestRewarded;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  pIVar1 = (this->fields).adUIHandler;
  if (pIVar1 != (IAdUIManager *)0x0) {
    cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
    if (cVar2 == '\0') {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                  (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Start,context,
                   (MethodInfo *)0x0);
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).startTime = fVar3;
        if ((this->fields).adUIHandler != (IAdUIManager *)0x0) {
          func_?();
          (this->fields).rewarded = 1;
          return;
        }
      }
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_DummyAdManager___RequestRewarded,(MethodInfo *)0x0);
      if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        (*(rewardedAdCallback->fields)._._.invoke_impl)
                  ((rewardedAdCallback->fields)._._.method_code,0,
                   (rewardedAdCallback->fields)._._.method);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
     DummyAdManager_UpdateControllerUpdate(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_DummyAdManager___UpdateControlle);
    func_?(&StringLiteral_DummyAdManager___UpdateControlle);
    func_?(&StringLiteral_DummyAdManager___UpdateControlle);
    cRam_? = '\x01';
  }
  pDVar1 = this;
  pIVar2 = (this->fields).adUIHandler;
  if (pIVar2 == (IAdUIManager *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    cVar4 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2);
    if (cVar4 == '\0') {
      return;
    }
    this = (DummyAdManager *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((float)this <= (pDVar1->fields).delay + (pDVar1->fields).startTime) {
      return;
    }
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    this = (DummyAdManager *)CONCAT13((pDVar1->fields).rewarded,this._0_3_);
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar5;
    func_?(args->vector,pOVar5);
    bStack_7 = (pDVar1->fields).timeoutAsEnabled;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?(args->vector + 1,pOVar5);
    fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fStack_8 = fStack_8 - (pDVar1->fields).startTime;
    pOVar5 = (Object *)func_?(TypeInfo__System__Single,&fStack_8);
    if ((pOVar5 != (Object *)0x0) &&
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    func_?(args->vector + 2,pOVar5);
    iStack_9 = (pDVar1->fields).timeoutSuccessDelay;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_9);
    if ((pOVar5 == (Object *)0x0) ||
       (iVar6 = func_?(pOVar5,(args->klass->_0).element_class), iVar6 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = pOVar5;
      func_?(args->vector + 3,pOVar5);
      pSVar10 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_DummyAdManager___UpdateControlle,args,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar10,(MethodInfo *)0x0);
      if ((((pDVar1->fields).rewarded != 0) && ((pDVar1->fields).timeoutAsEnabled != 0)) &&
         (this = (DummyAdManager *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
         (float)(pDVar1->fields).timeoutSuccessDelay <= (float)this - (pDVar1->fields).startTime)) {
        Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
                  (StringLiteral_DummyAdManager___UpdateControlle,(MethodInfo *)0x0);
      }
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      pSVar10 = mscorlib.dll::System::Boolean::Boolean_ToString
                         ((Boolean *)&(pDVar1->fields).rewarded,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_DummyAdManager___UpdateControlle,pSVar10,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Debug);
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar10,(MethodInfo *)0x0);
      if ((pDVar1->fields).rewarded == 0) {
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar11 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (pMVar11,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,
                     AdContext__Enum_None,(MethodInfo *)0x0);
          pIVar2 = (pDVar1->fields).adUIHandler;
          if (pIVar2 != (IAdUIManager *)0x0) {
            func_?(3,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2,3);
            return;
          }
        }
      }
      else {
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar11 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (pMVar11,AdType__Enum_RewardedAd,AdActionType__Enum_Success,AdContext__Enum_None,
                     (MethodInfo *)0x0);
          pIVar2 = (pDVar1->fields).adUIHandler;
          if (pIVar2 != (IAdUIManager *)0x0) {
            func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar2,3);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* DummyAdManager() */

void Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::DummyAdManager__ctor
               (DummyAdManager *this,MethodInfo *method)

{
  (this->fields).delay = 1.5;
  (this->fields).timeoutSuccessDelay = 0x1e;
  return;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_RewardedAdNotAvailableText(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Ads_not_set_up_for_this_build_ta);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Ads_not_set_up_for_this_build_ta,(MethodInfo *)0x0);
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastAd(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastInterstitial(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::AdIntegration::Dummy::DummyAdManager::
         DummyAdManager_get_TimeSinceLastRewarded(DummyAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}

