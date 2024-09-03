
/* Void AdLog(Exception) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog
               (Exception *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pDStack_1 = (Debug_2__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_1 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  if (cRam_? == '\0') {
    pDStack_1 = (Debug_2__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    ppIStack_2 = &TypeInfo__UnityEngine__ILogger;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_1 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  if (cRam_? == '\0') {
    pDStack_1 = (Debug_2__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_1 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 != (ILogger_1 *)0x0) {
    pDStack_1 = (Debug_2__Class *)e;
    ppIStack_2 = (ILogger_1__Class **)0x3;
    pIStack_4 = pIVar3;
    func_?(5,TypeInfo__UnityEngine__ILogger);
    return;
  }
  pDStack_1 = (Debug_2__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AdLog(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_AdLog_1
               (String *msg,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pDStack_1 = (Debug_2__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_1 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  if (cRam_? == '\0') {
    pDStack_1 = (Debug_2__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    ppIStack_2 = &TypeInfo__UnityEngine__ILogger;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_1 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  if (cRam_? == '\0') {
    pDStack_1 = (Debug_2__Class *)&TypeInfo__UnityEngine__Debug;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    pDStack_1 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 != (ILogger_1 *)0x0) {
    pDStack_1 = (Debug_2__Class *)msg;
    ppIStack_2 = (ILogger_1__Class **)0x3;
    pIStack_4 = pIVar3;
    func_?(5,TypeInfo__UnityEngine__ILogger);
    return;
  }
  pDStack_1 = (Debug_2__Class *)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreateAdManagerHack() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_CreateAdManagerHack(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
    func_?(&StringLiteral_Creating_an_ad_manager_that_shou);
    cRam_? = '\x01';
  }
  message = StringLiteral_Creating_an_ad_manager_that_shou;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager;
  value = (IAdManager *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).sdkManager = value;
  func_?(&(this->fields).sdkManager,value);
  (this->fields).embeddedSiteSDKAvailable = 1;
  return;
}


/* Void ForceCreateEmbeddedSiteSDK(EmbeddedSiteConfigData) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_ForceCreateEmbeddedSiteSDK
               (WebAdManager *this,EmbeddedSiteConfigData site,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
    func_?(&TypeInfo__EmbeddedSiteConfigData);
    func_?(&StringLiteral__AdManager__unity_sdk__forcefull);
    func_?(&StringLiteral_Creating_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::ValueType::ValueType_ToString
                     ((ValueType *)&stack0xffffffe0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Creating_,pSVar1,StringLiteral__AdManager__unity_sdk__forcefull,
                      (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager;
  value = (IAdManager *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).sdkManager = value;
  func_?();
  (this->fields).siteData.sites = site.sites;
  (this->fields).siteData.siteEnum = site.siteEnum;
  (this->fields).siteData.showTouristPromotion = site.showTouristPromotion;
  (this->fields).siteData.allowsOpenInNewTab = site.allowsOpenInNewTab;
  (this->fields).siteData.allowsRedirectToWebpage = site.allowsRedirectToWebpage;
  (this->fields).siteData.allowsModals = site.allowsModals;
  (this->fields).siteData.integratedSdk = site.integratedSdk;
  (this->fields).siteData.allowsFallbackAds = site.allowsFallbackAds;
  (this->fields).siteData.showPlayButtonAd = site.showPlayButtonAd;
  (this->fields).siteData.hideGoldShop = site.hideGoldShop;
  (this->fields).siteData.allowInHouseAds = site.allowInHouseAds;
  (this->fields).siteData.removeFullscreenButton = site.removeFullscreenButton;
  (this->fields).siteData.hideSignUp = site.hideSignUp;
  (this->fields).siteData.noPlayButtonVideoIcon = site.noPlayButtonVideoIcon;
  func_?(&(this->fields).siteData,0);
  (this->fields).embeddedSiteSDKAvailable = 1;
  return;
}


/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InitializeAdConfigSettings
               (WebAdManager *this,AdConfigSettings *config,MethodInfo *method)

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
    (this->fields).timeoutAdAfterDelayAsUnlocked =
         (config->fields)._AdTimeoutAsSuccess_k__BackingField;
    (this->fields).timeoutSuccessDelay = (config->fields)._AdTimeoutAsSuccessDelay_k__BackingField;
    (this->fields).interstitialTimeoutAfterRewardedAd =
         (float)(config->fields)._InterstitialTimeoutAfterRewardedAd_k__BackingField;
    return;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeCallbackManager(IAdUIManager) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InitializeCallbackManager
               (WebAdManager *this,IAdUIManager *adUIManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager);
    func_?(&TypeInfo__AdIntegration__InHouse__InHouseAdManager);
    cRam_? = '\x01';
  }
  (this->fields).adUIManager = adUIManager;
  func_?(&(this->fields).adUIManager,adUIManager);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).embedded != 0) {
      bVar2 = MVClientSettings::MVClientSettings_get_WebAdSDKsEnabled((MethodInfo *)0x0);
      if ((bVar2 != 0) && ((this->fields).siteData.integratedSdk != 0)) {
        method_00 = TypeInfo__Assets__Scripts__AdIntegration__Web__AdSDKManager;
        value = (IAdManager *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        (this->fields).sdkManager = value;
        func_?(&(this->fields).sdkManager,value);
        (this->fields).embeddedSiteSDKAvailable = 1;
      }
    }
    if ((this->fields).siteData.allowInHouseAds != 0) {
      this_00 = (InHouseAdManager *)
                func_?(TypeInfo__AdIntegration__InHouse__InHouseAdManager);
      Assembly-CSharp.dll::AdIntegration::InHouse::InHouseAdManager::InHouseAdManager__ctor
                (this_00,(MethodInfo *)0x0);
      (this->fields).inHouseAdManager = (IAdManager *)this_00;
      func_?(&(this->fields).inHouseAdManager,this_00);
      (this->fields).inHouseAdManagerAvailable = 1;
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeInHouse(InHouseAdController) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InitializeInHouse
               (WebAdManager *this,InHouseAdController *inHouseAdController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdIntegration__InHouse__InHouseAdManager);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inHouseAdManager;
  if (((pIVar1 != (IAdManager *)0x0) &&
      ((TypeInfo__AdIntegration__InHouse__InHouseAdManager->_1).naturalAligment <=
       (pIVar1->klass->_1).naturalAligment)) &&
     ((pIVar1->klass->_1).typeHierarchy
      [(TypeInfo__AdIntegration__InHouse__InHouseAdManager->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__AdIntegration__InHouse__InHouseAdManager)) {
    pIVar1[1].monitor = (MonitorData *)inHouseAdController;
    func_?(&pIVar1[1].monitor,inHouseAdController);
    pMVar2 = pIVar1[1].monitor;
    pMVar3 = pIVar1[4].monitor;
    if (pMVar2 == (MonitorData *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = cRam_? == '\0';
    pMVar2[0x28] = *(MonitorData *)&pIVar1[4].klass;
    *(MonitorData **)(pMVar2 + 0x2c) = pMVar3;
    if (bVar5) {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    x = (Object_1 *)pIVar1[1].monitor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    *(bool *)&pIVar1[1].klass = bVar6;
    return;
  }
  return;
}


/* Void InterstitialAdShownSDKCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_InterstitialAdShownSDKCallback
               (WebAdManager *this,InterstitialAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EmbeddedSite);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
    func_?(&StringLiteral_Ad_InterstitialShown);
    func_?(&StringLiteral_Ad_InterstitialShown_);
    func_?(&StringLiteral_InterstitialAdShownSDKCallback__);
    func_?(&StringLiteral_InterstitialAdShownSDKCallback__);
    func_?(&StringLiteral_Interstitial);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_InterstitialAdShownSDKCallback__;
  if ((result != InterstitialAdResult__Enum_Done) &&
     ((this->fields).siteData.allowsFallbackAds != 0)) {
    pIStack_2 = TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pIStack_2,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_InterstitialAdShownSDKCallback__,pSVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    WebAdManager_RequestNonEmbeddedInterstitialAd(this,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialShown;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  pIStack_2 = (InterstitialAdResult__Enum__Class *)TypeInfo__EmbeddedSite;
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pIStack_2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Ad_InterstitialShown_,pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Interstitial,(MethodInfo *)0x0);
    pIStack3 = (this->fields).adUIManager;
    if (pIStack3 != (IAdUIManager *)0x0) {
      puStack4 = (undefined *)0x3;
      pIStack5 = TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager;
      uStack6 = 3;
      func_?();
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnInHouseInterstitialAdShownCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnInHouseInterstitialAdShownCallback
               (WebAdManager *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&StringLiteral_Interstitial);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Interstitial,(MethodInfo *)0x0);
    pIStack1 = (this->fields).adUIManager;
    if (pIStack1 != (IAdUIManager *)0x0) {
      puStack2 = (undefined *)0x3;
      pIStack3 = TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager;
      uStack4 = 3;
      func_?();
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnInHouseRewardedAdShownCallback(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnInHouseRewardedAdShownCallback
               (WebAdManager *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  WebAdManager_RewardAdSuccess(this,(MethodInfo *)0x0);
  return;
}


/* Void OnInterstitialShownCallback(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnInterstitialShownCallback
               (WebAdManager *this,bool ok,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
    ;
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&
                    Assets__Scripts__AdIntegration__Web__WebAdManager__JSONInterstitialAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONInterstitialAdSuccessful>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInHouseInterstitialAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
    func_?(&StringLiteral_Ad_InterstitialShown);
    func_?(&StringLiteral_Ad_InterstitialShown_Kogama);
    func_?(&StringLiteral_OnInterstitialShownCallback__);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_Interstitial);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Boolean);
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString((Boolean *)&ok,(MethodInfo *)0x0);
  value = json;
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_OnInterstitialShownCallback__,pSVar1,::StringLiteral____,json,
                      (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    json = (String *)&TypeInfo__UnityEngine__Debug;
    _ok = (String *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    json = (String *)TypeInfo__UnityEngine__Debug;
    _ok = (String *)&UNK_?;
    func_?();
  }
  json = (String *)0x0;
  _ok = pSVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialShown;
  if (cRam_? == '\0') {
    method = (MethodInfo *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    method = (MethodInfo *)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)0x1;
  json = pSVar1;
  _ok = (String *)&UNK_?;
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialShown_Kogama;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  WVar2 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_5
                    (value,
                     Assets__Scripts__AdIntegration__Web__WebAdManager__JSONInterstitialAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONInterstitialAdSuccessful>_System__String_
                    );
  iVar3 = _UNK_?;
  if (((ok == 0) || (WVar2.status == 0)) && (UNK_? != '\0')) {
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)&UNK_?,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInHouseInterstitialAdShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
               ,(MethodInfo *)0x0);
    if (iVar3 != 0) {
      puStack4 = (undefined *)_UNK_?;
      pIStack5 = TypeInfo__Assets__Scripts__AdIntegration__IAdManager;
      puStack6 = (undefined *)0x7;
      pIStack7 = (IAdUIManager__Class *)iVar3;
      pUStack8 = this_01;
      func_?();
      return;
    }
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                (this_00,AdType__Enum_InterstitialAd,AdActionType__Enum_Success,AdContext__Enum_None
                 ,(MethodInfo *)0x0);
      WebAdManager_SetFinishedWatchingAd
                ((WebAdManager *)&UNK_?,StringLiteral_Interstitial,(MethodInfo *)0x0);
      pUStack8 = (UnityAction_1_System_Int32Enum_ *)_UNK_?;
      if (_UNK_? != 0) {
        puStack4 = (undefined *)0x3;
        pIStack7 = TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager;
        pIStack5 = (IAdManager__Class *)0x3;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnRewardedAdShownCallback(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_OnRewardedAdShownCallback
               (WebAdManager *this,bool ok,String *json,MethodInfo *method)

{
  pWVar1 = (WebAdManager *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    Assets__Scripts__AdIntegration__Web__WebAdManager__JSONRewardedAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONRewardedAdSuccessful>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInHouseRewardedAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&StringLiteral_OnRewardedAdShownCallback_);
    func_?(&StringLiteral_Ad_RewardedShown);
    func_?(&::StringLiteral____);
    func_?(&StringLiteral_Ad_RewardedShown_Kogama);
    func_?(&StringLiteral_OnRewardedAdShownCallback___Ad_s);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Boolean);
  }
  pSVar2 = mscorlib.dll::System::Boolean::Boolean_ToString((Boolean *)&ok,(MethodInfo *)0x0);
  value = (WebAdManager *)json;
  pSVar2 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_OnRewardedAdShownCallback_,pSVar2,::StringLiteral____,json,
                      (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  iVar3 = 4;
  if (ok != 0) {
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    WVar4 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                      ((String *)value,
                       Assets__Scripts__AdIntegration__Web__WebAdManager__JSONRewardedAdSuccessful_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONRewardedAdSuccessful>_System__String_
                      );
    json = (String *)CONCAT22(json._2_2_,WVar4);
    pSVar2 = json;
    json._0_1_ = WVar4.status;
    json = pSVar2;
    if ((bool)json == 0) {
      WebAdManager_AdLog_1(StringLiteral_OnRewardedAdShownCallback___Ad_s,(MethodInfo *)0x0);
      iVar3 = 0;
      pWVar1 = value;
    }
    else {
      pWVar1 = value;
      if (WVar4.noReward == 0) {
        WebAdManager_SendStat(StringLiteral_Ad_RewardedShown,(MethodInfo *)0x0);
        this = (WebAdManager *)0x0;
        WebAdManager_SendStat(StringLiteral_Ad_RewardedShown_Kogama,(MethodInfo *)0x0);
        iVar3 = 3;
        pWVar1 = value;
      }
    }
  }
  if ((this->fields).timeoutAdAfterDelayAsUnlocked == 0) {
code_?:
    if (iVar3 != 3) {
      if ((iVar3 == 0) && ((this->fields).inHouseAdManagerAvailable != 0)) {
        pIVar5 = (this->fields).inHouseAdManager;
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInHouseRewardedAdShownCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar5 == (IAdManager *)0x0) {
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar7 = &UNK_?;
        func_?();
        *unaff_FS_OFFSET = puVar7;
        return;
      }
      goto code_?;
    }
  }
  else {
    pWVar1 = (WebAdManager *)&UNK_?;
    json = (String *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((float)json - (this->fields).timeOfRewardedAdStart <
        (float)(this->fields).timeoutSuccessDelay) goto code_?;
  }
  WebAdManager_RewardAdSuccess(this,(MethodInfo *)0x0);
  pWVar1 = this;
code_?:
  *unaff_FS_OFFSET = pWVar1;
  return;
}


/* Void PrepareForAd(Boolean, AdContext, Action, Action) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_PrepareForAd
               (WebAdManager *this,bool rewarded,AdContext__Enum context,Action *onAdShowing,
               Action *requestAd,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&StringLiteral_Ad_already_showing__aborting);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adUIManager;
  if (pIVar1 == (IAdUIManager *)0x0) goto code_?;
  cVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
  pSVar3 = StringLiteral_Ad_already_showing__aborting;
  if (cVar2 == '\0') {
    (this->fields).currentAdType = context;
    (this->fields).showingAd = 1;
    (this->fields).probablyWatchingAd = 0;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).probablyWatchingAdStarted = fVar4;
    if (rewarded != 0) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).timeOfRewardedAdStart = fVar4;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
      func_?(&StringLiteral_Ad_RewardRequest_);
      func_?(&StringLiteral_Ad_InterstitialRequest_);
      func_?(&StringLiteral_Ad_RewardRequest);
      func_?(&StringLiteral_Ad_InterstitialRequest);
      cRam_? = '\x01';
    }
    pSVar3 = StringLiteral_Ad_InterstitialRequest;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__StatHatWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_Ad_InterstitialRequest_;
    EStack_5.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
    EStack_5.monitor = (MonitorData *)0xffffffff;
    str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_5,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    EStack_5.monitor = (MonitorData *)&UNK_?;
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
              (this_00,IncrementStatRequestType__Enum_InterstitialAdRequest,0,(MethodInfo *)0x0);
    onAdShowing = (Action *)
                  MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
    if (onAdShowing == (Action *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              ((MVNetworkGame_OperationRequests *)onAdShowing,(uint)rewarded,
               AdActionType__Enum_Start,context,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  }
  if (onAdShowing != (Action *)0x0) {
    (*(code *)(onAdShowing->fields)._._.invoke_impl)
              ((onAdShowing->fields)._._.method_code,(onAdShowing->fields)._._.method);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RequestInterstitial
               (WebAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCB,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0___RequestInterstitial_b__0__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0___RequestInterstitial_b__1__
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0
                   );
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)interstitialCB;
    func_?(value + 1,interstitialCB);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    value[2].klass = (Object__Class *)context;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,value,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0___RequestInterstitial_b__0__
               ,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,value,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass49_0___RequestInterstitial_b__1__
               ,(MethodInfo *)0x0);
    WebAdManager_PrepareForAd(this,0,context,(Action *)this_00,(Action *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RequestNonEmbeddedInterstitialAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RequestNonEmbeddedInterstitialAd(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_System::String>);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
                   );
    func_?(&StringLiteral_RequestNonEmbeddedInterstitialAd);
    func_?(&StringLiteral_showVideoAd);
    cRam_? = '\x01';
  }
  message = StringLiteral_RequestNonEmbeddedInterstitialAd;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<bool,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnInterstitialShownCallback_bool__System__String_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (StringLiteral_showVideoAd,(Action_2_Boolean_String_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void RequestNonEmbeddedRewardedAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RequestNonEmbeddedRewardedAd(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_System::String>);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
                   );
    func_?(&StringLiteral_RequestNonEmbeddedRewardedAd___n);
    func_?(&StringLiteral_showRewardedVideoAd);
    cRam_? = '\x01';
  }
  message = StringLiteral_RequestNonEmbeddedRewardedAd___n;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<bool,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__OnRewardedAdShownCallback_bool__System__String_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (StringLiteral_showRewardedVideoAd,(Action_2_Boolean_String_ *)this_00,(MethodInfo *)0x0
            );
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RequestRewardedAd
               (WebAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0___RequestRewardedAd_b__0__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0___RequestRewardedAd_b__1__
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0
                   );
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)rewardedAdCallback;
    func_?(value + 1,rewardedAdCallback);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    value[2].klass = (Object__Class *)context;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,value,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0___RequestRewardedAd_b__0__
               ,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,value,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager____c__DisplayClass46_0___RequestRewardedAd_b__1__
               ,(MethodInfo *)0x0);
    WebAdManager_PrepareForAd(this,1,context,(Action *)this_00,(Action *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RewardAdSuccess() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RewardAdSuccess(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&StringLiteral_Rewarded);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastSeenRewardedAd = fVar1;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Rewarded,(MethodInfo *)0x0);
    pIStack2 = (this->fields).adUIManager;
    if (pIStack2 != (IAdUIManager *)0x0) {
      puStack3 = (undefined *)0x3;
      pIStack4 = TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager;
      uStack5 = 4;
      func_?();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RewardedAdShownSDKCallback(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_RewardedAdShownSDKCallback
               (WebAdManager *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EmbeddedSite);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    func_?(&StringLiteral_Rewarded);
    func_?(&StringLiteral_RewardedAdShownSDKCallback___tim);
    func_?(&StringLiteral_Ad_RewardedShown);
    func_?(&StringLiteral_RewardedAdShownSDKCallback__);
    func_?(&StringLiteral_RewardedAdShownSDKCallback___Rew);
    func_?(&StringLiteral_Ad_RewardedShown_);
    cRam_? = '\x01';
  }
  pRStack_1 = TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pRStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_RewardedAdShownSDKCallback__,pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  if ((this->fields).timeoutAdAfterDelayAsUnlocked != 0) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pSVar2 = StringLiteral_RewardedAdShownSDKCallback___tim;
    if ((float)(this->fields).timeoutSuccessDelay <= fVar3 - (this->fields).timeOfRewardedAdStart) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      result = RewardedAdResult__Enum_RewardUnlocked;
      goto code_?;
    }
  }
  if (((result != RewardedAdResult__Enum_RewardNotUnlocked) &&
      (result != RewardedAdResult__Enum_RewardUnlocked)) &&
     ((this->fields).siteData.allowsFallbackAds != 0)) {
    WebAdManager_RequestNonEmbeddedRewardedAd(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  pSVar2 = StringLiteral_RewardedAdShownSDKCallback___Rew;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_Ad_RewardedShown;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
  pRStack_1 = (RewardedAdResult__Enum__Class *)TypeInfo__EmbeddedSite;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pRStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Ad_RewardedShown_,pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar2,1,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
              (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Success,AdContext__Enum_None,
               (MethodInfo *)0x0);
    WebAdManager_SetFinishedWatchingAd(this,StringLiteral_Rewarded,(MethodInfo *)0x0);
    if (result == RewardedAdResult__Enum_RewardUnlocked) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastSeenRewardedAd = fVar3;
    }
    if ((this->fields).adUIManager != (IAdUIManager *)0x0) {
      uStack4 = 4;
      puStack5 = (undefined *)result;
      func_?();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SendRequestStats(Boolean, AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_SendRequestStats
               (WebAdManager *this,bool rewarded,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&StringLiteral_Ad_RewardRequest_);
    func_?(&StringLiteral_Ad_InterstitialRequest_);
    func_?(&StringLiteral_Ad_RewardRequest);
    func_?(&StringLiteral_Ad_InterstitialRequest);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Ad_InterstitialRequest;
  if (rewarded != 0) {
    pSVar1 = StringLiteral_Ad_RewardRequest;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_Ad_InterstitialRequest_;
  if (rewarded != 0) {
    pSVar1 = StringLiteral_Ad_RewardRequest_;
  }
  EStack_2.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  puStack_3 = (undefined *)context;
  EStack_2.monitor = (MonitorData *)0xffffffff;
  str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
              (this_00,(uint)rewarded,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendStat(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager_SendStat
               (String *stat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(stat,1,(MethodInfo *)0x0);
  return;
}


/* Void SetFinishedWatchingAd(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_SetFinishedWatchingAd(WebAdManager *this,String *adType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Finished);
    func_?(&StringLiteral_Finished_);
    func_?(&StringLiteral__Success);
    func_?(&StringLiteral_Ad_);
    func_?(&StringLiteral__Failure);
    cRam_? = '\x01';
  }
  (this->fields).showingAd = 0;
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Ad_,adType,StringLiteral_Finished,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_Ad_,adType,StringLiteral_Finished_,pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  if ((this->fields).probablyWatchingAd == 0) {
    pSStack2 = TypeInfo__System__String;
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if (values->max_length != 0) {
      values->vector[0] = StringLiteral_Ad_;
      pSStack2 = (String__Array__Class *)values->vector;
      func_?();
      if (1 < values->max_length) {
        pSStack2 = (String__Array__Class *)(values->vector + 1);
        values->vector[1] = adType;
        func_?();
        if (2 < values->max_length) {
          values->vector[2] = StringLiteral_Finished_;
          pSStack2 = (String__Array__Class *)(values->vector + 2);
          func_?();
          pSVar1 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (3 < values->max_length) {
            values->vector[3] = pSVar1;
            pSStack2 = (String__Array__Class *)(values->vector + 3);
            func_?();
            pSVar1 = StringLiteral__Failure;
code_?:
            if (4 < values->max_length) {
              values->vector[4] = pSVar1;
              pSStack2 = (String__Array__Class *)(values->vector + 4);
              func_?();
              pSVar1 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    (this->fields).probablyWatchingAd = 0;
    pSStack2 = TypeInfo__System__String;
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if (values->max_length != 0) {
      values->vector[0] = StringLiteral_Ad_;
      pSStack2 = (String__Array__Class *)values->vector;
      func_?();
      if (1 < values->max_length) {
        pSStack2 = (String__Array__Class *)(values->vector + 1);
        values->vector[1] = adType;
        func_?();
        if (2 < values->max_length) {
          values->vector[2] = StringLiteral_Finished_;
          pSStack2 = (String__Array__Class *)(values->vector + 2);
          func_?();
          pSVar1 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (3 < values->max_length) {
            values->vector[3] = pSVar1;
            pSStack2 = (String__Array__Class *)(values->vector + 3);
            func_?();
            pSVar1 = StringLiteral__Success;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartedWatchingAd() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_StartedWatchingAd(WebAdManager *this,MethodInfo *method)

{
  (this->fields).showingAd = 1;
  (this->fields).probablyWatchingAd = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).probablyWatchingAdStarted = fVar1;
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_UpdateControllerUpdate(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_System::String>);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__WebCallbackAdAvailable_bool__System__String_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__WebCallbackRewardedAdAvailable_bool__System__String_
                   );
    func_?(&StringLiteral_Requesting_ad);
    func_?(&StringLiteral_requestRewardedVideoAd);
    func_?(&StringLiteral_requestVideoAd);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  message = StringLiteral_Requesting_ad;
  if (_UNK_? <= fVar1 - (this->fields).updateTime) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0)
    ;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).updateTime = fVar1;
    pUVar2 = (UnityAction_2_System_Int32_System_Int32_ *)
             func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (pUVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__WebCallbackAdAvailable_bool__System__String_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
              (StringLiteral_requestVideoAd,(Action_2_Boolean_String_ *)pUVar2,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (pUVar2,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Web__WebAdManager__WebCallbackRewardedAdAvailable_bool__System__String_
               ,(MethodInfo *)0x0);
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
              (StringLiteral_requestRewardedVideoAd,(Action_2_Boolean_String_ *)pUVar2,
               (MethodInfo *)0x0);
  }
  if (((this->fields).showingAd != 0) && ((this->fields).probablyWatchingAd == 0)) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (_UNK_? <= fVar1 - (this->fields).probablyWatchingAdStarted) {
      (this->fields).probablyWatchingAd = 1;
    }
  }
  return;
}


/* Void WebCallbackAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_WebCallbackAdAvailable
               (WebAdManager *this,bool ok,String *jsonData,MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    Assets__Scripts__AdIntegration__Web__WebAdManager__JSONAdReturnedData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONAdReturnedData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_WebCallbackAdAvailable__);
    func_?(&StringLiteral_WebCallbackAdAvailable);
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  (this->fields).webReturnedAvailabilityInterstitial = 0;
  pSVar3 = StringLiteral_WebCallbackAdAvailable;
  if (bVar2) {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if (ok != 0) {
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    WVar4 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_5
                      (jsonData,
                       Assets__Scripts__AdIntegration__Web__WebAdManager__JSONAdReturnedData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONAdReturnedData>_System__String_
                      );
    (this->fields).webReturnedAvailabilityInterstitial = WVar4.status;
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                       ((Boolean *)&this->fields,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_WebCallbackAdAvailable__,pSVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = puStack_1;
  return;
}


/* Void WebCallbackRewardedAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_WebCallbackRewardedAdAvailable
               (WebAdManager *this,bool ok,String *jsonData,MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    Assets__Scripts__AdIntegration__Web__WebAdManager__JSONAdReturnedData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONAdReturnedData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_WebCallbackAdAvailable__);
    cRam_? = '\x01';
  }
  (this->fields).webReturnedAvailabilityRewardedAd = 0;
  if (ok != 0) {
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    WVar2 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_5
                      (jsonData,
                       Assets__Scripts__AdIntegration__Web__WebAdManager__JSONAdReturnedData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::Web::WebAdManager::JSONAdReturnedData>_System__String_
                      );
    (this->fields).webReturnedAvailabilityRewardedAd = WVar2.status;
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                       ((Boolean *)&(this->fields).webReturnedAvailabilityRewardedAd,
                        (MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_WebCallbackAdAvailable__,pSVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uVar1 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}


/* WebAdManager() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::WebAdManager__ctor
               (WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  (this->fields).webReturnedAvailabilityInterstitial = 1;
  (this->fields).webReturnedAvailabilityRewardedAd = 1;
  (this->fields).updateTime = -60.0;
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  uVar1 = *(undefined4 *)((int)&(TypeInfo__System__DateTime->static_fields->MinValue)._dateData + 4)
  ;
  *(int *)&(this->fields).prevInterstitialTime._dateData =
       (int)(TypeInfo__System__DateTime->static_fields->MinValue)._dateData;
  *(undefined4 *)((int)&(this->fields).prevInterstitialTime._dateData + 4) = uVar1;
  (this->fields).timeoutSuccessDelay = 0x1e;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}


/* EmbeddedSiteConfigData get_EmbeddedSiteConfig() */

EmbeddedSiteConfigData *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
WebAdManager_get_EmbeddedSiteConfig
          (EmbeddedSiteConfigData *__return_storage_ptr__,WebAdManager *this,MethodInfo *method)

{
  iVar1 = (this->fields).siteData.siteEnum;
  bVar2 = (this->fields).siteData.showTouristPromotion;
  bVar3 = (this->fields).siteData.allowsOpenInNewTab;
  bVar4 = (this->fields).siteData.allowsRedirectToWebpage;
  bVar5 = (this->fields).siteData.allowsModals;
  bVar6 = (this->fields).siteData.integratedSdk;
  bVar7 = (this->fields).siteData.allowsFallbackAds;
  bVar8 = (this->fields).siteData.showPlayButtonAd;
  bVar9 = (this->fields).siteData.hideGoldShop;
  bVar10 = (this->fields).siteData.allowInHouseAds;
  bVar11 = (this->fields).siteData.removeFullscreenButton;
  bVar12 = (this->fields).siteData.hideSignUp;
  bVar13 = (this->fields).siteData.noPlayButtonVideoIcon;
  __return_storage_ptr__->sites = (this->fields).siteData.sites;
  __return_storage_ptr__->siteEnum = iVar1;
  __return_storage_ptr__->showTouristPromotion = bVar2;
  __return_storage_ptr__->allowsOpenInNewTab = bVar3;
  __return_storage_ptr__->allowsRedirectToWebpage = bVar4;
  __return_storage_ptr__->allowsModals = bVar5;
  __return_storage_ptr__->integratedSdk = bVar6;
  __return_storage_ptr__->allowsFallbackAds = bVar7;
  __return_storage_ptr__->showPlayButtonAd = bVar8;
  __return_storage_ptr__->hideGoldShop = bVar9;
  __return_storage_ptr__->allowInHouseAds = bVar10;
  __return_storage_ptr__->removeFullscreenButton = bVar11;
  __return_storage_ptr__->hideSignUp = bVar12;
  __return_storage_ptr__->noPlayButtonVideoIcon = bVar13;
  return __return_storage_ptr__;
}


/* Boolean get_ReadyForInterstitialAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_get_ReadyForInterstitialAdRequest(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    cRam_? = '\x01';
  }
  if ((this->fields).webReturnedAvailabilityInterstitial != 0) {
    pIVar1 = (this->fields).adUIManager;
    if (pIVar1 == (IAdUIManager *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    cVar4 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar1);
    if (cVar4 == '\0') {
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      return (this->fields).interstitialTimeoutAfterRewardedAd <=
             fVar5 - (this->fields).lastSeenRewardedAd;
    }
  }
  return 0;
}


/* Boolean get_ReadyForRewardedAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
     WebAdManager_get_ReadyForRewardedAdRequest(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IAdUIManager *)&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).webReturnedAvailabilityRewardedAd == 0) {
    return 0;
  }
  pIStack_1 = (this->fields).adUIManager;
  if (pIStack_1 != (IAdUIManager *)0x0) {
    pIStack_2 = TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager;
    uStack_3 = 0;
    bVar4 = func_?();
    return bVar4 ^ 1;
  }
  pIStack_1 = (IAdUIManager *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_RewardedAdNotAvailableText(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Please_ensure_AdBlock_is_disable);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Please_ensure_AdBlock_is_disable,(MethodInfo *)0x0);
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastAd(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (d1,(DateTime)(this->fields).prevInterstitialTime._dateData,(MethodInfo *)0x0);
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iVar2 = (TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iVar2 = mscorlib.dll::System::Math::Math_Min_5(TVar1._ticks & 0xffffffff,iVar2,(MethodInfo *)0x0);
  return (TimeSpan)iVar2;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastInterstitial(WebAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (d1,(DateTime)(this->fields).prevInterstitialTime._dateData,(MethodInfo *)0x0);
  return (TimeSpan)TVar1._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Web::WebAdManager::
         WebAdManager_get_TimeSinceLastRewarded(WebAdManager *this,MethodInfo *method)

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

